#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_InnateStaminaRegen.GE_InnateStaminaRegen_C
// (None)

class UClass* UGE_InnateStaminaRegen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_InnateStaminaRegen_C");

	return Clss;
}


// GE_InnateStaminaRegen_C GE_InnateStaminaRegen.Default__GE_InnateStaminaRegen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_InnateStaminaRegen_C* UGE_InnateStaminaRegen_C::GetDefaultObj()
{
	static class UGE_InnateStaminaRegen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_InnateStaminaRegen_C*>(UGE_InnateStaminaRegen_C::StaticClass()->DefaultObject);

	return Default;
}

}


