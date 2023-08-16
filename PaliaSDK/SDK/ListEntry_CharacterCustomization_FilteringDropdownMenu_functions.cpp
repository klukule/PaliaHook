#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function ListEntry_CharacterCustomization_FilteringDropdownMenu.ListEntry_CharacterCustomization_FilteringDropdownMenu_C.HasTagOptions
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               HasOptions                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UListEntry_CharacterCustomization_FilteringDropdownMenu_C::HasTagOptions(bool* HasOptions, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ListEntry_CharacterCustomization_FilteringDropdownMenu_C", "HasTagOptions");

	Params::UListEntry_CharacterCustomization_FilteringDropdownMenu_C_HasTagOptions_Params Parms{};

	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (HasOptions != nullptr)
		*HasOptions = Parms.HasOptions;

}


// Function ListEntry_CharacterCustomization_FilteringDropdownMenu.ListEntry_CharacterCustomization_FilteringDropdownMenu_C.OnSelectionChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UListEntry_CharacterCustomization_FilteringDropdownMenu_C::OnSelectionChanged__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ListEntry_CharacterCustomization_FilteringDropdownMenu_C", "OnSelectionChanged__DelegateSignature");

	Params::UListEntry_CharacterCustomization_FilteringDropdownMenu_C_OnSelectionChanged__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
