// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TNaming_MapOfNamedShape_HeaderFile
#define _TNaming_MapOfNamedShape_HeaderFile

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
#ifndef _Handle_TNaming_NamedShape_HeaderFile
#include <Handle_TNaming_NamedShape.hxx>
#endif
#ifndef _Handle_TNaming_StdMapNodeOfMapOfNamedShape_HeaderFile
#include <Handle_TNaming_StdMapNodeOfMapOfNamedShape.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class TNaming_NamedShape;
class TNaming_NamedShapeHasher;
class TNaming_StdMapNodeOfMapOfNamedShape;
class TNaming_MapIteratorOfMapOfNamedShape;



class TNaming_MapOfNamedShape  : public TCollection_BasicMap {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   TNaming_MapOfNamedShape(const Standard_Integer NbBuckets = 1);
  
  Standard_EXPORT   TNaming_MapOfNamedShape(const TNaming_MapOfNamedShape& Other);
  
  Standard_EXPORT     TNaming_MapOfNamedShape& Assign(const TNaming_MapOfNamedShape& Other) ;
    TNaming_MapOfNamedShape& operator =(const TNaming_MapOfNamedShape& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT     void ReSize(const Standard_Integer NbBuckets) ;
  
  Standard_EXPORT     void Clear() ;
~TNaming_MapOfNamedShape()
{
  Clear();
}
  
  Standard_EXPORT     Standard_Boolean Add(const Handle(TNaming_NamedShape)& aKey) ;
  
  Standard_EXPORT     Standard_Boolean Contains(const Handle(TNaming_NamedShape)& aKey) const;
  
  Standard_EXPORT     Standard_Boolean Remove(const Handle(TNaming_NamedShape)& aKey) ;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif
