#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CamShake_Mining_hitA.CamShake_Mining_hitA_C
// (None)

class UClass* UCamShake_Mining_hitA_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CamShake_Mining_hitA_C");

	return Clss;
}


// CamShake_Mining_hitA_C CamShake_Mining_hitA.Default__CamShake_Mining_hitA_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCamShake_Mining_hitA_C* UCamShake_Mining_hitA_C::GetDefaultObj()
{
	static class UCamShake_Mining_hitA_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCamShake_Mining_hitA_C*>(UCamShake_Mining_hitA_C::StaticClass()->DefaultObject);

	return Default;
}

}


