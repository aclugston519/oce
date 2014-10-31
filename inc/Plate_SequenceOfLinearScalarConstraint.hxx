// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Plate_SequenceOfLinearScalarConstraint_HeaderFile
#define _Plate_SequenceOfLinearScalarConstraint_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TCollection_BaseSequence_HeaderFile
#include <TCollection_BaseSequence.hxx>
#endif
#ifndef _Handle_Plate_SequenceNodeOfSequenceOfLinearScalarConstraint_HeaderFile
#include <Handle_Plate_SequenceNodeOfSequenceOfLinearScalarConstraint.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Standard_NoSuchObject;
class Standard_OutOfRange;
class Plate_LinearScalarConstraint;
class Plate_SequenceNodeOfSequenceOfLinearScalarConstraint;



class Plate_SequenceOfLinearScalarConstraint  : public TCollection_BaseSequence {
public:

  DEFINE_STANDARD_ALLOC

  
      Plate_SequenceOfLinearScalarConstraint();
  
  Standard_EXPORT   Plate_SequenceOfLinearScalarConstraint(const Plate_SequenceOfLinearScalarConstraint& Other);
  
  Standard_EXPORT     void Clear() ;
~Plate_SequenceOfLinearScalarConstraint()
{
  Clear();
}
  
  Standard_EXPORT    const Plate_SequenceOfLinearScalarConstraint& Assign(const Plate_SequenceOfLinearScalarConstraint& Other) ;
   const Plate_SequenceOfLinearScalarConstraint& operator =(const Plate_SequenceOfLinearScalarConstraint& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT     void Append(const Plate_LinearScalarConstraint& T) ;
  
        void Append(Plate_SequenceOfLinearScalarConstraint& S) ;
  
  Standard_EXPORT     void Prepend(const Plate_LinearScalarConstraint& T) ;
  
        void Prepend(Plate_SequenceOfLinearScalarConstraint& S) ;
  
        void InsertBefore(const Standard_Integer Index,const Plate_LinearScalarConstraint& T) ;
  
        void InsertBefore(const Standard_Integer Index,Plate_SequenceOfLinearScalarConstraint& S) ;
  
  Standard_EXPORT     void InsertAfter(const Standard_Integer Index,const Plate_LinearScalarConstraint& T) ;
  
        void InsertAfter(const Standard_Integer Index,Plate_SequenceOfLinearScalarConstraint& S) ;
  
  Standard_EXPORT    const Plate_LinearScalarConstraint& First() const;
  
  Standard_EXPORT    const Plate_LinearScalarConstraint& Last() const;
  
        void Split(const Standard_Integer Index,Plate_SequenceOfLinearScalarConstraint& Sub) ;
  
  Standard_EXPORT    const Plate_LinearScalarConstraint& Value(const Standard_Integer Index) const;
   const Plate_LinearScalarConstraint& operator()(const Standard_Integer Index) const
{
  return Value(Index);
}
  
  Standard_EXPORT     void SetValue(const Standard_Integer Index,const Plate_LinearScalarConstraint& I) ;
  
  Standard_EXPORT     Plate_LinearScalarConstraint& ChangeValue(const Standard_Integer Index) ;
    Plate_LinearScalarConstraint& operator()(const Standard_Integer Index) 
{
  return ChangeValue(Index);
}
  
  Standard_EXPORT     void Remove(const Standard_Integer Index) ;
  
  Standard_EXPORT     void Remove(const Standard_Integer FromIndex,const Standard_Integer ToIndex) ;





protected:





private:





};

#define SeqItem Plate_LinearScalarConstraint
#define SeqItem_hxx <Plate_LinearScalarConstraint.hxx>
#define TCollection_SequenceNode Plate_SequenceNodeOfSequenceOfLinearScalarConstraint
#define TCollection_SequenceNode_hxx <Plate_SequenceNodeOfSequenceOfLinearScalarConstraint.hxx>
#define Handle_TCollection_SequenceNode Handle_Plate_SequenceNodeOfSequenceOfLinearScalarConstraint
#define TCollection_SequenceNode_Type_() Plate_SequenceNodeOfSequenceOfLinearScalarConstraint_Type_()
#define TCollection_Sequence Plate_SequenceOfLinearScalarConstraint
#define TCollection_Sequence_hxx <Plate_SequenceOfLinearScalarConstraint.hxx>

#include <TCollection_Sequence.lxx>

#undef SeqItem
#undef SeqItem_hxx
#undef TCollection_SequenceNode
#undef TCollection_SequenceNode_hxx
#undef Handle_TCollection_SequenceNode
#undef TCollection_SequenceNode_Type_
#undef TCollection_Sequence
#undef TCollection_Sequence_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif
