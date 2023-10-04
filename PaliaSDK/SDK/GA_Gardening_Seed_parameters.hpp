#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x0 - 0x0)
// Function GA_Gardening_Seed.GA_Gardening_Seed_C.event_vfx_throwSeeds
struct UGA_Gardening_Seed_C_Event_vfx_throwSeeds_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GA_Gardening_Seed.GA_Gardening_Seed_C.K2_ActivateAbility
struct UGA_Gardening_Seed_C_K2_ActivateAbility_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function GA_Gardening_Seed.GA_Gardening_Seed_C.K2_OnEndAbility
struct UGA_Gardening_Seed_C_K2_OnEndAbility_Params
{
public:
	bool                                         bWasCancelled;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x78 (0x78 - 0x0)
// Function GA_Gardening_Seed.GA_Gardening_Seed_C.ExecuteUbergraph_GA_Gardening_Seed
struct UGA_Gardening_Seed_C_ExecuteUbergraph_GA_Gardening_Seed_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bWasCancelled;                        // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2F42[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AValeriaCharacter*                     CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue; // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AValeriaCharacter*                     CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue_1; // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UGardenPlantingComponent*              CallFunc_GetGardenPlanting_ReturnValue;            // 0x18(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     CallFunc_SpawnSystemAttached_ReturnValue;          // 0x20(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetDesiredCharacterYaw_outYaw;            // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetDesiredCharacterYaw_ReturnValue;       // 0x2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2F43[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AValeriaCharacter*                     CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue_2; // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UGardenPlantingComponent*              CallFunc_GetGardenPlanting_ReturnValue_1;          // 0x38(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2F44[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AValeriaCharacter*                     CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue_3; // 0x48(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UGardenPlantingComponent*              CallFunc_GetGardenPlanting_ReturnValue_2;          // 0x50(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsServer_ReturnValue_1;                   // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2F45[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AValeriaCharacter*                     CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue_4; // 0x60(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UGardenPlantingComponent*              CallFunc_GetGardenPlanting_ReturnValue_3;          // 0x68(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_VariableSet_EnforcedYaw_ImplicitCast;       // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


