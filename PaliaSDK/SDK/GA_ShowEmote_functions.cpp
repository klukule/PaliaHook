#pragma once

// Dumped with Dumper-7!

#include "SDK.hpp"

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function GA_ShowEmote.GA_ShowEmote_C.GetMovement
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UValeriaCharacterMoveComponent*Movement                                                         (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AValeriaCharacter*           CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UValeriaCharacterMoveComponent*CallFunc_GetValeriaCharacterMovementComponent_ReturnValue        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UGA_ShowEmote_C::GetMovement(class UValeriaCharacterMoveComponent** InMovement, class AValeriaCharacter* InCallFunc_GetValeriaCharacterFromActorInfo_ReturnValue, class UValeriaCharacterMoveComponent* InCallFunc_GetValeriaCharacterMovementComponent_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_ShowEmote_C", "GetMovement");

	Params::UGA_ShowEmote_C_GetMovement_Params Parms{};

	Parms.CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue = InCallFunc_GetValeriaCharacterFromActorInfo_ReturnValue;
	Parms.CallFunc_GetValeriaCharacterMovementComponent_ReturnValue = InCallFunc_GetValeriaCharacterMovementComponent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (InMovement != nullptr)
		*InMovement = Parms.Movement;

}


// Function GA_ShowEmote.GA_ShowEmote_C.OnFinish_65FEFC3B45CEC7EA54A45A8FC48AA20C
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_ShowEmote_C::OnFinish_65FEFC3B45CEC7EA54A45A8FC48AA20C()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_ShowEmote_C", "OnFinish_65FEFC3B45CEC7EA54A45A8FC48AA20C");

	Params::UGA_ShowEmote_C_OnFinish_65FEFC3B45CEC7EA54A45A8FC48AA20C_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_ShowEmote.GA_ShowEmote_C.OnCancelled_59A6B96C433AC83C58B90AAE9ED05BB8
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_ShowEmote_C::OnCancelled_59A6B96C433AC83C58B90AAE9ED05BB8()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_ShowEmote_C", "OnCancelled_59A6B96C433AC83C58B90AAE9ED05BB8");

	Params::UGA_ShowEmote_C_OnCancelled_59A6B96C433AC83C58B90AAE9ED05BB8_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_ShowEmote.GA_ShowEmote_C.OnInterrupted_59A6B96C433AC83C58B90AAE9ED05BB8
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_ShowEmote_C::OnInterrupted_59A6B96C433AC83C58B90AAE9ED05BB8()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_ShowEmote_C", "OnInterrupted_59A6B96C433AC83C58B90AAE9ED05BB8");

	Params::UGA_ShowEmote_C_OnInterrupted_59A6B96C433AC83C58B90AAE9ED05BB8_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_ShowEmote.GA_ShowEmote_C.OnBlendOut_59A6B96C433AC83C58B90AAE9ED05BB8
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_ShowEmote_C::OnBlendOut_59A6B96C433AC83C58B90AAE9ED05BB8()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_ShowEmote_C", "OnBlendOut_59A6B96C433AC83C58B90AAE9ED05BB8");

	Params::UGA_ShowEmote_C_OnBlendOut_59A6B96C433AC83C58B90AAE9ED05BB8_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_ShowEmote.GA_ShowEmote_C.OnCompleted_59A6B96C433AC83C58B90AAE9ED05BB8
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_ShowEmote_C::OnCompleted_59A6B96C433AC83C58B90AAE9ED05BB8()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_ShowEmote_C", "OnCompleted_59A6B96C433AC83C58B90AAE9ED05BB8");

	Params::UGA_ShowEmote_C_OnCompleted_59A6B96C433AC83C58B90AAE9ED05BB8_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_ShowEmote.GA_ShowEmote_C.OnNotifyEnd_FA732F674D534A664E9F799589F10E40
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_ShowEmote_C::OnNotifyEnd_FA732F674D534A664E9F799589F10E40(class FName InNotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_ShowEmote_C", "OnNotifyEnd_FA732F674D534A664E9F799589F10E40");

	Params::UGA_ShowEmote_C_OnNotifyEnd_FA732F674D534A664E9F799589F10E40_Params Parms{};

	Parms.NotifyName = InNotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_ShowEmote.GA_ShowEmote_C.OnNotifyBegin_FA732F674D534A664E9F799589F10E40
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_ShowEmote_C::OnNotifyBegin_FA732F674D534A664E9F799589F10E40(class FName InNotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_ShowEmote_C", "OnNotifyBegin_FA732F674D534A664E9F799589F10E40");

	Params::UGA_ShowEmote_C_OnNotifyBegin_FA732F674D534A664E9F799589F10E40_Params Parms{};

	Parms.NotifyName = InNotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_ShowEmote.GA_ShowEmote_C.OnInterrupted_FA732F674D534A664E9F799589F10E40
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_ShowEmote_C::OnInterrupted_FA732F674D534A664E9F799589F10E40(class FName InNotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_ShowEmote_C", "OnInterrupted_FA732F674D534A664E9F799589F10E40");

	Params::UGA_ShowEmote_C_OnInterrupted_FA732F674D534A664E9F799589F10E40_Params Parms{};

	Parms.NotifyName = InNotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_ShowEmote.GA_ShowEmote_C.OnBlendOut_FA732F674D534A664E9F799589F10E40
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_ShowEmote_C::OnBlendOut_FA732F674D534A664E9F799589F10E40(class FName InNotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_ShowEmote_C", "OnBlendOut_FA732F674D534A664E9F799589F10E40");

	Params::UGA_ShowEmote_C_OnBlendOut_FA732F674D534A664E9F799589F10E40_Params Parms{};

	Parms.NotifyName = InNotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_ShowEmote.GA_ShowEmote_C.OnCompleted_FA732F674D534A664E9F799589F10E40
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_ShowEmote_C::OnCompleted_FA732F674D534A664E9F799589F10E40(class FName InNotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_ShowEmote_C", "OnCompleted_FA732F674D534A664E9F799589F10E40");

	Params::UGA_ShowEmote_C_OnCompleted_FA732F674D534A664E9F799589F10E40_Params Parms{};

	Parms.NotifyName = InNotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_ShowEmote.GA_ShowEmote_C.HandleMovement
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     OldLocation                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     OldVelocity                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_ShowEmote_C::HandleMovement(float InDeltaSeconds, const struct FVector& InOldLocation, const struct FVector& InOldVelocity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_ShowEmote_C", "HandleMovement");

	Params::UGA_ShowEmote_C_HandleMovement_Params Parms{};

	Parms.DeltaSeconds = InDeltaSeconds;
	Parms.OldLocation = InOldLocation;
	Parms.OldVelocity = InOldVelocity;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_ShowEmote.GA_ShowEmote_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayEventData          EventData                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_ShowEmote_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData& InEventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_ShowEmote_C", "K2_ActivateAbilityFromEvent");

	Params::UGA_ShowEmote_C_K2_ActivateAbilityFromEvent_Params Parms{};

	Parms.EventData = InEventData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_ShowEmote.GA_ShowEmote_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bWasCancelled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_ShowEmote_C::K2_OnEndAbility(bool InbWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_ShowEmote_C", "K2_OnEndAbility");

	Params::UGA_ShowEmote_C_K2_OnEndAbility_Params Parms{};

	Parms.bWasCancelled = InbWasCancelled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_ShowEmote.GA_ShowEmote_C.ExecuteUbergraph_GA_ShowEmote
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValeriaCharacter*           CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UValeriaEmoteComponent*      CallFunc_GetEmoteComponent_ReturnValue                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      Temp_object_Variable                                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      Temp_object_Variable_1                                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_1                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_2                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_CommitAbility_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetEmoteDuration_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilityTask_WaitDelay*      CallFunc_WaitDelay_ReturnValue                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesEmoteHave3D_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilityTask_PlayMontageAndWait*CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPlayMontageCallbackProxy*   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValeriaCharacter*           CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue_1          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValeriaCharacter*           CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue_2          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UValeriaEmoteComponent*      CallFunc_GetEmoteComponent_ReturnValue_1                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UValeriaGASComponent*        CallFunc_GetGAS_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_X_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Y_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Z_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_FindLookAtRotation_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UValeriaCharacterMoveComponent*CallFunc_GetMovement_Movement                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UValeriaCharacterMoveComponent*CallFunc_GetMovement_Movement_1                                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UValeriaCharacterMoveComponent*CallFunc_GetMovement_Movement_2                                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsExceedingMaxSpeed_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValeriaCharacter*           CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue_3          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_DeltaSeconds                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_OldLocation                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_OldVelocity                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValeriaCharacter*           CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue_4          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          K2Node_Event_EventData                                           (ConstParm)
// bool                               K2Node_Event_bWasCancelled                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEmoteDataAsset*             K2Node_DynamicCast_AsEmote_Data_Asset                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UValeriaCharacterMoveComponent*CallFunc_GetMovement_Movement_3                                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_9                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AValeriaCharacter*           CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue_5          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IVAL_CustomizableCharacterInterface>K2Node_DynamicCast_AsVAL_Customizable_Character_Interface        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetHeadMeshComponent_ReturnValue                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_10                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AValeriaCharacter*           CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue_6          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IVAL_CustomizableCharacterInterface>K2Node_DynamicCast_AsVAL_Customizable_Character_Interface_1      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_11                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetHeadMeshComponent_ReturnValue_1                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AValeriaCharacter*           CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue_7          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AValeriaCharacter*           CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue_8          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AValeriaCharacter*           CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue_9          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UValeriaEmoteComponent*      CallFunc_GetEmoteComponent_ReturnValue_2                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UGA_ShowEmote_C::ExecuteUbergraph_GA_ShowEmote(int32 InEntryPoint, class AValeriaCharacter* InCallFunc_GetValeriaCharacterFromActorInfo_ReturnValue, class UValeriaEmoteComponent* InCallFunc_GetEmoteComponent_ReturnValue, class USkeletalMeshComponent* InTemp_object_Variable, class FName InK2Node_CustomEvent_NotifyName_4, FDelegateProperty_ InK2Node_CreateDelegate_OutputDelegate, class FName InK2Node_CustomEvent_NotifyName_3, FDelegateProperty_ InK2Node_CreateDelegate_OutputDelegate_1, class FName InK2Node_CustomEvent_NotifyName_2, FDelegateProperty_ InK2Node_CreateDelegate_OutputDelegate_2, class FName InK2Node_CustomEvent_NotifyName_1, FDelegateProperty_ InK2Node_CreateDelegate_OutputDelegate_3, class FName InK2Node_CustomEvent_NotifyName, FDelegateProperty_ InK2Node_CreateDelegate_OutputDelegate_4, class FName InTemp_name_Variable, class USkeletalMeshComponent* InTemp_object_Variable_1, class UAnimInstance* InCallFunc_GetAnimInstance_ReturnValue, class FName InTemp_name_Variable_1, class FName InTemp_name_Variable_2, bool InCallFunc_K2_CommitAbility_ReturnValue, FDelegateProperty_ InK2Node_CreateDelegate_OutputDelegate_5, float InCallFunc_GetEmoteDuration_ReturnValue, class UAbilityTask_WaitDelay* InCallFunc_WaitDelay_ReturnValue, bool InCallFunc_IsValid_ReturnValue, bool InCallFunc_DoesEmoteHave3D_ReturnValue, class UAbilityTask_PlayMontageAndWait* InCallFunc_CreatePlayMontageAndWaitProxy_ReturnValue, class UPlayMontageCallbackProxy* InCallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool InCallFunc_IsValid_ReturnValue_1, bool InCallFunc_IsValid_ReturnValue_2, class AValeriaCharacter* InCallFunc_GetValeriaCharacterFromActorInfo_ReturnValue_1, const struct FVector& InCallFunc_K2_GetActorLocation_ReturnValue, double InCallFunc_BreakVector_X, double InCallFunc_BreakVector_Y, double InCallFunc_BreakVector_Z, const struct FVector& InCallFunc_MakeVector_ReturnValue, class AValeriaCharacter* InCallFunc_GetValeriaCharacterFromActorInfo_ReturnValue_2, class UValeriaEmoteComponent* InCallFunc_GetEmoteComponent_ReturnValue_1, bool InCallFunc_IsValid_ReturnValue_3, class UValeriaGASComponent* InCallFunc_GetGAS_ReturnValue, bool InCallFunc_IsValid_ReturnValue_4, const struct FVector& InCallFunc_K2_GetActorLocation_ReturnValue_1, bool InCallFunc_IsValid_ReturnValue_5, double InCallFunc_BreakVector_X_1, double InCallFunc_BreakVector_Y_1, double InCallFunc_BreakVector_Z_1, const struct FVector& InCallFunc_MakeVector_ReturnValue_1, const struct FRotator& InCallFunc_FindLookAtRotation_ReturnValue, FDelegateProperty_ InK2Node_CreateDelegate_OutputDelegate_6, FDelegateProperty_ InK2Node_CreateDelegate_OutputDelegate_7, class UValeriaCharacterMoveComponent* InCallFunc_GetMovement_Movement, class UValeriaCharacterMoveComponent* InCallFunc_GetMovement_Movement_1, class UValeriaCharacterMoveComponent* InCallFunc_GetMovement_Movement_2, bool InCallFunc_IsExceedingMaxSpeed_ReturnValue, class AValeriaCharacter* InCallFunc_GetValeriaCharacterFromActorInfo_ReturnValue_3, float InK2Node_CustomEvent_DeltaSeconds, const struct FVector& InK2Node_CustomEvent_OldLocation, const struct FVector& InK2Node_CustomEvent_OldVelocity, class AValeriaCharacter* InCallFunc_GetValeriaCharacterFromActorInfo_ReturnValue_4, FDelegateProperty_ InK2Node_CreateDelegate_OutputDelegate_8, const struct FGameplayEventData& InK2Node_Event_EventData, bool InK2Node_Event_bWasCancelled, class UEmoteDataAsset* InK2Node_DynamicCast_AsEmote_Data_Asset, bool InK2Node_DynamicCast_bSuccess, class UValeriaCharacterMoveComponent* InCallFunc_GetMovement_Movement_3, FDelegateProperty_ InK2Node_CreateDelegate_OutputDelegate_9, class AValeriaCharacter* InCallFunc_GetValeriaCharacterFromActorInfo_ReturnValue_5, TScriptInterface<class IVAL_CustomizableCharacterInterface> InK2Node_DynamicCast_AsVAL_Customizable_Character_Interface, bool InK2Node_DynamicCast_bSuccess_1, class USkeletalMeshComponent* InCallFunc_GetHeadMeshComponent_ReturnValue, FDelegateProperty_ InK2Node_CreateDelegate_OutputDelegate_10, class AValeriaCharacter* InCallFunc_GetValeriaCharacterFromActorInfo_ReturnValue_6, TScriptInterface<class IVAL_CustomizableCharacterInterface> InK2Node_DynamicCast_AsVAL_Customizable_Character_Interface_1, bool InK2Node_DynamicCast_bSuccess_2, FDelegateProperty_ InK2Node_CreateDelegate_OutputDelegate_11, class USkeletalMeshComponent* InCallFunc_GetHeadMeshComponent_ReturnValue_1, class AValeriaCharacter* InCallFunc_GetValeriaCharacterFromActorInfo_ReturnValue_7, class AValeriaCharacter* InCallFunc_GetValeriaCharacterFromActorInfo_ReturnValue_8, class AValeriaCharacter* InCallFunc_GetValeriaCharacterFromActorInfo_ReturnValue_9, class UValeriaEmoteComponent* InCallFunc_GetEmoteComponent_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_ShowEmote_C", "ExecuteUbergraph_GA_ShowEmote");

	Params::UGA_ShowEmote_C_ExecuteUbergraph_GA_ShowEmote_Params Parms{};

	Parms.EntryPoint = InEntryPoint;
	Parms.CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue = InCallFunc_GetValeriaCharacterFromActorInfo_ReturnValue;
	Parms.CallFunc_GetEmoteComponent_ReturnValue = InCallFunc_GetEmoteComponent_ReturnValue;
	Parms.Temp_object_Variable = InTemp_object_Variable;
	Parms.K2Node_CustomEvent_NotifyName_4 = InK2Node_CustomEvent_NotifyName_4;
	Parms.K2Node_CreateDelegate_OutputDelegate = InK2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_NotifyName_3 = InK2Node_CustomEvent_NotifyName_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = InK2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CustomEvent_NotifyName_2 = InK2Node_CustomEvent_NotifyName_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = InK2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CustomEvent_NotifyName_1 = InK2Node_CustomEvent_NotifyName_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = InK2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CustomEvent_NotifyName = InK2Node_CustomEvent_NotifyName;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = InK2Node_CreateDelegate_OutputDelegate_4;
	Parms.Temp_name_Variable = InTemp_name_Variable;
	Parms.Temp_object_Variable_1 = InTemp_object_Variable_1;
	Parms.CallFunc_GetAnimInstance_ReturnValue = InCallFunc_GetAnimInstance_ReturnValue;
	Parms.Temp_name_Variable_1 = InTemp_name_Variable_1;
	Parms.Temp_name_Variable_2 = InTemp_name_Variable_2;
	Parms.CallFunc_K2_CommitAbility_ReturnValue = InCallFunc_K2_CommitAbility_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = InK2Node_CreateDelegate_OutputDelegate_5;
	Parms.CallFunc_GetEmoteDuration_ReturnValue = InCallFunc_GetEmoteDuration_ReturnValue;
	Parms.CallFunc_WaitDelay_ReturnValue = InCallFunc_WaitDelay_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = InCallFunc_IsValid_ReturnValue;
	Parms.CallFunc_DoesEmoteHave3D_ReturnValue = InCallFunc_DoesEmoteHave3D_ReturnValue;
	Parms.CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue = InCallFunc_CreatePlayMontageAndWaitProxy_ReturnValue;
	Parms.CallFunc_CreateProxyObjectForPlayMontage_ReturnValue = InCallFunc_CreateProxyObjectForPlayMontage_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = InCallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = InCallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue_1 = InCallFunc_GetValeriaCharacterFromActorInfo_ReturnValue_1;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = InCallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_BreakVector_X = InCallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = InCallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = InCallFunc_BreakVector_Z;
	Parms.CallFunc_MakeVector_ReturnValue = InCallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue_2 = InCallFunc_GetValeriaCharacterFromActorInfo_ReturnValue_2;
	Parms.CallFunc_GetEmoteComponent_ReturnValue_1 = InCallFunc_GetEmoteComponent_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_3 = InCallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_GetGAS_ReturnValue = InCallFunc_GetGAS_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_4 = InCallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = InCallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_5 = InCallFunc_IsValid_ReturnValue_5;
	Parms.CallFunc_BreakVector_X_1 = InCallFunc_BreakVector_X_1;
	Parms.CallFunc_BreakVector_Y_1 = InCallFunc_BreakVector_Y_1;
	Parms.CallFunc_BreakVector_Z_1 = InCallFunc_BreakVector_Z_1;
	Parms.CallFunc_MakeVector_ReturnValue_1 = InCallFunc_MakeVector_ReturnValue_1;
	Parms.CallFunc_FindLookAtRotation_ReturnValue = InCallFunc_FindLookAtRotation_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = InK2Node_CreateDelegate_OutputDelegate_6;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = InK2Node_CreateDelegate_OutputDelegate_7;
	Parms.CallFunc_GetMovement_Movement = InCallFunc_GetMovement_Movement;
	Parms.CallFunc_GetMovement_Movement_1 = InCallFunc_GetMovement_Movement_1;
	Parms.CallFunc_GetMovement_Movement_2 = InCallFunc_GetMovement_Movement_2;
	Parms.CallFunc_IsExceedingMaxSpeed_ReturnValue = InCallFunc_IsExceedingMaxSpeed_ReturnValue;
	Parms.CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue_3 = InCallFunc_GetValeriaCharacterFromActorInfo_ReturnValue_3;
	Parms.K2Node_CustomEvent_DeltaSeconds = InK2Node_CustomEvent_DeltaSeconds;
	Parms.K2Node_CustomEvent_OldLocation = InK2Node_CustomEvent_OldLocation;
	Parms.K2Node_CustomEvent_OldVelocity = InK2Node_CustomEvent_OldVelocity;
	Parms.CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue_4 = InCallFunc_GetValeriaCharacterFromActorInfo_ReturnValue_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = InK2Node_CreateDelegate_OutputDelegate_8;
	Parms.K2Node_Event_EventData = InK2Node_Event_EventData;
	Parms.K2Node_Event_bWasCancelled = InK2Node_Event_bWasCancelled;
	Parms.K2Node_DynamicCast_AsEmote_Data_Asset = InK2Node_DynamicCast_AsEmote_Data_Asset;
	Parms.K2Node_DynamicCast_bSuccess = InK2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetMovement_Movement_3 = InCallFunc_GetMovement_Movement_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_9 = InK2Node_CreateDelegate_OutputDelegate_9;
	Parms.CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue_5 = InCallFunc_GetValeriaCharacterFromActorInfo_ReturnValue_5;
	Parms.K2Node_DynamicCast_AsVAL_Customizable_Character_Interface = InK2Node_DynamicCast_AsVAL_Customizable_Character_Interface;
	Parms.K2Node_DynamicCast_bSuccess_1 = InK2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetHeadMeshComponent_ReturnValue = InCallFunc_GetHeadMeshComponent_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_10 = InK2Node_CreateDelegate_OutputDelegate_10;
	Parms.CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue_6 = InCallFunc_GetValeriaCharacterFromActorInfo_ReturnValue_6;
	Parms.K2Node_DynamicCast_AsVAL_Customizable_Character_Interface_1 = InK2Node_DynamicCast_AsVAL_Customizable_Character_Interface_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = InK2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_11 = InK2Node_CreateDelegate_OutputDelegate_11;
	Parms.CallFunc_GetHeadMeshComponent_ReturnValue_1 = InCallFunc_GetHeadMeshComponent_ReturnValue_1;
	Parms.CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue_7 = InCallFunc_GetValeriaCharacterFromActorInfo_ReturnValue_7;
	Parms.CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue_8 = InCallFunc_GetValeriaCharacterFromActorInfo_ReturnValue_8;
	Parms.CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue_9 = InCallFunc_GetValeriaCharacterFromActorInfo_ReturnValue_9;
	Parms.CallFunc_GetEmoteComponent_ReturnValue_2 = InCallFunc_GetEmoteComponent_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
