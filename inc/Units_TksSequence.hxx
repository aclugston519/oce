// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Units_TksSequence_HeaderFile
#define _Units_TksSequence_HeaderFile

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
#ifndef _Handle_Units_Token_HeaderFile
#include <Handle_Units_Token.hxx>
#endif
#ifndef _Handle_Units_SequenceNodeOfTksSequence_HeaderFile
#include <Handle_Units_SequenceNodeOfTksSequence.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Standard_NoSuchObject;
class Standard_OutOfRange;
class Units_Token;
class Units_SequenceNodeOfTksSequence;



class Units_TksSequence  : public TCollection_BaseSequence {
public:

  DEFINE_STANDARD_ALLOC

  
      Units_TksSequence();
  
  Standard_EXPORT   Units_TksSequence(const Units_TksSequence& Other);
  
  Standard_EXPORT     void Clear() ;
~Units_TksSequence()
{
  Clear();
}
  
  Standard_EXPORT    const Units_TksSequence& Assign(const Units_TksSequence& Other) ;
   const Units_TksSequence& operator =(const Units_TksSequence& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT     void Append(const Handle(Units_Token)& T) ;
  
        void Append(Units_TksSequence& S) ;
  
  Standard_EXPORT     void Prepend(const Handle(Units_Token)& T) ;
  
        void Prepend(Units_TksSequence& S) ;
  
        void InsertBefore(const Standard_Integer Index,const Handle(Units_Token)& T) ;
  
        void InsertBefore(const Standard_Integer Index,Units_TksSequence& S) ;
  
  Standard_EXPORT     void InsertAfter(const Standard_Integer Index,const Handle(Units_Token)& T) ;
  
        void InsertAfter(const Standard_Integer Index,Units_TksSequence& S) ;
  
  Standard_EXPORT    const Handle_Units_Token& First() const;
  
  Standard_EXPORT    const Handle_Units_Token& Last() const;
  
        void Split(const Standard_Integer Index,Units_TksSequence& Sub) ;
  
  Standard_EXPORT    const Handle_Units_Token& Value(const Standard_Integer Index) const;
   const Handle_Units_Token& operator()(const Standard_Integer Index) const
{
  return Value(Index);
}
  
  Standard_EXPORT     void SetValue(const Standard_Integer Index,const Handle(Units_Token)& I) ;
  
  Standard_EXPORT     Handle_Units_Token& ChangeValue(const Standard_Integer Index) ;
    Handle_Units_Token& operator()(const Standard_Integer Index) 
{
  return ChangeValue(Index);
}
  
  Standard_EXPORT     void Remove(const Standard_Integer Index) ;
  
  Standard_EXPORT     void Remove(const Standard_Integer FromIndex,const Standard_Integer ToIndex) ;





protected:





private:





};

#define SeqItem Handle_Units_Token
#define SeqItem_hxx <Units_Token.hxx>
#define TCollection_SequenceNode Units_SequenceNodeOfTksSequence
#define TCollection_SequenceNode_hxx <Units_SequenceNodeOfTksSequence.hxx>
#define Handle_TCollection_SequenceNode Handle_Units_SequenceNodeOfTksSequence
#define TCollection_SequenceNode_Type_() Units_SequenceNodeOfTksSequence_Type_()
#define TCollection_Sequence Units_TksSequence
#define TCollection_Sequence_hxx <Units_TksSequence.hxx>

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
