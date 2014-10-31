// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Convert_GridPolynomialToPoles_HeaderFile
#define _Convert_GridPolynomialToPoles_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Handle_TColStd_HArray1OfReal_HeaderFile
#include <Handle_TColStd_HArray1OfReal.hxx>
#endif
#ifndef _Handle_TColStd_HArray1OfInteger_HeaderFile
#include <Handle_TColStd_HArray1OfInteger.hxx>
#endif
#ifndef _Handle_TColgp_HArray2OfPnt_HeaderFile
#include <Handle_TColgp_HArray2OfPnt.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_TColStd_HArray2OfInteger_HeaderFile
#include <Handle_TColStd_HArray2OfInteger.hxx>
#endif
class TColStd_HArray1OfReal;
class TColStd_HArray1OfInteger;
class TColgp_HArray2OfPnt;
class Standard_DomainError;
class StdFail_NotDone;
class TColStd_HArray2OfInteger;


//! Convert a grid of Polynomial Surfaces <br>
//!          that are have continuity CM to an <br>
//!          Bspline Surface that has continuity <br>
//!          CM <br>
class Convert_GridPolynomialToPoles  {
public:

  DEFINE_STANDARD_ALLOC

  //!  To    only  one   polynomial  Surface. <br>
//!          The  Length  of  <PolynomialUIntervals> and <PolynomialVIntervals> <br>
//!          have to be 2. <br>
//!          This values defined the parametric domain of the Polynomial Equation. <br>
//! <br>
//!          Coefficients : <br>
//!           The <Coefficients> have to be formated than an "C array" <br>
//!          [MaxUDegree+1] [MaxVDegree+1] [3] <br>
//! <br>
  Standard_EXPORT   Convert_GridPolynomialToPoles(const Standard_Integer MaxUDegree,const Standard_Integer MaxVDegree,const Handle(TColStd_HArray1OfInteger)& NumCoeff,const Handle(TColStd_HArray1OfReal)& Coefficients,const Handle(TColStd_HArray1OfReal)& PolynomialUIntervals,const Handle(TColStd_HArray1OfReal)& PolynomialVIntervals);
  //! To one grid of polynomial Surface. <br>
//!  Warning! <br>
//!  Continuity in each parametric direction can be at MOST the <br>
//!  maximum degree of the polynomial functions. <br>
//! <br>
//!  <TrueUIntervals>, <TrueVIntervals> : <br>
//!  this is the true parameterisation for the composite surface <br>
//! <br>
//!  Coefficients : <br>
//!  The Coefficients have to be formated than an "C array" <br>
//!          [NbVSurfaces] [NBUSurfaces] [MaxUDegree+1] [MaxVDegree+1] [3] <br>
//!  raises DomainError    if <NumCoeffPerSurface> is not a <br>
//! [1, NbVSurfaces*NbUSurfaces, 1,2] array. <br>
//! if <Coefficients> is not a <br>
  Standard_EXPORT   Convert_GridPolynomialToPoles(const Standard_Integer NbUSurfaces,const Standard_Integer NBVSurfaces,const Standard_Integer UContinuity,const Standard_Integer VContinuity,const Standard_Integer MaxUDegree,const Standard_Integer MaxVDegree,const Handle(TColStd_HArray2OfInteger)& NumCoeffPerSurface,const Handle(TColStd_HArray1OfReal)& Coefficients,const Handle(TColStd_HArray1OfReal)& PolynomialUIntervals,const Handle(TColStd_HArray1OfReal)& PolynomialVIntervals,const Handle(TColStd_HArray1OfReal)& TrueUIntervals,const Handle(TColStd_HArray1OfReal)& TrueVIntervals);
  
  Standard_EXPORT     void Perform(const Standard_Integer UContinuity,const Standard_Integer VContinuity,const Standard_Integer MaxUDegree,const Standard_Integer MaxVDegree,const Handle(TColStd_HArray2OfInteger)& NumCoeffPerSurface,const Handle(TColStd_HArray1OfReal)& Coefficients,const Handle(TColStd_HArray1OfReal)& PolynomialUIntervals,const Handle(TColStd_HArray1OfReal)& PolynomialVIntervals,const Handle(TColStd_HArray1OfReal)& TrueUIntervals,const Handle(TColStd_HArray1OfReal)& TrueVIntervals) ;
  
  Standard_EXPORT     Standard_Integer NbUPoles() const;
  
  Standard_EXPORT     Standard_Integer NbVPoles() const;
  //! returns the poles of the BSpline Surface <br>
  Standard_EXPORT    const Handle_TColgp_HArray2OfPnt& Poles() const;
  
  Standard_EXPORT     Standard_Integer UDegree() const;
  
  Standard_EXPORT     Standard_Integer VDegree() const;
  
  Standard_EXPORT     Standard_Integer NbUKnots() const;
  
  Standard_EXPORT     Standard_Integer NbVKnots() const;
  //! Knots in the U direction <br>
  Standard_EXPORT    const Handle_TColStd_HArray1OfReal& UKnots() const;
  //!  Knots in the V direction <br>
  Standard_EXPORT    const Handle_TColStd_HArray1OfReal& VKnots() const;
  //! Multiplicities of the knots in the U direction <br>
  Standard_EXPORT    const Handle_TColStd_HArray1OfInteger& UMultiplicities() const;
  //! Multiplicities of the knots in the V direction <br>
  Standard_EXPORT    const Handle_TColStd_HArray1OfInteger& VMultiplicities() const;
  
  Standard_EXPORT     Standard_Boolean IsDone() const;





protected:





private:

  
  Standard_EXPORT     void BuildArray(const Standard_Integer Degree,const Handle(TColStd_HArray1OfReal)& Knots,const Standard_Integer Continuty,Handle(TColStd_HArray1OfReal)& FlatKnots,Handle(TColStd_HArray1OfInteger)& Mults,Handle(TColStd_HArray1OfReal)& Parameters) const;


Handle_TColStd_HArray1OfReal myUFlatKnots;
Handle_TColStd_HArray1OfReal myVFlatKnots;
Handle_TColStd_HArray1OfReal myUKnots;
Handle_TColStd_HArray1OfReal myVKnots;
Handle_TColStd_HArray1OfInteger myUMults;
Handle_TColStd_HArray1OfInteger myVMults;
Handle_TColgp_HArray2OfPnt myPoles;
Standard_Integer myUDegree;
Standard_Integer myVDegree;
Standard_Boolean myDone;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
