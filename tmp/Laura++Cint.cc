// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME tmpdILaurapLpLCint
#define R__NO_DEPRECATION

/*******************************************************************/
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#define G__DICTIONARY
#include "RConfig.h"
#include "TClass.h"
#include "TDictAttributeMap.h"
#include "TInterpreter.h"
#include "TROOT.h"
#include "TBuffer.h"
#include "TMemberInspector.h"
#include "TInterpreter.h"
#include "TVirtualMutex.h"
#include "TError.h"

#ifndef G__ROOT
#define G__ROOT
#endif

#include "RtypesImp.h"
#include "TIsAProxy.h"
#include "TFileMergeInfo.h"
#include <algorithm>
#include "TCollectionProxyInfo.h"
/*******************************************************************/

#include "TDataMember.h"

// Header files passed as explicit arguments
#include "LauCPFitModel.hh"
#include "LauMagPhaseCoeffSet.hh"
#include "LauFlatNR.hh"
#include "LauLinearPdf.hh"
#include "LauSimFitMaster.hh"
#include "LauParticlePDG.hh"
#include "LauCartesianCPCoeffSet.hh"
#include "LauKMatrixProdSVP.hh"
#include "Lau2DAbsDPPdf.hh"
#include "LauMinuit.hh"
#include "LauResonanceMaker.hh"
#include "LauEmbeddedData.hh"
#include "LauLASSBWRes.hh"
#include "LauKMatrixProdPole.hh"
#include "LauParametricStepFuncPdf.hh"
#include "LauBelleCPCoeffSet.hh"
#include "LauCalcChiSq.hh"
#include "LauAsymmCalc.hh"
#include "LauBifurcatedGaussPdf.hh"
#include "LauCrystalBallPdf.hh"
#include "LauKappaRes.hh"
#include "LauSimpleFitModel.hh"
#include "LauSPlot.hh"
#include "LauBlattWeisskopfFactor.hh"
#include "LauNRAmplitude.hh"
#include "LauBkgndDPModel.hh"
#include "LauAbsModIndPartWave.hh"
#include "LauFitNtuple.hh"
#include "LauFitter.hh"
#include "LauFitDataTree.hh"
#include "LauKMatrixPropFactory.hh"
#include "LauLASSNRRes.hh"
#include "LauBelleNR.hh"
#include "LauAbsBkgndDPModel.hh"
#include "LauSigmoidPdf.hh"
#include "Lau2DAbsHistDPPdf.hh"
#include "LauDPDepMapPdf.hh"
#include "LauAbsRValue.hh"
#include "LauBreitWignerRes.hh"
#include "LauParamFixed.hh"
#include "Lau2DSplineDPPdf.hh"
#include "LauKinematics.hh"
#include "LauCacheData.hh"
#include "LauPolarFormFactorNR.hh"
#include "Lau2DAbsDP.hh"
#include "LauRescatteringRes.hh"
#include "LauCartesianGammaCPCoeffSet.hh"
#include "LauDPDepGaussPdf.hh"
#include "LauScfMap.hh"
#include "LauFormulaPar.hh"
#include "LauExponentialPdf.hh"
#include "LauBelleSymNR.hh"
#include "LauPoleRes.hh"
#include "LauRealImagCoeffSet.hh"
#include "LauSigmaRes.hh"
#include "LauLASSRes.hh"
#include "LauString.hh"
#include "LauArgusPdf.hh"
#include "LauGaussIncohRes.hh"
#include "LauDatabasePDG.hh"
#include "LauFlatteRes.hh"
#include "LauCleoCPCoeffSet.hh"
#include "LauGaussPdf.hh"
#include "Lau2DHistPdf.hh"
#include "LauModIndPartWaveMagPhase.hh"
#include "LauAbsResonance.hh"
#include "LauTextFileParser.hh"
#include "Lau2DHistDP.hh"
#include "LauDPPartialIntegralInfo.hh"
#include "Lau1DHistPdf.hh"
#include "Lau2DCubicSpline.hh"
#include "LauResultsExtractor.hh"
#include "LauEffModel.hh"
#include "LauMergeDataFiles.hh"
#include "LauRescattering2Res.hh"
#include "LauRandom.hh"
#include "LauDPDepSumPdf.hh"
#include "LauVetoes.hh"
#include "LauRhoOmegaMix.hh"
#include "Lau1DCubicSpline.hh"
#include "LauIntegrals.hh"
#include "LauAbsFitModel.hh"
#include "Lau2DSplineDP.hh"
#include "LauChebychevPdf.hh"
#include "LauGenNtuple.hh"
#include "LauBlind.hh"
#include "LauRealImagCPCoeffSet.hh"
#include "LauConstants.hh"
#include "LauPolNR.hh"
#include "LauDPDepCruijffPdf.hh"
#include "LauIsobarDynamics.hh"
#include "LauComplex.hh"
#include "LauFitObject.hh"
#include "LauAbsFitter.hh"
#include "LauRelBreitWignerRes.hh"
#include "LauDaughters.hh"
#include "LauKMatrixPropagator.hh"
#include "LauPolarFormFactorSymNR.hh"
#include "LauPrint.hh"
#include "LauDabbaRes.hh"
#include "LauAbsEffModel.hh"
#include "Lau2DAbsHistDP.hh"
#include "Lau2DHistDPPdf.hh"
#include "LauPolarGammaCPCoeffSet.hh"
#include "LauParameter.hh"
#include "LauWeightedSumEffModel.hh"
#include "LauEFKLLMRes.hh"
#include "LauNovosibirskPdf.hh"
#include "LauCruijffPdf.hh"
#include "LauAbsIncohRes.hh"
#include "LauSumPdf.hh"
#include "LauAbsPdf.hh"
#include "LauMagPhaseCPCoeffSet.hh"
#include "LauDPDepBifurGaussPdf.hh"
#include "LauModIndPartWaveRealImag.hh"
#include "LauRealImagGammaCPCoeffSet.hh"
#include "LauGounarisSakuraiRes.hh"
#include "LauResonanceInfo.hh"
#include "LauAbsCoeffSet.hh"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace LauRandom {
   namespace ROOTDict {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *LauRandom_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("LauRandom", 0 /*version*/, "LauRandom.hh", 42,
                     ::ROOT::Internal::DefineBehavior((void*)0,(void*)0),
                     &LauRandom_Dictionary, 0);
         return &instance;
      }
      // Insure that the inline function is _not_ optimized away by the compiler
      ::ROOT::TGenericClassInfo *(*_R__UNIQUE_DICT_(InitFunctionKeeper))() = &GenerateInitInstance;  
      // Static variable to force the class initialization
      static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstance(); R__UseDummy(_R__UNIQUE_DICT_(Init));

      // Dictionary for non-ClassDef classes
      static TClass *LauRandom_Dictionary() {
         return GenerateInitInstance()->GetClass();
      }

   }
}

namespace LauConstants {
   namespace ROOTDict {
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance();
      static TClass *LauConstants_Dictionary();

      // Function generating the singleton type initializer
      inline ::ROOT::TGenericClassInfo *GenerateInitInstance()
      {
         static ::ROOT::TGenericClassInfo 
            instance("LauConstants", 0 /*version*/, "LauConstants.hh", 39,
                     ::ROOT::Internal::DefineBehavior((void*)0,(void*)0),
                     &LauConstants_Dictionary, 0);
         return &instance;
      }
      // Insure that the inline function is _not_ optimized away by the compiler
      ::ROOT::TGenericClassInfo *(*_R__UNIQUE_DICT_(InitFunctionKeeper))() = &GenerateInitInstance;  
      // Static variable to force the class initialization
      static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstance(); R__UseDummy(_R__UNIQUE_DICT_(Init));

      // Dictionary for non-ClassDef classes
      static TClass *LauConstants_Dictionary() {
         return GenerateInitInstance()->GetClass();
      }

   }
}

namespace ROOT {
   static TClass *LauAbsFitterlELauMinuitgR_Dictionary();
   static void LauAbsFitterlELauMinuitgR_TClassManip(TClass*);
   static void delete_LauAbsFitterlELauMinuitgR(void *p);
   static void deleteArray_LauAbsFitterlELauMinuitgR(void *p);
   static void destruct_LauAbsFitterlELauMinuitgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::LauAbsFitter<LauMinuit>*)
   {
      ::LauAbsFitter<LauMinuit> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::LauAbsFitter<LauMinuit> >(0);
      static ::ROOT::TGenericClassInfo 
         instance("LauAbsFitter<LauMinuit>", ::LauAbsFitter<LauMinuit>::Class_Version(), "LauAbsFitter.hh", 48,
                  typeid(::LauAbsFitter<LauMinuit>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &LauAbsFitterlELauMinuitgR_Dictionary, isa_proxy, 4,
                  sizeof(::LauAbsFitter<LauMinuit>) );
      instance.SetDelete(&delete_LauAbsFitterlELauMinuitgR);
      instance.SetDeleteArray(&deleteArray_LauAbsFitterlELauMinuitgR);
      instance.SetDestructor(&destruct_LauAbsFitterlELauMinuitgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::LauAbsFitter<LauMinuit>*)
   {
      return GenerateInitInstanceLocal((::LauAbsFitter<LauMinuit>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::LauAbsFitter<LauMinuit>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *LauAbsFitterlELauMinuitgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::LauAbsFitter<LauMinuit>*)0x0)->GetClass();
      LauAbsFitterlELauMinuitgR_TClassManip(theClass);
   return theClass;
   }

   static void LauAbsFitterlELauMinuitgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *LauMinuit_Dictionary();
   static void LauMinuit_TClassManip(TClass*);
   static void delete_LauMinuit(void *p);
   static void deleteArray_LauMinuit(void *p);
   static void destruct_LauMinuit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::LauMinuit*)
   {
      ::LauMinuit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::LauMinuit));
      static ::ROOT::TGenericClassInfo 
         instance("LauMinuit", "LauMinuit.hh", 50,
                  typeid(::LauMinuit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &LauMinuit_Dictionary, isa_proxy, 4,
                  sizeof(::LauMinuit) );
      instance.SetDelete(&delete_LauMinuit);
      instance.SetDeleteArray(&deleteArray_LauMinuit);
      instance.SetDestructor(&destruct_LauMinuit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::LauMinuit*)
   {
      return GenerateInitInstanceLocal((::LauMinuit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::LauMinuit*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *LauMinuit_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::LauMinuit*)0x0)->GetClass();
      LauMinuit_TClassManip(theClass);
   return theClass;
   }

   static void LauMinuit_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void delete_LauFitObject(void *p);
   static void deleteArray_LauFitObject(void *p);
   static void destruct_LauFitObject(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::LauFitObject*)
   {
      ::LauFitObject *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::LauFitObject >(0);
      static ::ROOT::TGenericClassInfo 
         instance("LauFitObject", ::LauFitObject::Class_Version(), "LauFitObject.hh", 45,
                  typeid(::LauFitObject), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::LauFitObject::Dictionary, isa_proxy, 4,
                  sizeof(::LauFitObject) );
      instance.SetDelete(&delete_LauFitObject);
      instance.SetDeleteArray(&deleteArray_LauFitObject);
      instance.SetDestructor(&destruct_LauFitObject);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::LauFitObject*)
   {
      return GenerateInitInstanceLocal((::LauFitObject*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::LauFitObject*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_LauAbsRValue(void *p);
   static void deleteArray_LauAbsRValue(void *p);
   static void destruct_LauAbsRValue(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::LauAbsRValue*)
   {
      ::LauAbsRValue *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::LauAbsRValue >(0);
      static ::ROOT::TGenericClassInfo 
         instance("LauAbsRValue", ::LauAbsRValue::Class_Version(), "LauAbsRValue.hh", 43,
                  typeid(::LauAbsRValue), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::LauAbsRValue::Dictionary, isa_proxy, 4,
                  sizeof(::LauAbsRValue) );
      instance.SetDelete(&delete_LauAbsRValue);
      instance.SetDeleteArray(&deleteArray_LauAbsRValue);
      instance.SetDestructor(&destruct_LauAbsRValue);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::LauAbsRValue*)
   {
      return GenerateInitInstanceLocal((::LauAbsRValue*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::LauAbsRValue*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_LauBlind(void *p = 0);
   static void *newArray_LauBlind(Long_t size, void *p);
   static void delete_LauBlind(void *p);
   static void deleteArray_LauBlind(void *p);
   static void destruct_LauBlind(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::LauBlind*)
   {
      ::LauBlind *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::LauBlind >(0);
      static ::ROOT::TGenericClassInfo 
         instance("LauBlind", ::LauBlind::Class_Version(), "LauBlind.hh", 42,
                  typeid(::LauBlind), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::LauBlind::Dictionary, isa_proxy, 4,
                  sizeof(::LauBlind) );
      instance.SetNew(&new_LauBlind);
      instance.SetNewArray(&newArray_LauBlind);
      instance.SetDelete(&delete_LauBlind);
      instance.SetDeleteArray(&deleteArray_LauBlind);
      instance.SetDestructor(&destruct_LauBlind);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::LauBlind*)
   {
      return GenerateInitInstanceLocal((::LauBlind*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::LauBlind*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_LauParameter(void *p = 0);
   static void *newArray_LauParameter(Long_t size, void *p);
   static void delete_LauParameter(void *p);
   static void deleteArray_LauParameter(void *p);
   static void destruct_LauParameter(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::LauParameter*)
   {
      ::LauParameter *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::LauParameter >(0);
      static ::ROOT::TGenericClassInfo 
         instance("LauParameter", ::LauParameter::Class_Version(), "LauParameter.hh", 49,
                  typeid(::LauParameter), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::LauParameter::Dictionary, isa_proxy, 4,
                  sizeof(::LauParameter) );
      instance.SetNew(&new_LauParameter);
      instance.SetNewArray(&newArray_LauParameter);
      instance.SetDelete(&delete_LauParameter);
      instance.SetDeleteArray(&deleteArray_LauParameter);
      instance.SetDestructor(&destruct_LauParameter);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::LauParameter*)
   {
      return GenerateInitInstanceLocal((::LauParameter*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::LauParameter*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_LauFormulaPar(void *p);
   static void deleteArray_LauFormulaPar(void *p);
   static void destruct_LauFormulaPar(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::LauFormulaPar*)
   {
      ::LauFormulaPar *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::LauFormulaPar >(0);
      static ::ROOT::TGenericClassInfo 
         instance("LauFormulaPar", ::LauFormulaPar::Class_Version(), "LauFormulaPar.hh", 49,
                  typeid(::LauFormulaPar), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::LauFormulaPar::Dictionary, isa_proxy, 4,
                  sizeof(::LauFormulaPar) );
      instance.SetDelete(&delete_LauFormulaPar);
      instance.SetDeleteArray(&deleteArray_LauFormulaPar);
      instance.SetDestructor(&destruct_LauFormulaPar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::LauFormulaPar*)
   {
      return GenerateInitInstanceLocal((::LauFormulaPar*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::LauFormulaPar*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_LauSPlot(void *p);
   static void deleteArray_LauSPlot(void *p);
   static void destruct_LauSPlot(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::LauSPlot*)
   {
      ::LauSPlot *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::LauSPlot >(0);
      static ::ROOT::TGenericClassInfo 
         instance("LauSPlot", ::LauSPlot::Class_Version(), "LauSPlot.hh", 69,
                  typeid(::LauSPlot), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::LauSPlot::Dictionary, isa_proxy, 4,
                  sizeof(::LauSPlot) );
      instance.SetDelete(&delete_LauSPlot);
      instance.SetDeleteArray(&deleteArray_LauSPlot);
      instance.SetDestructor(&destruct_LauSPlot);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::LauSPlot*)
   {
      return GenerateInitInstanceLocal((::LauSPlot*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::LauSPlot*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_LauFitNtuple(void *p);
   static void deleteArray_LauFitNtuple(void *p);
   static void destruct_LauFitNtuple(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::LauFitNtuple*)
   {
      ::LauFitNtuple *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::LauFitNtuple >(0);
      static ::ROOT::TGenericClassInfo 
         instance("LauFitNtuple", ::LauFitNtuple::Class_Version(), "LauFitNtuple.hh", 58,
                  typeid(::LauFitNtuple), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::LauFitNtuple::Dictionary, isa_proxy, 4,
                  sizeof(::LauFitNtuple) );
      instance.SetDelete(&delete_LauFitNtuple);
      instance.SetDeleteArray(&deleteArray_LauFitNtuple);
      instance.SetDestructor(&destruct_LauFitNtuple);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::LauFitNtuple*)
   {
      return GenerateInitInstanceLocal((::LauFitNtuple*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::LauFitNtuple*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_LauAbsFitModel(void *p);
   static void deleteArray_LauAbsFitModel(void *p);
   static void destruct_LauAbsFitModel(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::LauAbsFitModel*)
   {
      ::LauAbsFitModel *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::LauAbsFitModel >(0);
      static ::ROOT::TGenericClassInfo 
         instance("LauAbsFitModel", ::LauAbsFitModel::Class_Version(), "LauAbsFitModel.hh", 87,
                  typeid(::LauAbsFitModel), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::LauAbsFitModel::Dictionary, isa_proxy, 4,
                  sizeof(::LauAbsFitModel) );
      instance.SetDelete(&delete_LauAbsFitModel);
      instance.SetDeleteArray(&deleteArray_LauAbsFitModel);
      instance.SetDestructor(&destruct_LauAbsFitModel);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::LauAbsFitModel*)
   {
      return GenerateInitInstanceLocal((::LauAbsFitModel*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::LauAbsFitModel*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *LauComplex_Dictionary();
   static void LauComplex_TClassManip(TClass*);
   static void *new_LauComplex(void *p = 0);
   static void *newArray_LauComplex(Long_t size, void *p);
   static void delete_LauComplex(void *p);
   static void deleteArray_LauComplex(void *p);
   static void destruct_LauComplex(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::LauComplex*)
   {
      ::LauComplex *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::LauComplex));
      static ::ROOT::TGenericClassInfo 
         instance("LauComplex", "LauComplex.hh", 61,
                  typeid(::LauComplex), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &LauComplex_Dictionary, isa_proxy, 4,
                  sizeof(::LauComplex) );
      instance.SetNew(&new_LauComplex);
      instance.SetNewArray(&newArray_LauComplex);
      instance.SetDelete(&delete_LauComplex);
      instance.SetDeleteArray(&deleteArray_LauComplex);
      instance.SetDestructor(&destruct_LauComplex);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::LauComplex*)
   {
      return GenerateInitInstanceLocal((::LauComplex*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::LauComplex*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *LauComplex_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::LauComplex*)0x0)->GetClass();
      LauComplex_TClassManip(theClass);
   return theClass;
   }

   static void LauComplex_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void delete_LauCPFitModel(void *p);
   static void deleteArray_LauCPFitModel(void *p);
   static void destruct_LauCPFitModel(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::LauCPFitModel*)
   {
      ::LauCPFitModel *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::LauCPFitModel >(0);
      static ::ROOT::TGenericClassInfo 
         instance("LauCPFitModel", ::LauCPFitModel::Class_Version(), "LauCPFitModel.hh", 62,
                  typeid(::LauCPFitModel), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::LauCPFitModel::Dictionary, isa_proxy, 4,
                  sizeof(::LauCPFitModel) );
      instance.SetDelete(&delete_LauCPFitModel);
      instance.SetDeleteArray(&deleteArray_LauCPFitModel);
      instance.SetDestructor(&destruct_LauCPFitModel);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::LauCPFitModel*)
   {
      return GenerateInitInstanceLocal((::LauCPFitModel*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::LauCPFitModel*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_LauAbsCoeffSet(void *p);
   static void deleteArray_LauAbsCoeffSet(void *p);
   static void destruct_LauAbsCoeffSet(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::LauAbsCoeffSet*)
   {
      ::LauAbsCoeffSet *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::LauAbsCoeffSet >(0);
      static ::ROOT::TGenericClassInfo 
         instance("LauAbsCoeffSet", ::LauAbsCoeffSet::Class_Version(), "LauAbsCoeffSet.hh", 49,
                  typeid(::LauAbsCoeffSet), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::LauAbsCoeffSet::Dictionary, isa_proxy, 4,
                  sizeof(::LauAbsCoeffSet) );
      instance.SetDelete(&delete_LauAbsCoeffSet);
      instance.SetDeleteArray(&deleteArray_LauAbsCoeffSet);
      instance.SetDestructor(&destruct_LauAbsCoeffSet);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::LauAbsCoeffSet*)
   {
      return GenerateInitInstanceLocal((::LauAbsCoeffSet*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::LauAbsCoeffSet*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_LauMagPhaseCoeffSet(void *p);
   static void deleteArray_LauMagPhaseCoeffSet(void *p);
   static void destruct_LauMagPhaseCoeffSet(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::LauMagPhaseCoeffSet*)
   {
      ::LauMagPhaseCoeffSet *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::LauMagPhaseCoeffSet >(0);
      static ::ROOT::TGenericClassInfo 
         instance("LauMagPhaseCoeffSet", ::LauMagPhaseCoeffSet::Class_Version(), "LauMagPhaseCoeffSet.hh", 49,
                  typeid(::LauMagPhaseCoeffSet), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::LauMagPhaseCoeffSet::Dictionary, isa_proxy, 4,
                  sizeof(::LauMagPhaseCoeffSet) );
      instance.SetDelete(&delete_LauMagPhaseCoeffSet);
      instance.SetDeleteArray(&deleteArray_LauMagPhaseCoeffSet);
      instance.SetDestructor(&destruct_LauMagPhaseCoeffSet);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::LauMagPhaseCoeffSet*)
   {
      return GenerateInitInstanceLocal((::LauMagPhaseCoeffSet*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::LauMagPhaseCoeffSet*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_LauBlattWeisskopfFactor(void *p);
   static void deleteArray_LauBlattWeisskopfFactor(void *p);
   static void destruct_LauBlattWeisskopfFactor(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::LauBlattWeisskopfFactor*)
   {
      ::LauBlattWeisskopfFactor *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::LauBlattWeisskopfFactor >(0);
      static ::ROOT::TGenericClassInfo 
         instance("LauBlattWeisskopfFactor", ::LauBlattWeisskopfFactor::Class_Version(), "LauBlattWeisskopfFactor.hh", 44,
                  typeid(::LauBlattWeisskopfFactor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::LauBlattWeisskopfFactor::Dictionary, isa_proxy, 4,
                  sizeof(::LauBlattWeisskopfFactor) );
      instance.SetDelete(&delete_LauBlattWeisskopfFactor);
      instance.SetDeleteArray(&deleteArray_LauBlattWeisskopfFactor);
      instance.SetDestructor(&destruct_LauBlattWeisskopfFactor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::LauBlattWeisskopfFactor*)
   {
      return GenerateInitInstanceLocal((::LauBlattWeisskopfFactor*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::LauBlattWeisskopfFactor*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_LauAbsResonance(void *p);
   static void deleteArray_LauAbsResonance(void *p);
   static void destruct_LauAbsResonance(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::LauAbsResonance*)
   {
      ::LauAbsResonance *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::LauAbsResonance >(0);
      static ::ROOT::TGenericClassInfo 
         instance("LauAbsResonance", ::LauAbsResonance::Class_Version(), "LauAbsResonance.hh", 51,
                  typeid(::LauAbsResonance), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::LauAbsResonance::Dictionary, isa_proxy, 4,
                  sizeof(::LauAbsResonance) );
      instance.SetDelete(&delete_LauAbsResonance);
      instance.SetDeleteArray(&deleteArray_LauAbsResonance);
      instance.SetDestructor(&destruct_LauAbsResonance);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::LauAbsResonance*)
   {
      return GenerateInitInstanceLocal((::LauAbsResonance*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::LauAbsResonance*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_LauFlatNR(void *p);
   static void deleteArray_LauFlatNR(void *p);
   static void destruct_LauFlatNR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::LauFlatNR*)
   {
      ::LauFlatNR *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::LauFlatNR >(0);
      static ::ROOT::TGenericClassInfo 
         instance("LauFlatNR", ::LauFlatNR::Class_Version(), "LauFlatNR.hh", 44,
                  typeid(::LauFlatNR), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::LauFlatNR::Dictionary, isa_proxy, 4,
                  sizeof(::LauFlatNR) );
      instance.SetDelete(&delete_LauFlatNR);
      instance.SetDeleteArray(&deleteArray_LauFlatNR);
      instance.SetDestructor(&destruct_LauFlatNR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::LauFlatNR*)
   {
      return GenerateInitInstanceLocal((::LauFlatNR*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::LauFlatNR*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_LauFitDataTree(void *p);
   static void deleteArray_LauFitDataTree(void *p);
   static void destruct_LauFitDataTree(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::LauFitDataTree*)
   {
      ::LauFitDataTree *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::LauFitDataTree >(0);
      static ::ROOT::TGenericClassInfo 
         instance("LauFitDataTree", ::LauFitDataTree::Class_Version(), "LauFitDataTree.hh", 51,
                  typeid(::LauFitDataTree), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::LauFitDataTree::Dictionary, isa_proxy, 4,
                  sizeof(::LauFitDataTree) );
      instance.SetDelete(&delete_LauFitDataTree);
      instance.SetDeleteArray(&deleteArray_LauFitDataTree);
      instance.SetDestructor(&destruct_LauFitDataTree);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::LauFitDataTree*)
   {
      return GenerateInitInstanceLocal((::LauFitDataTree*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::LauFitDataTree*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *LauParamFixed_Dictionary();
   static void LauParamFixed_TClassManip(TClass*);
   static void *new_LauParamFixed(void *p = 0);
   static void *newArray_LauParamFixed(Long_t size, void *p);
   static void delete_LauParamFixed(void *p);
   static void deleteArray_LauParamFixed(void *p);
   static void destruct_LauParamFixed(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::LauParamFixed*)
   {
      ::LauParamFixed *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::LauParamFixed));
      static ::ROOT::TGenericClassInfo 
         instance("LauParamFixed", "LauParamFixed.hh", 38,
                  typeid(::LauParamFixed), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &LauParamFixed_Dictionary, isa_proxy, 4,
                  sizeof(::LauParamFixed) );
      instance.SetNew(&new_LauParamFixed);
      instance.SetNewArray(&newArray_LauParamFixed);
      instance.SetDelete(&delete_LauParamFixed);
      instance.SetDeleteArray(&deleteArray_LauParamFixed);
      instance.SetDestructor(&destruct_LauParamFixed);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::LauParamFixed*)
   {
      return GenerateInitInstanceLocal((::LauParamFixed*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::LauParamFixed*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *LauParamFixed_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::LauParamFixed*)0x0)->GetClass();
      LauParamFixed_TClassManip(theClass);
   return theClass;
   }

   static void LauParamFixed_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void delete_LauAbsPdf(void *p);
   static void deleteArray_LauAbsPdf(void *p);
   static void destruct_LauAbsPdf(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::LauAbsPdf*)
   {
      ::LauAbsPdf *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::LauAbsPdf >(0);
      static ::ROOT::TGenericClassInfo 
         instance("LauAbsPdf", ::LauAbsPdf::Class_Version(), "LauAbsPdf.hh", 55,
                  typeid(::LauAbsPdf), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::LauAbsPdf::Dictionary, isa_proxy, 4,
                  sizeof(::LauAbsPdf) );
      instance.SetDelete(&delete_LauAbsPdf);
      instance.SetDeleteArray(&deleteArray_LauAbsPdf);
      instance.SetDestructor(&destruct_LauAbsPdf);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::LauAbsPdf*)
   {
      return GenerateInitInstanceLocal((::LauAbsPdf*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::LauAbsPdf*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_LauLinearPdf(void *p);
   static void deleteArray_LauLinearPdf(void *p);
   static void destruct_LauLinearPdf(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::LauLinearPdf*)
   {
      ::LauLinearPdf *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::LauLinearPdf >(0);
      static ::ROOT::TGenericClassInfo 
         instance("LauLinearPdf", ::LauLinearPdf::Class_Version(), "LauLinearPdf.hh", 44,
                  typeid(::LauLinearPdf), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::LauLinearPdf::Dictionary, isa_proxy, 4,
                  sizeof(::LauLinearPdf) );
      instance.SetDelete(&delete_LauLinearPdf);
      instance.SetDeleteArray(&deleteArray_LauLinearPdf);
      instance.SetDestructor(&destruct_LauLinearPdf);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::LauLinearPdf*)
   {
      return GenerateInitInstanceLocal((::LauLinearPdf*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::LauLinearPdf*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_LauSimFitMaster(void *p);
   static void deleteArray_LauSimFitMaster(void *p);
   static void destruct_LauSimFitMaster(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::LauSimFitMaster*)
   {
      ::LauSimFitMaster *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::LauSimFitMaster >(0);
      static ::ROOT::TGenericClassInfo 
         instance("LauSimFitMaster", ::LauSimFitMaster::Class_Version(), "LauSimFitMaster.hh", 57,
                  typeid(::LauSimFitMaster), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::LauSimFitMaster::Dictionary, isa_proxy, 4,
                  sizeof(::LauSimFitMaster) );
      instance.SetDelete(&delete_LauSimFitMaster);
      instance.SetDeleteArray(&deleteArray_LauSimFitMaster);
      instance.SetDestructor(&destruct_LauSimFitMaster);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::LauSimFitMaster*)
   {
      return GenerateInitInstanceLocal((::LauSimFitMaster*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::LauSimFitMaster*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_LauParticlePDG(void *p);
   static void deleteArray_LauParticlePDG(void *p);
   static void destruct_LauParticlePDG(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::LauParticlePDG*)
   {
      ::LauParticlePDG *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::LauParticlePDG >(0);
      static ::ROOT::TGenericClassInfo 
         instance("LauParticlePDG", ::LauParticlePDG::Class_Version(), "LauParticlePDG.hh", 43,
                  typeid(::LauParticlePDG), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::LauParticlePDG::Dictionary, isa_proxy, 4,
                  sizeof(::LauParticlePDG) );
      instance.SetDelete(&delete_LauParticlePDG);
      instance.SetDeleteArray(&deleteArray_LauParticlePDG);
      instance.SetDestructor(&destruct_LauParticlePDG);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::LauParticlePDG*)
   {
      return GenerateInitInstanceLocal((::LauParticlePDG*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::LauParticlePDG*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_LauCartesianCPCoeffSet(void *p);
   static void deleteArray_LauCartesianCPCoeffSet(void *p);
   static void destruct_LauCartesianCPCoeffSet(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::LauCartesianCPCoeffSet*)
   {
      ::LauCartesianCPCoeffSet *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::LauCartesianCPCoeffSet >(0);
      static ::ROOT::TGenericClassInfo 
         instance("LauCartesianCPCoeffSet", ::LauCartesianCPCoeffSet::Class_Version(), "LauCartesianCPCoeffSet.hh", 50,
                  typeid(::LauCartesianCPCoeffSet), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::LauCartesianCPCoeffSet::Dictionary, isa_proxy, 4,
                  sizeof(::LauCartesianCPCoeffSet) );
      instance.SetDelete(&delete_LauCartesianCPCoeffSet);
      instance.SetDeleteArray(&deleteArray_LauCartesianCPCoeffSet);
      instance.SetDestructor(&destruct_LauCartesianCPCoeffSet);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::LauCartesianCPCoeffSet*)
   {
      return GenerateInitInstanceLocal((::LauCartesianCPCoeffSet*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::LauCartesianCPCoeffSet*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_LauKMatrixProdSVP(void *p);
   static void deleteArray_LauKMatrixProdSVP(void *p);
   static void destruct_LauKMatrixProdSVP(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::LauKMatrixProdSVP*)
   {
      ::LauKMatrixProdSVP *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::LauKMatrixProdSVP >(0);
      static ::ROOT::TGenericClassInfo 
         instance("LauKMatrixProdSVP", ::LauKMatrixProdSVP::Class_Version(), "LauKMatrixProdSVP.hh", 45,
                  typeid(::LauKMatrixProdSVP), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::LauKMatrixProdSVP::Dictionary, isa_proxy, 4,
                  sizeof(::LauKMatrixProdSVP) );
      instance.SetDelete(&delete_LauKMatrixProdSVP);
      instance.SetDeleteArray(&deleteArray_LauKMatrixProdSVP);
      instance.SetDestructor(&destruct_LauKMatrixProdSVP);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::LauKMatrixProdSVP*)
   {
      return GenerateInitInstanceLocal((::LauKMatrixProdSVP*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::LauKMatrixProdSVP*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_Lau2DAbsDPPdf(void *p);
   static void deleteArray_Lau2DAbsDPPdf(void *p);
   static void destruct_Lau2DAbsDPPdf(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Lau2DAbsDPPdf*)
   {
      ::Lau2DAbsDPPdf *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::Lau2DAbsDPPdf >(0);
      static ::ROOT::TGenericClassInfo 
         instance("Lau2DAbsDPPdf", ::Lau2DAbsDPPdf::Class_Version(), "Lau2DAbsDPPdf.hh", 40,
                  typeid(::Lau2DAbsDPPdf), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::Lau2DAbsDPPdf::Dictionary, isa_proxy, 4,
                  sizeof(::Lau2DAbsDPPdf) );
      instance.SetDelete(&delete_Lau2DAbsDPPdf);
      instance.SetDeleteArray(&deleteArray_Lau2DAbsDPPdf);
      instance.SetDestructor(&destruct_Lau2DAbsDPPdf);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Lau2DAbsDPPdf*)
   {
      return GenerateInitInstanceLocal((::Lau2DAbsDPPdf*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::Lau2DAbsDPPdf*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::LauResonanceMaker*)
   {
      ::LauResonanceMaker *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::LauResonanceMaker >(0);
      static ::ROOT::TGenericClassInfo 
         instance("LauResonanceMaker", ::LauResonanceMaker::Class_Version(), "LauResonanceMaker.hh", 49,
                  typeid(::LauResonanceMaker), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::LauResonanceMaker::Dictionary, isa_proxy, 4,
                  sizeof(::LauResonanceMaker) );
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::LauResonanceMaker*)
   {
      return GenerateInitInstanceLocal((::LauResonanceMaker*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::LauResonanceMaker*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_LauEmbeddedData(void *p);
   static void deleteArray_LauEmbeddedData(void *p);
   static void destruct_LauEmbeddedData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::LauEmbeddedData*)
   {
      ::LauEmbeddedData *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::LauEmbeddedData >(0);
      static ::ROOT::TGenericClassInfo 
         instance("LauEmbeddedData", ::LauEmbeddedData::Class_Version(), "LauEmbeddedData.hh", 47,
                  typeid(::LauEmbeddedData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::LauEmbeddedData::Dictionary, isa_proxy, 4,
                  sizeof(::LauEmbeddedData) );
      instance.SetDelete(&delete_LauEmbeddedData);
      instance.SetDeleteArray(&deleteArray_LauEmbeddedData);
      instance.SetDestructor(&destruct_LauEmbeddedData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::LauEmbeddedData*)
   {
      return GenerateInitInstanceLocal((::LauEmbeddedData*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::LauEmbeddedData*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_LauLASSBWRes(void *p);
   static void deleteArray_LauLASSBWRes(void *p);
   static void destruct_LauLASSBWRes(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::LauLASSBWRes*)
   {
      ::LauLASSBWRes *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::LauLASSBWRes >(0);
      static ::ROOT::TGenericClassInfo 
         instance("LauLASSBWRes", ::LauLASSBWRes::Class_Version(), "LauLASSBWRes.hh", 45,
                  typeid(::LauLASSBWRes), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::LauLASSBWRes::Dictionary, isa_proxy, 4,
                  sizeof(::LauLASSBWRes) );
      instance.SetDelete(&delete_LauLASSBWRes);
      instance.SetDeleteArray(&deleteArray_LauLASSBWRes);
      instance.SetDestructor(&destruct_LauLASSBWRes);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::LauLASSBWRes*)
   {
      return GenerateInitInstanceLocal((::LauLASSBWRes*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::LauLASSBWRes*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_LauKMatrixProdPole(void *p);
   static void deleteArray_LauKMatrixProdPole(void *p);
   static void destruct_LauKMatrixProdPole(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::LauKMatrixProdPole*)
   {
      ::LauKMatrixProdPole *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::LauKMatrixProdPole >(0);
      static ::ROOT::TGenericClassInfo 
         instance("LauKMatrixProdPole", ::LauKMatrixProdPole::Class_Version(), "LauKMatrixProdPole.hh", 45,
                  typeid(::LauKMatrixProdPole), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::LauKMatrixProdPole::Dictionary, isa_proxy, 4,
                  sizeof(::LauKMatrixProdPole) );
      instance.SetDelete(&delete_LauKMatrixProdPole);
      instance.SetDeleteArray(&deleteArray_LauKMatrixProdPole);
      instance.SetDestructor(&destruct_LauKMatrixProdPole);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::LauKMatrixProdPole*)
   {
      return GenerateInitInstanceLocal((::LauKMatrixProdPole*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::LauKMatrixProdPole*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_LauParametricStepFuncPdf(void *p);
   static void deleteArray_LauParametricStepFuncPdf(void *p);
   static void destruct_LauParametricStepFuncPdf(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::LauParametricStepFuncPdf*)
   {
      ::LauParametricStepFuncPdf *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::LauParametricStepFuncPdf >(0);
      static ::ROOT::TGenericClassInfo 
         instance("LauParametricStepFuncPdf", ::LauParametricStepFuncPdf::Class_Version(), "LauParametricStepFuncPdf.hh", 65,
                  typeid(::LauParametricStepFuncPdf), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::LauParametricStepFuncPdf::Dictionary, isa_proxy, 4,
                  sizeof(::LauParametricStepFuncPdf) );
      instance.SetDelete(&delete_LauParametricStepFuncPdf);
      instance.SetDeleteArray(&deleteArray_LauParametricStepFuncPdf);
      instance.SetDestructor(&destruct_LauParametricStepFuncPdf);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::LauParametricStepFuncPdf*)
   {
      return GenerateInitInstanceLocal((::LauParametricStepFuncPdf*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::LauParametricStepFuncPdf*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_LauBelleCPCoeffSet(void *p);
   static void deleteArray_LauBelleCPCoeffSet(void *p);
   static void destruct_LauBelleCPCoeffSet(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::LauBelleCPCoeffSet*)
   {
      ::LauBelleCPCoeffSet *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::LauBelleCPCoeffSet >(0);
      static ::ROOT::TGenericClassInfo 
         instance("LauBelleCPCoeffSet", ::LauBelleCPCoeffSet::Class_Version(), "LauBelleCPCoeffSet.hh", 54,
                  typeid(::LauBelleCPCoeffSet), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::LauBelleCPCoeffSet::Dictionary, isa_proxy, 4,
                  sizeof(::LauBelleCPCoeffSet) );
      instance.SetDelete(&delete_LauBelleCPCoeffSet);
      instance.SetDeleteArray(&deleteArray_LauBelleCPCoeffSet);
      instance.SetDestructor(&destruct_LauBelleCPCoeffSet);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::LauBelleCPCoeffSet*)
   {
      return GenerateInitInstanceLocal((::LauBelleCPCoeffSet*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::LauBelleCPCoeffSet*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_LauCalcChiSq(void *p = 0);
   static void *newArray_LauCalcChiSq(Long_t size, void *p);
   static void delete_LauCalcChiSq(void *p);
   static void deleteArray_LauCalcChiSq(void *p);
   static void destruct_LauCalcChiSq(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::LauCalcChiSq*)
   {
      ::LauCalcChiSq *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::LauCalcChiSq >(0);
      static ::ROOT::TGenericClassInfo 
         instance("LauCalcChiSq", ::LauCalcChiSq::Class_Version(), "LauCalcChiSq.hh", 50,
                  typeid(::LauCalcChiSq), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::LauCalcChiSq::Dictionary, isa_proxy, 4,
                  sizeof(::LauCalcChiSq) );
      instance.SetNew(&new_LauCalcChiSq);
      instance.SetNewArray(&newArray_LauCalcChiSq);
      instance.SetDelete(&delete_LauCalcChiSq);
      instance.SetDeleteArray(&deleteArray_LauCalcChiSq);
      instance.SetDestructor(&destruct_LauCalcChiSq);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::LauCalcChiSq*)
   {
      return GenerateInitInstanceLocal((::LauCalcChiSq*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::LauCalcChiSq*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_LauAsymmCalc(void *p);
   static void deleteArray_LauAsymmCalc(void *p);
   static void destruct_LauAsymmCalc(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::LauAsymmCalc*)
   {
      ::LauAsymmCalc *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::LauAsymmCalc >(0);
      static ::ROOT::TGenericClassInfo 
         instance("LauAsymmCalc", ::LauAsymmCalc::Class_Version(), "LauAsymmCalc.hh", 39,
                  typeid(::LauAsymmCalc), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::LauAsymmCalc::Dictionary, isa_proxy, 4,
                  sizeof(::LauAsymmCalc) );
      instance.SetDelete(&delete_LauAsymmCalc);
      instance.SetDeleteArray(&deleteArray_LauAsymmCalc);
      instance.SetDestructor(&destruct_LauAsymmCalc);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::LauAsymmCalc*)
   {
      return GenerateInitInstanceLocal((::LauAsymmCalc*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::LauAsymmCalc*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_LauBifurcatedGaussPdf(void *p);
   static void deleteArray_LauBifurcatedGaussPdf(void *p);
   static void destruct_LauBifurcatedGaussPdf(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::LauBifurcatedGaussPdf*)
   {
      ::LauBifurcatedGaussPdf *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::LauBifurcatedGaussPdf >(0);
      static ::ROOT::TGenericClassInfo 
         instance("LauBifurcatedGaussPdf", ::LauBifurcatedGaussPdf::Class_Version(), "LauBifurcatedGaussPdf.hh", 48,
                  typeid(::LauBifurcatedGaussPdf), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::LauBifurcatedGaussPdf::Dictionary, isa_proxy, 4,
                  sizeof(::LauBifurcatedGaussPdf) );
      instance.SetDelete(&delete_LauBifurcatedGaussPdf);
      instance.SetDeleteArray(&deleteArray_LauBifurcatedGaussPdf);
      instance.SetDestructor(&destruct_LauBifurcatedGaussPdf);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::LauBifurcatedGaussPdf*)
   {
      return GenerateInitInstanceLocal((::LauBifurcatedGaussPdf*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::LauBifurcatedGaussPdf*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_LauCrystalBallPdf(void *p);
   static void deleteArray_LauCrystalBallPdf(void *p);
   static void destruct_LauCrystalBallPdf(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::LauCrystalBallPdf*)
   {
      ::LauCrystalBallPdf *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::LauCrystalBallPdf >(0);
      static ::ROOT::TGenericClassInfo 
         instance("LauCrystalBallPdf", ::LauCrystalBallPdf::Class_Version(), "LauCrystalBallPdf.hh", 64,
                  typeid(::LauCrystalBallPdf), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::LauCrystalBallPdf::Dictionary, isa_proxy, 4,
                  sizeof(::LauCrystalBallPdf) );
      instance.SetDelete(&delete_LauCrystalBallPdf);
      instance.SetDeleteArray(&deleteArray_LauCrystalBallPdf);
      instance.SetDestructor(&destruct_LauCrystalBallPdf);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::LauCrystalBallPdf*)
   {
      return GenerateInitInstanceLocal((::LauCrystalBallPdf*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::LauCrystalBallPdf*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_LauKappaRes(void *p);
   static void deleteArray_LauKappaRes(void *p);
   static void destruct_LauKappaRes(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::LauKappaRes*)
   {
      ::LauKappaRes *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::LauKappaRes >(0);
      static ::ROOT::TGenericClassInfo 
         instance("LauKappaRes", ::LauKappaRes::Class_Version(), "LauKappaRes.hh", 46,
                  typeid(::LauKappaRes), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::LauKappaRes::Dictionary, isa_proxy, 4,
                  sizeof(::LauKappaRes) );
      instance.SetDelete(&delete_LauKappaRes);
      instance.SetDeleteArray(&deleteArray_LauKappaRes);
      instance.SetDestructor(&destruct_LauKappaRes);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::LauKappaRes*)
   {
      return GenerateInitInstanceLocal((::LauKappaRes*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::LauKappaRes*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_LauSimpleFitModel(void *p);
   static void deleteArray_LauSimpleFitModel(void *p);
   static void destruct_LauSimpleFitModel(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::LauSimpleFitModel*)
   {
      ::LauSimpleFitModel *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::LauSimpleFitModel >(0);
      static ::ROOT::TGenericClassInfo 
         instance("LauSimpleFitModel", ::LauSimpleFitModel::Class_Version(), "LauSimpleFitModel.hh", 59,
                  typeid(::LauSimpleFitModel), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::LauSimpleFitModel::Dictionary, isa_proxy, 4,
                  sizeof(::LauSimpleFitModel) );
      instance.SetDelete(&delete_LauSimpleFitModel);
      instance.SetDeleteArray(&deleteArray_LauSimpleFitModel);
      instance.SetDestructor(&destruct_LauSimpleFitModel);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::LauSimpleFitModel*)
   {
      return GenerateInitInstanceLocal((::LauSimpleFitModel*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::LauSimpleFitModel*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_LauNRAmplitude(void *p);
   static void deleteArray_LauNRAmplitude(void *p);
   static void destruct_LauNRAmplitude(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::LauNRAmplitude*)
   {
      ::LauNRAmplitude *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::LauNRAmplitude >(0);
      static ::ROOT::TGenericClassInfo 
         instance("LauNRAmplitude", ::LauNRAmplitude::Class_Version(), "LauNRAmplitude.hh", 47,
                  typeid(::LauNRAmplitude), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::LauNRAmplitude::Dictionary, isa_proxy, 4,
                  sizeof(::LauNRAmplitude) );
      instance.SetDelete(&delete_LauNRAmplitude);
      instance.SetDeleteArray(&deleteArray_LauNRAmplitude);
      instance.SetDestructor(&destruct_LauNRAmplitude);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::LauNRAmplitude*)
   {
      return GenerateInitInstanceLocal((::LauNRAmplitude*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::LauNRAmplitude*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_LauAbsBkgndDPModel(void *p);
   static void deleteArray_LauAbsBkgndDPModel(void *p);
   static void destruct_LauAbsBkgndDPModel(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::LauAbsBkgndDPModel*)
   {
      ::LauAbsBkgndDPModel *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::LauAbsBkgndDPModel >(0);
      static ::ROOT::TGenericClassInfo 
         instance("LauAbsBkgndDPModel", ::LauAbsBkgndDPModel::Class_Version(), "LauAbsBkgndDPModel.hh", 45,
                  typeid(::LauAbsBkgndDPModel), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::LauAbsBkgndDPModel::Dictionary, isa_proxy, 4,
                  sizeof(::LauAbsBkgndDPModel) );
      instance.SetDelete(&delete_LauAbsBkgndDPModel);
      instance.SetDeleteArray(&deleteArray_LauAbsBkgndDPModel);
      instance.SetDestructor(&destruct_LauAbsBkgndDPModel);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::LauAbsBkgndDPModel*)
   {
      return GenerateInitInstanceLocal((::LauAbsBkgndDPModel*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::LauAbsBkgndDPModel*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_LauBkgndDPModel(void *p);
   static void deleteArray_LauBkgndDPModel(void *p);
   static void destruct_LauBkgndDPModel(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::LauBkgndDPModel*)
   {
      ::LauBkgndDPModel *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::LauBkgndDPModel >(0);
      static ::ROOT::TGenericClassInfo 
         instance("LauBkgndDPModel", ::LauBkgndDPModel::Class_Version(), "LauBkgndDPModel.hh", 48,
                  typeid(::LauBkgndDPModel), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::LauBkgndDPModel::Dictionary, isa_proxy, 4,
                  sizeof(::LauBkgndDPModel) );
      instance.SetDelete(&delete_LauBkgndDPModel);
      instance.SetDeleteArray(&deleteArray_LauBkgndDPModel);
      instance.SetDestructor(&destruct_LauBkgndDPModel);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::LauBkgndDPModel*)
   {
      return GenerateInitInstanceLocal((::LauBkgndDPModel*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::LauBkgndDPModel*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_Lau1DCubicSpline(void *p);
   static void deleteArray_Lau1DCubicSpline(void *p);
   static void destruct_Lau1DCubicSpline(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Lau1DCubicSpline*)
   {
      ::Lau1DCubicSpline *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::Lau1DCubicSpline >(0);
      static ::ROOT::TGenericClassInfo 
         instance("Lau1DCubicSpline", ::Lau1DCubicSpline::Class_Version(), "Lau1DCubicSpline.hh", 84,
                  typeid(::Lau1DCubicSpline), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::Lau1DCubicSpline::Dictionary, isa_proxy, 4,
                  sizeof(::Lau1DCubicSpline) );
      instance.SetDelete(&delete_Lau1DCubicSpline);
      instance.SetDeleteArray(&deleteArray_Lau1DCubicSpline);
      instance.SetDestructor(&destruct_Lau1DCubicSpline);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Lau1DCubicSpline*)
   {
      return GenerateInitInstanceLocal((::Lau1DCubicSpline*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::Lau1DCubicSpline*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_LauAbsModIndPartWave(void *p);
   static void deleteArray_LauAbsModIndPartWave(void *p);
   static void destruct_LauAbsModIndPartWave(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::LauAbsModIndPartWave*)
   {
      ::LauAbsModIndPartWave *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::LauAbsModIndPartWave >(0);
      static ::ROOT::TGenericClassInfo 
         instance("LauAbsModIndPartWave", ::LauAbsModIndPartWave::Class_Version(), "LauAbsModIndPartWave.hh", 48,
                  typeid(::LauAbsModIndPartWave), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::LauAbsModIndPartWave::Dictionary, isa_proxy, 4,
                  sizeof(::LauAbsModIndPartWave) );
      instance.SetDelete(&delete_LauAbsModIndPartWave);
      instance.SetDeleteArray(&deleteArray_LauAbsModIndPartWave);
      instance.SetDestructor(&destruct_LauAbsModIndPartWave);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::LauAbsModIndPartWave*)
   {
      return GenerateInitInstanceLocal((::LauAbsModIndPartWave*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::LauAbsModIndPartWave*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::LauFitter*)
   {
      ::LauFitter *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::LauFitter >(0);
      static ::ROOT::TGenericClassInfo 
         instance("LauFitter", ::LauFitter::Class_Version(), "LauFitter.hh", 45,
                  typeid(::LauFitter), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::LauFitter::Dictionary, isa_proxy, 4,
                  sizeof(::LauFitter) );
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::LauFitter*)
   {
      return GenerateInitInstanceLocal((::LauFitter*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::LauFitter*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_LauKMatrixPropFactory(void *p);
   static void deleteArray_LauKMatrixPropFactory(void *p);
   static void destruct_LauKMatrixPropFactory(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::LauKMatrixPropFactory*)
   {
      ::LauKMatrixPropFactory *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::LauKMatrixPropFactory >(0);
      static ::ROOT::TGenericClassInfo 
         instance("LauKMatrixPropFactory", ::LauKMatrixPropFactory::Class_Version(), "LauKMatrixPropFactory.hh", 43,
                  typeid(::LauKMatrixPropFactory), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::LauKMatrixPropFactory::Dictionary, isa_proxy, 4,
                  sizeof(::LauKMatrixPropFactory) );
      instance.SetDelete(&delete_LauKMatrixPropFactory);
      instance.SetDeleteArray(&deleteArray_LauKMatrixPropFactory);
      instance.SetDestructor(&destruct_LauKMatrixPropFactory);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::LauKMatrixPropFactory*)
   {
      return GenerateInitInstanceLocal((::LauKMatrixPropFactory*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::LauKMatrixPropFactory*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_LauLASSNRRes(void *p);
   static void deleteArray_LauLASSNRRes(void *p);
   static void destruct_LauLASSNRRes(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::LauLASSNRRes*)
   {
      ::LauLASSNRRes *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::LauLASSNRRes >(0);
      static ::ROOT::TGenericClassInfo 
         instance("LauLASSNRRes", ::LauLASSNRRes::Class_Version(), "LauLASSNRRes.hh", 45,
                  typeid(::LauLASSNRRes), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::LauLASSNRRes::Dictionary, isa_proxy, 4,
                  sizeof(::LauLASSNRRes) );
      instance.SetDelete(&delete_LauLASSNRRes);
      instance.SetDeleteArray(&deleteArray_LauLASSNRRes);
      instance.SetDestructor(&destruct_LauLASSNRRes);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::LauLASSNRRes*)
   {
      return GenerateInitInstanceLocal((::LauLASSNRRes*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::LauLASSNRRes*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_LauBelleNR(void *p);
   static void deleteArray_LauBelleNR(void *p);
   static void destruct_LauBelleNR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::LauBelleNR*)
   {
      ::LauBelleNR *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::LauBelleNR >(0);
      static ::ROOT::TGenericClassInfo 
         instance("LauBelleNR", ::LauBelleNR::Class_Version(), "LauBelleNR.hh", 48,
                  typeid(::LauBelleNR), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::LauBelleNR::Dictionary, isa_proxy, 4,
                  sizeof(::LauBelleNR) );
      instance.SetDelete(&delete_LauBelleNR);
      instance.SetDeleteArray(&deleteArray_LauBelleNR);
      instance.SetDestructor(&destruct_LauBelleNR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::LauBelleNR*)
   {
      return GenerateInitInstanceLocal((::LauBelleNR*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::LauBelleNR*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_LauSigmoidPdf(void *p);
   static void deleteArray_LauSigmoidPdf(void *p);
   static void destruct_LauSigmoidPdf(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::LauSigmoidPdf*)
   {
      ::LauSigmoidPdf *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::LauSigmoidPdf >(0);
      static ::ROOT::TGenericClassInfo 
         instance("LauSigmoidPdf", ::LauSigmoidPdf::Class_Version(), "LauSigmoidPdf.hh", 50,
                  typeid(::LauSigmoidPdf), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::LauSigmoidPdf::Dictionary, isa_proxy, 4,
                  sizeof(::LauSigmoidPdf) );
      instance.SetDelete(&delete_LauSigmoidPdf);
      instance.SetDeleteArray(&deleteArray_LauSigmoidPdf);
      instance.SetDestructor(&destruct_LauSigmoidPdf);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::LauSigmoidPdf*)
   {
      return GenerateInitInstanceLocal((::LauSigmoidPdf*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::LauSigmoidPdf*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_Lau2DAbsHistDPPdf(void *p);
   static void deleteArray_Lau2DAbsHistDPPdf(void *p);
   static void destruct_Lau2DAbsHistDPPdf(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Lau2DAbsHistDPPdf*)
   {
      ::Lau2DAbsHistDPPdf *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::Lau2DAbsHistDPPdf >(0);
      static ::ROOT::TGenericClassInfo 
         instance("Lau2DAbsHistDPPdf", ::Lau2DAbsHistDPPdf::Class_Version(), "Lau2DAbsHistDPPdf.hh", 47,
                  typeid(::Lau2DAbsHistDPPdf), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::Lau2DAbsHistDPPdf::Dictionary, isa_proxy, 4,
                  sizeof(::Lau2DAbsHistDPPdf) );
      instance.SetDelete(&delete_Lau2DAbsHistDPPdf);
      instance.SetDeleteArray(&deleteArray_Lau2DAbsHistDPPdf);
      instance.SetDestructor(&destruct_Lau2DAbsHistDPPdf);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Lau2DAbsHistDPPdf*)
   {
      return GenerateInitInstanceLocal((::Lau2DAbsHistDPPdf*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::Lau2DAbsHistDPPdf*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_LauDPDepMapPdf(void *p);
   static void deleteArray_LauDPDepMapPdf(void *p);
   static void destruct_LauDPDepMapPdf(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::LauDPDepMapPdf*)
   {
      ::LauDPDepMapPdf *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::LauDPDepMapPdf >(0);
      static ::ROOT::TGenericClassInfo 
         instance("LauDPDepMapPdf", ::LauDPDepMapPdf::Class_Version(), "LauDPDepMapPdf.hh", 54,
                  typeid(::LauDPDepMapPdf), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::LauDPDepMapPdf::Dictionary, isa_proxy, 4,
                  sizeof(::LauDPDepMapPdf) );
      instance.SetDelete(&delete_LauDPDepMapPdf);
      instance.SetDeleteArray(&deleteArray_LauDPDepMapPdf);
      instance.SetDestructor(&destruct_LauDPDepMapPdf);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::LauDPDepMapPdf*)
   {
      return GenerateInitInstanceLocal((::LauDPDepMapPdf*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::LauDPDepMapPdf*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_LauBreitWignerRes(void *p);
   static void deleteArray_LauBreitWignerRes(void *p);
   static void destruct_LauBreitWignerRes(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::LauBreitWignerRes*)
   {
      ::LauBreitWignerRes *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::LauBreitWignerRes >(0);
      static ::ROOT::TGenericClassInfo 
         instance("LauBreitWignerRes", ::LauBreitWignerRes::Class_Version(), "LauBreitWignerRes.hh", 45,
                  typeid(::LauBreitWignerRes), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::LauBreitWignerRes::Dictionary, isa_proxy, 4,
                  sizeof(::LauBreitWignerRes) );
      instance.SetDelete(&delete_LauBreitWignerRes);
      instance.SetDeleteArray(&deleteArray_LauBreitWignerRes);
      instance.SetDestructor(&destruct_LauBreitWignerRes);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::LauBreitWignerRes*)
   {
      return GenerateInitInstanceLocal((::LauBreitWignerRes*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::LauBreitWignerRes*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_Lau2DSplineDPPdf(void *p);
   static void deleteArray_Lau2DSplineDPPdf(void *p);
   static void destruct_Lau2DSplineDPPdf(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Lau2DSplineDPPdf*)
   {
      ::Lau2DSplineDPPdf *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::Lau2DSplineDPPdf >(0);
      static ::ROOT::TGenericClassInfo 
         instance("Lau2DSplineDPPdf", ::Lau2DSplineDPPdf::Class_Version(), "Lau2DSplineDPPdf.hh", 48,
                  typeid(::Lau2DSplineDPPdf), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::Lau2DSplineDPPdf::Dictionary, isa_proxy, 4,
                  sizeof(::Lau2DSplineDPPdf) );
      instance.SetDelete(&delete_Lau2DSplineDPPdf);
      instance.SetDeleteArray(&deleteArray_Lau2DSplineDPPdf);
      instance.SetDestructor(&destruct_Lau2DSplineDPPdf);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Lau2DSplineDPPdf*)
   {
      return GenerateInitInstanceLocal((::Lau2DSplineDPPdf*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::Lau2DSplineDPPdf*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *LauKinematics_Dictionary();
   static void LauKinematics_TClassManip(TClass*);
   static void delete_LauKinematics(void *p);
   static void deleteArray_LauKinematics(void *p);
   static void destruct_LauKinematics(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::LauKinematics*)
   {
      ::LauKinematics *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::LauKinematics));
      static ::ROOT::TGenericClassInfo 
         instance("LauKinematics", "LauKinematics.hh", 45,
                  typeid(::LauKinematics), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &LauKinematics_Dictionary, isa_proxy, 4,
                  sizeof(::LauKinematics) );
      instance.SetDelete(&delete_LauKinematics);
      instance.SetDeleteArray(&deleteArray_LauKinematics);
      instance.SetDestructor(&destruct_LauKinematics);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::LauKinematics*)
   {
      return GenerateInitInstanceLocal((::LauKinematics*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::LauKinematics*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *LauKinematics_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::LauKinematics*)0x0)->GetClass();
      LauKinematics_TClassManip(theClass);
   return theClass;
   }

   static void LauKinematics_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_LauCacheData(void *p = 0);
   static void *newArray_LauCacheData(Long_t size, void *p);
   static void delete_LauCacheData(void *p);
   static void deleteArray_LauCacheData(void *p);
   static void destruct_LauCacheData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::LauCacheData*)
   {
      ::LauCacheData *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::LauCacheData >(0);
      static ::ROOT::TGenericClassInfo 
         instance("LauCacheData", ::LauCacheData::Class_Version(), "LauCacheData.hh", 44,
                  typeid(::LauCacheData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::LauCacheData::Dictionary, isa_proxy, 4,
                  sizeof(::LauCacheData) );
      instance.SetNew(&new_LauCacheData);
      instance.SetNewArray(&newArray_LauCacheData);
      instance.SetDelete(&delete_LauCacheData);
      instance.SetDeleteArray(&deleteArray_LauCacheData);
      instance.SetDestructor(&destruct_LauCacheData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::LauCacheData*)
   {
      return GenerateInitInstanceLocal((::LauCacheData*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::LauCacheData*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_LauPolarFormFactorNR(void *p);
   static void deleteArray_LauPolarFormFactorNR(void *p);
   static void destruct_LauPolarFormFactorNR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::LauPolarFormFactorNR*)
   {
      ::LauPolarFormFactorNR *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::LauPolarFormFactorNR >(0);
      static ::ROOT::TGenericClassInfo 
         instance("LauPolarFormFactorNR", ::LauPolarFormFactorNR::Class_Version(), "LauPolarFormFactorNR.hh", 49,
                  typeid(::LauPolarFormFactorNR), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::LauPolarFormFactorNR::Dictionary, isa_proxy, 4,
                  sizeof(::LauPolarFormFactorNR) );
      instance.SetDelete(&delete_LauPolarFormFactorNR);
      instance.SetDeleteArray(&deleteArray_LauPolarFormFactorNR);
      instance.SetDestructor(&destruct_LauPolarFormFactorNR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::LauPolarFormFactorNR*)
   {
      return GenerateInitInstanceLocal((::LauPolarFormFactorNR*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::LauPolarFormFactorNR*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_Lau2DAbsDP(void *p);
   static void deleteArray_Lau2DAbsDP(void *p);
   static void destruct_Lau2DAbsDP(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Lau2DAbsDP*)
   {
      ::Lau2DAbsDP *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::Lau2DAbsDP >(0);
      static ::ROOT::TGenericClassInfo 
         instance("Lau2DAbsDP", ::Lau2DAbsDP::Class_Version(), "Lau2DAbsDP.hh", 41,
                  typeid(::Lau2DAbsDP), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::Lau2DAbsDP::Dictionary, isa_proxy, 4,
                  sizeof(::Lau2DAbsDP) );
      instance.SetDelete(&delete_Lau2DAbsDP);
      instance.SetDeleteArray(&deleteArray_Lau2DAbsDP);
      instance.SetDestructor(&destruct_Lau2DAbsDP);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Lau2DAbsDP*)
   {
      return GenerateInitInstanceLocal((::Lau2DAbsDP*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::Lau2DAbsDP*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_LauRescatteringRes(void *p);
   static void deleteArray_LauRescatteringRes(void *p);
   static void destruct_LauRescatteringRes(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::LauRescatteringRes*)
   {
      ::LauRescatteringRes *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::LauRescatteringRes >(0);
      static ::ROOT::TGenericClassInfo 
         instance("LauRescatteringRes", ::LauRescatteringRes::Class_Version(), "LauRescatteringRes.hh", 49,
                  typeid(::LauRescatteringRes), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::LauRescatteringRes::Dictionary, isa_proxy, 4,
                  sizeof(::LauRescatteringRes) );
      instance.SetDelete(&delete_LauRescatteringRes);
      instance.SetDeleteArray(&deleteArray_LauRescatteringRes);
      instance.SetDestructor(&destruct_LauRescatteringRes);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::LauRescatteringRes*)
   {
      return GenerateInitInstanceLocal((::LauRescatteringRes*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::LauRescatteringRes*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_LauCartesianGammaCPCoeffSet(void *p);
   static void deleteArray_LauCartesianGammaCPCoeffSet(void *p);
   static void destruct_LauCartesianGammaCPCoeffSet(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::LauCartesianGammaCPCoeffSet*)
   {
      ::LauCartesianGammaCPCoeffSet *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::LauCartesianGammaCPCoeffSet >(0);
      static ::ROOT::TGenericClassInfo 
         instance("LauCartesianGammaCPCoeffSet", ::LauCartesianGammaCPCoeffSet::Class_Version(), "LauCartesianGammaCPCoeffSet.hh", 50,
                  typeid(::LauCartesianGammaCPCoeffSet), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::LauCartesianGammaCPCoeffSet::Dictionary, isa_proxy, 4,
                  sizeof(::LauCartesianGammaCPCoeffSet) );
      instance.SetDelete(&delete_LauCartesianGammaCPCoeffSet);
      instance.SetDeleteArray(&deleteArray_LauCartesianGammaCPCoeffSet);
      instance.SetDestructor(&destruct_LauCartesianGammaCPCoeffSet);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::LauCartesianGammaCPCoeffSet*)
   {
      return GenerateInitInstanceLocal((::LauCartesianGammaCPCoeffSet*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::LauCartesianGammaCPCoeffSet*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_LauDPDepGaussPdf(void *p);
   static void deleteArray_LauDPDepGaussPdf(void *p);
   static void destruct_LauDPDepGaussPdf(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::LauDPDepGaussPdf*)
   {
      ::LauDPDepGaussPdf *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::LauDPDepGaussPdf >(0);
      static ::ROOT::TGenericClassInfo 
         instance("LauDPDepGaussPdf", ::LauDPDepGaussPdf::Class_Version(), "LauDPDepGaussPdf.hh", 49,
                  typeid(::LauDPDepGaussPdf), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::LauDPDepGaussPdf::Dictionary, isa_proxy, 4,
                  sizeof(::LauDPDepGaussPdf) );
      instance.SetDelete(&delete_LauDPDepGaussPdf);
      instance.SetDeleteArray(&deleteArray_LauDPDepGaussPdf);
      instance.SetDestructor(&destruct_LauDPDepGaussPdf);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::LauDPDepGaussPdf*)
   {
      return GenerateInitInstanceLocal((::LauDPDepGaussPdf*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::LauDPDepGaussPdf*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_LauScfMap(void *p = 0);
   static void *newArray_LauScfMap(Long_t size, void *p);
   static void delete_LauScfMap(void *p);
   static void deleteArray_LauScfMap(void *p);
   static void destruct_LauScfMap(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::LauScfMap*)
   {
      ::LauScfMap *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::LauScfMap >(0);
      static ::ROOT::TGenericClassInfo 
         instance("LauScfMap", ::LauScfMap::Class_Version(), "LauScfMap.hh", 43,
                  typeid(::LauScfMap), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::LauScfMap::Dictionary, isa_proxy, 4,
                  sizeof(::LauScfMap) );
      instance.SetNew(&new_LauScfMap);
      instance.SetNewArray(&newArray_LauScfMap);
      instance.SetDelete(&delete_LauScfMap);
      instance.SetDeleteArray(&deleteArray_LauScfMap);
      instance.SetDestructor(&destruct_LauScfMap);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::LauScfMap*)
   {
      return GenerateInitInstanceLocal((::LauScfMap*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::LauScfMap*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_LauExponentialPdf(void *p);
   static void deleteArray_LauExponentialPdf(void *p);
   static void destruct_LauExponentialPdf(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::LauExponentialPdf*)
   {
      ::LauExponentialPdf *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::LauExponentialPdf >(0);
      static ::ROOT::TGenericClassInfo 
         instance("LauExponentialPdf", ::LauExponentialPdf::Class_Version(), "LauExponentialPdf.hh", 49,
                  typeid(::LauExponentialPdf), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::LauExponentialPdf::Dictionary, isa_proxy, 4,
                  sizeof(::LauExponentialPdf) );
      instance.SetDelete(&delete_LauExponentialPdf);
      instance.SetDeleteArray(&deleteArray_LauExponentialPdf);
      instance.SetDestructor(&destruct_LauExponentialPdf);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::LauExponentialPdf*)
   {
      return GenerateInitInstanceLocal((::LauExponentialPdf*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::LauExponentialPdf*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_LauBelleSymNR(void *p);
   static void deleteArray_LauBelleSymNR(void *p);
   static void destruct_LauBelleSymNR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::LauBelleSymNR*)
   {
      ::LauBelleSymNR *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::LauBelleSymNR >(0);
      static ::ROOT::TGenericClassInfo 
         instance("LauBelleSymNR", ::LauBelleSymNR::Class_Version(), "LauBelleSymNR.hh", 47,
                  typeid(::LauBelleSymNR), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::LauBelleSymNR::Dictionary, isa_proxy, 4,
                  sizeof(::LauBelleSymNR) );
      instance.SetDelete(&delete_LauBelleSymNR);
      instance.SetDeleteArray(&deleteArray_LauBelleSymNR);
      instance.SetDestructor(&destruct_LauBelleSymNR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::LauBelleSymNR*)
   {
      return GenerateInitInstanceLocal((::LauBelleSymNR*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::LauBelleSymNR*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_LauPoleRes(void *p);
   static void deleteArray_LauPoleRes(void *p);
   static void destruct_LauPoleRes(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::LauPoleRes*)
   {
      ::LauPoleRes *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::LauPoleRes >(0);
      static ::ROOT::TGenericClassInfo 
         instance("LauPoleRes", ::LauPoleRes::Class_Version(), "LauPoleRes.hh", 46,
                  typeid(::LauPoleRes), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::LauPoleRes::Dictionary, isa_proxy, 4,
                  sizeof(::LauPoleRes) );
      instance.SetDelete(&delete_LauPoleRes);
      instance.SetDeleteArray(&deleteArray_LauPoleRes);
      instance.SetDestructor(&destruct_LauPoleRes);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::LauPoleRes*)
   {
      return GenerateInitInstanceLocal((::LauPoleRes*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::LauPoleRes*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_LauRealImagCoeffSet(void *p);
   static void deleteArray_LauRealImagCoeffSet(void *p);
   static void destruct_LauRealImagCoeffSet(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::LauRealImagCoeffSet*)
   {
      ::LauRealImagCoeffSet *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::LauRealImagCoeffSet >(0);
      static ::ROOT::TGenericClassInfo 
         instance("LauRealImagCoeffSet", ::LauRealImagCoeffSet::Class_Version(), "LauRealImagCoeffSet.hh", 49,
                  typeid(::LauRealImagCoeffSet), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::LauRealImagCoeffSet::Dictionary, isa_proxy, 4,
                  sizeof(::LauRealImagCoeffSet) );
      instance.SetDelete(&delete_LauRealImagCoeffSet);
      instance.SetDeleteArray(&deleteArray_LauRealImagCoeffSet);
      instance.SetDestructor(&destruct_LauRealImagCoeffSet);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::LauRealImagCoeffSet*)
   {
      return GenerateInitInstanceLocal((::LauRealImagCoeffSet*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::LauRealImagCoeffSet*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_LauSigmaRes(void *p);
   static void deleteArray_LauSigmaRes(void *p);
   static void destruct_LauSigmaRes(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::LauSigmaRes*)
   {
      ::LauSigmaRes *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::LauSigmaRes >(0);
      static ::ROOT::TGenericClassInfo 
         instance("LauSigmaRes", ::LauSigmaRes::Class_Version(), "LauSigmaRes.hh", 45,
                  typeid(::LauSigmaRes), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::LauSigmaRes::Dictionary, isa_proxy, 4,
                  sizeof(::LauSigmaRes) );
      instance.SetDelete(&delete_LauSigmaRes);
      instance.SetDeleteArray(&deleteArray_LauSigmaRes);
      instance.SetDestructor(&destruct_LauSigmaRes);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::LauSigmaRes*)
   {
      return GenerateInitInstanceLocal((::LauSigmaRes*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::LauSigmaRes*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_LauLASSRes(void *p);
   static void deleteArray_LauLASSRes(void *p);
   static void destruct_LauLASSRes(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::LauLASSRes*)
   {
      ::LauLASSRes *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::LauLASSRes >(0);
      static ::ROOT::TGenericClassInfo 
         instance("LauLASSRes", ::LauLASSRes::Class_Version(), "LauLASSRes.hh", 45,
                  typeid(::LauLASSRes), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::LauLASSRes::Dictionary, isa_proxy, 4,
                  sizeof(::LauLASSRes) );
      instance.SetDelete(&delete_LauLASSRes);
      instance.SetDeleteArray(&deleteArray_LauLASSRes);
      instance.SetDestructor(&destruct_LauLASSRes);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::LauLASSRes*)
   {
      return GenerateInitInstanceLocal((::LauLASSRes*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::LauLASSRes*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *LauString_Dictionary();
   static void LauString_TClassManip(TClass*);
   static void *new_LauString(void *p = 0);
   static void *newArray_LauString(Long_t size, void *p);
   static void delete_LauString(void *p);
   static void deleteArray_LauString(void *p);
   static void destruct_LauString(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::LauString*)
   {
      ::LauString *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::LauString));
      static ::ROOT::TGenericClassInfo 
         instance("LauString", "LauString.hh", 43,
                  typeid(::LauString), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &LauString_Dictionary, isa_proxy, 4,
                  sizeof(::LauString) );
      instance.SetNew(&new_LauString);
      instance.SetNewArray(&newArray_LauString);
      instance.SetDelete(&delete_LauString);
      instance.SetDeleteArray(&deleteArray_LauString);
      instance.SetDestructor(&destruct_LauString);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::LauString*)
   {
      return GenerateInitInstanceLocal((::LauString*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::LauString*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *LauString_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::LauString*)0x0)->GetClass();
      LauString_TClassManip(theClass);
   return theClass;
   }

   static void LauString_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void delete_LauArgusPdf(void *p);
   static void deleteArray_LauArgusPdf(void *p);
   static void destruct_LauArgusPdf(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::LauArgusPdf*)
   {
      ::LauArgusPdf *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::LauArgusPdf >(0);
      static ::ROOT::TGenericClassInfo 
         instance("LauArgusPdf", ::LauArgusPdf::Class_Version(), "LauArgusPdf.hh", 48,
                  typeid(::LauArgusPdf), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::LauArgusPdf::Dictionary, isa_proxy, 4,
                  sizeof(::LauArgusPdf) );
      instance.SetDelete(&delete_LauArgusPdf);
      instance.SetDeleteArray(&deleteArray_LauArgusPdf);
      instance.SetDestructor(&destruct_LauArgusPdf);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::LauArgusPdf*)
   {
      return GenerateInitInstanceLocal((::LauArgusPdf*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::LauArgusPdf*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_LauAbsIncohRes(void *p);
   static void deleteArray_LauAbsIncohRes(void *p);
   static void destruct_LauAbsIncohRes(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::LauAbsIncohRes*)
   {
      ::LauAbsIncohRes *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::LauAbsIncohRes >(0);
      static ::ROOT::TGenericClassInfo 
         instance("LauAbsIncohRes", ::LauAbsIncohRes::Class_Version(), "LauAbsIncohRes.hh", 43,
                  typeid(::LauAbsIncohRes), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::LauAbsIncohRes::Dictionary, isa_proxy, 4,
                  sizeof(::LauAbsIncohRes) );
      instance.SetDelete(&delete_LauAbsIncohRes);
      instance.SetDeleteArray(&deleteArray_LauAbsIncohRes);
      instance.SetDestructor(&destruct_LauAbsIncohRes);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::LauAbsIncohRes*)
   {
      return GenerateInitInstanceLocal((::LauAbsIncohRes*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::LauAbsIncohRes*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_LauGaussIncohRes(void *p);
   static void deleteArray_LauGaussIncohRes(void *p);
   static void destruct_LauGaussIncohRes(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::LauGaussIncohRes*)
   {
      ::LauGaussIncohRes *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::LauGaussIncohRes >(0);
      static ::ROOT::TGenericClassInfo 
         instance("LauGaussIncohRes", ::LauGaussIncohRes::Class_Version(), "LauGaussIncohRes.hh", 46,
                  typeid(::LauGaussIncohRes), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::LauGaussIncohRes::Dictionary, isa_proxy, 4,
                  sizeof(::LauGaussIncohRes) );
      instance.SetDelete(&delete_LauGaussIncohRes);
      instance.SetDeleteArray(&deleteArray_LauGaussIncohRes);
      instance.SetDestructor(&destruct_LauGaussIncohRes);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::LauGaussIncohRes*)
   {
      return GenerateInitInstanceLocal((::LauGaussIncohRes*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::LauGaussIncohRes*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::LauDatabasePDG*)
   {
      ::LauDatabasePDG *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::LauDatabasePDG >(0);
      static ::ROOT::TGenericClassInfo 
         instance("LauDatabasePDG", ::LauDatabasePDG::Class_Version(), "LauDatabasePDG.hh", 46,
                  typeid(::LauDatabasePDG), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::LauDatabasePDG::Dictionary, isa_proxy, 4,
                  sizeof(::LauDatabasePDG) );
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::LauDatabasePDG*)
   {
      return GenerateInitInstanceLocal((::LauDatabasePDG*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::LauDatabasePDG*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_LauFlatteRes(void *p);
   static void deleteArray_LauFlatteRes(void *p);
   static void destruct_LauFlatteRes(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::LauFlatteRes*)
   {
      ::LauFlatteRes *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::LauFlatteRes >(0);
      static ::ROOT::TGenericClassInfo 
         instance("LauFlatteRes", ::LauFlatteRes::Class_Version(), "LauFlatteRes.hh", 45,
                  typeid(::LauFlatteRes), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::LauFlatteRes::Dictionary, isa_proxy, 4,
                  sizeof(::LauFlatteRes) );
      instance.SetDelete(&delete_LauFlatteRes);
      instance.SetDeleteArray(&deleteArray_LauFlatteRes);
      instance.SetDestructor(&destruct_LauFlatteRes);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::LauFlatteRes*)
   {
      return GenerateInitInstanceLocal((::LauFlatteRes*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::LauFlatteRes*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_LauCleoCPCoeffSet(void *p);
   static void deleteArray_LauCleoCPCoeffSet(void *p);
   static void destruct_LauCleoCPCoeffSet(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::LauCleoCPCoeffSet*)
   {
      ::LauCleoCPCoeffSet *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::LauCleoCPCoeffSet >(0);
      static ::ROOT::TGenericClassInfo 
         instance("LauCleoCPCoeffSet", ::LauCleoCPCoeffSet::Class_Version(), "LauCleoCPCoeffSet.hh", 54,
                  typeid(::LauCleoCPCoeffSet), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::LauCleoCPCoeffSet::Dictionary, isa_proxy, 4,
                  sizeof(::LauCleoCPCoeffSet) );
      instance.SetDelete(&delete_LauCleoCPCoeffSet);
      instance.SetDeleteArray(&deleteArray_LauCleoCPCoeffSet);
      instance.SetDestructor(&destruct_LauCleoCPCoeffSet);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::LauCleoCPCoeffSet*)
   {
      return GenerateInitInstanceLocal((::LauCleoCPCoeffSet*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::LauCleoCPCoeffSet*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_LauGaussPdf(void *p);
   static void deleteArray_LauGaussPdf(void *p);
   static void destruct_LauGaussPdf(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::LauGaussPdf*)
   {
      ::LauGaussPdf *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::LauGaussPdf >(0);
      static ::ROOT::TGenericClassInfo 
         instance("LauGaussPdf", ::LauGaussPdf::Class_Version(), "LauGaussPdf.hh", 47,
                  typeid(::LauGaussPdf), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::LauGaussPdf::Dictionary, isa_proxy, 4,
                  sizeof(::LauGaussPdf) );
      instance.SetDelete(&delete_LauGaussPdf);
      instance.SetDeleteArray(&deleteArray_LauGaussPdf);
      instance.SetDestructor(&destruct_LauGaussPdf);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::LauGaussPdf*)
   {
      return GenerateInitInstanceLocal((::LauGaussPdf*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::LauGaussPdf*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_Lau2DHistPdf(void *p);
   static void deleteArray_Lau2DHistPdf(void *p);
   static void destruct_Lau2DHistPdf(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Lau2DHistPdf*)
   {
      ::Lau2DHistPdf *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::Lau2DHistPdf >(0);
      static ::ROOT::TGenericClassInfo 
         instance("Lau2DHistPdf", ::Lau2DHistPdf::Class_Version(), "Lau2DHistPdf.hh", 47,
                  typeid(::Lau2DHistPdf), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::Lau2DHistPdf::Dictionary, isa_proxy, 4,
                  sizeof(::Lau2DHistPdf) );
      instance.SetDelete(&delete_Lau2DHistPdf);
      instance.SetDeleteArray(&deleteArray_Lau2DHistPdf);
      instance.SetDestructor(&destruct_Lau2DHistPdf);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Lau2DHistPdf*)
   {
      return GenerateInitInstanceLocal((::Lau2DHistPdf*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::Lau2DHistPdf*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_LauModIndPartWaveMagPhase(void *p);
   static void deleteArray_LauModIndPartWaveMagPhase(void *p);
   static void destruct_LauModIndPartWaveMagPhase(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::LauModIndPartWaveMagPhase*)
   {
      ::LauModIndPartWaveMagPhase *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::LauModIndPartWaveMagPhase >(0);
      static ::ROOT::TGenericClassInfo 
         instance("LauModIndPartWaveMagPhase", ::LauModIndPartWaveMagPhase::Class_Version(), "LauModIndPartWaveMagPhase.hh", 45,
                  typeid(::LauModIndPartWaveMagPhase), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::LauModIndPartWaveMagPhase::Dictionary, isa_proxy, 4,
                  sizeof(::LauModIndPartWaveMagPhase) );
      instance.SetDelete(&delete_LauModIndPartWaveMagPhase);
      instance.SetDeleteArray(&deleteArray_LauModIndPartWaveMagPhase);
      instance.SetDestructor(&destruct_LauModIndPartWaveMagPhase);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::LauModIndPartWaveMagPhase*)
   {
      return GenerateInitInstanceLocal((::LauModIndPartWaveMagPhase*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::LauModIndPartWaveMagPhase*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *LauTextFileParser_Dictionary();
   static void LauTextFileParser_TClassManip(TClass*);
   static void delete_LauTextFileParser(void *p);
   static void deleteArray_LauTextFileParser(void *p);
   static void destruct_LauTextFileParser(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::LauTextFileParser*)
   {
      ::LauTextFileParser *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::LauTextFileParser));
      static ::ROOT::TGenericClassInfo 
         instance("LauTextFileParser", "LauTextFileParser.hh", 46,
                  typeid(::LauTextFileParser), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &LauTextFileParser_Dictionary, isa_proxy, 4,
                  sizeof(::LauTextFileParser) );
      instance.SetDelete(&delete_LauTextFileParser);
      instance.SetDeleteArray(&deleteArray_LauTextFileParser);
      instance.SetDestructor(&destruct_LauTextFileParser);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::LauTextFileParser*)
   {
      return GenerateInitInstanceLocal((::LauTextFileParser*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::LauTextFileParser*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *LauTextFileParser_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::LauTextFileParser*)0x0)->GetClass();
      LauTextFileParser_TClassManip(theClass);
   return theClass;
   }

   static void LauTextFileParser_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void delete_Lau2DAbsHistDP(void *p);
   static void deleteArray_Lau2DAbsHistDP(void *p);
   static void destruct_Lau2DAbsHistDP(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Lau2DAbsHistDP*)
   {
      ::Lau2DAbsHistDP *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::Lau2DAbsHistDP >(0);
      static ::ROOT::TGenericClassInfo 
         instance("Lau2DAbsHistDP", ::Lau2DAbsHistDP::Class_Version(), "Lau2DAbsHistDP.hh", 48,
                  typeid(::Lau2DAbsHistDP), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::Lau2DAbsHistDP::Dictionary, isa_proxy, 4,
                  sizeof(::Lau2DAbsHistDP) );
      instance.SetDelete(&delete_Lau2DAbsHistDP);
      instance.SetDeleteArray(&deleteArray_Lau2DAbsHistDP);
      instance.SetDestructor(&destruct_Lau2DAbsHistDP);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Lau2DAbsHistDP*)
   {
      return GenerateInitInstanceLocal((::Lau2DAbsHistDP*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::Lau2DAbsHistDP*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_Lau2DHistDP(void *p);
   static void deleteArray_Lau2DHistDP(void *p);
   static void destruct_Lau2DHistDP(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Lau2DHistDP*)
   {
      ::Lau2DHistDP *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::Lau2DHistDP >(0);
      static ::ROOT::TGenericClassInfo 
         instance("Lau2DHistDP", ::Lau2DHistDP::Class_Version(), "Lau2DHistDP.hh", 48,
                  typeid(::Lau2DHistDP), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::Lau2DHistDP::Dictionary, isa_proxy, 4,
                  sizeof(::Lau2DHistDP) );
      instance.SetDelete(&delete_Lau2DHistDP);
      instance.SetDeleteArray(&deleteArray_Lau2DHistDP);
      instance.SetDestructor(&destruct_Lau2DHistDP);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Lau2DHistDP*)
   {
      return GenerateInitInstanceLocal((::Lau2DHistDP*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::Lau2DHistDP*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_LauDPPartialIntegralInfo(void *p);
   static void deleteArray_LauDPPartialIntegralInfo(void *p);
   static void destruct_LauDPPartialIntegralInfo(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::LauDPPartialIntegralInfo*)
   {
      ::LauDPPartialIntegralInfo *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::LauDPPartialIntegralInfo >(0);
      static ::ROOT::TGenericClassInfo 
         instance("LauDPPartialIntegralInfo", ::LauDPPartialIntegralInfo::Class_Version(), "LauDPPartialIntegralInfo.hh", 49,
                  typeid(::LauDPPartialIntegralInfo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::LauDPPartialIntegralInfo::Dictionary, isa_proxy, 4,
                  sizeof(::LauDPPartialIntegralInfo) );
      instance.SetDelete(&delete_LauDPPartialIntegralInfo);
      instance.SetDeleteArray(&deleteArray_LauDPPartialIntegralInfo);
      instance.SetDestructor(&destruct_LauDPPartialIntegralInfo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::LauDPPartialIntegralInfo*)
   {
      return GenerateInitInstanceLocal((::LauDPPartialIntegralInfo*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::LauDPPartialIntegralInfo*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_Lau1DHistPdf(void *p);
   static void deleteArray_Lau1DHistPdf(void *p);
   static void destruct_Lau1DHistPdf(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Lau1DHistPdf*)
   {
      ::Lau1DHistPdf *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::Lau1DHistPdf >(0);
      static ::ROOT::TGenericClassInfo 
         instance("Lau1DHistPdf", ::Lau1DHistPdf::Class_Version(), "Lau1DHistPdf.hh", 45,
                  typeid(::Lau1DHistPdf), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::Lau1DHistPdf::Dictionary, isa_proxy, 4,
                  sizeof(::Lau1DHistPdf) );
      instance.SetDelete(&delete_Lau1DHistPdf);
      instance.SetDeleteArray(&deleteArray_Lau1DHistPdf);
      instance.SetDestructor(&destruct_Lau1DHistPdf);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Lau1DHistPdf*)
   {
      return GenerateInitInstanceLocal((::Lau1DHistPdf*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::Lau1DHistPdf*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_Lau2DCubicSpline(void *p);
   static void deleteArray_Lau2DCubicSpline(void *p);
   static void destruct_Lau2DCubicSpline(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Lau2DCubicSpline*)
   {
      ::Lau2DCubicSpline *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::Lau2DCubicSpline >(0);
      static ::ROOT::TGenericClassInfo 
         instance("Lau2DCubicSpline", ::Lau2DCubicSpline::Class_Version(), "Lau2DCubicSpline.hh", 61,
                  typeid(::Lau2DCubicSpline), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::Lau2DCubicSpline::Dictionary, isa_proxy, 4,
                  sizeof(::Lau2DCubicSpline) );
      instance.SetDelete(&delete_Lau2DCubicSpline);
      instance.SetDeleteArray(&deleteArray_Lau2DCubicSpline);
      instance.SetDestructor(&destruct_Lau2DCubicSpline);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Lau2DCubicSpline*)
   {
      return GenerateInitInstanceLocal((::Lau2DCubicSpline*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::Lau2DCubicSpline*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_LauResultsExtractor(void *p);
   static void deleteArray_LauResultsExtractor(void *p);
   static void destruct_LauResultsExtractor(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::LauResultsExtractor*)
   {
      ::LauResultsExtractor *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::LauResultsExtractor >(0);
      static ::ROOT::TGenericClassInfo 
         instance("LauResultsExtractor", ::LauResultsExtractor::Class_Version(), "LauResultsExtractor.hh", 51,
                  typeid(::LauResultsExtractor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::LauResultsExtractor::Dictionary, isa_proxy, 4,
                  sizeof(::LauResultsExtractor) );
      instance.SetDelete(&delete_LauResultsExtractor);
      instance.SetDeleteArray(&deleteArray_LauResultsExtractor);
      instance.SetDestructor(&destruct_LauResultsExtractor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::LauResultsExtractor*)
   {
      return GenerateInitInstanceLocal((::LauResultsExtractor*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::LauResultsExtractor*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_LauAbsEffModel(void *p);
   static void deleteArray_LauAbsEffModel(void *p);
   static void destruct_LauAbsEffModel(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::LauAbsEffModel*)
   {
      ::LauAbsEffModel *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::LauAbsEffModel >(0);
      static ::ROOT::TGenericClassInfo 
         instance("LauAbsEffModel", ::LauAbsEffModel::Class_Version(), "LauAbsEffModel.hh", 46,
                  typeid(::LauAbsEffModel), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::LauAbsEffModel::Dictionary, isa_proxy, 4,
                  sizeof(::LauAbsEffModel) );
      instance.SetDelete(&delete_LauAbsEffModel);
      instance.SetDeleteArray(&deleteArray_LauAbsEffModel);
      instance.SetDestructor(&destruct_LauAbsEffModel);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::LauAbsEffModel*)
   {
      return GenerateInitInstanceLocal((::LauAbsEffModel*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::LauAbsEffModel*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_LauEffModel(void *p);
   static void deleteArray_LauEffModel(void *p);
   static void destruct_LauEffModel(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::LauEffModel*)
   {
      ::LauEffModel *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::LauEffModel >(0);
      static ::ROOT::TGenericClassInfo 
         instance("LauEffModel", ::LauEffModel::Class_Version(), "LauEffModel.hh", 51,
                  typeid(::LauEffModel), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::LauEffModel::Dictionary, isa_proxy, 4,
                  sizeof(::LauEffModel) );
      instance.SetDelete(&delete_LauEffModel);
      instance.SetDeleteArray(&deleteArray_LauEffModel);
      instance.SetDestructor(&destruct_LauEffModel);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::LauEffModel*)
   {
      return GenerateInitInstanceLocal((::LauEffModel*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::LauEffModel*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_LauMergeDataFiles(void *p);
   static void deleteArray_LauMergeDataFiles(void *p);
   static void destruct_LauMergeDataFiles(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::LauMergeDataFiles*)
   {
      ::LauMergeDataFiles *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::LauMergeDataFiles >(0);
      static ::ROOT::TGenericClassInfo 
         instance("LauMergeDataFiles", ::LauMergeDataFiles::Class_Version(), "LauMergeDataFiles.hh", 43,
                  typeid(::LauMergeDataFiles), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::LauMergeDataFiles::Dictionary, isa_proxy, 4,
                  sizeof(::LauMergeDataFiles) );
      instance.SetDelete(&delete_LauMergeDataFiles);
      instance.SetDeleteArray(&deleteArray_LauMergeDataFiles);
      instance.SetDestructor(&destruct_LauMergeDataFiles);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::LauMergeDataFiles*)
   {
      return GenerateInitInstanceLocal((::LauMergeDataFiles*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::LauMergeDataFiles*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_LauRescattering2Res(void *p);
   static void deleteArray_LauRescattering2Res(void *p);
   static void destruct_LauRescattering2Res(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::LauRescattering2Res*)
   {
      ::LauRescattering2Res *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::LauRescattering2Res >(0);
      static ::ROOT::TGenericClassInfo 
         instance("LauRescattering2Res", ::LauRescattering2Res::Class_Version(), "LauRescattering2Res.hh", 46,
                  typeid(::LauRescattering2Res), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::LauRescattering2Res::Dictionary, isa_proxy, 4,
                  sizeof(::LauRescattering2Res) );
      instance.SetDelete(&delete_LauRescattering2Res);
      instance.SetDeleteArray(&deleteArray_LauRescattering2Res);
      instance.SetDestructor(&destruct_LauRescattering2Res);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::LauRescattering2Res*)
   {
      return GenerateInitInstanceLocal((::LauRescattering2Res*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::LauRescattering2Res*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_LauDPDepSumPdf(void *p);
   static void deleteArray_LauDPDepSumPdf(void *p);
   static void destruct_LauDPDepSumPdf(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::LauDPDepSumPdf*)
   {
      ::LauDPDepSumPdf *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::LauDPDepSumPdf >(0);
      static ::ROOT::TGenericClassInfo 
         instance("LauDPDepSumPdf", ::LauDPDepSumPdf::Class_Version(), "LauDPDepSumPdf.hh", 48,
                  typeid(::LauDPDepSumPdf), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::LauDPDepSumPdf::Dictionary, isa_proxy, 4,
                  sizeof(::LauDPDepSumPdf) );
      instance.SetDelete(&delete_LauDPDepSumPdf);
      instance.SetDeleteArray(&deleteArray_LauDPDepSumPdf);
      instance.SetDestructor(&destruct_LauDPDepSumPdf);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::LauDPDepSumPdf*)
   {
      return GenerateInitInstanceLocal((::LauDPDepSumPdf*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::LauDPDepSumPdf*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_LauVetoes(void *p = 0);
   static void *newArray_LauVetoes(Long_t size, void *p);
   static void delete_LauVetoes(void *p);
   static void deleteArray_LauVetoes(void *p);
   static void destruct_LauVetoes(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::LauVetoes*)
   {
      ::LauVetoes *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::LauVetoes >(0);
      static ::ROOT::TGenericClassInfo 
         instance("LauVetoes", ::LauVetoes::Class_Version(), "LauVetoes.hh", 50,
                  typeid(::LauVetoes), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::LauVetoes::Dictionary, isa_proxy, 4,
                  sizeof(::LauVetoes) );
      instance.SetNew(&new_LauVetoes);
      instance.SetNewArray(&newArray_LauVetoes);
      instance.SetDelete(&delete_LauVetoes);
      instance.SetDeleteArray(&deleteArray_LauVetoes);
      instance.SetDestructor(&destruct_LauVetoes);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::LauVetoes*)
   {
      return GenerateInitInstanceLocal((::LauVetoes*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::LauVetoes*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_LauRhoOmegaMix(void *p);
   static void deleteArray_LauRhoOmegaMix(void *p);
   static void destruct_LauRhoOmegaMix(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::LauRhoOmegaMix*)
   {
      ::LauRhoOmegaMix *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::LauRhoOmegaMix >(0);
      static ::ROOT::TGenericClassInfo 
         instance("LauRhoOmegaMix", ::LauRhoOmegaMix::Class_Version(), "LauRhoOmegaMix.hh", 50,
                  typeid(::LauRhoOmegaMix), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::LauRhoOmegaMix::Dictionary, isa_proxy, 4,
                  sizeof(::LauRhoOmegaMix) );
      instance.SetDelete(&delete_LauRhoOmegaMix);
      instance.SetDeleteArray(&deleteArray_LauRhoOmegaMix);
      instance.SetDestructor(&destruct_LauRhoOmegaMix);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::LauRhoOmegaMix*)
   {
      return GenerateInitInstanceLocal((::LauRhoOmegaMix*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::LauRhoOmegaMix*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_LauIntegrals(void *p = 0);
   static void *newArray_LauIntegrals(Long_t size, void *p);
   static void delete_LauIntegrals(void *p);
   static void deleteArray_LauIntegrals(void *p);
   static void destruct_LauIntegrals(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::LauIntegrals*)
   {
      ::LauIntegrals *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::LauIntegrals >(0);
      static ::ROOT::TGenericClassInfo 
         instance("LauIntegrals", ::LauIntegrals::Class_Version(), "LauIntegrals.hh", 44,
                  typeid(::LauIntegrals), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::LauIntegrals::Dictionary, isa_proxy, 4,
                  sizeof(::LauIntegrals) );
      instance.SetNew(&new_LauIntegrals);
      instance.SetNewArray(&newArray_LauIntegrals);
      instance.SetDelete(&delete_LauIntegrals);
      instance.SetDeleteArray(&deleteArray_LauIntegrals);
      instance.SetDestructor(&destruct_LauIntegrals);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::LauIntegrals*)
   {
      return GenerateInitInstanceLocal((::LauIntegrals*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::LauIntegrals*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_Lau2DSplineDP(void *p);
   static void deleteArray_Lau2DSplineDP(void *p);
   static void destruct_Lau2DSplineDP(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Lau2DSplineDP*)
   {
      ::Lau2DSplineDP *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::Lau2DSplineDP >(0);
      static ::ROOT::TGenericClassInfo 
         instance("Lau2DSplineDP", ::Lau2DSplineDP::Class_Version(), "Lau2DSplineDP.hh", 49,
                  typeid(::Lau2DSplineDP), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::Lau2DSplineDP::Dictionary, isa_proxy, 4,
                  sizeof(::Lau2DSplineDP) );
      instance.SetDelete(&delete_Lau2DSplineDP);
      instance.SetDeleteArray(&deleteArray_Lau2DSplineDP);
      instance.SetDestructor(&destruct_Lau2DSplineDP);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Lau2DSplineDP*)
   {
      return GenerateInitInstanceLocal((::Lau2DSplineDP*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::Lau2DSplineDP*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_LauChebychevPdf(void *p);
   static void deleteArray_LauChebychevPdf(void *p);
   static void destruct_LauChebychevPdf(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::LauChebychevPdf*)
   {
      ::LauChebychevPdf *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::LauChebychevPdf >(0);
      static ::ROOT::TGenericClassInfo 
         instance("LauChebychevPdf", ::LauChebychevPdf::Class_Version(), "LauChebychevPdf.hh", 63,
                  typeid(::LauChebychevPdf), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::LauChebychevPdf::Dictionary, isa_proxy, 4,
                  sizeof(::LauChebychevPdf) );
      instance.SetDelete(&delete_LauChebychevPdf);
      instance.SetDeleteArray(&deleteArray_LauChebychevPdf);
      instance.SetDestructor(&destruct_LauChebychevPdf);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::LauChebychevPdf*)
   {
      return GenerateInitInstanceLocal((::LauChebychevPdf*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::LauChebychevPdf*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_LauGenNtuple(void *p);
   static void deleteArray_LauGenNtuple(void *p);
   static void destruct_LauGenNtuple(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::LauGenNtuple*)
   {
      ::LauGenNtuple *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::LauGenNtuple >(0);
      static ::ROOT::TGenericClassInfo 
         instance("LauGenNtuple", ::LauGenNtuple::Class_Version(), "LauGenNtuple.hh", 46,
                  typeid(::LauGenNtuple), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::LauGenNtuple::Dictionary, isa_proxy, 4,
                  sizeof(::LauGenNtuple) );
      instance.SetDelete(&delete_LauGenNtuple);
      instance.SetDeleteArray(&deleteArray_LauGenNtuple);
      instance.SetDestructor(&destruct_LauGenNtuple);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::LauGenNtuple*)
   {
      return GenerateInitInstanceLocal((::LauGenNtuple*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::LauGenNtuple*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_LauRealImagCPCoeffSet(void *p);
   static void deleteArray_LauRealImagCPCoeffSet(void *p);
   static void destruct_LauRealImagCPCoeffSet(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::LauRealImagCPCoeffSet*)
   {
      ::LauRealImagCPCoeffSet *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::LauRealImagCPCoeffSet >(0);
      static ::ROOT::TGenericClassInfo 
         instance("LauRealImagCPCoeffSet", ::LauRealImagCPCoeffSet::Class_Version(), "LauRealImagCPCoeffSet.hh", 51,
                  typeid(::LauRealImagCPCoeffSet), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::LauRealImagCPCoeffSet::Dictionary, isa_proxy, 4,
                  sizeof(::LauRealImagCPCoeffSet) );
      instance.SetDelete(&delete_LauRealImagCPCoeffSet);
      instance.SetDeleteArray(&deleteArray_LauRealImagCPCoeffSet);
      instance.SetDestructor(&destruct_LauRealImagCPCoeffSet);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::LauRealImagCPCoeffSet*)
   {
      return GenerateInitInstanceLocal((::LauRealImagCPCoeffSet*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::LauRealImagCPCoeffSet*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_LauPolNR(void *p);
   static void deleteArray_LauPolNR(void *p);
   static void destruct_LauPolNR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::LauPolNR*)
   {
      ::LauPolNR *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::LauPolNR >(0);
      static ::ROOT::TGenericClassInfo 
         instance("LauPolNR", ::LauPolNR::Class_Version(), "LauPolNR.hh", 47,
                  typeid(::LauPolNR), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::LauPolNR::Dictionary, isa_proxy, 4,
                  sizeof(::LauPolNR) );
      instance.SetDelete(&delete_LauPolNR);
      instance.SetDeleteArray(&deleteArray_LauPolNR);
      instance.SetDestructor(&destruct_LauPolNR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::LauPolNR*)
   {
      return GenerateInitInstanceLocal((::LauPolNR*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::LauPolNR*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_LauDPDepCruijffPdf(void *p);
   static void deleteArray_LauDPDepCruijffPdf(void *p);
   static void destruct_LauDPDepCruijffPdf(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::LauDPDepCruijffPdf*)
   {
      ::LauDPDepCruijffPdf *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::LauDPDepCruijffPdf >(0);
      static ::ROOT::TGenericClassInfo 
         instance("LauDPDepCruijffPdf", ::LauDPDepCruijffPdf::Class_Version(), "LauDPDepCruijffPdf.hh", 49,
                  typeid(::LauDPDepCruijffPdf), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::LauDPDepCruijffPdf::Dictionary, isa_proxy, 4,
                  sizeof(::LauDPDepCruijffPdf) );
      instance.SetDelete(&delete_LauDPDepCruijffPdf);
      instance.SetDeleteArray(&deleteArray_LauDPDepCruijffPdf);
      instance.SetDestructor(&destruct_LauDPDepCruijffPdf);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::LauDPDepCruijffPdf*)
   {
      return GenerateInitInstanceLocal((::LauDPDepCruijffPdf*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::LauDPDepCruijffPdf*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_LauIsobarDynamics(void *p);
   static void deleteArray_LauIsobarDynamics(void *p);
   static void destruct_LauIsobarDynamics(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::LauIsobarDynamics*)
   {
      ::LauIsobarDynamics *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::LauIsobarDynamics >(0);
      static ::ROOT::TGenericClassInfo 
         instance("LauIsobarDynamics", ::LauIsobarDynamics::Class_Version(), "LauIsobarDynamics.hh", 53,
                  typeid(::LauIsobarDynamics), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::LauIsobarDynamics::Dictionary, isa_proxy, 4,
                  sizeof(::LauIsobarDynamics) );
      instance.SetDelete(&delete_LauIsobarDynamics);
      instance.SetDeleteArray(&deleteArray_LauIsobarDynamics);
      instance.SetDestructor(&destruct_LauIsobarDynamics);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::LauIsobarDynamics*)
   {
      return GenerateInitInstanceLocal((::LauIsobarDynamics*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::LauIsobarDynamics*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_LauRelBreitWignerRes(void *p);
   static void deleteArray_LauRelBreitWignerRes(void *p);
   static void destruct_LauRelBreitWignerRes(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::LauRelBreitWignerRes*)
   {
      ::LauRelBreitWignerRes *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::LauRelBreitWignerRes >(0);
      static ::ROOT::TGenericClassInfo 
         instance("LauRelBreitWignerRes", ::LauRelBreitWignerRes::Class_Version(), "LauRelBreitWignerRes.hh", 45,
                  typeid(::LauRelBreitWignerRes), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::LauRelBreitWignerRes::Dictionary, isa_proxy, 4,
                  sizeof(::LauRelBreitWignerRes) );
      instance.SetDelete(&delete_LauRelBreitWignerRes);
      instance.SetDeleteArray(&deleteArray_LauRelBreitWignerRes);
      instance.SetDestructor(&destruct_LauRelBreitWignerRes);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::LauRelBreitWignerRes*)
   {
      return GenerateInitInstanceLocal((::LauRelBreitWignerRes*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::LauRelBreitWignerRes*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_LauDaughters(void *p);
   static void deleteArray_LauDaughters(void *p);
   static void destruct_LauDaughters(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::LauDaughters*)
   {
      ::LauDaughters *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::LauDaughters >(0);
      static ::ROOT::TGenericClassInfo 
         instance("LauDaughters", ::LauDaughters::Class_Version(), "LauDaughters.hh", 47,
                  typeid(::LauDaughters), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::LauDaughters::Dictionary, isa_proxy, 4,
                  sizeof(::LauDaughters) );
      instance.SetDelete(&delete_LauDaughters);
      instance.SetDeleteArray(&deleteArray_LauDaughters);
      instance.SetDestructor(&destruct_LauDaughters);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::LauDaughters*)
   {
      return GenerateInitInstanceLocal((::LauDaughters*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::LauDaughters*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_LauKMatrixPropagator(void *p);
   static void deleteArray_LauKMatrixPropagator(void *p);
   static void destruct_LauKMatrixPropagator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::LauKMatrixPropagator*)
   {
      ::LauKMatrixPropagator *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::LauKMatrixPropagator >(0);
      static ::ROOT::TGenericClassInfo 
         instance("LauKMatrixPropagator", ::LauKMatrixPropagator::Class_Version(), "LauKMatrixPropagator.hh", 50,
                  typeid(::LauKMatrixPropagator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::LauKMatrixPropagator::Dictionary, isa_proxy, 4,
                  sizeof(::LauKMatrixPropagator) );
      instance.SetDelete(&delete_LauKMatrixPropagator);
      instance.SetDeleteArray(&deleteArray_LauKMatrixPropagator);
      instance.SetDestructor(&destruct_LauKMatrixPropagator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::LauKMatrixPropagator*)
   {
      return GenerateInitInstanceLocal((::LauKMatrixPropagator*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::LauKMatrixPropagator*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_LauPolarFormFactorSymNR(void *p);
   static void deleteArray_LauPolarFormFactorSymNR(void *p);
   static void destruct_LauPolarFormFactorSymNR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::LauPolarFormFactorSymNR*)
   {
      ::LauPolarFormFactorSymNR *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::LauPolarFormFactorSymNR >(0);
      static ::ROOT::TGenericClassInfo 
         instance("LauPolarFormFactorSymNR", ::LauPolarFormFactorSymNR::Class_Version(), "LauPolarFormFactorSymNR.hh", 50,
                  typeid(::LauPolarFormFactorSymNR), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::LauPolarFormFactorSymNR::Dictionary, isa_proxy, 4,
                  sizeof(::LauPolarFormFactorSymNR) );
      instance.SetDelete(&delete_LauPolarFormFactorSymNR);
      instance.SetDeleteArray(&deleteArray_LauPolarFormFactorSymNR);
      instance.SetDestructor(&destruct_LauPolarFormFactorSymNR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::LauPolarFormFactorSymNR*)
   {
      return GenerateInitInstanceLocal((::LauPolarFormFactorSymNR*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::LauPolarFormFactorSymNR*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_LauPrint(void *p = 0);
   static void *newArray_LauPrint(Long_t size, void *p);
   static void delete_LauPrint(void *p);
   static void deleteArray_LauPrint(void *p);
   static void destruct_LauPrint(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::LauPrint*)
   {
      ::LauPrint *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::LauPrint >(0);
      static ::ROOT::TGenericClassInfo 
         instance("LauPrint", ::LauPrint::Class_Version(), "LauPrint.hh", 43,
                  typeid(::LauPrint), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::LauPrint::Dictionary, isa_proxy, 4,
                  sizeof(::LauPrint) );
      instance.SetNew(&new_LauPrint);
      instance.SetNewArray(&newArray_LauPrint);
      instance.SetDelete(&delete_LauPrint);
      instance.SetDeleteArray(&deleteArray_LauPrint);
      instance.SetDestructor(&destruct_LauPrint);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::LauPrint*)
   {
      return GenerateInitInstanceLocal((::LauPrint*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::LauPrint*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_LauDabbaRes(void *p);
   static void deleteArray_LauDabbaRes(void *p);
   static void destruct_LauDabbaRes(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::LauDabbaRes*)
   {
      ::LauDabbaRes *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::LauDabbaRes >(0);
      static ::ROOT::TGenericClassInfo 
         instance("LauDabbaRes", ::LauDabbaRes::Class_Version(), "LauDabbaRes.hh", 45,
                  typeid(::LauDabbaRes), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::LauDabbaRes::Dictionary, isa_proxy, 4,
                  sizeof(::LauDabbaRes) );
      instance.SetDelete(&delete_LauDabbaRes);
      instance.SetDeleteArray(&deleteArray_LauDabbaRes);
      instance.SetDestructor(&destruct_LauDabbaRes);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::LauDabbaRes*)
   {
      return GenerateInitInstanceLocal((::LauDabbaRes*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::LauDabbaRes*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_Lau2DHistDPPdf(void *p);
   static void deleteArray_Lau2DHistDPPdf(void *p);
   static void destruct_Lau2DHistDPPdf(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Lau2DHistDPPdf*)
   {
      ::Lau2DHistDPPdf *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::Lau2DHistDPPdf >(0);
      static ::ROOT::TGenericClassInfo 
         instance("Lau2DHistDPPdf", ::Lau2DHistDPPdf::Class_Version(), "Lau2DHistDPPdf.hh", 47,
                  typeid(::Lau2DHistDPPdf), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::Lau2DHistDPPdf::Dictionary, isa_proxy, 4,
                  sizeof(::Lau2DHistDPPdf) );
      instance.SetDelete(&delete_Lau2DHistDPPdf);
      instance.SetDeleteArray(&deleteArray_Lau2DHistDPPdf);
      instance.SetDestructor(&destruct_Lau2DHistDPPdf);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Lau2DHistDPPdf*)
   {
      return GenerateInitInstanceLocal((::Lau2DHistDPPdf*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::Lau2DHistDPPdf*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_LauPolarGammaCPCoeffSet(void *p);
   static void deleteArray_LauPolarGammaCPCoeffSet(void *p);
   static void destruct_LauPolarGammaCPCoeffSet(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::LauPolarGammaCPCoeffSet*)
   {
      ::LauPolarGammaCPCoeffSet *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::LauPolarGammaCPCoeffSet >(0);
      static ::ROOT::TGenericClassInfo 
         instance("LauPolarGammaCPCoeffSet", ::LauPolarGammaCPCoeffSet::Class_Version(), "LauPolarGammaCPCoeffSet.hh", 54,
                  typeid(::LauPolarGammaCPCoeffSet), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::LauPolarGammaCPCoeffSet::Dictionary, isa_proxy, 4,
                  sizeof(::LauPolarGammaCPCoeffSet) );
      instance.SetDelete(&delete_LauPolarGammaCPCoeffSet);
      instance.SetDeleteArray(&deleteArray_LauPolarGammaCPCoeffSet);
      instance.SetDestructor(&destruct_LauPolarGammaCPCoeffSet);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::LauPolarGammaCPCoeffSet*)
   {
      return GenerateInitInstanceLocal((::LauPolarGammaCPCoeffSet*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::LauPolarGammaCPCoeffSet*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_LauWeightedSumEffModel(void *p);
   static void deleteArray_LauWeightedSumEffModel(void *p);
   static void destruct_LauWeightedSumEffModel(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::LauWeightedSumEffModel*)
   {
      ::LauWeightedSumEffModel *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::LauWeightedSumEffModel >(0);
      static ::ROOT::TGenericClassInfo 
         instance("LauWeightedSumEffModel", ::LauWeightedSumEffModel::Class_Version(), "LauWeightedSumEffModel.hh", 48,
                  typeid(::LauWeightedSumEffModel), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::LauWeightedSumEffModel::Dictionary, isa_proxy, 4,
                  sizeof(::LauWeightedSumEffModel) );
      instance.SetDelete(&delete_LauWeightedSumEffModel);
      instance.SetDeleteArray(&deleteArray_LauWeightedSumEffModel);
      instance.SetDestructor(&destruct_LauWeightedSumEffModel);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::LauWeightedSumEffModel*)
   {
      return GenerateInitInstanceLocal((::LauWeightedSumEffModel*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::LauWeightedSumEffModel*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_LauEFKLLMRes(void *p);
   static void deleteArray_LauEFKLLMRes(void *p);
   static void destruct_LauEFKLLMRes(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::LauEFKLLMRes*)
   {
      ::LauEFKLLMRes *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::LauEFKLLMRes >(0);
      static ::ROOT::TGenericClassInfo 
         instance("LauEFKLLMRes", ::LauEFKLLMRes::Class_Version(), "LauEFKLLMRes.hh", 50,
                  typeid(::LauEFKLLMRes), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::LauEFKLLMRes::Dictionary, isa_proxy, 4,
                  sizeof(::LauEFKLLMRes) );
      instance.SetDelete(&delete_LauEFKLLMRes);
      instance.SetDeleteArray(&deleteArray_LauEFKLLMRes);
      instance.SetDestructor(&destruct_LauEFKLLMRes);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::LauEFKLLMRes*)
   {
      return GenerateInitInstanceLocal((::LauEFKLLMRes*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::LauEFKLLMRes*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_LauNovosibirskPdf(void *p);
   static void deleteArray_LauNovosibirskPdf(void *p);
   static void destruct_LauNovosibirskPdf(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::LauNovosibirskPdf*)
   {
      ::LauNovosibirskPdf *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::LauNovosibirskPdf >(0);
      static ::ROOT::TGenericClassInfo 
         instance("LauNovosibirskPdf", ::LauNovosibirskPdf::Class_Version(), "LauNovosibirskPdf.hh", 47,
                  typeid(::LauNovosibirskPdf), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::LauNovosibirskPdf::Dictionary, isa_proxy, 4,
                  sizeof(::LauNovosibirskPdf) );
      instance.SetDelete(&delete_LauNovosibirskPdf);
      instance.SetDeleteArray(&deleteArray_LauNovosibirskPdf);
      instance.SetDestructor(&destruct_LauNovosibirskPdf);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::LauNovosibirskPdf*)
   {
      return GenerateInitInstanceLocal((::LauNovosibirskPdf*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::LauNovosibirskPdf*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_LauCruijffPdf(void *p);
   static void deleteArray_LauCruijffPdf(void *p);
   static void destruct_LauCruijffPdf(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::LauCruijffPdf*)
   {
      ::LauCruijffPdf *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::LauCruijffPdf >(0);
      static ::ROOT::TGenericClassInfo 
         instance("LauCruijffPdf", ::LauCruijffPdf::Class_Version(), "LauCruijffPdf.hh", 64,
                  typeid(::LauCruijffPdf), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::LauCruijffPdf::Dictionary, isa_proxy, 4,
                  sizeof(::LauCruijffPdf) );
      instance.SetDelete(&delete_LauCruijffPdf);
      instance.SetDeleteArray(&deleteArray_LauCruijffPdf);
      instance.SetDestructor(&destruct_LauCruijffPdf);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::LauCruijffPdf*)
   {
      return GenerateInitInstanceLocal((::LauCruijffPdf*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::LauCruijffPdf*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_LauSumPdf(void *p);
   static void deleteArray_LauSumPdf(void *p);
   static void destruct_LauSumPdf(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::LauSumPdf*)
   {
      ::LauSumPdf *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::LauSumPdf >(0);
      static ::ROOT::TGenericClassInfo 
         instance("LauSumPdf", ::LauSumPdf::Class_Version(), "LauSumPdf.hh", 46,
                  typeid(::LauSumPdf), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::LauSumPdf::Dictionary, isa_proxy, 4,
                  sizeof(::LauSumPdf) );
      instance.SetDelete(&delete_LauSumPdf);
      instance.SetDeleteArray(&deleteArray_LauSumPdf);
      instance.SetDestructor(&destruct_LauSumPdf);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::LauSumPdf*)
   {
      return GenerateInitInstanceLocal((::LauSumPdf*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::LauSumPdf*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_LauMagPhaseCPCoeffSet(void *p);
   static void deleteArray_LauMagPhaseCPCoeffSet(void *p);
   static void destruct_LauMagPhaseCPCoeffSet(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::LauMagPhaseCPCoeffSet*)
   {
      ::LauMagPhaseCPCoeffSet *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::LauMagPhaseCPCoeffSet >(0);
      static ::ROOT::TGenericClassInfo 
         instance("LauMagPhaseCPCoeffSet", ::LauMagPhaseCPCoeffSet::Class_Version(), "LauMagPhaseCPCoeffSet.hh", 53,
                  typeid(::LauMagPhaseCPCoeffSet), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::LauMagPhaseCPCoeffSet::Dictionary, isa_proxy, 4,
                  sizeof(::LauMagPhaseCPCoeffSet) );
      instance.SetDelete(&delete_LauMagPhaseCPCoeffSet);
      instance.SetDeleteArray(&deleteArray_LauMagPhaseCPCoeffSet);
      instance.SetDestructor(&destruct_LauMagPhaseCPCoeffSet);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::LauMagPhaseCPCoeffSet*)
   {
      return GenerateInitInstanceLocal((::LauMagPhaseCPCoeffSet*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::LauMagPhaseCPCoeffSet*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_LauDPDepBifurGaussPdf(void *p);
   static void deleteArray_LauDPDepBifurGaussPdf(void *p);
   static void destruct_LauDPDepBifurGaussPdf(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::LauDPDepBifurGaussPdf*)
   {
      ::LauDPDepBifurGaussPdf *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::LauDPDepBifurGaussPdf >(0);
      static ::ROOT::TGenericClassInfo 
         instance("LauDPDepBifurGaussPdf", ::LauDPDepBifurGaussPdf::Class_Version(), "LauDPDepBifurGaussPdf.hh", 45,
                  typeid(::LauDPDepBifurGaussPdf), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::LauDPDepBifurGaussPdf::Dictionary, isa_proxy, 4,
                  sizeof(::LauDPDepBifurGaussPdf) );
      instance.SetDelete(&delete_LauDPDepBifurGaussPdf);
      instance.SetDeleteArray(&deleteArray_LauDPDepBifurGaussPdf);
      instance.SetDestructor(&destruct_LauDPDepBifurGaussPdf);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::LauDPDepBifurGaussPdf*)
   {
      return GenerateInitInstanceLocal((::LauDPDepBifurGaussPdf*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::LauDPDepBifurGaussPdf*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_LauModIndPartWaveRealImag(void *p);
   static void deleteArray_LauModIndPartWaveRealImag(void *p);
   static void destruct_LauModIndPartWaveRealImag(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::LauModIndPartWaveRealImag*)
   {
      ::LauModIndPartWaveRealImag *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::LauModIndPartWaveRealImag >(0);
      static ::ROOT::TGenericClassInfo 
         instance("LauModIndPartWaveRealImag", ::LauModIndPartWaveRealImag::Class_Version(), "LauModIndPartWaveRealImag.hh", 45,
                  typeid(::LauModIndPartWaveRealImag), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::LauModIndPartWaveRealImag::Dictionary, isa_proxy, 4,
                  sizeof(::LauModIndPartWaveRealImag) );
      instance.SetDelete(&delete_LauModIndPartWaveRealImag);
      instance.SetDeleteArray(&deleteArray_LauModIndPartWaveRealImag);
      instance.SetDestructor(&destruct_LauModIndPartWaveRealImag);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::LauModIndPartWaveRealImag*)
   {
      return GenerateInitInstanceLocal((::LauModIndPartWaveRealImag*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::LauModIndPartWaveRealImag*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_LauRealImagGammaCPCoeffSet(void *p);
   static void deleteArray_LauRealImagGammaCPCoeffSet(void *p);
   static void destruct_LauRealImagGammaCPCoeffSet(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::LauRealImagGammaCPCoeffSet*)
   {
      ::LauRealImagGammaCPCoeffSet *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::LauRealImagGammaCPCoeffSet >(0);
      static ::ROOT::TGenericClassInfo 
         instance("LauRealImagGammaCPCoeffSet", ::LauRealImagGammaCPCoeffSet::Class_Version(), "LauRealImagGammaCPCoeffSet.hh", 52,
                  typeid(::LauRealImagGammaCPCoeffSet), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::LauRealImagGammaCPCoeffSet::Dictionary, isa_proxy, 4,
                  sizeof(::LauRealImagGammaCPCoeffSet) );
      instance.SetDelete(&delete_LauRealImagGammaCPCoeffSet);
      instance.SetDeleteArray(&deleteArray_LauRealImagGammaCPCoeffSet);
      instance.SetDestructor(&destruct_LauRealImagGammaCPCoeffSet);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::LauRealImagGammaCPCoeffSet*)
   {
      return GenerateInitInstanceLocal((::LauRealImagGammaCPCoeffSet*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::LauRealImagGammaCPCoeffSet*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_LauGounarisSakuraiRes(void *p);
   static void deleteArray_LauGounarisSakuraiRes(void *p);
   static void destruct_LauGounarisSakuraiRes(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::LauGounarisSakuraiRes*)
   {
      ::LauGounarisSakuraiRes *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::LauGounarisSakuraiRes >(0);
      static ::ROOT::TGenericClassInfo 
         instance("LauGounarisSakuraiRes", ::LauGounarisSakuraiRes::Class_Version(), "LauGounarisSakuraiRes.hh", 45,
                  typeid(::LauGounarisSakuraiRes), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::LauGounarisSakuraiRes::Dictionary, isa_proxy, 4,
                  sizeof(::LauGounarisSakuraiRes) );
      instance.SetDelete(&delete_LauGounarisSakuraiRes);
      instance.SetDeleteArray(&deleteArray_LauGounarisSakuraiRes);
      instance.SetDestructor(&destruct_LauGounarisSakuraiRes);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::LauGounarisSakuraiRes*)
   {
      return GenerateInitInstanceLocal((::LauGounarisSakuraiRes*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::LauGounarisSakuraiRes*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_LauResonanceInfo(void *p);
   static void deleteArray_LauResonanceInfo(void *p);
   static void destruct_LauResonanceInfo(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::LauResonanceInfo*)
   {
      ::LauResonanceInfo *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::LauResonanceInfo >(0);
      static ::ROOT::TGenericClassInfo 
         instance("LauResonanceInfo", ::LauResonanceInfo::Class_Version(), "LauResonanceInfo.hh", 46,
                  typeid(::LauResonanceInfo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::LauResonanceInfo::Dictionary, isa_proxy, 4,
                  sizeof(::LauResonanceInfo) );
      instance.SetDelete(&delete_LauResonanceInfo);
      instance.SetDeleteArray(&deleteArray_LauResonanceInfo);
      instance.SetDestructor(&destruct_LauResonanceInfo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::LauResonanceInfo*)
   {
      return GenerateInitInstanceLocal((::LauResonanceInfo*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::LauResonanceInfo*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
template <> atomic_TClass_ptr LauAbsFitter<LauMinuit>::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *LauAbsFitter<LauMinuit>::Class_Name()
{
   return "LauAbsFitter<LauMinuit>";
}

//______________________________________________________________________________
template <> const char *LauAbsFitter<LauMinuit>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauAbsFitter<LauMinuit>*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int LauAbsFitter<LauMinuit>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauAbsFitter<LauMinuit>*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *LauAbsFitter<LauMinuit>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauAbsFitter<LauMinuit>*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *LauAbsFitter<LauMinuit>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauAbsFitter<LauMinuit>*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr LauFitObject::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *LauFitObject::Class_Name()
{
   return "LauFitObject";
}

//______________________________________________________________________________
const char *LauFitObject::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauFitObject*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int LauFitObject::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauFitObject*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *LauFitObject::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauFitObject*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *LauFitObject::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauFitObject*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr LauAbsRValue::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *LauAbsRValue::Class_Name()
{
   return "LauAbsRValue";
}

//______________________________________________________________________________
const char *LauAbsRValue::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauAbsRValue*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int LauAbsRValue::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauAbsRValue*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *LauAbsRValue::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauAbsRValue*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *LauAbsRValue::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauAbsRValue*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr LauBlind::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *LauBlind::Class_Name()
{
   return "LauBlind";
}

//______________________________________________________________________________
const char *LauBlind::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauBlind*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int LauBlind::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauBlind*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *LauBlind::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauBlind*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *LauBlind::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauBlind*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr LauParameter::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *LauParameter::Class_Name()
{
   return "LauParameter";
}

//______________________________________________________________________________
const char *LauParameter::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauParameter*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int LauParameter::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauParameter*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *LauParameter::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauParameter*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *LauParameter::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauParameter*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr LauFormulaPar::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *LauFormulaPar::Class_Name()
{
   return "LauFormulaPar";
}

//______________________________________________________________________________
const char *LauFormulaPar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauFormulaPar*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int LauFormulaPar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauFormulaPar*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *LauFormulaPar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauFormulaPar*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *LauFormulaPar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauFormulaPar*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr LauSPlot::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *LauSPlot::Class_Name()
{
   return "LauSPlot";
}

//______________________________________________________________________________
const char *LauSPlot::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauSPlot*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int LauSPlot::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauSPlot*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *LauSPlot::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauSPlot*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *LauSPlot::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauSPlot*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr LauFitNtuple::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *LauFitNtuple::Class_Name()
{
   return "LauFitNtuple";
}

//______________________________________________________________________________
const char *LauFitNtuple::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauFitNtuple*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int LauFitNtuple::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauFitNtuple*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *LauFitNtuple::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauFitNtuple*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *LauFitNtuple::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauFitNtuple*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr LauAbsFitModel::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *LauAbsFitModel::Class_Name()
{
   return "LauAbsFitModel";
}

//______________________________________________________________________________
const char *LauAbsFitModel::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauAbsFitModel*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int LauAbsFitModel::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauAbsFitModel*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *LauAbsFitModel::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauAbsFitModel*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *LauAbsFitModel::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauAbsFitModel*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr LauCPFitModel::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *LauCPFitModel::Class_Name()
{
   return "LauCPFitModel";
}

//______________________________________________________________________________
const char *LauCPFitModel::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauCPFitModel*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int LauCPFitModel::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauCPFitModel*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *LauCPFitModel::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauCPFitModel*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *LauCPFitModel::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauCPFitModel*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr LauAbsCoeffSet::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *LauAbsCoeffSet::Class_Name()
{
   return "LauAbsCoeffSet";
}

//______________________________________________________________________________
const char *LauAbsCoeffSet::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauAbsCoeffSet*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int LauAbsCoeffSet::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauAbsCoeffSet*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *LauAbsCoeffSet::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauAbsCoeffSet*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *LauAbsCoeffSet::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauAbsCoeffSet*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr LauMagPhaseCoeffSet::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *LauMagPhaseCoeffSet::Class_Name()
{
   return "LauMagPhaseCoeffSet";
}

//______________________________________________________________________________
const char *LauMagPhaseCoeffSet::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauMagPhaseCoeffSet*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int LauMagPhaseCoeffSet::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauMagPhaseCoeffSet*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *LauMagPhaseCoeffSet::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauMagPhaseCoeffSet*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *LauMagPhaseCoeffSet::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauMagPhaseCoeffSet*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr LauBlattWeisskopfFactor::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *LauBlattWeisskopfFactor::Class_Name()
{
   return "LauBlattWeisskopfFactor";
}

//______________________________________________________________________________
const char *LauBlattWeisskopfFactor::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauBlattWeisskopfFactor*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int LauBlattWeisskopfFactor::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauBlattWeisskopfFactor*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *LauBlattWeisskopfFactor::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauBlattWeisskopfFactor*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *LauBlattWeisskopfFactor::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauBlattWeisskopfFactor*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr LauAbsResonance::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *LauAbsResonance::Class_Name()
{
   return "LauAbsResonance";
}

//______________________________________________________________________________
const char *LauAbsResonance::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauAbsResonance*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int LauAbsResonance::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauAbsResonance*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *LauAbsResonance::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauAbsResonance*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *LauAbsResonance::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauAbsResonance*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr LauFlatNR::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *LauFlatNR::Class_Name()
{
   return "LauFlatNR";
}

//______________________________________________________________________________
const char *LauFlatNR::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauFlatNR*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int LauFlatNR::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauFlatNR*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *LauFlatNR::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauFlatNR*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *LauFlatNR::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauFlatNR*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr LauFitDataTree::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *LauFitDataTree::Class_Name()
{
   return "LauFitDataTree";
}

//______________________________________________________________________________
const char *LauFitDataTree::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauFitDataTree*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int LauFitDataTree::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauFitDataTree*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *LauFitDataTree::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauFitDataTree*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *LauFitDataTree::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauFitDataTree*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr LauAbsPdf::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *LauAbsPdf::Class_Name()
{
   return "LauAbsPdf";
}

//______________________________________________________________________________
const char *LauAbsPdf::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauAbsPdf*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int LauAbsPdf::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauAbsPdf*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *LauAbsPdf::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauAbsPdf*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *LauAbsPdf::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauAbsPdf*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr LauLinearPdf::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *LauLinearPdf::Class_Name()
{
   return "LauLinearPdf";
}

//______________________________________________________________________________
const char *LauLinearPdf::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauLinearPdf*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int LauLinearPdf::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauLinearPdf*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *LauLinearPdf::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauLinearPdf*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *LauLinearPdf::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauLinearPdf*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr LauSimFitMaster::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *LauSimFitMaster::Class_Name()
{
   return "LauSimFitMaster";
}

//______________________________________________________________________________
const char *LauSimFitMaster::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauSimFitMaster*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int LauSimFitMaster::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauSimFitMaster*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *LauSimFitMaster::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauSimFitMaster*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *LauSimFitMaster::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauSimFitMaster*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr LauParticlePDG::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *LauParticlePDG::Class_Name()
{
   return "LauParticlePDG";
}

//______________________________________________________________________________
const char *LauParticlePDG::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauParticlePDG*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int LauParticlePDG::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauParticlePDG*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *LauParticlePDG::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauParticlePDG*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *LauParticlePDG::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauParticlePDG*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr LauCartesianCPCoeffSet::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *LauCartesianCPCoeffSet::Class_Name()
{
   return "LauCartesianCPCoeffSet";
}

//______________________________________________________________________________
const char *LauCartesianCPCoeffSet::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauCartesianCPCoeffSet*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int LauCartesianCPCoeffSet::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauCartesianCPCoeffSet*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *LauCartesianCPCoeffSet::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauCartesianCPCoeffSet*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *LauCartesianCPCoeffSet::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauCartesianCPCoeffSet*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr LauKMatrixProdSVP::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *LauKMatrixProdSVP::Class_Name()
{
   return "LauKMatrixProdSVP";
}

//______________________________________________________________________________
const char *LauKMatrixProdSVP::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauKMatrixProdSVP*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int LauKMatrixProdSVP::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauKMatrixProdSVP*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *LauKMatrixProdSVP::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauKMatrixProdSVP*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *LauKMatrixProdSVP::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauKMatrixProdSVP*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr Lau2DAbsDPPdf::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *Lau2DAbsDPPdf::Class_Name()
{
   return "Lau2DAbsDPPdf";
}

//______________________________________________________________________________
const char *Lau2DAbsDPPdf::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Lau2DAbsDPPdf*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int Lau2DAbsDPPdf::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Lau2DAbsDPPdf*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *Lau2DAbsDPPdf::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Lau2DAbsDPPdf*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *Lau2DAbsDPPdf::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Lau2DAbsDPPdf*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr LauResonanceMaker::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *LauResonanceMaker::Class_Name()
{
   return "LauResonanceMaker";
}

//______________________________________________________________________________
const char *LauResonanceMaker::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauResonanceMaker*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int LauResonanceMaker::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauResonanceMaker*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *LauResonanceMaker::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauResonanceMaker*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *LauResonanceMaker::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauResonanceMaker*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr LauEmbeddedData::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *LauEmbeddedData::Class_Name()
{
   return "LauEmbeddedData";
}

//______________________________________________________________________________
const char *LauEmbeddedData::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauEmbeddedData*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int LauEmbeddedData::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauEmbeddedData*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *LauEmbeddedData::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauEmbeddedData*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *LauEmbeddedData::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauEmbeddedData*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr LauLASSBWRes::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *LauLASSBWRes::Class_Name()
{
   return "LauLASSBWRes";
}

//______________________________________________________________________________
const char *LauLASSBWRes::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauLASSBWRes*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int LauLASSBWRes::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauLASSBWRes*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *LauLASSBWRes::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauLASSBWRes*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *LauLASSBWRes::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauLASSBWRes*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr LauKMatrixProdPole::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *LauKMatrixProdPole::Class_Name()
{
   return "LauKMatrixProdPole";
}

//______________________________________________________________________________
const char *LauKMatrixProdPole::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauKMatrixProdPole*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int LauKMatrixProdPole::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauKMatrixProdPole*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *LauKMatrixProdPole::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauKMatrixProdPole*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *LauKMatrixProdPole::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauKMatrixProdPole*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr LauParametricStepFuncPdf::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *LauParametricStepFuncPdf::Class_Name()
{
   return "LauParametricStepFuncPdf";
}

//______________________________________________________________________________
const char *LauParametricStepFuncPdf::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauParametricStepFuncPdf*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int LauParametricStepFuncPdf::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauParametricStepFuncPdf*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *LauParametricStepFuncPdf::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauParametricStepFuncPdf*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *LauParametricStepFuncPdf::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauParametricStepFuncPdf*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr LauBelleCPCoeffSet::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *LauBelleCPCoeffSet::Class_Name()
{
   return "LauBelleCPCoeffSet";
}

//______________________________________________________________________________
const char *LauBelleCPCoeffSet::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauBelleCPCoeffSet*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int LauBelleCPCoeffSet::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauBelleCPCoeffSet*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *LauBelleCPCoeffSet::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauBelleCPCoeffSet*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *LauBelleCPCoeffSet::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauBelleCPCoeffSet*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr LauCalcChiSq::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *LauCalcChiSq::Class_Name()
{
   return "LauCalcChiSq";
}

//______________________________________________________________________________
const char *LauCalcChiSq::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauCalcChiSq*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int LauCalcChiSq::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauCalcChiSq*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *LauCalcChiSq::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauCalcChiSq*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *LauCalcChiSq::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauCalcChiSq*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr LauAsymmCalc::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *LauAsymmCalc::Class_Name()
{
   return "LauAsymmCalc";
}

//______________________________________________________________________________
const char *LauAsymmCalc::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauAsymmCalc*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int LauAsymmCalc::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauAsymmCalc*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *LauAsymmCalc::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauAsymmCalc*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *LauAsymmCalc::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauAsymmCalc*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr LauBifurcatedGaussPdf::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *LauBifurcatedGaussPdf::Class_Name()
{
   return "LauBifurcatedGaussPdf";
}

//______________________________________________________________________________
const char *LauBifurcatedGaussPdf::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauBifurcatedGaussPdf*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int LauBifurcatedGaussPdf::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauBifurcatedGaussPdf*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *LauBifurcatedGaussPdf::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauBifurcatedGaussPdf*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *LauBifurcatedGaussPdf::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauBifurcatedGaussPdf*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr LauCrystalBallPdf::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *LauCrystalBallPdf::Class_Name()
{
   return "LauCrystalBallPdf";
}

//______________________________________________________________________________
const char *LauCrystalBallPdf::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauCrystalBallPdf*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int LauCrystalBallPdf::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauCrystalBallPdf*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *LauCrystalBallPdf::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauCrystalBallPdf*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *LauCrystalBallPdf::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauCrystalBallPdf*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr LauKappaRes::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *LauKappaRes::Class_Name()
{
   return "LauKappaRes";
}

//______________________________________________________________________________
const char *LauKappaRes::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauKappaRes*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int LauKappaRes::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauKappaRes*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *LauKappaRes::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauKappaRes*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *LauKappaRes::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauKappaRes*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr LauSimpleFitModel::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *LauSimpleFitModel::Class_Name()
{
   return "LauSimpleFitModel";
}

//______________________________________________________________________________
const char *LauSimpleFitModel::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauSimpleFitModel*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int LauSimpleFitModel::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauSimpleFitModel*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *LauSimpleFitModel::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauSimpleFitModel*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *LauSimpleFitModel::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauSimpleFitModel*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr LauNRAmplitude::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *LauNRAmplitude::Class_Name()
{
   return "LauNRAmplitude";
}

//______________________________________________________________________________
const char *LauNRAmplitude::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauNRAmplitude*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int LauNRAmplitude::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauNRAmplitude*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *LauNRAmplitude::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauNRAmplitude*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *LauNRAmplitude::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauNRAmplitude*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr LauAbsBkgndDPModel::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *LauAbsBkgndDPModel::Class_Name()
{
   return "LauAbsBkgndDPModel";
}

//______________________________________________________________________________
const char *LauAbsBkgndDPModel::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauAbsBkgndDPModel*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int LauAbsBkgndDPModel::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauAbsBkgndDPModel*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *LauAbsBkgndDPModel::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauAbsBkgndDPModel*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *LauAbsBkgndDPModel::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauAbsBkgndDPModel*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr LauBkgndDPModel::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *LauBkgndDPModel::Class_Name()
{
   return "LauBkgndDPModel";
}

//______________________________________________________________________________
const char *LauBkgndDPModel::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauBkgndDPModel*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int LauBkgndDPModel::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauBkgndDPModel*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *LauBkgndDPModel::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauBkgndDPModel*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *LauBkgndDPModel::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauBkgndDPModel*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr Lau1DCubicSpline::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *Lau1DCubicSpline::Class_Name()
{
   return "Lau1DCubicSpline";
}

//______________________________________________________________________________
const char *Lau1DCubicSpline::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Lau1DCubicSpline*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int Lau1DCubicSpline::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Lau1DCubicSpline*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *Lau1DCubicSpline::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Lau1DCubicSpline*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *Lau1DCubicSpline::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Lau1DCubicSpline*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr LauAbsModIndPartWave::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *LauAbsModIndPartWave::Class_Name()
{
   return "LauAbsModIndPartWave";
}

//______________________________________________________________________________
const char *LauAbsModIndPartWave::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauAbsModIndPartWave*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int LauAbsModIndPartWave::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauAbsModIndPartWave*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *LauAbsModIndPartWave::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauAbsModIndPartWave*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *LauAbsModIndPartWave::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauAbsModIndPartWave*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr LauFitter::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *LauFitter::Class_Name()
{
   return "LauFitter";
}

//______________________________________________________________________________
const char *LauFitter::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauFitter*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int LauFitter::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauFitter*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *LauFitter::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauFitter*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *LauFitter::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauFitter*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr LauKMatrixPropFactory::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *LauKMatrixPropFactory::Class_Name()
{
   return "LauKMatrixPropFactory";
}

//______________________________________________________________________________
const char *LauKMatrixPropFactory::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauKMatrixPropFactory*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int LauKMatrixPropFactory::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauKMatrixPropFactory*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *LauKMatrixPropFactory::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauKMatrixPropFactory*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *LauKMatrixPropFactory::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauKMatrixPropFactory*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr LauLASSNRRes::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *LauLASSNRRes::Class_Name()
{
   return "LauLASSNRRes";
}

//______________________________________________________________________________
const char *LauLASSNRRes::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauLASSNRRes*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int LauLASSNRRes::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauLASSNRRes*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *LauLASSNRRes::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauLASSNRRes*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *LauLASSNRRes::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauLASSNRRes*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr LauBelleNR::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *LauBelleNR::Class_Name()
{
   return "LauBelleNR";
}

//______________________________________________________________________________
const char *LauBelleNR::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauBelleNR*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int LauBelleNR::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauBelleNR*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *LauBelleNR::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauBelleNR*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *LauBelleNR::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauBelleNR*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr LauSigmoidPdf::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *LauSigmoidPdf::Class_Name()
{
   return "LauSigmoidPdf";
}

//______________________________________________________________________________
const char *LauSigmoidPdf::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauSigmoidPdf*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int LauSigmoidPdf::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauSigmoidPdf*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *LauSigmoidPdf::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauSigmoidPdf*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *LauSigmoidPdf::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauSigmoidPdf*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr Lau2DAbsHistDPPdf::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *Lau2DAbsHistDPPdf::Class_Name()
{
   return "Lau2DAbsHistDPPdf";
}

//______________________________________________________________________________
const char *Lau2DAbsHistDPPdf::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Lau2DAbsHistDPPdf*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int Lau2DAbsHistDPPdf::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Lau2DAbsHistDPPdf*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *Lau2DAbsHistDPPdf::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Lau2DAbsHistDPPdf*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *Lau2DAbsHistDPPdf::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Lau2DAbsHistDPPdf*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr LauDPDepMapPdf::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *LauDPDepMapPdf::Class_Name()
{
   return "LauDPDepMapPdf";
}

//______________________________________________________________________________
const char *LauDPDepMapPdf::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauDPDepMapPdf*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int LauDPDepMapPdf::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauDPDepMapPdf*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *LauDPDepMapPdf::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauDPDepMapPdf*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *LauDPDepMapPdf::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauDPDepMapPdf*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr LauBreitWignerRes::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *LauBreitWignerRes::Class_Name()
{
   return "LauBreitWignerRes";
}

//______________________________________________________________________________
const char *LauBreitWignerRes::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauBreitWignerRes*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int LauBreitWignerRes::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauBreitWignerRes*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *LauBreitWignerRes::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauBreitWignerRes*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *LauBreitWignerRes::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauBreitWignerRes*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr Lau2DSplineDPPdf::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *Lau2DSplineDPPdf::Class_Name()
{
   return "Lau2DSplineDPPdf";
}

//______________________________________________________________________________
const char *Lau2DSplineDPPdf::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Lau2DSplineDPPdf*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int Lau2DSplineDPPdf::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Lau2DSplineDPPdf*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *Lau2DSplineDPPdf::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Lau2DSplineDPPdf*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *Lau2DSplineDPPdf::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Lau2DSplineDPPdf*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr LauCacheData::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *LauCacheData::Class_Name()
{
   return "LauCacheData";
}

//______________________________________________________________________________
const char *LauCacheData::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauCacheData*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int LauCacheData::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauCacheData*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *LauCacheData::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauCacheData*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *LauCacheData::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauCacheData*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr LauPolarFormFactorNR::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *LauPolarFormFactorNR::Class_Name()
{
   return "LauPolarFormFactorNR";
}

//______________________________________________________________________________
const char *LauPolarFormFactorNR::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauPolarFormFactorNR*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int LauPolarFormFactorNR::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauPolarFormFactorNR*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *LauPolarFormFactorNR::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauPolarFormFactorNR*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *LauPolarFormFactorNR::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauPolarFormFactorNR*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr Lau2DAbsDP::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *Lau2DAbsDP::Class_Name()
{
   return "Lau2DAbsDP";
}

//______________________________________________________________________________
const char *Lau2DAbsDP::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Lau2DAbsDP*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int Lau2DAbsDP::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Lau2DAbsDP*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *Lau2DAbsDP::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Lau2DAbsDP*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *Lau2DAbsDP::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Lau2DAbsDP*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr LauRescatteringRes::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *LauRescatteringRes::Class_Name()
{
   return "LauRescatteringRes";
}

//______________________________________________________________________________
const char *LauRescatteringRes::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauRescatteringRes*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int LauRescatteringRes::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauRescatteringRes*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *LauRescatteringRes::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauRescatteringRes*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *LauRescatteringRes::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauRescatteringRes*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr LauCartesianGammaCPCoeffSet::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *LauCartesianGammaCPCoeffSet::Class_Name()
{
   return "LauCartesianGammaCPCoeffSet";
}

//______________________________________________________________________________
const char *LauCartesianGammaCPCoeffSet::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauCartesianGammaCPCoeffSet*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int LauCartesianGammaCPCoeffSet::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauCartesianGammaCPCoeffSet*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *LauCartesianGammaCPCoeffSet::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauCartesianGammaCPCoeffSet*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *LauCartesianGammaCPCoeffSet::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauCartesianGammaCPCoeffSet*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr LauDPDepGaussPdf::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *LauDPDepGaussPdf::Class_Name()
{
   return "LauDPDepGaussPdf";
}

//______________________________________________________________________________
const char *LauDPDepGaussPdf::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauDPDepGaussPdf*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int LauDPDepGaussPdf::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauDPDepGaussPdf*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *LauDPDepGaussPdf::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauDPDepGaussPdf*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *LauDPDepGaussPdf::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauDPDepGaussPdf*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr LauScfMap::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *LauScfMap::Class_Name()
{
   return "LauScfMap";
}

//______________________________________________________________________________
const char *LauScfMap::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauScfMap*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int LauScfMap::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauScfMap*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *LauScfMap::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauScfMap*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *LauScfMap::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauScfMap*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr LauExponentialPdf::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *LauExponentialPdf::Class_Name()
{
   return "LauExponentialPdf";
}

//______________________________________________________________________________
const char *LauExponentialPdf::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauExponentialPdf*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int LauExponentialPdf::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauExponentialPdf*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *LauExponentialPdf::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauExponentialPdf*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *LauExponentialPdf::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauExponentialPdf*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr LauBelleSymNR::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *LauBelleSymNR::Class_Name()
{
   return "LauBelleSymNR";
}

//______________________________________________________________________________
const char *LauBelleSymNR::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauBelleSymNR*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int LauBelleSymNR::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauBelleSymNR*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *LauBelleSymNR::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauBelleSymNR*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *LauBelleSymNR::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauBelleSymNR*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr LauPoleRes::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *LauPoleRes::Class_Name()
{
   return "LauPoleRes";
}

//______________________________________________________________________________
const char *LauPoleRes::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauPoleRes*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int LauPoleRes::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauPoleRes*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *LauPoleRes::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauPoleRes*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *LauPoleRes::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauPoleRes*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr LauRealImagCoeffSet::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *LauRealImagCoeffSet::Class_Name()
{
   return "LauRealImagCoeffSet";
}

//______________________________________________________________________________
const char *LauRealImagCoeffSet::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauRealImagCoeffSet*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int LauRealImagCoeffSet::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauRealImagCoeffSet*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *LauRealImagCoeffSet::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauRealImagCoeffSet*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *LauRealImagCoeffSet::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauRealImagCoeffSet*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr LauSigmaRes::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *LauSigmaRes::Class_Name()
{
   return "LauSigmaRes";
}

//______________________________________________________________________________
const char *LauSigmaRes::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauSigmaRes*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int LauSigmaRes::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauSigmaRes*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *LauSigmaRes::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauSigmaRes*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *LauSigmaRes::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauSigmaRes*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr LauLASSRes::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *LauLASSRes::Class_Name()
{
   return "LauLASSRes";
}

//______________________________________________________________________________
const char *LauLASSRes::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauLASSRes*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int LauLASSRes::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauLASSRes*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *LauLASSRes::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauLASSRes*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *LauLASSRes::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauLASSRes*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr LauArgusPdf::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *LauArgusPdf::Class_Name()
{
   return "LauArgusPdf";
}

//______________________________________________________________________________
const char *LauArgusPdf::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauArgusPdf*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int LauArgusPdf::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauArgusPdf*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *LauArgusPdf::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauArgusPdf*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *LauArgusPdf::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauArgusPdf*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr LauAbsIncohRes::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *LauAbsIncohRes::Class_Name()
{
   return "LauAbsIncohRes";
}

//______________________________________________________________________________
const char *LauAbsIncohRes::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauAbsIncohRes*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int LauAbsIncohRes::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauAbsIncohRes*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *LauAbsIncohRes::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauAbsIncohRes*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *LauAbsIncohRes::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauAbsIncohRes*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr LauGaussIncohRes::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *LauGaussIncohRes::Class_Name()
{
   return "LauGaussIncohRes";
}

//______________________________________________________________________________
const char *LauGaussIncohRes::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauGaussIncohRes*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int LauGaussIncohRes::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauGaussIncohRes*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *LauGaussIncohRes::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauGaussIncohRes*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *LauGaussIncohRes::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauGaussIncohRes*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr LauDatabasePDG::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *LauDatabasePDG::Class_Name()
{
   return "LauDatabasePDG";
}

//______________________________________________________________________________
const char *LauDatabasePDG::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauDatabasePDG*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int LauDatabasePDG::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauDatabasePDG*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *LauDatabasePDG::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauDatabasePDG*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *LauDatabasePDG::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauDatabasePDG*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr LauFlatteRes::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *LauFlatteRes::Class_Name()
{
   return "LauFlatteRes";
}

//______________________________________________________________________________
const char *LauFlatteRes::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauFlatteRes*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int LauFlatteRes::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauFlatteRes*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *LauFlatteRes::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauFlatteRes*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *LauFlatteRes::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauFlatteRes*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr LauCleoCPCoeffSet::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *LauCleoCPCoeffSet::Class_Name()
{
   return "LauCleoCPCoeffSet";
}

//______________________________________________________________________________
const char *LauCleoCPCoeffSet::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauCleoCPCoeffSet*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int LauCleoCPCoeffSet::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauCleoCPCoeffSet*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *LauCleoCPCoeffSet::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauCleoCPCoeffSet*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *LauCleoCPCoeffSet::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauCleoCPCoeffSet*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr LauGaussPdf::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *LauGaussPdf::Class_Name()
{
   return "LauGaussPdf";
}

//______________________________________________________________________________
const char *LauGaussPdf::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauGaussPdf*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int LauGaussPdf::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauGaussPdf*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *LauGaussPdf::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauGaussPdf*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *LauGaussPdf::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauGaussPdf*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr Lau2DHistPdf::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *Lau2DHistPdf::Class_Name()
{
   return "Lau2DHistPdf";
}

//______________________________________________________________________________
const char *Lau2DHistPdf::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Lau2DHistPdf*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int Lau2DHistPdf::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Lau2DHistPdf*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *Lau2DHistPdf::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Lau2DHistPdf*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *Lau2DHistPdf::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Lau2DHistPdf*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr LauModIndPartWaveMagPhase::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *LauModIndPartWaveMagPhase::Class_Name()
{
   return "LauModIndPartWaveMagPhase";
}

//______________________________________________________________________________
const char *LauModIndPartWaveMagPhase::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauModIndPartWaveMagPhase*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int LauModIndPartWaveMagPhase::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauModIndPartWaveMagPhase*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *LauModIndPartWaveMagPhase::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauModIndPartWaveMagPhase*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *LauModIndPartWaveMagPhase::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauModIndPartWaveMagPhase*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr Lau2DAbsHistDP::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *Lau2DAbsHistDP::Class_Name()
{
   return "Lau2DAbsHistDP";
}

//______________________________________________________________________________
const char *Lau2DAbsHistDP::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Lau2DAbsHistDP*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int Lau2DAbsHistDP::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Lau2DAbsHistDP*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *Lau2DAbsHistDP::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Lau2DAbsHistDP*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *Lau2DAbsHistDP::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Lau2DAbsHistDP*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr Lau2DHistDP::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *Lau2DHistDP::Class_Name()
{
   return "Lau2DHistDP";
}

//______________________________________________________________________________
const char *Lau2DHistDP::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Lau2DHistDP*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int Lau2DHistDP::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Lau2DHistDP*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *Lau2DHistDP::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Lau2DHistDP*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *Lau2DHistDP::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Lau2DHistDP*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr LauDPPartialIntegralInfo::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *LauDPPartialIntegralInfo::Class_Name()
{
   return "LauDPPartialIntegralInfo";
}

//______________________________________________________________________________
const char *LauDPPartialIntegralInfo::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauDPPartialIntegralInfo*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int LauDPPartialIntegralInfo::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauDPPartialIntegralInfo*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *LauDPPartialIntegralInfo::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauDPPartialIntegralInfo*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *LauDPPartialIntegralInfo::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauDPPartialIntegralInfo*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr Lau1DHistPdf::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *Lau1DHistPdf::Class_Name()
{
   return "Lau1DHistPdf";
}

//______________________________________________________________________________
const char *Lau1DHistPdf::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Lau1DHistPdf*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int Lau1DHistPdf::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Lau1DHistPdf*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *Lau1DHistPdf::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Lau1DHistPdf*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *Lau1DHistPdf::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Lau1DHistPdf*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr Lau2DCubicSpline::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *Lau2DCubicSpline::Class_Name()
{
   return "Lau2DCubicSpline";
}

//______________________________________________________________________________
const char *Lau2DCubicSpline::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Lau2DCubicSpline*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int Lau2DCubicSpline::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Lau2DCubicSpline*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *Lau2DCubicSpline::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Lau2DCubicSpline*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *Lau2DCubicSpline::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Lau2DCubicSpline*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr LauResultsExtractor::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *LauResultsExtractor::Class_Name()
{
   return "LauResultsExtractor";
}

//______________________________________________________________________________
const char *LauResultsExtractor::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauResultsExtractor*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int LauResultsExtractor::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauResultsExtractor*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *LauResultsExtractor::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauResultsExtractor*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *LauResultsExtractor::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauResultsExtractor*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr LauAbsEffModel::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *LauAbsEffModel::Class_Name()
{
   return "LauAbsEffModel";
}

//______________________________________________________________________________
const char *LauAbsEffModel::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauAbsEffModel*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int LauAbsEffModel::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauAbsEffModel*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *LauAbsEffModel::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauAbsEffModel*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *LauAbsEffModel::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauAbsEffModel*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr LauEffModel::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *LauEffModel::Class_Name()
{
   return "LauEffModel";
}

//______________________________________________________________________________
const char *LauEffModel::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauEffModel*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int LauEffModel::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauEffModel*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *LauEffModel::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauEffModel*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *LauEffModel::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauEffModel*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr LauMergeDataFiles::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *LauMergeDataFiles::Class_Name()
{
   return "LauMergeDataFiles";
}

//______________________________________________________________________________
const char *LauMergeDataFiles::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauMergeDataFiles*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int LauMergeDataFiles::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauMergeDataFiles*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *LauMergeDataFiles::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauMergeDataFiles*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *LauMergeDataFiles::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauMergeDataFiles*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr LauRescattering2Res::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *LauRescattering2Res::Class_Name()
{
   return "LauRescattering2Res";
}

//______________________________________________________________________________
const char *LauRescattering2Res::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauRescattering2Res*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int LauRescattering2Res::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauRescattering2Res*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *LauRescattering2Res::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauRescattering2Res*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *LauRescattering2Res::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauRescattering2Res*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr LauDPDepSumPdf::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *LauDPDepSumPdf::Class_Name()
{
   return "LauDPDepSumPdf";
}

//______________________________________________________________________________
const char *LauDPDepSumPdf::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauDPDepSumPdf*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int LauDPDepSumPdf::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauDPDepSumPdf*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *LauDPDepSumPdf::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauDPDepSumPdf*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *LauDPDepSumPdf::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauDPDepSumPdf*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr LauVetoes::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *LauVetoes::Class_Name()
{
   return "LauVetoes";
}

//______________________________________________________________________________
const char *LauVetoes::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauVetoes*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int LauVetoes::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauVetoes*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *LauVetoes::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauVetoes*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *LauVetoes::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauVetoes*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr LauRhoOmegaMix::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *LauRhoOmegaMix::Class_Name()
{
   return "LauRhoOmegaMix";
}

//______________________________________________________________________________
const char *LauRhoOmegaMix::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauRhoOmegaMix*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int LauRhoOmegaMix::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauRhoOmegaMix*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *LauRhoOmegaMix::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauRhoOmegaMix*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *LauRhoOmegaMix::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauRhoOmegaMix*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr LauIntegrals::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *LauIntegrals::Class_Name()
{
   return "LauIntegrals";
}

//______________________________________________________________________________
const char *LauIntegrals::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauIntegrals*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int LauIntegrals::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauIntegrals*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *LauIntegrals::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauIntegrals*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *LauIntegrals::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauIntegrals*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr Lau2DSplineDP::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *Lau2DSplineDP::Class_Name()
{
   return "Lau2DSplineDP";
}

//______________________________________________________________________________
const char *Lau2DSplineDP::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Lau2DSplineDP*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int Lau2DSplineDP::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Lau2DSplineDP*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *Lau2DSplineDP::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Lau2DSplineDP*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *Lau2DSplineDP::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Lau2DSplineDP*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr LauChebychevPdf::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *LauChebychevPdf::Class_Name()
{
   return "LauChebychevPdf";
}

//______________________________________________________________________________
const char *LauChebychevPdf::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauChebychevPdf*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int LauChebychevPdf::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauChebychevPdf*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *LauChebychevPdf::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauChebychevPdf*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *LauChebychevPdf::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauChebychevPdf*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr LauGenNtuple::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *LauGenNtuple::Class_Name()
{
   return "LauGenNtuple";
}

//______________________________________________________________________________
const char *LauGenNtuple::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauGenNtuple*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int LauGenNtuple::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauGenNtuple*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *LauGenNtuple::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauGenNtuple*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *LauGenNtuple::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauGenNtuple*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr LauRealImagCPCoeffSet::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *LauRealImagCPCoeffSet::Class_Name()
{
   return "LauRealImagCPCoeffSet";
}

//______________________________________________________________________________
const char *LauRealImagCPCoeffSet::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauRealImagCPCoeffSet*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int LauRealImagCPCoeffSet::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauRealImagCPCoeffSet*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *LauRealImagCPCoeffSet::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauRealImagCPCoeffSet*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *LauRealImagCPCoeffSet::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauRealImagCPCoeffSet*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr LauPolNR::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *LauPolNR::Class_Name()
{
   return "LauPolNR";
}

//______________________________________________________________________________
const char *LauPolNR::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauPolNR*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int LauPolNR::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauPolNR*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *LauPolNR::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauPolNR*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *LauPolNR::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauPolNR*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr LauDPDepCruijffPdf::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *LauDPDepCruijffPdf::Class_Name()
{
   return "LauDPDepCruijffPdf";
}

//______________________________________________________________________________
const char *LauDPDepCruijffPdf::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauDPDepCruijffPdf*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int LauDPDepCruijffPdf::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauDPDepCruijffPdf*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *LauDPDepCruijffPdf::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauDPDepCruijffPdf*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *LauDPDepCruijffPdf::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauDPDepCruijffPdf*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr LauIsobarDynamics::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *LauIsobarDynamics::Class_Name()
{
   return "LauIsobarDynamics";
}

//______________________________________________________________________________
const char *LauIsobarDynamics::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauIsobarDynamics*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int LauIsobarDynamics::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauIsobarDynamics*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *LauIsobarDynamics::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauIsobarDynamics*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *LauIsobarDynamics::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauIsobarDynamics*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr LauRelBreitWignerRes::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *LauRelBreitWignerRes::Class_Name()
{
   return "LauRelBreitWignerRes";
}

//______________________________________________________________________________
const char *LauRelBreitWignerRes::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauRelBreitWignerRes*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int LauRelBreitWignerRes::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauRelBreitWignerRes*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *LauRelBreitWignerRes::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauRelBreitWignerRes*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *LauRelBreitWignerRes::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauRelBreitWignerRes*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr LauDaughters::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *LauDaughters::Class_Name()
{
   return "LauDaughters";
}

//______________________________________________________________________________
const char *LauDaughters::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauDaughters*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int LauDaughters::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauDaughters*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *LauDaughters::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauDaughters*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *LauDaughters::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauDaughters*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr LauKMatrixPropagator::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *LauKMatrixPropagator::Class_Name()
{
   return "LauKMatrixPropagator";
}

//______________________________________________________________________________
const char *LauKMatrixPropagator::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauKMatrixPropagator*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int LauKMatrixPropagator::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauKMatrixPropagator*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *LauKMatrixPropagator::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauKMatrixPropagator*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *LauKMatrixPropagator::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauKMatrixPropagator*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr LauPolarFormFactorSymNR::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *LauPolarFormFactorSymNR::Class_Name()
{
   return "LauPolarFormFactorSymNR";
}

//______________________________________________________________________________
const char *LauPolarFormFactorSymNR::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauPolarFormFactorSymNR*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int LauPolarFormFactorSymNR::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauPolarFormFactorSymNR*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *LauPolarFormFactorSymNR::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauPolarFormFactorSymNR*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *LauPolarFormFactorSymNR::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauPolarFormFactorSymNR*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr LauPrint::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *LauPrint::Class_Name()
{
   return "LauPrint";
}

//______________________________________________________________________________
const char *LauPrint::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauPrint*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int LauPrint::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauPrint*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *LauPrint::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauPrint*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *LauPrint::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauPrint*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr LauDabbaRes::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *LauDabbaRes::Class_Name()
{
   return "LauDabbaRes";
}

//______________________________________________________________________________
const char *LauDabbaRes::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauDabbaRes*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int LauDabbaRes::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauDabbaRes*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *LauDabbaRes::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauDabbaRes*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *LauDabbaRes::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauDabbaRes*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr Lau2DHistDPPdf::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *Lau2DHistDPPdf::Class_Name()
{
   return "Lau2DHistDPPdf";
}

//______________________________________________________________________________
const char *Lau2DHistDPPdf::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Lau2DHistDPPdf*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int Lau2DHistDPPdf::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Lau2DHistDPPdf*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *Lau2DHistDPPdf::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Lau2DHistDPPdf*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *Lau2DHistDPPdf::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Lau2DHistDPPdf*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr LauPolarGammaCPCoeffSet::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *LauPolarGammaCPCoeffSet::Class_Name()
{
   return "LauPolarGammaCPCoeffSet";
}

//______________________________________________________________________________
const char *LauPolarGammaCPCoeffSet::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauPolarGammaCPCoeffSet*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int LauPolarGammaCPCoeffSet::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauPolarGammaCPCoeffSet*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *LauPolarGammaCPCoeffSet::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauPolarGammaCPCoeffSet*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *LauPolarGammaCPCoeffSet::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauPolarGammaCPCoeffSet*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr LauWeightedSumEffModel::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *LauWeightedSumEffModel::Class_Name()
{
   return "LauWeightedSumEffModel";
}

//______________________________________________________________________________
const char *LauWeightedSumEffModel::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauWeightedSumEffModel*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int LauWeightedSumEffModel::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauWeightedSumEffModel*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *LauWeightedSumEffModel::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauWeightedSumEffModel*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *LauWeightedSumEffModel::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauWeightedSumEffModel*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr LauEFKLLMRes::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *LauEFKLLMRes::Class_Name()
{
   return "LauEFKLLMRes";
}

//______________________________________________________________________________
const char *LauEFKLLMRes::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauEFKLLMRes*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int LauEFKLLMRes::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauEFKLLMRes*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *LauEFKLLMRes::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauEFKLLMRes*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *LauEFKLLMRes::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauEFKLLMRes*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr LauNovosibirskPdf::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *LauNovosibirskPdf::Class_Name()
{
   return "LauNovosibirskPdf";
}

//______________________________________________________________________________
const char *LauNovosibirskPdf::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauNovosibirskPdf*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int LauNovosibirskPdf::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauNovosibirskPdf*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *LauNovosibirskPdf::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauNovosibirskPdf*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *LauNovosibirskPdf::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauNovosibirskPdf*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr LauCruijffPdf::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *LauCruijffPdf::Class_Name()
{
   return "LauCruijffPdf";
}

//______________________________________________________________________________
const char *LauCruijffPdf::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauCruijffPdf*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int LauCruijffPdf::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauCruijffPdf*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *LauCruijffPdf::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauCruijffPdf*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *LauCruijffPdf::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauCruijffPdf*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr LauSumPdf::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *LauSumPdf::Class_Name()
{
   return "LauSumPdf";
}

//______________________________________________________________________________
const char *LauSumPdf::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauSumPdf*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int LauSumPdf::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauSumPdf*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *LauSumPdf::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauSumPdf*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *LauSumPdf::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauSumPdf*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr LauMagPhaseCPCoeffSet::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *LauMagPhaseCPCoeffSet::Class_Name()
{
   return "LauMagPhaseCPCoeffSet";
}

//______________________________________________________________________________
const char *LauMagPhaseCPCoeffSet::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauMagPhaseCPCoeffSet*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int LauMagPhaseCPCoeffSet::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauMagPhaseCPCoeffSet*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *LauMagPhaseCPCoeffSet::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauMagPhaseCPCoeffSet*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *LauMagPhaseCPCoeffSet::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauMagPhaseCPCoeffSet*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr LauDPDepBifurGaussPdf::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *LauDPDepBifurGaussPdf::Class_Name()
{
   return "LauDPDepBifurGaussPdf";
}

//______________________________________________________________________________
const char *LauDPDepBifurGaussPdf::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauDPDepBifurGaussPdf*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int LauDPDepBifurGaussPdf::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauDPDepBifurGaussPdf*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *LauDPDepBifurGaussPdf::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauDPDepBifurGaussPdf*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *LauDPDepBifurGaussPdf::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauDPDepBifurGaussPdf*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr LauModIndPartWaveRealImag::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *LauModIndPartWaveRealImag::Class_Name()
{
   return "LauModIndPartWaveRealImag";
}

//______________________________________________________________________________
const char *LauModIndPartWaveRealImag::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauModIndPartWaveRealImag*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int LauModIndPartWaveRealImag::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauModIndPartWaveRealImag*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *LauModIndPartWaveRealImag::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauModIndPartWaveRealImag*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *LauModIndPartWaveRealImag::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauModIndPartWaveRealImag*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr LauRealImagGammaCPCoeffSet::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *LauRealImagGammaCPCoeffSet::Class_Name()
{
   return "LauRealImagGammaCPCoeffSet";
}

//______________________________________________________________________________
const char *LauRealImagGammaCPCoeffSet::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauRealImagGammaCPCoeffSet*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int LauRealImagGammaCPCoeffSet::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauRealImagGammaCPCoeffSet*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *LauRealImagGammaCPCoeffSet::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauRealImagGammaCPCoeffSet*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *LauRealImagGammaCPCoeffSet::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauRealImagGammaCPCoeffSet*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr LauGounarisSakuraiRes::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *LauGounarisSakuraiRes::Class_Name()
{
   return "LauGounarisSakuraiRes";
}

//______________________________________________________________________________
const char *LauGounarisSakuraiRes::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauGounarisSakuraiRes*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int LauGounarisSakuraiRes::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauGounarisSakuraiRes*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *LauGounarisSakuraiRes::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauGounarisSakuraiRes*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *LauGounarisSakuraiRes::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauGounarisSakuraiRes*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr LauResonanceInfo::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *LauResonanceInfo::Class_Name()
{
   return "LauResonanceInfo";
}

//______________________________________________________________________________
const char *LauResonanceInfo::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauResonanceInfo*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int LauResonanceInfo::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LauResonanceInfo*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *LauResonanceInfo::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauResonanceInfo*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *LauResonanceInfo::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LauResonanceInfo*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> void LauAbsFitter<LauMinuit>::Streamer(TBuffer &R__b)
{
   // Stream an object of class LauAbsFitter<LauMinuit>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(LauAbsFitter<LauMinuit>::Class(),this);
   } else {
      R__b.WriteClassBuffer(LauAbsFitter<LauMinuit>::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_LauAbsFitterlELauMinuitgR(void *p) {
      delete ((::LauAbsFitter<LauMinuit>*)p);
   }
   static void deleteArray_LauAbsFitterlELauMinuitgR(void *p) {
      delete [] ((::LauAbsFitter<LauMinuit>*)p);
   }
   static void destruct_LauAbsFitterlELauMinuitgR(void *p) {
      typedef ::LauAbsFitter<LauMinuit> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::LauAbsFitter<LauMinuit>

namespace ROOT {
   // Wrapper around operator delete
   static void delete_LauMinuit(void *p) {
      delete ((::LauMinuit*)p);
   }
   static void deleteArray_LauMinuit(void *p) {
      delete [] ((::LauMinuit*)p);
   }
   static void destruct_LauMinuit(void *p) {
      typedef ::LauMinuit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::LauMinuit

//______________________________________________________________________________
void LauFitObject::Streamer(TBuffer &R__b)
{
   // Stream an object of class LauFitObject.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(LauFitObject::Class(),this);
   } else {
      R__b.WriteClassBuffer(LauFitObject::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_LauFitObject(void *p) {
      delete ((::LauFitObject*)p);
   }
   static void deleteArray_LauFitObject(void *p) {
      delete [] ((::LauFitObject*)p);
   }
   static void destruct_LauFitObject(void *p) {
      typedef ::LauFitObject current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::LauFitObject

//______________________________________________________________________________
void LauAbsRValue::Streamer(TBuffer &R__b)
{
   // Stream an object of class LauAbsRValue.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(LauAbsRValue::Class(),this);
   } else {
      R__b.WriteClassBuffer(LauAbsRValue::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_LauAbsRValue(void *p) {
      delete ((::LauAbsRValue*)p);
   }
   static void deleteArray_LauAbsRValue(void *p) {
      delete [] ((::LauAbsRValue*)p);
   }
   static void destruct_LauAbsRValue(void *p) {
      typedef ::LauAbsRValue current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::LauAbsRValue

//______________________________________________________________________________
void LauBlind::Streamer(TBuffer &R__b)
{
   // Stream an object of class LauBlind.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(LauBlind::Class(),this);
   } else {
      R__b.WriteClassBuffer(LauBlind::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_LauBlind(void *p) {
      return  p ? new(p) ::LauBlind : new ::LauBlind;
   }
   static void *newArray_LauBlind(Long_t nElements, void *p) {
      return p ? new(p) ::LauBlind[nElements] : new ::LauBlind[nElements];
   }
   // Wrapper around operator delete
   static void delete_LauBlind(void *p) {
      delete ((::LauBlind*)p);
   }
   static void deleteArray_LauBlind(void *p) {
      delete [] ((::LauBlind*)p);
   }
   static void destruct_LauBlind(void *p) {
      typedef ::LauBlind current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::LauBlind

//______________________________________________________________________________
void LauParameter::Streamer(TBuffer &R__b)
{
   // Stream an object of class LauParameter.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(LauParameter::Class(),this);
   } else {
      R__b.WriteClassBuffer(LauParameter::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_LauParameter(void *p) {
      return  p ? new(p) ::LauParameter : new ::LauParameter;
   }
   static void *newArray_LauParameter(Long_t nElements, void *p) {
      return p ? new(p) ::LauParameter[nElements] : new ::LauParameter[nElements];
   }
   // Wrapper around operator delete
   static void delete_LauParameter(void *p) {
      delete ((::LauParameter*)p);
   }
   static void deleteArray_LauParameter(void *p) {
      delete [] ((::LauParameter*)p);
   }
   static void destruct_LauParameter(void *p) {
      typedef ::LauParameter current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::LauParameter

//______________________________________________________________________________
void LauFormulaPar::Streamer(TBuffer &R__b)
{
   // Stream an object of class LauFormulaPar.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(LauFormulaPar::Class(),this);
   } else {
      R__b.WriteClassBuffer(LauFormulaPar::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_LauFormulaPar(void *p) {
      delete ((::LauFormulaPar*)p);
   }
   static void deleteArray_LauFormulaPar(void *p) {
      delete [] ((::LauFormulaPar*)p);
   }
   static void destruct_LauFormulaPar(void *p) {
      typedef ::LauFormulaPar current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::LauFormulaPar

//______________________________________________________________________________
void LauSPlot::Streamer(TBuffer &R__b)
{
   // Stream an object of class LauSPlot.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(LauSPlot::Class(),this);
   } else {
      R__b.WriteClassBuffer(LauSPlot::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_LauSPlot(void *p) {
      delete ((::LauSPlot*)p);
   }
   static void deleteArray_LauSPlot(void *p) {
      delete [] ((::LauSPlot*)p);
   }
   static void destruct_LauSPlot(void *p) {
      typedef ::LauSPlot current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::LauSPlot

//______________________________________________________________________________
void LauFitNtuple::Streamer(TBuffer &R__b)
{
   // Stream an object of class LauFitNtuple.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(LauFitNtuple::Class(),this);
   } else {
      R__b.WriteClassBuffer(LauFitNtuple::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_LauFitNtuple(void *p) {
      delete ((::LauFitNtuple*)p);
   }
   static void deleteArray_LauFitNtuple(void *p) {
      delete [] ((::LauFitNtuple*)p);
   }
   static void destruct_LauFitNtuple(void *p) {
      typedef ::LauFitNtuple current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::LauFitNtuple

//______________________________________________________________________________
void LauAbsFitModel::Streamer(TBuffer &R__b)
{
   // Stream an object of class LauAbsFitModel.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(LauAbsFitModel::Class(),this);
   } else {
      R__b.WriteClassBuffer(LauAbsFitModel::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_LauAbsFitModel(void *p) {
      delete ((::LauAbsFitModel*)p);
   }
   static void deleteArray_LauAbsFitModel(void *p) {
      delete [] ((::LauAbsFitModel*)p);
   }
   static void destruct_LauAbsFitModel(void *p) {
      typedef ::LauAbsFitModel current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::LauAbsFitModel

namespace ROOT {
   // Wrappers around operator new
   static void *new_LauComplex(void *p) {
      return  p ? new(p) ::LauComplex : new ::LauComplex;
   }
   static void *newArray_LauComplex(Long_t nElements, void *p) {
      return p ? new(p) ::LauComplex[nElements] : new ::LauComplex[nElements];
   }
   // Wrapper around operator delete
   static void delete_LauComplex(void *p) {
      delete ((::LauComplex*)p);
   }
   static void deleteArray_LauComplex(void *p) {
      delete [] ((::LauComplex*)p);
   }
   static void destruct_LauComplex(void *p) {
      typedef ::LauComplex current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::LauComplex

//______________________________________________________________________________
void LauCPFitModel::Streamer(TBuffer &R__b)
{
   // Stream an object of class LauCPFitModel.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(LauCPFitModel::Class(),this);
   } else {
      R__b.WriteClassBuffer(LauCPFitModel::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_LauCPFitModel(void *p) {
      delete ((::LauCPFitModel*)p);
   }
   static void deleteArray_LauCPFitModel(void *p) {
      delete [] ((::LauCPFitModel*)p);
   }
   static void destruct_LauCPFitModel(void *p) {
      typedef ::LauCPFitModel current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::LauCPFitModel

//______________________________________________________________________________
void LauAbsCoeffSet::Streamer(TBuffer &R__b)
{
   // Stream an object of class LauAbsCoeffSet.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(LauAbsCoeffSet::Class(),this);
   } else {
      R__b.WriteClassBuffer(LauAbsCoeffSet::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_LauAbsCoeffSet(void *p) {
      delete ((::LauAbsCoeffSet*)p);
   }
   static void deleteArray_LauAbsCoeffSet(void *p) {
      delete [] ((::LauAbsCoeffSet*)p);
   }
   static void destruct_LauAbsCoeffSet(void *p) {
      typedef ::LauAbsCoeffSet current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::LauAbsCoeffSet

//______________________________________________________________________________
void LauMagPhaseCoeffSet::Streamer(TBuffer &R__b)
{
   // Stream an object of class LauMagPhaseCoeffSet.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(LauMagPhaseCoeffSet::Class(),this);
   } else {
      R__b.WriteClassBuffer(LauMagPhaseCoeffSet::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_LauMagPhaseCoeffSet(void *p) {
      delete ((::LauMagPhaseCoeffSet*)p);
   }
   static void deleteArray_LauMagPhaseCoeffSet(void *p) {
      delete [] ((::LauMagPhaseCoeffSet*)p);
   }
   static void destruct_LauMagPhaseCoeffSet(void *p) {
      typedef ::LauMagPhaseCoeffSet current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::LauMagPhaseCoeffSet

//______________________________________________________________________________
void LauBlattWeisskopfFactor::Streamer(TBuffer &R__b)
{
   // Stream an object of class LauBlattWeisskopfFactor.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(LauBlattWeisskopfFactor::Class(),this);
   } else {
      R__b.WriteClassBuffer(LauBlattWeisskopfFactor::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_LauBlattWeisskopfFactor(void *p) {
      delete ((::LauBlattWeisskopfFactor*)p);
   }
   static void deleteArray_LauBlattWeisskopfFactor(void *p) {
      delete [] ((::LauBlattWeisskopfFactor*)p);
   }
   static void destruct_LauBlattWeisskopfFactor(void *p) {
      typedef ::LauBlattWeisskopfFactor current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::LauBlattWeisskopfFactor

//______________________________________________________________________________
void LauAbsResonance::Streamer(TBuffer &R__b)
{
   // Stream an object of class LauAbsResonance.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(LauAbsResonance::Class(),this);
   } else {
      R__b.WriteClassBuffer(LauAbsResonance::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_LauAbsResonance(void *p) {
      delete ((::LauAbsResonance*)p);
   }
   static void deleteArray_LauAbsResonance(void *p) {
      delete [] ((::LauAbsResonance*)p);
   }
   static void destruct_LauAbsResonance(void *p) {
      typedef ::LauAbsResonance current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::LauAbsResonance

//______________________________________________________________________________
void LauFlatNR::Streamer(TBuffer &R__b)
{
   // Stream an object of class LauFlatNR.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(LauFlatNR::Class(),this);
   } else {
      R__b.WriteClassBuffer(LauFlatNR::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_LauFlatNR(void *p) {
      delete ((::LauFlatNR*)p);
   }
   static void deleteArray_LauFlatNR(void *p) {
      delete [] ((::LauFlatNR*)p);
   }
   static void destruct_LauFlatNR(void *p) {
      typedef ::LauFlatNR current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::LauFlatNR

//______________________________________________________________________________
void LauFitDataTree::Streamer(TBuffer &R__b)
{
   // Stream an object of class LauFitDataTree.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(LauFitDataTree::Class(),this);
   } else {
      R__b.WriteClassBuffer(LauFitDataTree::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_LauFitDataTree(void *p) {
      delete ((::LauFitDataTree*)p);
   }
   static void deleteArray_LauFitDataTree(void *p) {
      delete [] ((::LauFitDataTree*)p);
   }
   static void destruct_LauFitDataTree(void *p) {
      typedef ::LauFitDataTree current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::LauFitDataTree

namespace ROOT {
   // Wrappers around operator new
   static void *new_LauParamFixed(void *p) {
      return  p ? new(p) ::LauParamFixed : new ::LauParamFixed;
   }
   static void *newArray_LauParamFixed(Long_t nElements, void *p) {
      return p ? new(p) ::LauParamFixed[nElements] : new ::LauParamFixed[nElements];
   }
   // Wrapper around operator delete
   static void delete_LauParamFixed(void *p) {
      delete ((::LauParamFixed*)p);
   }
   static void deleteArray_LauParamFixed(void *p) {
      delete [] ((::LauParamFixed*)p);
   }
   static void destruct_LauParamFixed(void *p) {
      typedef ::LauParamFixed current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::LauParamFixed

//______________________________________________________________________________
void LauAbsPdf::Streamer(TBuffer &R__b)
{
   // Stream an object of class LauAbsPdf.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(LauAbsPdf::Class(),this);
   } else {
      R__b.WriteClassBuffer(LauAbsPdf::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_LauAbsPdf(void *p) {
      delete ((::LauAbsPdf*)p);
   }
   static void deleteArray_LauAbsPdf(void *p) {
      delete [] ((::LauAbsPdf*)p);
   }
   static void destruct_LauAbsPdf(void *p) {
      typedef ::LauAbsPdf current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::LauAbsPdf

//______________________________________________________________________________
void LauLinearPdf::Streamer(TBuffer &R__b)
{
   // Stream an object of class LauLinearPdf.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(LauLinearPdf::Class(),this);
   } else {
      R__b.WriteClassBuffer(LauLinearPdf::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_LauLinearPdf(void *p) {
      delete ((::LauLinearPdf*)p);
   }
   static void deleteArray_LauLinearPdf(void *p) {
      delete [] ((::LauLinearPdf*)p);
   }
   static void destruct_LauLinearPdf(void *p) {
      typedef ::LauLinearPdf current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::LauLinearPdf

//______________________________________________________________________________
void LauSimFitMaster::Streamer(TBuffer &R__b)
{
   // Stream an object of class LauSimFitMaster.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(LauSimFitMaster::Class(),this);
   } else {
      R__b.WriteClassBuffer(LauSimFitMaster::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_LauSimFitMaster(void *p) {
      delete ((::LauSimFitMaster*)p);
   }
   static void deleteArray_LauSimFitMaster(void *p) {
      delete [] ((::LauSimFitMaster*)p);
   }
   static void destruct_LauSimFitMaster(void *p) {
      typedef ::LauSimFitMaster current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::LauSimFitMaster

//______________________________________________________________________________
void LauParticlePDG::Streamer(TBuffer &R__b)
{
   // Stream an object of class LauParticlePDG.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(LauParticlePDG::Class(),this);
   } else {
      R__b.WriteClassBuffer(LauParticlePDG::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_LauParticlePDG(void *p) {
      delete ((::LauParticlePDG*)p);
   }
   static void deleteArray_LauParticlePDG(void *p) {
      delete [] ((::LauParticlePDG*)p);
   }
   static void destruct_LauParticlePDG(void *p) {
      typedef ::LauParticlePDG current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::LauParticlePDG

//______________________________________________________________________________
void LauCartesianCPCoeffSet::Streamer(TBuffer &R__b)
{
   // Stream an object of class LauCartesianCPCoeffSet.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(LauCartesianCPCoeffSet::Class(),this);
   } else {
      R__b.WriteClassBuffer(LauCartesianCPCoeffSet::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_LauCartesianCPCoeffSet(void *p) {
      delete ((::LauCartesianCPCoeffSet*)p);
   }
   static void deleteArray_LauCartesianCPCoeffSet(void *p) {
      delete [] ((::LauCartesianCPCoeffSet*)p);
   }
   static void destruct_LauCartesianCPCoeffSet(void *p) {
      typedef ::LauCartesianCPCoeffSet current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::LauCartesianCPCoeffSet

//______________________________________________________________________________
void LauKMatrixProdSVP::Streamer(TBuffer &R__b)
{
   // Stream an object of class LauKMatrixProdSVP.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(LauKMatrixProdSVP::Class(),this);
   } else {
      R__b.WriteClassBuffer(LauKMatrixProdSVP::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_LauKMatrixProdSVP(void *p) {
      delete ((::LauKMatrixProdSVP*)p);
   }
   static void deleteArray_LauKMatrixProdSVP(void *p) {
      delete [] ((::LauKMatrixProdSVP*)p);
   }
   static void destruct_LauKMatrixProdSVP(void *p) {
      typedef ::LauKMatrixProdSVP current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::LauKMatrixProdSVP

//______________________________________________________________________________
void Lau2DAbsDPPdf::Streamer(TBuffer &R__b)
{
   // Stream an object of class Lau2DAbsDPPdf.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(Lau2DAbsDPPdf::Class(),this);
   } else {
      R__b.WriteClassBuffer(Lau2DAbsDPPdf::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_Lau2DAbsDPPdf(void *p) {
      delete ((::Lau2DAbsDPPdf*)p);
   }
   static void deleteArray_Lau2DAbsDPPdf(void *p) {
      delete [] ((::Lau2DAbsDPPdf*)p);
   }
   static void destruct_Lau2DAbsDPPdf(void *p) {
      typedef ::Lau2DAbsDPPdf current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::Lau2DAbsDPPdf

//______________________________________________________________________________
void LauResonanceMaker::Streamer(TBuffer &R__b)
{
   // Stream an object of class LauResonanceMaker.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(LauResonanceMaker::Class(),this);
   } else {
      R__b.WriteClassBuffer(LauResonanceMaker::Class(),this);
   }
}

namespace ROOT {
} // end of namespace ROOT for class ::LauResonanceMaker

//______________________________________________________________________________
void LauEmbeddedData::Streamer(TBuffer &R__b)
{
   // Stream an object of class LauEmbeddedData.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(LauEmbeddedData::Class(),this);
   } else {
      R__b.WriteClassBuffer(LauEmbeddedData::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_LauEmbeddedData(void *p) {
      delete ((::LauEmbeddedData*)p);
   }
   static void deleteArray_LauEmbeddedData(void *p) {
      delete [] ((::LauEmbeddedData*)p);
   }
   static void destruct_LauEmbeddedData(void *p) {
      typedef ::LauEmbeddedData current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::LauEmbeddedData

//______________________________________________________________________________
void LauLASSBWRes::Streamer(TBuffer &R__b)
{
   // Stream an object of class LauLASSBWRes.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(LauLASSBWRes::Class(),this);
   } else {
      R__b.WriteClassBuffer(LauLASSBWRes::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_LauLASSBWRes(void *p) {
      delete ((::LauLASSBWRes*)p);
   }
   static void deleteArray_LauLASSBWRes(void *p) {
      delete [] ((::LauLASSBWRes*)p);
   }
   static void destruct_LauLASSBWRes(void *p) {
      typedef ::LauLASSBWRes current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::LauLASSBWRes

//______________________________________________________________________________
void LauKMatrixProdPole::Streamer(TBuffer &R__b)
{
   // Stream an object of class LauKMatrixProdPole.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(LauKMatrixProdPole::Class(),this);
   } else {
      R__b.WriteClassBuffer(LauKMatrixProdPole::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_LauKMatrixProdPole(void *p) {
      delete ((::LauKMatrixProdPole*)p);
   }
   static void deleteArray_LauKMatrixProdPole(void *p) {
      delete [] ((::LauKMatrixProdPole*)p);
   }
   static void destruct_LauKMatrixProdPole(void *p) {
      typedef ::LauKMatrixProdPole current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::LauKMatrixProdPole

//______________________________________________________________________________
void LauParametricStepFuncPdf::Streamer(TBuffer &R__b)
{
   // Stream an object of class LauParametricStepFuncPdf.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(LauParametricStepFuncPdf::Class(),this);
   } else {
      R__b.WriteClassBuffer(LauParametricStepFuncPdf::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_LauParametricStepFuncPdf(void *p) {
      delete ((::LauParametricStepFuncPdf*)p);
   }
   static void deleteArray_LauParametricStepFuncPdf(void *p) {
      delete [] ((::LauParametricStepFuncPdf*)p);
   }
   static void destruct_LauParametricStepFuncPdf(void *p) {
      typedef ::LauParametricStepFuncPdf current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::LauParametricStepFuncPdf

//______________________________________________________________________________
void LauBelleCPCoeffSet::Streamer(TBuffer &R__b)
{
   // Stream an object of class LauBelleCPCoeffSet.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(LauBelleCPCoeffSet::Class(),this);
   } else {
      R__b.WriteClassBuffer(LauBelleCPCoeffSet::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_LauBelleCPCoeffSet(void *p) {
      delete ((::LauBelleCPCoeffSet*)p);
   }
   static void deleteArray_LauBelleCPCoeffSet(void *p) {
      delete [] ((::LauBelleCPCoeffSet*)p);
   }
   static void destruct_LauBelleCPCoeffSet(void *p) {
      typedef ::LauBelleCPCoeffSet current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::LauBelleCPCoeffSet

//______________________________________________________________________________
void LauCalcChiSq::Streamer(TBuffer &R__b)
{
   // Stream an object of class LauCalcChiSq.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(LauCalcChiSq::Class(),this);
   } else {
      R__b.WriteClassBuffer(LauCalcChiSq::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_LauCalcChiSq(void *p) {
      return  p ? new(p) ::LauCalcChiSq : new ::LauCalcChiSq;
   }
   static void *newArray_LauCalcChiSq(Long_t nElements, void *p) {
      return p ? new(p) ::LauCalcChiSq[nElements] : new ::LauCalcChiSq[nElements];
   }
   // Wrapper around operator delete
   static void delete_LauCalcChiSq(void *p) {
      delete ((::LauCalcChiSq*)p);
   }
   static void deleteArray_LauCalcChiSq(void *p) {
      delete [] ((::LauCalcChiSq*)p);
   }
   static void destruct_LauCalcChiSq(void *p) {
      typedef ::LauCalcChiSq current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::LauCalcChiSq

//______________________________________________________________________________
void LauAsymmCalc::Streamer(TBuffer &R__b)
{
   // Stream an object of class LauAsymmCalc.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(LauAsymmCalc::Class(),this);
   } else {
      R__b.WriteClassBuffer(LauAsymmCalc::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_LauAsymmCalc(void *p) {
      delete ((::LauAsymmCalc*)p);
   }
   static void deleteArray_LauAsymmCalc(void *p) {
      delete [] ((::LauAsymmCalc*)p);
   }
   static void destruct_LauAsymmCalc(void *p) {
      typedef ::LauAsymmCalc current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::LauAsymmCalc

//______________________________________________________________________________
void LauBifurcatedGaussPdf::Streamer(TBuffer &R__b)
{
   // Stream an object of class LauBifurcatedGaussPdf.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(LauBifurcatedGaussPdf::Class(),this);
   } else {
      R__b.WriteClassBuffer(LauBifurcatedGaussPdf::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_LauBifurcatedGaussPdf(void *p) {
      delete ((::LauBifurcatedGaussPdf*)p);
   }
   static void deleteArray_LauBifurcatedGaussPdf(void *p) {
      delete [] ((::LauBifurcatedGaussPdf*)p);
   }
   static void destruct_LauBifurcatedGaussPdf(void *p) {
      typedef ::LauBifurcatedGaussPdf current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::LauBifurcatedGaussPdf

//______________________________________________________________________________
void LauCrystalBallPdf::Streamer(TBuffer &R__b)
{
   // Stream an object of class LauCrystalBallPdf.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(LauCrystalBallPdf::Class(),this);
   } else {
      R__b.WriteClassBuffer(LauCrystalBallPdf::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_LauCrystalBallPdf(void *p) {
      delete ((::LauCrystalBallPdf*)p);
   }
   static void deleteArray_LauCrystalBallPdf(void *p) {
      delete [] ((::LauCrystalBallPdf*)p);
   }
   static void destruct_LauCrystalBallPdf(void *p) {
      typedef ::LauCrystalBallPdf current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::LauCrystalBallPdf

//______________________________________________________________________________
void LauKappaRes::Streamer(TBuffer &R__b)
{
   // Stream an object of class LauKappaRes.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(LauKappaRes::Class(),this);
   } else {
      R__b.WriteClassBuffer(LauKappaRes::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_LauKappaRes(void *p) {
      delete ((::LauKappaRes*)p);
   }
   static void deleteArray_LauKappaRes(void *p) {
      delete [] ((::LauKappaRes*)p);
   }
   static void destruct_LauKappaRes(void *p) {
      typedef ::LauKappaRes current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::LauKappaRes

//______________________________________________________________________________
void LauSimpleFitModel::Streamer(TBuffer &R__b)
{
   // Stream an object of class LauSimpleFitModel.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(LauSimpleFitModel::Class(),this);
   } else {
      R__b.WriteClassBuffer(LauSimpleFitModel::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_LauSimpleFitModel(void *p) {
      delete ((::LauSimpleFitModel*)p);
   }
   static void deleteArray_LauSimpleFitModel(void *p) {
      delete [] ((::LauSimpleFitModel*)p);
   }
   static void destruct_LauSimpleFitModel(void *p) {
      typedef ::LauSimpleFitModel current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::LauSimpleFitModel

//______________________________________________________________________________
void LauNRAmplitude::Streamer(TBuffer &R__b)
{
   // Stream an object of class LauNRAmplitude.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(LauNRAmplitude::Class(),this);
   } else {
      R__b.WriteClassBuffer(LauNRAmplitude::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_LauNRAmplitude(void *p) {
      delete ((::LauNRAmplitude*)p);
   }
   static void deleteArray_LauNRAmplitude(void *p) {
      delete [] ((::LauNRAmplitude*)p);
   }
   static void destruct_LauNRAmplitude(void *p) {
      typedef ::LauNRAmplitude current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::LauNRAmplitude

//______________________________________________________________________________
void LauAbsBkgndDPModel::Streamer(TBuffer &R__b)
{
   // Stream an object of class LauAbsBkgndDPModel.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(LauAbsBkgndDPModel::Class(),this);
   } else {
      R__b.WriteClassBuffer(LauAbsBkgndDPModel::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_LauAbsBkgndDPModel(void *p) {
      delete ((::LauAbsBkgndDPModel*)p);
   }
   static void deleteArray_LauAbsBkgndDPModel(void *p) {
      delete [] ((::LauAbsBkgndDPModel*)p);
   }
   static void destruct_LauAbsBkgndDPModel(void *p) {
      typedef ::LauAbsBkgndDPModel current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::LauAbsBkgndDPModel

//______________________________________________________________________________
void LauBkgndDPModel::Streamer(TBuffer &R__b)
{
   // Stream an object of class LauBkgndDPModel.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(LauBkgndDPModel::Class(),this);
   } else {
      R__b.WriteClassBuffer(LauBkgndDPModel::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_LauBkgndDPModel(void *p) {
      delete ((::LauBkgndDPModel*)p);
   }
   static void deleteArray_LauBkgndDPModel(void *p) {
      delete [] ((::LauBkgndDPModel*)p);
   }
   static void destruct_LauBkgndDPModel(void *p) {
      typedef ::LauBkgndDPModel current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::LauBkgndDPModel

//______________________________________________________________________________
void Lau1DCubicSpline::Streamer(TBuffer &R__b)
{
   // Stream an object of class Lau1DCubicSpline.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(Lau1DCubicSpline::Class(),this);
   } else {
      R__b.WriteClassBuffer(Lau1DCubicSpline::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_Lau1DCubicSpline(void *p) {
      delete ((::Lau1DCubicSpline*)p);
   }
   static void deleteArray_Lau1DCubicSpline(void *p) {
      delete [] ((::Lau1DCubicSpline*)p);
   }
   static void destruct_Lau1DCubicSpline(void *p) {
      typedef ::Lau1DCubicSpline current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::Lau1DCubicSpline

//______________________________________________________________________________
void LauAbsModIndPartWave::Streamer(TBuffer &R__b)
{
   // Stream an object of class LauAbsModIndPartWave.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(LauAbsModIndPartWave::Class(),this);
   } else {
      R__b.WriteClassBuffer(LauAbsModIndPartWave::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_LauAbsModIndPartWave(void *p) {
      delete ((::LauAbsModIndPartWave*)p);
   }
   static void deleteArray_LauAbsModIndPartWave(void *p) {
      delete [] ((::LauAbsModIndPartWave*)p);
   }
   static void destruct_LauAbsModIndPartWave(void *p) {
      typedef ::LauAbsModIndPartWave current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::LauAbsModIndPartWave

//______________________________________________________________________________
void LauFitter::Streamer(TBuffer &R__b)
{
   // Stream an object of class LauFitter.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(LauFitter::Class(),this);
   } else {
      R__b.WriteClassBuffer(LauFitter::Class(),this);
   }
}

namespace ROOT {
} // end of namespace ROOT for class ::LauFitter

//______________________________________________________________________________
void LauKMatrixPropFactory::Streamer(TBuffer &R__b)
{
   // Stream an object of class LauKMatrixPropFactory.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(LauKMatrixPropFactory::Class(),this);
   } else {
      R__b.WriteClassBuffer(LauKMatrixPropFactory::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_LauKMatrixPropFactory(void *p) {
      delete ((::LauKMatrixPropFactory*)p);
   }
   static void deleteArray_LauKMatrixPropFactory(void *p) {
      delete [] ((::LauKMatrixPropFactory*)p);
   }
   static void destruct_LauKMatrixPropFactory(void *p) {
      typedef ::LauKMatrixPropFactory current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::LauKMatrixPropFactory

//______________________________________________________________________________
void LauLASSNRRes::Streamer(TBuffer &R__b)
{
   // Stream an object of class LauLASSNRRes.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(LauLASSNRRes::Class(),this);
   } else {
      R__b.WriteClassBuffer(LauLASSNRRes::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_LauLASSNRRes(void *p) {
      delete ((::LauLASSNRRes*)p);
   }
   static void deleteArray_LauLASSNRRes(void *p) {
      delete [] ((::LauLASSNRRes*)p);
   }
   static void destruct_LauLASSNRRes(void *p) {
      typedef ::LauLASSNRRes current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::LauLASSNRRes

//______________________________________________________________________________
void LauBelleNR::Streamer(TBuffer &R__b)
{
   // Stream an object of class LauBelleNR.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(LauBelleNR::Class(),this);
   } else {
      R__b.WriteClassBuffer(LauBelleNR::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_LauBelleNR(void *p) {
      delete ((::LauBelleNR*)p);
   }
   static void deleteArray_LauBelleNR(void *p) {
      delete [] ((::LauBelleNR*)p);
   }
   static void destruct_LauBelleNR(void *p) {
      typedef ::LauBelleNR current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::LauBelleNR

//______________________________________________________________________________
void LauSigmoidPdf::Streamer(TBuffer &R__b)
{
   // Stream an object of class LauSigmoidPdf.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(LauSigmoidPdf::Class(),this);
   } else {
      R__b.WriteClassBuffer(LauSigmoidPdf::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_LauSigmoidPdf(void *p) {
      delete ((::LauSigmoidPdf*)p);
   }
   static void deleteArray_LauSigmoidPdf(void *p) {
      delete [] ((::LauSigmoidPdf*)p);
   }
   static void destruct_LauSigmoidPdf(void *p) {
      typedef ::LauSigmoidPdf current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::LauSigmoidPdf

//______________________________________________________________________________
void Lau2DAbsHistDPPdf::Streamer(TBuffer &R__b)
{
   // Stream an object of class Lau2DAbsHistDPPdf.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(Lau2DAbsHistDPPdf::Class(),this);
   } else {
      R__b.WriteClassBuffer(Lau2DAbsHistDPPdf::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_Lau2DAbsHistDPPdf(void *p) {
      delete ((::Lau2DAbsHistDPPdf*)p);
   }
   static void deleteArray_Lau2DAbsHistDPPdf(void *p) {
      delete [] ((::Lau2DAbsHistDPPdf*)p);
   }
   static void destruct_Lau2DAbsHistDPPdf(void *p) {
      typedef ::Lau2DAbsHistDPPdf current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::Lau2DAbsHistDPPdf

//______________________________________________________________________________
void LauDPDepMapPdf::Streamer(TBuffer &R__b)
{
   // Stream an object of class LauDPDepMapPdf.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(LauDPDepMapPdf::Class(),this);
   } else {
      R__b.WriteClassBuffer(LauDPDepMapPdf::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_LauDPDepMapPdf(void *p) {
      delete ((::LauDPDepMapPdf*)p);
   }
   static void deleteArray_LauDPDepMapPdf(void *p) {
      delete [] ((::LauDPDepMapPdf*)p);
   }
   static void destruct_LauDPDepMapPdf(void *p) {
      typedef ::LauDPDepMapPdf current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::LauDPDepMapPdf

//______________________________________________________________________________
void LauBreitWignerRes::Streamer(TBuffer &R__b)
{
   // Stream an object of class LauBreitWignerRes.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(LauBreitWignerRes::Class(),this);
   } else {
      R__b.WriteClassBuffer(LauBreitWignerRes::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_LauBreitWignerRes(void *p) {
      delete ((::LauBreitWignerRes*)p);
   }
   static void deleteArray_LauBreitWignerRes(void *p) {
      delete [] ((::LauBreitWignerRes*)p);
   }
   static void destruct_LauBreitWignerRes(void *p) {
      typedef ::LauBreitWignerRes current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::LauBreitWignerRes

//______________________________________________________________________________
void Lau2DSplineDPPdf::Streamer(TBuffer &R__b)
{
   // Stream an object of class Lau2DSplineDPPdf.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(Lau2DSplineDPPdf::Class(),this);
   } else {
      R__b.WriteClassBuffer(Lau2DSplineDPPdf::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_Lau2DSplineDPPdf(void *p) {
      delete ((::Lau2DSplineDPPdf*)p);
   }
   static void deleteArray_Lau2DSplineDPPdf(void *p) {
      delete [] ((::Lau2DSplineDPPdf*)p);
   }
   static void destruct_Lau2DSplineDPPdf(void *p) {
      typedef ::Lau2DSplineDPPdf current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::Lau2DSplineDPPdf

namespace ROOT {
   // Wrapper around operator delete
   static void delete_LauKinematics(void *p) {
      delete ((::LauKinematics*)p);
   }
   static void deleteArray_LauKinematics(void *p) {
      delete [] ((::LauKinematics*)p);
   }
   static void destruct_LauKinematics(void *p) {
      typedef ::LauKinematics current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::LauKinematics

//______________________________________________________________________________
void LauCacheData::Streamer(TBuffer &R__b)
{
   // Stream an object of class LauCacheData.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(LauCacheData::Class(),this);
   } else {
      R__b.WriteClassBuffer(LauCacheData::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_LauCacheData(void *p) {
      return  p ? new(p) ::LauCacheData : new ::LauCacheData;
   }
   static void *newArray_LauCacheData(Long_t nElements, void *p) {
      return p ? new(p) ::LauCacheData[nElements] : new ::LauCacheData[nElements];
   }
   // Wrapper around operator delete
   static void delete_LauCacheData(void *p) {
      delete ((::LauCacheData*)p);
   }
   static void deleteArray_LauCacheData(void *p) {
      delete [] ((::LauCacheData*)p);
   }
   static void destruct_LauCacheData(void *p) {
      typedef ::LauCacheData current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::LauCacheData

//______________________________________________________________________________
void LauPolarFormFactorNR::Streamer(TBuffer &R__b)
{
   // Stream an object of class LauPolarFormFactorNR.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(LauPolarFormFactorNR::Class(),this);
   } else {
      R__b.WriteClassBuffer(LauPolarFormFactorNR::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_LauPolarFormFactorNR(void *p) {
      delete ((::LauPolarFormFactorNR*)p);
   }
   static void deleteArray_LauPolarFormFactorNR(void *p) {
      delete [] ((::LauPolarFormFactorNR*)p);
   }
   static void destruct_LauPolarFormFactorNR(void *p) {
      typedef ::LauPolarFormFactorNR current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::LauPolarFormFactorNR

//______________________________________________________________________________
void Lau2DAbsDP::Streamer(TBuffer &R__b)
{
   // Stream an object of class Lau2DAbsDP.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(Lau2DAbsDP::Class(),this);
   } else {
      R__b.WriteClassBuffer(Lau2DAbsDP::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_Lau2DAbsDP(void *p) {
      delete ((::Lau2DAbsDP*)p);
   }
   static void deleteArray_Lau2DAbsDP(void *p) {
      delete [] ((::Lau2DAbsDP*)p);
   }
   static void destruct_Lau2DAbsDP(void *p) {
      typedef ::Lau2DAbsDP current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::Lau2DAbsDP

//______________________________________________________________________________
void LauRescatteringRes::Streamer(TBuffer &R__b)
{
   // Stream an object of class LauRescatteringRes.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(LauRescatteringRes::Class(),this);
   } else {
      R__b.WriteClassBuffer(LauRescatteringRes::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_LauRescatteringRes(void *p) {
      delete ((::LauRescatteringRes*)p);
   }
   static void deleteArray_LauRescatteringRes(void *p) {
      delete [] ((::LauRescatteringRes*)p);
   }
   static void destruct_LauRescatteringRes(void *p) {
      typedef ::LauRescatteringRes current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::LauRescatteringRes

//______________________________________________________________________________
void LauCartesianGammaCPCoeffSet::Streamer(TBuffer &R__b)
{
   // Stream an object of class LauCartesianGammaCPCoeffSet.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(LauCartesianGammaCPCoeffSet::Class(),this);
   } else {
      R__b.WriteClassBuffer(LauCartesianGammaCPCoeffSet::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_LauCartesianGammaCPCoeffSet(void *p) {
      delete ((::LauCartesianGammaCPCoeffSet*)p);
   }
   static void deleteArray_LauCartesianGammaCPCoeffSet(void *p) {
      delete [] ((::LauCartesianGammaCPCoeffSet*)p);
   }
   static void destruct_LauCartesianGammaCPCoeffSet(void *p) {
      typedef ::LauCartesianGammaCPCoeffSet current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::LauCartesianGammaCPCoeffSet

//______________________________________________________________________________
void LauDPDepGaussPdf::Streamer(TBuffer &R__b)
{
   // Stream an object of class LauDPDepGaussPdf.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(LauDPDepGaussPdf::Class(),this);
   } else {
      R__b.WriteClassBuffer(LauDPDepGaussPdf::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_LauDPDepGaussPdf(void *p) {
      delete ((::LauDPDepGaussPdf*)p);
   }
   static void deleteArray_LauDPDepGaussPdf(void *p) {
      delete [] ((::LauDPDepGaussPdf*)p);
   }
   static void destruct_LauDPDepGaussPdf(void *p) {
      typedef ::LauDPDepGaussPdf current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::LauDPDepGaussPdf

//______________________________________________________________________________
void LauScfMap::Streamer(TBuffer &R__b)
{
   // Stream an object of class LauScfMap.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(LauScfMap::Class(),this);
   } else {
      R__b.WriteClassBuffer(LauScfMap::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_LauScfMap(void *p) {
      return  p ? new(p) ::LauScfMap : new ::LauScfMap;
   }
   static void *newArray_LauScfMap(Long_t nElements, void *p) {
      return p ? new(p) ::LauScfMap[nElements] : new ::LauScfMap[nElements];
   }
   // Wrapper around operator delete
   static void delete_LauScfMap(void *p) {
      delete ((::LauScfMap*)p);
   }
   static void deleteArray_LauScfMap(void *p) {
      delete [] ((::LauScfMap*)p);
   }
   static void destruct_LauScfMap(void *p) {
      typedef ::LauScfMap current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::LauScfMap

//______________________________________________________________________________
void LauExponentialPdf::Streamer(TBuffer &R__b)
{
   // Stream an object of class LauExponentialPdf.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(LauExponentialPdf::Class(),this);
   } else {
      R__b.WriteClassBuffer(LauExponentialPdf::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_LauExponentialPdf(void *p) {
      delete ((::LauExponentialPdf*)p);
   }
   static void deleteArray_LauExponentialPdf(void *p) {
      delete [] ((::LauExponentialPdf*)p);
   }
   static void destruct_LauExponentialPdf(void *p) {
      typedef ::LauExponentialPdf current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::LauExponentialPdf

//______________________________________________________________________________
void LauBelleSymNR::Streamer(TBuffer &R__b)
{
   // Stream an object of class LauBelleSymNR.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(LauBelleSymNR::Class(),this);
   } else {
      R__b.WriteClassBuffer(LauBelleSymNR::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_LauBelleSymNR(void *p) {
      delete ((::LauBelleSymNR*)p);
   }
   static void deleteArray_LauBelleSymNR(void *p) {
      delete [] ((::LauBelleSymNR*)p);
   }
   static void destruct_LauBelleSymNR(void *p) {
      typedef ::LauBelleSymNR current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::LauBelleSymNR

//______________________________________________________________________________
void LauPoleRes::Streamer(TBuffer &R__b)
{
   // Stream an object of class LauPoleRes.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(LauPoleRes::Class(),this);
   } else {
      R__b.WriteClassBuffer(LauPoleRes::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_LauPoleRes(void *p) {
      delete ((::LauPoleRes*)p);
   }
   static void deleteArray_LauPoleRes(void *p) {
      delete [] ((::LauPoleRes*)p);
   }
   static void destruct_LauPoleRes(void *p) {
      typedef ::LauPoleRes current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::LauPoleRes

//______________________________________________________________________________
void LauRealImagCoeffSet::Streamer(TBuffer &R__b)
{
   // Stream an object of class LauRealImagCoeffSet.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(LauRealImagCoeffSet::Class(),this);
   } else {
      R__b.WriteClassBuffer(LauRealImagCoeffSet::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_LauRealImagCoeffSet(void *p) {
      delete ((::LauRealImagCoeffSet*)p);
   }
   static void deleteArray_LauRealImagCoeffSet(void *p) {
      delete [] ((::LauRealImagCoeffSet*)p);
   }
   static void destruct_LauRealImagCoeffSet(void *p) {
      typedef ::LauRealImagCoeffSet current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::LauRealImagCoeffSet

//______________________________________________________________________________
void LauSigmaRes::Streamer(TBuffer &R__b)
{
   // Stream an object of class LauSigmaRes.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(LauSigmaRes::Class(),this);
   } else {
      R__b.WriteClassBuffer(LauSigmaRes::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_LauSigmaRes(void *p) {
      delete ((::LauSigmaRes*)p);
   }
   static void deleteArray_LauSigmaRes(void *p) {
      delete [] ((::LauSigmaRes*)p);
   }
   static void destruct_LauSigmaRes(void *p) {
      typedef ::LauSigmaRes current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::LauSigmaRes

//______________________________________________________________________________
void LauLASSRes::Streamer(TBuffer &R__b)
{
   // Stream an object of class LauLASSRes.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(LauLASSRes::Class(),this);
   } else {
      R__b.WriteClassBuffer(LauLASSRes::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_LauLASSRes(void *p) {
      delete ((::LauLASSRes*)p);
   }
   static void deleteArray_LauLASSRes(void *p) {
      delete [] ((::LauLASSRes*)p);
   }
   static void destruct_LauLASSRes(void *p) {
      typedef ::LauLASSRes current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::LauLASSRes

namespace ROOT {
   // Wrappers around operator new
   static void *new_LauString(void *p) {
      return  p ? new(p) ::LauString : new ::LauString;
   }
   static void *newArray_LauString(Long_t nElements, void *p) {
      return p ? new(p) ::LauString[nElements] : new ::LauString[nElements];
   }
   // Wrapper around operator delete
   static void delete_LauString(void *p) {
      delete ((::LauString*)p);
   }
   static void deleteArray_LauString(void *p) {
      delete [] ((::LauString*)p);
   }
   static void destruct_LauString(void *p) {
      typedef ::LauString current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::LauString

//______________________________________________________________________________
void LauArgusPdf::Streamer(TBuffer &R__b)
{
   // Stream an object of class LauArgusPdf.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(LauArgusPdf::Class(),this);
   } else {
      R__b.WriteClassBuffer(LauArgusPdf::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_LauArgusPdf(void *p) {
      delete ((::LauArgusPdf*)p);
   }
   static void deleteArray_LauArgusPdf(void *p) {
      delete [] ((::LauArgusPdf*)p);
   }
   static void destruct_LauArgusPdf(void *p) {
      typedef ::LauArgusPdf current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::LauArgusPdf

//______________________________________________________________________________
void LauAbsIncohRes::Streamer(TBuffer &R__b)
{
   // Stream an object of class LauAbsIncohRes.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(LauAbsIncohRes::Class(),this);
   } else {
      R__b.WriteClassBuffer(LauAbsIncohRes::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_LauAbsIncohRes(void *p) {
      delete ((::LauAbsIncohRes*)p);
   }
   static void deleteArray_LauAbsIncohRes(void *p) {
      delete [] ((::LauAbsIncohRes*)p);
   }
   static void destruct_LauAbsIncohRes(void *p) {
      typedef ::LauAbsIncohRes current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::LauAbsIncohRes

//______________________________________________________________________________
void LauGaussIncohRes::Streamer(TBuffer &R__b)
{
   // Stream an object of class LauGaussIncohRes.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(LauGaussIncohRes::Class(),this);
   } else {
      R__b.WriteClassBuffer(LauGaussIncohRes::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_LauGaussIncohRes(void *p) {
      delete ((::LauGaussIncohRes*)p);
   }
   static void deleteArray_LauGaussIncohRes(void *p) {
      delete [] ((::LauGaussIncohRes*)p);
   }
   static void destruct_LauGaussIncohRes(void *p) {
      typedef ::LauGaussIncohRes current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::LauGaussIncohRes

//______________________________________________________________________________
void LauDatabasePDG::Streamer(TBuffer &R__b)
{
   // Stream an object of class LauDatabasePDG.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(LauDatabasePDG::Class(),this);
   } else {
      R__b.WriteClassBuffer(LauDatabasePDG::Class(),this);
   }
}

namespace ROOT {
} // end of namespace ROOT for class ::LauDatabasePDG

//______________________________________________________________________________
void LauFlatteRes::Streamer(TBuffer &R__b)
{
   // Stream an object of class LauFlatteRes.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(LauFlatteRes::Class(),this);
   } else {
      R__b.WriteClassBuffer(LauFlatteRes::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_LauFlatteRes(void *p) {
      delete ((::LauFlatteRes*)p);
   }
   static void deleteArray_LauFlatteRes(void *p) {
      delete [] ((::LauFlatteRes*)p);
   }
   static void destruct_LauFlatteRes(void *p) {
      typedef ::LauFlatteRes current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::LauFlatteRes

//______________________________________________________________________________
void LauCleoCPCoeffSet::Streamer(TBuffer &R__b)
{
   // Stream an object of class LauCleoCPCoeffSet.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(LauCleoCPCoeffSet::Class(),this);
   } else {
      R__b.WriteClassBuffer(LauCleoCPCoeffSet::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_LauCleoCPCoeffSet(void *p) {
      delete ((::LauCleoCPCoeffSet*)p);
   }
   static void deleteArray_LauCleoCPCoeffSet(void *p) {
      delete [] ((::LauCleoCPCoeffSet*)p);
   }
   static void destruct_LauCleoCPCoeffSet(void *p) {
      typedef ::LauCleoCPCoeffSet current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::LauCleoCPCoeffSet

//______________________________________________________________________________
void LauGaussPdf::Streamer(TBuffer &R__b)
{
   // Stream an object of class LauGaussPdf.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(LauGaussPdf::Class(),this);
   } else {
      R__b.WriteClassBuffer(LauGaussPdf::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_LauGaussPdf(void *p) {
      delete ((::LauGaussPdf*)p);
   }
   static void deleteArray_LauGaussPdf(void *p) {
      delete [] ((::LauGaussPdf*)p);
   }
   static void destruct_LauGaussPdf(void *p) {
      typedef ::LauGaussPdf current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::LauGaussPdf

//______________________________________________________________________________
void Lau2DHistPdf::Streamer(TBuffer &R__b)
{
   // Stream an object of class Lau2DHistPdf.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(Lau2DHistPdf::Class(),this);
   } else {
      R__b.WriteClassBuffer(Lau2DHistPdf::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_Lau2DHistPdf(void *p) {
      delete ((::Lau2DHistPdf*)p);
   }
   static void deleteArray_Lau2DHistPdf(void *p) {
      delete [] ((::Lau2DHistPdf*)p);
   }
   static void destruct_Lau2DHistPdf(void *p) {
      typedef ::Lau2DHistPdf current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::Lau2DHistPdf

//______________________________________________________________________________
void LauModIndPartWaveMagPhase::Streamer(TBuffer &R__b)
{
   // Stream an object of class LauModIndPartWaveMagPhase.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(LauModIndPartWaveMagPhase::Class(),this);
   } else {
      R__b.WriteClassBuffer(LauModIndPartWaveMagPhase::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_LauModIndPartWaveMagPhase(void *p) {
      delete ((::LauModIndPartWaveMagPhase*)p);
   }
   static void deleteArray_LauModIndPartWaveMagPhase(void *p) {
      delete [] ((::LauModIndPartWaveMagPhase*)p);
   }
   static void destruct_LauModIndPartWaveMagPhase(void *p) {
      typedef ::LauModIndPartWaveMagPhase current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::LauModIndPartWaveMagPhase

namespace ROOT {
   // Wrapper around operator delete
   static void delete_LauTextFileParser(void *p) {
      delete ((::LauTextFileParser*)p);
   }
   static void deleteArray_LauTextFileParser(void *p) {
      delete [] ((::LauTextFileParser*)p);
   }
   static void destruct_LauTextFileParser(void *p) {
      typedef ::LauTextFileParser current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::LauTextFileParser

//______________________________________________________________________________
void Lau2DAbsHistDP::Streamer(TBuffer &R__b)
{
   // Stream an object of class Lau2DAbsHistDP.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(Lau2DAbsHistDP::Class(),this);
   } else {
      R__b.WriteClassBuffer(Lau2DAbsHistDP::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_Lau2DAbsHistDP(void *p) {
      delete ((::Lau2DAbsHistDP*)p);
   }
   static void deleteArray_Lau2DAbsHistDP(void *p) {
      delete [] ((::Lau2DAbsHistDP*)p);
   }
   static void destruct_Lau2DAbsHistDP(void *p) {
      typedef ::Lau2DAbsHistDP current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::Lau2DAbsHistDP

//______________________________________________________________________________
void Lau2DHistDP::Streamer(TBuffer &R__b)
{
   // Stream an object of class Lau2DHistDP.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(Lau2DHistDP::Class(),this);
   } else {
      R__b.WriteClassBuffer(Lau2DHistDP::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_Lau2DHistDP(void *p) {
      delete ((::Lau2DHistDP*)p);
   }
   static void deleteArray_Lau2DHistDP(void *p) {
      delete [] ((::Lau2DHistDP*)p);
   }
   static void destruct_Lau2DHistDP(void *p) {
      typedef ::Lau2DHistDP current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::Lau2DHistDP

//______________________________________________________________________________
void LauDPPartialIntegralInfo::Streamer(TBuffer &R__b)
{
   // Stream an object of class LauDPPartialIntegralInfo.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(LauDPPartialIntegralInfo::Class(),this);
   } else {
      R__b.WriteClassBuffer(LauDPPartialIntegralInfo::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_LauDPPartialIntegralInfo(void *p) {
      delete ((::LauDPPartialIntegralInfo*)p);
   }
   static void deleteArray_LauDPPartialIntegralInfo(void *p) {
      delete [] ((::LauDPPartialIntegralInfo*)p);
   }
   static void destruct_LauDPPartialIntegralInfo(void *p) {
      typedef ::LauDPPartialIntegralInfo current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::LauDPPartialIntegralInfo

//______________________________________________________________________________
void Lau1DHistPdf::Streamer(TBuffer &R__b)
{
   // Stream an object of class Lau1DHistPdf.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(Lau1DHistPdf::Class(),this);
   } else {
      R__b.WriteClassBuffer(Lau1DHistPdf::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_Lau1DHistPdf(void *p) {
      delete ((::Lau1DHistPdf*)p);
   }
   static void deleteArray_Lau1DHistPdf(void *p) {
      delete [] ((::Lau1DHistPdf*)p);
   }
   static void destruct_Lau1DHistPdf(void *p) {
      typedef ::Lau1DHistPdf current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::Lau1DHistPdf

//______________________________________________________________________________
void Lau2DCubicSpline::Streamer(TBuffer &R__b)
{
   // Stream an object of class Lau2DCubicSpline.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(Lau2DCubicSpline::Class(),this);
   } else {
      R__b.WriteClassBuffer(Lau2DCubicSpline::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_Lau2DCubicSpline(void *p) {
      delete ((::Lau2DCubicSpline*)p);
   }
   static void deleteArray_Lau2DCubicSpline(void *p) {
      delete [] ((::Lau2DCubicSpline*)p);
   }
   static void destruct_Lau2DCubicSpline(void *p) {
      typedef ::Lau2DCubicSpline current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::Lau2DCubicSpline

//______________________________________________________________________________
void LauResultsExtractor::Streamer(TBuffer &R__b)
{
   // Stream an object of class LauResultsExtractor.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(LauResultsExtractor::Class(),this);
   } else {
      R__b.WriteClassBuffer(LauResultsExtractor::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_LauResultsExtractor(void *p) {
      delete ((::LauResultsExtractor*)p);
   }
   static void deleteArray_LauResultsExtractor(void *p) {
      delete [] ((::LauResultsExtractor*)p);
   }
   static void destruct_LauResultsExtractor(void *p) {
      typedef ::LauResultsExtractor current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::LauResultsExtractor

//______________________________________________________________________________
void LauAbsEffModel::Streamer(TBuffer &R__b)
{
   // Stream an object of class LauAbsEffModel.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(LauAbsEffModel::Class(),this);
   } else {
      R__b.WriteClassBuffer(LauAbsEffModel::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_LauAbsEffModel(void *p) {
      delete ((::LauAbsEffModel*)p);
   }
   static void deleteArray_LauAbsEffModel(void *p) {
      delete [] ((::LauAbsEffModel*)p);
   }
   static void destruct_LauAbsEffModel(void *p) {
      typedef ::LauAbsEffModel current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::LauAbsEffModel

//______________________________________________________________________________
void LauEffModel::Streamer(TBuffer &R__b)
{
   // Stream an object of class LauEffModel.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(LauEffModel::Class(),this);
   } else {
      R__b.WriteClassBuffer(LauEffModel::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_LauEffModel(void *p) {
      delete ((::LauEffModel*)p);
   }
   static void deleteArray_LauEffModel(void *p) {
      delete [] ((::LauEffModel*)p);
   }
   static void destruct_LauEffModel(void *p) {
      typedef ::LauEffModel current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::LauEffModel

//______________________________________________________________________________
void LauMergeDataFiles::Streamer(TBuffer &R__b)
{
   // Stream an object of class LauMergeDataFiles.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(LauMergeDataFiles::Class(),this);
   } else {
      R__b.WriteClassBuffer(LauMergeDataFiles::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_LauMergeDataFiles(void *p) {
      delete ((::LauMergeDataFiles*)p);
   }
   static void deleteArray_LauMergeDataFiles(void *p) {
      delete [] ((::LauMergeDataFiles*)p);
   }
   static void destruct_LauMergeDataFiles(void *p) {
      typedef ::LauMergeDataFiles current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::LauMergeDataFiles

//______________________________________________________________________________
void LauRescattering2Res::Streamer(TBuffer &R__b)
{
   // Stream an object of class LauRescattering2Res.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(LauRescattering2Res::Class(),this);
   } else {
      R__b.WriteClassBuffer(LauRescattering2Res::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_LauRescattering2Res(void *p) {
      delete ((::LauRescattering2Res*)p);
   }
   static void deleteArray_LauRescattering2Res(void *p) {
      delete [] ((::LauRescattering2Res*)p);
   }
   static void destruct_LauRescattering2Res(void *p) {
      typedef ::LauRescattering2Res current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::LauRescattering2Res

//______________________________________________________________________________
void LauDPDepSumPdf::Streamer(TBuffer &R__b)
{
   // Stream an object of class LauDPDepSumPdf.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(LauDPDepSumPdf::Class(),this);
   } else {
      R__b.WriteClassBuffer(LauDPDepSumPdf::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_LauDPDepSumPdf(void *p) {
      delete ((::LauDPDepSumPdf*)p);
   }
   static void deleteArray_LauDPDepSumPdf(void *p) {
      delete [] ((::LauDPDepSumPdf*)p);
   }
   static void destruct_LauDPDepSumPdf(void *p) {
      typedef ::LauDPDepSumPdf current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::LauDPDepSumPdf

//______________________________________________________________________________
void LauVetoes::Streamer(TBuffer &R__b)
{
   // Stream an object of class LauVetoes.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(LauVetoes::Class(),this);
   } else {
      R__b.WriteClassBuffer(LauVetoes::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_LauVetoes(void *p) {
      return  p ? new(p) ::LauVetoes : new ::LauVetoes;
   }
   static void *newArray_LauVetoes(Long_t nElements, void *p) {
      return p ? new(p) ::LauVetoes[nElements] : new ::LauVetoes[nElements];
   }
   // Wrapper around operator delete
   static void delete_LauVetoes(void *p) {
      delete ((::LauVetoes*)p);
   }
   static void deleteArray_LauVetoes(void *p) {
      delete [] ((::LauVetoes*)p);
   }
   static void destruct_LauVetoes(void *p) {
      typedef ::LauVetoes current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::LauVetoes

//______________________________________________________________________________
void LauRhoOmegaMix::Streamer(TBuffer &R__b)
{
   // Stream an object of class LauRhoOmegaMix.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(LauRhoOmegaMix::Class(),this);
   } else {
      R__b.WriteClassBuffer(LauRhoOmegaMix::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_LauRhoOmegaMix(void *p) {
      delete ((::LauRhoOmegaMix*)p);
   }
   static void deleteArray_LauRhoOmegaMix(void *p) {
      delete [] ((::LauRhoOmegaMix*)p);
   }
   static void destruct_LauRhoOmegaMix(void *p) {
      typedef ::LauRhoOmegaMix current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::LauRhoOmegaMix

//______________________________________________________________________________
void LauIntegrals::Streamer(TBuffer &R__b)
{
   // Stream an object of class LauIntegrals.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(LauIntegrals::Class(),this);
   } else {
      R__b.WriteClassBuffer(LauIntegrals::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_LauIntegrals(void *p) {
      return  p ? new(p) ::LauIntegrals : new ::LauIntegrals;
   }
   static void *newArray_LauIntegrals(Long_t nElements, void *p) {
      return p ? new(p) ::LauIntegrals[nElements] : new ::LauIntegrals[nElements];
   }
   // Wrapper around operator delete
   static void delete_LauIntegrals(void *p) {
      delete ((::LauIntegrals*)p);
   }
   static void deleteArray_LauIntegrals(void *p) {
      delete [] ((::LauIntegrals*)p);
   }
   static void destruct_LauIntegrals(void *p) {
      typedef ::LauIntegrals current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::LauIntegrals

//______________________________________________________________________________
void Lau2DSplineDP::Streamer(TBuffer &R__b)
{
   // Stream an object of class Lau2DSplineDP.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(Lau2DSplineDP::Class(),this);
   } else {
      R__b.WriteClassBuffer(Lau2DSplineDP::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_Lau2DSplineDP(void *p) {
      delete ((::Lau2DSplineDP*)p);
   }
   static void deleteArray_Lau2DSplineDP(void *p) {
      delete [] ((::Lau2DSplineDP*)p);
   }
   static void destruct_Lau2DSplineDP(void *p) {
      typedef ::Lau2DSplineDP current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::Lau2DSplineDP

//______________________________________________________________________________
void LauChebychevPdf::Streamer(TBuffer &R__b)
{
   // Stream an object of class LauChebychevPdf.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(LauChebychevPdf::Class(),this);
   } else {
      R__b.WriteClassBuffer(LauChebychevPdf::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_LauChebychevPdf(void *p) {
      delete ((::LauChebychevPdf*)p);
   }
   static void deleteArray_LauChebychevPdf(void *p) {
      delete [] ((::LauChebychevPdf*)p);
   }
   static void destruct_LauChebychevPdf(void *p) {
      typedef ::LauChebychevPdf current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::LauChebychevPdf

//______________________________________________________________________________
void LauGenNtuple::Streamer(TBuffer &R__b)
{
   // Stream an object of class LauGenNtuple.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(LauGenNtuple::Class(),this);
   } else {
      R__b.WriteClassBuffer(LauGenNtuple::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_LauGenNtuple(void *p) {
      delete ((::LauGenNtuple*)p);
   }
   static void deleteArray_LauGenNtuple(void *p) {
      delete [] ((::LauGenNtuple*)p);
   }
   static void destruct_LauGenNtuple(void *p) {
      typedef ::LauGenNtuple current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::LauGenNtuple

//______________________________________________________________________________
void LauRealImagCPCoeffSet::Streamer(TBuffer &R__b)
{
   // Stream an object of class LauRealImagCPCoeffSet.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(LauRealImagCPCoeffSet::Class(),this);
   } else {
      R__b.WriteClassBuffer(LauRealImagCPCoeffSet::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_LauRealImagCPCoeffSet(void *p) {
      delete ((::LauRealImagCPCoeffSet*)p);
   }
   static void deleteArray_LauRealImagCPCoeffSet(void *p) {
      delete [] ((::LauRealImagCPCoeffSet*)p);
   }
   static void destruct_LauRealImagCPCoeffSet(void *p) {
      typedef ::LauRealImagCPCoeffSet current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::LauRealImagCPCoeffSet

//______________________________________________________________________________
void LauPolNR::Streamer(TBuffer &R__b)
{
   // Stream an object of class LauPolNR.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(LauPolNR::Class(),this);
   } else {
      R__b.WriteClassBuffer(LauPolNR::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_LauPolNR(void *p) {
      delete ((::LauPolNR*)p);
   }
   static void deleteArray_LauPolNR(void *p) {
      delete [] ((::LauPolNR*)p);
   }
   static void destruct_LauPolNR(void *p) {
      typedef ::LauPolNR current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::LauPolNR

//______________________________________________________________________________
void LauDPDepCruijffPdf::Streamer(TBuffer &R__b)
{
   // Stream an object of class LauDPDepCruijffPdf.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(LauDPDepCruijffPdf::Class(),this);
   } else {
      R__b.WriteClassBuffer(LauDPDepCruijffPdf::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_LauDPDepCruijffPdf(void *p) {
      delete ((::LauDPDepCruijffPdf*)p);
   }
   static void deleteArray_LauDPDepCruijffPdf(void *p) {
      delete [] ((::LauDPDepCruijffPdf*)p);
   }
   static void destruct_LauDPDepCruijffPdf(void *p) {
      typedef ::LauDPDepCruijffPdf current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::LauDPDepCruijffPdf

//______________________________________________________________________________
void LauIsobarDynamics::Streamer(TBuffer &R__b)
{
   // Stream an object of class LauIsobarDynamics.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(LauIsobarDynamics::Class(),this);
   } else {
      R__b.WriteClassBuffer(LauIsobarDynamics::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_LauIsobarDynamics(void *p) {
      delete ((::LauIsobarDynamics*)p);
   }
   static void deleteArray_LauIsobarDynamics(void *p) {
      delete [] ((::LauIsobarDynamics*)p);
   }
   static void destruct_LauIsobarDynamics(void *p) {
      typedef ::LauIsobarDynamics current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::LauIsobarDynamics

//______________________________________________________________________________
void LauRelBreitWignerRes::Streamer(TBuffer &R__b)
{
   // Stream an object of class LauRelBreitWignerRes.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(LauRelBreitWignerRes::Class(),this);
   } else {
      R__b.WriteClassBuffer(LauRelBreitWignerRes::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_LauRelBreitWignerRes(void *p) {
      delete ((::LauRelBreitWignerRes*)p);
   }
   static void deleteArray_LauRelBreitWignerRes(void *p) {
      delete [] ((::LauRelBreitWignerRes*)p);
   }
   static void destruct_LauRelBreitWignerRes(void *p) {
      typedef ::LauRelBreitWignerRes current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::LauRelBreitWignerRes

//______________________________________________________________________________
void LauDaughters::Streamer(TBuffer &R__b)
{
   // Stream an object of class LauDaughters.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(LauDaughters::Class(),this);
   } else {
      R__b.WriteClassBuffer(LauDaughters::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_LauDaughters(void *p) {
      delete ((::LauDaughters*)p);
   }
   static void deleteArray_LauDaughters(void *p) {
      delete [] ((::LauDaughters*)p);
   }
   static void destruct_LauDaughters(void *p) {
      typedef ::LauDaughters current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::LauDaughters

//______________________________________________________________________________
void LauKMatrixPropagator::Streamer(TBuffer &R__b)
{
   // Stream an object of class LauKMatrixPropagator.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(LauKMatrixPropagator::Class(),this);
   } else {
      R__b.WriteClassBuffer(LauKMatrixPropagator::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_LauKMatrixPropagator(void *p) {
      delete ((::LauKMatrixPropagator*)p);
   }
   static void deleteArray_LauKMatrixPropagator(void *p) {
      delete [] ((::LauKMatrixPropagator*)p);
   }
   static void destruct_LauKMatrixPropagator(void *p) {
      typedef ::LauKMatrixPropagator current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::LauKMatrixPropagator

//______________________________________________________________________________
void LauPolarFormFactorSymNR::Streamer(TBuffer &R__b)
{
   // Stream an object of class LauPolarFormFactorSymNR.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(LauPolarFormFactorSymNR::Class(),this);
   } else {
      R__b.WriteClassBuffer(LauPolarFormFactorSymNR::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_LauPolarFormFactorSymNR(void *p) {
      delete ((::LauPolarFormFactorSymNR*)p);
   }
   static void deleteArray_LauPolarFormFactorSymNR(void *p) {
      delete [] ((::LauPolarFormFactorSymNR*)p);
   }
   static void destruct_LauPolarFormFactorSymNR(void *p) {
      typedef ::LauPolarFormFactorSymNR current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::LauPolarFormFactorSymNR

//______________________________________________________________________________
void LauPrint::Streamer(TBuffer &R__b)
{
   // Stream an object of class LauPrint.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(LauPrint::Class(),this);
   } else {
      R__b.WriteClassBuffer(LauPrint::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_LauPrint(void *p) {
      return  p ? new(p) ::LauPrint : new ::LauPrint;
   }
   static void *newArray_LauPrint(Long_t nElements, void *p) {
      return p ? new(p) ::LauPrint[nElements] : new ::LauPrint[nElements];
   }
   // Wrapper around operator delete
   static void delete_LauPrint(void *p) {
      delete ((::LauPrint*)p);
   }
   static void deleteArray_LauPrint(void *p) {
      delete [] ((::LauPrint*)p);
   }
   static void destruct_LauPrint(void *p) {
      typedef ::LauPrint current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::LauPrint

//______________________________________________________________________________
void LauDabbaRes::Streamer(TBuffer &R__b)
{
   // Stream an object of class LauDabbaRes.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(LauDabbaRes::Class(),this);
   } else {
      R__b.WriteClassBuffer(LauDabbaRes::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_LauDabbaRes(void *p) {
      delete ((::LauDabbaRes*)p);
   }
   static void deleteArray_LauDabbaRes(void *p) {
      delete [] ((::LauDabbaRes*)p);
   }
   static void destruct_LauDabbaRes(void *p) {
      typedef ::LauDabbaRes current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::LauDabbaRes

//______________________________________________________________________________
void Lau2DHistDPPdf::Streamer(TBuffer &R__b)
{
   // Stream an object of class Lau2DHistDPPdf.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(Lau2DHistDPPdf::Class(),this);
   } else {
      R__b.WriteClassBuffer(Lau2DHistDPPdf::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_Lau2DHistDPPdf(void *p) {
      delete ((::Lau2DHistDPPdf*)p);
   }
   static void deleteArray_Lau2DHistDPPdf(void *p) {
      delete [] ((::Lau2DHistDPPdf*)p);
   }
   static void destruct_Lau2DHistDPPdf(void *p) {
      typedef ::Lau2DHistDPPdf current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::Lau2DHistDPPdf

//______________________________________________________________________________
void LauPolarGammaCPCoeffSet::Streamer(TBuffer &R__b)
{
   // Stream an object of class LauPolarGammaCPCoeffSet.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(LauPolarGammaCPCoeffSet::Class(),this);
   } else {
      R__b.WriteClassBuffer(LauPolarGammaCPCoeffSet::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_LauPolarGammaCPCoeffSet(void *p) {
      delete ((::LauPolarGammaCPCoeffSet*)p);
   }
   static void deleteArray_LauPolarGammaCPCoeffSet(void *p) {
      delete [] ((::LauPolarGammaCPCoeffSet*)p);
   }
   static void destruct_LauPolarGammaCPCoeffSet(void *p) {
      typedef ::LauPolarGammaCPCoeffSet current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::LauPolarGammaCPCoeffSet

//______________________________________________________________________________
void LauWeightedSumEffModel::Streamer(TBuffer &R__b)
{
   // Stream an object of class LauWeightedSumEffModel.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(LauWeightedSumEffModel::Class(),this);
   } else {
      R__b.WriteClassBuffer(LauWeightedSumEffModel::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_LauWeightedSumEffModel(void *p) {
      delete ((::LauWeightedSumEffModel*)p);
   }
   static void deleteArray_LauWeightedSumEffModel(void *p) {
      delete [] ((::LauWeightedSumEffModel*)p);
   }
   static void destruct_LauWeightedSumEffModel(void *p) {
      typedef ::LauWeightedSumEffModel current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::LauWeightedSumEffModel

//______________________________________________________________________________
void LauEFKLLMRes::Streamer(TBuffer &R__b)
{
   // Stream an object of class LauEFKLLMRes.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(LauEFKLLMRes::Class(),this);
   } else {
      R__b.WriteClassBuffer(LauEFKLLMRes::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_LauEFKLLMRes(void *p) {
      delete ((::LauEFKLLMRes*)p);
   }
   static void deleteArray_LauEFKLLMRes(void *p) {
      delete [] ((::LauEFKLLMRes*)p);
   }
   static void destruct_LauEFKLLMRes(void *p) {
      typedef ::LauEFKLLMRes current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::LauEFKLLMRes

//______________________________________________________________________________
void LauNovosibirskPdf::Streamer(TBuffer &R__b)
{
   // Stream an object of class LauNovosibirskPdf.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(LauNovosibirskPdf::Class(),this);
   } else {
      R__b.WriteClassBuffer(LauNovosibirskPdf::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_LauNovosibirskPdf(void *p) {
      delete ((::LauNovosibirskPdf*)p);
   }
   static void deleteArray_LauNovosibirskPdf(void *p) {
      delete [] ((::LauNovosibirskPdf*)p);
   }
   static void destruct_LauNovosibirskPdf(void *p) {
      typedef ::LauNovosibirskPdf current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::LauNovosibirskPdf

//______________________________________________________________________________
void LauCruijffPdf::Streamer(TBuffer &R__b)
{
   // Stream an object of class LauCruijffPdf.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(LauCruijffPdf::Class(),this);
   } else {
      R__b.WriteClassBuffer(LauCruijffPdf::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_LauCruijffPdf(void *p) {
      delete ((::LauCruijffPdf*)p);
   }
   static void deleteArray_LauCruijffPdf(void *p) {
      delete [] ((::LauCruijffPdf*)p);
   }
   static void destruct_LauCruijffPdf(void *p) {
      typedef ::LauCruijffPdf current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::LauCruijffPdf

//______________________________________________________________________________
void LauSumPdf::Streamer(TBuffer &R__b)
{
   // Stream an object of class LauSumPdf.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(LauSumPdf::Class(),this);
   } else {
      R__b.WriteClassBuffer(LauSumPdf::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_LauSumPdf(void *p) {
      delete ((::LauSumPdf*)p);
   }
   static void deleteArray_LauSumPdf(void *p) {
      delete [] ((::LauSumPdf*)p);
   }
   static void destruct_LauSumPdf(void *p) {
      typedef ::LauSumPdf current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::LauSumPdf

//______________________________________________________________________________
void LauMagPhaseCPCoeffSet::Streamer(TBuffer &R__b)
{
   // Stream an object of class LauMagPhaseCPCoeffSet.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(LauMagPhaseCPCoeffSet::Class(),this);
   } else {
      R__b.WriteClassBuffer(LauMagPhaseCPCoeffSet::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_LauMagPhaseCPCoeffSet(void *p) {
      delete ((::LauMagPhaseCPCoeffSet*)p);
   }
   static void deleteArray_LauMagPhaseCPCoeffSet(void *p) {
      delete [] ((::LauMagPhaseCPCoeffSet*)p);
   }
   static void destruct_LauMagPhaseCPCoeffSet(void *p) {
      typedef ::LauMagPhaseCPCoeffSet current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::LauMagPhaseCPCoeffSet

//______________________________________________________________________________
void LauDPDepBifurGaussPdf::Streamer(TBuffer &R__b)
{
   // Stream an object of class LauDPDepBifurGaussPdf.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(LauDPDepBifurGaussPdf::Class(),this);
   } else {
      R__b.WriteClassBuffer(LauDPDepBifurGaussPdf::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_LauDPDepBifurGaussPdf(void *p) {
      delete ((::LauDPDepBifurGaussPdf*)p);
   }
   static void deleteArray_LauDPDepBifurGaussPdf(void *p) {
      delete [] ((::LauDPDepBifurGaussPdf*)p);
   }
   static void destruct_LauDPDepBifurGaussPdf(void *p) {
      typedef ::LauDPDepBifurGaussPdf current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::LauDPDepBifurGaussPdf

//______________________________________________________________________________
void LauModIndPartWaveRealImag::Streamer(TBuffer &R__b)
{
   // Stream an object of class LauModIndPartWaveRealImag.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(LauModIndPartWaveRealImag::Class(),this);
   } else {
      R__b.WriteClassBuffer(LauModIndPartWaveRealImag::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_LauModIndPartWaveRealImag(void *p) {
      delete ((::LauModIndPartWaveRealImag*)p);
   }
   static void deleteArray_LauModIndPartWaveRealImag(void *p) {
      delete [] ((::LauModIndPartWaveRealImag*)p);
   }
   static void destruct_LauModIndPartWaveRealImag(void *p) {
      typedef ::LauModIndPartWaveRealImag current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::LauModIndPartWaveRealImag

//______________________________________________________________________________
void LauRealImagGammaCPCoeffSet::Streamer(TBuffer &R__b)
{
   // Stream an object of class LauRealImagGammaCPCoeffSet.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(LauRealImagGammaCPCoeffSet::Class(),this);
   } else {
      R__b.WriteClassBuffer(LauRealImagGammaCPCoeffSet::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_LauRealImagGammaCPCoeffSet(void *p) {
      delete ((::LauRealImagGammaCPCoeffSet*)p);
   }
   static void deleteArray_LauRealImagGammaCPCoeffSet(void *p) {
      delete [] ((::LauRealImagGammaCPCoeffSet*)p);
   }
   static void destruct_LauRealImagGammaCPCoeffSet(void *p) {
      typedef ::LauRealImagGammaCPCoeffSet current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::LauRealImagGammaCPCoeffSet

//______________________________________________________________________________
void LauGounarisSakuraiRes::Streamer(TBuffer &R__b)
{
   // Stream an object of class LauGounarisSakuraiRes.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(LauGounarisSakuraiRes::Class(),this);
   } else {
      R__b.WriteClassBuffer(LauGounarisSakuraiRes::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_LauGounarisSakuraiRes(void *p) {
      delete ((::LauGounarisSakuraiRes*)p);
   }
   static void deleteArray_LauGounarisSakuraiRes(void *p) {
      delete [] ((::LauGounarisSakuraiRes*)p);
   }
   static void destruct_LauGounarisSakuraiRes(void *p) {
      typedef ::LauGounarisSakuraiRes current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::LauGounarisSakuraiRes

//______________________________________________________________________________
void LauResonanceInfo::Streamer(TBuffer &R__b)
{
   // Stream an object of class LauResonanceInfo.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(LauResonanceInfo::Class(),this);
   } else {
      R__b.WriteClassBuffer(LauResonanceInfo::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_LauResonanceInfo(void *p) {
      delete ((::LauResonanceInfo*)p);
   }
   static void deleteArray_LauResonanceInfo(void *p) {
      delete [] ((::LauResonanceInfo*)p);
   }
   static void destruct_LauResonanceInfo(void *p) {
      typedef ::LauResonanceInfo current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::LauResonanceInfo

namespace ROOT {
   static TClass *vectorlEstringgR_Dictionary();
   static void vectorlEstringgR_TClassManip(TClass*);
   static void *new_vectorlEstringgR(void *p = 0);
   static void *newArray_vectorlEstringgR(Long_t size, void *p);
   static void delete_vectorlEstringgR(void *p);
   static void deleteArray_vectorlEstringgR(void *p);
   static void destruct_vectorlEstringgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<string>*)
   {
      vector<string> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<string>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<string>", -2, "vector", 386,
                  typeid(vector<string>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEstringgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<string>) );
      instance.SetNew(&new_vectorlEstringgR);
      instance.SetNewArray(&newArray_vectorlEstringgR);
      instance.SetDelete(&delete_vectorlEstringgR);
      instance.SetDeleteArray(&deleteArray_vectorlEstringgR);
      instance.SetDestructor(&destruct_vectorlEstringgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<string> >()));

      ::ROOT::AddClassAlternate("vector<string>","std::vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<string>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEstringgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<string>*)0x0)->GetClass();
      vectorlEstringgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEstringgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEstringgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<string> : new vector<string>;
   }
   static void *newArray_vectorlEstringgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<string>[nElements] : new vector<string>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEstringgR(void *p) {
      delete ((vector<string>*)p);
   }
   static void deleteArray_vectorlEstringgR(void *p) {
      delete [] ((vector<string>*)p);
   }
   static void destruct_vectorlEstringgR(void *p) {
      typedef vector<string> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<string>

namespace ROOT {
   static TClass *vectorlEdoublegR_Dictionary();
   static void vectorlEdoublegR_TClassManip(TClass*);
   static void *new_vectorlEdoublegR(void *p = 0);
   static void *newArray_vectorlEdoublegR(Long_t size, void *p);
   static void delete_vectorlEdoublegR(void *p);
   static void deleteArray_vectorlEdoublegR(void *p);
   static void destruct_vectorlEdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<double>*)
   {
      vector<double> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<double>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<double>", -2, "vector", 386,
                  typeid(vector<double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEdoublegR_Dictionary, isa_proxy, 0,
                  sizeof(vector<double>) );
      instance.SetNew(&new_vectorlEdoublegR);
      instance.SetNewArray(&newArray_vectorlEdoublegR);
      instance.SetDelete(&delete_vectorlEdoublegR);
      instance.SetDeleteArray(&deleteArray_vectorlEdoublegR);
      instance.SetDestructor(&destruct_vectorlEdoublegR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<double> >()));

      ::ROOT::AddClassAlternate("vector<double>","std::vector<double, std::allocator<double> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<double>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<double>*)0x0)->GetClass();
      vectorlEdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEdoublegR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<double> : new vector<double>;
   }
   static void *newArray_vectorlEdoublegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<double>[nElements] : new vector<double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEdoublegR(void *p) {
      delete ((vector<double>*)p);
   }
   static void deleteArray_vectorlEdoublegR(void *p) {
      delete [] ((vector<double>*)p);
   }
   static void destruct_vectorlEdoublegR(void *p) {
      typedef vector<double> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<double>

namespace ROOT {
   static TClass *vectorlELauParametermUgR_Dictionary();
   static void vectorlELauParametermUgR_TClassManip(TClass*);
   static void *new_vectorlELauParametermUgR(void *p = 0);
   static void *newArray_vectorlELauParametermUgR(Long_t size, void *p);
   static void delete_vectorlELauParametermUgR(void *p);
   static void deleteArray_vectorlELauParametermUgR(void *p);
   static void destruct_vectorlELauParametermUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<LauParameter*>*)
   {
      vector<LauParameter*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<LauParameter*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<LauParameter*>", -2, "vector", 386,
                  typeid(vector<LauParameter*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlELauParametermUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<LauParameter*>) );
      instance.SetNew(&new_vectorlELauParametermUgR);
      instance.SetNewArray(&newArray_vectorlELauParametermUgR);
      instance.SetDelete(&delete_vectorlELauParametermUgR);
      instance.SetDeleteArray(&deleteArray_vectorlELauParametermUgR);
      instance.SetDestructor(&destruct_vectorlELauParametermUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<LauParameter*> >()));

      ::ROOT::AddClassAlternate("vector<LauParameter*>","std::vector<LauParameter*, std::allocator<LauParameter*> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<LauParameter*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlELauParametermUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<LauParameter*>*)0x0)->GetClass();
      vectorlELauParametermUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlELauParametermUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlELauParametermUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<LauParameter*> : new vector<LauParameter*>;
   }
   static void *newArray_vectorlELauParametermUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<LauParameter*>[nElements] : new vector<LauParameter*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlELauParametermUgR(void *p) {
      delete ((vector<LauParameter*>*)p);
   }
   static void deleteArray_vectorlELauParametermUgR(void *p) {
      delete [] ((vector<LauParameter*>*)p);
   }
   static void destruct_vectorlELauParametermUgR(void *p) {
      typedef vector<LauParameter*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<LauParameter*>

namespace ROOT {
   static TClass *maplEintcOvectorlEstringgRsPgR_Dictionary();
   static void maplEintcOvectorlEstringgRsPgR_TClassManip(TClass*);
   static void *new_maplEintcOvectorlEstringgRsPgR(void *p = 0);
   static void *newArray_maplEintcOvectorlEstringgRsPgR(Long_t size, void *p);
   static void delete_maplEintcOvectorlEstringgRsPgR(void *p);
   static void deleteArray_maplEintcOvectorlEstringgRsPgR(void *p);
   static void destruct_maplEintcOvectorlEstringgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<int,vector<string> >*)
   {
      map<int,vector<string> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<int,vector<string> >));
      static ::ROOT::TGenericClassInfo 
         instance("map<int,vector<string> >", -2, "map", 100,
                  typeid(map<int,vector<string> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEintcOvectorlEstringgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(map<int,vector<string> >) );
      instance.SetNew(&new_maplEintcOvectorlEstringgRsPgR);
      instance.SetNewArray(&newArray_maplEintcOvectorlEstringgRsPgR);
      instance.SetDelete(&delete_maplEintcOvectorlEstringgRsPgR);
      instance.SetDeleteArray(&deleteArray_maplEintcOvectorlEstringgRsPgR);
      instance.SetDestructor(&destruct_maplEintcOvectorlEstringgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<int,vector<string> > >()));

      ::ROOT::AddClassAlternate("map<int,vector<string> >","std::map<int, std::vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > > >, std::less<int>, std::allocator<std::pair<int const, std::vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > > > > > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<int,vector<string> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEintcOvectorlEstringgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<int,vector<string> >*)0x0)->GetClass();
      maplEintcOvectorlEstringgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEintcOvectorlEstringgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEintcOvectorlEstringgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<int,vector<string> > : new map<int,vector<string> >;
   }
   static void *newArray_maplEintcOvectorlEstringgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<int,vector<string> >[nElements] : new map<int,vector<string> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEintcOvectorlEstringgRsPgR(void *p) {
      delete ((map<int,vector<string> >*)p);
   }
   static void deleteArray_maplEintcOvectorlEstringgRsPgR(void *p) {
      delete [] ((map<int,vector<string> >*)p);
   }
   static void destruct_maplEintcOvectorlEstringgRsPgR(void *p) {
      typedef map<int,vector<string> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<int,vector<string> >

namespace ROOT {
   static TClass *maplELauParametermUcOdoublegR_Dictionary();
   static void maplELauParametermUcOdoublegR_TClassManip(TClass*);
   static void *new_maplELauParametermUcOdoublegR(void *p = 0);
   static void *newArray_maplELauParametermUcOdoublegR(Long_t size, void *p);
   static void delete_maplELauParametermUcOdoublegR(void *p);
   static void deleteArray_maplELauParametermUcOdoublegR(void *p);
   static void destruct_maplELauParametermUcOdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<LauParameter*,double>*)
   {
      map<LauParameter*,double> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<LauParameter*,double>));
      static ::ROOT::TGenericClassInfo 
         instance("map<LauParameter*,double>", -2, "map", 100,
                  typeid(map<LauParameter*,double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplELauParametermUcOdoublegR_Dictionary, isa_proxy, 0,
                  sizeof(map<LauParameter*,double>) );
      instance.SetNew(&new_maplELauParametermUcOdoublegR);
      instance.SetNewArray(&newArray_maplELauParametermUcOdoublegR);
      instance.SetDelete(&delete_maplELauParametermUcOdoublegR);
      instance.SetDeleteArray(&deleteArray_maplELauParametermUcOdoublegR);
      instance.SetDestructor(&destruct_maplELauParametermUcOdoublegR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<LauParameter*,double> >()));

      ::ROOT::AddClassAlternate("map<LauParameter*,double>","std::map<LauParameter*, double, std::less<LauParameter*>, std::allocator<std::pair<LauParameter* const, double> > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<LauParameter*,double>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplELauParametermUcOdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<LauParameter*,double>*)0x0)->GetClass();
      maplELauParametermUcOdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void maplELauParametermUcOdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplELauParametermUcOdoublegR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<LauParameter*,double> : new map<LauParameter*,double>;
   }
   static void *newArray_maplELauParametermUcOdoublegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<LauParameter*,double>[nElements] : new map<LauParameter*,double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplELauParametermUcOdoublegR(void *p) {
      delete ((map<LauParameter*,double>*)p);
   }
   static void deleteArray_maplELauParametermUcOdoublegR(void *p) {
      delete [] ((map<LauParameter*,double>*)p);
   }
   static void destruct_maplELauParametermUcOdoublegR(void *p) {
      typedef map<LauParameter*,double> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<LauParameter*,double>

namespace {
  void TriggerDictionaryInitialization_libLaurapLpL_Impl() {
    static const char* headers[] = {
"LauCPFitModel.hh",
"LauMagPhaseCoeffSet.hh",
"LauFlatNR.hh",
"LauLinearPdf.hh",
"LauSimFitMaster.hh",
"LauParticlePDG.hh",
"LauCartesianCPCoeffSet.hh",
"LauKMatrixProdSVP.hh",
"Lau2DAbsDPPdf.hh",
"LauMinuit.hh",
"LauResonanceMaker.hh",
"LauEmbeddedData.hh",
"LauLASSBWRes.hh",
"LauKMatrixProdPole.hh",
"LauParametricStepFuncPdf.hh",
"LauBelleCPCoeffSet.hh",
"LauCalcChiSq.hh",
"LauAsymmCalc.hh",
"LauBifurcatedGaussPdf.hh",
"LauCrystalBallPdf.hh",
"LauKappaRes.hh",
"LauSimpleFitModel.hh",
"LauSPlot.hh",
"LauBlattWeisskopfFactor.hh",
"LauNRAmplitude.hh",
"LauBkgndDPModel.hh",
"LauAbsModIndPartWave.hh",
"LauFitNtuple.hh",
"LauFitter.hh",
"LauFitDataTree.hh",
"LauKMatrixPropFactory.hh",
"LauLASSNRRes.hh",
"LauBelleNR.hh",
"LauAbsBkgndDPModel.hh",
"LauSigmoidPdf.hh",
"Lau2DAbsHistDPPdf.hh",
"LauDPDepMapPdf.hh",
"LauAbsRValue.hh",
"LauBreitWignerRes.hh",
"LauParamFixed.hh",
"Lau2DSplineDPPdf.hh",
"LauKinematics.hh",
"LauCacheData.hh",
"LauPolarFormFactorNR.hh",
"Lau2DAbsDP.hh",
"LauRescatteringRes.hh",
"LauCartesianGammaCPCoeffSet.hh",
"LauDPDepGaussPdf.hh",
"LauScfMap.hh",
"LauFormulaPar.hh",
"LauExponentialPdf.hh",
"LauBelleSymNR.hh",
"LauPoleRes.hh",
"LauRealImagCoeffSet.hh",
"LauSigmaRes.hh",
"LauLASSRes.hh",
"LauString.hh",
"LauArgusPdf.hh",
"LauGaussIncohRes.hh",
"LauDatabasePDG.hh",
"LauFlatteRes.hh",
"LauCleoCPCoeffSet.hh",
"LauGaussPdf.hh",
"Lau2DHistPdf.hh",
"LauModIndPartWaveMagPhase.hh",
"LauAbsResonance.hh",
"LauTextFileParser.hh",
"Lau2DHistDP.hh",
"LauDPPartialIntegralInfo.hh",
"Lau1DHistPdf.hh",
"Lau2DCubicSpline.hh",
"LauResultsExtractor.hh",
"LauEffModel.hh",
"LauMergeDataFiles.hh",
"LauRescattering2Res.hh",
"LauRandom.hh",
"LauDPDepSumPdf.hh",
"LauVetoes.hh",
"LauRhoOmegaMix.hh",
"Lau1DCubicSpline.hh",
"LauIntegrals.hh",
"LauAbsFitModel.hh",
"Lau2DSplineDP.hh",
"LauChebychevPdf.hh",
"LauGenNtuple.hh",
"LauBlind.hh",
"LauRealImagCPCoeffSet.hh",
"LauConstants.hh",
"LauPolNR.hh",
"LauDPDepCruijffPdf.hh",
"LauIsobarDynamics.hh",
"LauComplex.hh",
"LauFitObject.hh",
"LauAbsFitter.hh",
"LauRelBreitWignerRes.hh",
"LauDaughters.hh",
"LauKMatrixPropagator.hh",
"LauPolarFormFactorSymNR.hh",
"LauPrint.hh",
"LauDabbaRes.hh",
"LauAbsEffModel.hh",
"Lau2DAbsHistDP.hh",
"Lau2DHistDPPdf.hh",
"LauPolarGammaCPCoeffSet.hh",
"LauParameter.hh",
"LauWeightedSumEffModel.hh",
"LauEFKLLMRes.hh",
"LauNovosibirskPdf.hh",
"LauCruijffPdf.hh",
"LauAbsIncohRes.hh",
"LauSumPdf.hh",
"LauAbsPdf.hh",
"LauMagPhaseCPCoeffSet.hh",
"LauDPDepBifurGaussPdf.hh",
"LauModIndPartWaveRealImag.hh",
"LauRealImagGammaCPCoeffSet.hh",
"LauGounarisSakuraiRes.hh",
"LauResonanceInfo.hh",
"LauAbsCoeffSet.hh",
0
    };
    static const char* includePaths[] = {
"/data1/user/yangyh/parallel_real/inc",
"/data3/user/yangyh/opt/root-6.24.02/include/",
"/data1/user/yangyh/parallel_real/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libLaurapLpL dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class __attribute__((annotate("$clingAutoload$LauMinuit.hh")))  __attribute__((annotate("$clingAutoload$LauCPFitModel.hh")))  LauMinuit;
template <typename AbsFitter> class __attribute__((annotate("$clingAutoload$LauAbsFitter.hh")))  __attribute__((annotate("$clingAutoload$LauCPFitModel.hh")))  LauAbsFitter;

class __attribute__((annotate("$clingAutoload$LauFitObject.hh")))  __attribute__((annotate("$clingAutoload$LauCPFitModel.hh")))  LauFitObject;
class __attribute__((annotate(R"ATTRDUMP(Abstract base class for R parameters)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$LauAbsRValue.hh")))  __attribute__((annotate("$clingAutoload$LauCPFitModel.hh")))  LauAbsRValue;
class __attribute__((annotate("$clingAutoload$LauBlind.hh")))  __attribute__((annotate("$clingAutoload$LauCPFitModel.hh")))  LauBlind;
class __attribute__((annotate("$clingAutoload$LauParameter.hh")))  __attribute__((annotate("$clingAutoload$LauCPFitModel.hh")))  LauParameter;
class __attribute__((annotate("$clingAutoload$LauFormulaPar.hh")))  __attribute__((annotate("$clingAutoload$LauCPFitModel.hh")))  LauFormulaPar;
class __attribute__((annotate("$clingAutoload$LauSPlot.hh")))  __attribute__((annotate("$clingAutoload$LauCPFitModel.hh")))  LauSPlot;
class __attribute__((annotate(R"ATTRDUMP(Fit/toyMC results ntuple)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$LauFitNtuple.hh")))  __attribute__((annotate("$clingAutoload$LauCPFitModel.hh")))  LauFitNtuple;
class __attribute__((annotate(R"ATTRDUMP(Abstract interface to fit/toyMC model)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$LauAbsFitModel.hh")))  __attribute__((annotate("$clingAutoload$LauCPFitModel.hh")))  LauAbsFitModel;
class __attribute__((annotate("$clingAutoload$LauComplex.hh")))  __attribute__((annotate("$clingAutoload$LauCPFitModel.hh")))  LauComplex;
class __attribute__((annotate(R"ATTRDUMP(CP fit/ToyMC model)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$LauCPFitModel.hh")))  LauCPFitModel;
class __attribute__((annotate("$clingAutoload$LauAbsCoeffSet.hh")))  __attribute__((annotate("$clingAutoload$LauMagPhaseCoeffSet.hh")))  LauAbsCoeffSet;
class __attribute__((annotate("$clingAutoload$LauMagPhaseCoeffSet.hh")))  LauMagPhaseCoeffSet;
class __attribute__((annotate("$clingAutoload$LauBlattWeisskopfFactor.hh")))  __attribute__((annotate("$clingAutoload$LauFlatNR.hh")))  LauBlattWeisskopfFactor;
class __attribute__((annotate(R"ATTRDUMP(Abstract resonance class)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$LauAbsResonance.hh")))  __attribute__((annotate("$clingAutoload$LauFlatNR.hh")))  LauAbsResonance;
class __attribute__((annotate(R"ATTRDUMP(Uniform non-resonant model)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$LauFlatNR.hh")))  LauFlatNR;
class __attribute__((annotate("$clingAutoload$LauFitDataTree.hh")))  __attribute__((annotate("$clingAutoload$LauLinearPdf.hh")))  LauFitDataTree;
class __attribute__((annotate("$clingAutoload$LauParamFixed.hh")))  __attribute__((annotate("$clingAutoload$LauLinearPdf.hh")))  LauParamFixed;
class __attribute__((annotate(R"ATTRDUMP(Define the abstract PDF class)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$LauAbsPdf.hh")))  __attribute__((annotate("$clingAutoload$LauLinearPdf.hh")))  LauAbsPdf;
class __attribute__((annotate(R"ATTRDUMP(Define the Linear PDF)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$LauLinearPdf.hh")))  LauLinearPdf;
class __attribute__((annotate("$clingAutoload$LauSimFitMaster.hh")))  LauSimFitMaster;
class __attribute__((annotate("$clingAutoload$LauParticlePDG.hh")))  LauParticlePDG;
class __attribute__((annotate("$clingAutoload$LauCartesianCPCoeffSet.hh")))  LauCartesianCPCoeffSet;
class __attribute__((annotate(R"ATTRDUMP(K-matrix production SVP term)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$LauKMatrixProdSVP.hh")))  LauKMatrixProdSVP;
class __attribute__((annotate(R"ATTRDUMP(Abstract base class for 2D DP variation)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$Lau2DAbsDPPdf.hh")))  Lau2DAbsDPPdf;
class __attribute__((annotate(R"ATTRDUMP(Kinematic routines)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$LauResonanceMaker.hh")))  LauResonanceMaker;
class __attribute__((annotate(R"ATTRDUMP(a non-persistent bare-bones complex class)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$LauEmbeddedData.hh")))  LauEmbeddedData;
class __attribute__((annotate("$clingAutoload$LauLASSBWRes.hh")))  LauLASSBWRes;
class __attribute__((annotate(R"ATTRDUMP(K-matrix production pole)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$LauKMatrixProdPole.hh")))  LauKMatrixProdPole;
class __attribute__((annotate(R"ATTRDUMP(Define the PSF PDF)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$LauParametricStepFuncPdf.hh")))  LauParametricStepFuncPdf;
class __attribute__((annotate("$clingAutoload$LauBelleCPCoeffSet.hh")))  LauBelleCPCoeffSet;
class __attribute__((annotate("$clingAutoload$LauCalcChiSq.hh")))  LauCalcChiSq;
class __attribute__((annotate(R"ATTRDUMP(Calculate asymmetry between two variables)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$LauAsymmCalc.hh")))  LauAsymmCalc;
class __attribute__((annotate(R"ATTRDUMP(Define the Bifurcated Gaussian PDF)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$LauBifurcatedGaussPdf.hh")))  LauBifurcatedGaussPdf;
class __attribute__((annotate(R"ATTRDUMP(Define the Crystal Ball PDF)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$LauCrystalBallPdf.hh")))  LauCrystalBallPdf;
class __attribute__((annotate(R"ATTRDUMP(Kappa resonance model)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$LauKappaRes.hh")))  LauKappaRes;
class __attribute__((annotate(R"ATTRDUMP(Total fit/ToyMC model)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$LauSimpleFitModel.hh")))  LauSimpleFitModel;
class __attribute__((annotate(R"ATTRDUMP(Non-resonant amplitude model)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$LauNRAmplitude.hh")))  LauNRAmplitude;
class __attribute__((annotate(R"ATTRDUMP(Abstract DP background model)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$LauAbsBkgndDPModel.hh")))  __attribute__((annotate("$clingAutoload$LauBkgndDPModel.hh")))  LauAbsBkgndDPModel;
class __attribute__((annotate(R"ATTRDUMP(DP background model)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$LauBkgndDPModel.hh")))  LauBkgndDPModel;
class __attribute__((annotate(R"ATTRDUMP(Class for defining a 1D cubic spline)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(Class for defining a 1D cubic spline)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(Class for defining a 1D cubic spline)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(Class for defining a 1D cubic spline)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$Lau1DCubicSpline.hh")))  __attribute__((annotate("$clingAutoload$LauAbsModIndPartWave.hh")))  Lau1DCubicSpline;
class __attribute__((annotate(R"ATTRDUMP(model independent partial wave)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$LauAbsModIndPartWave.hh")))  LauAbsModIndPartWave;
class __attribute__((annotate("$clingAutoload$LauFitter.hh")))  LauFitter;
class __attribute__((annotate("$clingAutoload$LauKMatrixPropFactory.hh")))  LauKMatrixPropFactory;
class __attribute__((annotate("$clingAutoload$LauLASSNRRes.hh")))  LauLASSNRRes;
class __attribute__((annotate("$clingAutoload$LauBelleNR.hh")))  LauBelleNR;
class __attribute__((annotate(R"ATTRDUMP(Define the Sigmoid PDF)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$LauSigmoidPdf.hh")))  LauSigmoidPdf;
class __attribute__((annotate(R"ATTRDUMP(Abstract base class for 2D DP variations based on a histogram)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$Lau2DAbsHistDPPdf.hh")))  Lau2DAbsHistDPPdf;
class __attribute__((annotate(R"ATTRDUMP(Define the sum PDF)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$LauDPDepMapPdf.hh")))  LauDPDepMapPdf;
class __attribute__((annotate(R"ATTRDUMP(Breit-Wigner resonance model)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$LauBreitWignerRes.hh")))  LauBreitWignerRes;
class __attribute__((annotate(R"ATTRDUMP(2D Spline utility class for DP analyses)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$Lau2DSplineDPPdf.hh")))  Lau2DSplineDPPdf;
class __attribute__((annotate("$clingAutoload$LauKinematics.hh")))  LauKinematics;
class __attribute__((annotate(R"ATTRDUMP(Cached Data Class)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$LauCacheData.hh")))  LauCacheData;
class __attribute__((annotate("$clingAutoload$LauPolarFormFactorNR.hh")))  LauPolarFormFactorNR;
class __attribute__((annotate(R"ATTRDUMP(Abstract base class for 2D DP variation)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$Lau2DAbsDP.hh")))  Lau2DAbsDP;
class __attribute__((annotate("$clingAutoload$LauRescatteringRes.hh")))  LauRescatteringRes;
class __attribute__((annotate("$clingAutoload$LauCartesianGammaCPCoeffSet.hh")))  LauCartesianGammaCPCoeffSet;
class __attribute__((annotate(R"ATTRDUMP(Define the Gaussian PDF)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$LauDPDepGaussPdf.hh")))  LauDPDepGaussPdf;
class __attribute__((annotate("$clingAutoload$LauScfMap.hh")))  LauScfMap;
class __attribute__((annotate(R"ATTRDUMP(Define the Exponential PDF)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$LauExponentialPdf.hh")))  LauExponentialPdf;
class __attribute__((annotate(R"ATTRDUMP(Belle Non-resonant model)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$LauBelleSymNR.hh")))  LauBelleSymNR;
class __attribute__((annotate(R"ATTRDUMP(Pole resonance model)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$LauPoleRes.hh")))  LauPoleRes;
class __attribute__((annotate("$clingAutoload$LauRealImagCoeffSet.hh")))  LauRealImagCoeffSet;
class __attribute__((annotate(R"ATTRDUMP(Sigma resonance model)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$LauSigmaRes.hh")))  LauSigmaRes;
class __attribute__((annotate("$clingAutoload$LauLASSRes.hh")))  LauLASSRes;
class __attribute__((annotate("$clingAutoload$LauString.hh")))  LauString;
class __attribute__((annotate(R"ATTRDUMP(Define the ARGUS PDF)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$LauArgusPdf.hh")))  LauArgusPdf;
class __attribute__((annotate(R"ATTRDUMP(Abstract incoherent resonance class)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$LauAbsIncohRes.hh")))  __attribute__((annotate("$clingAutoload$LauGaussIncohRes.hh")))  LauAbsIncohRes;
class __attribute__((annotate(R"ATTRDUMP(Gaussian incoherent resonance model)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$LauGaussIncohRes.hh")))  LauGaussIncohRes;
class __attribute__((annotate("$clingAutoload$LauDatabasePDG.hh")))  LauDatabasePDG;
class __attribute__((annotate("$clingAutoload$LauFlatteRes.hh")))  LauFlatteRes;
class __attribute__((annotate("$clingAutoload$LauCleoCPCoeffSet.hh")))  LauCleoCPCoeffSet;
class __attribute__((annotate(R"ATTRDUMP(Define the Gaussian PDF)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$LauGaussPdf.hh")))  LauGaussPdf;
class __attribute__((annotate(R"ATTRDUMP(2D histogram pdf class)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$Lau2DHistPdf.hh")))  Lau2DHistPdf;
class __attribute__((annotate(R"ATTRDUMP(model independent partial wave)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$LauModIndPartWaveMagPhase.hh")))  LauModIndPartWaveMagPhase;
class __attribute__((annotate("$clingAutoload$LauTextFileParser.hh")))  LauTextFileParser;
class __attribute__((annotate(R"ATTRDUMP(Abstract base class for 2D DP variations based on a histogram)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$Lau2DAbsHistDP.hh")))  __attribute__((annotate("$clingAutoload$Lau2DHistDP.hh")))  Lau2DAbsHistDP;
class __attribute__((annotate(R"ATTRDUMP(2D Histogram utility class for DP analyses)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$Lau2DHistDP.hh")))  Lau2DHistDP;
class __attribute__((annotate("$clingAutoload$LauDPPartialIntegralInfo.hh")))  LauDPPartialIntegralInfo;
class __attribute__((annotate(R"ATTRDUMP(1D histogram pdf class)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$Lau1DHistPdf.hh")))  Lau1DHistPdf;
class __attribute__((annotate(R"ATTRDUMP(Class for defining a 2D cubic spline based on an input histogram)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(Class for defining a 2D cubic spline based on an input histogram)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(Class for defining a 2D cubic spline based on an input histogram)ATTRDUMP"))) __attribute__((annotate(R"ATTRDUMP(Class for defining a 2D cubic spline based on an input histogram)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$Lau2DCubicSpline.hh")))  Lau2DCubicSpline;
class __attribute__((annotate("$clingAutoload$LauResultsExtractor.hh")))  LauResultsExtractor;
class __attribute__((annotate(R"ATTRDUMP(pABC for the signal efficiency across the DP)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$LauAbsEffModel.hh")))  __attribute__((annotate("$clingAutoload$LauEffModel.hh")))  LauAbsEffModel;
class __attribute__((annotate(R"ATTRDUMP(Implement the signal efficiency across the DP)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$LauEffModel.hh")))  LauEffModel;
class __attribute__((annotate("$clingAutoload$LauMergeDataFiles.hh")))  LauMergeDataFiles;
class __attribute__((annotate(R"ATTRDUMP(pipi S wave model by Schechter amplitude model)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$LauRescattering2Res.hh")))  LauRescattering2Res;
class __attribute__((annotate(R"ATTRDUMP(Define the sum PDF)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$LauDPDepSumPdf.hh")))  LauDPDepSumPdf;
class __attribute__((annotate(R"ATTRDUMP(Vetoes in the Dalitz plot)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$LauVetoes.hh")))  LauVetoes;
class __attribute__((annotate(R"ATTRDUMP(Rho-omega mixing model)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$LauRhoOmegaMix.hh")))  LauRhoOmegaMix;
class __attribute__((annotate("$clingAutoload$LauIntegrals.hh")))  LauIntegrals;
class __attribute__((annotate(R"ATTRDUMP(2D Spline utility class for DP analyses)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$Lau2DSplineDP.hh")))  Lau2DSplineDP;
class __attribute__((annotate(R"ATTRDUMP(Chebychev PDF)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$LauChebychevPdf.hh")))  LauChebychevPdf;
class __attribute__((annotate(R"ATTRDUMP(Generated toyMC ntuple)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$LauGenNtuple.hh")))  LauGenNtuple;
class __attribute__((annotate("$clingAutoload$LauRealImagCPCoeffSet.hh")))  LauRealImagCPCoeffSet;
class __attribute__((annotate(R"ATTRDUMP(Polynomial Non-resonant model)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$LauPolNR.hh")))  LauPolNR;
class __attribute__((annotate(R"ATTRDUMP(Define the Cruijff PDF)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$LauDPDepCruijffPdf.hh")))  LauDPDepCruijffPdf;
class __attribute__((annotate("$clingAutoload$LauIsobarDynamics.hh")))  LauIsobarDynamics;
class __attribute__((annotate(R"ATTRDUMP(Relativistic Breit-Wigner resonance model)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$LauRelBreitWignerRes.hh")))  LauRelBreitWignerRes;
class __attribute__((annotate("$clingAutoload$LauDaughters.hh")))  LauDaughters;
class __attribute__((annotate(R"ATTRDUMP(K-matrix amplitude model)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$LauKMatrixPropagator.hh")))  LauKMatrixPropagator;
class __attribute__((annotate("$clingAutoload$LauPolarFormFactorSymNR.hh")))  LauPolarFormFactorSymNR;
class __attribute__((annotate("$clingAutoload$LauPrint.hh")))  LauPrint;
class __attribute__((annotate(R"ATTRDUMP(Dabba resonance model)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$LauDabbaRes.hh")))  LauDabbaRes;
class __attribute__((annotate(R"ATTRDUMP(2D Histogram utility class for DP analyses)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$Lau2DHistDPPdf.hh")))  Lau2DHistDPPdf;
class __attribute__((annotate("$clingAutoload$LauPolarGammaCPCoeffSet.hh")))  LauPolarGammaCPCoeffSet;
class __attribute__((annotate(R"ATTRDUMP(Implement the signal efficiency across the DP)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$LauWeightedSumEffModel.hh")))  LauWeightedSumEffModel;
class __attribute__((annotate(R"ATTRDUMP(EFKLLM resonance model)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$LauEFKLLMRes.hh")))  LauEFKLLMRes;
class __attribute__((annotate(R"ATTRDUMP(Define the Novosibirsk PDF)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$LauNovosibirskPdf.hh")))  LauNovosibirskPdf;
class __attribute__((annotate(R"ATTRDUMP(Define the Cruijff PDF)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$LauCruijffPdf.hh")))  LauCruijffPdf;
class __attribute__((annotate(R"ATTRDUMP(Define the sum PDF)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$LauSumPdf.hh")))  LauSumPdf;
class __attribute__((annotate("$clingAutoload$LauMagPhaseCPCoeffSet.hh")))  LauMagPhaseCPCoeffSet;
class __attribute__((annotate(R"ATTRDUMP(Define the MVA PDF)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$LauDPDepBifurGaussPdf.hh")))  LauDPDepBifurGaussPdf;
class __attribute__((annotate(R"ATTRDUMP(model independent partial wave)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$LauModIndPartWaveRealImag.hh")))  LauModIndPartWaveRealImag;
class __attribute__((annotate("$clingAutoload$LauRealImagGammaCPCoeffSet.hh")))  LauRealImagGammaCPCoeffSet;
class __attribute__((annotate(R"ATTRDUMP(Gounaris-Sakurai resonance model)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$LauGounarisSakuraiRes.hh")))  LauGounarisSakuraiRes;
class __attribute__((annotate(R"ATTRDUMP(Specify each allowed resonance)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$LauResonanceInfo.hh")))  LauResonanceInfo;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libLaurapLpL dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "LauCPFitModel.hh"
#include "LauMagPhaseCoeffSet.hh"
#include "LauFlatNR.hh"
#include "LauLinearPdf.hh"
#include "LauSimFitMaster.hh"
#include "LauParticlePDG.hh"
#include "LauCartesianCPCoeffSet.hh"
#include "LauKMatrixProdSVP.hh"
#include "Lau2DAbsDPPdf.hh"
#include "LauMinuit.hh"
#include "LauResonanceMaker.hh"
#include "LauEmbeddedData.hh"
#include "LauLASSBWRes.hh"
#include "LauKMatrixProdPole.hh"
#include "LauParametricStepFuncPdf.hh"
#include "LauBelleCPCoeffSet.hh"
#include "LauCalcChiSq.hh"
#include "LauAsymmCalc.hh"
#include "LauBifurcatedGaussPdf.hh"
#include "LauCrystalBallPdf.hh"
#include "LauKappaRes.hh"
#include "LauSimpleFitModel.hh"
#include "LauSPlot.hh"
#include "LauBlattWeisskopfFactor.hh"
#include "LauNRAmplitude.hh"
#include "LauBkgndDPModel.hh"
#include "LauAbsModIndPartWave.hh"
#include "LauFitNtuple.hh"
#include "LauFitter.hh"
#include "LauFitDataTree.hh"
#include "LauKMatrixPropFactory.hh"
#include "LauLASSNRRes.hh"
#include "LauBelleNR.hh"
#include "LauAbsBkgndDPModel.hh"
#include "LauSigmoidPdf.hh"
#include "Lau2DAbsHistDPPdf.hh"
#include "LauDPDepMapPdf.hh"
#include "LauAbsRValue.hh"
#include "LauBreitWignerRes.hh"
#include "LauParamFixed.hh"
#include "Lau2DSplineDPPdf.hh"
#include "LauKinematics.hh"
#include "LauCacheData.hh"
#include "LauPolarFormFactorNR.hh"
#include "Lau2DAbsDP.hh"
#include "LauRescatteringRes.hh"
#include "LauCartesianGammaCPCoeffSet.hh"
#include "LauDPDepGaussPdf.hh"
#include "LauScfMap.hh"
#include "LauFormulaPar.hh"
#include "LauExponentialPdf.hh"
#include "LauBelleSymNR.hh"
#include "LauPoleRes.hh"
#include "LauRealImagCoeffSet.hh"
#include "LauSigmaRes.hh"
#include "LauLASSRes.hh"
#include "LauString.hh"
#include "LauArgusPdf.hh"
#include "LauGaussIncohRes.hh"
#include "LauDatabasePDG.hh"
#include "LauFlatteRes.hh"
#include "LauCleoCPCoeffSet.hh"
#include "LauGaussPdf.hh"
#include "Lau2DHistPdf.hh"
#include "LauModIndPartWaveMagPhase.hh"
#include "LauAbsResonance.hh"
#include "LauTextFileParser.hh"
#include "Lau2DHistDP.hh"
#include "LauDPPartialIntegralInfo.hh"
#include "Lau1DHistPdf.hh"
#include "Lau2DCubicSpline.hh"
#include "LauResultsExtractor.hh"
#include "LauEffModel.hh"
#include "LauMergeDataFiles.hh"
#include "LauRescattering2Res.hh"
#include "LauRandom.hh"
#include "LauDPDepSumPdf.hh"
#include "LauVetoes.hh"
#include "LauRhoOmegaMix.hh"
#include "Lau1DCubicSpline.hh"
#include "LauIntegrals.hh"
#include "LauAbsFitModel.hh"
#include "Lau2DSplineDP.hh"
#include "LauChebychevPdf.hh"
#include "LauGenNtuple.hh"
#include "LauBlind.hh"
#include "LauRealImagCPCoeffSet.hh"
#include "LauConstants.hh"
#include "LauPolNR.hh"
#include "LauDPDepCruijffPdf.hh"
#include "LauIsobarDynamics.hh"
#include "LauComplex.hh"
#include "LauFitObject.hh"
#include "LauAbsFitter.hh"
#include "LauRelBreitWignerRes.hh"
#include "LauDaughters.hh"
#include "LauKMatrixPropagator.hh"
#include "LauPolarFormFactorSymNR.hh"
#include "LauPrint.hh"
#include "LauDabbaRes.hh"
#include "LauAbsEffModel.hh"
#include "Lau2DAbsHistDP.hh"
#include "Lau2DHistDPPdf.hh"
#include "LauPolarGammaCPCoeffSet.hh"
#include "LauParameter.hh"
#include "LauWeightedSumEffModel.hh"
#include "LauEFKLLMRes.hh"
#include "LauNovosibirskPdf.hh"
#include "LauCruijffPdf.hh"
#include "LauAbsIncohRes.hh"
#include "LauSumPdf.hh"
#include "LauAbsPdf.hh"
#include "LauMagPhaseCPCoeffSet.hh"
#include "LauDPDepBifurGaussPdf.hh"
#include "LauModIndPartWaveRealImag.hh"
#include "LauRealImagGammaCPCoeffSet.hh"
#include "LauGounarisSakuraiRes.hh"
#include "LauResonanceInfo.hh"
#include "LauAbsCoeffSet.hh"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"Lau1DCubicSpline", payloadCode, "@",
"Lau1DHistPdf", payloadCode, "@",
"Lau2DAbsDP", payloadCode, "@",
"Lau2DAbsDPPdf", payloadCode, "@",
"Lau2DAbsHistDP", payloadCode, "@",
"Lau2DAbsHistDPPdf", payloadCode, "@",
"Lau2DCubicSpline", payloadCode, "@",
"Lau2DHistDP", payloadCode, "@",
"Lau2DHistDPPdf", payloadCode, "@",
"Lau2DHistPdf", payloadCode, "@",
"Lau2DSplineDP", payloadCode, "@",
"Lau2DSplineDPPdf", payloadCode, "@",
"LauAbsBkgndDPModel", payloadCode, "@",
"LauAbsCoeffSet", payloadCode, "@",
"LauAbsEffModel", payloadCode, "@",
"LauAbsFitModel", payloadCode, "@",
"LauAbsFitter<LauMinuit>", payloadCode, "@",
"LauAbsIncohRes", payloadCode, "@",
"LauAbsModIndPartWave", payloadCode, "@",
"LauAbsPdf", payloadCode, "@",
"LauAbsRValue", payloadCode, "@",
"LauAbsResonance", payloadCode, "@",
"LauArgusPdf", payloadCode, "@",
"LauAsymmCalc", payloadCode, "@",
"LauBelleCPCoeffSet", payloadCode, "@",
"LauBelleNR", payloadCode, "@",
"LauBelleSymNR", payloadCode, "@",
"LauBifurcatedGaussPdf", payloadCode, "@",
"LauBkgndDPModel", payloadCode, "@",
"LauBlattWeisskopfFactor", payloadCode, "@",
"LauBlind", payloadCode, "@",
"LauBreitWignerRes", payloadCode, "@",
"LauCPFitModel", payloadCode, "@",
"LauCacheData", payloadCode, "@",
"LauCalcChiSq", payloadCode, "@",
"LauCartesianCPCoeffSet", payloadCode, "@",
"LauCartesianGammaCPCoeffSet", payloadCode, "@",
"LauChebychevPdf", payloadCode, "@",
"LauCleoCPCoeffSet", payloadCode, "@",
"LauComplex", payloadCode, "@",
"LauCruijffPdf", payloadCode, "@",
"LauCrystalBallPdf", payloadCode, "@",
"LauDPDepBifurGaussPdf", payloadCode, "@",
"LauDPDepCruijffPdf", payloadCode, "@",
"LauDPDepGaussPdf", payloadCode, "@",
"LauDPDepMapPdf", payloadCode, "@",
"LauDPDepSumPdf", payloadCode, "@",
"LauDPPartialIntegralInfo", payloadCode, "@",
"LauDabbaRes", payloadCode, "@",
"LauDatabasePDG", payloadCode, "@",
"LauDaughters", payloadCode, "@",
"LauEFKLLMRes", payloadCode, "@",
"LauEffModel", payloadCode, "@",
"LauEmbeddedData", payloadCode, "@",
"LauExponentialPdf", payloadCode, "@",
"LauFitDataTree", payloadCode, "@",
"LauFitNtuple", payloadCode, "@",
"LauFitObject", payloadCode, "@",
"LauFitter", payloadCode, "@",
"LauFlatNR", payloadCode, "@",
"LauFlatteRes", payloadCode, "@",
"LauFormulaPar", payloadCode, "@",
"LauGaussIncohRes", payloadCode, "@",
"LauGaussPdf", payloadCode, "@",
"LauGenNtuple", payloadCode, "@",
"LauGounarisSakuraiRes", payloadCode, "@",
"LauIntegrals", payloadCode, "@",
"LauIsobarDynamics", payloadCode, "@",
"LauKMatrixProdPole", payloadCode, "@",
"LauKMatrixProdSVP", payloadCode, "@",
"LauKMatrixPropFactory", payloadCode, "@",
"LauKMatrixPropagator", payloadCode, "@",
"LauKappaRes", payloadCode, "@",
"LauKinematics", payloadCode, "@",
"LauLASSBWRes", payloadCode, "@",
"LauLASSNRRes", payloadCode, "@",
"LauLASSRes", payloadCode, "@",
"LauLinearPdf", payloadCode, "@",
"LauMagPhaseCPCoeffSet", payloadCode, "@",
"LauMagPhaseCoeffSet", payloadCode, "@",
"LauMergeDataFiles", payloadCode, "@",
"LauMinuit", payloadCode, "@",
"LauModIndPartWaveMagPhase", payloadCode, "@",
"LauModIndPartWaveRealImag", payloadCode, "@",
"LauNRAmplitude", payloadCode, "@",
"LauNovosibirskPdf", payloadCode, "@",
"LauParamFixed", payloadCode, "@",
"LauParameter", payloadCode, "@",
"LauParametricStepFuncPdf", payloadCode, "@",
"LauParticlePDG", payloadCode, "@",
"LauPolNR", payloadCode, "@",
"LauPolarFormFactorNR", payloadCode, "@",
"LauPolarFormFactorSymNR", payloadCode, "@",
"LauPolarGammaCPCoeffSet", payloadCode, "@",
"LauPoleRes", payloadCode, "@",
"LauPrint", payloadCode, "@",
"LauRealImagCPCoeffSet", payloadCode, "@",
"LauRealImagCoeffSet", payloadCode, "@",
"LauRealImagGammaCPCoeffSet", payloadCode, "@",
"LauRelBreitWignerRes", payloadCode, "@",
"LauRescattering2Res", payloadCode, "@",
"LauRescatteringRes", payloadCode, "@",
"LauResonanceInfo", payloadCode, "@",
"LauResonanceMaker", payloadCode, "@",
"LauResultsExtractor", payloadCode, "@",
"LauRhoOmegaMix", payloadCode, "@",
"LauSPlot", payloadCode, "@",
"LauScfMap", payloadCode, "@",
"LauSigmaRes", payloadCode, "@",
"LauSigmoidPdf", payloadCode, "@",
"LauSimFitMaster", payloadCode, "@",
"LauSimpleFitModel", payloadCode, "@",
"LauString", payloadCode, "@",
"LauSumPdf", payloadCode, "@",
"LauTextFileParser", payloadCode, "@",
"LauVetoes", payloadCode, "@",
"LauWeightedSumEffModel", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libLaura++",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libLaurapLpL_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libLaurapLpL_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libLaurapLpL() {
  TriggerDictionaryInitialization_libLaurapLpL_Impl();
}
