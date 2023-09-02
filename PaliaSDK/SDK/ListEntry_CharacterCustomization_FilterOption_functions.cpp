#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ListEntry_CharacterCustomization_FilterOption.ListEntry_CharacterCustomization_FilterOption_C
// (None)

class UClass* UListEntry_CharacterCustomization_FilterOption_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ListEntry_CharacterCustomization_FilterOption_C");

	return Clss;
}


// ListEntry_CharacterCustomization_FilterOption_C ListEntry_CharacterCustomization_FilterOption.Default__ListEntry_CharacterCustomization_FilterOption_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UListEntry_CharacterCustomization_FilterOption_C* UListEntry_CharacterCustomization_FilterOption_C::GetDefaultObj()
{
	static class UListEntry_CharacterCustomization_FilterOption_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UListEntry_CharacterCustomization_FilterOption_C*>(UListEntry_CharacterCustomization_FilterOption_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ListEntry_CharacterCustomization_FilterOption.ListEntry_CharacterCustomization_FilterOption_C.OnOptionSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsSelected                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVAL_CharacterCustomization_CosmeticTagFilterStructSelectedCosmeticTag                                              (BlueprintVisible, BlueprintReadOnly, Parm)

void UListEntry_CharacterCustomization_FilterOption_C::OnOptionSelected__DelegateSignature(bool IsSelected, const struct FVAL_CharacterCustomization_CosmeticTagFilterStruct& SelectedCosmeticTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ListEntry_CharacterCustomization_FilterOption_C", "OnOptionSelected__DelegateSignature");

	Params::UListEntry_CharacterCustomization_FilterOption_C_OnOptionSelected__DelegateSignature_Params Parms{};

	Parms.IsSelected = IsSelected;
	Parms.SelectedCosmeticTag = SelectedCosmeticTag;

	UObject::ProcessEvent(Func, &Parms);

}

}


