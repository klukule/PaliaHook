#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function GA_LoopableEvent_Base.GA_LoopableEvent_Base_C.ConsiderCancellingLoop
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsButtonPressed_ButtonPressed                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAbilityLockedIn_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_LoopableEvent_Base_C::ConsiderCancellingLoop(bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_IsButtonPressed_ButtonPressed, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_IsAbilityLockedIn_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_LoopableEvent_Base_C", "ConsiderCancellingLoop");

	Params::UGA_LoopableEvent_Base_C_ConsiderCancellingLoop_Params Parms{};

	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_IsButtonPressed_ButtonPressed = CallFunc_IsButtonPressed_ButtonPressed;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.CallFunc_IsAbilityLockedIn_ReturnValue = CallFunc_IsAbilityLockedIn_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_3 = CallFunc_Not_PreBool_ReturnValue_3;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_LoopableEvent_Base.GA_LoopableEvent_Base_C.IsButtonPressed
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ButtonPressed                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_LoopableEvent_Base_C::IsButtonPressed(bool* ButtonPressed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_LoopableEvent_Base_C", "IsButtonPressed");

	Params::UGA_LoopableEvent_Base_C_IsButtonPressed_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ButtonPressed != nullptr)
		*ButtonPressed = Parms.ButtonPressed;

}


// Function GA_LoopableEvent_Base.GA_LoopableEvent_Base_C.Callback_InputReleased
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_LoopableEvent_Base_C::Callback_InputReleased()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_LoopableEvent_Base_C", "Callback_InputReleased");

	Params::UGA_LoopableEvent_Base_C_Callback_InputReleased_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_LoopableEvent_Base.GA_LoopableEvent_Base_C.Callback_InputPressed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_GetValeriaTimestampMs64_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_LoopableEvent_Base_C::Callback_InputPressed(bool CallFunc_BooleanAND_ReturnValue, int64 CallFunc_GetValeriaTimestampMs64_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_LoopableEvent_Base_C", "Callback_InputPressed");

	Params::UGA_LoopableEvent_Base_C_Callback_InputPressed_Params Parms{};

	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetValeriaTimestampMs64_ReturnValue = CallFunc_GetValeriaTimestampMs64_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_LoopableEvent_Base.GA_LoopableEvent_Base_C.DoGatherSFX
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CanDamage                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Object                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Instigator                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              NewLocalVar_0                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwningActorFromActorInfo_ReturnValue                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwningActorFromActorInfo_ReturnValue_1               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Select_Default                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AValeriaCharacter*           K2Node_DynamicCast_AsValeria_Character                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValeriaPlayerController*    CallFunc_GetValeriaPlayerController_ReturnValue                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FValeriaItem                CallFunc_GetEquippedItem_ReturnValue                             ()

void UGA_LoopableEvent_Base_C::DoGatherSFX(bool CanDamage, class AActor* Object, class AActor* Instigator, int32 NewLocalVar_0, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool Temp_bool_Variable, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue_1, class AActor* K2Node_Select_Default, class AValeriaCharacter* K2Node_DynamicCast_AsValeria_Character, bool K2Node_DynamicCast_bSuccess, class AValeriaPlayerController* CallFunc_GetValeriaPlayerController_ReturnValue, const struct FValeriaItem& CallFunc_GetEquippedItem_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_LoopableEvent_Base_C", "DoGatherSFX");

	Params::UGA_LoopableEvent_Base_C_DoGatherSFX_Params Parms{};

	Parms.CanDamage = CanDamage;
	Parms.Object = Object;
	Parms.Instigator = Instigator;
	Parms.NewLocalVar_0 = NewLocalVar_0;
	Parms.CallFunc_GetOwningActorFromActorInfo_ReturnValue = CallFunc_GetOwningActorFromActorInfo_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetOwningActorFromActorInfo_ReturnValue_1 = CallFunc_GetOwningActorFromActorInfo_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_DynamicCast_AsValeria_Character = K2Node_DynamicCast_AsValeria_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetValeriaPlayerController_ReturnValue = CallFunc_GetValeriaPlayerController_ReturnValue;
	Parms.CallFunc_GetEquippedItem_ReturnValue = CallFunc_GetEquippedItem_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_LoopableEvent_Base.GA_LoopableEvent_Base_C.IsAbilityLockedIn
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwningActorFromActorInfo_ReturnValue                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AValeriaCharacter*           K2Node_DynamicCast_AsValeria_Character                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UValeriaGASComponent*        CallFunc_GetGAS_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameplayTagAssetInterface>CallFunc_HasMatchingGameplayTag_self_CastInput                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasMatchingGameplayTag_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAbilityMarkedLockedIn_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UGA_LoopableEvent_Base_C::IsAbilityLockedIn(class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue, class AValeriaCharacter* K2Node_DynamicCast_AsValeria_Character, bool K2Node_DynamicCast_bSuccess, class UValeriaGASComponent* CallFunc_GetGAS_ReturnValue, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput, bool CallFunc_HasMatchingGameplayTag_ReturnValue, bool CallFunc_IsAbilityMarkedLockedIn_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_LoopableEvent_Base_C", "IsAbilityLockedIn");

	Params::UGA_LoopableEvent_Base_C_IsAbilityLockedIn_Params Parms{};

	Parms.CallFunc_GetOwningActorFromActorInfo_ReturnValue = CallFunc_GetOwningActorFromActorInfo_ReturnValue;
	Parms.K2Node_DynamicCast_AsValeria_Character = K2Node_DynamicCast_AsValeria_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetGAS_ReturnValue = CallFunc_GetGAS_ReturnValue;
	Parms.CallFunc_HasMatchingGameplayTag_self_CastInput = CallFunc_HasMatchingGameplayTag_self_CastInput;
	Parms.CallFunc_HasMatchingGameplayTag_ReturnValue = CallFunc_HasMatchingGameplayTag_ReturnValue;
	Parms.CallFunc_IsAbilityMarkedLockedIn_ReturnValue = CallFunc_IsAbilityMarkedLockedIn_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GA_LoopableEvent_Base.GA_LoopableEvent_Base_C.OnGatherServer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UGA_LoopableEvent_Base_C::OnGatherServer(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_LoopableEvent_Base_C", "OnGatherServer");

	Params::UGA_LoopableEvent_Base_C_OnGatherServer_Params Parms{};

	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_LoopableEvent_Base.GA_LoopableEvent_Base_C.OnGatherClient
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UGA_LoopableEvent_Base_C::OnGatherClient(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_LoopableEvent_Base_C", "OnGatherClient");

	Params::UGA_LoopableEvent_Base_C_OnGatherClient_Params Parms{};

	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_LoopableEvent_Base.GA_LoopableEvent_Base_C.OnGather
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               DidProgressGather                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               WasDamageDealt                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVitalsComponent*            CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetVital_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UValeriaGASComponent*        CallFunc_GetComponentByClass_ReturnValue_1                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class UGameplayEffect> Temp_class_Variable                                              (ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class AValeriaCharacter*           CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsGodModeEnabled_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UValeriaGASComponent*        CallFunc_GetGAS_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwningActorFromActorInfo_ReturnValue                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ENetRole                CallFunc_GetLocalRole_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwningActorFromActorInfo_ReturnValue_1               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwningActorFromActorInfo_ReturnValue_2               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVitalsChangeContext        K2Node_MakeStruct_VitalsChangeContext                            ()
// TSubclassOf<class UGameplayEffect> K2Node_Select_Default                                            (ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// struct FVitalsChange               K2Node_MakeStruct_VitalsChange                                   ()
// struct FActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue              (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_FilterChange_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_LoopableEvent_Base_C::OnGather(class AActor* Actor, bool* DidProgressGather, bool WasDamageDealt, bool CallFunc_IsServer_ReturnValue, class UVitalsComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_GetVital_ReturnValue, class UValeriaGASComponent* CallFunc_GetComponentByClass_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, TSubclassOf<class UGameplayEffect> Temp_class_Variable, class AValeriaCharacter* CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue, bool CallFunc_IsGodModeEnabled_ReturnValue, class UValeriaGASComponent* CallFunc_GetGAS_ReturnValue, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue, bool Temp_bool_Variable, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, enum class ENetRole CallFunc_GetLocalRole_ReturnValue, bool CallFunc_IsServer_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue_1, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue_2, const struct FVitalsChangeContext& K2Node_MakeStruct_VitalsChangeContext, TSubclassOf<class UGameplayEffect> K2Node_Select_Default, const struct FVitalsChange& K2Node_MakeStruct_VitalsChange, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue, bool CallFunc_FilterChange_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_LoopableEvent_Base_C", "OnGather");

	Params::UGA_LoopableEvent_Base_C_OnGather_Params Parms{};

	Parms.Actor = Actor;
	Parms.WasDamageDealt = WasDamageDealt;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetVital_ReturnValue = CallFunc_GetVital_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue_1 = CallFunc_GetComponentByClass_ReturnValue_1;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.Temp_class_Variable = Temp_class_Variable;
	Parms.CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue = CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue;
	Parms.CallFunc_IsGodModeEnabled_ReturnValue = CallFunc_IsGodModeEnabled_ReturnValue;
	Parms.CallFunc_GetGAS_ReturnValue = CallFunc_GetGAS_ReturnValue;
	Parms.CallFunc_GetOwningActorFromActorInfo_ReturnValue = CallFunc_GetOwningActorFromActorInfo_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_GetLocalRole_ReturnValue = CallFunc_GetLocalRole_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue_1 = CallFunc_IsServer_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetOwningActorFromActorInfo_ReturnValue_1 = CallFunc_GetOwningActorFromActorInfo_ReturnValue_1;
	Parms.CallFunc_GetOwningActorFromActorInfo_ReturnValue_2 = CallFunc_GetOwningActorFromActorInfo_ReturnValue_2;
	Parms.K2Node_MakeStruct_VitalsChangeContext = K2Node_MakeStruct_VitalsChangeContext;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeStruct_VitalsChange = K2Node_MakeStruct_VitalsChange;
	Parms.CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue = CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue;
	Parms.CallFunc_FilterChange_ReturnValue = CallFunc_FilterChange_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (DidProgressGather != nullptr)
		*DidProgressGather = Parms.DidProgressGather;

}


// Function GA_LoopableEvent_Base.GA_LoopableEvent_Base_C.TriggerGather
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_K2_HasAuthority_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetTargetActor_Actor                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_LoopableEvent_Base_C::TriggerGather(bool CallFunc_K2_HasAuthority_ReturnValue, class AActor* CallFunc_GetTargetActor_Actor, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_LoopableEvent_Base_C", "TriggerGather");

	Params::UGA_LoopableEvent_Base_C_TriggerGather_Params Parms{};

	Parms.CallFunc_K2_HasAuthority_ReturnValue = CallFunc_K2_HasAuthority_ReturnValue;
	Parms.CallFunc_GetTargetActor_Actor = CallFunc_GetTargetActor_Actor;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_LoopableEvent_Base.GA_LoopableEvent_Base_C.GetTriggerTimeFromMontage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UAnimMontage*                NewParam                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             Alpha                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             TimeSeconds                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetPlayLength_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_LoopableEvent_Base_C::GetTriggerTimeFromMontage(class UAnimMontage* NewParam, double Alpha, double* TimeSeconds, float CallFunc_GetPlayLength_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_FClamp_ReturnValue, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_LoopableEvent_Base_C", "GetTriggerTimeFromMontage");

	Params::UGA_LoopableEvent_Base_C_GetTriggerTimeFromMontage_Params Parms{};

	Parms.NewParam = NewParam;
	Parms.Alpha = Alpha;
	Parms.CallFunc_GetPlayLength_ReturnValue = CallFunc_GetPlayLength_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast = CallFunc_Multiply_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (TimeSeconds != nullptr)
		*TimeSeconds = Parms.TimeSeconds;

}


// Function GA_LoopableEvent_Base.GA_LoopableEvent_Base_C.GetTriggerAlpha
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               AbilityIntroTrigger                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Alpha                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_LoopableEvent_Base_C::GetTriggerAlpha(bool AbilityIntroTrigger, double* Alpha)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_LoopableEvent_Base_C", "GetTriggerAlpha");

	Params::UGA_LoopableEvent_Base_C_GetTriggerAlpha_Params Parms{};

	Parms.AbilityIntroTrigger = AbilityIntroTrigger;

	UObject::ProcessEvent(Func, &Parms);

	if (Alpha != nullptr)
		*Alpha = Parms.Alpha;

}


// Function GA_LoopableEvent_Base.GA_LoopableEvent_Base_C.GetTargetActor
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                      Actor                                                            (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              TmpResultingActors                                               (Edit, BlueprintVisible, DisableEditOnTemplate)

void UGA_LoopableEvent_Base_C::GetTargetActor(class AActor** Actor, const TArray<class AActor*>& TmpResultingActors)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_LoopableEvent_Base_C", "GetTargetActor");

	Params::UGA_LoopableEvent_Base_C_GetTargetActor_Params Parms{};

	Parms.TmpResultingActors = TmpResultingActors;

	UObject::ProcessEvent(Func, &Parms);

	if (Actor != nullptr)
		*Actor = Parms.Actor;

}


// Function GA_LoopableEvent_Base.GA_LoopableEvent_Base_C.ShouldLoop
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ShouldLoop                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_LoopableEvent_Base_C::ShouldLoop(bool* ShouldLoop, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_LoopableEvent_Base_C", "ShouldLoop");

	Params::UGA_LoopableEvent_Base_C_ShouldLoop_Params Parms{};

	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (ShouldLoop != nullptr)
		*ShouldLoop = Parms.ShouldLoop;

}


// Function GA_LoopableEvent_Base.GA_LoopableEvent_Base_C.ShakeCamera
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AValeriaCharacter*           CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AValeriaPlayerController*    CallFunc_GetValeriaPlayerController_ReturnValue                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_ClientStartCameraShake_Scale_ImplicitCast               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_LoopableEvent_Base_C::ShakeCamera(class AValeriaCharacter* CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue, class AValeriaPlayerController* CallFunc_GetValeriaPlayerController_ReturnValue, float CallFunc_ClientStartCameraShake_Scale_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_LoopableEvent_Base_C", "ShakeCamera");

	Params::UGA_LoopableEvent_Base_C_ShakeCamera_Params Parms{};

	Parms.CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue = CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue;
	Parms.CallFunc_GetValeriaPlayerController_ReturnValue = CallFunc_GetValeriaPlayerController_ReturnValue;
	Parms.CallFunc_ClientStartCameraShake_Scale_ImplicitCast = CallFunc_ClientStartCameraShake_Scale_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_LoopableEvent_Base.GA_LoopableEvent_Base_C.FilterActor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               IncludeActor                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ClassIsChildOf_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_LoopableEvent_Base_C::FilterActor(class AActor* Actor, bool* IncludeActor, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_ClassIsChildOf_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_LoopableEvent_Base_C", "FilterActor");

	Params::UGA_LoopableEvent_Base_C_FilterActor_Params Parms{};

	Parms.Actor = Actor;
	Parms.CallFunc_GetObjectClass_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
	Parms.CallFunc_ClassIsChildOf_ReturnValue = CallFunc_ClassIsChildOf_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IncludeActor != nullptr)
		*IncludeActor = Parms.IncludeActor;

}


// Function GA_LoopableEvent_Base.GA_LoopableEvent_Base_C.EndTaskAndClearReference
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_LoopableEvent_Base_C::EndTaskAndClearReference(bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_LoopableEvent_Base_C", "EndTaskAndClearReference");

	Params::UGA_LoopableEvent_Base_C_EndTaskAndClearReference_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_LoopableEvent_Base.GA_LoopableEvent_Base_C.ClearSetMontage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_LoopableEvent_Base_C::ClearSetMontage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_LoopableEvent_Base_C", "ClearSetMontage");

	Params::UGA_LoopableEvent_Base_C_ClearSetMontage_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_LoopableEvent_Base.GA_LoopableEvent_Base_C.HandleEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                EventTag                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          EventData                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwningActorFromActorInfo_ReturnValue                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AValeriaCharacter*           K2Node_DynamicCast_AsValeria_Character                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_GetValeriaTimestampMs64_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UValeriaCharacterMoveComponent*CallFunc_GetValeriaCharacterMovementComponent_ReturnValue        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_Subtract_Int64Int64_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_Int64Int64_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_LoopableEvent_Base_C::HandleEvent(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData, bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue, class AValeriaCharacter* K2Node_DynamicCast_AsValeria_Character, bool K2Node_DynamicCast_bSuccess, int64 CallFunc_GetValeriaTimestampMs64_ReturnValue, class UValeriaCharacterMoveComponent* CallFunc_GetValeriaCharacterMovementComponent_ReturnValue, int64 CallFunc_Subtract_Int64Int64_ReturnValue, bool CallFunc_Less_Int64Int64_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_LoopableEvent_Base_C", "HandleEvent");

	Params::UGA_LoopableEvent_Base_C_HandleEvent_Params Parms{};

	Parms.EventTag = EventTag;
	Parms.EventData = EventData;
	Parms.GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess = GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess;
	Parms.CallFunc_GetOwningActorFromActorInfo_ReturnValue = CallFunc_GetOwningActorFromActorInfo_ReturnValue;
	Parms.K2Node_DynamicCast_AsValeria_Character = K2Node_DynamicCast_AsValeria_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetValeriaTimestampMs64_ReturnValue = CallFunc_GetValeriaTimestampMs64_ReturnValue;
	Parms.CallFunc_GetValeriaCharacterMovementComponent_ReturnValue = CallFunc_GetValeriaCharacterMovementComponent_ReturnValue;
	Parms.CallFunc_Subtract_Int64Int64_ReturnValue = CallFunc_Subtract_Int64Int64_ReturnValue;
	Parms.CallFunc_Less_Int64Int64_ReturnValue = CallFunc_Less_Int64Int64_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_LoopableEvent_Base.GA_LoopableEvent_Base_C.SetAbilityLockedIn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               LockedIn                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_LoopableEvent_Base_C::SetAbilityLockedIn(bool LockedIn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_LoopableEvent_Base_C", "SetAbilityLockedIn");

	Params::UGA_LoopableEvent_Base_C_SetAbilityLockedIn_Params Parms{};

	Parms.LockedIn = LockedIn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_LoopableEvent_Base.GA_LoopableEvent_Base_C.SetMovementBlock
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bLock                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue               (NoDestructor, HasGetValueTypeHash)

void UGA_LoopableEvent_Base_C::SetMovementBlock(bool bLock, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_LoopableEvent_Base_C", "SetMovementBlock");

	Params::UGA_LoopableEvent_Base_C_SetMovementBlock_Params Parms{};

	Parms.bLock = bLock;
	Parms.CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue = CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_LoopableEvent_Base.GA_LoopableEvent_Base_C.OnAbilityEnded
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_FNameIsNone_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_GetCurrentMontage_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UGA_LoopableEvent_Base_C::OnAbilityEnded(bool CallFunc_FNameIsNone_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UAnimMontage* CallFunc_GetCurrentMontage_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_LoopableEvent_Base_C", "OnAbilityEnded");

	Params::UGA_LoopableEvent_Base_C_OnAbilityEnded_Params Parms{};

	Parms.CallFunc_FNameIsNone_ReturnValue = CallFunc_FNameIsNone_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetCurrentMontage_ReturnValue = CallFunc_GetCurrentMontage_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_LoopableEvent_Base.GA_LoopableEvent_Base_C.OnOutroBegin
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      CallFunc_GetOwningActorFromActorInfo_ReturnValue                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AValeriaCharacter*           K2Node_DynamicCast_AsValeria_Character                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UValeriaCharacterMoveComponent*CallFunc_GetValeriaCharacterMovementComponent_ReturnValue        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UGA_LoopableEvent_Base_C::OnOutroBegin(class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue, class AValeriaCharacter* K2Node_DynamicCast_AsValeria_Character, bool K2Node_DynamicCast_bSuccess, class UValeriaCharacterMoveComponent* CallFunc_GetValeriaCharacterMovementComponent_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_LoopableEvent_Base_C", "OnOutroBegin");

	Params::UGA_LoopableEvent_Base_C_OnOutroBegin_Params Parms{};

	Parms.CallFunc_GetOwningActorFromActorInfo_ReturnValue = CallFunc_GetOwningActorFromActorInfo_ReturnValue;
	Parms.K2Node_DynamicCast_AsValeria_Character = K2Node_DynamicCast_AsValeria_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetValeriaCharacterMovementComponent_ReturnValue = CallFunc_GetValeriaCharacterMovementComponent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_LoopableEvent_Base.GA_LoopableEvent_Base_C.OnLoopEndSuccess
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_LoopableEvent_Base_C::OnLoopEndSuccess()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_LoopableEvent_Base_C", "OnLoopEndSuccess");

	Params::UGA_LoopableEvent_Base_C_OnLoopEndSuccess_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_LoopableEvent_Base.GA_LoopableEvent_Base_C.OnLoopBegin
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        AnimationName                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsAbilityIntroTrigger                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_LoopableEvent_Base_C::OnLoopBegin(class FName AnimationName, bool IsAbilityIntroTrigger)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_LoopableEvent_Base_C", "OnLoopBegin");

	Params::UGA_LoopableEvent_Base_C_OnLoopBegin_Params Parms{};

	Parms.AnimationName = AnimationName;
	Parms.IsAbilityIntroTrigger = IsAbilityIntroTrigger;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_LoopableEvent_Base.GA_LoopableEvent_Base_C.OnAbilityActivated
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      CallFunc_GetOwningActorFromActorInfo_ReturnValue                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AValeriaCharacter*           K2Node_DynamicCast_AsValeria_Character                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Roll                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UValeriaCharacterMoveComponent*CallFunc_GetValeriaCharacterMovementComponent_ReturnValue        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MakeRotator_Yaw_ImplicitCast                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_LoopableEvent_Base_C::OnAbilityActivated(class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue, class AValeriaCharacter* K2Node_DynamicCast_AsValeria_Character, bool K2Node_DynamicCast_bSuccess, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, class UValeriaCharacterMoveComponent* CallFunc_GetValeriaCharacterMovementComponent_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FRotator& CallFunc_MakeRotator_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, float CallFunc_MakeRotator_Yaw_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_LoopableEvent_Base_C", "OnAbilityActivated");

	Params::UGA_LoopableEvent_Base_C_OnAbilityActivated_Params Parms{};

	Parms.CallFunc_GetOwningActorFromActorInfo_ReturnValue = CallFunc_GetOwningActorFromActorInfo_ReturnValue;
	Parms.K2Node_DynamicCast_AsValeria_Character = K2Node_DynamicCast_AsValeria_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue = CallFunc_K2_GetActorRotation_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;
	Parms.CallFunc_GetValeriaCharacterMovementComponent_ReturnValue = CallFunc_GetValeriaCharacterMovementComponent_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_MakeRotator_Yaw_ImplicitCast = CallFunc_MakeRotator_Yaw_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_LoopableEvent_Base.GA_LoopableEvent_Base_C.EventReceived_61604B204A52FE55D07E178D4DC2F376
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                EventTag                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          EventData                                                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_LoopableEvent_Base_C::EventReceived_61604B204A52FE55D07E178D4DC2F376(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_LoopableEvent_Base_C", "EventReceived_61604B204A52FE55D07E178D4DC2F376");

	Params::UGA_LoopableEvent_Base_C_EventReceived_61604B204A52FE55D07E178D4DC2F376_Params Parms{};

	Parms.EventTag = EventTag;
	Parms.EventData = EventData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_LoopableEvent_Base.GA_LoopableEvent_Base_C.OnCancelled_61604B204A52FE55D07E178D4DC2F376
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                EventTag                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          EventData                                                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_LoopableEvent_Base_C::OnCancelled_61604B204A52FE55D07E178D4DC2F376(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_LoopableEvent_Base_C", "OnCancelled_61604B204A52FE55D07E178D4DC2F376");

	Params::UGA_LoopableEvent_Base_C_OnCancelled_61604B204A52FE55D07E178D4DC2F376_Params Parms{};

	Parms.EventTag = EventTag;
	Parms.EventData = EventData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_LoopableEvent_Base.GA_LoopableEvent_Base_C.OnInterrupted_61604B204A52FE55D07E178D4DC2F376
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                EventTag                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          EventData                                                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_LoopableEvent_Base_C::OnInterrupted_61604B204A52FE55D07E178D4DC2F376(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_LoopableEvent_Base_C", "OnInterrupted_61604B204A52FE55D07E178D4DC2F376");

	Params::UGA_LoopableEvent_Base_C_OnInterrupted_61604B204A52FE55D07E178D4DC2F376_Params Parms{};

	Parms.EventTag = EventTag;
	Parms.EventData = EventData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_LoopableEvent_Base.GA_LoopableEvent_Base_C.OnBlendOut_61604B204A52FE55D07E178D4DC2F376
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                EventTag                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          EventData                                                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_LoopableEvent_Base_C::OnBlendOut_61604B204A52FE55D07E178D4DC2F376(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_LoopableEvent_Base_C", "OnBlendOut_61604B204A52FE55D07E178D4DC2F376");

	Params::UGA_LoopableEvent_Base_C_OnBlendOut_61604B204A52FE55D07E178D4DC2F376_Params Parms{};

	Parms.EventTag = EventTag;
	Parms.EventData = EventData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_LoopableEvent_Base.GA_LoopableEvent_Base_C.OnCompleted_61604B204A52FE55D07E178D4DC2F376
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                EventTag                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          EventData                                                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_LoopableEvent_Base_C::OnCompleted_61604B204A52FE55D07E178D4DC2F376(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_LoopableEvent_Base_C", "OnCompleted_61604B204A52FE55D07E178D4DC2F376");

	Params::UGA_LoopableEvent_Base_C_OnCompleted_61604B204A52FE55D07E178D4DC2F376_Params Parms{};

	Parms.EventTag = EventTag;
	Parms.EventData = EventData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_LoopableEvent_Base.GA_LoopableEvent_Base_C.EventReceived_77447BC74D3381190AD07DB52A7C9C1E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                EventTag                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          EventData                                                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_LoopableEvent_Base_C::EventReceived_77447BC74D3381190AD07DB52A7C9C1E(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_LoopableEvent_Base_C", "EventReceived_77447BC74D3381190AD07DB52A7C9C1E");

	Params::UGA_LoopableEvent_Base_C_EventReceived_77447BC74D3381190AD07DB52A7C9C1E_Params Parms{};

	Parms.EventTag = EventTag;
	Parms.EventData = EventData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_LoopableEvent_Base.GA_LoopableEvent_Base_C.OnCancelled_77447BC74D3381190AD07DB52A7C9C1E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                EventTag                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          EventData                                                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_LoopableEvent_Base_C::OnCancelled_77447BC74D3381190AD07DB52A7C9C1E(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_LoopableEvent_Base_C", "OnCancelled_77447BC74D3381190AD07DB52A7C9C1E");

	Params::UGA_LoopableEvent_Base_C_OnCancelled_77447BC74D3381190AD07DB52A7C9C1E_Params Parms{};

	Parms.EventTag = EventTag;
	Parms.EventData = EventData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_LoopableEvent_Base.GA_LoopableEvent_Base_C.OnInterrupted_77447BC74D3381190AD07DB52A7C9C1E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                EventTag                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          EventData                                                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_LoopableEvent_Base_C::OnInterrupted_77447BC74D3381190AD07DB52A7C9C1E(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_LoopableEvent_Base_C", "OnInterrupted_77447BC74D3381190AD07DB52A7C9C1E");

	Params::UGA_LoopableEvent_Base_C_OnInterrupted_77447BC74D3381190AD07DB52A7C9C1E_Params Parms{};

	Parms.EventTag = EventTag;
	Parms.EventData = EventData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_LoopableEvent_Base.GA_LoopableEvent_Base_C.OnBlendOut_77447BC74D3381190AD07DB52A7C9C1E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                EventTag                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          EventData                                                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_LoopableEvent_Base_C::OnBlendOut_77447BC74D3381190AD07DB52A7C9C1E(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_LoopableEvent_Base_C", "OnBlendOut_77447BC74D3381190AD07DB52A7C9C1E");

	Params::UGA_LoopableEvent_Base_C_OnBlendOut_77447BC74D3381190AD07DB52A7C9C1E_Params Parms{};

	Parms.EventTag = EventTag;
	Parms.EventData = EventData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_LoopableEvent_Base.GA_LoopableEvent_Base_C.OnCompleted_77447BC74D3381190AD07DB52A7C9C1E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                EventTag                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          EventData                                                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_LoopableEvent_Base_C::OnCompleted_77447BC74D3381190AD07DB52A7C9C1E(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_LoopableEvent_Base_C", "OnCompleted_77447BC74D3381190AD07DB52A7C9C1E");

	Params::UGA_LoopableEvent_Base_C_OnCompleted_77447BC74D3381190AD07DB52A7C9C1E_Params Parms{};

	Parms.EventTag = EventTag;
	Parms.EventData = EventData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_LoopableEvent_Base.GA_LoopableEvent_Base_C.EventReceived_87B0B7C040C0EF4C9F67D9AD4E32ED36
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                EventTag                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          EventData                                                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_LoopableEvent_Base_C::EventReceived_87B0B7C040C0EF4C9F67D9AD4E32ED36(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_LoopableEvent_Base_C", "EventReceived_87B0B7C040C0EF4C9F67D9AD4E32ED36");

	Params::UGA_LoopableEvent_Base_C_EventReceived_87B0B7C040C0EF4C9F67D9AD4E32ED36_Params Parms{};

	Parms.EventTag = EventTag;
	Parms.EventData = EventData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_LoopableEvent_Base.GA_LoopableEvent_Base_C.OnCancelled_87B0B7C040C0EF4C9F67D9AD4E32ED36
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                EventTag                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          EventData                                                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_LoopableEvent_Base_C::OnCancelled_87B0B7C040C0EF4C9F67D9AD4E32ED36(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_LoopableEvent_Base_C", "OnCancelled_87B0B7C040C0EF4C9F67D9AD4E32ED36");

	Params::UGA_LoopableEvent_Base_C_OnCancelled_87B0B7C040C0EF4C9F67D9AD4E32ED36_Params Parms{};

	Parms.EventTag = EventTag;
	Parms.EventData = EventData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_LoopableEvent_Base.GA_LoopableEvent_Base_C.OnInterrupted_87B0B7C040C0EF4C9F67D9AD4E32ED36
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                EventTag                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          EventData                                                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_LoopableEvent_Base_C::OnInterrupted_87B0B7C040C0EF4C9F67D9AD4E32ED36(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_LoopableEvent_Base_C", "OnInterrupted_87B0B7C040C0EF4C9F67D9AD4E32ED36");

	Params::UGA_LoopableEvent_Base_C_OnInterrupted_87B0B7C040C0EF4C9F67D9AD4E32ED36_Params Parms{};

	Parms.EventTag = EventTag;
	Parms.EventData = EventData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_LoopableEvent_Base.GA_LoopableEvent_Base_C.OnBlendOut_87B0B7C040C0EF4C9F67D9AD4E32ED36
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                EventTag                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          EventData                                                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_LoopableEvent_Base_C::OnBlendOut_87B0B7C040C0EF4C9F67D9AD4E32ED36(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_LoopableEvent_Base_C", "OnBlendOut_87B0B7C040C0EF4C9F67D9AD4E32ED36");

	Params::UGA_LoopableEvent_Base_C_OnBlendOut_87B0B7C040C0EF4C9F67D9AD4E32ED36_Params Parms{};

	Parms.EventTag = EventTag;
	Parms.EventData = EventData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_LoopableEvent_Base.GA_LoopableEvent_Base_C.OnCompleted_87B0B7C040C0EF4C9F67D9AD4E32ED36
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                EventTag                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          EventData                                                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_LoopableEvent_Base_C::OnCompleted_87B0B7C040C0EF4C9F67D9AD4E32ED36(const struct FGameplayTag& EventTag, const struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_LoopableEvent_Base_C", "OnCompleted_87B0B7C040C0EF4C9F67D9AD4E32ED36");

	Params::UGA_LoopableEvent_Base_C_OnCompleted_87B0B7C040C0EF4C9F67D9AD4E32ED36_Params Parms{};

	Parms.EventTag = EventTag;
	Parms.EventData = EventData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_LoopableEvent_Base.GA_LoopableEvent_Base_C.DoOutro
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_LoopableEvent_Base_C::DoOutro()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_LoopableEvent_Base_C", "DoOutro");

	Params::UGA_LoopableEvent_Base_C_DoOutro_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_LoopableEvent_Base.GA_LoopableEvent_Base_C.DoLoop
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_LoopableEvent_Base_C::DoLoop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_LoopableEvent_Base_C", "DoLoop");

	Params::UGA_LoopableEvent_Base_C_DoLoop_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_LoopableEvent_Base.GA_LoopableEvent_Base_C.Do Intro
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_LoopableEvent_Base_C::Do_Intro()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_LoopableEvent_Base_C", "Do Intro");

	Params::UGA_LoopableEvent_Base_C_Do_Intro_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_LoopableEvent_Base.GA_LoopableEvent_Base_C.Event_OnActivateAbility
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_LoopableEvent_Base_C::Event_OnActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_LoopableEvent_Base_C", "Event_OnActivateAbility");

	Params::UGA_LoopableEvent_Base_C_Event_OnActivateAbility_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_LoopableEvent_Base.GA_LoopableEvent_Base_C.DoLoopWithMontage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        AnimationName                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        MontageSection                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_LoopableEvent_Base_C::DoLoopWithMontage(class FName AnimationName, class FName MontageSection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_LoopableEvent_Base_C", "DoLoopWithMontage");

	Params::UGA_LoopableEvent_Base_C_DoLoopWithMontage_Params Parms{};

	Parms.AnimationName = AnimationName;
	Parms.MontageSection = MontageSection;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_LoopableEvent_Base.GA_LoopableEvent_Base_C.OnCharacterMoved
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     OldLocation                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     OldVelocity                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_LoopableEvent_Base_C::OnCharacterMoved(float DeltaSeconds, const struct FVector& OldLocation, const struct FVector& OldVelocity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_LoopableEvent_Base_C", "OnCharacterMoved");

	Params::UGA_LoopableEvent_Base_C_OnCharacterMoved_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;
	Parms.OldLocation = OldLocation;
	Parms.OldVelocity = OldVelocity;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_LoopableEvent_Base.GA_LoopableEvent_Base_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bWasCancelled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_LoopableEvent_Base_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_LoopableEvent_Base_C", "K2_OnEndAbility");

	Params::UGA_LoopableEvent_Base_C_K2_OnEndAbility_Params Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_LoopableEvent_Base.GA_LoopableEvent_Base_C.ExecuteUbergraph_GA_LoopableEvent_Base
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                K2Node_CustomEvent_EventTag_10                                   (NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          K2Node_CustomEvent_EventData_10                                  ()
// struct FGameplayEventData          Temp_struct_Variable                                             ()
// struct FGameplayTag                Temp_struct_Variable_1                                           (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                K2Node_CustomEvent_EventTag_9                                    (NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          K2Node_CustomEvent_EventData_9                                   ()
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                K2Node_CustomEvent_EventTag_8                                    (NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          K2Node_CustomEvent_EventData_8                                   ()
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                K2Node_CustomEvent_EventTag_7                                    (NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          K2Node_CustomEvent_EventData_7                                   ()
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                K2Node_CustomEvent_EventTag_6                                    (NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          K2Node_CustomEvent_EventData_6                                   ()
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                K2Node_CustomEvent_EventTag_5                                    (NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          K2Node_CustomEvent_EventData_5                                   ()
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          Temp_struct_Variable_2                                           ()
// struct FGameplayTag                Temp_struct_Variable_3                                           (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                K2Node_CustomEvent_EventTag_4                                    (NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          K2Node_CustomEvent_EventData_4                                   ()
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                K2Node_CustomEvent_EventTag_3                                    (NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          K2Node_CustomEvent_EventData_3                                   ()
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                K2Node_CustomEvent_EventTag_2                                    (NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          K2Node_CustomEvent_EventData_2                                   ()
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                K2Node_CustomEvent_EventTag_1                                    (NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          K2Node_CustomEvent_EventData_1                                   ()
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                K2Node_CustomEvent_EventTag                                      (NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          K2Node_CustomEvent_EventData                                     ()
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_9                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          Temp_struct_Variable_4                                           ()
// struct FGameplayTag                Temp_struct_Variable_5                                           (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_FNameIsNone_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_10                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_11                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ShouldLoop_ShouldLoop                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ShouldLoop_ShouldLoop_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                K2Node_CustomEvent_EventTag_11                                   (NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          K2Node_CustomEvent_EventData_11                                  ()
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_12                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                K2Node_CustomEvent_EventTag_12                                   (NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          K2Node_CustomEvent_EventData_12                                  ()
// struct FGameplayTag                K2Node_CustomEvent_EventTag_13                                   (NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          K2Node_CustomEvent_EventData_13                                  ()
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_13                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_14                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ShouldLoop_ShouldLoop_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                K2Node_CustomEvent_EventTag_14                                   (NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          K2Node_CustomEvent_EventData_14                                  ()
// bool                               CallFunc_K2_CommitAbility_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVAL_TaskProxy_PlayMontageAndWaitForEvent*CallFunc_PlayMontageByMappingAndWaitForEvent_ReturnValue         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVAL_TaskProxy_PlayMontageAndWaitForEvent*CallFunc_PlayMontageByMappingAndWaitForEvent_ReturnValue_1       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_FNameIsNone_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVAL_TaskProxy_PlayMontageAndWaitForEvent*CallFunc_PlayMontageByMappingAndWaitForEvent_ReturnValue_2       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_FNameIsNone_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_FNameIsNone_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_AnimationName                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_MontageSection                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_FNameIsNone_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_DeltaSeconds                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_OldLocation                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_OldVelocity                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_15                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_VSizeSquared_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwningActorFromActorInfo_ReturnValue                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AValeriaCharacter*           K2Node_DynamicCast_AsValeria_Character                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bWasCancelled                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwningActorFromActorInfo_ReturnValue_1               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AValeriaCharacter*           K2Node_DynamicCast_AsValeria_Character_1                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_LoopableEvent_Base_C::ExecuteUbergraph_GA_LoopableEvent_Base(int32 EntryPoint, const struct FGameplayTag& K2Node_CustomEvent_EventTag_10, const struct FGameplayEventData& K2Node_CustomEvent_EventData_10, const struct FGameplayEventData& Temp_struct_Variable, const struct FGameplayTag& Temp_struct_Variable_1, const struct FGameplayTag& K2Node_CustomEvent_EventTag_9, const struct FGameplayEventData& K2Node_CustomEvent_EventData_9, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FGameplayTag& K2Node_CustomEvent_EventTag_8, const struct FGameplayEventData& K2Node_CustomEvent_EventData_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FGameplayTag& K2Node_CustomEvent_EventTag_7, const struct FGameplayEventData& K2Node_CustomEvent_EventData_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const struct FGameplayTag& K2Node_CustomEvent_EventTag_6, const struct FGameplayEventData& K2Node_CustomEvent_EventData_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, const struct FGameplayTag& K2Node_CustomEvent_EventTag_5, const struct FGameplayEventData& K2Node_CustomEvent_EventData_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, const struct FGameplayEventData& Temp_struct_Variable_2, const struct FGameplayTag& Temp_struct_Variable_3, const struct FGameplayTag& K2Node_CustomEvent_EventTag_4, const struct FGameplayEventData& K2Node_CustomEvent_EventData_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, const struct FGameplayTag& K2Node_CustomEvent_EventTag_3, const struct FGameplayEventData& K2Node_CustomEvent_EventData_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, const struct FGameplayTag& K2Node_CustomEvent_EventTag_2, const struct FGameplayEventData& K2Node_CustomEvent_EventData_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, const struct FGameplayTag& K2Node_CustomEvent_EventTag_1, const struct FGameplayEventData& K2Node_CustomEvent_EventData_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, const struct FGameplayTag& K2Node_CustomEvent_EventTag, const struct FGameplayEventData& K2Node_CustomEvent_EventData, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, const struct FGameplayEventData& Temp_struct_Variable_4, const struct FGameplayTag& Temp_struct_Variable_5, bool CallFunc_FNameIsNone_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, bool CallFunc_Not_PreBool_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, bool CallFunc_ShouldLoop_ShouldLoop, bool CallFunc_ShouldLoop_ShouldLoop_1, const struct FGameplayTag& K2Node_CustomEvent_EventTag_11, const struct FGameplayEventData& K2Node_CustomEvent_EventData_11, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_12, const struct FGameplayTag& K2Node_CustomEvent_EventTag_12, const struct FGameplayEventData& K2Node_CustomEvent_EventData_12, const struct FGameplayTag& K2Node_CustomEvent_EventTag_13, const struct FGameplayEventData& K2Node_CustomEvent_EventData_13, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_13, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_14, bool CallFunc_ShouldLoop_ShouldLoop_2, const struct FGameplayTag& K2Node_CustomEvent_EventTag_14, const struct FGameplayEventData& K2Node_CustomEvent_EventData_14, bool CallFunc_K2_CommitAbility_ReturnValue, class UVAL_TaskProxy_PlayMontageAndWaitForEvent* CallFunc_PlayMontageByMappingAndWaitForEvent_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UVAL_TaskProxy_PlayMontageAndWaitForEvent* CallFunc_PlayMontageByMappingAndWaitForEvent_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_FNameIsNone_ReturnValue_1, class UVAL_TaskProxy_PlayMontageAndWaitForEvent* CallFunc_PlayMontageByMappingAndWaitForEvent_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_FNameIsNone_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_FNameIsNone_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_3, class FName K2Node_CustomEvent_AnimationName, class FName K2Node_CustomEvent_MontageSection, bool CallFunc_FNameIsNone_ReturnValue_4, bool CallFunc_Not_PreBool_ReturnValue_4, bool CallFunc_BooleanOR_ReturnValue_1, float K2Node_CustomEvent_DeltaSeconds, const struct FVector& K2Node_CustomEvent_OldLocation, const struct FVector& K2Node_CustomEvent_OldVelocity, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_15, double CallFunc_VSizeSquared_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue, class AValeriaCharacter* K2Node_DynamicCast_AsValeria_Character, bool K2Node_DynamicCast_bSuccess, bool K2Node_Event_bWasCancelled, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue_1, class AValeriaCharacter* K2Node_DynamicCast_AsValeria_Character_1, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_LoopableEvent_Base_C", "ExecuteUbergraph_GA_LoopableEvent_Base");

	Params::UGA_LoopableEvent_Base_C_ExecuteUbergraph_GA_LoopableEvent_Base_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_EventTag_10 = K2Node_CustomEvent_EventTag_10;
	Parms.K2Node_CustomEvent_EventData_10 = K2Node_CustomEvent_EventData_10;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.K2Node_CustomEvent_EventTag_9 = K2Node_CustomEvent_EventTag_9;
	Parms.K2Node_CustomEvent_EventData_9 = K2Node_CustomEvent_EventData_9;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_EventTag_8 = K2Node_CustomEvent_EventTag_8;
	Parms.K2Node_CustomEvent_EventData_8 = K2Node_CustomEvent_EventData_8;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CustomEvent_EventTag_7 = K2Node_CustomEvent_EventTag_7;
	Parms.K2Node_CustomEvent_EventData_7 = K2Node_CustomEvent_EventData_7;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CustomEvent_EventTag_6 = K2Node_CustomEvent_EventTag_6;
	Parms.K2Node_CustomEvent_EventData_6 = K2Node_CustomEvent_EventData_6;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CustomEvent_EventTag_5 = K2Node_CustomEvent_EventTag_5;
	Parms.K2Node_CustomEvent_EventData_5 = K2Node_CustomEvent_EventData_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.Temp_struct_Variable_2 = Temp_struct_Variable_2;
	Parms.Temp_struct_Variable_3 = Temp_struct_Variable_3;
	Parms.K2Node_CustomEvent_EventTag_4 = K2Node_CustomEvent_EventTag_4;
	Parms.K2Node_CustomEvent_EventData_4 = K2Node_CustomEvent_EventData_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.K2Node_CustomEvent_EventTag_3 = K2Node_CustomEvent_EventTag_3;
	Parms.K2Node_CustomEvent_EventData_3 = K2Node_CustomEvent_EventData_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.K2Node_CustomEvent_EventTag_2 = K2Node_CustomEvent_EventTag_2;
	Parms.K2Node_CustomEvent_EventData_2 = K2Node_CustomEvent_EventData_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.K2Node_CustomEvent_EventTag_1 = K2Node_CustomEvent_EventTag_1;
	Parms.K2Node_CustomEvent_EventData_1 = K2Node_CustomEvent_EventData_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.K2Node_CustomEvent_EventTag = K2Node_CustomEvent_EventTag;
	Parms.K2Node_CustomEvent_EventData = K2Node_CustomEvent_EventData;
	Parms.K2Node_CreateDelegate_OutputDelegate_9 = K2Node_CreateDelegate_OutputDelegate_9;
	Parms.Temp_struct_Variable_4 = Temp_struct_Variable_4;
	Parms.Temp_struct_Variable_5 = Temp_struct_Variable_5;
	Parms.CallFunc_FNameIsNone_ReturnValue = CallFunc_FNameIsNone_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_10 = K2Node_CreateDelegate_OutputDelegate_10;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_11 = K2Node_CreateDelegate_OutputDelegate_11;
	Parms.CallFunc_ShouldLoop_ShouldLoop = CallFunc_ShouldLoop_ShouldLoop;
	Parms.CallFunc_ShouldLoop_ShouldLoop_1 = CallFunc_ShouldLoop_ShouldLoop_1;
	Parms.K2Node_CustomEvent_EventTag_11 = K2Node_CustomEvent_EventTag_11;
	Parms.K2Node_CustomEvent_EventData_11 = K2Node_CustomEvent_EventData_11;
	Parms.K2Node_CreateDelegate_OutputDelegate_12 = K2Node_CreateDelegate_OutputDelegate_12;
	Parms.K2Node_CustomEvent_EventTag_12 = K2Node_CustomEvent_EventTag_12;
	Parms.K2Node_CustomEvent_EventData_12 = K2Node_CustomEvent_EventData_12;
	Parms.K2Node_CustomEvent_EventTag_13 = K2Node_CustomEvent_EventTag_13;
	Parms.K2Node_CustomEvent_EventData_13 = K2Node_CustomEvent_EventData_13;
	Parms.K2Node_CreateDelegate_OutputDelegate_13 = K2Node_CreateDelegate_OutputDelegate_13;
	Parms.K2Node_CreateDelegate_OutputDelegate_14 = K2Node_CreateDelegate_OutputDelegate_14;
	Parms.CallFunc_ShouldLoop_ShouldLoop_2 = CallFunc_ShouldLoop_ShouldLoop_2;
	Parms.K2Node_CustomEvent_EventTag_14 = K2Node_CustomEvent_EventTag_14;
	Parms.K2Node_CustomEvent_EventData_14 = K2Node_CustomEvent_EventData_14;
	Parms.CallFunc_K2_CommitAbility_ReturnValue = CallFunc_K2_CommitAbility_ReturnValue;
	Parms.CallFunc_PlayMontageByMappingAndWaitForEvent_ReturnValue = CallFunc_PlayMontageByMappingAndWaitForEvent_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_PlayMontageByMappingAndWaitForEvent_ReturnValue_1 = CallFunc_PlayMontageByMappingAndWaitForEvent_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_FNameIsNone_ReturnValue_1 = CallFunc_FNameIsNone_ReturnValue_1;
	Parms.CallFunc_PlayMontageByMappingAndWaitForEvent_ReturnValue_2 = CallFunc_PlayMontageByMappingAndWaitForEvent_ReturnValue_2;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_FNameIsNone_ReturnValue_2 = CallFunc_FNameIsNone_ReturnValue_2;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.CallFunc_FNameIsNone_ReturnValue_3 = CallFunc_FNameIsNone_ReturnValue_3;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_3 = CallFunc_Not_PreBool_ReturnValue_3;
	Parms.K2Node_CustomEvent_AnimationName = K2Node_CustomEvent_AnimationName;
	Parms.K2Node_CustomEvent_MontageSection = K2Node_CustomEvent_MontageSection;
	Parms.CallFunc_FNameIsNone_ReturnValue_4 = CallFunc_FNameIsNone_ReturnValue_4;
	Parms.CallFunc_Not_PreBool_ReturnValue_4 = CallFunc_Not_PreBool_ReturnValue_4;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.K2Node_CustomEvent_DeltaSeconds = K2Node_CustomEvent_DeltaSeconds;
	Parms.K2Node_CustomEvent_OldLocation = K2Node_CustomEvent_OldLocation;
	Parms.K2Node_CustomEvent_OldVelocity = K2Node_CustomEvent_OldVelocity;
	Parms.K2Node_CreateDelegate_OutputDelegate_15 = K2Node_CreateDelegate_OutputDelegate_15;
	Parms.CallFunc_VSizeSquared_ReturnValue = CallFunc_VSizeSquared_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_GetOwningActorFromActorInfo_ReturnValue = CallFunc_GetOwningActorFromActorInfo_ReturnValue;
	Parms.K2Node_DynamicCast_AsValeria_Character = K2Node_DynamicCast_AsValeria_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Event_bWasCancelled = K2Node_Event_bWasCancelled;
	Parms.CallFunc_GetOwningActorFromActorInfo_ReturnValue_1 = CallFunc_GetOwningActorFromActorInfo_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsValeria_Character_1 = K2Node_DynamicCast_AsValeria_Character_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
