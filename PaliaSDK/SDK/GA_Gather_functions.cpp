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


// Function GA_Gather.GA_Gather_C.SetMovementBlock
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bLock                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue               (NoDestructor, HasGetValueTypeHash)

void UGA_Gather_C::SetMovementBlock(bool InbLock, const struct FActiveGameplayEffectHandle& InCallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Gather_C", "SetMovementBlock");

	Params::UGA_Gather_C_SetMovementBlock_Params Parms{};

	Parms.bLock = InbLock;
	Parms.CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue = InCallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Gather.GA_Gather_C.GetTargetActor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                      Actor                                                            (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UGA_Gather_C::GetTargetActor(class AActor** InActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Gather_C", "GetTargetActor");

	Params::UGA_Gather_C_GetTargetActor_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (InActor != nullptr)
		*InActor = Parms.Actor;

}


// Function GA_Gather.GA_Gather_C.OnGatherServer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ULootInteractorBaseComponent*LootInteractorComponent                                          (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UGatherableComponent*        GatherableComponent                                              (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwningActorFromActorInfo_ReturnValue                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValeriaCharacter*           K2Node_DynamicCast_AsValeria_Character                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Server_TriggerGather_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULootInteractorBaseComponent*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UGatherableComponent*        CallFunc_GetComponentByClass_ReturnValue_1                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwningActorFromActorInfo_ReturnValue_1               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AValeriaCharacter*           K2Node_DynamicCast_AsValeria_Character_1                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Gather_C::OnGatherServer(class AActor* InActor, class ULootInteractorBaseComponent* InLootInteractorComponent, class UGatherableComponent* InGatherableComponent, class AActor* InCallFunc_GetOwningActorFromActorInfo_ReturnValue, bool InCallFunc_IsValid_ReturnValue, class AValeriaCharacter* InK2Node_DynamicCast_AsValeria_Character, bool InK2Node_DynamicCast_bSuccess, bool InCallFunc_Server_TriggerGather_ReturnValue, class ULootInteractorBaseComponent* InCallFunc_GetComponentByClass_ReturnValue, class UGatherableComponent* InCallFunc_GetComponentByClass_ReturnValue_1, class AActor* InCallFunc_GetOwningActorFromActorInfo_ReturnValue_1, class AValeriaCharacter* InK2Node_DynamicCast_AsValeria_Character_1, bool InK2Node_DynamicCast_bSuccess_1, bool InCallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Gather_C", "OnGatherServer");

	Params::UGA_Gather_C_OnGatherServer_Params Parms{};

	Parms.Actor = InActor;
	Parms.LootInteractorComponent = InLootInteractorComponent;
	Parms.GatherableComponent = InGatherableComponent;
	Parms.CallFunc_GetOwningActorFromActorInfo_ReturnValue = InCallFunc_GetOwningActorFromActorInfo_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = InCallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsValeria_Character = InK2Node_DynamicCast_AsValeria_Character;
	Parms.K2Node_DynamicCast_bSuccess = InK2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Server_TriggerGather_ReturnValue = InCallFunc_Server_TriggerGather_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = InCallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue_1 = InCallFunc_GetComponentByClass_ReturnValue_1;
	Parms.CallFunc_GetOwningActorFromActorInfo_ReturnValue_1 = InCallFunc_GetOwningActorFromActorInfo_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsValeria_Character_1 = InK2Node_DynamicCast_AsValeria_Character_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = InK2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = InCallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Gather.GA_Gather_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayEventData          EventData                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_Gather_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData& InEventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Gather_C", "K2_ActivateAbilityFromEvent");

	Params::UGA_Gather_C_K2_ActivateAbilityFromEvent_Params Parms{};

	Parms.EventData = InEventData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Gather.GA_Gather_C.ExecuteUbergraph_GA_Gather
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          K2Node_Event_EventData                                           (ConstParm)

void UGA_Gather_C::ExecuteUbergraph_GA_Gather(int32 InEntryPoint, const struct FGameplayEventData& InK2Node_Event_EventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Gather_C", "ExecuteUbergraph_GA_Gather");

	Params::UGA_Gather_C_ExecuteUbergraph_GA_Gather_Params Parms{};

	Parms.EntryPoint = InEntryPoint;
	Parms.K2Node_Event_EventData = InK2Node_Event_EventData;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
