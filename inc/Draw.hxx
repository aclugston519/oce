// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Draw_HeaderFile
#define _Draw_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Draw_Interpretor_HeaderFile
#include <Draw_Interpretor.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_CString_HeaderFile
#include <Standard_CString.hxx>
#endif
#ifndef _Handle_Draw_Drawable3D_HeaderFile
#include <Handle_Draw_Drawable3D.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_Draw_ProgressIndicator_HeaderFile
#include <Handle_Draw_ProgressIndicator.hxx>
#endif
class TCollection_AsciiString;
class Draw_Drawable3D;
class Draw_ProgressIndicator;
class Draw_Drawable3D;
class Draw_Drawable2D;
class Draw_Color;
class Draw_Display;
class Draw_Segment3D;
class Draw_Segment2D;
class Draw_Marker3D;
class Draw_Marker2D;
class Draw_Axis3D;
class Draw_Axis2D;
class Draw_Text3D;
class Draw_Text2D;
class Draw_Circle3D;
class Draw_Circle2D;
class Draw_Number;
class Draw_Chronometer;
class Draw_Grid;
class Draw_Box;
class Draw_SequenceOfDrawable3D;
class Draw_ProgressIndicator;
class Draw_Printer;
class Draw_MapOfAsciiString;
class Draw_SequenceNodeOfSequenceOfDrawable3D;
class Draw_IndexedMapNodeOfMapOfAsciiString;


//! MAQUETTE DESSIN MODELISATION <br>
class Draw  {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   static  void Load(Draw_Interpretor& theDI,const TCollection_AsciiString& theKey,const TCollection_AsciiString& theResourceFileName,TCollection_AsciiString& theDefaultsDirectory,TCollection_AsciiString& theUserDefaultsDirectory,const Standard_Boolean Verbose = Standard_False) ;
  //! Sets a variable. Display it if <Disp> is true. <br>
  Standard_EXPORT   static  void Set(const Standard_CString Name,const Handle(Draw_Drawable3D)& D,const Standard_Boolean Disp) ;
  //! Sets a    variable,  a  null   handle    clear the <br>
//!          vartiable. Automatic display is context driven. <br>
  Standard_EXPORT   static  void Set(const Standard_CString Name,const Handle(Draw_Drawable3D)& D) ;
  //! Sets a numeric variable. <br>
  Standard_EXPORT   static  void Set(const Standard_CString Name,const Standard_Real val) ;
  //! Returns a variable  value.  Null if  the  variable <br>
//!          does not exist, a warning  is printed if  Complain <br>
//!          is True. <br>
//! <br>
//!          The name "."   does a graphic  selection.   If the <br>
//!          selection is a variable <Name> is overwritten with <br>
//!          the name of the variable. <br>
  Standard_EXPORT   static  Handle_Draw_Drawable3D Get(Standard_CString& Name,const Standard_Boolean Complain = Standard_True) ;
  //! Gets a   numeric  variable. Returns  True   if the <br>
//!          variable exist. <br>
  Standard_EXPORT   static  Standard_Boolean Get(const Standard_CString Name,Standard_Real& val) ;
  //! Sets a TCL sting variable <br>
  Standard_EXPORT   static  void Set(const Standard_CString Name,const Standard_CString val) ;
  //! Converts numeric expression, that can involve DRAW <br>
//!          variables, to real value. <br>
  Standard_EXPORT   static  Standard_Real Atof(const Standard_CString Name) ;
  //! Converts numeric expression, that can involve DRAW <br>
//!          variables, to integer value. <br>
//!          Implemented as cast of Atof() to integer. <br>
  Standard_EXPORT   static  Standard_Integer Atoi(const Standard_CString Name) ;
  //! Returns last graphic selection description. <br>
  Standard_EXPORT   static  void LastPick(Standard_Integer& view,Standard_Integer& X,Standard_Integer& Y,Standard_Integer& button) ;
  //! Asks to repaint the screen after the current command. <br>
  Standard_EXPORT   static  void Repaint() ;
  //! sets progress indicator <br>
  Standard_EXPORT   static  void SetProgressBar(const Handle(Draw_ProgressIndicator)& thePI) ;
  //! gets progress indicator <br>
  Standard_EXPORT   static  Handle_Draw_ProgressIndicator GetProgressBar() ;
  //! Defines all Draw commands <br>
  Standard_EXPORT   static  void Commands(Draw_Interpretor& I) ;
  //! Defines Draw basic commands <br>
  Standard_EXPORT   static  void BasicCommands(Draw_Interpretor& I) ;
  //! Defines Draw variables handling commands. <br>
  Standard_EXPORT   static  void VariableCommands(Draw_Interpretor& I) ;
  //! Defines Draw variables handling commands. <br>
  Standard_EXPORT   static  void GraphicCommands(Draw_Interpretor& I) ;
  //! Defines Loads Draw plugins commands. <br>
  Standard_EXPORT   static  void PloadCommands(Draw_Interpretor& I) ;
  //! Defines Draw unit commands <br>
  Standard_EXPORT   static  void UnitCommands(Draw_Interpretor& I) ;





protected:





private:




friend class Draw_Drawable3D;
friend class Draw_Drawable2D;
friend class Draw_Color;
friend class Draw_Display;
friend class Draw_Segment3D;
friend class Draw_Segment2D;
friend class Draw_Marker3D;
friend class Draw_Marker2D;
friend class Draw_Axis3D;
friend class Draw_Axis2D;
friend class Draw_Text3D;
friend class Draw_Text2D;
friend class Draw_Circle3D;
friend class Draw_Circle2D;
friend class Draw_Number;
friend class Draw_Chronometer;
friend class Draw_Grid;
friend class Draw_Box;
friend class Draw_SequenceOfDrawable3D;
friend class Draw_ProgressIndicator;
friend class Draw_Printer;
friend class Draw_MapOfAsciiString;
friend class Draw_SequenceNodeOfSequenceOfDrawable3D;
friend class Draw_IndexedMapNodeOfMapOfAsciiString;

};





// other Inline functions and methods (like "C++: function call" methods)


#endif
