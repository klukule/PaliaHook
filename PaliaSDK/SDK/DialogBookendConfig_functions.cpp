#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DialogBookendConfig.DialogBookendConfig_C
// (None)

class UClass* UDialogBookendConfig_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DialogBookendConfig_C");

	return Clss;
}


// DialogBookendConfig_C DialogBookendConfig.Default__DialogBookendConfig_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDialogBookendConfig_C* UDialogBookendConfig_C::GetDefaultObj()
{
	static class UDialogBookendConfig_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDialogBookendConfig_C*>(UDialogBookendConfig_C::StaticClass()->DefaultObject);

	return Default;
}

}


