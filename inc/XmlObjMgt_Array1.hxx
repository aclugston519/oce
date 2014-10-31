// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _XmlObjMgt_Array1_HeaderFile
#define _XmlObjMgt_Array1_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _XmlObjMgt_Element_HeaderFile
#include <XmlObjMgt_Element.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _XmlObjMgt_DOMString_HeaderFile
#include <XmlObjMgt_DOMString.hxx>
#endif


//! The class Array1 represents unidimensionnal <br>
//! array of fixed size known at run time. <br>
//! The range of the index is user defined. <br>
//!  Warning: Programs clients of such class must be independant <br>
//! of the range of the first element. Then, a C++ for <br>
//! loop must be written like this <br>
//!     for (i = A->Lower(); i <= A->Upper(); i++) <br>
class XmlObjMgt_Array1  {
public:

  DEFINE_STANDARD_ALLOC

  //! Create an array of lower bound <Low> and <br>
//! upper bound <Up>. Range error is raised <br>
//! when <Up> is less than <Low>. <br>
  Standard_EXPORT   XmlObjMgt_Array1(const Standard_Integer Low,const Standard_Integer Up);
  //! for restoration from DOM_Element which is child of <br>
//!          theParent: <br>
//!             <theParent ...> <br>
//!                 <theName ...> <br>
  Standard_EXPORT   XmlObjMgt_Array1(const XmlObjMgt_Element& theParent,const XmlObjMgt_DOMString& theName);
  //! Create DOM_Element representing the array, under 'theParent' <br>
  Standard_EXPORT     void CreateArrayElement(XmlObjMgt_Element& theParent,const XmlObjMgt_DOMString& theName) ;
  //!  Returns the DOM element of <me>. <br>
       const XmlObjMgt_Element& Element() const;
  //!  Returns the number of elements of <me>. <br>
        Standard_Integer Length() const;
  //! Returns the lower bound. <br>
        Standard_Integer Lower() const;
  //! Returns the upper bound. <br>
        Standard_Integer Upper() const;
  //! Set the <Index>th element of the array to <Value>. <br>
  Standard_EXPORT     void SetValue(const Standard_Integer Index,XmlObjMgt_Element& Value) ;
  //! Returns the value of <Index>th element of the array. <br>
  Standard_EXPORT     XmlObjMgt_Element Value(const Standard_Integer Index) const;





protected:





private:



XmlObjMgt_Element myElement;
Standard_Integer myFirst;
Standard_Integer myLast;


};


#include <XmlObjMgt_Array1.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif
