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


// Function BPFL_Animation.BPFL_Animation_C.GetMappingNameByAbility
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                      Owner                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                AnimTag                                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        Mapping_Name                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValeriaCharacter*           K2Node_DynamicCast_AsValeria_Character                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilityAnimationComponent*  CallFunc_GetAbilityAnimation_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetMappingNameByTag_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_Animation_C::GetMappingNameByAbility(class AActor* InOwner, const struct FGameplayTag& InAnimTag, class UObject* In__WorldContext, class FName* InMapping_Name, class FName InTemp_name_Variable, class AValeriaCharacter* InK2Node_DynamicCast_AsValeria_Character, bool InK2Node_DynamicCast_bSuccess, class UAbilityAnimationComponent* InCallFunc_GetAbilityAnimation_ReturnValue, class FName InCallFunc_GetMappingNameByTag_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Animation_C", "GetMappingNameByAbility");

	Params::UBPFL_Animation_C_GetMappingNameByAbility_Params Parms{};

	Parms.Owner = InOwner;
	Parms.AnimTag = InAnimTag;
	Parms.__WorldContext = In__WorldContext;
	Parms.Temp_name_Variable = InTemp_name_Variable;
	Parms.K2Node_DynamicCast_AsValeria_Character = InK2Node_DynamicCast_AsValeria_Character;
	Parms.K2Node_DynamicCast_bSuccess = InK2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetAbilityAnimation_ReturnValue = InCallFunc_GetAbilityAnimation_ReturnValue;
	Parms.CallFunc_GetMappingNameByTag_ReturnValue = InCallFunc_GetMappingNameByTag_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (InMapping_Name != nullptr)
		*InMapping_Name = Parms.Mapping_Name;

}


// Function BPFL_Animation.BPFL_Animation_C.GetMontageByAbility
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                      Owner                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                AnimTag                                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                Montage                                                          (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValeriaCharacter*           K2Node_DynamicCast_AsValeria_Character                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilityAnimationComponent*  CallFunc_GetAbilityAnimation_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_GetMontage_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBPFL_Animation_C::GetMontageByAbility(class AActor* InOwner, const struct FGameplayTag& InAnimTag, class UObject* In__WorldContext, class UAnimMontage** InMontage, class FName InTemp_name_Variable, class AValeriaCharacter* InK2Node_DynamicCast_AsValeria_Character, bool InK2Node_DynamicCast_bSuccess, class UAbilityAnimationComponent* InCallFunc_GetAbilityAnimation_ReturnValue, class UAnimMontage* InCallFunc_GetMontage_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Animation_C", "GetMontageByAbility");

	Params::UBPFL_Animation_C_GetMontageByAbility_Params Parms{};

	Parms.Owner = InOwner;
	Parms.AnimTag = InAnimTag;
	Parms.__WorldContext = In__WorldContext;
	Parms.Temp_name_Variable = InTemp_name_Variable;
	Parms.K2Node_DynamicCast_AsValeria_Character = InK2Node_DynamicCast_AsValeria_Character;
	Parms.K2Node_DynamicCast_bSuccess = InK2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetAbilityAnimation_ReturnValue = InCallFunc_GetAbilityAnimation_ReturnValue;
	Parms.CallFunc_GetMontage_ReturnValue = InCallFunc_GetMontage_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (InMontage != nullptr)
		*InMontage = Parms.Montage;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
