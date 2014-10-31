// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Select3D_SensitiveEntitySequence_HeaderFile
#define _Select3D_SensitiveEntitySequence_HeaderFile

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
#ifndef _Handle_Select3D_SensitiveEntity_HeaderFile
#include <Handle_Select3D_SensitiveEntity.hxx>
#endif
#ifndef _Handle_Select3D_SequenceNodeOfSensitiveEntitySequence_HeaderFile
#include <Handle_Select3D_SequenceNodeOfSensitiveEntitySequence.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Standard_NoSuchObject;
class Standard_OutOfRange;
class Select3D_SensitiveEntity;
class Select3D_SequenceNodeOfSensitiveEntitySequence;



class Select3D_SensitiveEntitySequence  : public TCollection_BaseSequence {
public:

  DEFINE_STANDARD_ALLOC

  
      Select3D_SensitiveEntitySequence();
  
  Standard_EXPORT   Select3D_SensitiveEntitySequence(const Select3D_SensitiveEntitySequence& Other);
  
  Standard_EXPORT     void Clear() ;
~Select3D_SensitiveEntitySequence()
{
  Clear();
}
  
  Standard_EXPORT    const Select3D_SensitiveEntitySequence& Assign(const Select3D_SensitiveEntitySequence& Other) ;
   const Select3D_SensitiveEntitySequence& operator =(const Select3D_SensitiveEntitySequence& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT     void Append(const Handle(Select3D_SensitiveEntity)& T) ;
  
        void Append(Select3D_SensitiveEntitySequence& S) ;
  
  Standard_EXPORT     void Prepend(const Handle(Select3D_SensitiveEntity)& T) ;
  
        void Prepend(Select3D_SensitiveEntitySequence& S) ;
  
        void InsertBefore(const Standard_Integer Index,const Handle(Select3D_SensitiveEntity)& T) ;
  
        void InsertBefore(const Standard_Integer Index,Select3D_SensitiveEntitySequence& S) ;
  
  Standard_EXPORT     void InsertAfter(const Standard_Integer Index,const Handle(Select3D_SensitiveEntity)& T) ;
  
        void InsertAfter(const Standard_Integer Index,Select3D_SensitiveEntitySequence& S) ;
  
  Standard_EXPORT    const Handle_Select3D_SensitiveEntity& First() const;
  
  Standard_EXPORT    const Handle_Select3D_SensitiveEntity& Last() const;
  
        void Split(const Standard_Integer Index,Select3D_SensitiveEntitySequence& Sub) ;
  
  Standard_EXPORT    const Handle_Select3D_SensitiveEntity& Value(const Standard_Integer Index) const;
   const Handle_Select3D_SensitiveEntity& operator()(const Standard_Integer Index) const
{
  return Value(Index);
}
  
  Standard_EXPORT     void SetValue(const Standard_Integer Index,const Handle(Select3D_SensitiveEntity)& I) ;
  
  Standard_EXPORT     Handle_Select3D_SensitiveEntity& ChangeValue(const Standard_Integer Index) ;
    Handle_Select3D_SensitiveEntity& operator()(const Standard_Integer Index) 
{
  return ChangeValue(Index);
}
  
  Standard_EXPORT     void Remove(const Standard_Integer Index) ;
  
  Standard_EXPORT     void Remove(const Standard_Integer FromIndex,const Standard_Integer ToIndex) ;





protected:





private:





};

#define SeqItem Handle_Select3D_SensitiveEntity
#define SeqItem_hxx <Select3D_SensitiveEntity.hxx>
#define TCollection_SequenceNode Select3D_SequenceNodeOfSensitiveEntitySequence
#define TCollection_SequenceNode_hxx <Select3D_SequenceNodeOfSensitiveEntitySequence.hxx>
#define Handle_TCollection_SequenceNode Handle_Select3D_SequenceNodeOfSensitiveEntitySequence
#define TCollection_SequenceNode_Type_() Select3D_SequenceNodeOfSensitiveEntitySequence_Type_()
#define TCollection_Sequence Select3D_SensitiveEntitySequence
#define TCollection_Sequence_hxx <Select3D_SensitiveEntitySequence.hxx>

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
