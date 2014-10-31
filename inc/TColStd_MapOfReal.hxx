// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TColStd_MapOfReal_HeaderFile
#define _TColStd_MapOfReal_HeaderFile

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
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Handle_TColStd_StdMapNodeOfMapOfReal_HeaderFile
#include <Handle_TColStd_StdMapNodeOfMapOfReal.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class TColStd_MapRealHasher;
class TColStd_StdMapNodeOfMapOfReal;
class TColStd_MapIteratorOfMapOfReal;



class TColStd_MapOfReal  : public TCollection_BasicMap {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   TColStd_MapOfReal(const Standard_Integer NbBuckets = 1);
  
  Standard_EXPORT   TColStd_MapOfReal(const TColStd_MapOfReal& Other);
  
  Standard_EXPORT     TColStd_MapOfReal& Assign(const TColStd_MapOfReal& Other) ;
    TColStd_MapOfReal& operator =(const TColStd_MapOfReal& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT     void ReSize(const Standard_Integer NbBuckets) ;
  
  Standard_EXPORT     void Clear() ;
~TColStd_MapOfReal()
{
  Clear();
}
  
  Standard_EXPORT     Standard_Boolean Add(const Standard_Real& aKey) ;
  
  Standard_EXPORT     Standard_Boolean Contains(const Standard_Real& aKey) const;
  
  Standard_EXPORT     Standard_Boolean Remove(const Standard_Real& aKey) ;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif
