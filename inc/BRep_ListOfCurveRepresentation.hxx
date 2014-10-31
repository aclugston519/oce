// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRep_ListOfCurveRepresentation_HeaderFile
#define _BRep_ListOfCurveRepresentation_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
#ifndef _Handle_BRep_CurveRepresentation_HeaderFile
#include <Handle_BRep_CurveRepresentation.hxx>
#endif
#ifndef _Handle_BRep_ListNodeOfListOfCurveRepresentation_HeaderFile
#include <Handle_BRep_ListNodeOfListOfCurveRepresentation.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class Standard_NoSuchObject;
class BRep_ListIteratorOfListOfCurveRepresentation;
class BRep_CurveRepresentation;
class BRep_ListNodeOfListOfCurveRepresentation;



class BRep_ListOfCurveRepresentation  {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   BRep_ListOfCurveRepresentation();
  
  Standard_EXPORT   BRep_ListOfCurveRepresentation(const BRep_ListOfCurveRepresentation& Other);
  
  Standard_EXPORT     void Assign(const BRep_ListOfCurveRepresentation& Other) ;
    void operator=(const BRep_ListOfCurveRepresentation& Other) 
{
  Assign(Other);
}
  
  Standard_EXPORT     Standard_Integer Extent() const;
  
  Standard_EXPORT     void Clear() ;
~BRep_ListOfCurveRepresentation()
{
  Clear();
}
  
        Standard_Boolean IsEmpty() const;
  
  Standard_EXPORT     void Prepend(const Handle(BRep_CurveRepresentation)& I) ;
  
  Standard_EXPORT     void Prepend(const Handle(BRep_CurveRepresentation)& I,BRep_ListIteratorOfListOfCurveRepresentation& theIt) ;
  
  Standard_EXPORT     void Prepend(BRep_ListOfCurveRepresentation& Other) ;
  
  Standard_EXPORT     void Append(const Handle(BRep_CurveRepresentation)& I) ;
  
  Standard_EXPORT     void Append(const Handle(BRep_CurveRepresentation)& I,BRep_ListIteratorOfListOfCurveRepresentation& theIt) ;
  
  Standard_EXPORT     void Append(BRep_ListOfCurveRepresentation& Other) ;
  
  Standard_EXPORT     Handle_BRep_CurveRepresentation& First() const;
  
  Standard_EXPORT     Handle_BRep_CurveRepresentation& Last() const;
  
  Standard_EXPORT     void RemoveFirst() ;
  
  Standard_EXPORT     void Remove(BRep_ListIteratorOfListOfCurveRepresentation& It) ;
  
  Standard_EXPORT     void InsertBefore(const Handle(BRep_CurveRepresentation)& I,BRep_ListIteratorOfListOfCurveRepresentation& It) ;
  
  Standard_EXPORT     void InsertBefore(BRep_ListOfCurveRepresentation& Other,BRep_ListIteratorOfListOfCurveRepresentation& It) ;
  
  Standard_EXPORT     void InsertAfter(const Handle(BRep_CurveRepresentation)& I,BRep_ListIteratorOfListOfCurveRepresentation& It) ;
  
  Standard_EXPORT     void InsertAfter(BRep_ListOfCurveRepresentation& Other,BRep_ListIteratorOfListOfCurveRepresentation& It) ;


friend class BRep_ListIteratorOfListOfCurveRepresentation;



protected:





private:



Standard_Address myFirst;
Standard_Address myLast;


};

#define Item Handle_BRep_CurveRepresentation
#define Item_hxx <BRep_CurveRepresentation.hxx>
#define TCollection_ListNode BRep_ListNodeOfListOfCurveRepresentation
#define TCollection_ListNode_hxx <BRep_ListNodeOfListOfCurveRepresentation.hxx>
#define TCollection_ListIterator BRep_ListIteratorOfListOfCurveRepresentation
#define TCollection_ListIterator_hxx <BRep_ListIteratorOfListOfCurveRepresentation.hxx>
#define Handle_TCollection_ListNode Handle_BRep_ListNodeOfListOfCurveRepresentation
#define TCollection_ListNode_Type_() BRep_ListNodeOfListOfCurveRepresentation_Type_()
#define TCollection_List BRep_ListOfCurveRepresentation
#define TCollection_List_hxx <BRep_ListOfCurveRepresentation.hxx>

#include <TCollection_List.lxx>

#undef Item
#undef Item_hxx
#undef TCollection_ListNode
#undef TCollection_ListNode_hxx
#undef TCollection_ListIterator
#undef TCollection_ListIterator_hxx
#undef Handle_TCollection_ListNode
#undef TCollection_ListNode_Type_
#undef TCollection_List
#undef TCollection_List_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif
