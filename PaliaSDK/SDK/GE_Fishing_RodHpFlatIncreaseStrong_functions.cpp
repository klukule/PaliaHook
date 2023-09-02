#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Fishing_RodHpFlatIncreaseStrong.GE_Fishing_RodHpFlatIncreaseStrong_C
// (None)

class UClass* UGE_Fishing_RodHpFlatIncreaseStrong_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Fishing_RodHpFlatIncreaseStrong_C");

	return Clss;
}


// GE_Fishing_RodHpFlatIncreaseStrong_C GE_Fishing_RodHpFlatIncreaseStrong.Default__GE_Fishing_RodHpFlatIncreaseStrong_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Fishing_RodHpFlatIncreaseStrong_C* UGE_Fishing_RodHpFlatIncreaseStrong_C::GetDefaultObj()
{
	static class UGE_Fishing_RodHpFlatIncreaseStrong_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Fishing_RodHpFlatIncreaseStrong_C*>(UGE_Fishing_RodHpFlatIncreaseStrong_C::StaticClass()->DefaultObject);

	return Default;
}

}


