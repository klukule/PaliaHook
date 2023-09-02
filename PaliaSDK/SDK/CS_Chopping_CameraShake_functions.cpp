#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CS_Chopping_CameraShake.CS_Chopping_CameraShake_C
// (None)

class UClass* UCS_Chopping_CameraShake_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CS_Chopping_CameraShake_C");

	return Clss;
}


// CS_Chopping_CameraShake_C CS_Chopping_CameraShake.Default__CS_Chopping_CameraShake_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCS_Chopping_CameraShake_C* UCS_Chopping_CameraShake_C::GetDefaultObj()
{
	static class UCS_Chopping_CameraShake_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCS_Chopping_CameraShake_C*>(UCS_Chopping_CameraShake_C::StaticClass()->DefaultObject);

	return Default;
}

}


