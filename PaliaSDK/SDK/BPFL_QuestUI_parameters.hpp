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

// 0x348 (0x348 - 0x0)
// Function BPFL_QuestUI.BPFL_QuestUI_C.GetReturnTextAndIconForDialogueAsset
struct UBPFL_QuestUI_C_GetReturnTextAndIconForDialogueAsset_Params
{
public:
	struct FVAL_QuestStepDef                     QuestStepDef;                                      // 0x0(0xE8)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	class UVAL_DialogueAsset*                    DialogueAsset;                                     // 0xE8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0xF0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         WasSuccess;                                        // 0xF8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4DAE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  ReturnToText;                                      // 0x100(0x18)(Parm, OutParm)
	TSoftObjectPtr<class UTexture2D>             ReturnToIcon;                                      // 0x118(0x30)(Parm, OutParm, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x148(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4DAF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CallFunc_GetVillagerName_ReturnValue;              // 0x14C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4DB0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   K2Node_MakeStruct_DataTableRowHandle;              // 0x158(0x10)(NoDestructor)
	enum class EValeriaFuncResult                CallFunc_GetVillagerDataTableRow_OutResult;        // 0x168(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4DB1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVillagerConfig                       CallFunc_GetVillagerDataTableRow_ReturnValue;      // 0x170(0x140)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x2B0(0x50)(HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x300(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4DB2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x308(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x318(0x18)(None)
	class FText                                  K2Node_Select_Default;                             // 0x330(0x18)(None)
};

// 0x3C8 (0x3C8 - 0x0)
// Function BPFL_QuestUI.BPFL_QuestUI_C.GetReturnToText
struct UBPFL_QuestUI_C_GetReturnToText_Params
{
public:
	struct FVAL_QuestStepDef                     QuestStepDef;                                      // 0x0(0xE8)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	struct FVAL_QuestState                       QuestState;                                        // 0xE8(0xA0)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UObject*                               __WorldContext;                                    // 0x188(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         WasSuccess;                                        // 0x190(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4DB3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  ReturnToText;                                      // 0x198(0x18)(Parm, OutParm)
	TSoftObjectPtr<class UTexture2D>             ReturnToIcon;                                      // 0x1B0(0x30)(Parm, OutParm, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x1E0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4DB4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               CallFunc_LoadAsset_Blocking_ReturnValue;           // 0x1E8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UVAL_DialogueAsset*                    K2Node_DynamicCast_AsDialogue_Asset;               // 0x1F0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x1F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1F9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4DB5[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               CallFunc_LoadAsset_Blocking_ReturnValue_1;         // 0x200(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVAL_QuestStepState                   CallFunc_GetCurrentQuestStep_QuestStepState;       // 0x208(0x78)(None)
	bool                                         CallFunc_GetCurrentQuestStep_bFoundQuestStep;      // 0x280(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4DB6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UVAL_DialogueAsset*                    K2Node_DynamicCast_AsDialogue_Asset_1;             // 0x288(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x290(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetReturnTextAndIconForDialogueAsset_WasSuccess; // 0x291(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4DB7[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetReturnTextAndIconForDialogueAsset_ReturnToText; // 0x298(0x18)(None)
	TSoftObjectPtr<class UTexture2D>             CallFunc_GetReturnTextAndIconForDialogueAsset_ReturnToIcon; // 0x2B0(0x30)(HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x2E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4DB8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVAL_QuestBranchingGoalState          CallFunc_Array_Get_Item;                           // 0x2E8(0x78)(None)
	bool                                         CallFunc_GetReturnTextAndIconForDialogueAsset_WasSuccess_1; // 0x360(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4DB9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetReturnTextAndIconForDialogueAsset_ReturnToText_1; // 0x368(0x18)(None)
	TSoftObjectPtr<class UTexture2D>             CallFunc_GetReturnTextAndIconForDialogueAsset_ReturnToIcon_1; // 0x380(0x30)(HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x3B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4DBA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x3B4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x3B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4DBB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x3BC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x3C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4DBC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x3C4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x238 (0x238 - 0x0)
// Function BPFL_QuestUI.BPFL_QuestUI_C.GetBranchingStatement
struct UBPFL_QuestUI_C_GetBranchingStatement_Params
{
public:
	struct FVAL_QuestStepDef                     QuestStepDef;                                      // 0x0(0xE8)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	class UObject*                               __WorldContext;                                    // 0xE8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                  BranchingStatement;                                // 0xF0(0x18)(Parm, OutParm)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x108(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x109(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x10A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4DBD[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int64                                        CallFunc_Conv_IntToInt64_ReturnValue;              // 0x110(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x118(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4DBE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x120(0x50)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x170(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x180(0x18)(None)
	bool                                         CallFunc_Greater_IntInt_ReturnValue_1;             // 0x198(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x199(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4DBF[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int64                                        CallFunc_Conv_IntToInt64_ReturnValue_1;            // 0x1A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue_2;             // 0x1A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4DC0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_1;            // 0x1B0(0x50)(HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x200(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4DC1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array_1;                          // 0x208(0x10)(ReferenceParm)
	bool                                         CallFunc_BooleanAND_ReturnValue_2;                 // 0x218(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4DC2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Format_ReturnValue_1;                     // 0x220(0x18)(None)
};

// 0x1B1 (0x1B1 - 0x0)
// Function BPFL_QuestUI.BPFL_QuestUI_C.GetQuestDescription
struct UBPFL_QuestUI_C_GetQuestDescription_Params
{
public:
	struct FVAL_QuestState                       QuestState;                                        // 0x0(0xA0)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UVAL_QuestDef*                         QuestDef;                                          // 0xA0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0xA8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                  QuestDescription;                                  // 0xB0(0x18)(Parm, OutParm)
	struct FVAL_QuestStepDef                     CallFunc_GetCurrentQuestStepDefinition_QuestStepDef; // 0xC8(0xE8)(ContainsInstancedReference)
	bool                                         CallFunc_GetCurrentQuestStepDefinition_bFoundQuestStep; // 0x1B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1B1 (0x1B1 - 0x0)
// Function BPFL_QuestUI.BPFL_QuestUI_C.GetQuestTitle
struct UBPFL_QuestUI_C_GetQuestTitle_Params
{
public:
	struct FVAL_QuestState                       QuestState;                                        // 0x0(0xA0)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UVAL_QuestDef*                         QuestDef;                                          // 0xA0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0xA8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                  QuestTitle;                                        // 0xB0(0x18)(Parm, OutParm)
	struct FVAL_QuestStepDef                     CallFunc_GetCurrentQuestStepDefinition_QuestStepDef; // 0xC8(0xE8)(ContainsInstancedReference)
	bool                                         CallFunc_GetCurrentQuestStepDefinition_bFoundQuestStep; // 0x1B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x250 (0x250 - 0x0)
// Function BPFL_QuestUI.BPFL_QuestUI_C.GetDescriptionFromQuestGoal
struct UBPFL_QuestUI_C_GetDescriptionFromQuestGoal_Params
{
public:
	struct FVAL_QuestGoalState                   QuestGoalState;                                    // 0x0(0x70)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FVAL_QuestGoalDef                     QuestGoalDef;                                      // 0x70(0x58)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	class UObject*                               __WorldContext;                                    // 0xC8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                  GoalDescriptionText;                               // 0xD0(0x18)(Parm, OutParm)
	class FText                                  GoalDescription;                                   // 0xE8(0x18)(Edit, BlueprintVisible)
	bool                                         CallFunc_TextIsEmpty_ReturnValue;                  // 0x100(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4DC3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_GetAutoDescription_outDescription;        // 0x108(0x18)(None)
	bool                                         CallFunc_GetAutoDescription_ReturnValue;           // 0x120(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x121(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4DC4[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int64                                        CallFunc_Conv_IntToInt64_ReturnValue;              // 0x128(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                        CallFunc_Conv_IntToInt64_ReturnValue_1;            // 0x130(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x138(0x50)(HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_1;            // 0x188(0x50)(HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_2;            // 0x1D8(0x50)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x228(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x238(0x18)(None)
};

}
}


