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
		static class UClass* Clss = UObject::FindClassFast("BPFL_Animation_C");
		return Clss;
	}

	void GetMappingNameByAbility(class AActor* InOwner, const struct FGameplayTag& InAnimTag, class UObject* In__WorldContext, class FName* InMapping_Name, class FName InTemp_name_Variable, class AValeriaCharacter* InK2Node_DynamicCast_AsValeria_Character, bool InK2Node_DynamicCast_bSuccess, class UAbilityAnimationComponent* InCallFunc_GetAbilityAnimation_ReturnValue, class FName InCallFunc_GetMappingNameByTag_ReturnValue);
	void GetMontageByAbility(class AActor* InOwner, const struct FGameplayTag& InAnimTag, class UObject* In__WorldContext, class UAnimMontage** InMontage, class FName InTemp_name_Variable, class AValeriaCharacter* InK2Node_DynamicCast_AsValeria_Character, bool InK2Node_DynamicCast_bSuccess, class UAbilityAnimationComponent* InCallFunc_GetAbilityAnimation_ReturnValue, class UAnimMontage* InCallFunc_GetMontage_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
