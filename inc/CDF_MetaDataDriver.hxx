// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _CDF_MetaDataDriver_HeaderFile
#define _CDF_MetaDataDriver_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_CDF_MetaDataDriver_HeaderFile
#include <Handle_CDF_MetaDataDriver.hxx>
#endif

#ifndef _Standard_Transient_HeaderFile
#include <Standard_Transient.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_CDM_MetaData_HeaderFile
#include <Handle_CDM_MetaData.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_CDM_Document_HeaderFile
#include <Handle_CDM_Document.hxx>
#endif
#ifndef _Handle_PCDM_ReferenceIterator_HeaderFile
#include <Handle_PCDM_ReferenceIterator.hxx>
#endif
class Standard_NotImplemented;
class CDM_MetaData;
class TCollection_ExtendedString;
class CDM_Document;
class PCDM_ReferenceIterator;


//! this class list the method that must be available for <br>
//!          a specific DBMS <br>
class CDF_MetaDataDriver : public Standard_Transient {

public:

  //! returns true if the MetaDataDriver can manage different <br>
//!          versions of a Data. <br>
//!          By default, returns Standard_False. <br>
  Standard_EXPORT   virtual  Standard_Boolean HasVersionCapability() ;
  //! Creates a "Depends On"  relation between two Datas. <br>
//!          By default does nothing <br>
  Standard_EXPORT   virtual  void CreateDependsOn(const Handle(CDM_MetaData)& aFirstData,const Handle(CDM_MetaData)& aSecondData) ;
  
  Standard_EXPORT   virtual  void CreateReference(const Handle(CDM_MetaData)& aFrom,const Handle(CDM_MetaData)& aTo,const Standard_Integer aReferenceIdentifier,const Standard_Integer aToDocumentVersion) ;
  //! by default return Standard_True. <br>
  Standard_EXPORT   virtual  Standard_Boolean HasVersion(const TCollection_ExtendedString& aFolder,const TCollection_ExtendedString& aName) ;
  
  Standard_EXPORT   virtual  TCollection_ExtendedString BuildFileName(const Handle(CDM_Document)& aDocument)  = 0;
  //! this methods  is usefull if the name  of an  object -- <br>
//!           depends on  the metadatadriver. For  example a Driver <br>
//!           -- based  on the operating  system can choose to  add <br>
//!           the extension of file to create to the object. <br>
  Standard_EXPORT   virtual  TCollection_ExtendedString SetName(const Handle(CDM_Document)& aDocument,const TCollection_ExtendedString& aName) ;
  //! should indicate whether meta-data exist in the DBMS corresponding <br>
//!          to the Data. <br>
//!          aVersion may be NULL; <br>
  Standard_EXPORT   virtual  Standard_Boolean Find(const TCollection_ExtendedString& aFolder,const TCollection_ExtendedString& aName,const TCollection_ExtendedString& aVersion)  = 0;
  
  Standard_EXPORT   virtual  Standard_Boolean HasReadPermission(const TCollection_ExtendedString& aFolder,const TCollection_ExtendedString& aName,const TCollection_ExtendedString& aVersion)  = 0;
  //! should return the MetaData stored in the DBMS with the meta-data <br>
//!          corresponding to the Data. If the MetaDataDriver has version management capabilities <br>
//!          the version has to be set in the returned MetaData. <br>
//!          aVersion may be NULL <br>
//!          MetaData is called by GetMetaData <br>
//!          If the version is  set to NULL, MetaData should return <br>
//!          the last version of the metadata <br>
  Standard_EXPORT   virtual  Handle_CDM_MetaData MetaData(const TCollection_ExtendedString& aFolder,const TCollection_ExtendedString& aName,const TCollection_ExtendedString& aVersion)  = 0;
  //! by default returns aMetaDATA <br>//! should return the MetaData stored in the DBMS with the meta-data <br>
//!          corresponding to the path. If the MetaDataDriver has version management capabilities <br>
//!          the version has to be set in the returned MetaData. <br>
//!          MetaData is called by GetMetaData <br>
//!          If the version is not included in the path , MetaData should return <br>
//!          the last version of the metadata <br>
//!    is deferred; <br>
  Standard_EXPORT   virtual  Handle_CDM_MetaData LastVersion(const Handle(CDM_MetaData)& aMetaData) ;
  //!  should create meta-data corresponding to aData and maintaining a meta-link <br>
//!           between these meta-data and aFileName <br>
//!           CreateMetaData is called by CreateData <br>//! If the metadata-driver <br>
//!          has version capabilities, version must be set in the returned Data. <br>
  Standard_EXPORT   virtual  Handle_CDM_MetaData CreateMetaData(const Handle(CDM_Document)& aDocument,const TCollection_ExtendedString& aFileName)  = 0;
  
  Standard_EXPORT   virtual  Standard_Boolean FindFolder(const TCollection_ExtendedString& aFolder)  = 0;
  
  Standard_EXPORT   virtual  TCollection_ExtendedString DefaultFolder()  = 0;
  
  Standard_EXPORT   virtual  Handle_PCDM_ReferenceIterator ReferenceIterator() ;
  //! calls Find with an empty version <br>
  Standard_EXPORT     Standard_Boolean Find(const TCollection_ExtendedString& aFolder,const TCollection_ExtendedString& aName) ;
  //! calls MetaData with an empty version <br>
  Standard_EXPORT     Handle_CDM_MetaData MetaData(const TCollection_ExtendedString& aFolder,const TCollection_ExtendedString& aName) ;




  DEFINE_STANDARD_RTTI(CDF_MetaDataDriver)

protected:

  
  Standard_EXPORT   CDF_MetaDataDriver();



private: 




};





// other Inline functions and methods (like "C++: function call" methods)


#endif
