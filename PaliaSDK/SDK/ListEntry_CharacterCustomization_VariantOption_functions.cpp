#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ListEntry_CharacterCustomization_VariantOption.ListEntry_CharacterCustomization_VariantOption_C
// (None)

class UClass* UListEntry_CharacterCustomization_VariantOption_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ListEntry_CharacterCustomization_VariantOption_C");

	return Clss;
}


// ListEntry_CharacterCustomization_VariantOption_C ListEntry_CharacterCustomization_VariantOption.Default__ListEntry_CharacterCustomization_VariantOption_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UListEntry_CharacterCustomization_VariantOption_C* UListEntry_CharacterCustomization_VariantOption_C::GetDefaultObj()
{
	static class UListEntry_CharacterCustomization_VariantOption_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UListEntry_CharacterCustomization_VariantOption_C*>(UListEntry_CharacterCustomization_VariantOption_C::StaticClass()->DefaultObject);

	return Default;
}

}


