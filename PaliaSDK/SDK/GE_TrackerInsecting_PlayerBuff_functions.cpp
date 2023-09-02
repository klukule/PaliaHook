#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_TrackerInsecting_PlayerBuff.GE_TrackerInsecting_PlayerBuff_C
// (None)

class UClass* UGE_TrackerInsecting_PlayerBuff_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_TrackerInsecting_PlayerBuff_C");

	return Clss;
}


// GE_TrackerInsecting_PlayerBuff_C GE_TrackerInsecting_PlayerBuff.Default__GE_TrackerInsecting_PlayerBuff_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_TrackerInsecting_PlayerBuff_C* UGE_TrackerInsecting_PlayerBuff_C::GetDefaultObj()
{
	static class UGE_TrackerInsecting_PlayerBuff_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_TrackerInsecting_PlayerBuff_C*>(UGE_TrackerInsecting_PlayerBuff_C::StaticClass()->DefaultObject);

	return Default;
}

}


