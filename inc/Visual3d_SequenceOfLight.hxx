// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Visual3d_SequenceOfLight_HeaderFile
#define _Visual3d_SequenceOfLight_HeaderFile

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
#ifndef _Handle_Visual3d_Light_HeaderFile
#include <Handle_Visual3d_Light.hxx>
#endif
#ifndef _Handle_Visual3d_SequenceNodeOfSequenceOfLight_HeaderFile
#include <Handle_Visual3d_SequenceNodeOfSequenceOfLight.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Standard_NoSuchObject;
class Standard_OutOfRange;
class Visual3d_Light;
class Visual3d_SequenceNodeOfSequenceOfLight;



class Visual3d_SequenceOfLight  : public TCollection_BaseSequence {
public:

  DEFINE_STANDARD_ALLOC

  
      Visual3d_SequenceOfLight();
  
  Standard_EXPORT   Visual3d_SequenceOfLight(const Visual3d_SequenceOfLight& Other);
  
  Standard_EXPORT     void Clear() ;
~Visual3d_SequenceOfLight()
{
  Clear();
}
  
  Standard_EXPORT    const Visual3d_SequenceOfLight& Assign(const Visual3d_SequenceOfLight& Other) ;
   const Visual3d_SequenceOfLight& operator =(const Visual3d_SequenceOfLight& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT     void Append(const Handle(Visual3d_Light)& T) ;
  
        void Append(Visual3d_SequenceOfLight& S) ;
  
  Standard_EXPORT     void Prepend(const Handle(Visual3d_Light)& T) ;
  
        void Prepend(Visual3d_SequenceOfLight& S) ;
  
        void InsertBefore(const Standard_Integer Index,const Handle(Visual3d_Light)& T) ;
  
        void InsertBefore(const Standard_Integer Index,Visual3d_SequenceOfLight& S) ;
  
  Standard_EXPORT     void InsertAfter(const Standard_Integer Index,const Handle(Visual3d_Light)& T) ;
  
        void InsertAfter(const Standard_Integer Index,Visual3d_SequenceOfLight& S) ;
  
  Standard_EXPORT    const Handle_Visual3d_Light& First() const;
  
  Standard_EXPORT    const Handle_Visual3d_Light& Last() const;
  
        void Split(const Standard_Integer Index,Visual3d_SequenceOfLight& Sub) ;
  
  Standard_EXPORT    const Handle_Visual3d_Light& Value(const Standard_Integer Index) const;
   const Handle_Visual3d_Light& operator()(const Standard_Integer Index) const
{
  return Value(Index);
}
  
  Standard_EXPORT     void SetValue(const Standard_Integer Index,const Handle(Visual3d_Light)& I) ;
  
  Standard_EXPORT     Handle_Visual3d_Light& ChangeValue(const Standard_Integer Index) ;
    Handle_Visual3d_Light& operator()(const Standard_Integer Index) 
{
  return ChangeValue(Index);
}
  
  Standard_EXPORT     void Remove(const Standard_Integer Index) ;
  
  Standard_EXPORT     void Remove(const Standard_Integer FromIndex,const Standard_Integer ToIndex) ;





protected:





private:





};

#define SeqItem Handle_Visual3d_Light
#define SeqItem_hxx <Visual3d_Light.hxx>
#define TCollection_SequenceNode Visual3d_SequenceNodeOfSequenceOfLight
#define TCollection_SequenceNode_hxx <Visual3d_SequenceNodeOfSequenceOfLight.hxx>
#define Handle_TCollection_SequenceNode Handle_Visual3d_SequenceNodeOfSequenceOfLight
#define TCollection_SequenceNode_Type_() Visual3d_SequenceNodeOfSequenceOfLight_Type_()
#define TCollection_Sequence Visual3d_SequenceOfLight
#define TCollection_Sequence_hxx <Visual3d_SequenceOfLight.hxx>

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
