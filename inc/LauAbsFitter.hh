
/*
Copyright 2013 University of Warwick

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

/*! \file LauAbsFitter.hh
    \brief File containing declaration of LauAbsFitter class.
*/

/*! \class LauAbsFitter
    \brief The abstract interface to the fitter.

    The abstract interface to the fitter.
    Concrete implementations provide the singleton interface with a particular fitter, e.g. Minuit.
*/

#ifndef LAU_ABS_FITTER
#define LAU_ABS_FITTER

#include <vector>

#include "Rtypes.h"
#include "TMatrixDfwd.h"

class LauFitObject;
class LauParameter;

template<typename AbsFitter>
class LauAbsFitter {

	public:
		/*!
		    \struct FitStatus
		    \brief Struct to store fit status information
		*/
		struct FitStatus {
			//! The status code of the fit 
			Int_t status;
			//! The negative log-likelihood
			Double_t NLL;
			//! The estimated distance to the minimum
			Double_t EDM;
		};

		//! Destructor
		virtual ~LauAbsFitter() {}

		//! Initialise the fitter, setting the information on the parameters
		/*!
		    \param [in] fitObj the object that controls the likelihood calculation
		    \param [in] parameters the list of parameters of the fit
		*/
		void initialise( LauFitObject* fitObj, const std::vector<LauParameter*>& parameters ) {
      //void initialise(LauAbsFitModel<RESMODEL>* fitObj, const std::vector<LauParameter*>& parameters ){
        static_cast<AbsFitter*>(this)->initialise_imp(fitObj, parameters);
    }

		//! Get the object that controls the calculation of the likelihood
    //template<typename FitSM>
		//LauFitObject<FitSM>* getFitObject(){
		auto* getFitObject(){
      return static_cast<AbsFitter*>(this)->getFitObject_imp();
    }
		//virtual LauFitObject* getFitObject() =0;

		//! Get the total number of fit parameters
		//virtual UInt_t nParameters() const = 0;
		UInt_t nParameters() const {
        return static_cast<const AbsFitter*>(this)->nParameters_imp();
    }

		//! Get the number of floating fit parameters
		//virtual UInt_t nFreeParameters() const = 0;
		UInt_t nFreeParameters() const {
        return static_cast<const AbsFitter*>(this)->nFreeParameters_imp();
    }

		//! Determine whether the two-stage fit is enabled
		//virtual Bool_t twoStageFit() const = 0;
		Bool_t twoStageFit() const{
        return static_cast<const AbsFitter*>(this)->twoStageFit_imp();
    }

		//! Turn on or off the two stage fit
		/*!
			The two-stage fit allows certain parameters to be fixed
			in one stage and floated in another stage of the fit.
			Can be used, for example, in a CP fit where the
			CP-parameters are fixed to zero in the first stage
			(while the CP-average parameters are determined), then
			floated in the second.

			\param [in] doTwoStageFit boolean specifying whether or not the two-stage fit should be enabled
		*/	
		//virtual void twoStageFit(Bool_t doTwoStageFit) = 0;
		void twoStageFit(Bool_t doTwoStageFit){
        static_cast<AbsFitter*>(this)->twoStageFit_imp(doTwoStageFit);
    }

		//! Determine whether calculation of asymmetric errors is enabled
		//virtual Bool_t useAsymmFitErrors() const = 0;
		Bool_t useAsymmFitErrors() const {
        return static_cast<AbsFitter*>(this)->useAsymmFitErrors_imp();
    }

		//! Turn on or off the computation of asymmetric errors (e.g. MINOS routine in Minuit)
		/*!
			\param [in] useAsymmErrors boolean specifying whether or not the computation of asymmetric errors is enabled
		*/	
		virtual void useAsymmFitErrors(Bool_t useAsymmErrors) = 0;

		//! Perform the minimisation of the fit function
		/*!
		    \return the status code of the fit and the minimised value
		*/
    //template<typename FitSM>
		const FitStatus& minimise(){
      return static_cast<AbsFitter*>(this)->minimise_imp();
    }

		//! Fix parameters marked as "second stage"
		virtual void fixSecondStageParameters() = 0;

		//! Release parameters marked as "second stage"
		virtual void releaseSecondStageParameters() = 0;

		//! Update the values and errors of the parameters based on the fit minimum
		virtual void updateParameters() = 0;

		//! Retrieve the fit covariance matrix
		virtual const TMatrixD& covarianceMatrix() const = 0;

	protected:
		//! Constructor
		LauAbsFitter() {}

	private:
		//! Copy constructor - private and not implemented
		LauAbsFitter( const LauAbsFitter& );

		//! Copy assignment operator - private and not implemented
		LauAbsFitter& operator=( const LauAbsFitter& rhs );

		ClassDef(LauAbsFitter,0);
};

#endif

