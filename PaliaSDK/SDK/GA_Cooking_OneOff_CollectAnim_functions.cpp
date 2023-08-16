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


// Function GA_Cooking_OneOff_CollectAnim.GA_Cooking_OneOff_CollectAnim_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayEventData          EventData                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_Cooking_OneOff_CollectAnim_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData& InEventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Cooking_OneOff_CollectAnim_C", "K2_ActivateAbilityFromEvent");

	Params::UGA_Cooking_OneOff_CollectAnim_C_K2_ActivateAbilityFromEvent_Params Parms{};

	Parms.EventData = InEventData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Cooking_OneOff_CollectAnim.GA_Cooking_OneOff_CollectAnim_C.ExecuteUbergraph_GA_Cooking_OneOff_CollectAnim
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          K2Node_Event_EventData                                           (ConstParm)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCrafterComponent*           CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCrafterConfig              CallFunc_GetCrafterConfig_ReturnValue                            (ConstParm, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Cooking_OneOff_CollectAnim_C::ExecuteUbergraph_GA_Cooking_OneOff_CollectAnim(int32 InEntryPoint, const struct FGameplayEventData& InK2Node_Event_EventData, bool InCallFunc_IsValid_ReturnValue, class UCrafterComponent* InCallFunc_GetComponentByClass_ReturnValue, bool InCallFunc_IsValid_ReturnValue_1, const struct FCrafterConfig& InCallFunc_GetCrafterConfig_ReturnValue, bool InCallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Cooking_OneOff_CollectAnim_C", "ExecuteUbergraph_GA_Cooking_OneOff_CollectAnim");

	Params::UGA_Cooking_OneOff_CollectAnim_C_ExecuteUbergraph_GA_Cooking_OneOff_CollectAnim_Params Parms{};

	Parms.EntryPoint = InEntryPoint;
	Parms.K2Node_Event_EventData = InK2Node_Event_EventData;
	Parms.CallFunc_IsValid_ReturnValue = InCallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = InCallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = InCallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetCrafterConfig_ReturnValue = InCallFunc_GetCrafterConfig_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = InCallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
