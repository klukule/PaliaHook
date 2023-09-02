#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle_Primary_01_PF.ButtonStyle_Primary_01_PF_C
// (None)

class UClass* UButtonStyle_Primary_01_PF_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle_Primary_01_PF_C");

	return Clss;
}


// ButtonStyle_Primary_01_PF_C ButtonStyle_Primary_01_PF.Default__ButtonStyle_Primary_01_PF_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyle_Primary_01_PF_C* UButtonStyle_Primary_01_PF_C::GetDefaultObj()
{
	static class UButtonStyle_Primary_01_PF_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyle_Primary_01_PF_C*>(UButtonStyle_Primary_01_PF_C::StaticClass()->DefaultObject);

	return Default;
}

}


