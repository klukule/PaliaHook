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
// BlueprintGeneratedClass BPFL_Animation.BPFL_Animation_C
class UBPFL_Animation_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("BPFL_Animation_C");

		return Clss;
	}

	void GetMappingNameByAbility(class AActor* Owner, const struct FGameplayTag& AnimTag, class UObject* __WorldContext, class FName* Mapping_Name, class FName Temp_name_Variable, class AValeriaCharacter* K2Node_DynamicCast_AsValeria_Character, bool K2Node_DynamicCast_bSuccess, class UAbilityAnimationComponent* CallFunc_GetAbilityAnimation_ReturnValue, class FName CallFunc_GetMappingNameByTag_ReturnValue);
	void GetMontageByAbility(class AActor* Owner, const struct FGameplayTag& AnimTag, class UObject* __WorldContext, class UAnimMontage** Montage, class FName Temp_name_Variable, class AValeriaCharacter* K2Node_DynamicCast_AsValeria_Character, bool K2Node_DynamicCast_bSuccess, class UAbilityAnimationComponent* CallFunc_GetAbilityAnimation_ReturnValue, class UAnimMontage* CallFunc_GetMontage_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
