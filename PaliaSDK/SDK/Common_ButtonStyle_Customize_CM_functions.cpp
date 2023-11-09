#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Common_ButtonStyle_Customize_CM.Common_ButtonStyle_Customize_CM_C
// (None)

class UClass* UCommon_ButtonStyle_Customize_CM_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Common_ButtonStyle_Customize_CM_C");

	return Clss;
}


// Common_ButtonStyle_Customize_CM_C Common_ButtonStyle_Customize_CM.Default__Common_ButtonStyle_Customize_CM_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCommon_ButtonStyle_Customize_CM_C* UCommon_ButtonStyle_Customize_CM_C::GetDefaultObj()
{
	static class UCommon_ButtonStyle_Customize_CM_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCommon_ButtonStyle_Customize_CM_C*>(UCommon_ButtonStyle_Customize_CM_C::StaticClass()->DefaultObject);

	return Default;
}

}


