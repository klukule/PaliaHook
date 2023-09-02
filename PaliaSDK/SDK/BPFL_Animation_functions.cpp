#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPFL_Animation.BPFL_Animation_C
// (None)

class UClass* UBPFL_Animation_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPFL_Animation_C");

	return Clss;
}


// BPFL_Animation_C BPFL_Animation.Default__BPFL_Animation_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPFL_Animation_C* UBPFL_Animation_C::GetDefaultObj()
{
	static class UBPFL_Animation_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPFL_Animation_C*>(UBPFL_Animation_C::StaticClass()->DefaultObject);

	return Default;
}


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

void UBPFL_Animation_C::GetMappingNameByAbility(class AActor* Owner, const struct FGameplayTag& AnimTag, class UObject* __WorldContext, class FName* Mapping_Name, class FName Temp_name_Variable, class AValeriaCharacter* K2Node_DynamicCast_AsValeria_Character, bool K2Node_DynamicCast_bSuccess, class UAbilityAnimationComponent* CallFunc_GetAbilityAnimation_ReturnValue, class FName CallFunc_GetMappingNameByTag_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Animation_C", "GetMappingNameByAbility");

	Params::UBPFL_Animation_C_GetMappingNameByAbility_Params Parms{};

	Parms.Owner = Owner;
	Parms.AnimTag = AnimTag;
	Parms.__WorldContext = __WorldContext;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.K2Node_DynamicCast_AsValeria_Character = K2Node_DynamicCast_AsValeria_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetAbilityAnimation_ReturnValue = CallFunc_GetAbilityAnimation_ReturnValue;
	Parms.CallFunc_GetMappingNameByTag_ReturnValue = CallFunc_GetMappingNameByTag_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Mapping_Name != nullptr)
		*Mapping_Name = Parms.Mapping_Name;

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

void UBPFL_Animation_C::GetMontageByAbility(class AActor* Owner, const struct FGameplayTag& AnimTag, class UObject* __WorldContext, class UAnimMontage** Montage, class FName Temp_name_Variable, class AValeriaCharacter* K2Node_DynamicCast_AsValeria_Character, bool K2Node_DynamicCast_bSuccess, class UAbilityAnimationComponent* CallFunc_GetAbilityAnimation_ReturnValue, class UAnimMontage* CallFunc_GetMontage_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_Animation_C", "GetMontageByAbility");

	Params::UBPFL_Animation_C_GetMontageByAbility_Params Parms{};

	Parms.Owner = Owner;
	Parms.AnimTag = AnimTag;
	Parms.__WorldContext = __WorldContext;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.K2Node_DynamicCast_AsValeria_Character = K2Node_DynamicCast_AsValeria_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetAbilityAnimation_ReturnValue = CallFunc_GetAbilityAnimation_ReturnValue;
	Parms.CallFunc_GetMontage_ReturnValue = CallFunc_GetMontage_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Montage != nullptr)
		*Montage = Parms.Montage;

}

}


