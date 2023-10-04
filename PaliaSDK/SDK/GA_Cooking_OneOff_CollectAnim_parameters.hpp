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

// 0xB0 (0xB0 - 0x0)
// Function GA_Cooking_OneOff_CollectAnim.GA_Cooking_OneOff_CollectAnim_C.K2_ActivateAbilityFromEvent
struct UGA_Cooking_OneOff_CollectAnim_C_K2_ActivateAbilityFromEvent_Params
{
public:
	struct FGameplayEventData                    EventData;                                         // 0x0(0xB0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x1B9 (0x1B9 - 0x0)
// Function GA_Cooking_OneOff_CollectAnim.GA_Cooking_OneOff_CollectAnim_C.ExecuteUbergraph_GA_Cooking_OneOff_CollectAnim
struct UGA_Cooking_OneOff_CollectAnim_C_ExecuteUbergraph_GA_Cooking_OneOff_CollectAnim_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_305D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayEventData                    K2Node_Event_EventData;                            // 0x8(0xB0)(ConstParm)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_305E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCrafterComponent*                     CallFunc_GetComponentByClass_ReturnValue;          // 0xC0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0xC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_305F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCrafterConfig                        CallFunc_GetCrafterConfig_ReturnValue;             // 0xD0(0xE8)(ConstParm, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x1B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


