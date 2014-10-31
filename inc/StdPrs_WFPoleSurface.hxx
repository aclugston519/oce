// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StdPrs_WFPoleSurface_HeaderFile
#define _StdPrs_WFPoleSurface_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Prs3d_Root_HeaderFile
#include <Prs3d_Root.hxx>
#endif
#ifndef _Handle_Prs3d_Presentation_HeaderFile
#include <Handle_Prs3d_Presentation.hxx>
#endif
#ifndef _Handle_Prs3d_Drawer_HeaderFile
#include <Handle_Prs3d_Drawer.hxx>
#endif
class Prs3d_Presentation;
class Adaptor3d_Surface;
class Prs3d_Drawer;


//! Computes the presentation of surfaces by drawing a <br>
//!          double network of lines linking the poles of the surface <br>
//!          in the two parametric direction. <br>
//!          The number of lines to be drawn is controlled <br>
//!          by the NetworkNumber of the given Drawer. <br>
class StdPrs_WFPoleSurface  : public Prs3d_Root {
public:

  DEFINE_STANDARD_ALLOC

  //! Adds the surface aSurface to the presentation object aPresentation. <br>
//! The shape's display attributes are set in the attribute manager aDrawer. <br>
//! The surface aSurface is a surface object from <br>
//! Adaptor3d, and provides data from a Geom surface. <br>
//! This makes it possible to use the surface in a geometric algorithm. <br>
  Standard_EXPORT   static  void Add(const Handle(Prs3d_Presentation)& aPresentation,const Adaptor3d_Surface& aSurface,const Handle(Prs3d_Drawer)& aDrawer) ;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif
