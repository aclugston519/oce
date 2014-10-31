// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _DDF_Browser_HeaderFile
#define _DDF_Browser_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_DDF_Browser_HeaderFile
#include <Handle_DDF_Browser.hxx>
#endif

#ifndef _Handle_TDF_Data_HeaderFile
#include <Handle_TDF_Data.hxx>
#endif
#ifndef _TDF_AttributeIndexedMap_HeaderFile
#include <TDF_AttributeIndexedMap.hxx>
#endif
#ifndef _Draw_Drawable3D_HeaderFile
#include <Draw_Drawable3D.hxx>
#endif
#ifndef _Handle_Draw_Drawable3D_HeaderFile
#include <Handle_Draw_Drawable3D.hxx>
#endif
#ifndef _Standard_OStream_HeaderFile
#include <Standard_OStream.hxx>
#endif
#ifndef _Draw_Interpretor_HeaderFile
#include <Draw_Interpretor.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class TDF_Data;
class Draw_Display;
class Draw_Drawable3D;
class TCollection_AsciiString;
class TDF_Label;


//! Browses a data framework from TDF. <br>
class DDF_Browser : public Draw_Drawable3D {

public:

  
  Standard_EXPORT   DDF_Browser(const Handle(TDF_Data)& aDF);
  
  Standard_EXPORT     void DrawOn(Draw_Display& dis) const;
  
  Standard_EXPORT   virtual  Handle_Draw_Drawable3D Copy() const;
  
  Standard_EXPORT   virtual  void Dump(Standard_OStream& S) const;
  
  Standard_EXPORT   virtual  void Whatis(Draw_Interpretor& I) const;
  
  Standard_EXPORT     void Data(const Handle(TDF_Data)& aDF) ;
  
  Standard_EXPORT     Handle_TDF_Data Data() const;
  //! Returns a string composed with the sub-label <br>
//!          entries of <myDF>. <br>
  Standard_EXPORT     TCollection_AsciiString OpenRoot() const;
  //! Returns a string composed with the sub-label <br>
//!          entries of <aLab>. <br>
  Standard_EXPORT     TCollection_AsciiString OpenLabel(const TDF_Label& aLab) const;
  //! Returns a string composed with the attribute index <br>
//!          (found in <myAttMap>) of <aLab>. <br>
  Standard_EXPORT     TCollection_AsciiString OpenAttributeList(const TDF_Label& aLab) ;
  //! Returns a string composed with the list of <br>
//!          referenced attribute index of the attribute <br>
//!          <anIndex>. For exemple, it is usefull for <br>
//!          TDataStd_Group. It uses a mecanism based on a <br>
//!          DDF_AttributeBrowser. <br>
  Standard_EXPORT     TCollection_AsciiString OpenAttribute(const Standard_Integer anIndex = 0) ;
  //! Returns information about <me> to be displayed in <br>
//!          information window. <br>
  Standard_EXPORT     TCollection_AsciiString Information() const;
  //! Returns information about <aLab> to be displayed <br>
//!          in information window. <br>
  Standard_EXPORT     TCollection_AsciiString Information(const TDF_Label& aLab) const;
  //! Returns information about attribute <anIndex> to <br>
//!          be displayed in information window. <br>
  Standard_EXPORT     TCollection_AsciiString Information(const Standard_Integer anIndex = 0) const;




  DEFINE_STANDARD_RTTI(DDF_Browser)

protected:




private: 


Handle_TDF_Data myDF;
TDF_AttributeIndexedMap myAttMap;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
