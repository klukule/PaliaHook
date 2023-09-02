#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Gather.GE_Gather_C
// (None)

class UClass* UGE_Gather_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Gather_C");

	return Clss;
}


// GE_Gather_C GE_Gather.Default__GE_Gather_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Gather_C* UGE_Gather_C::GetDefaultObj()
{
	static class UGE_Gather_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Gather_C*>(UGE_Gather_C::StaticClass()->DefaultObject);

	return Default;
}

}


