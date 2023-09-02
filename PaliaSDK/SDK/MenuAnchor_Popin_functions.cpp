#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MenuAnchor_Popin.MenuAnchor_Popin_C
// (None)

class UClass* UMenuAnchor_Popin_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MenuAnchor_Popin_C");

	return Clss;
}


// MenuAnchor_Popin_C MenuAnchor_Popin.Default__MenuAnchor_Popin_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMenuAnchor_Popin_C* UMenuAnchor_Popin_C::GetDefaultObj()
{
	static class UMenuAnchor_Popin_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMenuAnchor_Popin_C*>(UMenuAnchor_Popin_C::StaticClass()->DefaultObject);

	return Default;
}

}


