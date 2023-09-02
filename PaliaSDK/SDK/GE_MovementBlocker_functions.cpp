#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_MovementBlocker.GE_MovementBlocker_C
// (None)

class UClass* UGE_MovementBlocker_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_MovementBlocker_C");

	return Clss;
}


// GE_MovementBlocker_C GE_MovementBlocker.Default__GE_MovementBlocker_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_MovementBlocker_C* UGE_MovementBlocker_C::GetDefaultObj()
{
	static class UGE_MovementBlocker_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_MovementBlocker_C*>(UGE_MovementBlocker_C::StaticClass()->DefaultObject);

	return Default;
}

}


