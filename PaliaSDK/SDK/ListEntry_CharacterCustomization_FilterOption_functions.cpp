#pragma once

// Dumped with Dumper-7!

#include "SDK.hpp"

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function ListEntry_CharacterCustomization_FilterOption.ListEntry_CharacterCustomization_FilterOption_C.OnOptionSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsSelected                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVAL_CharacterCustomization_CosmeticTagFilterStructSelectedCosmeticTag                                              (BlueprintVisible, BlueprintReadOnly, Parm)

void UListEntry_CharacterCustomization_FilterOption_C::OnOptionSelected__DelegateSignature(bool InIsSelected, const struct FVAL_CharacterCustomization_CosmeticTagFilterStruct& InSelectedCosmeticTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ListEntry_CharacterCustomization_FilterOption_C", "OnOptionSelected__DelegateSignature");

	Params::UListEntry_CharacterCustomization_FilterOption_C_OnOptionSelected__DelegateSignature_Params Parms{};

	Parms.IsSelected = InIsSelected;
	Parms.SelectedCosmeticTag = InSelectedCosmeticTag;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
