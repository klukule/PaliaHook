#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass RuntimeISMActor.RuntimeISMActor_C
// (Actor)

class UClass* ARuntimeISMActor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RuntimeISMActor_C");

	return Clss;
}


// RuntimeISMActor_C RuntimeISMActor.Default__RuntimeISMActor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARuntimeISMActor_C* ARuntimeISMActor_C::GetDefaultObj()
{
	static class ARuntimeISMActor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARuntimeISMActor_C*>(ARuntimeISMActor_C::StaticClass()->DefaultObject);

	return Default;
}

}


