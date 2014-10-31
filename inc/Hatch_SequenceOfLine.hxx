// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Hatch_SequenceOfLine_HeaderFile
#define _Hatch_SequenceOfLine_HeaderFile

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
#ifndef _Handle_Hatch_SequenceNodeOfSequenceOfLine_HeaderFile
#include <Handle_Hatch_SequenceNodeOfSequenceOfLine.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Standard_NoSuchObject;
class Standard_OutOfRange;
class Hatch_Line;
class Hatch_SequenceNodeOfSequenceOfLine;



class Hatch_SequenceOfLine  : public TCollection_BaseSequence {
public:

  DEFINE_STANDARD_ALLOC

  
      Hatch_SequenceOfLine();
  
  Standard_EXPORT   Hatch_SequenceOfLine(const Hatch_SequenceOfLine& Other);
  
  Standard_EXPORT     void Clear() ;
~Hatch_SequenceOfLine()
{
  Clear();
}
  
  Standard_EXPORT    const Hatch_SequenceOfLine& Assign(const Hatch_SequenceOfLine& Other) ;
   const Hatch_SequenceOfLine& operator =(const Hatch_SequenceOfLine& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT     void Append(const Hatch_Line& T) ;
  
        void Append(Hatch_SequenceOfLine& S) ;
  
  Standard_EXPORT     void Prepend(const Hatch_Line& T) ;
  
        void Prepend(Hatch_SequenceOfLine& S) ;
  
        void InsertBefore(const Standard_Integer Index,const Hatch_Line& T) ;
  
        void InsertBefore(const Standard_Integer Index,Hatch_SequenceOfLine& S) ;
  
  Standard_EXPORT     void InsertAfter(const Standard_Integer Index,const Hatch_Line& T) ;
  
        void InsertAfter(const Standard_Integer Index,Hatch_SequenceOfLine& S) ;
  
  Standard_EXPORT    const Hatch_Line& First() const;
  
  Standard_EXPORT    const Hatch_Line& Last() const;
  
        void Split(const Standard_Integer Index,Hatch_SequenceOfLine& Sub) ;
  
  Standard_EXPORT    const Hatch_Line& Value(const Standard_Integer Index) const;
   const Hatch_Line& operator()(const Standard_Integer Index) const
{
  return Value(Index);
}
  
  Standard_EXPORT     void SetValue(const Standard_Integer Index,const Hatch_Line& I) ;
  
  Standard_EXPORT     Hatch_Line& ChangeValue(const Standard_Integer Index) ;
    Hatch_Line& operator()(const Standard_Integer Index) 
{
  return ChangeValue(Index);
}
  
  Standard_EXPORT     void Remove(const Standard_Integer Index) ;
  
  Standard_EXPORT     void Remove(const Standard_Integer FromIndex,const Standard_Integer ToIndex) ;





protected:





private:





};

#define SeqItem Hatch_Line
#define SeqItem_hxx <Hatch_Line.hxx>
#define TCollection_SequenceNode Hatch_SequenceNodeOfSequenceOfLine
#define TCollection_SequenceNode_hxx <Hatch_SequenceNodeOfSequenceOfLine.hxx>
#define Handle_TCollection_SequenceNode Handle_Hatch_SequenceNodeOfSequenceOfLine
#define TCollection_SequenceNode_Type_() Hatch_SequenceNodeOfSequenceOfLine_Type_()
#define TCollection_Sequence Hatch_SequenceOfLine
#define TCollection_Sequence_hxx <Hatch_SequenceOfLine.hxx>

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
