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
// Function GA_LeftHand_Dequip.GA_LeftHand_Dequip_C.OnCancelled_20445A2640D644CD6B9EFA9754DC209A
struct UGA_LeftHand_Dequip_C_OnCancelled_20445A2640D644CD6B9EFA9754DC209A_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GA_LeftHand_Dequip.GA_LeftHand_Dequip_C.OnInterrupted_20445A2640D644CD6B9EFA9754DC209A
struct UGA_LeftHand_Dequip_C_OnInterrupted_20445A2640D644CD6B9EFA9754DC209A_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GA_LeftHand_Dequip.GA_LeftHand_Dequip_C.OnBlendOut_20445A2640D644CD6B9EFA9754DC209A
struct UGA_LeftHand_Dequip_C_OnBlendOut_20445A2640D644CD6B9EFA9754DC209A_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GA_LeftHand_Dequip.GA_LeftHand_Dequip_C.OnCompleted_20445A2640D644CD6B9EFA9754DC209A
struct UGA_LeftHand_Dequip_C_OnCompleted_20445A2640D644CD6B9EFA9754DC209A_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GA_LeftHand_Dequip.GA_LeftHand_Dequip_C.K2_ActivateAbility
struct UGA_LeftHand_Dequip_C_K2_ActivateAbility_Params
{
public:
};

// 0x118 (0x118 - 0x0)
// Function GA_LeftHand_Dequip.GA_LeftHand_Dequip_C.ExecuteUbergraph_GA_LeftHand_Dequip
struct UGA_LeftHand_Dequip_C_ExecuteUbergraph_GA_LeftHand_Dequip_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1F50[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_GetOwningActorFromActorInfo_ReturnValue;  // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          CallFunc_GetMontageByAbility_Montage;              // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x18(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAbilityTask_PlayMontageAndWait*       CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue; // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1F52[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x34(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x44(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x54(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_K2_CommitAbility_ReturnValue;             // 0x64(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1F53[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayEventData                    K2Node_MakeStruct_GameplayEventData;               // 0x68(0xB0)(None)
};

}
}


