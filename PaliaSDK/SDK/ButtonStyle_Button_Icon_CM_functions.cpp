#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle_Button_Icon_CM.ButtonStyle_Button_Icon_CM_C
// (None)

class UClass* UButtonStyle_Button_Icon_CM_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle_Button_Icon_CM_C");

	return Clss;
}


// ButtonStyle_Button_Icon_CM_C ButtonStyle_Button_Icon_CM.Default__ButtonStyle_Button_Icon_CM_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyle_Button_Icon_CM_C* UButtonStyle_Button_Icon_CM_C::GetDefaultObj()
{
	static class UButtonStyle_Button_Icon_CM_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyle_Button_Icon_CM_C*>(UButtonStyle_Button_Icon_CM_C::StaticClass()->DefaultObject);

	return Default;
}

}


