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


// Function GA_Cooking_OneOff_Base.GA_Cooking_OneOff_Base_C.GetLockParams
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVAL_InteractorLockParams   VAL_InteractorLockParams                                         (Parm, OutParm, NoDestructor, ContainsInstancedReference)
// class UObject*                     CallFunc_SelectObject_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVAL_InteractorLockParams   K2Node_MakeStruct_VAL_InteractorLockParams                       (NoDestructor, ContainsInstancedReference)

void UGA_Cooking_OneOff_Base_C::GetLockParams(struct FVAL_InteractorLockParams* InVAL_InteractorLockParams, class UObject* InCallFunc_SelectObject_ReturnValue, const struct FVAL_InteractorLockParams& InK2Node_MakeStruct_VAL_InteractorLockParams)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Cooking_OneOff_Base_C", "GetLockParams");

	Params::UGA_Cooking_OneOff_Base_C_GetLockParams_Params Parms{};

	Parms.CallFunc_SelectObject_ReturnValue = InCallFunc_SelectObject_ReturnValue;
	Parms.K2Node_MakeStruct_VAL_InteractorLockParams = InK2Node_MakeStruct_VAL_InteractorLockParams;

	UObject::ProcessEvent(Func, &Parms);

	if (InVAL_InteractorLockParams != nullptr)
		*InVAL_InteractorLockParams = Parms.VAL_InteractorLockParams;

}


// Function GA_Cooking_OneOff_Base.GA_Cooking_OneOff_Base_C.CanUnlockCharacterDuringAnimation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               CanUnlock                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Cooking_OneOff_Base_C::CanUnlockCharacterDuringAnimation(bool* InCanUnlock)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Cooking_OneOff_Base_C", "CanUnlockCharacterDuringAnimation");

	Params::UGA_Cooking_OneOff_Base_C_CanUnlockCharacterDuringAnimation_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (InCanUnlock != nullptr)
		*InCanUnlock = Parms.CanUnlock;

}


// Function GA_Cooking_OneOff_Base.GA_Cooking_OneOff_Base_C.SetMovementBlock
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bLock                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Changed                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVAL_InteractorLockParams   CallFunc_GetLockParams_VAL_InteractorLockParams                  (NoDestructor, ContainsInstancedReference)
// struct FVAL_InteractorLockParams   CallFunc_GetLockParams_VAL_InteractorLockParams_1                (NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAbilityLockedIn_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_BoolBool_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetMovementBlock_Changed                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetMovementBlock_Changed_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsShuttingDown_NewParam                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValeriaCharacter*           CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UInteractorComponent*        CallFunc_GetInteractorComponent_ReturnValue                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LockPlayerToInteractable_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanUnlockCharacterDuringAnimation_CanUnlock             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValeriaCharacter*           CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue_1          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UInteractorComponent*        CallFunc_GetInteractorComponent_ReturnValue_1                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FVAL_InteractorLockParams   CallFunc_GetLockParams_VAL_InteractorLockParams_2                (NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_IsPlayerLockedToInteractable_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_UnLockPlayerFromInteractable_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanPlayerChangeLockWith_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Cooking_OneOff_Base_C::SetMovementBlock(bool InbLock, bool* InChanged, const struct FVAL_InteractorLockParams& InCallFunc_GetLockParams_VAL_InteractorLockParams, const struct FVAL_InteractorLockParams& InCallFunc_GetLockParams_VAL_InteractorLockParams_1, bool InCallFunc_IsServer_ReturnValue, bool InCallFunc_IsServer_ReturnValue_1, bool InCallFunc_IsAbilityLockedIn_ReturnValue, bool InCallFunc_NotEqual_BoolBool_ReturnValue, bool InCallFunc_SetMovementBlock_Changed, bool InCallFunc_SetMovementBlock_Changed_1, bool InCallFunc_IsShuttingDown_NewParam, class AValeriaCharacter* InCallFunc_GetValeriaCharacterFromActorInfo_ReturnValue, class UInteractorComponent* InCallFunc_GetInteractorComponent_ReturnValue, bool InCallFunc_LockPlayerToInteractable_ReturnValue, bool InCallFunc_CanUnlockCharacterDuringAnimation_CanUnlock, bool InCallFunc_BooleanOR_ReturnValue, class AValeriaCharacter* InCallFunc_GetValeriaCharacterFromActorInfo_ReturnValue_1, class UInteractorComponent* InCallFunc_GetInteractorComponent_ReturnValue_1, const struct FVAL_InteractorLockParams& InCallFunc_GetLockParams_VAL_InteractorLockParams_2, bool InCallFunc_IsPlayerLockedToInteractable_ReturnValue, bool InCallFunc_UnLockPlayerFromInteractable_ReturnValue, bool InCallFunc_CanPlayerChangeLockWith_ReturnValue, bool InCallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Cooking_OneOff_Base_C", "SetMovementBlock");

	Params::UGA_Cooking_OneOff_Base_C_SetMovementBlock_Params Parms{};

	Parms.bLock = InbLock;
	Parms.CallFunc_GetLockParams_VAL_InteractorLockParams = InCallFunc_GetLockParams_VAL_InteractorLockParams;
	Parms.CallFunc_GetLockParams_VAL_InteractorLockParams_1 = InCallFunc_GetLockParams_VAL_InteractorLockParams_1;
	Parms.CallFunc_IsServer_ReturnValue = InCallFunc_IsServer_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue_1 = InCallFunc_IsServer_ReturnValue_1;
	Parms.CallFunc_IsAbilityLockedIn_ReturnValue = InCallFunc_IsAbilityLockedIn_ReturnValue;
	Parms.CallFunc_NotEqual_BoolBool_ReturnValue = InCallFunc_NotEqual_BoolBool_ReturnValue;
	Parms.CallFunc_SetMovementBlock_Changed = InCallFunc_SetMovementBlock_Changed;
	Parms.CallFunc_SetMovementBlock_Changed_1 = InCallFunc_SetMovementBlock_Changed_1;
	Parms.CallFunc_IsShuttingDown_NewParam = InCallFunc_IsShuttingDown_NewParam;
	Parms.CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue = InCallFunc_GetValeriaCharacterFromActorInfo_ReturnValue;
	Parms.CallFunc_GetInteractorComponent_ReturnValue = InCallFunc_GetInteractorComponent_ReturnValue;
	Parms.CallFunc_LockPlayerToInteractable_ReturnValue = InCallFunc_LockPlayerToInteractable_ReturnValue;
	Parms.CallFunc_CanUnlockCharacterDuringAnimation_CanUnlock = InCallFunc_CanUnlockCharacterDuringAnimation_CanUnlock;
	Parms.CallFunc_BooleanOR_ReturnValue = InCallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue_1 = InCallFunc_GetValeriaCharacterFromActorInfo_ReturnValue_1;
	Parms.CallFunc_GetInteractorComponent_ReturnValue_1 = InCallFunc_GetInteractorComponent_ReturnValue_1;
	Parms.CallFunc_GetLockParams_VAL_InteractorLockParams_2 = InCallFunc_GetLockParams_VAL_InteractorLockParams_2;
	Parms.CallFunc_IsPlayerLockedToInteractable_ReturnValue = InCallFunc_IsPlayerLockedToInteractable_ReturnValue;
	Parms.CallFunc_UnLockPlayerFromInteractable_ReturnValue = InCallFunc_UnLockPlayerFromInteractable_ReturnValue;
	Parms.CallFunc_CanPlayerChangeLockWith_ReturnValue = InCallFunc_CanPlayerChangeLockWith_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = InCallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (InChanged != nullptr)
		*InChanged = Parms.Changed;

}


// Function GA_Cooking_OneOff_Base.GA_Cooking_OneOff_Base_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayEventData          EventData                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_Cooking_OneOff_Base_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData& InEventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Cooking_OneOff_Base_C", "K2_ActivateAbilityFromEvent");

	Params::UGA_Cooking_OneOff_Base_C_K2_ActivateAbilityFromEvent_Params Parms{};

	Parms.EventData = InEventData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Cooking_OneOff_Base.GA_Cooking_OneOff_Base_C.ExecuteUbergraph_GA_Cooking_OneOff_Base
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          K2Node_Event_EventData                                           (ConstParm)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInteractableComponent*      CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCrafterComponent*           CallFunc_GetComponentByClass_ReturnValue_1                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVAL_InteractorLockParams   CallFunc_GetLockParams_VAL_InteractorLockParams                  (NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValeriaCharacter*           CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UInteractorComponent*        CallFunc_GetInteractorComponent_ReturnValue                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Client_TryInteractableLockSetup_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanPlayerChangeLockWith_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Cooking_OneOff_Base_C::ExecuteUbergraph_GA_Cooking_OneOff_Base(int32 InEntryPoint, const struct FGameplayEventData& InK2Node_Event_EventData, bool InCallFunc_IsValid_ReturnValue, class UInteractableComponent* InCallFunc_GetComponentByClass_ReturnValue, bool InCallFunc_IsValid_ReturnValue_1, bool InCallFunc_IsValid_ReturnValue_2, class UCrafterComponent* InCallFunc_GetComponentByClass_ReturnValue_1, bool InCallFunc_IsServer_ReturnValue, const struct FVAL_InteractorLockParams& InCallFunc_GetLockParams_VAL_InteractorLockParams, bool InCallFunc_Not_PreBool_ReturnValue, class AValeriaCharacter* InCallFunc_GetValeriaCharacterFromActorInfo_ReturnValue, class UInteractorComponent* InCallFunc_GetInteractorComponent_ReturnValue, bool InCallFunc_Client_TryInteractableLockSetup_ReturnValue, bool InCallFunc_CanPlayerChangeLockWith_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Cooking_OneOff_Base_C", "ExecuteUbergraph_GA_Cooking_OneOff_Base");

	Params::UGA_Cooking_OneOff_Base_C_ExecuteUbergraph_GA_Cooking_OneOff_Base_Params Parms{};

	Parms.EntryPoint = InEntryPoint;
	Parms.K2Node_Event_EventData = InK2Node_Event_EventData;
	Parms.CallFunc_IsValid_ReturnValue = InCallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = InCallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = InCallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = InCallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetComponentByClass_ReturnValue_1 = InCallFunc_GetComponentByClass_ReturnValue_1;
	Parms.CallFunc_IsServer_ReturnValue = InCallFunc_IsServer_ReturnValue;
	Parms.CallFunc_GetLockParams_VAL_InteractorLockParams = InCallFunc_GetLockParams_VAL_InteractorLockParams;
	Parms.CallFunc_Not_PreBool_ReturnValue = InCallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue = InCallFunc_GetValeriaCharacterFromActorInfo_ReturnValue;
	Parms.CallFunc_GetInteractorComponent_ReturnValue = InCallFunc_GetInteractorComponent_ReturnValue;
	Parms.CallFunc_Client_TryInteractableLockSetup_ReturnValue = InCallFunc_Client_TryInteractableLockSetup_ReturnValue;
	Parms.CallFunc_CanPlayerChangeLockWith_ReturnValue = InCallFunc_CanPlayerChangeLockWith_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
