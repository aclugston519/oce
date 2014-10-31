// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Interface_EntityIterator_HeaderFile
#define _Interface_EntityIterator_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Handle_Interface_IntVal_HeaderFile
#include <Handle_Interface_IntVal.hxx>
#endif
#ifndef _Handle_TColStd_HSequenceOfTransient_HeaderFile
#include <Handle_TColStd_HSequenceOfTransient.hxx>
#endif
#ifndef _Handle_Standard_Transient_HeaderFile
#include <Handle_Standard_Transient.hxx>
#endif
#ifndef _Handle_Standard_Type_HeaderFile
#include <Handle_Standard_Type.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Interface_IntVal;
class TColStd_HSequenceOfTransient;
class Standard_NoMoreObject;
class Standard_NoSuchObject;
class Standard_Transient;
class Standard_Type;


//! Defines an Iterator on Entities. <br>
//!           Allows considering of various criteria <br>
class Interface_EntityIterator  {
public:

  DEFINE_STANDARD_ALLOC

  //! Defines an empty iterator (see AddList & AddItem) <br>
  Standard_EXPORT   Interface_EntityIterator();
  //! Defines an iterator on a list, directly i.e. without copying it <br>
  Standard_EXPORT   Interface_EntityIterator(const Handle(TColStd_HSequenceOfTransient)& list);
  //! Gets a list of entities and adds its to the iteration list <br>
  Standard_EXPORT     void AddList(const Handle(TColStd_HSequenceOfTransient)& list) ;
  //! Adds to the iteration list a defined entity <br>
  Standard_EXPORT     void AddItem(const Handle(Standard_Transient)& anentity) ;
  //! same as AddItem (kept for compatibility) <br>
  Standard_EXPORT     void GetOneItem(const Handle(Standard_Transient)& anentity) ;
  //! Selects entities with are Kind of a given type,  keep only <br>
//!           them (is keep is True) or reject only them (if keep is False) <br>
  Standard_EXPORT     void SelectType(const Handle(Standard_Type)& atype,const Standard_Boolean keep) ;
  //! Returns count of entities which will be iterated on <br>
//!           Calls Start if not yet done <br>
  Standard_EXPORT     Standard_Integer NbEntities() const;
  //! Returns count of entities of a given type (kind of) <br>
  Standard_EXPORT     Standard_Integer NbTyped(const Handle(Standard_Type)& type) const;
  //! Returns the list of entities of a given type (kind of) <br>
  Standard_EXPORT     Interface_EntityIterator Typed(const Handle(Standard_Type)& type) const;
  //! Allows re-iteration (useless for the first iteration) <br>
  Standard_EXPORT   virtual  void Start() const;
  //! Says if there are other entities (vertices) to iterate <br>
//!           the first time, calls Start <br>
  Standard_EXPORT     Standard_Boolean More() const;
  //! Sets iteration to the next entity (vertex) to give <br>
  Standard_EXPORT     void Next() const;
  //! Returns the current Entity iterated, to be used by Interface <br>
//!           tools <br>
  Standard_EXPORT    const Handle_Standard_Transient& Value() const;
  //! Returns the content of the Iterator, accessed through a Handle <br>
//!           to be used by a frontal-engine logic <br>
//!           Returns an empty Sequence if the Iterator is empty <br>
//!           Calls Start if not yet done <br>
  Standard_EXPORT     Handle_TColStd_HSequenceOfTransient Content() const;
  //! Clears data of iteration <br>
  Standard_EXPORT   virtual  void Destroy() ;
Standard_EXPORT virtual ~Interface_EntityIterator() { Destroy();}





protected:

  //! Allows subclasses of EntityIterator to reevaluate an iteration <br>
  Standard_EXPORT     void Reset() ;




private:



Handle_Interface_IntVal thecurr;
Handle_TColStd_HSequenceOfTransient thelist;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
