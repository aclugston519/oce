// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _ShapeAnalysis_SequenceOfFreeBounds_HeaderFile
#define _ShapeAnalysis_SequenceOfFreeBounds_HeaderFile

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
#ifndef _Handle_ShapeAnalysis_FreeBoundData_HeaderFile
#include <Handle_ShapeAnalysis_FreeBoundData.hxx>
#endif
#ifndef _Handle_ShapeAnalysis_SequenceNodeOfSequenceOfFreeBounds_HeaderFile
#include <Handle_ShapeAnalysis_SequenceNodeOfSequenceOfFreeBounds.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Standard_NoSuchObject;
class Standard_OutOfRange;
class ShapeAnalysis_FreeBoundData;
class ShapeAnalysis_SequenceNodeOfSequenceOfFreeBounds;



class ShapeAnalysis_SequenceOfFreeBounds  : public TCollection_BaseSequence {
public:

  DEFINE_STANDARD_ALLOC

  
      ShapeAnalysis_SequenceOfFreeBounds();
  
  Standard_EXPORT   ShapeAnalysis_SequenceOfFreeBounds(const ShapeAnalysis_SequenceOfFreeBounds& Other);
  
  Standard_EXPORT     void Clear() ;
~ShapeAnalysis_SequenceOfFreeBounds()
{
  Clear();
}
  
  Standard_EXPORT    const ShapeAnalysis_SequenceOfFreeBounds& Assign(const ShapeAnalysis_SequenceOfFreeBounds& Other) ;
   const ShapeAnalysis_SequenceOfFreeBounds& operator =(const ShapeAnalysis_SequenceOfFreeBounds& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT     void Append(const Handle(ShapeAnalysis_FreeBoundData)& T) ;
  
        void Append(ShapeAnalysis_SequenceOfFreeBounds& S) ;
  
  Standard_EXPORT     void Prepend(const Handle(ShapeAnalysis_FreeBoundData)& T) ;
  
        void Prepend(ShapeAnalysis_SequenceOfFreeBounds& S) ;
  
        void InsertBefore(const Standard_Integer Index,const Handle(ShapeAnalysis_FreeBoundData)& T) ;
  
        void InsertBefore(const Standard_Integer Index,ShapeAnalysis_SequenceOfFreeBounds& S) ;
  
  Standard_EXPORT     void InsertAfter(const Standard_Integer Index,const Handle(ShapeAnalysis_FreeBoundData)& T) ;
  
        void InsertAfter(const Standard_Integer Index,ShapeAnalysis_SequenceOfFreeBounds& S) ;
  
  Standard_EXPORT    const Handle_ShapeAnalysis_FreeBoundData& First() const;
  
  Standard_EXPORT    const Handle_ShapeAnalysis_FreeBoundData& Last() const;
  
        void Split(const Standard_Integer Index,ShapeAnalysis_SequenceOfFreeBounds& Sub) ;
  
  Standard_EXPORT    const Handle_ShapeAnalysis_FreeBoundData& Value(const Standard_Integer Index) const;
   const Handle_ShapeAnalysis_FreeBoundData& operator()(const Standard_Integer Index) const
{
  return Value(Index);
}
  
  Standard_EXPORT     void SetValue(const Standard_Integer Index,const Handle(ShapeAnalysis_FreeBoundData)& I) ;
  
  Standard_EXPORT     Handle_ShapeAnalysis_FreeBoundData& ChangeValue(const Standard_Integer Index) ;
    Handle_ShapeAnalysis_FreeBoundData& operator()(const Standard_Integer Index) 
{
  return ChangeValue(Index);
}
  
  Standard_EXPORT     void Remove(const Standard_Integer Index) ;
  
  Standard_EXPORT     void Remove(const Standard_Integer FromIndex,const Standard_Integer ToIndex) ;





protected:





private:





};

#define SeqItem Handle_ShapeAnalysis_FreeBoundData
#define SeqItem_hxx <ShapeAnalysis_FreeBoundData.hxx>
#define TCollection_SequenceNode ShapeAnalysis_SequenceNodeOfSequenceOfFreeBounds
#define TCollection_SequenceNode_hxx <ShapeAnalysis_SequenceNodeOfSequenceOfFreeBounds.hxx>
#define Handle_TCollection_SequenceNode Handle_ShapeAnalysis_SequenceNodeOfSequenceOfFreeBounds
#define TCollection_SequenceNode_Type_() ShapeAnalysis_SequenceNodeOfSequenceOfFreeBounds_Type_()
#define TCollection_Sequence ShapeAnalysis_SequenceOfFreeBounds
#define TCollection_Sequence_hxx <ShapeAnalysis_SequenceOfFreeBounds.hxx>

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
