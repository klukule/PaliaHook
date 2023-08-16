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


// Function GA_Cooking_OneOff_AddIngredient_Base.GA_Cooking_OneOff_AddIngredient_Base_C.SetMovementBlock
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bLock                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Changed                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetMovementBlock_Changed                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Cooking_OneOff_AddIngredient_Base_C::SetMovementBlock(bool InbLock, bool* InChanged, bool InCallFunc_SetMovementBlock_Changed, bool InCallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Cooking_OneOff_AddIngredient_Base_C", "SetMovementBlock");

	Params::UGA_Cooking_OneOff_AddIngredient_Base_C_SetMovementBlock_Params Parms{};

	Parms.bLock = InbLock;
	Parms.CallFunc_SetMovementBlock_Changed = InCallFunc_SetMovementBlock_Changed;
	Parms.CallFunc_Not_PreBool_ReturnValue = InCallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (InChanged != nullptr)
		*InChanged = Parms.Changed;

}


// Function GA_Cooking_OneOff_AddIngredient_Base.GA_Cooking_OneOff_AddIngredient_Base_C.ConsiderTriggeringMinigame
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValeriaPlayerController*    CallFunc_GetValeriaPlayerControllerFromActorInfo_ReturnValue     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ECrafterEngageResult    CallFunc_SetIsEngaging_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInteractingMode_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ContainsAllIngredients_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Cooking_OneOff_AddIngredient_Base_C::ConsiderTriggeringMinigame(bool InCallFunc_IsServer_ReturnValue, class AValeriaPlayerController* InCallFunc_GetValeriaPlayerControllerFromActorInfo_ReturnValue, enum class ECrafterEngageResult InCallFunc_SetIsEngaging_ReturnValue, bool InCallFunc_Not_PreBool_ReturnValue, bool InCallFunc_IsValid_ReturnValue, bool InCallFunc_IsInteractingMode_ReturnValue, bool InCallFunc_ContainsAllIngredients_ReturnValue, bool InCallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Cooking_OneOff_AddIngredient_Base_C", "ConsiderTriggeringMinigame");

	Params::UGA_Cooking_OneOff_AddIngredient_Base_C_ConsiderTriggeringMinigame_Params Parms{};

	Parms.CallFunc_IsServer_ReturnValue = InCallFunc_IsServer_ReturnValue;
	Parms.CallFunc_GetValeriaPlayerControllerFromActorInfo_ReturnValue = InCallFunc_GetValeriaPlayerControllerFromActorInfo_ReturnValue;
	Parms.CallFunc_SetIsEngaging_ReturnValue = InCallFunc_SetIsEngaging_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = InCallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = InCallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsInteractingMode_ReturnValue = InCallFunc_IsInteractingMode_ReturnValue;
	Parms.CallFunc_ContainsAllIngredients_ReturnValue = InCallFunc_ContainsAllIngredients_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = InCallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Cooking_OneOff_AddIngredient_Base.GA_Cooking_OneOff_AddIngredient_Base_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bWasCancelled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Cooking_OneOff_AddIngredient_Base_C::K2_OnEndAbility(bool InbWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Cooking_OneOff_AddIngredient_Base_C", "K2_OnEndAbility");

	Params::UGA_Cooking_OneOff_AddIngredient_Base_C_K2_OnEndAbility_Params Parms{};

	Parms.bWasCancelled = InbWasCancelled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Cooking_OneOff_AddIngredient_Base.GA_Cooking_OneOff_AddIngredient_Base_C.ExecuteUbergraph_GA_Cooking_OneOff_AddIngredient_Base
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bWasCancelled                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Cooking_OneOff_AddIngredient_Base_C::ExecuteUbergraph_GA_Cooking_OneOff_AddIngredient_Base(int32 InEntryPoint, bool InK2Node_Event_bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Cooking_OneOff_AddIngredient_Base_C", "ExecuteUbergraph_GA_Cooking_OneOff_AddIngredient_Base");

	Params::UGA_Cooking_OneOff_AddIngredient_Base_C_ExecuteUbergraph_GA_Cooking_OneOff_AddIngredient_Base_Params Parms{};

	Parms.EntryPoint = InEntryPoint;
	Parms.K2Node_Event_bWasCancelled = InK2Node_Event_bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
