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

// 0x58 (0x58 - 0x0)
// Function GA_Cooking_OneOff_Base.GA_Cooking_OneOff_Base_C.GetLockParams
struct UGA_Cooking_OneOff_Base_C_GetLockParams_Params
{
public:
	struct FVAL_InteractorLockParams             VAL_InteractorLockParams;                          // 0x0(0x28)(Parm, OutParm, NoDestructor, ContainsInstancedReference)
	class UObject*                               CallFunc_SelectObject_ReturnValue;                 // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVAL_InteractorLockParams             K2Node_MakeStruct_VAL_InteractorLockParams;        // 0x30(0x28)(NoDestructor, ContainsInstancedReference)
};

// 0x1 (0x1 - 0x0)
// Function GA_Cooking_OneOff_Base.GA_Cooking_OneOff_Base_C.CanUnlockCharacterDuringAnimation
struct UGA_Cooking_OneOff_Base_C_CanUnlockCharacterDuringAnimation_Params
{
public:
	bool                                         CanUnlock;                                         // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xB4 (0xB4 - 0x0)
// Function GA_Cooking_OneOff_Base.GA_Cooking_OneOff_Base_C.SetMovementBlock
struct UGA_Cooking_OneOff_Base_C_SetMovementBlock_Params
{
public:
	bool                                         bLock;                                             // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Changed;                                           // 0x1(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4[0x6];                                        // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVAL_InteractorLockParams             CallFunc_GetLockParams_VAL_InteractorLockParams;   // 0x8(0x28)(NoDestructor, ContainsInstancedReference)
	struct FVAL_InteractorLockParams             CallFunc_GetLockParams_VAL_InteractorLockParams_1; // 0x30(0x28)(NoDestructor, ContainsInstancedReference)
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsServer_ReturnValue_1;                   // 0x59(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsAbilityLockedIn_ReturnValue;            // 0x5A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x5B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SetMovementBlock_Changed;                 // 0x5C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SetMovementBlock_Changed_1;               // 0x5D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsShuttingDown_NewParam;                  // 0x5E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6[0x1];                                        // Fixing Size After Last Property  [ Dumper-7 ]
	class AValeriaCharacter*                     CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue; // 0x60(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UInteractorComponent*                  CallFunc_GetInteractorComponent_ReturnValue;       // 0x68(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LockPlayerToInteractable_ReturnValue;     // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_CanUnlockCharacterDuringAnimation_CanUnlock; // 0x71(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x72(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8[0x5];                                        // Fixing Size After Last Property  [ Dumper-7 ]
	class AValeriaCharacter*                     CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue_1; // 0x78(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UInteractorComponent*                  CallFunc_GetInteractorComponent_ReturnValue_1;     // 0x80(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVAL_InteractorLockParams             CallFunc_GetLockParams_VAL_InteractorLockParams_2; // 0x88(0x28)(NoDestructor, ContainsInstancedReference)
	bool                                         CallFunc_IsPlayerLockedToInteractable_ReturnValue; // 0xB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_UnLockPlayerFromInteractable_ReturnValue; // 0xB1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_CanPlayerChangeLockWith_ReturnValue;      // 0xB2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0xB3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xB0 (0xB0 - 0x0)
// Function GA_Cooking_OneOff_Base.GA_Cooking_OneOff_Base_C.K2_ActivateAbilityFromEvent
struct UGA_Cooking_OneOff_Base_C_K2_ActivateAbilityFromEvent_Params
{
public:
	struct FGameplayEventData                    EventData;                                         // 0x0(0xB0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x122 (0x122 - 0x0)
// Function GA_Cooking_OneOff_Base.GA_Cooking_OneOff_Base_C.ExecuteUbergraph_GA_Cooking_OneOff_Base
struct UGA_Cooking_OneOff_Base_C_ExecuteUbergraph_GA_Cooking_OneOff_Base_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9[0x4];                                        // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayEventData                    K2Node_Event_EventData;                            // 0x8(0xB0)(ConstParm)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A[0x7];                                        // Fixing Size After Last Property  [ Dumper-7 ]
	class UInteractableComponent*                CallFunc_GetComponentByClass_ReturnValue;          // 0xC0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0xC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0xC9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_B[0x6];                                        // Fixing Size After Last Property  [ Dumper-7 ]
	class UCrafterComponent*                     CallFunc_GetComponentByClass_ReturnValue_1;        // 0xD0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0xD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_C[0x7];                                        // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVAL_InteractorLockParams             CallFunc_GetLockParams_VAL_InteractorLockParams;   // 0xE0(0x28)(NoDestructor, ContainsInstancedReference)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x108(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_D[0x7];                                        // Fixing Size After Last Property  [ Dumper-7 ]
	class AValeriaCharacter*                     CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue; // 0x110(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UInteractorComponent*                  CallFunc_GetInteractorComponent_ReturnValue;       // 0x118(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Client_TryInteractableLockSetup_ReturnValue; // 0x120(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_CanPlayerChangeLockWith_ReturnValue;      // 0x121(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


