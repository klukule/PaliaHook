#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPFL_StealthMaskHelpers.BPFL_StealthMaskHelpers_C
class UBPFL_StealthMaskHelpers_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UBPFL_StealthMaskHelpers_C* GetDefaultObj();

	void GetStealthMaskFromActor(class AActor* Actor, class UObject* __WorldContext, int32* StealthMask, class UAbilitySystemComponent* ASC, bool Temp_bool_Variable, class UAbilitySystemComponent* CallFunc_GetComponentByClass_ReturnValue, int32 Temp_int_Variable, int32 Temp_int_Variable_1, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput, bool CallFunc_HasMatchingGameplayTag_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 K2Node_Select_Default, int32 CallFunc_Or_IntInt_ReturnValue);
};

}


