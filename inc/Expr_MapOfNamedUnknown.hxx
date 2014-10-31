// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Expr_MapOfNamedUnknown_HeaderFile
#define _Expr_MapOfNamedUnknown_HeaderFile

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
#ifndef _Handle_Expr_NamedUnknown_HeaderFile
#include <Handle_Expr_NamedUnknown.hxx>
#endif
#ifndef _Handle_Expr_IndexedMapNodeOfMapOfNamedUnknown_HeaderFile
#include <Handle_Expr_IndexedMapNodeOfMapOfNamedUnknown.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class Standard_DomainError;
class Standard_OutOfRange;
class Expr_NamedUnknown;
class TColStd_MapTransientHasher;
class Expr_IndexedMapNodeOfMapOfNamedUnknown;



class Expr_MapOfNamedUnknown  : public TCollection_BasicMap {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   Expr_MapOfNamedUnknown(const Standard_Integer NbBuckets = 1);
  
  Standard_EXPORT   Expr_MapOfNamedUnknown(const Expr_MapOfNamedUnknown& Other);
  
  Standard_EXPORT     Expr_MapOfNamedUnknown& Assign(const Expr_MapOfNamedUnknown& Other) ;
    Expr_MapOfNamedUnknown& operator =(const Expr_MapOfNamedUnknown& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT     void ReSize(const Standard_Integer NbBuckets) ;
  
  Standard_EXPORT     void Clear() ;
~Expr_MapOfNamedUnknown()
{
  Clear();
}
  
  Standard_EXPORT     Standard_Integer Add(const Handle(Expr_NamedUnknown)& K) ;
  
  Standard_EXPORT     void Substitute(const Standard_Integer I,const Handle(Expr_NamedUnknown)& K) ;
  
  Standard_EXPORT     void RemoveLast() ;
  
  Standard_EXPORT     Standard_Boolean Contains(const Handle(Expr_NamedUnknown)& K) const;
  
  Standard_EXPORT    const Handle_Expr_NamedUnknown& FindKey(const Standard_Integer I) const;
   const Handle_Expr_NamedUnknown& operator ()(const Standard_Integer I) const
{
  return FindKey(I);
}
  
  Standard_EXPORT     Standard_Integer FindIndex(const Handle(Expr_NamedUnknown)& K) const;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif
