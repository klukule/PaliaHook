#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x70 - 0x28)
// BlueprintGeneratedClass ListEntry_CharacterCustomization_FilteringDropdownMenu.ListEntry_CharacterCustomization_FilteringDropdownMenu_C
class UListEntry_CharacterCustomization_FilteringDropdownMenu_C : public UObject
{
public:
	class FText                                  HeaderText;                                        // 0x28(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	TArray<struct FVAL_CharacterCustomization_CosmeticTagFilterStruct> TextOptions;                                       // 0x40(0x10)(Edit, BlueprintVisible, ExposeOnSpawn)
	FMulticastInlineDelegateProperty_            OnSelectionChanged;                                // 0x50(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<struct FVAL_CharacterCustomization_CosmeticTagFilterStruct> SelectedOptions;                                   // 0x60(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UListEntry_CharacterCustomization_FilteringDropdownMenu_C* GetDefaultObj();

	void HasTagOptions(bool* HasOptions, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
	void OnSelectionChanged__DelegateSignature();
};

}


