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

// 0x10 (0x10 - 0x0)
// Function GA_Cooking_Minigame_Base.GA_Cooking_Minigame_Base_C.SetMovementBlock
struct UGA_Cooking_Minigame_Base_C_SetMovementBlock_Params
{
public:
	bool                                         bLock;                                             // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Changed;                                           // 0x1(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SetMovementBlock_Changed;                 // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A99[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AValeriaCharacter*                     CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue; // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function GA_Cooking_Minigame_Base.GA_Cooking_Minigame_Base_C.Callback_SuccessfulInputReceived
struct UGA_Cooking_Minigame_Base_C_Callback_SuccessfulInputReceived_Params
{
public:
	class UMinigameComponentMasterQTE*           Comp;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AValeriaCharacter*                     CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue; // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2C7 (0x2C7 - 0x0)
// Function GA_Cooking_Minigame_Base.GA_Cooking_Minigame_Base_C.HandleMovementBlockChanged
struct UGA_Cooking_Minigame_Base_C_HandleMovementBlockChanged_Params
{
public:
	bool                                         MovementBlocked;                                   // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_AC8[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AValeriaCharacter*                     CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue; // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_ACD[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRecipeConfig                         CallFunc_GetRecipeConfig_ReturnValue;              // 0x18(0x2A8)(ConstParm)
	bool                                         CallFunc_Server_Collect_ReturnValue;               // 0x2C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECrafterState                     CallFunc_GetCrafterState_ReturnValue;              // 0x2C1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x2C2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x2C3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x2C4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x2C5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_2;                 // 0x2C6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x15 (0x15 - 0x0)
// Function GA_Cooking_Minigame_Base.GA_Cooking_Minigame_Base_C.PlayMontage
struct UGA_Cooking_Minigame_Base_C_PlayMontage_Params
{
public:
	class FName                                  Montage;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  MontageSection;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         EndAbilityWhenFinished;                            // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Force__Used_by_child_outro_;                       // 0x11(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x13(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3 (0x3 - 0x0)
// Function GA_Cooking_Minigame_Base.GA_Cooking_Minigame_Base_C.CanUnlockCharacterDuringAnimation
struct UGA_Cooking_Minigame_Base_C_CanUnlockCharacterDuringAnimation_Params
{
public:
	bool                                         CanUnlock;                                         // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_CanUnlockCharacterDuringAnimation_CanUnlock; // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function GA_Cooking_Minigame_Base.GA_Cooking_Minigame_Base_C.OnOutroStarted
struct UGA_Cooking_Minigame_Base_C_OnOutroStarted_Params
{
public:
};

// 0x28 (0x28 - 0x0)
// Function GA_Cooking_Minigame_Base.GA_Cooking_Minigame_Base_C.OnAbilityEnd
struct UGA_Cooking_Minigame_Base_C_OnAbilityEnd_Params
{
public:
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x0(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x10(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AValeriaCharacter*                     CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue; // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x38 (0x38 - 0x0)
// Function GA_Cooking_Minigame_Base.GA_Cooking_Minigame_Base_C.OnAbilityStart
struct UGA_Cooking_Minigame_Base_C_OnAbilityStart_Params
{
public:
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x0(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x10(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x20(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AValeriaCharacter*                     CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue; // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x13 (0x13 - 0x0)
// Function GA_Cooking_Minigame_Base.GA_Cooking_Minigame_Base_C.IsPlayingMinigame
struct UGA_Cooking_Minigame_Base_C_IsPlayingMinigame_Params
{
public:
	bool                                         IsPlayingMinigame;                                 // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_B74[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AValeriaCharacter*                     CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue; // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsPlaying_ReturnValue;                    // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC9 (0xC9 - 0x0)
// Function GA_Cooking_Minigame_Base.GA_Cooking_Minigame_Base_C.HandleEvent
struct UGA_Cooking_Minigame_Base_C_HandleEvent_Params
{
public:
	struct FGameplayTag                          EventTag;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEventData                    EventData;                                         // 0x8(0xB0)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                         GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess;   // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_B82[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AValeriaCharacter*                     CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue; // 0xC0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC (0xC - 0x0)
// Function GA_Cooking_Minigame_Base.GA_Cooking_Minigame_Base_C.Minigame OnStateChanged
struct UGA_Cooking_Minigame_Base_C_Minigame_OnStateChanged_Params
{
public:
	class UMinigameComponentBase*                Comp;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	enum class EMinigameState                    PrevState;                                         // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EMinigameState                    NewState;                                          // 0x9(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0xA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsPlayingMinigame_IsPlayingMinigame;      // 0xB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function GA_Cooking_Minigame_Base.GA_Cooking_Minigame_Base_C.DoOutro
struct UGA_Cooking_Minigame_Base_C_DoOutro_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GA_Cooking_Minigame_Base.GA_Cooking_Minigame_Base_C.Queue Outro
struct UGA_Cooking_Minigame_Base_C_Queue_Outro_Params
{
public:
};

// 0x25 (0x25 - 0x0)
// Function GA_Cooking_Minigame_Base.GA_Cooking_Minigame_Base_C.ExecuteUbergraph_GA_Cooking_Minigame_Base
struct UGA_Cooking_Minigame_Base_C_ExecuteUbergraph_GA_Cooking_Minigame_Base_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsShuttingDown_NewParam;                  // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_BC3[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AValeriaCharacter*                     CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue; // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          CallFunc_GetCurrentMontage_ReturnValue;            // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_GetMontageCurrentSectionName_ReturnValue; // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsShuttingDown_NewParam_1;                // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue;          // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_2;                // 0x22(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x23(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


