#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF1 (0x529 - 0x438)
// BlueprintGeneratedClass GA_DecorInteraction.GA_DecorInteraction_C
class UGA_DecorInteraction_C : public UValeriaGASGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x438(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FTransform                            DecorTransform;                                    // 0x440(0x60)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       InputCancelDelay;                                  // 0x4A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3020[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Character_Transform;                               // 0x4B0(0x60)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Mapping_Name;                                      // 0x510(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       DecorInteractSpeed;                                // 0x518(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  PlayerSpeedModifierTag;                            // 0x520(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         WaitForServerConfirmation;                         // 0x528(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGA_DecorInteraction_C* GetDefaultObj();

	void UnbindEnforcedRules(class UValeriaCharacterMoveComponent* Move, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UValeriaCharacterMoveComponent* CallFunc_GetMovement_Movement);
	void BindEnforcedRules(class UValeriaCharacterMoveComponent* Move, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UValeriaCharacterMoveComponent* CallFunc_GetMovement_Movement);
	void MoveOutOfPosition(class UValeriaCharacterMoveComponent* MoveComp, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FVector& CallFunc_BreakTransform_Location_1, const struct FRotator& CallFunc_BreakTransform_Rotation_1, const struct FVector& CallFunc_BreakTransform_Scale_1, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, double CallFunc_BreakVector_X_1, double CallFunc_BreakVector_Y_1, double CallFunc_BreakVector_Z_1, class UValeriaCharacterMoveComponent* CallFunc_GetMovement_Movement, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_1, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue);
	void MoveIntoPosition(class UValeriaCharacterMoveComponent* MoveComp, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_NotEqual_DoubleDouble_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UValeriaCharacterMoveComponent* CallFunc_GetMovement_Movement, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, float CallFunc_Server_AddSpeedScalarModifier_inSpeedScalarModifier_ImplicitCast);
	void GetMovement(class UValeriaCharacterMoveComponent** Movement, class AValeriaCharacter* CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue, class UValeriaCharacterMoveComponent* CallFunc_GetValeriaCharacterMovementComponent_ReturnValue);
	void OnCancelled_C69B5BA140BAB0CA85D5798BE1C3B007();
	void OnInterrupted_C69B5BA140BAB0CA85D5798BE1C3B007();
	void OnBlendOut_C69B5BA140BAB0CA85D5798BE1C3B007();
	void OnCompleted_C69B5BA140BAB0CA85D5798BE1C3B007();
	void OnCancelled_E44A1AA9495B352538FA178DBDCF7CC8();
	void OnInterrupted_E44A1AA9495B352538FA178DBDCF7CC8();
	void OnBlendOut_E44A1AA9495B352538FA178DBDCF7CC8();
	void OnCompleted_E44A1AA9495B352538FA178DBDCF7CC8();
	void K2_OnEndAbility(bool bWasCancelled);
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData);
	void MovementInputTriggered();
	void PrimaryInteractPressed();
	void EnforcedStarted(const struct FVector& Location, const struct FRotator& Rotation);
	void EnforcedEnded(const struct FVector& Location, const struct FRotator& Rotation);
	void ReopenTimeoutGate();
	void PrepCancelInputs();
	void ExecuteUbergraph_GA_DecorInteraction(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, bool Temp_bool_IsClosed_Variable, bool K2Node_Event_bWasCancelled, const struct FGameplayEventData& K2Node_Event_EventData, const struct FTransform& CallFunc_GetTargetDataEndPointTransform_ReturnValue, bool CallFunc_TargetDataHasEndPoint_ReturnValue, const struct FTransform& CallFunc_GetTargetDataOrigin_ReturnValue, bool CallFunc_TargetDataHasOrigin_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_K2_CommitAbility_ReturnValue, class AValeriaCharacter* CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue, class AValeriaCharacter* CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue_1, class UValeriaGASComponent* CallFunc_GetGAS_ReturnValue, class UValeriaGASComponent* CallFunc_GetGAS_ReturnValue_1, class AValeriaCharacter* CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue_2, bool CallFunc_IsLocallyControlled_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, class FName CallFunc_GetMappingNameByAbility_Mapping_Name, bool CallFunc_FNameIsNone_ReturnValue, class UVAL_TaskProxy_PlayMontageAndWait* CallFunc_PlayMontageByMappingAndWait_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_K2_HasAuthority_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, const struct FVector& K2Node_CustomEvent_Location_1, const struct FRotator& K2Node_CustomEvent_Rotation_1, const struct FVector& K2Node_CustomEvent_Location, const struct FRotator& K2Node_CustomEvent_Rotation, class UVAL_TaskProxy_PlayMontageAndWait* CallFunc_PlayMontageByMappingAndWait_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, double K2Node_VariableSet_DecorInteractSpeed_ImplicitCast, float CallFunc_Delay_Duration_ImplicitCast);
};

}


