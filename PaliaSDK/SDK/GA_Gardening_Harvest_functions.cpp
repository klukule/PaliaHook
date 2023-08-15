#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function GA_Gardening_Harvest.GA_Gardening_Harvest_C.OnCancelled_EA02B7CC48ECC0CD5B9B3EA660C305FB
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Gardening_Harvest_C::OnCancelled_EA02B7CC48ECC0CD5B9B3EA660C305FB()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Gardening_Harvest_C", "OnCancelled_EA02B7CC48ECC0CD5B9B3EA660C305FB");

	Params::UGA_Gardening_Harvest_C_OnCancelled_EA02B7CC48ECC0CD5B9B3EA660C305FB_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Gardening_Harvest.GA_Gardening_Harvest_C.OnInterrupted_EA02B7CC48ECC0CD5B9B3EA660C305FB
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Gardening_Harvest_C::OnInterrupted_EA02B7CC48ECC0CD5B9B3EA660C305FB()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Gardening_Harvest_C", "OnInterrupted_EA02B7CC48ECC0CD5B9B3EA660C305FB");

	Params::UGA_Gardening_Harvest_C_OnInterrupted_EA02B7CC48ECC0CD5B9B3EA660C305FB_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Gardening_Harvest.GA_Gardening_Harvest_C.OnBlendOut_EA02B7CC48ECC0CD5B9B3EA660C305FB
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Gardening_Harvest_C::OnBlendOut_EA02B7CC48ECC0CD5B9B3EA660C305FB()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Gardening_Harvest_C", "OnBlendOut_EA02B7CC48ECC0CD5B9B3EA660C305FB");

	Params::UGA_Gardening_Harvest_C_OnBlendOut_EA02B7CC48ECC0CD5B9B3EA660C305FB_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Gardening_Harvest.GA_Gardening_Harvest_C.OnCompleted_EA02B7CC48ECC0CD5B9B3EA660C305FB
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Gardening_Harvest_C::OnCompleted_EA02B7CC48ECC0CD5B9B3EA660C305FB()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Gardening_Harvest_C", "OnCompleted_EA02B7CC48ECC0CD5B9B3EA660C305FB");

	Params::UGA_Gardening_Harvest_C_OnCompleted_EA02B7CC48ECC0CD5B9B3EA660C305FB_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Gardening_Harvest.GA_Gardening_Harvest_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayEventData          EventData                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_Gardening_Harvest_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Gardening_Harvest_C", "K2_ActivateAbilityFromEvent");

	Params::UGA_Gardening_Harvest_C_K2_ActivateAbilityFromEvent_Params Parms{};

	Parms.EventData = EventData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Gardening_Harvest.GA_Gardening_Harvest_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bWasCancelled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Gardening_Harvest_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Gardening_Harvest_C", "K2_OnEndAbility");

	Params::UGA_Gardening_Harvest_C_K2_OnEndAbility_Params Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Gardening_Harvest.GA_Gardening_Harvest_C.ExecuteUbergraph_GA_Gardening_Harvest
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_CommitAbility_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValeriaCharacter*           CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAbilityAnimationComponent*  CallFunc_GetAbilityAnimation_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCharacterStateMachineComponent*CallFunc_GetCSM_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_GetMontage_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAbilityTask_PlayMontageAndWait*CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          K2Node_Event_EventData                                           (ConstParm)
// int32                              CallFunc_Round_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGardenComponent*            CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bWasCancelled                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValeriaCharacter*           CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue_1          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AValeriaCharacter*           CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue_2          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_AkEventActor_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Round_A_ImplicitCast                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Gardening_Harvest_C::ExecuteUbergraph_GA_Gardening_Harvest(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName Temp_name_Variable, bool CallFunc_K2_CommitAbility_ReturnValue, class AValeriaCharacter* CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue, class UAbilityAnimationComponent* CallFunc_GetAbilityAnimation_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UCharacterStateMachineComponent* CallFunc_GetCSM_ReturnValue, class UAnimMontage* CallFunc_GetMontage_ReturnValue, class UAbilityTask_PlayMontageAndWait* CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue, const struct FGameplayEventData& K2Node_Event_EventData, int32 CallFunc_Round_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UGardenComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsServer_ReturnValue, bool K2Node_Event_bWasCancelled, class AValeriaCharacter* CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue_1, class AValeriaCharacter* CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue_2, int32 CallFunc_AkEventActor_ReturnValue, double CallFunc_Round_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Gardening_Harvest_C", "ExecuteUbergraph_GA_Gardening_Harvest");

	Params::UGA_Gardening_Harvest_C_ExecuteUbergraph_GA_Gardening_Harvest_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.CallFunc_K2_CommitAbility_ReturnValue = CallFunc_K2_CommitAbility_ReturnValue;
	Parms.CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue = CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue;
	Parms.CallFunc_GetAbilityAnimation_ReturnValue = CallFunc_GetAbilityAnimation_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_GetCSM_ReturnValue = CallFunc_GetCSM_ReturnValue;
	Parms.CallFunc_GetMontage_ReturnValue = CallFunc_GetMontage_ReturnValue;
	Parms.CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue = CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue;
	Parms.K2Node_Event_EventData = K2Node_Event_EventData;
	Parms.CallFunc_Round_ReturnValue = CallFunc_Round_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.K2Node_Event_bWasCancelled = K2Node_Event_bWasCancelled;
	Parms.CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue_1 = CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue_1;
	Parms.CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue_2 = CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue_2;
	Parms.CallFunc_AkEventActor_ReturnValue = CallFunc_AkEventActor_ReturnValue;
	Parms.CallFunc_Round_A_ImplicitCast = CallFunc_Round_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
