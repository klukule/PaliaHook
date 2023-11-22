#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle_Secondary_PF.ButtonStyle_Secondary_PF_C
// (None)

class UClass* UButtonStyle_Secondary_PF_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle_Secondary_PF_C");

	return Clss;
}


// ButtonStyle_Secondary_PF_C ButtonStyle_Secondary_PF.Default__ButtonStyle_Secondary_PF_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyle_Secondary_PF_C* UButtonStyle_Secondary_PF_C::GetDefaultObj()
{
	static class UButtonStyle_Secondary_PF_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyle_Secondary_PF_C*>(UButtonStyle_Secondary_PF_C::StaticClass()->DefaultObject);

	return Default;
}

}


