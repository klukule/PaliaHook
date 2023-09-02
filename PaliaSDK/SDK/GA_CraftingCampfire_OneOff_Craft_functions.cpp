#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_CraftingCampfire_OneOff_Craft.GA_CraftingCampfire_OneOff_Craft_C
// (None)

class UClass* UGA_CraftingCampfire_OneOff_Craft_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_CraftingCampfire_OneOff_Craft_C");

	return Clss;
}


// GA_CraftingCampfire_OneOff_Craft_C GA_CraftingCampfire_OneOff_Craft.Default__GA_CraftingCampfire_OneOff_Craft_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_CraftingCampfire_OneOff_Craft_C* UGA_CraftingCampfire_OneOff_Craft_C::GetDefaultObj()
{
	static class UGA_CraftingCampfire_OneOff_Craft_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_CraftingCampfire_OneOff_Craft_C*>(UGA_CraftingCampfire_OneOff_Craft_C::StaticClass()->DefaultObject);

	return Default;
}

}


