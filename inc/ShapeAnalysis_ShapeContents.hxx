// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _ShapeAnalysis_ShapeContents_HeaderFile
#define _ShapeAnalysis_ShapeContents_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_TopTools_HSequenceOfShape_HeaderFile
#include <Handle_TopTools_HSequenceOfShape.hxx>
#endif
class TopTools_HSequenceOfShape;
class TopoDS_Shape;


//! Dumps shape contents <br>
class ShapeAnalysis_ShapeContents  {
public:

  DEFINE_STANDARD_ALLOC

  //! Initialize fields and call ClearFlags() <br>
  Standard_EXPORT   ShapeAnalysis_ShapeContents();
  //! Clears all accumulated statictics <br>
  Standard_EXPORT     void Clear() ;
  //! Clears all flags <br>
  Standard_EXPORT     void ClearFlags() ;
  //! Counts quantities of sun-shapes in shape and <br>
//!          stores sub-shapes according to flags <br>
  Standard_EXPORT     void Perform(const TopoDS_Shape& shape) ;
  //! Returns (modifiable) the flag which defines whether to store faces <br>
//!          with edges if its 3D curves has more than 8192 poles. <br>
        Standard_Boolean& ModifyBigSplineMode() ;
  //! Returns (modifiable) the flag which defines whether to store faces <br>
//!          on indirect surfaces <br>
        Standard_Boolean& ModifyIndirectMode() ;
  //! Returns (modifiable) the flag which defines whether to store faces <br>
//!          on offset surfaces. <br>
        Standard_Boolean& ModifyOffestSurfaceMode() ;
  //! Returns (modifiable) the flag which defines whether to store faces <br>
//!          with edges if ist 3D curves are trimmed curves <br>
        Standard_Boolean& ModifyTrimmed3dMode() ;
  //! Returns (modifiable) the flag which defines whether to store faces <br>
//!          with edges if its 3D curves and pcurves are offest curves <br>
        Standard_Boolean& ModifyOffsetCurveMode() ;
  //! Returns (modifiable) the flag which defines whether to store faces <br>
//!          with edges if its  pcurves are trimmed curves <br>
        Standard_Boolean& ModifyTrimmed2dMode() ;
  
        Standard_Integer NbSolids() const;
  
        Standard_Integer NbShells() const;
  
        Standard_Integer NbFaces() const;
  
        Standard_Integer NbWires() const;
  
        Standard_Integer NbEdges() const;
  
        Standard_Integer NbVertices() const;
  
        Standard_Integer NbSolidsWithVoids() const;
  
        Standard_Integer NbBigSplines() const;
  
        Standard_Integer NbC0Surfaces() const;
  
        Standard_Integer NbC0Curves() const;
  
        Standard_Integer NbOffsetSurf() const;
  
        Standard_Integer NbIndirectSurf() const;
  
        Standard_Integer NbOffsetCurves() const;
  
        Standard_Integer NbTrimmedCurve2d() const;
  
        Standard_Integer NbTrimmedCurve3d() const;
  
        Standard_Integer NbBSplibeSurf() const;
  
        Standard_Integer NbBezierSurf() const;
  
        Standard_Integer NbTrimSurf() const;
  
        Standard_Integer NbWireWitnSeam() const;
  
        Standard_Integer NbWireWithSevSeams() const;
  
        Standard_Integer NbFaceWithSevWires() const;
  
        Standard_Integer NbNoPCurve() const;
  
        Standard_Integer NbFreeFaces() const;
  
        Standard_Integer NbFreeWires() const;
  
        Standard_Integer NbFreeEdges() const;
  
        Standard_Integer NbSharedSolids() const;
  
        Standard_Integer NbSharedShells() const;
  
        Standard_Integer NbSharedFaces() const;
  
        Standard_Integer NbSharedWires() const;
  
        Standard_Integer NbSharedFreeWires() const;
  
        Standard_Integer NbSharedFreeEdges() const;
  
        Standard_Integer NbSharedEdges() const;
  
        Standard_Integer NbSharedVertices() const;
  
        Handle_TopTools_HSequenceOfShape BigSplineSec() const;
  
        Handle_TopTools_HSequenceOfShape IndirectSec() const;
  
        Handle_TopTools_HSequenceOfShape OffsetSurfaceSec() const;
  
        Handle_TopTools_HSequenceOfShape Trimmed3dSec() const;
  
        Handle_TopTools_HSequenceOfShape OffsetCurveSec() const;
  
        Handle_TopTools_HSequenceOfShape Trimmed2dSec() const;





protected:





private:



Standard_Integer myNbSolids;
Standard_Integer myNbShells;
Standard_Integer myNbFaces;
Standard_Integer myNbWires;
Standard_Integer myNbEdges;
Standard_Integer myNbVertices;
Standard_Integer myNbSolidsWithVoids;
Standard_Integer myNbBigSplines;
Standard_Integer myNbC0Surfaces;
Standard_Integer myNbC0Curves;
Standard_Integer myNbOffsetSurf;
Standard_Integer myNbIndirectSurf;
Standard_Integer myNbOffsetCurves;
Standard_Integer myNbTrimmedCurve2d;
Standard_Integer myNbTrimmedCurve3d;
Standard_Integer myNbBSplibeSurf;
Standard_Integer myNbBezierSurf;
Standard_Integer myNbTrimSurf;
Standard_Integer myNbWireWitnSeam;
Standard_Integer myNbWireWithSevSeams;
Standard_Integer myNbFaceWithSevWires;
Standard_Integer myNbNoPCurve;
Standard_Integer myNbFreeFaces;
Standard_Integer myNbFreeWires;
Standard_Integer myNbFreeEdges;
Standard_Integer myNbSharedSolids;
Standard_Integer myNbSharedShells;
Standard_Integer myNbSharedFaces;
Standard_Integer myNbSharedWires;
Standard_Integer myNbSharedFreeWires;
Standard_Integer myNbSharedFreeEdges;
Standard_Integer myNbSharedEdges;
Standard_Integer myNbSharedVertices;
Standard_Boolean myBigSplineMode;
Standard_Boolean myIndirectMode;
Standard_Boolean myOffestSurfaceMode;
Standard_Boolean myTrimmed3dMode;
Standard_Boolean myOffsetCurveMode;
Standard_Boolean myTrimmed2dMode;
Handle_TopTools_HSequenceOfShape myBigSplineSec;
Handle_TopTools_HSequenceOfShape myIndirectSec;
Handle_TopTools_HSequenceOfShape myOffsetSurfaceSec;
Handle_TopTools_HSequenceOfShape myTrimmed3dSec;
Handle_TopTools_HSequenceOfShape myOffsetCurveSec;
Handle_TopTools_HSequenceOfShape myTrimmed2dSec;


};


#include <ShapeAnalysis_ShapeContents.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif
