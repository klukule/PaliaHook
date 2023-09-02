#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_Gardening_Seed.GA_Gardening_Seed_C
// (None)

class UClass* UGA_Gardening_Seed_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_Gardening_Seed_C");

	return Clss;
}


// GA_Gardening_Seed_C GA_Gardening_Seed.Default__GA_Gardening_Seed_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_Gardening_Seed_C* UGA_Gardening_Seed_C::GetDefaultObj()
{
	static class UGA_Gardening_Seed_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_Gardening_Seed_C*>(UGA_Gardening_Seed_C::StaticClass()->DefaultObject);

	return Default;
}


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

void UGA_Gardening_Seed_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Gardening_Seed_C", "K2_OnEndAbility");

	Params::UGA_Gardening_Seed_C_K2_OnEndAbility_Params Parms{};

	Parms.bWasCancelled = bWasCancelled;

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

void UGA_Gardening_Seed_C::ExecuteUbergraph_GA_Gardening_Seed(int32 EntryPoint, bool K2Node_Event_bWasCancelled, class AValeriaCharacter* CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue, class AValeriaCharacter* CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue_1, class UGardenPlantingComponent* CallFunc_GetGardenPlanting_ReturnValue, class UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue, float CallFunc_GetDesiredCharacterYaw_outYaw, bool CallFunc_GetDesiredCharacterYaw_ReturnValue, class AValeriaCharacter* CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue_2, class UGardenPlantingComponent* CallFunc_GetGardenPlanting_ReturnValue_1, bool CallFunc_IsServer_ReturnValue, class AValeriaCharacter* CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue_3, bool CallFunc_Not_PreBool_ReturnValue, class UGardenPlantingComponent* CallFunc_GetGardenPlanting_ReturnValue_2, bool CallFunc_IsServer_ReturnValue_1, class AValeriaCharacter* CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue_4, class UGardenPlantingComponent* CallFunc_GetGardenPlanting_ReturnValue_3, double K2Node_VariableSet_EnforcedYaw_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Gardening_Seed_C", "ExecuteUbergraph_GA_Gardening_Seed");

	Params::UGA_Gardening_Seed_C_ExecuteUbergraph_GA_Gardening_Seed_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_bWasCancelled = K2Node_Event_bWasCancelled;
	Parms.CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue = CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue;
	Parms.CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue_1 = CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue_1;
	Parms.CallFunc_GetGardenPlanting_ReturnValue = CallFunc_GetGardenPlanting_ReturnValue;
	Parms.CallFunc_SpawnSystemAttached_ReturnValue = CallFunc_SpawnSystemAttached_ReturnValue;
	Parms.CallFunc_GetDesiredCharacterYaw_outYaw = CallFunc_GetDesiredCharacterYaw_outYaw;
	Parms.CallFunc_GetDesiredCharacterYaw_ReturnValue = CallFunc_GetDesiredCharacterYaw_ReturnValue;
	Parms.CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue_2 = CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue_2;
	Parms.CallFunc_GetGardenPlanting_ReturnValue_1 = CallFunc_GetGardenPlanting_ReturnValue_1;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue_3 = CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue_3;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetGardenPlanting_ReturnValue_2 = CallFunc_GetGardenPlanting_ReturnValue_2;
	Parms.CallFunc_IsServer_ReturnValue_1 = CallFunc_IsServer_ReturnValue_1;
	Parms.CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue_4 = CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue_4;
	Parms.CallFunc_GetGardenPlanting_ReturnValue_3 = CallFunc_GetGardenPlanting_ReturnValue_3;
	Parms.K2Node_VariableSet_EnforcedYaw_ImplicitCast = K2Node_VariableSet_EnforcedYaw_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


