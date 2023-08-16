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


// Function GA_Gardening_Seed.GA_Gardening_Seed_C.event_vfx_throwSeeds
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Gardening_Seed_C::Event_vfx_throwSeeds()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Gardening_Seed_C", "event_vfx_throwSeeds");

	Params::UGA_Gardening_Seed_C_Event_vfx_throwSeeds_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Gardening_Seed.GA_Gardening_Seed_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_Gardening_Seed_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Gardening_Seed_C", "K2_ActivateAbility");

	Params::UGA_Gardening_Seed_C_K2_ActivateAbility_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Gardening_Seed.GA_Gardening_Seed_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bWasCancelled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Gardening_Seed_C::K2_OnEndAbility(bool InbWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Gardening_Seed_C", "K2_OnEndAbility");

	Params::UGA_Gardening_Seed_C_K2_OnEndAbility_Params Parms{};

	Parms.bWasCancelled = InbWasCancelled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Gardening_Seed.GA_Gardening_Seed_C.ExecuteUbergraph_GA_Gardening_Seed
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bWasCancelled                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValeriaCharacter*           CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AValeriaCharacter*           CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue_1          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UGardenPlantingComponent*    CallFunc_GetGardenPlanting_ReturnValue                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_SpawnSystemAttached_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDesiredCharacterYaw_outYaw                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDesiredCharacterYaw_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValeriaCharacter*           CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue_2          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UGardenPlantingComponent*    CallFunc_GetGardenPlanting_ReturnValue_1                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValeriaCharacter*           CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue_3          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGardenPlantingComponent*    CallFunc_GetGardenPlanting_ReturnValue_2                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValeriaCharacter*           CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue_4          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UGardenPlantingComponent*    CallFunc_GetGardenPlanting_ReturnValue_3                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_EnforcedYaw_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Gardening_Seed_C::ExecuteUbergraph_GA_Gardening_Seed(int32 InEntryPoint, bool InK2Node_Event_bWasCancelled, class AValeriaCharacter* InCallFunc_GetValeriaCharacterFromActorInfo_ReturnValue, class AValeriaCharacter* InCallFunc_GetValeriaCharacterFromActorInfo_ReturnValue_1, class UGardenPlantingComponent* InCallFunc_GetGardenPlanting_ReturnValue, class UNiagaraComponent* InCallFunc_SpawnSystemAttached_ReturnValue, float InCallFunc_GetDesiredCharacterYaw_outYaw, bool InCallFunc_GetDesiredCharacterYaw_ReturnValue, class AValeriaCharacter* InCallFunc_GetValeriaCharacterFromActorInfo_ReturnValue_2, class UGardenPlantingComponent* InCallFunc_GetGardenPlanting_ReturnValue_1, bool InCallFunc_IsServer_ReturnValue, class AValeriaCharacter* InCallFunc_GetValeriaCharacterFromActorInfo_ReturnValue_3, bool InCallFunc_Not_PreBool_ReturnValue, class UGardenPlantingComponent* InCallFunc_GetGardenPlanting_ReturnValue_2, bool InCallFunc_IsServer_ReturnValue_1, class AValeriaCharacter* InCallFunc_GetValeriaCharacterFromActorInfo_ReturnValue_4, class UGardenPlantingComponent* InCallFunc_GetGardenPlanting_ReturnValue_3, double InK2Node_VariableSet_EnforcedYaw_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Gardening_Seed_C", "ExecuteUbergraph_GA_Gardening_Seed");

	Params::UGA_Gardening_Seed_C_ExecuteUbergraph_GA_Gardening_Seed_Params Parms{};

	Parms.EntryPoint = InEntryPoint;
	Parms.K2Node_Event_bWasCancelled = InK2Node_Event_bWasCancelled;
	Parms.CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue = InCallFunc_GetValeriaCharacterFromActorInfo_ReturnValue;
	Parms.CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue_1 = InCallFunc_GetValeriaCharacterFromActorInfo_ReturnValue_1;
	Parms.CallFunc_GetGardenPlanting_ReturnValue = InCallFunc_GetGardenPlanting_ReturnValue;
	Parms.CallFunc_SpawnSystemAttached_ReturnValue = InCallFunc_SpawnSystemAttached_ReturnValue;
	Parms.CallFunc_GetDesiredCharacterYaw_outYaw = InCallFunc_GetDesiredCharacterYaw_outYaw;
	Parms.CallFunc_GetDesiredCharacterYaw_ReturnValue = InCallFunc_GetDesiredCharacterYaw_ReturnValue;
	Parms.CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue_2 = InCallFunc_GetValeriaCharacterFromActorInfo_ReturnValue_2;
	Parms.CallFunc_GetGardenPlanting_ReturnValue_1 = InCallFunc_GetGardenPlanting_ReturnValue_1;
	Parms.CallFunc_IsServer_ReturnValue = InCallFunc_IsServer_ReturnValue;
	Parms.CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue_3 = InCallFunc_GetValeriaCharacterFromActorInfo_ReturnValue_3;
	Parms.CallFunc_Not_PreBool_ReturnValue = InCallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetGardenPlanting_ReturnValue_2 = InCallFunc_GetGardenPlanting_ReturnValue_2;
	Parms.CallFunc_IsServer_ReturnValue_1 = InCallFunc_IsServer_ReturnValue_1;
	Parms.CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue_4 = InCallFunc_GetValeriaCharacterFromActorInfo_ReturnValue_4;
	Parms.CallFunc_GetGardenPlanting_ReturnValue_3 = InCallFunc_GetGardenPlanting_ReturnValue_3;
	Parms.K2Node_VariableSet_EnforcedYaw_ImplicitCast = InK2Node_VariableSet_EnforcedYaw_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
