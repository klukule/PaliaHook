#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_SmokeCandle.GE_SmokeCandle_C
// (None)

class UClass* UGE_SmokeCandle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_SmokeCandle_C");

	return Clss;
}


// GE_SmokeCandle_C GE_SmokeCandle.Default__GE_SmokeCandle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_SmokeCandle_C* UGE_SmokeCandle_C::GetDefaultObj()
{
	static class UGE_SmokeCandle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_SmokeCandle_C*>(UGE_SmokeCandle_C::StaticClass()->DefaultObject);

	return Default;
}

}


