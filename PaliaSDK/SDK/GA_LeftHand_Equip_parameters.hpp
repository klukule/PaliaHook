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
// Function GA_LeftHand_Equip.GA_LeftHand_Equip_C.OnCancelled_71CDA2D148065AE041450D9D992BCE5D
struct UGA_LeftHand_Equip_C_OnCancelled_71CDA2D148065AE041450D9D992BCE5D_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GA_LeftHand_Equip.GA_LeftHand_Equip_C.OnInterrupted_71CDA2D148065AE041450D9D992BCE5D
struct UGA_LeftHand_Equip_C_OnInterrupted_71CDA2D148065AE041450D9D992BCE5D_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GA_LeftHand_Equip.GA_LeftHand_Equip_C.OnBlendOut_71CDA2D148065AE041450D9D992BCE5D
struct UGA_LeftHand_Equip_C_OnBlendOut_71CDA2D148065AE041450D9D992BCE5D_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GA_LeftHand_Equip.GA_LeftHand_Equip_C.OnCompleted_71CDA2D148065AE041450D9D992BCE5D
struct UGA_LeftHand_Equip_C_OnCompleted_71CDA2D148065AE041450D9D992BCE5D_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GA_LeftHand_Equip.GA_LeftHand_Equip_C.K2_ActivateAbility
struct UGA_LeftHand_Equip_C_K2_ActivateAbility_Params
{
public:
};

// 0x118 (0x118 - 0x0)
// Function GA_LeftHand_Equip.GA_LeftHand_Equip_C.ExecuteUbergraph_GA_LeftHand_Equip
struct UGA_LeftHand_Equip_C_ExecuteUbergraph_GA_LeftHand_Equip_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_31C5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_GetOwningActorFromActorInfo_ReturnValue;  // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          CallFunc_GetMontageByAbility_Montage;              // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x18(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAbilityTask_PlayMontageAndWait*       CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue; // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_31C6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x34(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x44(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x54(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_K2_CommitAbility_ReturnValue;             // 0x64(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_31C7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayEventData                    K2Node_MakeStruct_GameplayEventData;               // 0x68(0xB0)(None)
};

}
}


