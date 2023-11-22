#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_TrackerEvents_PlayerBuff.GE_TrackerEvents_PlayerBuff_C
// (None)

class UClass* UGE_TrackerEvents_PlayerBuff_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_TrackerEvents_PlayerBuff_C");

	return Clss;
}


// GE_TrackerEvents_PlayerBuff_C GE_TrackerEvents_PlayerBuff.Default__GE_TrackerEvents_PlayerBuff_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_TrackerEvents_PlayerBuff_C* UGE_TrackerEvents_PlayerBuff_C::GetDefaultObj()
{
	static class UGE_TrackerEvents_PlayerBuff_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_TrackerEvents_PlayerBuff_C*>(UGE_TrackerEvents_PlayerBuff_C::StaticClass()->DefaultObject);

	return Default;
}

}


