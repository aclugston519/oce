// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopOpeBRepBuild_ListOfLoop_HeaderFile
#define _TopOpeBRepBuild_ListOfLoop_HeaderFile

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
#ifndef _Handle_TopOpeBRepBuild_Loop_HeaderFile
#include <Handle_TopOpeBRepBuild_Loop.hxx>
#endif
#ifndef _Handle_TopOpeBRepBuild_ListNodeOfListOfLoop_HeaderFile
#include <Handle_TopOpeBRepBuild_ListNodeOfListOfLoop.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class Standard_NoSuchObject;
class TopOpeBRepBuild_ListIteratorOfListOfLoop;
class TopOpeBRepBuild_Loop;
class TopOpeBRepBuild_ListNodeOfListOfLoop;



class TopOpeBRepBuild_ListOfLoop  {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   TopOpeBRepBuild_ListOfLoop();
  
  Standard_EXPORT   TopOpeBRepBuild_ListOfLoop(const TopOpeBRepBuild_ListOfLoop& Other);
  
  Standard_EXPORT     void Assign(const TopOpeBRepBuild_ListOfLoop& Other) ;
    void operator=(const TopOpeBRepBuild_ListOfLoop& Other) 
{
  Assign(Other);
}
  
  Standard_EXPORT     Standard_Integer Extent() const;
  
  Standard_EXPORT     void Clear() ;
~TopOpeBRepBuild_ListOfLoop()
{
  Clear();
}
  
        Standard_Boolean IsEmpty() const;
  
  Standard_EXPORT     void Prepend(const Handle(TopOpeBRepBuild_Loop)& I) ;
  
  Standard_EXPORT     void Prepend(const Handle(TopOpeBRepBuild_Loop)& I,TopOpeBRepBuild_ListIteratorOfListOfLoop& theIt) ;
  
  Standard_EXPORT     void Prepend(TopOpeBRepBuild_ListOfLoop& Other) ;
  
  Standard_EXPORT     void Append(const Handle(TopOpeBRepBuild_Loop)& I) ;
  
  Standard_EXPORT     void Append(const Handle(TopOpeBRepBuild_Loop)& I,TopOpeBRepBuild_ListIteratorOfListOfLoop& theIt) ;
  
  Standard_EXPORT     void Append(TopOpeBRepBuild_ListOfLoop& Other) ;
  
  Standard_EXPORT     Handle_TopOpeBRepBuild_Loop& First() const;
  
  Standard_EXPORT     Handle_TopOpeBRepBuild_Loop& Last() const;
  
  Standard_EXPORT     void RemoveFirst() ;
  
  Standard_EXPORT     void Remove(TopOpeBRepBuild_ListIteratorOfListOfLoop& It) ;
  
  Standard_EXPORT     void InsertBefore(const Handle(TopOpeBRepBuild_Loop)& I,TopOpeBRepBuild_ListIteratorOfListOfLoop& It) ;
  
  Standard_EXPORT     void InsertBefore(TopOpeBRepBuild_ListOfLoop& Other,TopOpeBRepBuild_ListIteratorOfListOfLoop& It) ;
  
  Standard_EXPORT     void InsertAfter(const Handle(TopOpeBRepBuild_Loop)& I,TopOpeBRepBuild_ListIteratorOfListOfLoop& It) ;
  
  Standard_EXPORT     void InsertAfter(TopOpeBRepBuild_ListOfLoop& Other,TopOpeBRepBuild_ListIteratorOfListOfLoop& It) ;


friend class TopOpeBRepBuild_ListIteratorOfListOfLoop;



protected:





private:



Standard_Address myFirst;
Standard_Address myLast;


};

#define Item Handle_TopOpeBRepBuild_Loop
#define Item_hxx <TopOpeBRepBuild_Loop.hxx>
#define TCollection_ListNode TopOpeBRepBuild_ListNodeOfListOfLoop
#define TCollection_ListNode_hxx <TopOpeBRepBuild_ListNodeOfListOfLoop.hxx>
#define TCollection_ListIterator TopOpeBRepBuild_ListIteratorOfListOfLoop
#define TCollection_ListIterator_hxx <TopOpeBRepBuild_ListIteratorOfListOfLoop.hxx>
#define Handle_TCollection_ListNode Handle_TopOpeBRepBuild_ListNodeOfListOfLoop
#define TCollection_ListNode_Type_() TopOpeBRepBuild_ListNodeOfListOfLoop_Type_()
#define TCollection_List TopOpeBRepBuild_ListOfLoop
#define TCollection_List_hxx <TopOpeBRepBuild_ListOfLoop.hxx>

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
