#pragma once

// Dumped with Dumper-7!


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
	uint8                                        Pad_2CCE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                GatherGameplayEffect;                              // 0x490(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       CameraShakeAmount;                                 // 0x498(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CameraShakeShouldTrigger;                          // 0x4A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ButtonPressed;                                     // 0x4A1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2CCF[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        DamageOnHit;                                       // 0x4A4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  AnimationName;                                     // 0x4A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  MontageSection;                                    // 0x4B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                StaminaEffect;                                     // 0x4B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FBoxSphereBounds                      ProbeSphere;                                       // 0x4C0(0x38)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         EnforceYaw;                                        // 0x4F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2CD1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       EnforcedYaw;                                       // 0x500(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle           GameplayEffect_AbilityLockedIn;                    // 0x508(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle           GameplayEffect_MovementBlocker;                    // 0x510(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class URPGAbilityTask_PlayMontageAndWaitForEvent* MontageTask;                                       // 0x518(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int64                                        InputPressedTime;                                  // 0x520(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         RetriggerAbilityFromOutroOnInputPress;             // 0x528(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsFinishing;                                       // 0x529(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReLoopIfInputWithinTimeWindow;                     // 0x52A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2CD4[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UVAL_TaskProxy_PlayMontageAndWaitForEvent* Async_Task;                                        // 0x530(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         LockedIn;                                          // 0x538(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ButtonPressToTriggerNextLoop;                      // 0x539(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         AllowTriggeringNextLoop;                           // 0x53A(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ShouldAllowMovement;                               // 0x53B(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGA_LoopableEvent_Base_C* GetDefaultObj();

	void GetProbeSphere(struct FBoxSphereBounds* NewParam);
	void GetGASComponentForTargetActor(class AActor* Actor, class UValeriaGASComponent** GasComponent, class UValeriaGASComponent* CallFunc_GetComponentByClass_ReturnValue);
	void GetVitalsComponentForTargetActor(class AActor* Actor, class UVitalsComponent** VitalsComponent, class UVitalsComponent* CallFunc_GetComponentByClass_ReturnValue);
	void LoadAbilityAssets(class AValeriaCharacter* ValeriaCharacter);
	void ConsiderCancellingLoop(bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_IsButtonPressed_ButtonPressed, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_IsAbilityLockedIn_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue);
	void IsButtonPressed(bool* ButtonPressed);
	void Callback_InputReleased();
	void Callback_InputPressed(bool CallFunc_BooleanAND_ReturnValue, int64 CallFunc_GetValeriaTimestampMs64_ReturnValue);
	void DoGatherSFX(bool CanDamage, class AActor* Object, class AActor* Instigator, int32 NewLocalVar_0, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool Temp_bool_Variable, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue_1, class AValeriaCharacter* K2Node_DynamicCast_AsValeria_Character, bool K2Node_DynamicCast_bSuccess, class AValeriaPlayerController* CallFunc_GetValeriaPlayerController_ReturnValue, const struct FValeriaItem& CallFunc_GetEquippedItem_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AActor* K2Node_Select_Default);
	bool IsAbilityLockedIn(class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue, class AValeriaCharacter* K2Node_DynamicCast_AsValeria_Character, bool K2Node_DynamicCast_bSuccess, class UValeriaGASComponent* CallFunc_GetGAS_ReturnValue, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput, bool CallFunc_HasMatchingGameplayTag_ReturnValue, bool CallFunc_IsAbilityMarkedLockedIn_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1);
	void OnGatherServer(class AActor* Actor);
	void OnGatherClient(class AActor* Actor);
	void OnGather(class AActor* Actor, bool* DidProgressGather, class UVitalsComponent* VitalsComponent, bool WasDamageDealt, class UVitalsComponent* CallFunc_GetVitalsComponentForTargetActor_VitalsComponent, TSubclassOf<class UGameplayEffect> Temp_class_Variable, bool CallFunc_IsServer_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_GetVital_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, class AValeriaCharacter* CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_IsGodModeEnabled_ReturnValue, class UValeriaGASComponent* CallFunc_GetGAS_ReturnValue, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue, bool Temp_bool_Variable, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, enum class ENetRole CallFunc_GetLocalRole_ReturnValue, bool CallFunc_IsServer_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue_1, class UValeriaGASComponent* CallFunc_GetGASComponentForTargetActor_GASComponent, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue_2, const struct FVitalsChangeContext& K2Node_MakeStruct_VitalsChangeContext, TSubclassOf<class UGameplayEffect> K2Node_Select_Default, const struct FVitalsChange& K2Node_MakeStruct_VitalsChange, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue, bool CallFunc_FilterChange_ReturnValue);
	void TriggerGather(class AActor** TargetActor, class AActor* LocalTargetActor, bool CallFunc_K2_HasAuthority_ReturnValue, class AActor* CallFunc_GetTargetActor_Actor, bool CallFunc_IsValid_ReturnValue);
	void GetTriggerTimeFromMontage(class UAnimMontage* NewParam, double Alpha, double* TimeSeconds, float CallFunc_GetPlayLength_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_FClamp_ReturnValue, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast);
	void GetTriggerAlpha(bool AbilityIntroTrigger, double* Alpha);
	void GetTargetActor(class AActor** Actor, const TArray<class AActor*>& TmpResultingActors);
	void ShouldLoop(bool* ShouldLoop, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1);
	void ShakeCamera(class AValeriaCharacter* CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue, class AValeriaPlayerController* CallFunc_GetValeriaPlayerController_ReturnValue, float CallFunc_ClientStartCameraShake_Scale_ImplicitCast);
	void FilterActor(class AActor* Actor, bool* IncludeActor, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_ClassIsChildOf_ReturnValue);
	void EndTaskAndClearReference(bool CallFunc_IsValid_ReturnValue);
	void ClearSetMontage();
	void HandleEvent(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData, bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue, class AValeriaCharacter* K2Node_DynamicCast_AsValeria_Character, bool K2Node_DynamicCast_bSuccess, int64 CallFunc_GetValeriaTimestampMs64_ReturnValue, class UValeriaCharacterMoveComponent* CallFunc_GetValeriaCharacterMovementComponent_ReturnValue, int64 CallFunc_Subtract_Int64Int64_ReturnValue, bool CallFunc_Less_Int64Int64_ReturnValue, class AActor* CallFunc_TriggerGather_TargetActor);
	void SetAbilityLockedIn(bool LockedIn);
	void SetMovementBlock(bool bLock, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue);
	void OnAbilityEnded(bool CallFunc_FNameIsNone_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UAnimMontage* CallFunc_GetCurrentMontage_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1);
	void OnOutroBegin(class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue, class AValeriaCharacter* K2Node_DynamicCast_AsValeria_Character, bool K2Node_DynamicCast_bSuccess, class UValeriaCharacterMoveComponent* CallFunc_GetValeriaCharacterMovementComponent_ReturnValue);
	void OnLoopEndSuccess();
	void OnLoopBegin(class FName AnimationName, bool IsAbilityIntroTrigger);
	void OnAbilityActivated(class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue, class AValeriaCharacter* K2Node_DynamicCast_AsValeria_Character, bool K2Node_DynamicCast_bSuccess, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, class UValeriaCharacterMoveComponent* CallFunc_GetValeriaCharacterMovementComponent_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FRotator& CallFunc_MakeRotator_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, float CallFunc_MakeRotator_Yaw_ImplicitCast);
	void EventReceived_61604B204A52FE55D07E178D4DC2F376(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
	void OnCancelled_61604B204A52FE55D07E178D4DC2F376(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
	void OnInterrupted_61604B204A52FE55D07E178D4DC2F376(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
	void OnBlendOut_61604B204A52FE55D07E178D4DC2F376(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
	void OnCompleted_61604B204A52FE55D07E178D4DC2F376(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
	void EventReceived_77447BC74D3381190AD07DB52A7C9C1E(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
	void OnCancelled_77447BC74D3381190AD07DB52A7C9C1E(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
	void OnInterrupted_77447BC74D3381190AD07DB52A7C9C1E(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
	void OnBlendOut_77447BC74D3381190AD07DB52A7C9C1E(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
	void OnCompleted_77447BC74D3381190AD07DB52A7C9C1E(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
	void EventReceived_87B0B7C040C0EF4C9F67D9AD4E32ED36(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
	void OnCancelled_87B0B7C040C0EF4C9F67D9AD4E32ED36(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
	void OnInterrupted_87B0B7C040C0EF4C9F67D9AD4E32ED36(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
	void OnBlendOut_87B0B7C040C0EF4C9F67D9AD4E32ED36(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
	void OnCompleted_87B0B7C040C0EF4C9F67D9AD4E32ED36(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData);
	void DoOutro();
	void DoLoop();
	void Do_Intro();
	void Event_OnActivateAbility();
	void DoLoopWithMontage(class FName AnimationName, class FName MontageSection);
	void OnCharacterMoved(float DeltaSeconds, const struct FVector& OldLocation, const struct FVector& OldVelocity);
	void K2_OnEndAbility(bool bWasCancelled);
	void ExecuteUbergraph_GA_LoopableEvent_Base(int32 EntryPoint, const struct FGameplayTag& K2Node_CustomEvent_EventTag_10, const struct FGameplayEventData& K2Node_CustomEvent_EventData_10, const struct FGameplayEventData& Temp_struct_Variable, const struct FGameplayTag& Temp_struct_Variable_1, const struct FGameplayTag& K2Node_CustomEvent_EventTag_9, const struct FGameplayEventData& K2Node_CustomEvent_EventData_9, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FGameplayTag& K2Node_CustomEvent_EventTag_8, const struct FGameplayEventData& K2Node_CustomEvent_EventData_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FGameplayTag& K2Node_CustomEvent_EventTag_7, const struct FGameplayEventData& K2Node_CustomEvent_EventData_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const struct FGameplayTag& K2Node_CustomEvent_EventTag_6, const struct FGameplayEventData& K2Node_CustomEvent_EventData_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, const struct FGameplayTag& K2Node_CustomEvent_EventTag_5, const struct FGameplayEventData& K2Node_CustomEvent_EventData_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, const struct FGameplayEventData& Temp_struct_Variable_2, const struct FGameplayTag& Temp_struct_Variable_3, const struct FGameplayTag& K2Node_CustomEvent_EventTag_4, const struct FGameplayEventData& K2Node_CustomEvent_EventData_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, const struct FGameplayTag& K2Node_CustomEvent_EventTag_3, const struct FGameplayEventData& K2Node_CustomEvent_EventData_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, const struct FGameplayTag& K2Node_CustomEvent_EventTag_2, const struct FGameplayEventData& K2Node_CustomEvent_EventData_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, const struct FGameplayTag& K2Node_CustomEvent_EventTag_1, const struct FGameplayEventData& K2Node_CustomEvent_EventData_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, const struct FGameplayTag& K2Node_CustomEvent_EventTag, const struct FGameplayEventData& K2Node_CustomEvent_EventData, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, const struct FGameplayEventData& Temp_struct_Variable_4, const struct FGameplayTag& Temp_struct_Variable_5, bool CallFunc_FNameIsNone_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, bool CallFunc_Not_PreBool_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, bool CallFunc_ShouldLoop_ShouldLoop, bool CallFunc_ShouldLoop_ShouldLoop_1, const struct FGameplayTag& K2Node_CustomEvent_EventTag_11, const struct FGameplayEventData& K2Node_CustomEvent_EventData_11, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_12, const struct FGameplayTag& K2Node_CustomEvent_EventTag_12, const struct FGameplayEventData& K2Node_CustomEvent_EventData_12, const struct FGameplayTag& K2Node_CustomEvent_EventTag_13, const struct FGameplayEventData& K2Node_CustomEvent_EventData_13, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_13, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_14, bool CallFunc_ShouldLoop_ShouldLoop_2, const struct FGameplayTag& K2Node_CustomEvent_EventTag_14, const struct FGameplayEventData& K2Node_CustomEvent_EventData_14, bool CallFunc_K2_CommitAbility_ReturnValue, class UVAL_TaskProxy_PlayMontageAndWaitForEvent* CallFunc_PlayMontageByMappingAndWaitForEvent_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UVAL_TaskProxy_PlayMontageAndWaitForEvent* CallFunc_PlayMontageByMappingAndWaitForEvent_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_FNameIsNone_ReturnValue_1, class UVAL_TaskProxy_PlayMontageAndWaitForEvent* CallFunc_PlayMontageByMappingAndWaitForEvent_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_FNameIsNone_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_FNameIsNone_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_3, class FName K2Node_CustomEvent_AnimationName, class FName K2Node_CustomEvent_MontageSection, bool CallFunc_FNameIsNone_ReturnValue_4, bool CallFunc_Not_PreBool_ReturnValue_4, bool CallFunc_BooleanOR_ReturnValue_1, float K2Node_CustomEvent_DeltaSeconds, const struct FVector& K2Node_CustomEvent_OldLocation, const struct FVector& K2Node_CustomEvent_OldVelocity, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_15, double CallFunc_VSizeSquared_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue, class AValeriaCharacter* K2Node_DynamicCast_AsValeria_Character, bool K2Node_DynamicCast_bSuccess, bool K2Node_Event_bWasCancelled, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue_1, class AValeriaCharacter* K2Node_DynamicCast_AsValeria_Character_1, bool K2Node_DynamicCast_bSuccess_1);
};

}


