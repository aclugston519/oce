// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _math_ComputeGaussPointsAndWeights_HeaderFile
#define _math_ComputeGaussPointsAndWeights_HeaderFile

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
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _math_Vector_HeaderFile
#include <math_Vector.hxx>
#endif
class TColStd_HArray1OfReal;



class math_ComputeGaussPointsAndWeights  {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   math_ComputeGaussPointsAndWeights(const Standard_Integer Number);
  
  Standard_EXPORT     Standard_Boolean IsDone() const;
  
  Standard_EXPORT     math_Vector Points() const;
  
  Standard_EXPORT     math_Vector Weights() const;





protected:





private:



Handle_TColStd_HArray1OfReal myPoints;
Handle_TColStd_HArray1OfReal myWeights;
Standard_Boolean myIsDone;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
