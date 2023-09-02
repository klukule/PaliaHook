#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPFL_Animation.BPFL_Animation_C
class UBPFL_Animation_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UBPFL_Animation_C* GetDefaultObj();

	void GetMappingNameByAbility(class AActor* Owner, const struct FGameplayTag& AnimTag, class UObject* __WorldContext, class FName* Mapping_Name, class FName Temp_name_Variable, class AValeriaCharacter* K2Node_DynamicCast_AsValeria_Character, bool K2Node_DynamicCast_bSuccess, class UAbilityAnimationComponent* CallFunc_GetAbilityAnimation_ReturnValue, class FName CallFunc_GetMappingNameByTag_ReturnValue);
	void GetMontageByAbility(class AActor* Owner, const struct FGameplayTag& AnimTag, class UObject* __WorldContext, class UAnimMontage** Montage, class FName Temp_name_Variable, class AValeriaCharacter* K2Node_DynamicCast_AsValeria_Character, bool K2Node_DynamicCast_bSuccess, class UAbilityAnimationComponent* CallFunc_GetAbilityAnimation_ReturnValue, class UAnimMontage* CallFunc_GetMontage_ReturnValue);
};

}


