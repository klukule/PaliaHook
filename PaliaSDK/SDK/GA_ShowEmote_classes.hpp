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
	uint8                                        Pad_2D6D[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                EmoteTarget;                                       // 0x460(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsWatchingForMovement;                            // 0x468(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GA_ShowEmote_C");
		return Clss;
	}

	void GetMovement(class UValeriaCharacterMoveComponent** InMovement, class AValeriaCharacter* InCallFunc_GetValeriaCharacterFromActorInfo_ReturnValue, class UValeriaCharacterMoveComponent* InCallFunc_GetValeriaCharacterMovementComponent_ReturnValue);
	void OnFinish_65FEFC3B45CEC7EA54A45A8FC48AA20C();
	void OnCancelled_59A6B96C433AC83C58B90AAE9ED05BB8();
	void OnInterrupted_59A6B96C433AC83C58B90AAE9ED05BB8();
	void OnBlendOut_59A6B96C433AC83C58B90AAE9ED05BB8();
	void OnCompleted_59A6B96C433AC83C58B90AAE9ED05BB8();
	void OnNotifyEnd_FA732F674D534A664E9F799589F10E40(class FName InNotifyName);
	void OnNotifyBegin_FA732F674D534A664E9F799589F10E40(class FName InNotifyName);
	void OnInterrupted_FA732F674D534A664E9F799589F10E40(class FName InNotifyName);
	void OnBlendOut_FA732F674D534A664E9F799589F10E40(class FName InNotifyName);
	void OnCompleted_FA732F674D534A664E9F799589F10E40(class FName InNotifyName);
	void HandleMovement(float InDeltaSeconds, const struct FVector& InOldLocation, const struct FVector& InOldVelocity);
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& InEventData);
	void K2_OnEndAbility(bool InbWasCancelled);
	void ExecuteUbergraph_GA_ShowEmote(int32 InEntryPoint, class AValeriaCharacter* InCallFunc_GetValeriaCharacterFromActorInfo_ReturnValue, class UValeriaEmoteComponent* InCallFunc_GetEmoteComponent_ReturnValue, class USkeletalMeshComponent* InTemp_object_Variable, class FName InK2Node_CustomEvent_NotifyName_4, FDelegateProperty_ InK2Node_CreateDelegate_OutputDelegate, class FName InK2Node_CustomEvent_NotifyName_3, FDelegateProperty_ InK2Node_CreateDelegate_OutputDelegate_1, class FName InK2Node_CustomEvent_NotifyName_2, FDelegateProperty_ InK2Node_CreateDelegate_OutputDelegate_2, class FName InK2Node_CustomEvent_NotifyName_1, FDelegateProperty_ InK2Node_CreateDelegate_OutputDelegate_3, class FName InK2Node_CustomEvent_NotifyName, FDelegateProperty_ InK2Node_CreateDelegate_OutputDelegate_4, class FName InTemp_name_Variable, class USkeletalMeshComponent* InTemp_object_Variable_1, class UAnimInstance* InCallFunc_GetAnimInstance_ReturnValue, class FName InTemp_name_Variable_1, class FName InTemp_name_Variable_2, bool InCallFunc_K2_CommitAbility_ReturnValue, FDelegateProperty_ InK2Node_CreateDelegate_OutputDelegate_5, float InCallFunc_GetEmoteDuration_ReturnValue, class UAbilityTask_WaitDelay* InCallFunc_WaitDelay_ReturnValue, bool InCallFunc_IsValid_ReturnValue, bool InCallFunc_DoesEmoteHave3D_ReturnValue, class UAbilityTask_PlayMontageAndWait* InCallFunc_CreatePlayMontageAndWaitProxy_ReturnValue, class UPlayMontageCallbackProxy* InCallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool InCallFunc_IsValid_ReturnValue_1, bool InCallFunc_IsValid_ReturnValue_2, class AValeriaCharacter* InCallFunc_GetValeriaCharacterFromActorInfo_ReturnValue_1, const struct FVector& InCallFunc_K2_GetActorLocation_ReturnValue, double InCallFunc_BreakVector_X, double InCallFunc_BreakVector_Y, double InCallFunc_BreakVector_Z, const struct FVector& InCallFunc_MakeVector_ReturnValue, class AValeriaCharacter* InCallFunc_GetValeriaCharacterFromActorInfo_ReturnValue_2, class UValeriaEmoteComponent* InCallFunc_GetEmoteComponent_ReturnValue_1, bool InCallFunc_IsValid_ReturnValue_3, class UValeriaGASComponent* InCallFunc_GetGAS_ReturnValue, bool InCallFunc_IsValid_ReturnValue_4, const struct FVector& InCallFunc_K2_GetActorLocation_ReturnValue_1, bool InCallFunc_IsValid_ReturnValue_5, double InCallFunc_BreakVector_X_1, double InCallFunc_BreakVector_Y_1, double InCallFunc_BreakVector_Z_1, const struct FVector& InCallFunc_MakeVector_ReturnValue_1, const struct FRotator& InCallFunc_FindLookAtRotation_ReturnValue, FDelegateProperty_ InK2Node_CreateDelegate_OutputDelegate_6, FDelegateProperty_ InK2Node_CreateDelegate_OutputDelegate_7, class UValeriaCharacterMoveComponent* InCallFunc_GetMovement_Movement, class UValeriaCharacterMoveComponent* InCallFunc_GetMovement_Movement_1, class UValeriaCharacterMoveComponent* InCallFunc_GetMovement_Movement_2, bool InCallFunc_IsExceedingMaxSpeed_ReturnValue, class AValeriaCharacter* InCallFunc_GetValeriaCharacterFromActorInfo_ReturnValue_3, float InK2Node_CustomEvent_DeltaSeconds, const struct FVector& InK2Node_CustomEvent_OldLocation, const struct FVector& InK2Node_CustomEvent_OldVelocity, class AValeriaCharacter* InCallFunc_GetValeriaCharacterFromActorInfo_ReturnValue_4, FDelegateProperty_ InK2Node_CreateDelegate_OutputDelegate_8, const struct FGameplayEventData& InK2Node_Event_EventData, bool InK2Node_Event_bWasCancelled, class UEmoteDataAsset* InK2Node_DynamicCast_AsEmote_Data_Asset, bool InK2Node_DynamicCast_bSuccess, class UValeriaCharacterMoveComponent* InCallFunc_GetMovement_Movement_3, FDelegateProperty_ InK2Node_CreateDelegate_OutputDelegate_9, class AValeriaCharacter* InCallFunc_GetValeriaCharacterFromActorInfo_ReturnValue_5, TScriptInterface<class IVAL_CustomizableCharacterInterface> InK2Node_DynamicCast_AsVAL_Customizable_Character_Interface, bool InK2Node_DynamicCast_bSuccess_1, class USkeletalMeshComponent* InCallFunc_GetHeadMeshComponent_ReturnValue, FDelegateProperty_ InK2Node_CreateDelegate_OutputDelegate_10, class AValeriaCharacter* InCallFunc_GetValeriaCharacterFromActorInfo_ReturnValue_6, TScriptInterface<class IVAL_CustomizableCharacterInterface> InK2Node_DynamicCast_AsVAL_Customizable_Character_Interface_1, bool InK2Node_DynamicCast_bSuccess_2, FDelegateProperty_ InK2Node_CreateDelegate_OutputDelegate_11, class USkeletalMeshComponent* InCallFunc_GetHeadMeshComponent_ReturnValue_1, class AValeriaCharacter* InCallFunc_GetValeriaCharacterFromActorInfo_ReturnValue_7, class AValeriaCharacter* InCallFunc_GetValeriaCharacterFromActorInfo_ReturnValue_8, class AValeriaCharacter* InCallFunc_GetValeriaCharacterFromActorInfo_ReturnValue_9, class UValeriaEmoteComponent* InCallFunc_GetEmoteComponent_ReturnValue_2);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
