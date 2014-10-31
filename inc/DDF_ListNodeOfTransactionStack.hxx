// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _DDF_ListNodeOfTransactionStack_HeaderFile
#define _DDF_ListNodeOfTransactionStack_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_DDF_ListNodeOfTransactionStack_HeaderFile
#include <Handle_DDF_ListNodeOfTransactionStack.hxx>
#endif

#ifndef _Handle_DDF_Transaction_HeaderFile
#include <Handle_DDF_Transaction.hxx>
#endif
#ifndef _TCollection_MapNode_HeaderFile
#include <TCollection_MapNode.hxx>
#endif
#ifndef _TCollection_MapNodePtr_HeaderFile
#include <TCollection_MapNodePtr.hxx>
#endif
class DDF_Transaction;
class DDF_TransactionStack;
class DDF_ListIteratorOfTransactionStack;



class DDF_ListNodeOfTransactionStack : public TCollection_MapNode {

public:

  
      DDF_ListNodeOfTransactionStack(const Handle(DDF_Transaction)& I,const TCollection_MapNodePtr& n);
  
        Handle_DDF_Transaction& Value() const;




  DEFINE_STANDARD_RTTI(DDF_ListNodeOfTransactionStack)

protected:




private: 


Handle_DDF_Transaction myValue;


};

#define Item Handle_DDF_Transaction
#define Item_hxx <DDF_Transaction.hxx>
#define TCollection_ListNode DDF_ListNodeOfTransactionStack
#define TCollection_ListNode_hxx <DDF_ListNodeOfTransactionStack.hxx>
#define TCollection_ListIterator DDF_ListIteratorOfTransactionStack
#define TCollection_ListIterator_hxx <DDF_ListIteratorOfTransactionStack.hxx>
#define Handle_TCollection_ListNode Handle_DDF_ListNodeOfTransactionStack
#define TCollection_ListNode_Type_() DDF_ListNodeOfTransactionStack_Type_()
#define TCollection_List DDF_TransactionStack
#define TCollection_List_hxx <DDF_TransactionStack.hxx>

#include <TCollection_ListNode.lxx>

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
