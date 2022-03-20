
/*
Copyright 2008 University of Warwick

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

/*! \file LauLASSNRRes.hh
    \brief File containing declaration of LauLASSNRRes class.
*/

/*! \class LauLASSNRRes
    \brief Class for defining the non resonant part of the LASS model

    Class for defining the LASS resonance model, which includes a resonant
    part, plus an effective range term.  This class is the nonresonant part only.
*/

#ifndef LAU_LASS_NR_RES
#define LAU_LASS_NR_RES

#include "TString.h"

#include "LauComplex.hh"
#include "LauAbsResonance.hh"


class LauLASSNRRes : public LauAbsResonance {

	public:
		//! Constructor
		/*!
			\param [in] resInfo the object containing information on the resonance name, mass, width, spin, charge, etc.
			\param [in] resPairAmpInt the number of the daughter not produced by the resonance
			\param [in] daughters the daughter particles
		*/
		LauLASSNRRes(LauResonanceInfo* resInfo, const Int_t resPairAmpInt, const LauDaughters* daughters);

		//! Destructor
		virtual ~LauLASSNRRes();

		//! Initialise the model
		virtual void initialise();

		//! Get the resonance model type
                /*!
                        \return the resonance model type
                */
		virtual LauAbsResonance::LauResonanceModel getResonanceModel() const {return LauAbsResonance::LASS_NR;}

		//! Get the cut off parameter
		/*!
			\return the cut off parameter
		*/
		Double_t getCutOff() const {return cutOff_;}

		//! Set the cut off parameter
		/*!
			\param [in] cutOff the cut off parameter
		*/
		void setCutOff(const Double_t cutOff) {cutOff_ = cutOff;}

		//! Set value of a resonance parameter
		/*!
			\param [in] name the name of the parameter to be changed
			\param [in] value the new parameter value
		*/
		virtual void setResonanceParameter(const TString& name, const Double_t value);

		//! Allow the various parameters to float in the fit
		/*!
			\param [in] name the name of the parameter to be floated
		*/
		virtual void floatResonanceParameter(const TString& name);

		//! Access the given resonance parameter
		/*!
			\param [in] name the name of the parameter
			\return the corresponding parameter
		 */
		virtual LauParameter* getResonanceParameter(const TString& name);

		//! Retrieve the resonance parameters, e.g. so that they can be loaded into a fit
		/*!
		    \return floating parameters of the resonance
		*/
		virtual const std::vector<LauParameter*>& getFloatingParameters();

	protected:
		//! Set the effective range parameter value
		/*!
			\param [in] r the new effective range parameter value
		*/
		void setEffectiveRange(const Double_t r);

		//! Set the scattering length parameter value
		/*!
			\param [in] a the new scattering length parameter value
		*/
		void setScatteringLength(const Double_t a);

		//! Get the effective range parameter
		/*!
			\return the effective range parameter
		*/
		Double_t getEffectiveRange() const {return (r_!=0) ? r_->unblindValue() : 0.0;}

		//! Get the scattering length range parameter
		/*!
			\return the scattering length parameter
		*/
		Double_t getScatteringLength() const {return (a_!=0) ? a_->unblindValue() : 0.0;}

		//! See if the effective range parameter is fixed or floating
		/*!
			\return kTRUE if the effective range parameter is fixed, kFALSE otherwise
		*/
		Bool_t fixEffectiveRange() const {return (r_!=0) ? r_->fixed() : kTRUE;}

		//! See if the scattering length parameter is fixed or floating
		/*!
			\return kTRUE if the scattering length parameter is fixed, kFALSE otherwise
		*/
		Bool_t fixScatteringLength() const {return (a_!=0) ? a_->fixed() : kTRUE;}

		//! Complex resonant amplitude
		/*!
			\param [in] mass appropriate invariant mass for the resonance
			\param [in] spinTerm spin term
		*/
		virtual LauComplex resAmp(Double_t mass, Double_t spinTerm);

	private:
		//! Copy constructor (not implemented)
		LauLASSNRRes(const LauLASSNRRes& rhs);

		//! Copy assignment operator (not implemented)
		LauLASSNRRes& operator=(const LauLASSNRRes& rhs);

		//! LASS effective range parameter
		LauParameter* r_;
		//! LASS scattering length parameter
		LauParameter* a_;

		//! LASS cut off
		Double_t cutOff_;

		ClassDef(LauLASSNRRes,0)
};

#endif
