// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PDataStd_HArray1OfHArray1OfInteger_HeaderFile
#define _PDataStd_HArray1OfHArray1OfInteger_HeaderFile

#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Handle_PDataStd_HArray1OfHArray1OfInteger_HeaderFile
#include <Handle_PDataStd_HArray1OfHArray1OfInteger.hxx>
#endif

#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_PColStd_HArray1OfInteger_HeaderFile
#include <Handle_PColStd_HArray1OfInteger.hxx>
#endif
#ifndef _PDataStd_FieldOfHArray1OfHArray1OfInteger_HeaderFile
#include <PDataStd_FieldOfHArray1OfHArray1OfInteger.hxx>
#endif
#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
#ifndef _Standard_Persistent_HeaderFile
#include <Standard_Persistent.hxx>
#endif
#ifndef _Handle_PDataStd_VArrayNodeOfFieldOfHArray1OfHArray1OfInteger_HeaderFile
#include <Handle_PDataStd_VArrayNodeOfFieldOfHArray1OfHArray1OfInteger.hxx>
#endif
class PColStd_HArray1OfInteger;
class Standard_OutOfRange;
class Standard_RangeError;
class PDataStd_FieldOfHArray1OfHArray1OfInteger;
class PDataStd_VArrayNodeOfFieldOfHArray1OfHArray1OfInteger;
class PDataStd_VArrayTNodeOfFieldOfHArray1OfHArray1OfInteger;


class PDataStd_HArray1OfHArray1OfInteger : public Standard_Persistent {

public:

  
  Standard_EXPORT   PDataStd_HArray1OfHArray1OfInteger(const Standard_Integer Low,const Standard_Integer Up);
  
  Standard_EXPORT   PDataStd_HArray1OfHArray1OfInteger(const Standard_Integer Low,const Standard_Integer Up,const Handle(PColStd_HArray1OfInteger)& V);
  
        Standard_Integer Length() const;
  
        Standard_Integer Lower() const;
  
  Standard_EXPORT     void SetValue(const Standard_Integer Index,const Handle(PColStd_HArray1OfInteger)& Value) ;
  
        Standard_Integer Upper() const;
  
  Standard_EXPORT     Handle_PColStd_HArray1OfInteger Value(const Standard_Integer Index) const;

  PDataStd_HArray1OfHArray1OfInteger( )
{
  
}
PDataStd_HArray1OfHArray1OfInteger(const Storage_stCONSTclCOM& a) : Standard_Persistent(a)
{
  
}
    Standard_Integer _CSFDB_GetPDataStd_HArray1OfHArray1OfIntegerLowerBound() const { return LowerBound; }
    void _CSFDB_SetPDataStd_HArray1OfHArray1OfIntegerLowerBound(const Standard_Integer p) { LowerBound = p; }
    Standard_Integer _CSFDB_GetPDataStd_HArray1OfHArray1OfIntegerUpperBound() const { return UpperBound; }
    void _CSFDB_SetPDataStd_HArray1OfHArray1OfIntegerUpperBound(const Standard_Integer p) { UpperBound = p; }
    const PDataStd_FieldOfHArray1OfHArray1OfInteger& _CSFDB_GetPDataStd_HArray1OfHArray1OfIntegerData() const { return Data; }



  DEFINE_STANDARD_RTTI(PDataStd_HArray1OfHArray1OfInteger)

protected:




private: 

  
  Standard_EXPORT     PDataStd_FieldOfHArray1OfHArray1OfInteger Field() const;
  
  Standard_EXPORT     Standard_Address Datas() const;

Standard_Integer LowerBound;
Standard_Integer UpperBound;
PDataStd_FieldOfHArray1OfHArray1OfInteger Data;


};

#define Item Handle_PColStd_HArray1OfInteger
#define Item_hxx <PColStd_HArray1OfInteger.hxx>
#define PCollection_FieldOfHArray1 PDataStd_FieldOfHArray1OfHArray1OfInteger
#define PCollection_FieldOfHArray1_hxx <PDataStd_FieldOfHArray1OfHArray1OfInteger.hxx>
#define PCollection_VArrayNodeOfFieldOfHArray1 PDataStd_VArrayNodeOfFieldOfHArray1OfHArray1OfInteger
#define PCollection_VArrayNodeOfFieldOfHArray1_hxx <PDataStd_VArrayNodeOfFieldOfHArray1OfHArray1OfInteger.hxx>
#define PCollection_VArrayTNodeOfFieldOfHArray1 PDataStd_VArrayTNodeOfFieldOfHArray1OfHArray1OfInteger
#define PCollection_VArrayTNodeOfFieldOfHArray1_hxx <PDataStd_VArrayTNodeOfFieldOfHArray1OfHArray1OfInteger.hxx>
#define PCollection_VArrayNodeOfFieldOfHArray1 PDataStd_VArrayNodeOfFieldOfHArray1OfHArray1OfInteger
#define PCollection_VArrayNodeOfFieldOfHArray1_hxx <PDataStd_VArrayNodeOfFieldOfHArray1OfHArray1OfInteger.hxx>
#define PCollection_VArrayTNodeOfFieldOfHArray1 PDataStd_VArrayTNodeOfFieldOfHArray1OfHArray1OfInteger
#define PCollection_VArrayTNodeOfFieldOfHArray1_hxx <PDataStd_VArrayTNodeOfFieldOfHArray1OfHArray1OfInteger.hxx>
#define Handle_PCollection_VArrayNodeOfFieldOfHArray1 Handle_PDataStd_VArrayNodeOfFieldOfHArray1OfHArray1OfInteger
#define PCollection_VArrayNodeOfFieldOfHArray1_Type_() PDataStd_VArrayNodeOfFieldOfHArray1OfHArray1OfInteger_Type_()
#define Handle_PCollection_VArrayNodeOfFieldOfHArray1 Handle_PDataStd_VArrayNodeOfFieldOfHArray1OfHArray1OfInteger
#define PCollection_VArrayNodeOfFieldOfHArray1_Type_() PDataStd_VArrayNodeOfFieldOfHArray1OfHArray1OfInteger_Type_()
#define PCollection_HArray1 PDataStd_HArray1OfHArray1OfInteger
#define PCollection_HArray1_hxx <PDataStd_HArray1OfHArray1OfInteger.hxx>
#define Handle_PCollection_HArray1 Handle_PDataStd_HArray1OfHArray1OfInteger
#define PCollection_HArray1_Type_() PDataStd_HArray1OfHArray1OfInteger_Type_()

#include <PCollection_HArray1.lxx>

#undef Item
#undef Item_hxx
#undef PCollection_FieldOfHArray1
#undef PCollection_FieldOfHArray1_hxx
#undef PCollection_VArrayNodeOfFieldOfHArray1
#undef PCollection_VArrayNodeOfFieldOfHArray1_hxx
#undef PCollection_VArrayTNodeOfFieldOfHArray1
#undef PCollection_VArrayTNodeOfFieldOfHArray1_hxx
#undef PCollection_VArrayNodeOfFieldOfHArray1
#undef PCollection_VArrayNodeOfFieldOfHArray1_hxx
#undef PCollection_VArrayTNodeOfFieldOfHArray1
#undef PCollection_VArrayTNodeOfFieldOfHArray1_hxx
#undef Handle_PCollection_VArrayNodeOfFieldOfHArray1
#undef PCollection_VArrayNodeOfFieldOfHArray1_Type_
#undef Handle_PCollection_VArrayNodeOfFieldOfHArray1
#undef PCollection_VArrayNodeOfFieldOfHArray1_Type_
#undef PCollection_HArray1
#undef PCollection_HArray1_hxx
#undef Handle_PCollection_HArray1
#undef PCollection_HArray1_Type_


// other Inline functions and methods (like "C++: function call" methods)


#endif
