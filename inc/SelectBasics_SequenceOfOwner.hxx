// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _SelectBasics_SequenceOfOwner_HeaderFile
#define _SelectBasics_SequenceOfOwner_HeaderFile

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
#ifndef _Handle_SelectBasics_EntityOwner_HeaderFile
#include <Handle_SelectBasics_EntityOwner.hxx>
#endif
#ifndef _Handle_SelectBasics_SequenceNodeOfSequenceOfOwner_HeaderFile
#include <Handle_SelectBasics_SequenceNodeOfSequenceOfOwner.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Standard_NoSuchObject;
class Standard_OutOfRange;
class SelectBasics_EntityOwner;
class SelectBasics_SequenceNodeOfSequenceOfOwner;



class SelectBasics_SequenceOfOwner  : public TCollection_BaseSequence {
public:

  DEFINE_STANDARD_ALLOC

  
      SelectBasics_SequenceOfOwner();
  
  Standard_EXPORT   SelectBasics_SequenceOfOwner(const SelectBasics_SequenceOfOwner& Other);
  
  Standard_EXPORT     void Clear() ;
~SelectBasics_SequenceOfOwner()
{
  Clear();
}
  
  Standard_EXPORT    const SelectBasics_SequenceOfOwner& Assign(const SelectBasics_SequenceOfOwner& Other) ;
   const SelectBasics_SequenceOfOwner& operator =(const SelectBasics_SequenceOfOwner& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT     void Append(const Handle(SelectBasics_EntityOwner)& T) ;
  
        void Append(SelectBasics_SequenceOfOwner& S) ;
  
  Standard_EXPORT     void Prepend(const Handle(SelectBasics_EntityOwner)& T) ;
  
        void Prepend(SelectBasics_SequenceOfOwner& S) ;
  
        void InsertBefore(const Standard_Integer Index,const Handle(SelectBasics_EntityOwner)& T) ;
  
        void InsertBefore(const Standard_Integer Index,SelectBasics_SequenceOfOwner& S) ;
  
  Standard_EXPORT     void InsertAfter(const Standard_Integer Index,const Handle(SelectBasics_EntityOwner)& T) ;
  
        void InsertAfter(const Standard_Integer Index,SelectBasics_SequenceOfOwner& S) ;
  
  Standard_EXPORT    const Handle_SelectBasics_EntityOwner& First() const;
  
  Standard_EXPORT    const Handle_SelectBasics_EntityOwner& Last() const;
  
        void Split(const Standard_Integer Index,SelectBasics_SequenceOfOwner& Sub) ;
  
  Standard_EXPORT    const Handle_SelectBasics_EntityOwner& Value(const Standard_Integer Index) const;
   const Handle_SelectBasics_EntityOwner& operator()(const Standard_Integer Index) const
{
  return Value(Index);
}
  
  Standard_EXPORT     void SetValue(const Standard_Integer Index,const Handle(SelectBasics_EntityOwner)& I) ;
  
  Standard_EXPORT     Handle_SelectBasics_EntityOwner& ChangeValue(const Standard_Integer Index) ;
    Handle_SelectBasics_EntityOwner& operator()(const Standard_Integer Index) 
{
  return ChangeValue(Index);
}
  
  Standard_EXPORT     void Remove(const Standard_Integer Index) ;
  
  Standard_EXPORT     void Remove(const Standard_Integer FromIndex,const Standard_Integer ToIndex) ;





protected:





private:





};

#define SeqItem Handle_SelectBasics_EntityOwner
#define SeqItem_hxx <SelectBasics_EntityOwner.hxx>
#define TCollection_SequenceNode SelectBasics_SequenceNodeOfSequenceOfOwner
#define TCollection_SequenceNode_hxx <SelectBasics_SequenceNodeOfSequenceOfOwner.hxx>
#define Handle_TCollection_SequenceNode Handle_SelectBasics_SequenceNodeOfSequenceOfOwner
#define TCollection_SequenceNode_Type_() SelectBasics_SequenceNodeOfSequenceOfOwner_Type_()
#define TCollection_Sequence SelectBasics_SequenceOfOwner
#define TCollection_Sequence_hxx <SelectBasics_SequenceOfOwner.hxx>

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
