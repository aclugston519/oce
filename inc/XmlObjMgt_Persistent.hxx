// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _XmlObjMgt_Persistent_HeaderFile
#define _XmlObjMgt_Persistent_HeaderFile

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


//! root for XML-persistence <br>
class XmlObjMgt_Persistent  {
public:

  DEFINE_STANDARD_ALLOC

  //! empty constructor <br>
  Standard_EXPORT   XmlObjMgt_Persistent();
  //! constructor <br>
  Standard_EXPORT   XmlObjMgt_Persistent(const XmlObjMgt_Element& theElement);
  //! constructor from sub-element of Element referenced by theRef <br>
  Standard_EXPORT   XmlObjMgt_Persistent(const XmlObjMgt_Element& theElement,const XmlObjMgt_DOMString& theRef);
  //! myElement := <theType id="theID"/> <br>
  Standard_EXPORT     void CreateElement(XmlObjMgt_Element& theParent,const XmlObjMgt_DOMString& theType,const Standard_Integer theID) ;
  
  Standard_EXPORT     void SetId(const Standard_Integer theId) ;
  //! return myElement <br>
       const XmlObjMgt_Element& Element() const;
inline operator const XmlObjMgt_Element&() const;
  //! return myElement <br>
        XmlObjMgt_Element& Element() ;
inline operator XmlObjMgt_Element&();
  
        Standard_Integer Id() const;





protected:





private:



XmlObjMgt_Element myElement;
Standard_Integer myID;


};


#include <XmlObjMgt_Persistent.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif
