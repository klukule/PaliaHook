#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_TrackerForaging_PlayerBuff.GE_TrackerForaging_PlayerBuff_C
// (None)

class UClass* UGE_TrackerForaging_PlayerBuff_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_TrackerForaging_PlayerBuff_C");

	return Clss;
}


// GE_TrackerForaging_PlayerBuff_C GE_TrackerForaging_PlayerBuff.Default__GE_TrackerForaging_PlayerBuff_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_TrackerForaging_PlayerBuff_C* UGE_TrackerForaging_PlayerBuff_C::GetDefaultObj()
{
	static class UGE_TrackerForaging_PlayerBuff_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_TrackerForaging_PlayerBuff_C*>(UGE_TrackerForaging_PlayerBuff_C::StaticClass()->DefaultObject);

	return Default;
}

}


