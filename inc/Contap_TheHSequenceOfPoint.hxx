// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Contap_TheHSequenceOfPoint_HeaderFile
#define _Contap_TheHSequenceOfPoint_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_Contap_TheHSequenceOfPoint_HeaderFile
#include <Handle_Contap_TheHSequenceOfPoint.hxx>
#endif

#ifndef _Contap_TheSequenceOfPoint_HeaderFile
#include <Contap_TheSequenceOfPoint.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Standard_NoSuchObject;
class Standard_OutOfRange;
class Contap_Point;
class Contap_TheSequenceOfPoint;



class Contap_TheHSequenceOfPoint : public MMgt_TShared {

public:

  
      Contap_TheHSequenceOfPoint();
  
        Standard_Boolean IsEmpty() const;
  
        Standard_Integer Length() const;
  
  Standard_EXPORT     void Clear() ;
  
  Standard_EXPORT     void Append(const Contap_Point& anItem) ;
  
  Standard_EXPORT     void Append(const Handle(Contap_TheHSequenceOfPoint)& aSequence) ;
  
  Standard_EXPORT     void Prepend(const Contap_Point& anItem) ;
  
  Standard_EXPORT     void Prepend(const Handle(Contap_TheHSequenceOfPoint)& aSequence) ;
  
  Standard_EXPORT     void Reverse() ;
  
  Standard_EXPORT     void InsertBefore(const Standard_Integer anIndex,const Contap_Point& anItem) ;
  
  Standard_EXPORT     void InsertBefore(const Standard_Integer anIndex,const Handle(Contap_TheHSequenceOfPoint)& aSequence) ;
  
  Standard_EXPORT     void InsertAfter(const Standard_Integer anIndex,const Contap_Point& anItem) ;
  
  Standard_EXPORT     void InsertAfter(const Standard_Integer anIndex,const Handle(Contap_TheHSequenceOfPoint)& aSequence) ;
  
  Standard_EXPORT     void Exchange(const Standard_Integer anIndex,const Standard_Integer anOtherIndex) ;
  
  Standard_EXPORT     Handle_Contap_TheHSequenceOfPoint Split(const Standard_Integer anIndex) ;
  
  Standard_EXPORT     void SetValue(const Standard_Integer anIndex,const Contap_Point& anItem) ;
  
  Standard_EXPORT    const Contap_Point& Value(const Standard_Integer anIndex) const;
  
  Standard_EXPORT     Contap_Point& ChangeValue(const Standard_Integer anIndex) ;
  
  Standard_EXPORT     void Remove(const Standard_Integer anIndex) ;
  
  Standard_EXPORT     void Remove(const Standard_Integer fromIndex,const Standard_Integer toIndex) ;
  
       const Contap_TheSequenceOfPoint& Sequence() const;
  
        Contap_TheSequenceOfPoint& ChangeSequence() ;
  
  Standard_EXPORT     Handle_Contap_TheHSequenceOfPoint ShallowCopy() const;




  DEFINE_STANDARD_RTTI(Contap_TheHSequenceOfPoint)

protected:




private: 


Contap_TheSequenceOfPoint mySequence;


};

#define Item Contap_Point
#define Item_hxx <Contap_Point.hxx>
#define TheSequence Contap_TheSequenceOfPoint
#define TheSequence_hxx <Contap_TheSequenceOfPoint.hxx>
#define TCollection_HSequence Contap_TheHSequenceOfPoint
#define TCollection_HSequence_hxx <Contap_TheHSequenceOfPoint.hxx>
#define Handle_TCollection_HSequence Handle_Contap_TheHSequenceOfPoint
#define TCollection_HSequence_Type_() Contap_TheHSequenceOfPoint_Type_()

#include <TCollection_HSequence.lxx>

#undef Item
#undef Item_hxx
#undef TheSequence
#undef TheSequence_hxx
#undef TCollection_HSequence
#undef TCollection_HSequence_hxx
#undef Handle_TCollection_HSequence
#undef TCollection_HSequence_Type_


// other Inline functions and methods (like "C++: function call" methods)
inline Handle_Contap_TheHSequenceOfPoint ShallowCopy(const Handle_Contap_TheHSequenceOfPoint& me) {
 return me->ShallowCopy();
}



#endif
