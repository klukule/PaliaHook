#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Common_Blank_Style_CM.Common_Blank_Style_CM_C
// (None)

class UClass* UCommon_Blank_Style_CM_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Common_Blank_Style_CM_C");

	return Clss;
}


// Common_Blank_Style_CM_C Common_Blank_Style_CM.Default__Common_Blank_Style_CM_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCommon_Blank_Style_CM_C* UCommon_Blank_Style_CM_C::GetDefaultObj()
{
	static class UCommon_Blank_Style_CM_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCommon_Blank_Style_CM_C*>(UCommon_Blank_Style_CM_C::StaticClass()->DefaultObject);

	return Default;
}

}


