#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x31 (0x469 - 0x438)
// BlueprintGeneratedClass GA_ShowEmote.GA_ShowEmote_C
class UGA_ShowEmote_C : public UValeriaGASGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x438(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UValeriaGASComponent*                  ValeriaGASComponent;                               // 0x440(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UValeriaEmoteComponent*                EmoteComponent;                                    // 0x448(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UEmoteDataAsset*                       CurEmoteData;                                      // 0x450(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         bHasBlockedMovement;                               // 0x458(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bHasEnforcedPosition;                              // 0x459(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2D2B[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                EmoteTarget;                                       // 0x460(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsWatchingForMovement;                            // 0x468(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGA_ShowEmote_C* GetDefaultObj();

	void GetMovement(class UValeriaCharacterMoveComponent** Movement, class AValeriaCharacter* CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue, class UValeriaCharacterMoveComponent* CallFunc_GetValeriaCharacterMovementComponent_ReturnValue);
	void OnFinish_65FEFC3B45CEC7EA54A45A8FC48AA20C();
	void OnCancelled_59A6B96C433AC83C58B90AAE9ED05BB8();
	void OnInterrupted_59A6B96C433AC83C58B90AAE9ED05BB8();
	void OnBlendOut_59A6B96C433AC83C58B90AAE9ED05BB8();
	void OnCompleted_59A6B96C433AC83C58B90AAE9ED05BB8();
	void OnNotifyEnd_FA732F674D534A664E9F799589F10E40(class FName NotifyName);
	void OnNotifyBegin_FA732F674D534A664E9F799589F10E40(class FName NotifyName);
	void OnInterrupted_FA732F674D534A664E9F799589F10E40(class FName NotifyName);
	void OnBlendOut_FA732F674D534A664E9F799589F10E40(class FName NotifyName);
	void OnCompleted_FA732F674D534A664E9F799589F10E40(class FName NotifyName);
	void HandleMovement(float DeltaSeconds, const struct FVector& OldLocation, const struct FVector& OldVelocity);
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData);
	void K2_OnEndAbility(bool bWasCancelled);
	void ExecuteUbergraph_GA_ShowEmote(int32 EntryPoint, class AValeriaCharacter* CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue, class UValeriaEmoteComponent* CallFunc_GetEmoteComponent_ReturnValue, class USkeletalMeshComponent* Temp_object_Variable, class FName K2Node_CustomEvent_NotifyName_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_CustomEvent_NotifyName_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName K2Node_CustomEvent_NotifyName_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName K2Node_CustomEvent_NotifyName_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FName K2Node_CustomEvent_NotifyName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class FName Temp_name_Variable, class USkeletalMeshComponent* Temp_object_Variable_1, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class FName Temp_name_Variable_1, class FName Temp_name_Variable_2, bool CallFunc_K2_CommitAbility_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, float CallFunc_GetEmoteDuration_ReturnValue, class UAbilityTask_WaitDelay* CallFunc_WaitDelay_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_DoesEmoteHave3D_ReturnValue, class UAbilityTask_PlayMontageAndWait* CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, class AValeriaCharacter* CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, const struct FVector& CallFunc_MakeVector_ReturnValue, class AValeriaCharacter* CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue_2, class UValeriaEmoteComponent* CallFunc_GetEmoteComponent_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_3, class UValeriaGASComponent* CallFunc_GetGAS_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_5, double CallFunc_BreakVector_X_1, double CallFunc_BreakVector_Y_1, double CallFunc_BreakVector_Z_1, const struct FVector& CallFunc_MakeVector_ReturnValue_1, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, class UValeriaCharacterMoveComponent* CallFunc_GetMovement_Movement, class UValeriaCharacterMoveComponent* CallFunc_GetMovement_Movement_1, class UValeriaCharacterMoveComponent* CallFunc_GetMovement_Movement_2, bool CallFunc_IsExceedingMaxSpeed_ReturnValue, class AValeriaCharacter* CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue_3, float K2Node_CustomEvent_DeltaSeconds, const struct FVector& K2Node_CustomEvent_OldLocation, const struct FVector& K2Node_CustomEvent_OldVelocity, class AValeriaCharacter* CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, const struct FGameplayEventData& K2Node_Event_EventData, bool K2Node_Event_bWasCancelled, class UEmoteDataAsset* K2Node_DynamicCast_AsEmote_Data_Asset, bool K2Node_DynamicCast_bSuccess, class UValeriaCharacterMoveComponent* CallFunc_GetMovement_Movement_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, class AValeriaCharacter* CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue_5, TScriptInterface<class IVAL_CustomizableCharacterInterface> K2Node_DynamicCast_AsVAL_Customizable_Character_Interface, bool K2Node_DynamicCast_bSuccess_1, class USkeletalMeshComponent* CallFunc_GetHeadMeshComponent_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, class AValeriaCharacter* CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue_6, TScriptInterface<class IVAL_CustomizableCharacterInterface> K2Node_DynamicCast_AsVAL_Customizable_Character_Interface_1, bool K2Node_DynamicCast_bSuccess_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, class USkeletalMeshComponent* CallFunc_GetHeadMeshComponent_ReturnValue_1, class AValeriaCharacter* CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue_7, class AValeriaCharacter* CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue_8, class AValeriaCharacter* CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue_9, class UValeriaEmoteComponent* CallFunc_GetEmoteComponent_ReturnValue_2);
};

}


