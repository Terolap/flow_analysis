// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME jcorranDict
#define R__NO_DEPRECATION

/*******************************************************************/
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#define G__DICTIONARY
#include "ROOT/RConfig.hxx"
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
#include "../../include/AliAnalysisAnaTwoMultiCorrelations.h"
#include "../../include/AliAnalysisPtVn.h"
#include "../../include/AliAnalysisSPCRun2.h"
#include "../../include/AliJAnalysisMultiplicityMeanPt.h"
#include "../../include/AliJBaseEventHeader.h"
#include "../../include/AliJBaseTrack.h"
#include "../../include/AliJFFlucAnalysis.h"
#include "../../include/AliJFFlucAnalysisTProfile.h"
#include "../../include/AliJHistManager.h"
#include "../../include/JTreeDataManager.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static TClass *AliAnalysisAnaTwoMultiCorrelations_Dictionary();
   static void AliAnalysisAnaTwoMultiCorrelations_TClassManip(TClass*);
   static void *new_AliAnalysisAnaTwoMultiCorrelations(void *p = nullptr);
   static void *newArray_AliAnalysisAnaTwoMultiCorrelations(Long_t size, void *p);
   static void delete_AliAnalysisAnaTwoMultiCorrelations(void *p);
   static void deleteArray_AliAnalysisAnaTwoMultiCorrelations(void *p);
   static void destruct_AliAnalysisAnaTwoMultiCorrelations(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::AliAnalysisAnaTwoMultiCorrelations*)
   {
      ::AliAnalysisAnaTwoMultiCorrelations *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::AliAnalysisAnaTwoMultiCorrelations));
      static ::ROOT::TGenericClassInfo 
         instance("AliAnalysisAnaTwoMultiCorrelations", "../../include/AliAnalysisAnaTwoMultiCorrelations.h", 26,
                  typeid(::AliAnalysisAnaTwoMultiCorrelations), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &AliAnalysisAnaTwoMultiCorrelations_Dictionary, isa_proxy, 0,
                  sizeof(::AliAnalysisAnaTwoMultiCorrelations) );
      instance.SetNew(&new_AliAnalysisAnaTwoMultiCorrelations);
      instance.SetNewArray(&newArray_AliAnalysisAnaTwoMultiCorrelations);
      instance.SetDelete(&delete_AliAnalysisAnaTwoMultiCorrelations);
      instance.SetDeleteArray(&deleteArray_AliAnalysisAnaTwoMultiCorrelations);
      instance.SetDestructor(&destruct_AliAnalysisAnaTwoMultiCorrelations);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::AliAnalysisAnaTwoMultiCorrelations*)
   {
      return GenerateInitInstanceLocal(static_cast<::AliAnalysisAnaTwoMultiCorrelations*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::AliAnalysisAnaTwoMultiCorrelations*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *AliAnalysisAnaTwoMultiCorrelations_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::AliAnalysisAnaTwoMultiCorrelations*>(nullptr))->GetClass();
      AliAnalysisAnaTwoMultiCorrelations_TClassManip(theClass);
   return theClass;
   }

   static void AliAnalysisAnaTwoMultiCorrelations_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_AliJBaseTrack(void *p = nullptr);
   static void *newArray_AliJBaseTrack(Long_t size, void *p);
   static void delete_AliJBaseTrack(void *p);
   static void deleteArray_AliJBaseTrack(void *p);
   static void destruct_AliJBaseTrack(void *p);
   static void streamer_AliJBaseTrack(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::AliJBaseTrack*)
   {
      ::AliJBaseTrack *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::AliJBaseTrack >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("AliJBaseTrack", ::AliJBaseTrack::Class_Version(), "../../include/AliJBaseTrack.h", 33,
                  typeid(::AliJBaseTrack), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::AliJBaseTrack::Dictionary, isa_proxy, 16,
                  sizeof(::AliJBaseTrack) );
      instance.SetNew(&new_AliJBaseTrack);
      instance.SetNewArray(&newArray_AliJBaseTrack);
      instance.SetDelete(&delete_AliJBaseTrack);
      instance.SetDeleteArray(&deleteArray_AliJBaseTrack);
      instance.SetDestructor(&destruct_AliJBaseTrack);
      instance.SetStreamerFunc(&streamer_AliJBaseTrack);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::AliJBaseTrack*)
   {
      return GenerateInitInstanceLocal(static_cast<::AliJBaseTrack*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::AliJBaseTrack*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *AliAnalysisPtVn_Dictionary();
   static void AliAnalysisPtVn_TClassManip(TClass*);
   static void *new_AliAnalysisPtVn(void *p = nullptr);
   static void *newArray_AliAnalysisPtVn(Long_t size, void *p);
   static void delete_AliAnalysisPtVn(void *p);
   static void deleteArray_AliAnalysisPtVn(void *p);
   static void destruct_AliAnalysisPtVn(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::AliAnalysisPtVn*)
   {
      ::AliAnalysisPtVn *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::AliAnalysisPtVn));
      static ::ROOT::TGenericClassInfo 
         instance("AliAnalysisPtVn", "../../include/AliAnalysisPtVn.h", 27,
                  typeid(::AliAnalysisPtVn), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &AliAnalysisPtVn_Dictionary, isa_proxy, 0,
                  sizeof(::AliAnalysisPtVn) );
      instance.SetNew(&new_AliAnalysisPtVn);
      instance.SetNewArray(&newArray_AliAnalysisPtVn);
      instance.SetDelete(&delete_AliAnalysisPtVn);
      instance.SetDeleteArray(&deleteArray_AliAnalysisPtVn);
      instance.SetDestructor(&destruct_AliAnalysisPtVn);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::AliAnalysisPtVn*)
   {
      return GenerateInitInstanceLocal(static_cast<::AliAnalysisPtVn*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::AliAnalysisPtVn*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *AliAnalysisPtVn_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::AliAnalysisPtVn*>(nullptr))->GetClass();
      AliAnalysisPtVn_TClassManip(theClass);
   return theClass;
   }

   static void AliAnalysisPtVn_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *AliAnalysisSPCRun2_Dictionary();
   static void AliAnalysisSPCRun2_TClassManip(TClass*);
   static void *new_AliAnalysisSPCRun2(void *p = nullptr);
   static void *newArray_AliAnalysisSPCRun2(Long_t size, void *p);
   static void delete_AliAnalysisSPCRun2(void *p);
   static void deleteArray_AliAnalysisSPCRun2(void *p);
   static void destruct_AliAnalysisSPCRun2(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::AliAnalysisSPCRun2*)
   {
      ::AliAnalysisSPCRun2 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::AliAnalysisSPCRun2));
      static ::ROOT::TGenericClassInfo 
         instance("AliAnalysisSPCRun2", "../../include/AliAnalysisSPCRun2.h", 26,
                  typeid(::AliAnalysisSPCRun2), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &AliAnalysisSPCRun2_Dictionary, isa_proxy, 0,
                  sizeof(::AliAnalysisSPCRun2) );
      instance.SetNew(&new_AliAnalysisSPCRun2);
      instance.SetNewArray(&newArray_AliAnalysisSPCRun2);
      instance.SetDelete(&delete_AliAnalysisSPCRun2);
      instance.SetDeleteArray(&deleteArray_AliAnalysisSPCRun2);
      instance.SetDestructor(&destruct_AliAnalysisSPCRun2);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::AliAnalysisSPCRun2*)
   {
      return GenerateInitInstanceLocal(static_cast<::AliAnalysisSPCRun2*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::AliAnalysisSPCRun2*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *AliAnalysisSPCRun2_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::AliAnalysisSPCRun2*>(nullptr))->GetClass();
      AliAnalysisSPCRun2_TClassManip(theClass);
   return theClass;
   }

   static void AliAnalysisSPCRun2_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_AliJAnalysisMultiplicityMeanPt(void *p = nullptr);
   static void *newArray_AliJAnalysisMultiplicityMeanPt(Long_t size, void *p);
   static void delete_AliJAnalysisMultiplicityMeanPt(void *p);
   static void deleteArray_AliJAnalysisMultiplicityMeanPt(void *p);
   static void destruct_AliJAnalysisMultiplicityMeanPt(void *p);
   static void streamer_AliJAnalysisMultiplicityMeanPt(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::AliJAnalysisMultiplicityMeanPt*)
   {
      ::AliJAnalysisMultiplicityMeanPt *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::AliJAnalysisMultiplicityMeanPt >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("AliJAnalysisMultiplicityMeanPt", ::AliJAnalysisMultiplicityMeanPt::Class_Version(), "../../include/AliJAnalysisMultiplicityMeanPt.h", 11,
                  typeid(::AliJAnalysisMultiplicityMeanPt), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::AliJAnalysisMultiplicityMeanPt::Dictionary, isa_proxy, 16,
                  sizeof(::AliJAnalysisMultiplicityMeanPt) );
      instance.SetNew(&new_AliJAnalysisMultiplicityMeanPt);
      instance.SetNewArray(&newArray_AliJAnalysisMultiplicityMeanPt);
      instance.SetDelete(&delete_AliJAnalysisMultiplicityMeanPt);
      instance.SetDeleteArray(&deleteArray_AliJAnalysisMultiplicityMeanPt);
      instance.SetDestructor(&destruct_AliJAnalysisMultiplicityMeanPt);
      instance.SetStreamerFunc(&streamer_AliJAnalysisMultiplicityMeanPt);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::AliJAnalysisMultiplicityMeanPt*)
   {
      return GenerateInitInstanceLocal(static_cast<::AliJAnalysisMultiplicityMeanPt*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::AliJAnalysisMultiplicityMeanPt*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_AliJBaseEventHeader(void *p = nullptr);
   static void *newArray_AliJBaseEventHeader(Long_t size, void *p);
   static void delete_AliJBaseEventHeader(void *p);
   static void deleteArray_AliJBaseEventHeader(void *p);
   static void destruct_AliJBaseEventHeader(void *p);
   static void streamer_AliJBaseEventHeader(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::AliJBaseEventHeader*)
   {
      ::AliJBaseEventHeader *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::AliJBaseEventHeader >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("AliJBaseEventHeader", ::AliJBaseEventHeader::Class_Version(), "../../include/AliJBaseEventHeader.h", 27,
                  typeid(::AliJBaseEventHeader), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::AliJBaseEventHeader::Dictionary, isa_proxy, 16,
                  sizeof(::AliJBaseEventHeader) );
      instance.SetNew(&new_AliJBaseEventHeader);
      instance.SetNewArray(&newArray_AliJBaseEventHeader);
      instance.SetDelete(&delete_AliJBaseEventHeader);
      instance.SetDeleteArray(&deleteArray_AliJBaseEventHeader);
      instance.SetDestructor(&destruct_AliJBaseEventHeader);
      instance.SetStreamerFunc(&streamer_AliJBaseEventHeader);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::AliJBaseEventHeader*)
   {
      return GenerateInitInstanceLocal(static_cast<::AliJBaseEventHeader*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::AliJBaseEventHeader*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *AliJHistManager_Dictionary();
   static void AliJHistManager_TClassManip(TClass*);
   static void delete_AliJHistManager(void *p);
   static void deleteArray_AliJHistManager(void *p);
   static void destruct_AliJHistManager(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::AliJHistManager*)
   {
      ::AliJHistManager *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::AliJHistManager));
      static ::ROOT::TGenericClassInfo 
         instance("AliJHistManager", "../../include/AliJHistManager.h", 386,
                  typeid(::AliJHistManager), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &AliJHistManager_Dictionary, isa_proxy, 0,
                  sizeof(::AliJHistManager) );
      instance.SetDelete(&delete_AliJHistManager);
      instance.SetDeleteArray(&deleteArray_AliJHistManager);
      instance.SetDestructor(&destruct_AliJHistManager);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::AliJHistManager*)
   {
      return GenerateInitInstanceLocal(static_cast<::AliJHistManager*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::AliJHistManager*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *AliJHistManager_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::AliJHistManager*>(nullptr))->GetClass();
      AliJHistManager_TClassManip(theClass);
   return theClass;
   }

   static void AliJHistManager_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *AliJFFlucAnalysis_Dictionary();
   static void AliJFFlucAnalysis_TClassManip(TClass*);
   static void *new_AliJFFlucAnalysis(void *p = nullptr);
   static void *newArray_AliJFFlucAnalysis(Long_t size, void *p);
   static void delete_AliJFFlucAnalysis(void *p);
   static void deleteArray_AliJFFlucAnalysis(void *p);
   static void destruct_AliJFFlucAnalysis(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::AliJFFlucAnalysis*)
   {
      ::AliJFFlucAnalysis *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::AliJFFlucAnalysis));
      static ::ROOT::TGenericClassInfo 
         instance("AliJFFlucAnalysis", "../../include/AliJFFlucAnalysis.h", 13,
                  typeid(::AliJFFlucAnalysis), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &AliJFFlucAnalysis_Dictionary, isa_proxy, 0,
                  sizeof(::AliJFFlucAnalysis) );
      instance.SetNew(&new_AliJFFlucAnalysis);
      instance.SetNewArray(&newArray_AliJFFlucAnalysis);
      instance.SetDelete(&delete_AliJFFlucAnalysis);
      instance.SetDeleteArray(&deleteArray_AliJFFlucAnalysis);
      instance.SetDestructor(&destruct_AliJFFlucAnalysis);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::AliJFFlucAnalysis*)
   {
      return GenerateInitInstanceLocal(static_cast<::AliJFFlucAnalysis*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::AliJFFlucAnalysis*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *AliJFFlucAnalysis_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::AliJFFlucAnalysis*>(nullptr))->GetClass();
      AliJFFlucAnalysis_TClassManip(theClass);
   return theClass;
   }

   static void AliJFFlucAnalysis_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *AliJFFlucAnalysisTProfile_Dictionary();
   static void AliJFFlucAnalysisTProfile_TClassManip(TClass*);
   static void *new_AliJFFlucAnalysisTProfile(void *p = nullptr);
   static void *newArray_AliJFFlucAnalysisTProfile(Long_t size, void *p);
   static void delete_AliJFFlucAnalysisTProfile(void *p);
   static void deleteArray_AliJFFlucAnalysisTProfile(void *p);
   static void destruct_AliJFFlucAnalysisTProfile(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::AliJFFlucAnalysisTProfile*)
   {
      ::AliJFFlucAnalysisTProfile *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::AliJFFlucAnalysisTProfile));
      static ::ROOT::TGenericClassInfo 
         instance("AliJFFlucAnalysisTProfile", "../../include/AliJFFlucAnalysisTProfile.h", 12,
                  typeid(::AliJFFlucAnalysisTProfile), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &AliJFFlucAnalysisTProfile_Dictionary, isa_proxy, 0,
                  sizeof(::AliJFFlucAnalysisTProfile) );
      instance.SetNew(&new_AliJFFlucAnalysisTProfile);
      instance.SetNewArray(&newArray_AliJFFlucAnalysisTProfile);
      instance.SetDelete(&delete_AliJFFlucAnalysisTProfile);
      instance.SetDeleteArray(&deleteArray_AliJFFlucAnalysisTProfile);
      instance.SetDestructor(&destruct_AliJFFlucAnalysisTProfile);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::AliJFFlucAnalysisTProfile*)
   {
      return GenerateInitInstanceLocal(static_cast<::AliJFFlucAnalysisTProfile*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::AliJFFlucAnalysisTProfile*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *AliJFFlucAnalysisTProfile_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::AliJFFlucAnalysisTProfile*>(nullptr))->GetClass();
      AliJFFlucAnalysisTProfile_TClassManip(theClass);
   return theClass;
   }

   static void AliJFFlucAnalysisTProfile_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *JTreeDataManager_Dictionary();
   static void JTreeDataManager_TClassManip(TClass*);
   static void *new_JTreeDataManager(void *p = nullptr);
   static void *newArray_JTreeDataManager(Long_t size, void *p);
   static void delete_JTreeDataManager(void *p);
   static void deleteArray_JTreeDataManager(void *p);
   static void destruct_JTreeDataManager(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::JTreeDataManager*)
   {
      ::JTreeDataManager *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::JTreeDataManager));
      static ::ROOT::TGenericClassInfo 
         instance("JTreeDataManager", "../../include/JTreeDataManager.h", 36,
                  typeid(::JTreeDataManager), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &JTreeDataManager_Dictionary, isa_proxy, 0,
                  sizeof(::JTreeDataManager) );
      instance.SetNew(&new_JTreeDataManager);
      instance.SetNewArray(&newArray_JTreeDataManager);
      instance.SetDelete(&delete_JTreeDataManager);
      instance.SetDeleteArray(&deleteArray_JTreeDataManager);
      instance.SetDestructor(&destruct_JTreeDataManager);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::JTreeDataManager*)
   {
      return GenerateInitInstanceLocal(static_cast<::JTreeDataManager*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::JTreeDataManager*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *JTreeDataManager_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::JTreeDataManager*>(nullptr))->GetClass();
      JTreeDataManager_TClassManip(theClass);
   return theClass;
   }

   static void JTreeDataManager_TClassManip(TClass* ){
   }

} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr AliJBaseTrack::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *AliJBaseTrack::Class_Name()
{
   return "AliJBaseTrack";
}

//______________________________________________________________________________
const char *AliJBaseTrack::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::AliJBaseTrack*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int AliJBaseTrack::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::AliJBaseTrack*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *AliJBaseTrack::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::AliJBaseTrack*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *AliJBaseTrack::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::AliJBaseTrack*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr AliJAnalysisMultiplicityMeanPt::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *AliJAnalysisMultiplicityMeanPt::Class_Name()
{
   return "AliJAnalysisMultiplicityMeanPt";
}

//______________________________________________________________________________
const char *AliJAnalysisMultiplicityMeanPt::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::AliJAnalysisMultiplicityMeanPt*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int AliJAnalysisMultiplicityMeanPt::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::AliJAnalysisMultiplicityMeanPt*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *AliJAnalysisMultiplicityMeanPt::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::AliJAnalysisMultiplicityMeanPt*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *AliJAnalysisMultiplicityMeanPt::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::AliJAnalysisMultiplicityMeanPt*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr AliJBaseEventHeader::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *AliJBaseEventHeader::Class_Name()
{
   return "AliJBaseEventHeader";
}

//______________________________________________________________________________
const char *AliJBaseEventHeader::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::AliJBaseEventHeader*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int AliJBaseEventHeader::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::AliJBaseEventHeader*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *AliJBaseEventHeader::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::AliJBaseEventHeader*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *AliJBaseEventHeader::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::AliJBaseEventHeader*)nullptr)->GetClass(); }
   return fgIsA;
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_AliAnalysisAnaTwoMultiCorrelations(void *p) {
      return  p ? new(p) ::AliAnalysisAnaTwoMultiCorrelations : new ::AliAnalysisAnaTwoMultiCorrelations;
   }
   static void *newArray_AliAnalysisAnaTwoMultiCorrelations(Long_t nElements, void *p) {
      return p ? new(p) ::AliAnalysisAnaTwoMultiCorrelations[nElements] : new ::AliAnalysisAnaTwoMultiCorrelations[nElements];
   }
   // Wrapper around operator delete
   static void delete_AliAnalysisAnaTwoMultiCorrelations(void *p) {
      delete (static_cast<::AliAnalysisAnaTwoMultiCorrelations*>(p));
   }
   static void deleteArray_AliAnalysisAnaTwoMultiCorrelations(void *p) {
      delete [] (static_cast<::AliAnalysisAnaTwoMultiCorrelations*>(p));
   }
   static void destruct_AliAnalysisAnaTwoMultiCorrelations(void *p) {
      typedef ::AliAnalysisAnaTwoMultiCorrelations current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::AliAnalysisAnaTwoMultiCorrelations

//______________________________________________________________________________
void AliJBaseTrack::Streamer(TBuffer &R__b)
{
   // Stream an object of class AliJBaseTrack.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TLorentzVector::Streamer(R__b);
      R__b >> fID;
      R__b >> fLabel;
      R__b >> fParticleType;
      R__b >> fCharge;
      R__b >> fStatus;
      R__b >> fFlags;
      R__b.CheckByteCount(R__s, R__c, AliJBaseTrack::IsA());
   } else {
      R__c = R__b.WriteVersion(AliJBaseTrack::IsA(), kTRUE);
      TLorentzVector::Streamer(R__b);
      R__b << fID;
      R__b << fLabel;
      R__b << fParticleType;
      R__b << fCharge;
      R__b << fStatus;
      R__b << fFlags;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_AliJBaseTrack(void *p) {
      return  p ? new(p) ::AliJBaseTrack : new ::AliJBaseTrack;
   }
   static void *newArray_AliJBaseTrack(Long_t nElements, void *p) {
      return p ? new(p) ::AliJBaseTrack[nElements] : new ::AliJBaseTrack[nElements];
   }
   // Wrapper around operator delete
   static void delete_AliJBaseTrack(void *p) {
      delete (static_cast<::AliJBaseTrack*>(p));
   }
   static void deleteArray_AliJBaseTrack(void *p) {
      delete [] (static_cast<::AliJBaseTrack*>(p));
   }
   static void destruct_AliJBaseTrack(void *p) {
      typedef ::AliJBaseTrack current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_AliJBaseTrack(TBuffer &buf, void *obj) {
      ((::AliJBaseTrack*)obj)->::AliJBaseTrack::Streamer(buf);
   }
} // end of namespace ROOT for class ::AliJBaseTrack

namespace ROOT {
   // Wrappers around operator new
   static void *new_AliAnalysisPtVn(void *p) {
      return  p ? new(p) ::AliAnalysisPtVn : new ::AliAnalysisPtVn;
   }
   static void *newArray_AliAnalysisPtVn(Long_t nElements, void *p) {
      return p ? new(p) ::AliAnalysisPtVn[nElements] : new ::AliAnalysisPtVn[nElements];
   }
   // Wrapper around operator delete
   static void delete_AliAnalysisPtVn(void *p) {
      delete (static_cast<::AliAnalysisPtVn*>(p));
   }
   static void deleteArray_AliAnalysisPtVn(void *p) {
      delete [] (static_cast<::AliAnalysisPtVn*>(p));
   }
   static void destruct_AliAnalysisPtVn(void *p) {
      typedef ::AliAnalysisPtVn current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::AliAnalysisPtVn

namespace ROOT {
   // Wrappers around operator new
   static void *new_AliAnalysisSPCRun2(void *p) {
      return  p ? new(p) ::AliAnalysisSPCRun2 : new ::AliAnalysisSPCRun2;
   }
   static void *newArray_AliAnalysisSPCRun2(Long_t nElements, void *p) {
      return p ? new(p) ::AliAnalysisSPCRun2[nElements] : new ::AliAnalysisSPCRun2[nElements];
   }
   // Wrapper around operator delete
   static void delete_AliAnalysisSPCRun2(void *p) {
      delete (static_cast<::AliAnalysisSPCRun2*>(p));
   }
   static void deleteArray_AliAnalysisSPCRun2(void *p) {
      delete [] (static_cast<::AliAnalysisSPCRun2*>(p));
   }
   static void destruct_AliAnalysisSPCRun2(void *p) {
      typedef ::AliAnalysisSPCRun2 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::AliAnalysisSPCRun2

//______________________________________________________________________________
void AliJAnalysisMultiplicityMeanPt::Streamer(TBuffer &R__b)
{
   // Stream an object of class AliJAnalysisMultiplicityMeanPt.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TObject::Streamer(R__b);
      fName.Streamer(R__b);
      {
         vector<double> &R__stl =  fCentBins;
         R__stl.clear();
         int R__i, R__n;
         R__b >> R__n;
         R__stl.reserve(R__n);
         for (R__i = 0; R__i < R__n; R__i++) {
            double R__t;
            R__b >> R__t;
            R__stl.push_back(R__t);
         }
      }
      {
         map<int,string> &R__stl =  fPidNames;
         R__stl.clear();
         int R__i, R__n;
         R__b >> R__n;
         for (R__i = 0; R__i < R__n; R__i++) {
            int R__t;
            R__b >> R__t;
            string R__t2;
            {TString R__str;
             R__str.Streamer(R__b);
             R__t2 = R__str.Data();}
            typedef int Value_t;
            std::pair<Value_t const, class std::basic_string<char> > R__t3(R__t,R__t2);
            R__stl.insert(R__t3);
         }
      }
      {
         map<int,vector<int> > &R__stl =  fParticleCounts;
         R__stl.clear();
         TClass *R__tcl2 = TBuffer::GetClass(typeid(class std::vector<int>));
         if (R__tcl2==0) {
            Error("fParticleCounts streamer","Missing the TClass object for class std::vector<int>!");
            return;
         }
         int R__i, R__n;
         R__b >> R__n;
         for (R__i = 0; R__i < R__n; R__i++) {
            int R__t;
            R__b >> R__t;
            vector<int> R__t2;
            R__b.StreamObject(&R__t2,R__tcl2);
            typedef int Value_t;
            std::pair<Value_t const, class std::vector<int> > R__t3(R__t,R__t2);
            R__stl.insert(R__t3);
         }
      }
      {
         map<int,vector<double> > &R__stl =  fMeanPtSums;
         R__stl.clear();
         TClass *R__tcl2 = TBuffer::GetClass(typeid(class std::vector<double>));
         if (R__tcl2==0) {
            Error("fMeanPtSums streamer","Missing the TClass object for class std::vector<double>!");
            return;
         }
         int R__i, R__n;
         R__b >> R__n;
         for (R__i = 0; R__i < R__n; R__i++) {
            int R__t;
            R__b >> R__t;
            vector<double> R__t2;
            R__b.StreamObject(&R__t2,R__tcl2);
            typedef int Value_t;
            std::pair<Value_t const, class std::vector<double> > R__t3(R__t,R__t2);
            R__stl.insert(R__t3);
         }
      }
      {
         map<int,vector<int> > &R__stl =  fParticleCountsRap;
         R__stl.clear();
         TClass *R__tcl2 = TBuffer::GetClass(typeid(class std::vector<int>));
         if (R__tcl2==0) {
            Error("fParticleCountsRap streamer","Missing the TClass object for class std::vector<int>!");
            return;
         }
         int R__i, R__n;
         R__b >> R__n;
         for (R__i = 0; R__i < R__n; R__i++) {
            int R__t;
            R__b >> R__t;
            vector<int> R__t2;
            R__b.StreamObject(&R__t2,R__tcl2);
            typedef int Value_t;
            std::pair<Value_t const, class std::vector<int> > R__t3(R__t,R__t2);
            R__stl.insert(R__t3);
         }
      }
      {
         vector<int> &R__stl =  fEventCounts;
         R__stl.clear();
         int R__i, R__n;
         R__b >> R__n;
         R__stl.reserve(R__n);
         for (R__i = 0; R__i < R__n; R__i++) {
            int R__t;
            R__b >> R__t;
            R__stl.push_back(R__t);
         }
      }
      {
         map<string,TGraphErrors*> &R__stl =  fMultGraphs;
         R__stl.clear();
         TClass *R__tcl2 = TBuffer::GetClass(typeid(class TGraphErrors *));
         if (R__tcl2==0) {
            Error("fMultGraphs streamer","Missing the TClass object for class TGraphErrors *!");
            return;
         }
         int R__i, R__n;
         R__b >> R__n;
         for (R__i = 0; R__i < R__n; R__i++) {
            string R__t;
            {TString R__str;
             R__str.Streamer(R__b);
             R__t = R__str.Data();}
            TGraphErrors* R__t2;
            R__t2 = (TGraphErrors*)R__b.ReadObjectAny(R__tcl2);
            typedef class std::basic_string<char> Value_t;
            std::pair<Value_t const, class TGraphErrors * > R__t3(R__t,R__t2);
            R__stl.insert(R__t3);
         }
      }
      {
         map<string,TGraphErrors*> &R__stl =  fMultRapGraphs;
         R__stl.clear();
         TClass *R__tcl2 = TBuffer::GetClass(typeid(class TGraphErrors *));
         if (R__tcl2==0) {
            Error("fMultRapGraphs streamer","Missing the TClass object for class TGraphErrors *!");
            return;
         }
         int R__i, R__n;
         R__b >> R__n;
         for (R__i = 0; R__i < R__n; R__i++) {
            string R__t;
            {TString R__str;
             R__str.Streamer(R__b);
             R__t = R__str.Data();}
            TGraphErrors* R__t2;
            R__t2 = (TGraphErrors*)R__b.ReadObjectAny(R__tcl2);
            typedef class std::basic_string<char> Value_t;
            std::pair<Value_t const, class TGraphErrors * > R__t3(R__t,R__t2);
            R__stl.insert(R__t3);
         }
      }
      {
         map<string,TGraphErrors*> &R__stl =  fMeanPtGraphs;
         R__stl.clear();
         TClass *R__tcl2 = TBuffer::GetClass(typeid(class TGraphErrors *));
         if (R__tcl2==0) {
            Error("fMeanPtGraphs streamer","Missing the TClass object for class TGraphErrors *!");
            return;
         }
         int R__i, R__n;
         R__b >> R__n;
         for (R__i = 0; R__i < R__n; R__i++) {
            string R__t;
            {TString R__str;
             R__str.Streamer(R__b);
             R__t = R__str.Data();}
            TGraphErrors* R__t2;
            R__t2 = (TGraphErrors*)R__b.ReadObjectAny(R__tcl2);
            typedef class std::basic_string<char> Value_t;
            std::pair<Value_t const, class TGraphErrors * > R__t3(R__t,R__t2);
            R__stl.insert(R__t3);
         }
      }
      R__b.CheckByteCount(R__s, R__c, AliJAnalysisMultiplicityMeanPt::IsA());
   } else {
      R__c = R__b.WriteVersion(AliJAnalysisMultiplicityMeanPt::IsA(), kTRUE);
      TObject::Streamer(R__b);
      fName.Streamer(R__b);
      {
         vector<double> &R__stl =  fCentBins;
         int R__n=int(R__stl.size());
         R__b << R__n;
         if(R__n) {
            vector<double>::iterator R__k;
            for (R__k = R__stl.begin(); R__k != R__stl.end(); ++R__k) {
            R__b << (*R__k);
            }
         }
      }
      {
         map<int,string> &R__stl =  fPidNames;
         int R__n=int(R__stl.size());
         R__b << R__n;
         if(R__n) {
            map<int,string>::iterator R__k;
            for (R__k = R__stl.begin(); R__k != R__stl.end(); ++R__k) {
            R__b << ((*R__k).first );
            {TString R__str(((*R__k).second).c_str());
             R__str.Streamer(R__b);};
            }
         }
      }
      {
         map<int,vector<int> > &R__stl =  fParticleCounts;
         int R__n=int(R__stl.size());
         R__b << R__n;
         if(R__n) {
         TClass *R__tcl2 = TBuffer::GetClass(typeid(class std::vector<int>));
         if (R__tcl2==0) {
            Error("fParticleCountsstreamer","Missing the TClass object for class std::vector<int>!");
            return;
         }
            map<int,vector<int> >::iterator R__k;
            for (R__k = R__stl.begin(); R__k != R__stl.end(); ++R__k) {
            R__b << ((*R__k).first );
            R__b.StreamObject((vector<int>*)&((*R__k).second),R__tcl2);
            }
         }
      }
      {
         map<int,vector<double> > &R__stl =  fMeanPtSums;
         int R__n=int(R__stl.size());
         R__b << R__n;
         if(R__n) {
         TClass *R__tcl2 = TBuffer::GetClass(typeid(class std::vector<double>));
         if (R__tcl2==0) {
            Error("fMeanPtSumsstreamer","Missing the TClass object for class std::vector<double>!");
            return;
         }
            map<int,vector<double> >::iterator R__k;
            for (R__k = R__stl.begin(); R__k != R__stl.end(); ++R__k) {
            R__b << ((*R__k).first );
            R__b.StreamObject((vector<double>*)&((*R__k).second),R__tcl2);
            }
         }
      }
      {
         map<int,vector<int> > &R__stl =  fParticleCountsRap;
         int R__n=int(R__stl.size());
         R__b << R__n;
         if(R__n) {
         TClass *R__tcl2 = TBuffer::GetClass(typeid(class std::vector<int>));
         if (R__tcl2==0) {
            Error("fParticleCountsRapstreamer","Missing the TClass object for class std::vector<int>!");
            return;
         }
            map<int,vector<int> >::iterator R__k;
            for (R__k = R__stl.begin(); R__k != R__stl.end(); ++R__k) {
            R__b << ((*R__k).first );
            R__b.StreamObject((vector<int>*)&((*R__k).second),R__tcl2);
            }
         }
      }
      {
         vector<int> &R__stl =  fEventCounts;
         int R__n=int(R__stl.size());
         R__b << R__n;
         if(R__n) {
            vector<int>::iterator R__k;
            for (R__k = R__stl.begin(); R__k != R__stl.end(); ++R__k) {
            R__b << (*R__k);
            }
         }
      }
      {
         map<string,TGraphErrors*> &R__stl =  fMultGraphs;
         int R__n=int(R__stl.size());
         R__b << R__n;
         if(R__n) {
            map<string,TGraphErrors*>::iterator R__k;
            for (R__k = R__stl.begin(); R__k != R__stl.end(); ++R__k) {
            {TString R__str(((*R__k).first ).c_str());
             R__str.Streamer(R__b);};
            R__b << ((*R__k).second);
            }
         }
      }
      {
         map<string,TGraphErrors*> &R__stl =  fMultRapGraphs;
         int R__n=int(R__stl.size());
         R__b << R__n;
         if(R__n) {
            map<string,TGraphErrors*>::iterator R__k;
            for (R__k = R__stl.begin(); R__k != R__stl.end(); ++R__k) {
            {TString R__str(((*R__k).first ).c_str());
             R__str.Streamer(R__b);};
            R__b << ((*R__k).second);
            }
         }
      }
      {
         map<string,TGraphErrors*> &R__stl =  fMeanPtGraphs;
         int R__n=int(R__stl.size());
         R__b << R__n;
         if(R__n) {
            map<string,TGraphErrors*>::iterator R__k;
            for (R__k = R__stl.begin(); R__k != R__stl.end(); ++R__k) {
            {TString R__str(((*R__k).first ).c_str());
             R__str.Streamer(R__b);};
            R__b << ((*R__k).second);
            }
         }
      }
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_AliJAnalysisMultiplicityMeanPt(void *p) {
      return  p ? new(p) ::AliJAnalysisMultiplicityMeanPt : new ::AliJAnalysisMultiplicityMeanPt;
   }
   static void *newArray_AliJAnalysisMultiplicityMeanPt(Long_t nElements, void *p) {
      return p ? new(p) ::AliJAnalysisMultiplicityMeanPt[nElements] : new ::AliJAnalysisMultiplicityMeanPt[nElements];
   }
   // Wrapper around operator delete
   static void delete_AliJAnalysisMultiplicityMeanPt(void *p) {
      delete (static_cast<::AliJAnalysisMultiplicityMeanPt*>(p));
   }
   static void deleteArray_AliJAnalysisMultiplicityMeanPt(void *p) {
      delete [] (static_cast<::AliJAnalysisMultiplicityMeanPt*>(p));
   }
   static void destruct_AliJAnalysisMultiplicityMeanPt(void *p) {
      typedef ::AliJAnalysisMultiplicityMeanPt current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_AliJAnalysisMultiplicityMeanPt(TBuffer &buf, void *obj) {
      ((::AliJAnalysisMultiplicityMeanPt*)obj)->::AliJAnalysisMultiplicityMeanPt::Streamer(buf);
   }
} // end of namespace ROOT for class ::AliJAnalysisMultiplicityMeanPt

//______________________________________________________________________________
void AliJBaseEventHeader::Streamer(TBuffer &R__b)
{
   // Stream an object of class AliJBaseEventHeader.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TNamed::Streamer(R__b);
      R__b >> fEventID;
      {float R_Dummy; R__b >> R_Dummy; fCentrality=Double32_t(R_Dummy);}
      {float R_Dummy; R__b >> R_Dummy; fVtxX=Double32_t(R_Dummy);}
      {float R_Dummy; R__b >> R_Dummy; fVtxY=Double32_t(R_Dummy);}
      {float R_Dummy; R__b >> R_Dummy; fVtxZ=Double32_t(R_Dummy);}
      {float R_Dummy; R__b >> R_Dummy; fVtxZErr=Double32_t(R_Dummy);}
      {float R_Dummy; R__b >> R_Dummy; fVtxMCX=Double32_t(R_Dummy);}
      {float R_Dummy; R__b >> R_Dummy; fVtxMCY=Double32_t(R_Dummy);}
      {float R_Dummy; R__b >> R_Dummy; fVtxMCZ=Double32_t(R_Dummy);}
      R__b.CheckByteCount(R__s, R__c, AliJBaseEventHeader::IsA());
   } else {
      R__c = R__b.WriteVersion(AliJBaseEventHeader::IsA(), kTRUE);
      TNamed::Streamer(R__b);
      R__b << fEventID;
      R__b << float(fCentrality);
      R__b << float(fVtxX);
      R__b << float(fVtxY);
      R__b << float(fVtxZ);
      R__b << float(fVtxZErr);
      R__b << float(fVtxMCX);
      R__b << float(fVtxMCY);
      R__b << float(fVtxMCZ);
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_AliJBaseEventHeader(void *p) {
      return  p ? new(p) ::AliJBaseEventHeader : new ::AliJBaseEventHeader;
   }
   static void *newArray_AliJBaseEventHeader(Long_t nElements, void *p) {
      return p ? new(p) ::AliJBaseEventHeader[nElements] : new ::AliJBaseEventHeader[nElements];
   }
   // Wrapper around operator delete
   static void delete_AliJBaseEventHeader(void *p) {
      delete (static_cast<::AliJBaseEventHeader*>(p));
   }
   static void deleteArray_AliJBaseEventHeader(void *p) {
      delete [] (static_cast<::AliJBaseEventHeader*>(p));
   }
   static void destruct_AliJBaseEventHeader(void *p) {
      typedef ::AliJBaseEventHeader current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_AliJBaseEventHeader(TBuffer &buf, void *obj) {
      ((::AliJBaseEventHeader*)obj)->::AliJBaseEventHeader::Streamer(buf);
   }
} // end of namespace ROOT for class ::AliJBaseEventHeader

namespace ROOT {
   // Wrapper around operator delete
   static void delete_AliJHistManager(void *p) {
      delete (static_cast<::AliJHistManager*>(p));
   }
   static void deleteArray_AliJHistManager(void *p) {
      delete [] (static_cast<::AliJHistManager*>(p));
   }
   static void destruct_AliJHistManager(void *p) {
      typedef ::AliJHistManager current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::AliJHistManager

namespace ROOT {
   // Wrappers around operator new
   static void *new_AliJFFlucAnalysis(void *p) {
      return  p ? new(p) ::AliJFFlucAnalysis : new ::AliJFFlucAnalysis;
   }
   static void *newArray_AliJFFlucAnalysis(Long_t nElements, void *p) {
      return p ? new(p) ::AliJFFlucAnalysis[nElements] : new ::AliJFFlucAnalysis[nElements];
   }
   // Wrapper around operator delete
   static void delete_AliJFFlucAnalysis(void *p) {
      delete (static_cast<::AliJFFlucAnalysis*>(p));
   }
   static void deleteArray_AliJFFlucAnalysis(void *p) {
      delete [] (static_cast<::AliJFFlucAnalysis*>(p));
   }
   static void destruct_AliJFFlucAnalysis(void *p) {
      typedef ::AliJFFlucAnalysis current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::AliJFFlucAnalysis

namespace ROOT {
   // Wrappers around operator new
   static void *new_AliJFFlucAnalysisTProfile(void *p) {
      return  p ? new(p) ::AliJFFlucAnalysisTProfile : new ::AliJFFlucAnalysisTProfile;
   }
   static void *newArray_AliJFFlucAnalysisTProfile(Long_t nElements, void *p) {
      return p ? new(p) ::AliJFFlucAnalysisTProfile[nElements] : new ::AliJFFlucAnalysisTProfile[nElements];
   }
   // Wrapper around operator delete
   static void delete_AliJFFlucAnalysisTProfile(void *p) {
      delete (static_cast<::AliJFFlucAnalysisTProfile*>(p));
   }
   static void deleteArray_AliJFFlucAnalysisTProfile(void *p) {
      delete [] (static_cast<::AliJFFlucAnalysisTProfile*>(p));
   }
   static void destruct_AliJFFlucAnalysisTProfile(void *p) {
      typedef ::AliJFFlucAnalysisTProfile current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::AliJFFlucAnalysisTProfile

namespace ROOT {
   // Wrappers around operator new
   static void *new_JTreeDataManager(void *p) {
      return  p ? new(p) ::JTreeDataManager : new ::JTreeDataManager;
   }
   static void *newArray_JTreeDataManager(Long_t nElements, void *p) {
      return p ? new(p) ::JTreeDataManager[nElements] : new ::JTreeDataManager[nElements];
   }
   // Wrapper around operator delete
   static void delete_JTreeDataManager(void *p) {
      delete (static_cast<::JTreeDataManager*>(p));
   }
   static void deleteArray_JTreeDataManager(void *p) {
      delete [] (static_cast<::JTreeDataManager*>(p));
   }
   static void destruct_JTreeDataManager(void *p) {
      typedef ::JTreeDataManager current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::JTreeDataManager

namespace ROOT {
   static TClass *vectorlEintgR_Dictionary();
   static void vectorlEintgR_TClassManip(TClass*);
   static void *new_vectorlEintgR(void *p = nullptr);
   static void *newArray_vectorlEintgR(Long_t size, void *p);
   static void delete_vectorlEintgR(void *p);
   static void deleteArray_vectorlEintgR(void *p);
   static void destruct_vectorlEintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<int>*)
   {
      vector<int> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<int>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<int>", -2, "vector", 389,
                  typeid(vector<int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEintgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<int>) );
      instance.SetNew(&new_vectorlEintgR);
      instance.SetNewArray(&newArray_vectorlEintgR);
      instance.SetDelete(&delete_vectorlEintgR);
      instance.SetDeleteArray(&deleteArray_vectorlEintgR);
      instance.SetDestructor(&destruct_vectorlEintgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<int> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<int>","std::vector<int, std::allocator<int> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<int>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<int>*>(nullptr))->GetClass();
      vectorlEintgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEintgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<int> : new vector<int>;
   }
   static void *newArray_vectorlEintgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<int>[nElements] : new vector<int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEintgR(void *p) {
      delete (static_cast<vector<int>*>(p));
   }
   static void deleteArray_vectorlEintgR(void *p) {
      delete [] (static_cast<vector<int>*>(p));
   }
   static void destruct_vectorlEintgR(void *p) {
      typedef vector<int> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<int>

namespace ROOT {
   static TClass *vectorlEdoublegR_Dictionary();
   static void vectorlEdoublegR_TClassManip(TClass*);
   static void *new_vectorlEdoublegR(void *p = nullptr);
   static void *newArray_vectorlEdoublegR(Long_t size, void *p);
   static void delete_vectorlEdoublegR(void *p);
   static void deleteArray_vectorlEdoublegR(void *p);
   static void destruct_vectorlEdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<double>*)
   {
      vector<double> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<double>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<double>", -2, "vector", 389,
                  typeid(vector<double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEdoublegR_Dictionary, isa_proxy, 0,
                  sizeof(vector<double>) );
      instance.SetNew(&new_vectorlEdoublegR);
      instance.SetNewArray(&newArray_vectorlEdoublegR);
      instance.SetDelete(&delete_vectorlEdoublegR);
      instance.SetDeleteArray(&deleteArray_vectorlEdoublegR);
      instance.SetDestructor(&destruct_vectorlEdoublegR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<double> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<double>","std::vector<double, std::allocator<double> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<double>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<double>*>(nullptr))->GetClass();
      vectorlEdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEdoublegR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<double> : new vector<double>;
   }
   static void *newArray_vectorlEdoublegR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<double>[nElements] : new vector<double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEdoublegR(void *p) {
      delete (static_cast<vector<double>*>(p));
   }
   static void deleteArray_vectorlEdoublegR(void *p) {
      delete [] (static_cast<vector<double>*>(p));
   }
   static void destruct_vectorlEdoublegR(void *p) {
      typedef vector<double> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<double>

namespace ROOT {
   static TClass *maplEstringcOTGraphErrorsmUgR_Dictionary();
   static void maplEstringcOTGraphErrorsmUgR_TClassManip(TClass*);
   static void *new_maplEstringcOTGraphErrorsmUgR(void *p = nullptr);
   static void *newArray_maplEstringcOTGraphErrorsmUgR(Long_t size, void *p);
   static void delete_maplEstringcOTGraphErrorsmUgR(void *p);
   static void deleteArray_maplEstringcOTGraphErrorsmUgR(void *p);
   static void destruct_maplEstringcOTGraphErrorsmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<string,TGraphErrors*>*)
   {
      map<string,TGraphErrors*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<string,TGraphErrors*>));
      static ::ROOT::TGenericClassInfo 
         instance("map<string,TGraphErrors*>", -2, "map", 100,
                  typeid(map<string,TGraphErrors*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEstringcOTGraphErrorsmUgR_Dictionary, isa_proxy, 0,
                  sizeof(map<string,TGraphErrors*>) );
      instance.SetNew(&new_maplEstringcOTGraphErrorsmUgR);
      instance.SetNewArray(&newArray_maplEstringcOTGraphErrorsmUgR);
      instance.SetDelete(&delete_maplEstringcOTGraphErrorsmUgR);
      instance.SetDeleteArray(&deleteArray_maplEstringcOTGraphErrorsmUgR);
      instance.SetDestructor(&destruct_maplEstringcOTGraphErrorsmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<string,TGraphErrors*> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("map<string,TGraphErrors*>","std::map<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, TGraphErrors*, std::less<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >, std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const, TGraphErrors*> > >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const map<string,TGraphErrors*>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEstringcOTGraphErrorsmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const map<string,TGraphErrors*>*>(nullptr))->GetClass();
      maplEstringcOTGraphErrorsmUgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEstringcOTGraphErrorsmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEstringcOTGraphErrorsmUgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<string,TGraphErrors*> : new map<string,TGraphErrors*>;
   }
   static void *newArray_maplEstringcOTGraphErrorsmUgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<string,TGraphErrors*>[nElements] : new map<string,TGraphErrors*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEstringcOTGraphErrorsmUgR(void *p) {
      delete (static_cast<map<string,TGraphErrors*>*>(p));
   }
   static void deleteArray_maplEstringcOTGraphErrorsmUgR(void *p) {
      delete [] (static_cast<map<string,TGraphErrors*>*>(p));
   }
   static void destruct_maplEstringcOTGraphErrorsmUgR(void *p) {
      typedef map<string,TGraphErrors*> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class map<string,TGraphErrors*>

namespace ROOT {
   static TClass *maplEintcOvectorlEintgRsPgR_Dictionary();
   static void maplEintcOvectorlEintgRsPgR_TClassManip(TClass*);
   static void *new_maplEintcOvectorlEintgRsPgR(void *p = nullptr);
   static void *newArray_maplEintcOvectorlEintgRsPgR(Long_t size, void *p);
   static void delete_maplEintcOvectorlEintgRsPgR(void *p);
   static void deleteArray_maplEintcOvectorlEintgRsPgR(void *p);
   static void destruct_maplEintcOvectorlEintgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<int,vector<int> >*)
   {
      map<int,vector<int> > *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<int,vector<int> >));
      static ::ROOT::TGenericClassInfo 
         instance("map<int,vector<int> >", -2, "map", 100,
                  typeid(map<int,vector<int> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEintcOvectorlEintgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(map<int,vector<int> >) );
      instance.SetNew(&new_maplEintcOvectorlEintgRsPgR);
      instance.SetNewArray(&newArray_maplEintcOvectorlEintgRsPgR);
      instance.SetDelete(&delete_maplEintcOvectorlEintgRsPgR);
      instance.SetDeleteArray(&deleteArray_maplEintcOvectorlEintgRsPgR);
      instance.SetDestructor(&destruct_maplEintcOvectorlEintgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<int,vector<int> > >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("map<int,vector<int> >","std::map<int, std::vector<int, std::allocator<int> >, std::less<int>, std::allocator<std::pair<int const, std::vector<int, std::allocator<int> > > > >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const map<int,vector<int> >*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEintcOvectorlEintgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const map<int,vector<int> >*>(nullptr))->GetClass();
      maplEintcOvectorlEintgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEintcOvectorlEintgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEintcOvectorlEintgRsPgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<int,vector<int> > : new map<int,vector<int> >;
   }
   static void *newArray_maplEintcOvectorlEintgRsPgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<int,vector<int> >[nElements] : new map<int,vector<int> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEintcOvectorlEintgRsPgR(void *p) {
      delete (static_cast<map<int,vector<int> >*>(p));
   }
   static void deleteArray_maplEintcOvectorlEintgRsPgR(void *p) {
      delete [] (static_cast<map<int,vector<int> >*>(p));
   }
   static void destruct_maplEintcOvectorlEintgRsPgR(void *p) {
      typedef map<int,vector<int> > current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class map<int,vector<int> >

namespace ROOT {
   static TClass *maplEintcOvectorlEdoublegRsPgR_Dictionary();
   static void maplEintcOvectorlEdoublegRsPgR_TClassManip(TClass*);
   static void *new_maplEintcOvectorlEdoublegRsPgR(void *p = nullptr);
   static void *newArray_maplEintcOvectorlEdoublegRsPgR(Long_t size, void *p);
   static void delete_maplEintcOvectorlEdoublegRsPgR(void *p);
   static void deleteArray_maplEintcOvectorlEdoublegRsPgR(void *p);
   static void destruct_maplEintcOvectorlEdoublegRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<int,vector<double> >*)
   {
      map<int,vector<double> > *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<int,vector<double> >));
      static ::ROOT::TGenericClassInfo 
         instance("map<int,vector<double> >", -2, "map", 100,
                  typeid(map<int,vector<double> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEintcOvectorlEdoublegRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(map<int,vector<double> >) );
      instance.SetNew(&new_maplEintcOvectorlEdoublegRsPgR);
      instance.SetNewArray(&newArray_maplEintcOvectorlEdoublegRsPgR);
      instance.SetDelete(&delete_maplEintcOvectorlEdoublegRsPgR);
      instance.SetDeleteArray(&deleteArray_maplEintcOvectorlEdoublegRsPgR);
      instance.SetDestructor(&destruct_maplEintcOvectorlEdoublegRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<int,vector<double> > >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("map<int,vector<double> >","std::map<int, std::vector<double, std::allocator<double> >, std::less<int>, std::allocator<std::pair<int const, std::vector<double, std::allocator<double> > > > >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const map<int,vector<double> >*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEintcOvectorlEdoublegRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const map<int,vector<double> >*>(nullptr))->GetClass();
      maplEintcOvectorlEdoublegRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEintcOvectorlEdoublegRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEintcOvectorlEdoublegRsPgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<int,vector<double> > : new map<int,vector<double> >;
   }
   static void *newArray_maplEintcOvectorlEdoublegRsPgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<int,vector<double> >[nElements] : new map<int,vector<double> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEintcOvectorlEdoublegRsPgR(void *p) {
      delete (static_cast<map<int,vector<double> >*>(p));
   }
   static void deleteArray_maplEintcOvectorlEdoublegRsPgR(void *p) {
      delete [] (static_cast<map<int,vector<double> >*>(p));
   }
   static void destruct_maplEintcOvectorlEdoublegRsPgR(void *p) {
      typedef map<int,vector<double> > current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class map<int,vector<double> >

namespace ROOT {
   static TClass *maplEintcOstringgR_Dictionary();
   static void maplEintcOstringgR_TClassManip(TClass*);
   static void *new_maplEintcOstringgR(void *p = nullptr);
   static void *newArray_maplEintcOstringgR(Long_t size, void *p);
   static void delete_maplEintcOstringgR(void *p);
   static void deleteArray_maplEintcOstringgR(void *p);
   static void destruct_maplEintcOstringgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<int,string>*)
   {
      map<int,string> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<int,string>));
      static ::ROOT::TGenericClassInfo 
         instance("map<int,string>", -2, "map", 100,
                  typeid(map<int,string>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEintcOstringgR_Dictionary, isa_proxy, 0,
                  sizeof(map<int,string>) );
      instance.SetNew(&new_maplEintcOstringgR);
      instance.SetNewArray(&newArray_maplEintcOstringgR);
      instance.SetDelete(&delete_maplEintcOstringgR);
      instance.SetDeleteArray(&deleteArray_maplEintcOstringgR);
      instance.SetDestructor(&destruct_maplEintcOstringgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<int,string> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("map<int,string>","std::map<int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::less<int>, std::allocator<std::pair<int const, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > > > >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const map<int,string>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEintcOstringgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const map<int,string>*>(nullptr))->GetClass();
      maplEintcOstringgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEintcOstringgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEintcOstringgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<int,string> : new map<int,string>;
   }
   static void *newArray_maplEintcOstringgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<int,string>[nElements] : new map<int,string>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEintcOstringgR(void *p) {
      delete (static_cast<map<int,string>*>(p));
   }
   static void deleteArray_maplEintcOstringgR(void *p) {
      delete [] (static_cast<map<int,string>*>(p));
   }
   static void destruct_maplEintcOstringgR(void *p) {
      typedef map<int,string> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class map<int,string>

namespace ROOT {
   // Registration Schema evolution read functions
   int RecordReadRules_jcorranDict() {
      return 0;
   }
   static int _R__UNIQUE_DICT_(ReadRules_jcorranDict) = RecordReadRules_jcorranDict();R__UseDummy(_R__UNIQUE_DICT_(ReadRules_jcorranDict));
} // namespace ROOT
namespace {
  void TriggerDictionaryInitialization_jcorranDict_Impl() {
    static const char* headers[] = {
"../../include/AliAnalysisAnaTwoMultiCorrelations.h",
"../../include/AliAnalysisPtVn.h",
"../../include/AliAnalysisSPCRun2.h",
"../../include/AliJAnalysisMultiplicityMeanPt.h",
"../../include/AliJBaseEventHeader.h",
"../../include/AliJBaseTrack.h",
"../../include/AliJFFlucAnalysis.h",
"../../include/AliJFFlucAnalysisTProfile.h",
"../../include/AliJHistManager.h",
"../../include/JTreeDataManager.h",
nullptr
    };
    static const char* includePaths[] = {
"/usr/include/root",
"/home/lapptazv/Documents/JCORRAN/src/Base/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "jcorranDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class __attribute__((annotate("$clingAutoload$../../include/AliAnalysisAnaTwoMultiCorrelations.h")))  AliAnalysisAnaTwoMultiCorrelations;
class __attribute__((annotate("$clingAutoload$../../include/AliAnalysisPtVn.h")))  AliJBaseTrack;
class __attribute__((annotate("$clingAutoload$../../include/AliAnalysisPtVn.h")))  AliAnalysisPtVn;
class __attribute__((annotate("$clingAutoload$../../include/AliAnalysisSPCRun2.h")))  AliAnalysisSPCRun2;
class __attribute__((annotate("$clingAutoload$../../include/AliJAnalysisMultiplicityMeanPt.h")))  AliJAnalysisMultiplicityMeanPt;
class __attribute__((annotate("$clingAutoload$../../include/AliJBaseEventHeader.h")))  AliJBaseEventHeader;
class __attribute__((annotate("$clingAutoload$../../include/AliJFFlucAnalysis.h")))  AliJHistManager;
class __attribute__((annotate("$clingAutoload$../../include/AliJFFlucAnalysis.h")))  AliJFFlucAnalysis;
class __attribute__((annotate("$clingAutoload$../../include/AliJFFlucAnalysisTProfile.h")))  AliJFFlucAnalysisTProfile;
class __attribute__((annotate("$clingAutoload$../../include/JTreeDataManager.h")))  JTreeDataManager;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "jcorranDict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "../../include/AliAnalysisAnaTwoMultiCorrelations.h"
#include "../../include/AliAnalysisPtVn.h"
#include "../../include/AliAnalysisSPCRun2.h"
#include "../../include/AliJAnalysisMultiplicityMeanPt.h"
#include "../../include/AliJBaseEventHeader.h"
#include "../../include/AliJBaseTrack.h"
#include "../../include/AliJFFlucAnalysis.h"
#include "../../include/AliJFFlucAnalysisTProfile.h"
#include "../../include/AliJHistManager.h"
#include "../../include/JTreeDataManager.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"AliAnalysisAnaTwoMultiCorrelations", payloadCode, "@",
"AliAnalysisPtVn", payloadCode, "@",
"AliAnalysisSPCRun2", payloadCode, "@",
"AliJAnalysisMultiplicityMeanPt", payloadCode, "@",
"AliJBaseEventHeader", payloadCode, "@",
"AliJBaseTrack", payloadCode, "@",
"AliJFFlucAnalysis", payloadCode, "@",
"AliJFFlucAnalysisTProfile", payloadCode, "@",
"AliJHistManager", payloadCode, "@",
"JTreeDataManager", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("jcorranDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_jcorranDict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_jcorranDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_jcorranDict() {
  TriggerDictionaryInitialization_jcorranDict_Impl();
}
