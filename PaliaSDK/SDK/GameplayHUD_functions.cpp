#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GameplayHUD.GameplayHUD_C
// (Actor)

class UClass* AGameplayHUD_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GameplayHUD_C");

	return Clss;
}


// GameplayHUD_C GameplayHUD.Default__GameplayHUD_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGameplayHUD_C* AGameplayHUD_C::GetDefaultObj()
{
	static class AGameplayHUD_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGameplayHUD_C*>(AGameplayHUD_C::StaticClass()->DefaultObject);

	return Default;
}

}


