#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Fishing_RodRecoveryBoostStrong.GE_Fishing_RodRecoveryBoostStrong_C
// (None)

class UClass* UGE_Fishing_RodRecoveryBoostStrong_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Fishing_RodRecoveryBoostStrong_C");

	return Clss;
}


// GE_Fishing_RodRecoveryBoostStrong_C GE_Fishing_RodRecoveryBoostStrong.Default__GE_Fishing_RodRecoveryBoostStrong_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Fishing_RodRecoveryBoostStrong_C* UGE_Fishing_RodRecoveryBoostStrong_C::GetDefaultObj()
{
	static class UGE_Fishing_RodRecoveryBoostStrong_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Fishing_RodRecoveryBoostStrong_C*>(UGE_Fishing_RodRecoveryBoostStrong_C::StaticClass()->DefaultObject);

	return Default;
}

}


