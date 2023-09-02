#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ListEntry_CharacterCustomization_FilteringDropdownMenu.ListEntry_CharacterCustomization_FilteringDropdownMenu_C
// (None)

class UClass* UListEntry_CharacterCustomization_FilteringDropdownMenu_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ListEntry_CharacterCustomization_FilteringDropdownMenu_C");

	return Clss;
}


// ListEntry_CharacterCustomization_FilteringDropdownMenu_C ListEntry_CharacterCustomization_FilteringDropdownMenu.Default__ListEntry_CharacterCustomization_FilteringDropdownMenu_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UListEntry_CharacterCustomization_FilteringDropdownMenu_C* UListEntry_CharacterCustomization_FilteringDropdownMenu_C::GetDefaultObj()
{
	static class UListEntry_CharacterCustomization_FilteringDropdownMenu_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UListEntry_CharacterCustomization_FilteringDropdownMenu_C*>(UListEntry_CharacterCustomization_FilteringDropdownMenu_C::StaticClass()->DefaultObject);

	return Default;
}


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


