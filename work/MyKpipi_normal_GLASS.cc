//1 = RBW, 2 KMatrix
#define pipi_swave 1
//1 = RBW, 2 LASS
#define Kpi_swave 1
//1 = use kmatrix
#define usekmatrix 0

#define UNUSED(x) (void)(x)  //unused parameters 
#include <cstdlib>
#include <iostream>
#include <fstream>
#include <vector>
#include<stdlib.h>
#include<time.h>
#include "TFile.h"
#include "TH2.h"
#include "TString.h"
#include "TRandom.h"
#include "TRandom3.h"
#include <iostream>
#include "Lau1DHistPdf.hh"
#include "LauArgusPdf.hh"
#include "LauBkgndDPModel.hh"
#include "LauCartesianCPCoeffSet.hh"
#include "LauMagPhaseCPCoeffSet.hh"
#include "LauCPFitModel.hh"
#include "LauDaughters.hh"
#include "LauEffModel.hh"
#include "LauGaussPdf.hh"
#include "LauIsobarDynamics.hh"
#include "LauLinearPdf.hh"
#include "LauResonanceMaker.hh"
#include "LauSumPdf.hh"
#include "LauVetoes.hh"
using namespace std;
void usage( std::ostream& out, const TString& progName )
{
  out<<"Usage:\n";
  out<<progName<<" gen [nExpt = 1] [firstExpt = 0]\n";
  out<<"or\n";
  out<<progName<<" fit <iFit> [nExpt = 1] [firstExpt = 0]"<<std::endl;
}

void addResonances(LauIsobarDynamics * model, TString resName, int int_bach,  LauAbsResonance::LauResonanceModel resType, Bool_t fix)
{

    LauAbsResonance * res;
    res = model->addResonance(resName,  int_bach, resType);
    //if(resName=="psi(1S)") res = model->addIncoherentResonance(resName, int_bach, resType);
    //else res = model->addResonance(resName,  int_bach, resType);
    if(fix) res->fixMass(fix);
    if(resName=="K*0_0(1430)") {
    res->changeResonance( 1.451353381, 0.1888286556, 0);
    res->setResonanceParameter("r", -3.454853989);//1.69506e+00);//1.65622e-01);//2.62696e+00);//2.66926);
    res->setResonanceParameter("a", 3.176204484);//4.19513e+00);//2.38054e+00);//1.91772e+00);//1.14881);
    //res->setResonanceParameter("phiF", -1.17004e-01);//-1.17658e-01);//2.27837e-01);//3.34329e-01);//2.66926);
    //res->floatResonanceParameter("a");
    //res->floatResonanceParameter("r");
    //res->floatResonanceParameter("F");
    //res->floatResonanceParameter("phiF");
    //res->floatResonanceParameter("phiS");
    res->setResonanceParameter("phiF", -5.86913e-02);
    res->setResonanceParameter("x", 6.86863e-01);
    res->setResonanceParameter("y", -2.52541e-01);
    res->setResonanceParameter("dx", 5.08455e-02);
    res->setResonanceParameter("dy", -2.80694e-04);
   // res->fixMass(kFALSE);
   // res->fixWidth(kFALSE);
   // res->SetMassGaussianCon(1.425, 0.05);
   // res->SetWidthGaussianCon(0.270, 0.08);
    
    }
    if(resName=="K*0_2(1430)"){
    res->changeResonance(1.43761e+00, 7.11045e-02, 2);
    res->fixMass(kFALSE);
    res->fixWidth(kFALSE);
    //res->SetMassGaussianCon(1.4324, 0.0013);
    //res->SetWidthGaussianCon(0.109, 0.005);
    
    }
    if(resName=="f_0(980)"){
      res->changeResonance(9.43811e-01, 0.070, 0);
      res->setResonanceParameter("g1", 1.82638e-01);//1.27811e-01);//1.95601e-01);//1.96043e-01);
      res->setResonanceParameter("g2", 5.84885e-01);//2.51240e-01);//7.40517e-01);//7.42498e-01);

      //res->floatResonanceParameter("g1");
      //res->floatResonanceParameter("g2");
      //res->setResonanceParameter("g1", 2.16271e-01);//1.88936e-01);//1.88851e-01);//3.32849e-01);//2.15370e-01);//1.96043e-01);
      //res->setResonanceParameter("g2", 7.72982e-01);//6.81657e-01);//6.79517e-01);//1.23026e+00);//8.40340e-01);//7.42498e-01);
      //res->fixMass(kFALSE);
      //res->fixWidth(kFALSE);
      
    }
    //if(resName=="psi(1S)"){
    //////res->changeResonance(3.0969, 1.37708e-02, 1);
    //res->changeResonance(3.0969, 7.11516e-03, 1);
    ////res->fixWidth(kFALSE);
    //}
    if(resName=="K*0(892)"){
    res->changeResonance(8.94334e-01, 4.56884e-02, 1);
    //res->changeResonance(0.884, 8.08024e-02, 1);
    //res->fixMass(kFALSE);
    //res->fixWidth(kFALSE);
    }
    if(resName=="sigma0"){
      //res->changeResonance(7.62188e-01, 1.51310e-02,0);
      //res->fixMass(kFALSE);
      //res->fixWidth(kFALSE);
    }

  if(resName=="rho0(770)"){
    res->setResonanceParameter("magB", 2.30714e+00);//2.31148e+00);//3.53432e+00);//1.93685e+00);
    res->setResonanceParameter("phiB", 2.38488e-01);//2.26762e-01);//5.09999e-01);//3.15462e-02);
    //res->floatResonanceParameter("magB");
    //res->floatResonanceParameter("phiB");
    //
    //res->fixMass(kFALSE);
    //res->fixWidth(kFALSE);

    res->setResonanceParameter("MASS", 7.61277e-01);//7.74852e-01);//7.76841e-01);
    res->setResonanceParameter("WIDTH", 1.42892e-01);//1.51220e-01);//1.47697e-01);


    }
    if(resName=="rho0(770)_COPY"){
    res->setResonanceParameter("magB",  9.29338e-01);//1.88578e+00);//1.40753e+00);//2.36948e+00);
    res->setResonanceParameter("phiB",  6.96562e+00);//6.79489e+00);//3.51631e+00);//1.81441e+00);
    //res->floatResonanceParameter("magB");
    //res->floatResonanceParameter("phiB");
    //
    //res->fixMass(kFALSE);
    //res->fixWidth(kFALSE);


    }

    

    if(resName=="f_2(1270)"){
      res->changeResonance(1.27293e+00, 1.84508e-01, 2);
      //res->fixMass(kFALSE);
      //res->fixWidth(kFALSE);
    }
    
    if(resName=="f_0(1370)"){
      //res->changeResonance(1.27293e+00, 1.84508e-01, 2);
      //res->fixMass(kFALSE);
      //res->fixWidth(kFALSE);
    }
    

    if(resName=="rho0(1450)"){
    //res->changeResonance(1.48951e+00, 8.79302e-02, 1);
      //res->fixMass(kFALSE);
      //res->fixWidth(kFALSE);
    }
    if(resName=="f'_2(1525)"){
    //res->changeResonance(1.48201e+00, 8.47963e-02, 2);
    //res->fixMass(kFALSE);
    //res->fixWidth(kFALSE);
    }
    if(resName=="chi_c0"){
      res->changeResonance(3.41514e+00, 1.85583e-02,0);//1.52624e+00, 1.07000e-01,0);//1.86632e+00, 3.27000e-01, 2);
      //res->fixMass(kFALSE);
      //res->fixWidth(kFALSE);
    }
    //if(resName=="K*0(1410)"){
    ////res->fixMass(kFALSE);
    ////res->fixWidth(kFALSE);
    //res->setResonanceParameter("a", 4.91);  //3.34043
    //res->setResonanceParameter("r", 0.80);  //5.74043
    ////res->changeResonance(1.898, 0.128064, 0);
    //
    //}
    //res = model->addResonance("K*0(892)",  2, LauAbsResonance::RelBW);
    //res = model->addResonance("K*0_2(1430)", 2, LauAbsResonance::RelBW);
    
	//S-wave
#if Kpi_swave == 1
    //res =   model->addResonance("K*0_0(1430)", 2, LauAbsResonance::LASS);
    //res =   model->addResonance("K*0_0(1430)", 2, LauAbsResonance::RelBW);
    //res->setResonanceParameter("a", 5.740);
    //res->setResonanceParameter("r", 3.334);
#endif
        
    //res = model->addResonance("rho0(770)", 1, LauAbsResonance::RhoOmegaMix_GS);
    //res->fixMass(kTRUE);
    //res->fixWidth(kTRUE);
    //res->setResonanceParameter("MASS", 7.66746E-01);
    //res->setResonanceParameter("WIDTH", 1.47343E-01);
    
    
    //res = model->addResonance("f_2(1270)",  1, LauAbsResonance::RelBW);
    //res = model->addResonance("chi_c0",  1, LauAbsResonance::RelBW);
    //res = model->addResonance("psi(1S)",  1, LauAbsResonance::RelBW);
    //res->fixMass(kTRUE);

    //s-wave

#if pipi_swave == 1
    //res = model->addResonance("omega(782)",  1, LauAbsResonance::RhoOmegaMix_GS);
    //res = model->addResonance("f_0(980)",  1, LauAbsResonance::Flatte);
    //res = model->addResonance("f'_0(1300)",  1, LauAbsResonance::RelBW);
    //res = model->addResonance("NonReson",    1, LauAbsResonance::FlatNR);
#endif
// Define the "S-wave" K-matrix propagator
#if usekmatrix == 1
    Int_t nChannels = 5;
    Int_t nPoles = 5;
    Int_t resPairInt = 2;
    Int_t KMatrixIndex = 1; // for S-wave

    model->defineKMatrixPropagator("KMSWave", "B3piKMatrixCoeff.dat", resPairInt,
                                   nChannels, nPoles, KMatrixIndex);
    
    model->addKMatrixProdPole("KMPole1", "KMSWave", 1);
    model->addKMatrixProdPole("KMPole2", "KMSWave", 2);
    model->addKMatrixProdPole("KMPole3", "KMSWave", 3);
    model->addKMatrixProdPole("KMPole4", "KMSWave", 4);
    model->addKMatrixProdPole("KMPole5", "KMSWave", 5);
    
    model->addKMatrixProdSVP("KMSVP1", "KMSWave", 1);
    model->addKMatrixProdSVP("KMSVP2", "KMSWave", 2);
    model->addKMatrixProdSVP("KMSVP3", "KMSWave", 3);
    model->addKMatrixProdSVP("KMSVP4", "KMSWave", 4);
#endif

}

void addTotResonances(LauIsobarDynamics* Model){
  //addResonances(Model,  "K*0_4(2045)", 2, LauAbsResonance::RelBW, kFALSE);
  addResonances(Model,  "rho0(770)", 3, LauAbsResonance::RhoOmegaMix_GS, kFALSE);
  addResonances(Model,  "rho0(770)_COPY", 3, LauAbsResonance::RhoOmegaMix_GS, kFALSE);
  addResonances(Model,  "f_2(1270)",  3, LauAbsResonance::RelBW, kFALSE);
  addResonances(Model, "chi_c0",  3, LauAbsResonance::RelBW, kFALSE);
  //addResonances(Model,  "omega(782)",  1, LauAbsResonance::RelBW, kFALSE);
  addResonances(Model, "f_0(980)",  3, LauAbsResonance::Flatte, kFALSE);
  addResonances(Model,  "f_0(1370)",  3, LauAbsResonance::RelBW, kFALSE);
  //addResonances(Model, "f'_0(1300)",  1, LauAbsResonance::RelBW, kFALSE);
  //addResonances(Model, "NonReson",    1, LauAbsResonance::FlatNR, kFALSE);
  addResonances(Model,  "f_0(1500)",  3, LauAbsResonance::RelBW, kFALSE);
  addResonances(Model,  "f'_2(1525)",  3, LauAbsResonance::RelBW, kFALSE);
  addResonances(Model,  "rho0(1450)",  3, LauAbsResonance::RelBW, kFALSE);
  //addResonances(Model,  "rho0_3(1990)",  3, LauAbsResonance::RelBW, kFALSE);
  //addResonances(Model,  "sigma0",    3, LauAbsResonance::Bugg, kFALSE);
  addResonances(Model,  "K*0(892)", 1, LauAbsResonance::RelBW, kFALSE);
  addResonances(Model,  "K*0_2(1430)", 1, LauAbsResonance::RelBW, kFALSE);
  addResonances(Model,  "K*0_0(1430)", 1, LauAbsResonance::LASS_BW, kFALSE);
  addResonances(Model,  "LASSNR0", 1, LauAbsResonance::LASS_NR, kFALSE);
  addResonances(Model,  "K*0(1410)", 1, LauAbsResonance::RelBW, kFALSE);
  addResonances(Model,  "K*0(1680)", 1, LauAbsResonance::RelBW, kFALSE);
  //addResonances(Model,  "K*0_0(1950)", 2, LauAbsResonance::RelBW, kFALSE);
  addResonances(Model,  "K*0_3(1780)", 1, LauAbsResonance::RelBW, kFALSE);
  //addResonances(Model,  "f_0(1710)",  1, LauAbsResonance::RelBW, kFALSE);
  //addResonances(Model,  "f_0(2020)",  1, LauAbsResonance::RelBW, kFALSE);
  //addResonances(Model,  "psi(1S)",  1, LauAbsResonance::GaussIncoh, kFALSE);
}

std::vector<LauAbsCoeffSet*> addCoeffs()
{ 
  bool fixCP = false;

  std::vector<LauAbsCoeffSet*> coeffSetAll;
  coeffSetAll.push_back(new LauMagPhaseCPCoeffSet("rho0(770)" ,  1., 0., 0., 0., kTRUE, kTRUE, kTRUE, kTRUE));
  coeffSetAll.push_back(new LauMagPhaseCPCoeffSet("rho0(770)_COPY", 0., 0., 1.03143, 0, kTRUE, kTRUE, kFALSE, kTRUE));
  //coeffSetAll.push_back(new LauCartesianCPCoeffSet("rho0(770)" , 0.511, -0.050, -0.046, 0.642, kFALSE, kFALSE, fixCP, fixCP));
  coeffSetAll.push_back(new LauCartesianCPCoeffSet("f_2(1270)", -0.261, 0.132, -0.062, 8.174e-03, kFALSE, kFALSE, fixCP, fixCP));
  coeffSetAll.push_back(new LauCartesianCPCoeffSet("chi_c0", -0.248, 0.253, -0.051, -0.031, kFALSE, kFALSE, fixCP, fixCP));
  //coeffSetAll.push_back(new LauCartesianCPCoeffSet("psi(1S)", -8.513e-03, -0.044, -4.886e-03, 1.776e-03,kFALSE, kFALSE, fixCP, fixCP));
#if pipi_swave == 1
  //coeffSetAll.push_back(new LauCartesianCPCoeffSet("omega(782)", -0.00717, 0.044, 0, 0, kFALSE, kFALSE, kFALSE, kFALSE));
  coeffSetAll.push_back(new LauCartesianCPCoeffSet("f_0(980)", -0.050, 1.245, -0.330, 0.035, kFALSE, kFALSE, fixCP, fixCP));
  //coeffSetAll.push_back(new LauCartesianCPCoeffSet("f'_0(1300)", -0.144, -0.402, 0.299, -0.477, kFALSE, kFALSE, fixCP, fixCP));
  coeffSetAll.push_back(new LauCartesianCPCoeffSet("f_0(1370)", -0.261, 0.132, -0.062, 8.174e-03, kFALSE, kFALSE, fixCP, fixCP));
  //coeffSetAll.push_back(new LauCartesianCPCoeffSet("NonReson", -0.587, 0.359,0.0,0.0, kFALSE, kFALSE, kTRUE, kTRUE));
  coeffSetAll.push_back(new LauCartesianCPCoeffSet("f_0(1500)", -0.050, 0.245, -0.330, 0.035, kFALSE, kFALSE, fixCP, fixCP));
  coeffSetAll.push_back(new LauCartesianCPCoeffSet("f'_2(1525)", -0.050, 0.245, -0.330, 0.035, kFALSE, kFALSE, fixCP, fixCP));
  coeffSetAll.push_back(new LauCartesianCPCoeffSet("rho0(1450)", -0.050, 0.245, -0.330, 0.035, kFALSE, kFALSE, fixCP, fixCP));
  //coeffSetAll.push_back(new LauCartesianCPCoeffSet("sigma0", -0.587, 0.359,0.4,0.4, kFALSE, kFALSE, fixCP, fixCP));
  coeffSetAll.push_back(new LauCartesianCPCoeffSet("K*0(892)", 1.00, 0.00, 0.011, 0.0, kFALSE, kFALSE, fixCP, kFALSE));//Babar
  coeffSetAll.push_back(new LauCartesianCPCoeffSet("K*0_2(1430)", -0.215, 0.419, -0.120, -0.053, kFALSE, kFALSE, fixCP, fixCP));//babar

#if Kpi_swave == 1
  coeffSetAll.push_back(new LauCartesianCPCoeffSet("K*0_0(1430)", 1.808, -0.622, 0.073, 0.433, kFALSE, kFALSE, fixCP, fixCP));//babar
  coeffSetAll.push_back(new LauCartesianCPCoeffSet("LASSNR0", 1.808, -0.622, 0.073, 0.433, kFALSE, kFALSE, fixCP, fixCP));//babar
#endif
  coeffSetAll.push_back(new LauCartesianCPCoeffSet("K*0(1410)", 0.855, -0.828, -0.159, -0.371, kFALSE, kFALSE, fixCP, fixCP));
  coeffSetAll.push_back(new LauCartesianCPCoeffSet("K*0(1680)", 0.855, -0.828, -0.159, -0.371, kFALSE, kFALSE, fixCP, fixCP));
  //coeffSetAll.push_back(new LauCartesianCPCoeffSet("K*0_0(1950)", 0.855, -0.828, -0.159, -0.371, kFALSE, kFALSE, fixCP, fixCP));
  coeffSetAll.push_back(new LauCartesianCPCoeffSet("K*0_3(1780)", 0.855, -0.828, -0.159, -0.371, kFALSE, kFALSE, fixCP, fixCP));
  //coeffSetAll.push_back(new LauCartesianCPCoeffSet("K*0_4(2045)", 0.855, -0.828, -0.159, -0.371, kFALSE, kFALSE, fixCP, fixCP));
  //
  //coeffSetAll.push_back(new LauCartesianCPCoeffSet("f_0(1710)", -0.587, 0.359,0.4,0.4, kFALSE, kFALSE, fixCP, fixCP));
  //coeffSetAll.push_back(new LauCartesianCPCoeffSet("f_0(2020)", -0.587, 0.359,0.4,0.4, kFALSE, kFALSE, fixCP, fixCP));
#endif
  //coeffSetAll.push_back(new LauCartesianCPCoeffSet("psi(1S)", -0.211, 0.0, -4.886e-03, 0, kFALSE, kTRUE, fixCP, kTRUE));
  
    return coeffSetAll;


}

int main( int argc, char** argv )
{
  // Process command-line arguments
  // Usage:
  // ./GenFitKpipi gen [nExpt = 1] [firstExpt = 0]
  // or
  // ./GenFitKpipi fit <iFit> [nExpt = 1] [firstExpt = 0]
  if ( argc < 2 ) {
    usage( std::cerr, argv[0] );
    return EXIT_FAILURE;
  }
  
  TString command = argv[1];
  TString indi_compo; 
  TString shape;
  command.ToLower();
  Int_t iFit(0);
  Int_t nExpt(1);
  Int_t firstExpt(0);
  Int_t int_bach(2);

  TString iFitStr;

  if ( command == "gen" ) {
    if ( argc > 2 ) {
      nExpt = atoi( argv[2] );
      if ( argc > 3 ) {
        firstExpt = atoi( argv[3] );
        if (argc > 4 ){ indi_compo = argv[4];
          if (argc > 5 ) {shape = argv[5];
            if (argc > 6 ) int_bach = atoi(argv[6]);  
          }
        }
      }
    }
}else{
    if ( command == "fit" ) {
      if ( argc < 3 ) {
	usage( std::cerr, argv[0] );
	return EXIT_FAILURE;
      }
      iFit = atoi( argv[2] );
      iFitStr.Form("%d", iFit);
      if ( argc > 3 ) {
	nExpt = atoi( argv[3] );
	if ( argc > 4 ) {
	  firstExpt = atoi( argv[4] );
	}
      }
    } else {
      if ( command == "weight" ) {
	if ( argc > 2 ) {
	  nExpt = atoi( argv[2] );
	  if ( argc > 3 ) {
	    firstExpt = atoi( argv[3] );
	  }
	}else{
	  usage( std::cerr, argv[0] );
	  return EXIT_FAILURE;
	}
      }
    }
  }

LauAbsResonance::LauResonanceModel model_shape;
if(shape=="RelBW") model_shape = LauAbsResonance::RelBW;
if(shape=="BW") model_shape = LauAbsResonance::BW;
if(shape=="LASS_BW") model_shape = LauAbsResonance::LASS_BW;
if(shape=="LASS_NR") model_shape = LauAbsResonance::LASS_NR;
if(shape=="RhoOmegaMix_GS") model_shape = LauAbsResonance::RhoOmegaMix_GS;
if(shape=="GS") model_shape = LauAbsResonance::GS;
if(shape=="Dabba") model_shape = LauAbsResonance::Dabba;
if(shape=="Flatte") model_shape = LauAbsResonance::Flatte;
if(shape=="FlatNR") model_shape = LauAbsResonance::FlatNR;
if(shape=="GaussIncoh") model_shape = LauAbsResonance::GaussIncoh;


  // If you want to use square DP histograms for efficiency,
  // backgrounds or you just want the square DP co-ordinates
  // stored in the toy MC ntuple then set this to kTRUE
  const Bool_t squareDP = kTRUE;

  // Set this to kFALSE if you want to remove the DP from the fit
  const Bool_t doDP = kTRUE;

  // Set this to kTRUE if you want to fix the CPV parameters
  const Bool_t doTwoStageFit = kTRUE;
  //const Bool_t doTwoStageFit = kFALSE;

  // General histogram booleans
  const Bool_t useInterpolation = kFALSE;
  const Bool_t fluctuateBins = kFALSE;    ////////////////////////what does it mean here
  const Bool_t useUpperHalfOnly = kFALSE;

  const Double_t nSigEvents = 19455.8;    ///////////////////////I need to change number here
  const Bool_t fixNSigEvents = kTRUE;   //////////////////////I guess I should set it to kTRUE
  const Double_t nbkg_comb = 1423.9;//2446.9;//1800.71;//3210.86;//4544.4;     /////////////////////set numbers, total background?
  const Double_t nbkg_pipipi = 380.0;//1911.72;//1467.4;//107.309;//1247.03;//904.773;//1255;
  const Double_t nbkg_KpiK = 58.3;//230.4;//279.688;//636.773;//163.998;//904.773;//540;
  const Double_t nbkg_Ketap = 356.3;//199.6;//162.922;//187.01;//60.1715;//214;//191.447;  
  
  //const Double_t nbkg_comb = 0;//3210.86;//4544.4;     /////////////////////set numbers, total background?
  //const Double_t nbkg_pipipi = 0;//1247.03;//904.773;//1255;
  //const Double_t nbkg_KpiK = 0;//636.773;//163.998;//904.773;//540;
  //const Double_t nbkg_Ketap = 0;//187.01;//60.1715;//214;//191.447;  
  const Bool_t fixNBgEvents = kTRUE;    ////////////////////should also be kTRUE?



  // Signal and continuum asymmetries
  // NB the signal asymmetry value here is only used if the DP is NOT
  // in the fit, otherwise the asymmetry is included within the
  // isobar model.
  const Double_t sigAsym = 0.028;
  const Bool_t fixSigAsym = kFALSE;
 
  //B- - B+ 
  const Double_t Asym_comb = -0.018;         //////////////////I should try to see how to set background model
  const Double_t Asym_pipipi = 0.0;
  const Double_t Asym_KpiK = 0.0;
  const Double_t Asym_Ketap = 0.0;
  const Bool_t fixBgAsym = kTRUE;

  // Define the DP (for both B+ and B- candidates)
  LauDaughters* negDaughters = new LauDaughters("B-", "pi-", "pi+", "K-", squareDP);
  LauDaughters* posDaughters = new LauDaughters("B+", "pi+", "pi-", "K+", squareDP);

  // Add some vetoes
  LauVetoes* vetoes = new LauVetoes();
  const Double_t D_KpiMin  = 1.750;
  const Double_t D_KpiMax  = 1.950;
  const Double_t D_pipiMin = 1.750;
  const Double_t D_pipiMax = 1.900;
  const Double_t JpsiMin   = 3.050;
  const Double_t JpsiMax   = 3.150;
  //I did not find any psi(2s) contribution here
  vetoes->addMassVeto(1, D_KpiMin, D_KpiMax); // D0 veto, m13
  vetoes->addMassVeto(3, D_pipiMin, D_pipiMax); // D0 veto, m23
  vetoes->addMassVeto(3, JpsiMin, JpsiMax); // J/psi veto, m23

  // Create the efficiency models
  //TFile* effHistoFile = TFile::Open("/data1/user/yangyh/work/Data/map_eff/Hist_Eff_TOSorTIS-50_effi_L0-L0_corr-overlap-tightPIDBigger.root", "read");
  TFile* effHistoFile = TFile::Open("/data3/user/yangyh/helicity/butokppippimaman/AmAnFit_rhoomega/dat/EffiHistSplineBDT0_0_cubic.root", "read");
  //TFile* effHistoFile = TFile::Open(" /data1/user/yangyh/work/Data/TIS/map_eff/Hist_Eff_TIS-TPoly-Veto_1750-tightPIDBigger1650c23.root","read"); //1650 veto 26*25bin Poly
  //TFile* effHistoFile = TFile::Open("/data1/user/yangyh/work/Data/TIS/map_eff/Hist_Eff_TIS-50-tightPID.root", "read");
    //LauFunEffModel* negEffModel = new LauFunEffModel(negDaughters, vetoes, -1.03977e-01, 0, 0, 0, 8.69836e-02, 0, 0, -8.28219e-01);
  LauEffModel* negEffModel = new LauEffModel(negDaughters, vetoes);
  TString negEffHistoName("hInt_neg");
  TH2* negEffHisto = dynamic_cast<TH2*>(effHistoFile->Get(negEffHistoName));
  negEffModel->setEffHisto(negEffHisto, useInterpolation, fluctuateBins, 0.0, 0.0, useUpperHalfOnly, squareDP);
  //negEffModel->setEffPolyHisto(negEffHisto, useInterpolation, fluctuateBins, 0.0, 0.0, useUpperHalfOnly, squareDP, useTH2Poly);

  //LauFunEffModel* posEffModel = new LauFunEffModel(posDaughters, vetoes, -1.03977e-01, 0, 0, 0, 8.69836e-02, 0, 0, -8.28219e-01);
  LauEffModel* posEffModel = new LauEffModel(posDaughters, vetoes);
  TString posEffHistoName("hInt_pos");
  TH2* posEffHisto = dynamic_cast<TH2*>(effHistoFile->Get(posEffHistoName));
  posEffModel->setEffHisto(posEffHisto, useInterpolation, fluctuateBins, 0.0, 0.0, useUpperHalfOnly, squareDP);
  //posEffModel->setEffPolyHisto(posEffHisto, useInterpolation, fluctuateBins, 0.0, 0.0, useUpperHalfOnly, squareDP, useTH2Poly);


  // Create the signal dynamics
  LauResonanceMaker& resMaker = LauResonanceMaker::get();
  //resMaker.setSpinFormalism ( LauAbsResonance :: Legendre );
  resMaker.setSpinFormalism ( LauAbsResonance :: Zemach_P );
  resMaker.setDefaultBWRadius( LauBlattWeisskopfFactor::Parent,     4.0 );
  resMaker.setDefaultBWRadius( LauBlattWeisskopfFactor::Kstar,      4.0 );
  resMaker.setDefaultBWRadius( LauBlattWeisskopfFactor::Light,      4.0 );
  resMaker.setDefaultBWRadius( LauBlattWeisskopfFactor::Charmonium, 4.0 );
  
  LauIsobarDynamics* negSigModel = new LauIsobarDynamics(negDaughters, negEffModel);
  negSigModel->setASqMaxValue(0.012);
  negSigModel->setIntFileName("normal_JVeto_GLASS_integ_neg.dat"); //name of the resonance; an interger that specifies which of the daughter is the bachelor particle, and hence in which invariant mass spectrum this resonance will appear (1 for m23, 2 for m13, 3 for m12 or 0 for some nonresonant models); an enumeration to select the form of the dynamical amplitude
  //addResonances(negSigModel);
    if(indi_compo=="all"||command=="fit") addTotResonances(negSigModel);
  else {
    addResonances(negSigModel, indi_compo, int_bach,  model_shape, kFALSE);
  }


  LauIsobarDynamics* posSigModel = new LauIsobarDynamics(posDaughters, posEffModel);
  posSigModel->setASqMaxValue(0.012);
  posSigModel->setIntFileName("normal_JVeto_GLASS_integ_pos.dat");
  //addResonances(posSigModel);

  if(indi_compo=="all"||command=="fit") addTotResonances(posSigModel);
  else {
    addResonances(posSigModel, indi_compo, int_bach, model_shape, kFALSE);
  }

  // Create the fit model, passing it the two signal dynamics models
  LauCPFitModel* fitModel = new LauCPFitModel(negSigModel,posSigModel);
  fitModel->useDP(doDP);

  // Set isobar coefficients - taken from Phys.Rev.D78:012004,2008
  std::vector<LauAbsCoeffSet*> coeffset = addCoeffs();
  Int_t N_comp = coeffset.size();
    char frandName[500];
    sprintf(frandName, "logs/rand_normal.dat");
    ofstream frand(frandName, ios::app);
   // double rhoMin = -1.5, phiMin = -3.1415926, rhoMax = 1.5, phiMax = 3.1415926;
   // srand((unsigned)time(NULL));
   // double seed = time(0);
   // TRandom3 *r3 = new TRandom3();
   // r3->SetSeed(seed);
    
	  TString name_com[40];
    Double_t para_tot[40][4];
    Double_t para_indivi[40][4]; 
    ifstream  parameter_fit;
    parameter_fit.open("outFiles/KpipiFit_normal_TIS_JVeto_LASS/NominalNewBaseline/components/fitResults_mapNominalNewBaseline_0_0Expt.dat", ios::in);
    //parameter_fit.open("outFiles/KpipiFit_normal/NominalNewBaseline/components/fitResults_NominalNewBaseline_0_0Expt_part_m13.dat", ios::in);
    for(Int_t i=0; i<N_comp; i++){
      parameter_fit>>name_com[i];
      for(Int_t j=0; j<4;j++) parameter_fit>>para_indivi[i][j];
    } 
    frand << endl;
   
    //Double_t x=0, y=0, dx=0, dy=0;
    //if(command=="gen"){
    for(Int_t i=0;i<N_comp;i++) {
      para_tot[i][0]=para_indivi[i][0];
      para_tot[i][1]=para_indivi[i][1];
      para_tot[i][2]=para_indivi[i][2];
      para_tot[i][3]=para_indivi[i][3];        
      //if(name_com[i]==indi_compo) {
      //  x=para_indivi[i][0];
      //  dx=para_indivi[i][1];
      //  y=para_indivi[i][2];
      //  dy=para_indivi[i][3];
      //  }
      }
    //}
    int i_com=0;
    std::vector<LauParameter*> par;
    for (std::vector<LauAbsCoeffSet*>::iterator iter=coeffset.begin(); iter!=coeffset.end(); ++iter) {
      Double_t AA, BB, AAb, BBb;
    //if(command=="gen"&&indi_compo=="all"){
      AA = para_tot[i_com][0] + para_tot[i_com][2];
      BB = para_tot[i_com][1] + para_tot[i_com][3];
      AAb= para_tot[i_com][0] - para_tot[i_com][2];
      BBb= para_tot[i_com][1] - para_tot[i_com][3];
    //};
      cout<<"AA "<<AA<<" BB "<<BB <<" AAb "<<AAb<<"  BBb "<<BBb<<endl;
      string::size_type idx1, idx2;
      string b1 = "rho";
      string a1 = (string)iter[0]->name();
      idx1=a1.find(b1);//在a中查找b.
      
      //if(idx == string::npos)//不存在。
      if(idx1 != string::npos){
        iter[0]->setCoeffValues(LauComplex(para_tot[i_com][0], para_tot[i_com][1]), LauComplex(para_tot[i_com][2],para_tot[i_com][3]), kTRUE); 
        cout<<"going into rho"<<endl;
      }
      else iter[0]->setCoeffValues(LauComplex(AA, BB), LauComplex(AAb, BBb), kTRUE);
      i_com++;  
      //if(!((command=="gen")&&(indi_compo!=iter[0]->name()||indi_compo!="all"))) continue;
      if(command=="fit") fitModel->setAmpCoeffSet(*iter);
      if(command=="gen"){
      if(indi_compo=="all"||indi_compo==iter[0]->name()) fitModel->setAmpCoeffSet(*iter);
      else continue; 
     }
      std::cout<<"indi_compo:  "<<indi_compo<<" iter[0]->name():  "<<iter[0]->name()<<std::endl;
     //iter[0]->finaliseValues();
    //fitModel->setAmpCoeffSet(*iter);
    std::cout << " ========================/ leave loop /============================ " << std::endl;
  }
//frand << endl;
  std::cout<<"My Kpipi:  "<<__LINE__<<std::endl;
  // Set the number of signal events and the number of experiments
  LauParameter * signalEvents = new LauParameter("signalEvents",nSigEvents,-1.0*nSigEvents,2.0*nSigEvents,fixNSigEvents);
  LauParameter * signalAsym = new LauParameter("signalAsym",sigAsym,-1.0,1.0,fixSigAsym);

  fitModel->setNSigEvents(signalEvents, signalAsym);
  fitModel->setNExpts(nExpt, firstExpt);

  std::cout<<"My Kpipi:  "<<__LINE__<<std::endl;
  std::vector<TString> bkgndNames(4);
  bkgndNames[0] = "comb";
  //bkgndNames[1] = "KKpi";
  bkgndNames[1] = "pipipi";
  bkgndNames[2] = "KpiK";
  bkgndNames[3] = "Ketap";
  //bkgndNames[4] = "D0pi_KK";
  //bkgndNames[5] = "D0pi_pipi";
  //bkgndNames[6] = "D0pi_pipipi0";
  fitModel->setBkgndClassNames( bkgndNames );
  
  // Get the histogram for correcting the other histograms for the
  //comb
  //TFile* CombFile = TFile::Open("/data1/user/yangyh/work/Data/comb/Hist_Comb_25.root", "read");
  //TFile* CombFile = TFile::Open("/data1/user/yangyh/work/Data/TOS/comb/Hist_comb.root", "read");
  TFile* CombFile = TFile::Open("/data3/user/yangyh/helicity/butokppippimaman/AmAnFit_rhoomega/dat/HistcombSplineBDT0_0_cubic.root", "read");
  //TH2* neg_comb = dynamic_cast<TH2*>(CombFile->Get("h_ref_neg"));
  TH2* neg_comb = dynamic_cast<TH2*>(CombFile->Get("hInt_neg;1"));
  LauBkgndDPModel* neg_comb_model= new LauBkgndDPModel(negDaughters, vetoes);
  neg_comb_model->setBkgndHisto( neg_comb, useInterpolation, fluctuateBins, useUpperHalfOnly, squareDP );
  //TH2* pos_comb = dynamic_cast<TH2*>(CombFile->Get("h_ref_pos"));
  TH2* pos_comb = dynamic_cast<TH2*>(CombFile->Get("hInt_pos;1"));
  LauBkgndDPModel* pos_comb_model= new LauBkgndDPModel(posDaughters, vetoes);
  pos_comb_model->setBkgndHisto( pos_comb, useInterpolation, fluctuateBins, useUpperHalfOnly, squareDP );

  LauParameter* Lau_comb_event = new LauParameter("comb",nbkg_comb,-1.0*nbkg_comb,2.0*nbkg_comb,fixNBgEvents);
  LauParameter* Lau_comb_asym = new LauParameter("comb",Asym_comb,-1.0,1.0,fixBgAsym);

  fitModel->setNBkgndEvents( Lau_comb_event, Lau_comb_asym );
  fitModel->setBkgndDPModels( "comb", neg_comb_model, pos_comb_model );

  TFile* pipipiFile = TFile::Open("/data3/user/yangyh/helicity/butokppippimaman/AmAnFit_rhoomega/dat/HistpipipiSplineBDT0_0_cubic.root", "read");
  TH2* neg_pipipi = dynamic_cast<TH2*>(pipipiFile->Get("hInt_neg"));
  LauBkgndDPModel* neg_pipipi_model= new LauBkgndDPModel(negDaughters, vetoes);
  neg_pipipi_model->setBkgndHisto( neg_pipipi, useInterpolation, fluctuateBins, useUpperHalfOnly, squareDP );
  TH2* pos_pipipi = dynamic_cast<TH2*>(pipipiFile->Get("hInt_pos"));
  LauBkgndDPModel* pos_pipipi_model= new LauBkgndDPModel(posDaughters, vetoes);
  pos_pipipi_model->setBkgndHisto( pos_pipipi, useInterpolation, fluctuateBins, useUpperHalfOnly, squareDP );

  LauParameter* Lau_pipipi_event = new LauParameter("pipipi",nbkg_pipipi,-1.0*nbkg_pipipi,2.0*nbkg_pipipi,fixNBgEvents);
  LauParameter* Lau_pipipi_asym = new LauParameter("pipipi",Asym_pipipi,-1.0,1.0,fixBgAsym);

  fitModel->setNBkgndEvents( Lau_pipipi_event, Lau_pipipi_asym );
  fitModel->setBkgndDPModels( "pipipi", neg_pipipi_model, pos_pipipi_model );
  
  //TFile* KpiKFile = TFile::Open("/data1/user/yangyh/work/Data/TOS/KpiK/Hist_KpiK_JVeto_reverse.root");
  TFile* KpiKFile = TFile::Open("/data3/user/yangyh/helicity/butokppippimaman/AmAnFit_rhoomega/dat/HistKpiKSplineBDT0_0_cubic.root");
  TH2* neg_KpiK = dynamic_cast<TH2*>(KpiKFile->Get("hInt_neg"));
  LauBkgndDPModel* neg_KpiK_model= new LauBkgndDPModel(negDaughters, vetoes);
  neg_KpiK_model->setBkgndHisto( neg_KpiK, useInterpolation, fluctuateBins, useUpperHalfOnly, squareDP );
  TH2* pos_KpiK = dynamic_cast<TH2*>(KpiKFile->Get("hInt_pos"));
  LauBkgndDPModel* pos_KpiK_model= new LauBkgndDPModel(posDaughters, vetoes);
  pos_KpiK_model->setBkgndHisto( pos_KpiK, useInterpolation, fluctuateBins, useUpperHalfOnly, squareDP );
  
  LauParameter* Lau_KpiK_event = new LauParameter("KpiK",nbkg_KpiK,-1.0*nbkg_KpiK,2.0*nbkg_KpiK,fixNBgEvents);
  LauParameter* Lau_KpiK_asym = new LauParameter("KpiK",Asym_KpiK,-1.0,1.0,fixBgAsym);
  
  fitModel->setNBkgndEvents( Lau_KpiK_event, Lau_KpiK_asym );
  fitModel->setBkgndDPModels( "KpiK", neg_KpiK_model, pos_KpiK_model );

  //TFile* KetapFile = TFile::Open("/data1/user/yangyh/work/Data/TOS/Ketap/Hist_Ketap_25_weight_JVeto_reverse.root", "read");
  TFile* KetapFile = TFile::Open("/data3/user/yangyh/helicity/butokppippimaman/AmAnFit_rhoomega/dat/HistKetapSplineBDT0_0_cubic.root", "read");
  //TFile* KetapFile = TFile::Open("/home/yangyh/work/Data/Ketap/Hist_Ketap_25.root", "read");
  TH2* neg_Ketap = dynamic_cast<TH2*>(KetapFile->Get("hInt_neg"));
  LauBkgndDPModel* neg_Ketap_model= new LauBkgndDPModel(negDaughters, vetoes);
  neg_Ketap_model->setBkgndHisto( neg_Ketap, useInterpolation, fluctuateBins, useUpperHalfOnly, squareDP );
  TH2* pos_Ketap = dynamic_cast<TH2*>(KetapFile->Get("hInt_pos"));
  LauBkgndDPModel* pos_Ketap_model= new LauBkgndDPModel(posDaughters, vetoes);
  pos_Ketap_model->setBkgndHisto( pos_Ketap, useInterpolation, fluctuateBins, useUpperHalfOnly, squareDP );
  std::cout<<"My Kpipi:  "<<__LINE__<<std::endl;

  LauParameter* Lau_Ketap_event = new LauParameter("Ketap",nbkg_Ketap,-1.0*nbkg_Ketap,2.0*nbkg_Ketap,fixNBgEvents);
  LauParameter* Lau_Ketap_asym = new LauParameter("Ketap",Asym_Ketap,-1.0,1.0,fixBgAsym);

  fitModel->setNBkgndEvents( Lau_Ketap_event, Lau_Ketap_asym );
  fitModel->setBkgndDPModels( "Ketap", neg_Ketap_model, pos_Ketap_model );


  // Do not calculate asymmetric errors.
  fitModel->useAsymmFitErrors(kTRUE);

  // Randomise initial fit values for the signal isobar parameters
  fitModel->useRandomInitFitPars(kFALSE);
  
  // Switch on/off Poissonian smearing of total number of events
  fitModel->doPoissonSmearing(kFALSE);
  
  // Switch on/off Extended ML Fit option
  fitModel->doEMLFit(kTRUE);
  
  // Switch on/off two-stage fitting for CPV parameters
  fitModel->twoStageFit(doTwoStageFit);
  
  
  //TString dataFile("/data1/user/yangyh/work/Data/TestForDa_Bu2Kpipi-TOS_biggerLo.root");
  TString dataFile("TOS_11.root");
  //TString dataFile("outFiles/KpipiFit_normal_SP/NominalNewBaseline/components/datafile_all-.root");
  //TString dataFile("/publicfs/lhcb/user/yangyh/Bu2Kpipi/MassFit/Data/root/TestForDa_Bu2Kpipi2011-MagUp-21r1p1a.root");
  TString treeName("Bu2Kpipi");

  TString rootFileName("");
  TString tableFileName("");
  TString fitToyFileName("");
  TString fitToyTableName("");
  TString splotFileName("");
  //TString dataFile("outFiles/KpipiFit_normal/NominalNewBaseline/components/" + shape + "/datafile_all.root");
  TString namePattern("NominalNewBaseline");
  
  TString resDir("outFiles/KpipiFit_normal_TIS_JVeto_LASS/" + namePattern + "/components/");
  if(shape=="0") resDir += shape +"/";
  if (command == "fit") {
    
    rootFileName = resDir+"fit_" + namePattern + "_"; rootFileName += iFit;
    rootFileName += "_expt_"; rootFileName += firstExpt;
    rootFileName += "-"; rootFileName += (firstExpt+nExpt-1);
    rootFileName += ".root";
    
    tableFileName = resDir+"fitResults_map" + namePattern + "_";
    tableFileName += iFit;
	  //
    
    splotFileName += resDir+"splot_";
    splotFileName += iFit;
    splotFileName += ".root";
    
  } else {

    //rootFileName += iFitStr +  ".root";
    
    //dataFile = resDir + "/components/genResults_";
    //dataFile += iFitStr +  ".root";
    indi_compo.ReplaceAll(")","");
    indi_compo.ReplaceAll("(","");
    indi_compo.ReplaceAll("*","");
    dataFile = resDir+"datafile_"+indi_compo;//+"-"+ shape + "-Zemach_P.root";
    if(indi_compo!="all") dataFile += "-"+shape;
    dataFile += "-Zemach_P_withE.root";
    //dataFile = resDir+"datafile_"+indi_compo+"-"+ shape + ".root";
    //dataFile += iFitStr +  ".root";

    rootFileName = resDir+"gen";
    tableFileName = resDir+"genResults";
    //tableFileName += iFitStr;
    
  }
  
  fitModel->writeLatexTable(kTRUE);
      
  
 // if(command=="fit"){
 // std::vector<LauParameter*> fitresult;// = fitModel->getParameters(); 
 //  TString parametername = "normal_printout.dat";
 //   //sprintf(parametername, "normal_printout.dat");
 //   //ofstream fgetpa(parametername, ios::app);
 //   fitModel->printFitPara(parametername);
 ////  for (std::vector<LauAbsCoeffSet*>::iterator iter=coeffset.begin(); iter!=coeffset.end(); ++iter) {
 ////   fitresult = iter[0]->getParameters();
 ////     fgetpa<<iter[0]->name()<<" "<<fitresult[0][0]<<" "<<fitresult[1][0]<<" "<<fitresult[2][0]<<" "<<fitresult[3][0]<<endl;
 ////   }
 // } 
  

  
  // Generate toy from the fitted parameters
 // Int_t nToys = 1;
 // fitModel->compareFitData(nToys, fitToyFileName, fitToyTableName);
  
  // Write out per-event likelihoods and sWeights
  fitModel->writeSPlotData(splotFileName, "splot", kFALSE);
  
  // Execute the generation/fit
  fitModel->run(command, dataFile, treeName, rootFileName, tableFileName);
  //frand<<"  "<<fitModel->statusCode()<<endl;  

  return EXIT_SUCCESS;

}
