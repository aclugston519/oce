// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _OSD_Host_HeaderFile
#define _OSD_Host_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TCollection_AsciiString_HeaderFile
#include <TCollection_AsciiString.hxx>
#endif
#ifndef _OSD_Error_HeaderFile
#include <OSD_Error.hxx>
#endif
#ifndef _OSD_SysType_HeaderFile
#include <OSD_SysType.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _OSD_OEMType_HeaderFile
#include <OSD_OEMType.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class Standard_ConstructionError;
class Standard_NullObject;
class OSD_OSDError;
class TCollection_AsciiString;


//! Carries information about a Host <br>
//!          System version ,host name, nodename ... <br>
class OSD_Host  {
public:

  DEFINE_STANDARD_ALLOC

  //! Initializes current host by default. <br>
  Standard_EXPORT   OSD_Host();
  //! Returns system name and version <br>
  Standard_EXPORT     TCollection_AsciiString SystemVersion() ;
  //! Returns the system type (UNIX System V, UNIX BSD, MS-DOS...) <br>
  Standard_EXPORT     OSD_SysType SystemId() const;
  //! Returns host name. <br>
  Standard_EXPORT     TCollection_AsciiString HostName() ;
  //! Returns available memory in Kilobytes. <br>
  Standard_EXPORT     Standard_Integer AvailableMemory() ;
  //! Returns Internet address of current host. <br>
  Standard_EXPORT     TCollection_AsciiString InternetAddress() ;
  //! Returns type of current machine. <br>
  Standard_EXPORT     OSD_OEMType MachineType() ;
  //! Returns TRUE if an error occurs <br>
  Standard_EXPORT     Standard_Boolean Failed() const;
  //! Resets error counter to zero <br>
  Standard_EXPORT     void Reset() ;
  //! Raises OSD_Error <br>
  Standard_EXPORT     void Perror() ;
  //! Returns error number if 'Failed' is TRUE. <br>
  Standard_EXPORT     Standard_Integer Error() const;





protected:





private:



TCollection_AsciiString myName;
OSD_Error myError;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
