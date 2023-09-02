#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Health_Damage_GOD_MODE.GE_Health_Damage_GOD_MODE_C
// (None)

class UClass* UGE_Health_Damage_GOD_MODE_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Health_Damage_GOD_MODE_C");

	return Clss;
}


// GE_Health_Damage_GOD_MODE_C GE_Health_Damage_GOD_MODE.Default__GE_Health_Damage_GOD_MODE_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Health_Damage_GOD_MODE_C* UGE_Health_Damage_GOD_MODE_C::GetDefaultObj()
{
	static class UGE_Health_Damage_GOD_MODE_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Health_Damage_GOD_MODE_C*>(UGE_Health_Damage_GOD_MODE_C::StaticClass()->DefaultObject);

	return Default;
}

}


