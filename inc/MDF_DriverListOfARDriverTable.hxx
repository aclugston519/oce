// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _MDF_DriverListOfARDriverTable_HeaderFile
#define _MDF_DriverListOfARDriverTable_HeaderFile

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
#ifndef _Handle_MDF_ARDriver_HeaderFile
#include <Handle_MDF_ARDriver.hxx>
#endif
#ifndef _Handle_MDF_ListNodeOfDriverListOfARDriverTable_HeaderFile
#include <Handle_MDF_ListNodeOfDriverListOfARDriverTable.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class Standard_NoSuchObject;
class MDF_ListIteratorOfDriverListOfARDriverTable;
class MDF_ARDriver;
class MDF_ListNodeOfDriverListOfARDriverTable;



class MDF_DriverListOfARDriverTable  {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   MDF_DriverListOfARDriverTable();
  
  Standard_EXPORT   MDF_DriverListOfARDriverTable(const MDF_DriverListOfARDriverTable& Other);
  
  Standard_EXPORT     void Assign(const MDF_DriverListOfARDriverTable& Other) ;
    void operator=(const MDF_DriverListOfARDriverTable& Other) 
{
  Assign(Other);
}
  
  Standard_EXPORT     Standard_Integer Extent() const;
  
  Standard_EXPORT     void Clear() ;
~MDF_DriverListOfARDriverTable()
{
  Clear();
}
  
        Standard_Boolean IsEmpty() const;
  
  Standard_EXPORT     void Prepend(const Handle(MDF_ARDriver)& I) ;
  
  Standard_EXPORT     void Prepend(const Handle(MDF_ARDriver)& I,MDF_ListIteratorOfDriverListOfARDriverTable& theIt) ;
  
  Standard_EXPORT     void Prepend(MDF_DriverListOfARDriverTable& Other) ;
  
  Standard_EXPORT     void Append(const Handle(MDF_ARDriver)& I) ;
  
  Standard_EXPORT     void Append(const Handle(MDF_ARDriver)& I,MDF_ListIteratorOfDriverListOfARDriverTable& theIt) ;
  
  Standard_EXPORT     void Append(MDF_DriverListOfARDriverTable& Other) ;
  
  Standard_EXPORT     Handle_MDF_ARDriver& First() const;
  
  Standard_EXPORT     Handle_MDF_ARDriver& Last() const;
  
  Standard_EXPORT     void RemoveFirst() ;
  
  Standard_EXPORT     void Remove(MDF_ListIteratorOfDriverListOfARDriverTable& It) ;
  
  Standard_EXPORT     void InsertBefore(const Handle(MDF_ARDriver)& I,MDF_ListIteratorOfDriverListOfARDriverTable& It) ;
  
  Standard_EXPORT     void InsertBefore(MDF_DriverListOfARDriverTable& Other,MDF_ListIteratorOfDriverListOfARDriverTable& It) ;
  
  Standard_EXPORT     void InsertAfter(const Handle(MDF_ARDriver)& I,MDF_ListIteratorOfDriverListOfARDriverTable& It) ;
  
  Standard_EXPORT     void InsertAfter(MDF_DriverListOfARDriverTable& Other,MDF_ListIteratorOfDriverListOfARDriverTable& It) ;


friend class MDF_ListIteratorOfDriverListOfARDriverTable;



protected:





private:



Standard_Address myFirst;
Standard_Address myLast;


};

#define Item Handle_MDF_ARDriver
#define Item_hxx <MDF_ARDriver.hxx>
#define TCollection_ListNode MDF_ListNodeOfDriverListOfARDriverTable
#define TCollection_ListNode_hxx <MDF_ListNodeOfDriverListOfARDriverTable.hxx>
#define TCollection_ListIterator MDF_ListIteratorOfDriverListOfARDriverTable
#define TCollection_ListIterator_hxx <MDF_ListIteratorOfDriverListOfARDriverTable.hxx>
#define Handle_TCollection_ListNode Handle_MDF_ListNodeOfDriverListOfARDriverTable
#define TCollection_ListNode_Type_() MDF_ListNodeOfDriverListOfARDriverTable_Type_()
#define TCollection_List MDF_DriverListOfARDriverTable
#define TCollection_List_hxx <MDF_DriverListOfARDriverTable.hxx>

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
