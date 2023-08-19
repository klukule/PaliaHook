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

// 0x104 (0x53C - 0x438)
// BlueprintGeneratedClass GA_LoopableEvent_Base.GA_LoopableEvent_Base_C
class UGA_LoopableEvent_Base_C : public UValeriaGASGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x438(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                  InAnimationName;                                   // 0x440(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  InAnimationSection;                                // 0x448(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  LoopAnimationName;                                 // 0x450(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  LoopAnimationSection;                              // 0x458(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  OutroAnimName;                                     // 0x460(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  OutroAnimSection;                                  // 0x468(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                TargetType;                                        // 0x470(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<struct FVitalAmount>                  VitalCost;                                         // 0x478(0x10)(Edit, BlueprintVisible)
	bool                                         MovementBlocked;                                   // 0x488(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         BlockMovementOnOutro;                              // 0x489(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CanLoop;                                           // 0x48A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         LoopStartsInIntro;                                 // 0x48B(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2AEF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                GatherGameplayEffect;                              // 0x490(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       CameraShakeAmount;                                 // 0x498(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CameraShakeShouldTrigger;                          // 0x4A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ButtonPressed;                                     // 0x4A1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2AF0[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        DamageOnHit;                                       // 0x4A4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  AnimationName;                                     // 0x4A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  MontageSection;                                    // 0x4B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                StaminaEffect;                                     // 0x4B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FBoxSphereBounds                      ProbeSphere;                                       // 0x4C0(0x38)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         EnforceYaw;                                        // 0x4F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2AF1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       EnforcedYaw;                                       // 0x500(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle           GameplayEffect_AbilityLockedIn;                    // 0x508(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle           GameplayEffect_MovementBlocker;                    // 0x510(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class URPGAbilityTask_PlayMontageAndWaitForEvent* MontageTask;                                       // 0x518(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int64                                        InputPressedTime;                                  // 0x520(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         RetriggerAbilityFromOutroOnInputPress;             // 0x528(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsFinishing;                                       // 0x529(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReLoopIfInputWithinTimeWindow;                     // 0x52A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2AF5[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UVAL_TaskProxy_PlayMontageAndWaitForEvent* Async_Task;                                        // 0x530(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         LockedIn;                                          // 0x538(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ButtonPressToTriggerNextLoop;                      // 0x539(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         AllowTriggeringNextLoop;                           // 0x53A(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ShouldAllowMovement;                               // 0x53B(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GA_LoopableEvent_Base_C");
		return Clss;
	}

	void ConsiderCancellingLoop(bool InCallFunc_Not_PreBool_ReturnValue, bool InCallFunc_Not_PreBool_ReturnValue_1, bool InCallFunc_IsButtonPressed_ButtonPressed, bool InCallFunc_Not_PreBool_ReturnValue_2, bool InCallFunc_IsAbilityLockedIn_ReturnValue, bool InCallFunc_Not_PreBool_ReturnValue_3, bool InCallFunc_BooleanAND_ReturnValue);
	void IsButtonPressed(bool* InButtonPressed);
	void Callback_InputReleased();
	void Callback_InputPressed(bool InCallFunc_BooleanAND_ReturnValue, int64 InCallFunc_GetValeriaTimestampMs64_ReturnValue);
	void DoGatherSFX(bool InCanDamage, class AActor* InObject, class AActor* InInstigator, int32 InNewLocalVar_0, class AActor* InCallFunc_GetOwningActorFromActorInfo_ReturnValue, bool InCallFunc_IsValid_ReturnValue, bool InCallFunc_HasAuthority_ReturnValue, bool InTemp_bool_Variable, class AActor* InCallFunc_GetOwningActorFromActorInfo_ReturnValue_1, class AActor* InK2Node_Select_Default, class AValeriaCharacter* InK2Node_DynamicCast_AsValeria_Character, bool InK2Node_DynamicCast_bSuccess, class AValeriaPlayerController* InCallFunc_GetValeriaPlayerController_ReturnValue, const struct FValeriaItem& InCallFunc_GetEquippedItem_ReturnValue);
	bool IsAbilityLockedIn(class AActor* InCallFunc_GetOwningActorFromActorInfo_ReturnValue, class AValeriaCharacter* InK2Node_DynamicCast_AsValeria_Character, bool InK2Node_DynamicCast_bSuccess, class UValeriaGASComponent* InCallFunc_GetGAS_ReturnValue, TScriptInterface<class IGameplayTagAssetInterface> InCallFunc_HasMatchingGameplayTag_self_CastInput, bool InCallFunc_HasMatchingGameplayTag_ReturnValue, bool InCallFunc_IsAbilityMarkedLockedIn_ReturnValue, bool InCallFunc_BooleanOR_ReturnValue, bool InCallFunc_BooleanOR_ReturnValue_1);
	void OnGatherServer(class AActor* InActor);
	void OnGatherClient(class AActor* InActor);
	void OnGather(class AActor* InActor, bool* InDidProgressGather, bool InWasDamageDealt, bool InCallFunc_IsServer_ReturnValue, class UVitalsComponent* InCallFunc_GetComponentByClass_ReturnValue, bool InCallFunc_Not_PreBool_ReturnValue, int32 InCallFunc_GetVital_ReturnValue, class UValeriaGASComponent* InCallFunc_GetComponentByClass_ReturnValue_1, bool InCallFunc_LessEqual_IntInt_ReturnValue, bool InCallFunc_Not_PreBool_ReturnValue_1, TSubclassOf<class UGameplayEffect> InTemp_class_Variable, class AValeriaCharacter* InCallFunc_GetValeriaCharacterFromActorInfo_ReturnValue, bool InCallFunc_IsGodModeEnabled_ReturnValue, class UValeriaGASComponent* InCallFunc_GetGAS_ReturnValue, class AActor* InCallFunc_GetOwningActorFromActorInfo_ReturnValue, bool InTemp_bool_Variable, const struct FVector& InCallFunc_K2_GetActorLocation_ReturnValue, enum class ENetRole InCallFunc_GetLocalRole_ReturnValue, bool InCallFunc_IsServer_ReturnValue_1, bool InCallFunc_EqualEqual_ByteByte_ReturnValue, class AActor* InCallFunc_GetOwningActorFromActorInfo_ReturnValue_1, class AActor* InCallFunc_GetOwningActorFromActorInfo_ReturnValue_2, const struct FVitalsChangeContext& InK2Node_MakeStruct_VitalsChangeContext, TSubclassOf<class UGameplayEffect> InK2Node_Select_Default, const struct FVitalsChange& InK2Node_MakeStruct_VitalsChange, const struct FActiveGameplayEffectHandle& InCallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue, bool InCallFunc_FilterChange_ReturnValue);
	void TriggerGather(bool InCallFunc_K2_HasAuthority_ReturnValue, class AActor* InCallFunc_GetTargetActor_Actor, bool InCallFunc_IsValid_ReturnValue);
	void GetTriggerTimeFromMontage(class UAnimMontage* InNewParam, double InAlpha, double* InTimeSeconds, float InCallFunc_GetPlayLength_ReturnValue, double InCallFunc_Multiply_DoubleDouble_ReturnValue, double InCallFunc_FClamp_ReturnValue, double InCallFunc_Multiply_DoubleDouble_A_ImplicitCast);
	void GetTriggerAlpha(bool InAbilityIntroTrigger, double* InAlpha);
	void GetTargetActor(class AActor** InActor, const TArray<class AActor*>& InTmpResultingActors);
	void ShouldLoop(bool* InShouldLoop, bool InCallFunc_BooleanAND_ReturnValue, bool InCallFunc_BooleanOR_ReturnValue, bool InCallFunc_BooleanAND_ReturnValue_1);
	void ShakeCamera(class AValeriaCharacter* InCallFunc_GetValeriaCharacterFromActorInfo_ReturnValue, class AValeriaPlayerController* InCallFunc_GetValeriaPlayerController_ReturnValue, float InCallFunc_ClientStartCameraShake_Scale_ImplicitCast);
	void FilterActor(class AActor* InActor, bool* InIncludeActor, class UClass* InCallFunc_GetObjectClass_ReturnValue, bool InCallFunc_ClassIsChildOf_ReturnValue);
	void EndTaskAndClearReference(bool InCallFunc_IsValid_ReturnValue);
	void ClearSetMontage();
	void HandleEvent(const struct FGameplayTag& InEventTag, const struct FGameplayEventData& InEventData, bool InGameplayTagsK2Node_SwitchGameplayTag_CmpSuccess, class AActor* InCallFunc_GetOwningActorFromActorInfo_ReturnValue, class AValeriaCharacter* InK2Node_DynamicCast_AsValeria_Character, bool InK2Node_DynamicCast_bSuccess, int64 InCallFunc_GetValeriaTimestampMs64_ReturnValue, class UValeriaCharacterMoveComponent* InCallFunc_GetValeriaCharacterMovementComponent_ReturnValue, int64 InCallFunc_Subtract_Int64Int64_ReturnValue, bool InCallFunc_Less_Int64Int64_ReturnValue);
	void SetAbilityLockedIn(bool InLockedIn);
	void SetMovementBlock(bool InbLock, const struct FActiveGameplayEffectHandle& InCallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue);
	void OnAbilityEnded(bool InCallFunc_FNameIsNone_ReturnValue, bool InCallFunc_Not_PreBool_ReturnValue, class UAnimMontage* InCallFunc_GetCurrentMontage_ReturnValue, FDelegateProperty_ InK2Node_CreateDelegate_OutputDelegate, bool InCallFunc_IsValid_ReturnValue, FDelegateProperty_ InK2Node_CreateDelegate_OutputDelegate_1);
	void OnOutroBegin(class AActor* InCallFunc_GetOwningActorFromActorInfo_ReturnValue, class AValeriaCharacter* InK2Node_DynamicCast_AsValeria_Character, bool InK2Node_DynamicCast_bSuccess, class UValeriaCharacterMoveComponent* InCallFunc_GetValeriaCharacterMovementComponent_ReturnValue);
	void OnLoopEndSuccess();
	void OnLoopBegin(class FName InAnimationName, bool InIsAbilityIntroTrigger);
	void OnAbilityActivated(class AActor* InCallFunc_GetOwningActorFromActorInfo_ReturnValue, class AValeriaCharacter* InK2Node_DynamicCast_AsValeria_Character, bool InK2Node_DynamicCast_bSuccess, const struct FRotator& InCallFunc_K2_GetActorRotation_ReturnValue, const struct FVector& InCallFunc_K2_GetActorLocation_ReturnValue, float InCallFunc_BreakRotator_Roll, float InCallFunc_BreakRotator_Pitch, float InCallFunc_BreakRotator_Yaw, class UValeriaCharacterMoveComponent* InCallFunc_GetValeriaCharacterMovementComponent_ReturnValue, FDelegateProperty_ InK2Node_CreateDelegate_OutputDelegate, const struct FRotator& InCallFunc_MakeRotator_ReturnValue, FDelegateProperty_ InK2Node_CreateDelegate_OutputDelegate_1, float InCallFunc_MakeRotator_Yaw_ImplicitCast);
	void EventReceived_61604B204A52FE55D07E178D4DC2F376(const struct FGameplayTag& InEventTag, const struct FGameplayEventData& InEventData);
	void OnCancelled_61604B204A52FE55D07E178D4DC2F376(const struct FGameplayTag& InEventTag, const struct FGameplayEventData& InEventData);
	void OnInterrupted_61604B204A52FE55D07E178D4DC2F376(const struct FGameplayTag& InEventTag, const struct FGameplayEventData& InEventData);
	void OnBlendOut_61604B204A52FE55D07E178D4DC2F376(const struct FGameplayTag& InEventTag, const struct FGameplayEventData& InEventData);
	void OnCompleted_61604B204A52FE55D07E178D4DC2F376(const struct FGameplayTag& InEventTag, const struct FGameplayEventData& InEventData);
	void EventReceived_77447BC74D3381190AD07DB52A7C9C1E(const struct FGameplayTag& InEventTag, const struct FGameplayEventData& InEventData);
	void OnCancelled_77447BC74D3381190AD07DB52A7C9C1E(const struct FGameplayTag& InEventTag, const struct FGameplayEventData& InEventData);
	void OnInterrupted_77447BC74D3381190AD07DB52A7C9C1E(const struct FGameplayTag& InEventTag, const struct FGameplayEventData& InEventData);
	void OnBlendOut_77447BC74D3381190AD07DB52A7C9C1E(const struct FGameplayTag& InEventTag, const struct FGameplayEventData& InEventData);
	void OnCompleted_77447BC74D3381190AD07DB52A7C9C1E(const struct FGameplayTag& InEventTag, const struct FGameplayEventData& InEventData);
	void EventReceived_87B0B7C040C0EF4C9F67D9AD4E32ED36(const struct FGameplayTag& InEventTag, const struct FGameplayEventData& InEventData);
	void OnCancelled_87B0B7C040C0EF4C9F67D9AD4E32ED36(const struct FGameplayTag& InEventTag, const struct FGameplayEventData& InEventData);
	void OnInterrupted_87B0B7C040C0EF4C9F67D9AD4E32ED36(const struct FGameplayTag& InEventTag, const struct FGameplayEventData& InEventData);
	void OnBlendOut_87B0B7C040C0EF4C9F67D9AD4E32ED36(const struct FGameplayTag& InEventTag, const struct FGameplayEventData& InEventData);
	void OnCompleted_87B0B7C040C0EF4C9F67D9AD4E32ED36(const struct FGameplayTag& InEventTag, const struct FGameplayEventData& InEventData);
	void DoOutro();
	void DoLoop();
	void Do_Intro();
	void Event_OnActivateAbility();
	void DoLoopWithMontage(class FName InAnimationName, class FName InMontageSection);
	void OnCharacterMoved(float InDeltaSeconds, const struct FVector& InOldLocation, const struct FVector& InOldVelocity);
	void K2_OnEndAbility(bool InbWasCancelled);
	void ExecuteUbergraph_GA_LoopableEvent_Base(int32 InEntryPoint, const struct FGameplayTag& InK2Node_CustomEvent_EventTag_10, const struct FGameplayEventData& InK2Node_CustomEvent_EventData_10, const struct FGameplayEventData& InTemp_struct_Variable, const struct FGameplayTag& InTemp_struct_Variable_1, const struct FGameplayTag& InK2Node_CustomEvent_EventTag_9, const struct FGameplayEventData& InK2Node_CustomEvent_EventData_9, FDelegateProperty_ InK2Node_CreateDelegate_OutputDelegate, const struct FGameplayTag& InK2Node_CustomEvent_EventTag_8, const struct FGameplayEventData& InK2Node_CustomEvent_EventData_8, FDelegateProperty_ InK2Node_CreateDelegate_OutputDelegate_1, const struct FGameplayTag& InK2Node_CustomEvent_EventTag_7, const struct FGameplayEventData& InK2Node_CustomEvent_EventData_7, FDelegateProperty_ InK2Node_CreateDelegate_OutputDelegate_2, const struct FGameplayTag& InK2Node_CustomEvent_EventTag_6, const struct FGameplayEventData& InK2Node_CustomEvent_EventData_6, FDelegateProperty_ InK2Node_CreateDelegate_OutputDelegate_3, const struct FGameplayTag& InK2Node_CustomEvent_EventTag_5, const struct FGameplayEventData& InK2Node_CustomEvent_EventData_5, FDelegateProperty_ InK2Node_CreateDelegate_OutputDelegate_4, const struct FGameplayEventData& InTemp_struct_Variable_2, const struct FGameplayTag& InTemp_struct_Variable_3, const struct FGameplayTag& InK2Node_CustomEvent_EventTag_4, const struct FGameplayEventData& InK2Node_CustomEvent_EventData_4, FDelegateProperty_ InK2Node_CreateDelegate_OutputDelegate_5, const struct FGameplayTag& InK2Node_CustomEvent_EventTag_3, const struct FGameplayEventData& InK2Node_CustomEvent_EventData_3, FDelegateProperty_ InK2Node_CreateDelegate_OutputDelegate_6, const struct FGameplayTag& InK2Node_CustomEvent_EventTag_2, const struct FGameplayEventData& InK2Node_CustomEvent_EventData_2, FDelegateProperty_ InK2Node_CreateDelegate_OutputDelegate_7, const struct FGameplayTag& InK2Node_CustomEvent_EventTag_1, const struct FGameplayEventData& InK2Node_CustomEvent_EventData_1, FDelegateProperty_ InK2Node_CreateDelegate_OutputDelegate_8, const struct FGameplayTag& InK2Node_CustomEvent_EventTag, const struct FGameplayEventData& InK2Node_CustomEvent_EventData, FDelegateProperty_ InK2Node_CreateDelegate_OutputDelegate_9, const struct FGameplayEventData& InTemp_struct_Variable_4, const struct FGameplayTag& InTemp_struct_Variable_5, bool InCallFunc_FNameIsNone_ReturnValue, FDelegateProperty_ InK2Node_CreateDelegate_OutputDelegate_10, bool InCallFunc_Not_PreBool_ReturnValue, FDelegateProperty_ InK2Node_CreateDelegate_OutputDelegate_11, bool InCallFunc_ShouldLoop_ShouldLoop, bool InCallFunc_ShouldLoop_ShouldLoop_1, const struct FGameplayTag& InK2Node_CustomEvent_EventTag_11, const struct FGameplayEventData& InK2Node_CustomEvent_EventData_11, FDelegateProperty_ InK2Node_CreateDelegate_OutputDelegate_12, const struct FGameplayTag& InK2Node_CustomEvent_EventTag_12, const struct FGameplayEventData& InK2Node_CustomEvent_EventData_12, const struct FGameplayTag& InK2Node_CustomEvent_EventTag_13, const struct FGameplayEventData& InK2Node_CustomEvent_EventData_13, FDelegateProperty_ InK2Node_CreateDelegate_OutputDelegate_13, FDelegateProperty_ InK2Node_CreateDelegate_OutputDelegate_14, bool InCallFunc_ShouldLoop_ShouldLoop_2, const struct FGameplayTag& InK2Node_CustomEvent_EventTag_14, const struct FGameplayEventData& InK2Node_CustomEvent_EventData_14, bool InCallFunc_K2_CommitAbility_ReturnValue, class UVAL_TaskProxy_PlayMontageAndWaitForEvent* InCallFunc_PlayMontageByMappingAndWaitForEvent_ReturnValue, bool InCallFunc_IsValid_ReturnValue, class UVAL_TaskProxy_PlayMontageAndWaitForEvent* InCallFunc_PlayMontageByMappingAndWaitForEvent_ReturnValue_1, bool InCallFunc_IsValid_ReturnValue_1, bool InCallFunc_FNameIsNone_ReturnValue_1, class UVAL_TaskProxy_PlayMontageAndWaitForEvent* InCallFunc_PlayMontageByMappingAndWaitForEvent_ReturnValue_2, bool InCallFunc_Not_PreBool_ReturnValue_1, bool InCallFunc_IsValid_ReturnValue_2, bool InCallFunc_FNameIsNone_ReturnValue_2, bool InCallFunc_Not_PreBool_ReturnValue_2, bool InCallFunc_FNameIsNone_ReturnValue_3, bool InCallFunc_BooleanOR_ReturnValue, bool InCallFunc_Not_PreBool_ReturnValue_3, class FName InK2Node_CustomEvent_AnimationName, class FName InK2Node_CustomEvent_MontageSection, bool InCallFunc_FNameIsNone_ReturnValue_4, bool InCallFunc_Not_PreBool_ReturnValue_4, bool InCallFunc_BooleanOR_ReturnValue_1, float InK2Node_CustomEvent_DeltaSeconds, const struct FVector& InK2Node_CustomEvent_OldLocation, const struct FVector& InK2Node_CustomEvent_OldVelocity, FDelegateProperty_ InK2Node_CreateDelegate_OutputDelegate_15, double InCallFunc_VSizeSquared_ReturnValue, bool InCallFunc_Greater_DoubleDouble_ReturnValue, class AActor* InCallFunc_GetOwningActorFromActorInfo_ReturnValue, class AValeriaCharacter* InK2Node_DynamicCast_AsValeria_Character, bool InK2Node_DynamicCast_bSuccess, bool InK2Node_Event_bWasCancelled, class AActor* InCallFunc_GetOwningActorFromActorInfo_ReturnValue_1, class AValeriaCharacter* InK2Node_DynamicCast_AsValeria_Character_1, bool InK2Node_DynamicCast_bSuccess_1);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
