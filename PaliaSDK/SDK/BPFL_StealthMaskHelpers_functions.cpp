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


// Function BPFL_StealthMaskHelpers.BPFL_StealthMaskHelpers_C.GetStealthMaskFromActor
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              StealthMask                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     ASC                                                              (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameplayTagAssetInterface>CallFunc_HasMatchingGameplayTag_self_CastInput                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasMatchingGameplayTag_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Or_IntInt_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_StealthMaskHelpers_C::GetStealthMaskFromActor(class AActor* InActor, class UObject* In__WorldContext, int32* InStealthMask, class UAbilitySystemComponent* InASC, bool InTemp_bool_Variable, class UAbilitySystemComponent* InCallFunc_GetComponentByClass_ReturnValue, int32 InTemp_int_Variable, int32 InTemp_int_Variable_1, TScriptInterface<class IGameplayTagAssetInterface> InCallFunc_HasMatchingGameplayTag_self_CastInput, bool InCallFunc_HasMatchingGameplayTag_ReturnValue, bool InCallFunc_IsValid_ReturnValue, int32 InK2Node_Select_Default, int32 InCallFunc_Or_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_StealthMaskHelpers_C", "GetStealthMaskFromActor");

	Params::UBPFL_StealthMaskHelpers_C_GetStealthMaskFromActor_Params Parms{};

	Parms.Actor = InActor;
	Parms.__WorldContext = In__WorldContext;
	Parms.ASC = InASC;
	Parms.Temp_bool_Variable = InTemp_bool_Variable;
	Parms.CallFunc_GetComponentByClass_ReturnValue = InCallFunc_GetComponentByClass_ReturnValue;
	Parms.Temp_int_Variable = InTemp_int_Variable;
	Parms.Temp_int_Variable_1 = InTemp_int_Variable_1;
	Parms.CallFunc_HasMatchingGameplayTag_self_CastInput = InCallFunc_HasMatchingGameplayTag_self_CastInput;
	Parms.CallFunc_HasMatchingGameplayTag_ReturnValue = InCallFunc_HasMatchingGameplayTag_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = InCallFunc_IsValid_ReturnValue;
	Parms.K2Node_Select_Default = InK2Node_Select_Default;
	Parms.CallFunc_Or_IntInt_ReturnValue = InCallFunc_Or_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (InStealthMask != nullptr)
		*InStealthMask = Parms.StealthMask;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
