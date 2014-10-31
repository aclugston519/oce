// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _XSDRAWIGES_HeaderFile
#define _XSDRAWIGES_HeaderFile

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


//! XSDRAW for IGES : commands IGESSelect, Controller, transfer <br>
class XSDRAWIGES  {
public:

  DEFINE_STANDARD_ALLOC

  //! Inits IGESSelect commands, for DRAW <br>
  Standard_EXPORT   static  void InitSelect() ;
  //! Inits IGESToBRep for DRAW <br>
  Standard_EXPORT   static  void InitToBRep(Draw_Interpretor& theCommands) ;
  //! Inits BRepToIGES for DRAW <br>
  Standard_EXPORT   static  void InitFromBRep(Draw_Interpretor& theCommands) ;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif
