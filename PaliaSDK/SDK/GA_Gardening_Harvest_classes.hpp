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

// 0x20 (0x458 - 0x438)
// BlueprintGeneratedClass GA_Gardening_Harvest.GA_Gardening_Harvest_C
class UGA_Gardening_Harvest_C : public UValeriaGASGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x438(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCharacterStateMachineComponent*       Csm;                                               // 0x440(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UAbilityAnimationComponent*            AbilityAnimations;                                 // 0x448(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                         HarvestSound;                                      // 0x450(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("GA_Gardening_Harvest_C");

		return Clss;
	}

	void OnCancelled_EA02B7CC48ECC0CD5B9B3EA660C305FB();
	void OnInterrupted_EA02B7CC48ECC0CD5B9B3EA660C305FB();
	void OnBlendOut_EA02B7CC48ECC0CD5B9B3EA660C305FB();
	void OnCompleted_EA02B7CC48ECC0CD5B9B3EA660C305FB();
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData);
	void K2_OnEndAbility(bool bWasCancelled);
	void ExecuteUbergraph_GA_Gardening_Harvest(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName Temp_name_Variable, bool CallFunc_K2_CommitAbility_ReturnValue, class AValeriaCharacter* CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue, class UAbilityAnimationComponent* CallFunc_GetAbilityAnimation_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UCharacterStateMachineComponent* CallFunc_GetCSM_ReturnValue, class UAnimMontage* CallFunc_GetMontage_ReturnValue, class UAbilityTask_PlayMontageAndWait* CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue, const struct FGameplayEventData& K2Node_Event_EventData, int32 CallFunc_Round_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UGardenComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsServer_ReturnValue, bool K2Node_Event_bWasCancelled, class AValeriaCharacter* CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue_1, class AValeriaCharacter* CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue_2, int32 CallFunc_AkEventActor_ReturnValue, double CallFunc_Round_A_ImplicitCast);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
