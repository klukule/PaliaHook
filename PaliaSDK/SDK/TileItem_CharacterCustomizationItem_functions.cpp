#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TileItem_CharacterCustomizationItem.TileItem_CharacterCustomizationItem_C
// (None)

class UClass* UTileItem_CharacterCustomizationItem_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TileItem_CharacterCustomizationItem_C");

	return Clss;
}


// TileItem_CharacterCustomizationItem_C TileItem_CharacterCustomizationItem.Default__TileItem_CharacterCustomizationItem_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTileItem_CharacterCustomizationItem_C* UTileItem_CharacterCustomizationItem_C::GetDefaultObj()
{
	static class UTileItem_CharacterCustomizationItem_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTileItem_CharacterCustomizationItem_C*>(UTileItem_CharacterCustomizationItem_C::StaticClass()->DefaultObject);

	return Default;
}

}


