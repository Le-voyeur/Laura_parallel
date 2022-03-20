
/*
Copyright 2015 University of Warwick

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
*/

/*
Laura++ package authors:
John Back
Paul Harrison
Thomas Latham
*/

#include <cstdlib>
#include <iostream>
#include <vector>

#include "TFile.h"
#include "TH2.h"
#include "TString.h"
#include "TTree.h"

#include "LauSimpleFitModel.hh"
#include "LauDaughters.hh"
#include "LauEffModel.hh"
#include "LauEFKLLMRes.hh"
#include "LauIsobarDynamics.hh"
#include "LauMagPhaseCoeffSet.hh"
#include "LauVetoes.hh"

void usage( std::ostream& out, const TString& progName )
{
	out<<"Usage:\n";
	out<<progName<<" gen [nExpt = 1] [firstExpt = 0]\n";
	out<<"or\n";
	out<<progName<<" fit <iFit> [nExpt = 1] [firstExpt = 0]"<<std::endl;
}

int main( int argc, char** argv )
{
	// Process command-line arguments
	// Usage:
	// ./GenFitEFKLLM gen [nExpt = 1] [firstExpt = 0]
	// or
	// ./GenFitEFKLLM fit <iFit> [nExpt = 1] [firstExpt = 0]
	if ( argc < 2 ) {
		usage( std::cerr, argv[0] );
		return EXIT_FAILURE;
	}

	TString command = argv[1];
	command.ToLower();
	Int_t iFit(0);
	Int_t nExpt(1);
	Int_t firstExpt(0);
	if ( command == "gen" ) {
		if ( argc > 2 ) {
			nExpt = atoi( argv[2] );
			if ( argc > 3 ) {
				firstExpt = atoi( argv[3] );
			}
		}
	} else if ( command == "fit" ) {
		if ( argc < 3 ) {
			usage( std::cerr, argv[0] );
			return EXIT_FAILURE;
		}
		iFit = atoi( argv[2] );
		if ( argc > 3 ) {
			nExpt = atoi( argv[3] );
			if ( argc > 4 ) {
				firstExpt = atoi( argv[4] );
			}
		}
	} else {
		usage( std::cerr, argv[0] );
		return EXIT_FAILURE;
	}

	// If you want to use square DP histograms for efficiency,
	// backgrounds or you just want the square DP co-ordinates
	// stored in the toy MC ntuple then set this to kTRUE
	Bool_t squareDP = kFALSE;

	// This defines the DP => decay is B0 -> D0_bar K+ pi-
	// Particle 1 = D0_bar
	// Particle 2 = K+
	// Particle 3 = pi-
	// The DP is defined in terms of m13Sq and m23Sq
	LauDaughters* daughters = new LauDaughters("B0", "D0_bar", "K+", "pi-", squareDP);

	// Define the efficiency model (defaults to unity everywhere)
	LauVetoes* vetoes = new LauVetoes();
	LauEffModel* effModel = new LauEffModel(daughters, vetoes);

	// Create the isobar model
	LauIsobarDynamics* sigModel = new LauIsobarDynamics(daughters, effModel);
	LauEFKLLMRes::setupFormFactor("usfactor.dat");

	// Add various components to the isobar model,
	// optionally allowing the masses and width to float in the fit
	LauAbsResonance* res(0);

	//addResonance arguments: resName, resPairAmpInt, resType
	res = sigModel->addResonance("kappa0",      1, LauAbsResonance::EFKLLM);
	res->setResonanceParameter("massFactor",  0.0);
	res = sigModel->addResonance("K*0_0(1430)", 1, LauAbsResonance::EFKLLM);
	res->setResonanceParameter("massFactor", -2.0);

	// Reset the maximum signal DP ASq value
	// This will be automatically adjusted to avoid bias or extreme
	// inefficiency if you get the value wrong but best to set this by
	// hand once you've found the right value through some trial and error.
	sigModel->setASqMaxValue(14.5);

	// Create the fit model
	LauSimpleFitModel* fitModel = new LauSimpleFitModel(sigModel);

	// Create the complex coefficients for the isobar model
	// Here we're using the magnitude and phase form:
	// c_j = a_j exp(i*delta_j)
	std::vector<LauAbsCoeffSet*> coeffset;
	coeffset.push_back( new LauMagPhaseCoeffSet("kappa0",      1.0, 0.0,  kTRUE,  kTRUE) );
	coeffset.push_back( new LauMagPhaseCoeffSet("K*0_0(1430)", 1.0, 0.0, kFALSE, kFALSE) );
	for (std::vector<LauAbsCoeffSet*>::iterator iter=coeffset.begin(); iter!=coeffset.end(); ++iter) {
		fitModel->setAmpCoeffSet(*iter);
	}

	// Set the signal yield and define whether it is fixed or floated
	const Double_t nSigEvents = 5000.0;
	Bool_t fixNSigEvents = kFALSE;
	LauParameter * signalEvents = new LauParameter("signalEvents", nSigEvents, -1.0*nSigEvents, 2.0*nSigEvents, fixNSigEvents);
	fitModel->setNSigEvents(signalEvents);

	// Set the number of experiments to generate or fit and which
	// experiment to start with
	fitModel->setNExpts( nExpt, firstExpt );


	// Configure various fit options

	// Switch on/off calculation of asymmetric errors.
	fitModel->useAsymmFitErrors(kFALSE);

	// Randomise initial fit values for the signal mode
	fitModel->useRandomInitFitPars(kFALSE);

	const Bool_t haveBkgnds = ( fitModel->nBkgndClasses() > 0 );

	// Switch on/off Poissonian smearing of total number of events
	fitModel->doPoissonSmearing(haveBkgnds);

	// Switch on/off Extended ML Fit option
	fitModel->doEMLFit(haveBkgnds);

	// Switch on the two-stage fit (for the resonance parameters)
	fitModel->twoStageFit(kTRUE);

	// Generate toy from the fitted parameters
	//TString fitToyFileName("fitToyMC_EFKLLM_");
	//fitToyFileName += iFit;
	//fitToyFileName += ".root";
	//fitModel->compareFitData(10, fitToyFileName);

	// Write out per-event likelihoods and sWeights
	//TString splotFileName("splot_EFKLLM_");
	//splotFileName += iFit;
	//splotFileName += ".root";
	//fitModel->writeSPlotData(splotFileName, "splot", kFALSE);

	TString dataFile("gen-EFKLLM.root");
	TString treeName("genResults");
	TString rootFileName("");
	TString tableFileName("");
	if (command == "fit") {
		rootFileName = "fitEFKLLM_"; rootFileName += iFit;
		rootFileName += "_expt_"; rootFileName += firstExpt;
		rootFileName += "-"; rootFileName += (firstExpt+nExpt-1);
		rootFileName += ".root";
		tableFileName = "fitEFKLLMResults_"; tableFileName += iFit;
	} else {
		rootFileName = "dummy.root";
		tableFileName = "genEFKLLMResults";
	}

	// Execute the generation/fit
	fitModel->run( command, dataFile, treeName, rootFileName, tableFileName );

	return EXIT_SUCCESS;
}
