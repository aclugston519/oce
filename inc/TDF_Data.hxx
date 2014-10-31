// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TDF_Data_HeaderFile
#define _TDF_Data_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_TDF_Data_HeaderFile
#include <Handle_TDF_Data.hxx>
#endif

#ifndef _TDF_LabelNodePtr_HeaderFile
#include <TDF_LabelNodePtr.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _TColStd_ListOfInteger_HeaderFile
#include <TColStd_ListOfInteger.hxx>
#endif
#ifndef _TDF_HAllocator_HeaderFile
#include <TDF_HAllocator.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _TDF_Label_HeaderFile
#include <TDF_Label.hxx>
#endif
#ifndef _Handle_TDF_Delta_HeaderFile
#include <Handle_TDF_Delta.hxx>
#endif
#ifndef _Standard_OStream_HeaderFile
#include <Standard_OStream.hxx>
#endif
class Standard_NoMoreObject;
class TDF_Transaction;
class TDF_LabelNode;
class TDF_Delta;
class TDF_Label;


//! This class is used to manipulate a complete <br>
//!          independant, self sufficient data structure and <br>
//!          its services: <br>
//! <br>
//!          Access to the root label; <br>
//! <br>
//!          Opens, aborts, commits a transaction; <br>
//! <br>
//!          Generation and use of Delta, depending on the time. <br>
//! This class uses a special allocator <br>
//! (see LabelNodeAllocator() method) <br>
//!  for more efficient allocation of <br>
//!  objects in memory. <br>
class TDF_Data : public MMgt_TShared {

public:

  //! A new and empty Data structure. <br>
  Standard_EXPORT   TDF_Data();
  //! Returns the root label of the Data structure. <br>
//! <br>
       const TDF_Label Root() const;
  //! Returns the current transaction number. <br>
  Standard_EXPORT     Standard_Integer Transaction() const;
  //! Returns the current tick. It is incremented each Commit. <br>
//! <br>
        Standard_Integer Time() const;
  //! Returns true if <aDelta> is applicable HERE and NOW. <br>
  Standard_EXPORT     Standard_Boolean IsApplicable(const Handle(TDF_Delta)& aDelta) const;
  //! Apply <aDelta> to undo a set of attribute <br>
//!          modifications. <br>
//! <br>
//!          Optionnal <withDelta> set to True indiquates a <br>
//!          Delta Set must be generated. (See above) <br>
  Standard_EXPORT     Handle_TDF_Delta Undo(const Handle(TDF_Delta)& aDelta,const Standard_Boolean withDelta = Standard_False) ;
  
  Standard_EXPORT     void Destroy() ;
~TDF_Data()
{
  Destroy();
}
  //! Returns the undo mode status. <br>
//! <br>
        Standard_Boolean NotUndoMode() const;
  //! Dumps the Data on <aStream>. <br>
//! <br>
  Standard_EXPORT     Standard_OStream& Dump(Standard_OStream& anOS) const;
    Standard_OStream& operator<<(Standard_OStream& anOS) const
{
  return Dump(anOS);
}
  //! Sets modification mode. <br>
//! <br>
        void AllowModification(const Standard_Boolean isAllowed) ;
  //! returns modification mode. <br>
//! <br>
        Standard_Boolean IsModificationAllowed() const;
  //! Returns TDF_HAllocator, which is an <br>
//! incremental allocator used by <br>
//! TDF_LabelNode. <br>
//!      This allocator is used to <br>
//!      manage TDF_LabelNode objects, <br>
//!      but it can also be used for <br>
//!      allocating memory to <br>
//!      application-specific data (be <br>
//!      careful because this <br>
//!      allocator does not release <br>
//!      the memory). <br>
//!      The benefits of this <br>
//!      allocation scheme are <br>
//!      noticeable when dealing with <br>
//!      large OCAF documents, due to: <br>
//! 1.    Very quick allocation of <br>
//!   objects (memory heap is not <br>
//!   used, the algorithm that <br>
//!   replaces it is very simple). <br>
//! 2.    Very quick destruction of <br>
//!   objects (memory is released not <br>
//!   by destructors of TDF_LabelNode, <br>
//!   but rather by the destructor of <br>
//!   TDF_Data). <br>
//! 3.  TDF_LabelNode objects do not <br>
//!   fragmentize the memory; they are <br>
//!   kept compactly in a number of <br>
//!   arrays of 16K each. <br>
//! 4.    Swapping is reduced on large <br>
//!   data, because each document now <br>
//!   occupies a smaller number of <br>
//!   memory pages. <br>
       const TDF_HAllocator& LabelNodeAllocator() const;

friend class TDF_Transaction;
friend class TDF_LabelNode;


  DEFINE_STANDARD_RTTI(TDF_Data)

protected:




private: 

  //! Increments the transaction number and returns it. <br>
  Standard_EXPORT     Standard_Integer OpenTransaction() ;
  //! Decrements the transaction number and commits the <br>
//!          modifications. <br>
//! <br>
//!          Raises if there is no current transaction. <br>
//! <br>
//!          Optionnal <withDelta> set to True indiquates a <br>
//!          Delta must be generated. <br>
  Standard_EXPORT     Handle_TDF_Delta CommitTransaction(const Standard_Boolean withDelta = Standard_False) ;
  //! Decrements the transaction number and commits the <br>
//!          modifications until AND including the transaction <br>
//!          <untilTransaction>. <br>
  Standard_EXPORT     Handle_TDF_Delta CommitUntilTransaction(const Standard_Integer untilTransaction,const Standard_Boolean withDelta = Standard_False) ;
  //! Decrements the transaction number and forgets the <br>
//!          modifications. <br>
//! <br>
//!          Raises if there is no current transaction. <br>
  Standard_EXPORT     void AbortTransaction() ;
  //! Decrements the transaction number and forgets the <br>
//!          modifications until AND including the transaction <br>
//!          <untilTransaction>. <br>
  Standard_EXPORT     void AbortUntilTransaction(const Standard_Integer untilTransaction) ;
  //! Decrements the transaction number and commits the <br>
//!          modifications. Used to implement the recursif <br>
//!          commit process. The returned boolean says how many <br>
//!          attributes (new, modified or deleted) has been <br>
//!          committed from the previous transaction into the <br>
//!          current one. <br>
  Standard_EXPORT     Standard_Integer CommitTransaction(const TDF_Label& aLabel,const Handle(TDF_Delta)& aDelta,const Standard_Boolean withDelta) ;

TDF_LabelNodePtr myRoot;
Standard_Integer myTransaction;
Standard_Integer myNbTouchedAtt;
Standard_Boolean myNotUndoMode;
Standard_Integer myTime;
TColStd_ListOfInteger myTimes;
TDF_HAllocator myLabelNodeAllocator;
Standard_Boolean myAllowModification;


};


#include <TDF_Data.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif
