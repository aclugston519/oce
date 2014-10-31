// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _CDM_MapOfDocument_HeaderFile
#define _CDM_MapOfDocument_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TCollection_BasicMap_HeaderFile
#include <TCollection_BasicMap.hxx>
#endif
#ifndef _Handle_CDM_Document_HeaderFile
#include <Handle_CDM_Document.hxx>
#endif
#ifndef _Handle_CDM_StdMapNodeOfMapOfDocument_HeaderFile
#include <Handle_CDM_StdMapNodeOfMapOfDocument.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class CDM_Document;
class CDM_DocumentHasher;
class CDM_StdMapNodeOfMapOfDocument;
class CDM_MapIteratorOfMapOfDocument;



class CDM_MapOfDocument  : public TCollection_BasicMap {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   CDM_MapOfDocument(const Standard_Integer NbBuckets = 1);
  
  Standard_EXPORT   CDM_MapOfDocument(const CDM_MapOfDocument& Other);
  
  Standard_EXPORT     CDM_MapOfDocument& Assign(const CDM_MapOfDocument& Other) ;
    CDM_MapOfDocument& operator =(const CDM_MapOfDocument& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT     void ReSize(const Standard_Integer NbBuckets) ;
  
  Standard_EXPORT     void Clear() ;
~CDM_MapOfDocument()
{
  Clear();
}
  
  Standard_EXPORT     Standard_Boolean Add(const Handle(CDM_Document)& aKey) ;
  
  Standard_EXPORT     Standard_Boolean Contains(const Handle(CDM_Document)& aKey) const;
  
  Standard_EXPORT     Standard_Boolean Remove(const Handle(CDM_Document)& aKey) ;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif
