#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle_Dropdown_01_CM.ButtonStyle_Dropdown_01_CM_C
// (None)

class UClass* UButtonStyle_Dropdown_01_CM_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle_Dropdown_01_CM_C");

	return Clss;
}


// ButtonStyle_Dropdown_01_CM_C ButtonStyle_Dropdown_01_CM.Default__ButtonStyle_Dropdown_01_CM_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyle_Dropdown_01_CM_C* UButtonStyle_Dropdown_01_CM_C::GetDefaultObj()
{
	static class UButtonStyle_Dropdown_01_CM_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyle_Dropdown_01_CM_C*>(UButtonStyle_Dropdown_01_CM_C::StaticClass()->DefaultObject);

	return Default;
}

}


