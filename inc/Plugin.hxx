// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Plugin_HeaderFile
#define _Plugin_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Handle_Standard_Transient_HeaderFile
#include <Handle_Standard_Transient.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_Resource_Manager_HeaderFile
#include <Handle_Resource_Manager.hxx>
#endif
class Standard_Transient;
class Standard_GUID;
class Resource_Manager;
class Plugin_MapOfFunctions;
class Plugin_DataMapNodeOfMapOfFunctions;
class Plugin_DataMapIteratorOfMapOfFunctions;



class Plugin  {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   static  Handle_Standard_Transient Load(const Standard_GUID& aGUID,const Standard_Boolean theVerbose = Standard_True) ;
  //! Returns a global map of {guid, plugin_library} pairs. <br>
//!          The Load() method will use this map to search for plugins if and only if <br>
//!          the GUID is not found in the Plugin file specified by the CSF_PluginDefaults <br>
//!          (or CSF_PluginUserDefaults) environment variable, or if they are not defined. <br>
//! <br>
//!          This allows to populate this additional resource manager <br>
//!          in run-time and to avoid using the above environment variables. <br>
//!          This map must be populated (using Resource_Manager::SetResource() method) <br>
//!          following syntax conventions of the Plugin file, for instance: <br>
//!          const Handle(Resource_Manager)& aPluginMap = Plugin::AdditionalPluginMap(); <br>
//!          aPluginMap->SetResource ("ad696000-5b34-11d1-b5ba-00a0c9064368.Location", "TKStdSchema"); <br>
  Standard_EXPORT   static const Handle_Resource_Manager& AdditionalPluginMap() ;





protected:





private:




friend class Plugin_MapOfFunctions;
friend class Plugin_DataMapNodeOfMapOfFunctions;
friend class Plugin_DataMapIteratorOfMapOfFunctions;

};





// other Inline functions and methods (like "C++: function call" methods)


#endif
