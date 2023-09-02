#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x440 - 0x438)
// BlueprintGeneratedClass GA_LeftHand_Dequip.GA_LeftHand_Dequip_C
class UGA_LeftHand_Dequip_C : public UValeriaGASGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x438(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UGA_LeftHand_Dequip_C* GetDefaultObj();

	void OnCancelled_20445A2640D644CD6B9EFA9754DC209A();
	void OnInterrupted_20445A2640D644CD6B9EFA9754DC209A();
	void OnBlendOut_20445A2640D644CD6B9EFA9754DC209A();
	void OnCompleted_20445A2640D644CD6B9EFA9754DC209A();
	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_LeftHand_Dequip(int32 EntryPoint, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue, class UAnimMontage* CallFunc_GetMontageByAbility_Montage, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UAbilityTask_PlayMontageAndWait* CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool CallFunc_K2_CommitAbility_ReturnValue, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData);
};

}


