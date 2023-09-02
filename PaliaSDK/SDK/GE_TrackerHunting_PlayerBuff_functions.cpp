#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_TrackerHunting_PlayerBuff.GE_TrackerHunting_PlayerBuff_C
// (None)

class UClass* UGE_TrackerHunting_PlayerBuff_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_TrackerHunting_PlayerBuff_C");

	return Clss;
}


// GE_TrackerHunting_PlayerBuff_C GE_TrackerHunting_PlayerBuff.Default__GE_TrackerHunting_PlayerBuff_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_TrackerHunting_PlayerBuff_C* UGE_TrackerHunting_PlayerBuff_C::GetDefaultObj()
{
	static class UGE_TrackerHunting_PlayerBuff_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_TrackerHunting_PlayerBuff_C*>(UGE_TrackerHunting_PlayerBuff_C::StaticClass()->DefaultObject);

	return Default;
}

}


