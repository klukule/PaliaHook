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


// Function GA_Cooking_OneOff_AddIngredient_Base.GA_Cooking_OneOff_AddIngredient_Base_C.SetMovementBlock
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bLock                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Changed                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetMovementBlock_Changed                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Cooking_OneOff_AddIngredient_Base_C::SetMovementBlock(bool bLock, bool* Changed, bool CallFunc_SetMovementBlock_Changed, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Cooking_OneOff_AddIngredient_Base_C", "SetMovementBlock");

	Params::UGA_Cooking_OneOff_AddIngredient_Base_C_SetMovementBlock_Params Parms{};

	Parms.bLock = bLock;
	Parms.CallFunc_SetMovementBlock_Changed = CallFunc_SetMovementBlock_Changed;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Changed != nullptr)
		*Changed = Parms.Changed;

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

void UGA_Cooking_OneOff_AddIngredient_Base_C::ConsiderTriggeringMinigame(bool CallFunc_IsServer_ReturnValue, class AValeriaPlayerController* CallFunc_GetValeriaPlayerControllerFromActorInfo_ReturnValue, enum class ECrafterEngageResult CallFunc_SetIsEngaging_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsInteractingMode_ReturnValue, bool CallFunc_ContainsAllIngredients_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Cooking_OneOff_AddIngredient_Base_C", "ConsiderTriggeringMinigame");

	Params::UGA_Cooking_OneOff_AddIngredient_Base_C_ConsiderTriggeringMinigame_Params Parms{};

	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_GetValeriaPlayerControllerFromActorInfo_ReturnValue = CallFunc_GetValeriaPlayerControllerFromActorInfo_ReturnValue;
	Parms.CallFunc_SetIsEngaging_ReturnValue = CallFunc_SetIsEngaging_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsInteractingMode_ReturnValue = CallFunc_IsInteractingMode_ReturnValue;
	Parms.CallFunc_ContainsAllIngredients_ReturnValue = CallFunc_ContainsAllIngredients_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Cooking_OneOff_AddIngredient_Base.GA_Cooking_OneOff_AddIngredient_Base_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bWasCancelled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Cooking_OneOff_AddIngredient_Base_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Cooking_OneOff_AddIngredient_Base_C", "K2_OnEndAbility");

	Params::UGA_Cooking_OneOff_AddIngredient_Base_C_K2_OnEndAbility_Params Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Cooking_OneOff_AddIngredient_Base.GA_Cooking_OneOff_AddIngredient_Base_C.ExecuteUbergraph_GA_Cooking_OneOff_AddIngredient_Base
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bWasCancelled                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Cooking_OneOff_AddIngredient_Base_C::ExecuteUbergraph_GA_Cooking_OneOff_AddIngredient_Base(int32 EntryPoint, bool K2Node_Event_bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Cooking_OneOff_AddIngredient_Base_C", "ExecuteUbergraph_GA_Cooking_OneOff_AddIngredient_Base");

	Params::UGA_Cooking_OneOff_AddIngredient_Base_C_ExecuteUbergraph_GA_Cooking_OneOff_AddIngredient_Base_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_bWasCancelled = K2Node_Event_bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
