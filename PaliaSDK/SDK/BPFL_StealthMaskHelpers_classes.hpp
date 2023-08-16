#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

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

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BPFL_StealthMaskHelpers_C");
		return Clss;
	}

	void GetStealthMaskFromActor(class AActor* InActor, class UObject* In__WorldContext, int32* InStealthMask, class UAbilitySystemComponent* InASC, bool InTemp_bool_Variable, class UAbilitySystemComponent* InCallFunc_GetComponentByClass_ReturnValue, int32 InTemp_int_Variable, int32 InTemp_int_Variable_1, TScriptInterface<class IGameplayTagAssetInterface> InCallFunc_HasMatchingGameplayTag_self_CastInput, bool InCallFunc_HasMatchingGameplayTag_ReturnValue, bool InCallFunc_IsValid_ReturnValue, int32 InK2Node_Select_Default, int32 InCallFunc_Or_IntInt_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
