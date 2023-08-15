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


// Function MAP_Character_Lighting_CharacterCreation_LevelInstance_3.MAP_Character_Lighting_CharacterCreation_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AMAP_Character_Lighting_CharacterCreation_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MAP_Character_Lighting_CharacterCreation_C", "ReceiveBeginPlay");

	Params::AMAP_Character_Lighting_CharacterCreation_C_ReceiveBeginPlay_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function MAP_Character_Lighting_CharacterCreation_LevelInstance_3.MAP_Character_Lighting_CharacterCreation_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EEndPlayReason          EndPlayReason                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMAP_Character_Lighting_CharacterCreation_C::ReceiveEndPlay(enum class EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MAP_Character_Lighting_CharacterCreation_C", "ReceiveEndPlay");

	Params::AMAP_Character_Lighting_CharacterCreation_C_ReceiveEndPlay_Params Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MAP_Character_Lighting_CharacterCreation_LevelInstance_3.MAP_Character_Lighting_CharacterCreation_C.ExecuteUbergraph_MAP_Character_Lighting_CharacterCreation
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_GetLightColor_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Conv_VectorToLinearColor_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEndPlayReason          K2Node_Event_EndPlayReason                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMAP_Character_Lighting_CharacterCreation_C::ExecuteUbergraph_MAP_Character_Lighting_CharacterCreation(int32 EntryPoint, const struct FVector& CallFunc_GetForwardVector_ReturnValue, const struct FLinearColor& CallFunc_GetLightColor_ReturnValue, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue, enum class EEndPlayReason K2Node_Event_EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MAP_Character_Lighting_CharacterCreation_C", "ExecuteUbergraph_MAP_Character_Lighting_CharacterCreation");

	Params::AMAP_Character_Lighting_CharacterCreation_C_ExecuteUbergraph_MAP_Character_Lighting_CharacterCreation_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetForwardVector_ReturnValue = CallFunc_GetForwardVector_ReturnValue;
	Parms.CallFunc_GetLightColor_ReturnValue = CallFunc_GetLightColor_ReturnValue;
	Parms.CallFunc_Conv_VectorToLinearColor_ReturnValue = CallFunc_Conv_VectorToLinearColor_ReturnValue;
	Parms.K2Node_Event_EndPlayReason = K2Node_Event_EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
