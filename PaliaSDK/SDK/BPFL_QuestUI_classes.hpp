#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPFL_QuestUI.BPFL_QuestUI_C
class UBPFL_QuestUI_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UBPFL_QuestUI_C* GetDefaultObj();

	void GetReturnTextAndIconForDialogueAsset(const struct FVAL_QuestStepDef& QuestStepDef, class UVAL_DialogueAsset* DialogueAsset, class UObject* __WorldContext, bool* WasSuccess, class FText* ReturnToText, TSoftObjectPtr<class UTexture2D>* ReturnToIcon, bool Temp_bool_Variable, class FName CallFunc_GetVillagerName_ReturnValue, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, enum class EValeriaFuncResult CallFunc_GetVillagerDataTableRow_OutResult, const struct FVillagerConfig& CallFunc_GetVillagerDataTableRow_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, bool K2Node_SwitchEnum_CmpSuccess, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, class FText K2Node_Select_Default);
	void GetReturnToText(struct FVAL_QuestStepDef& QuestStepDef, const struct FVAL_QuestState& QuestState, class UObject* __WorldContext, bool* WasSuccess, class FText* ReturnToText, TSoftObjectPtr<class UTexture2D>* ReturnToIcon, int32 Temp_int_Array_Index_Variable, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, class UVAL_DialogueAsset* K2Node_DynamicCast_AsDialogue_Asset, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue_1, const struct FVAL_QuestStepState& CallFunc_GetCurrentQuestStep_QuestStepState, bool CallFunc_GetCurrentQuestStep_bFoundQuestStep, class UVAL_DialogueAsset* K2Node_DynamicCast_AsDialogue_Asset_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_GetReturnTextAndIconForDialogueAsset_WasSuccess, class FText CallFunc_GetReturnTextAndIconForDialogueAsset_ReturnToText, TSoftObjectPtr<class UTexture2D> CallFunc_GetReturnTextAndIconForDialogueAsset_ReturnToIcon, bool CallFunc_IsValid_ReturnValue_1, const struct FVAL_QuestBranchingGoalState& CallFunc_Array_Get_Item, bool CallFunc_GetReturnTextAndIconForDialogueAsset_WasSuccess_1, class FText CallFunc_GetReturnTextAndIconForDialogueAsset_ReturnToText_1, TSoftObjectPtr<class UTexture2D> CallFunc_GetReturnTextAndIconForDialogueAsset_ReturnToIcon_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void GetBranchingStatement(struct FVAL_QuestStepDef& QuestStepDef, class UObject* __WorldContext, class FText* BranchingStatement, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int64 CallFunc_Conv_IntToInt64_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, int64 CallFunc_Conv_IntToInt64_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, bool CallFunc_BooleanAND_ReturnValue_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, bool CallFunc_BooleanAND_ReturnValue_2, class FText CallFunc_Format_ReturnValue_1);
	void GetQuestDescription(struct FVAL_QuestState& QuestState, class UVAL_QuestDef*& QuestDef, class UObject* __WorldContext, class FText* QuestDescription, const struct FVAL_QuestStepDef& CallFunc_GetCurrentQuestStepDefinition_QuestStepDef, bool CallFunc_GetCurrentQuestStepDefinition_bFoundQuestStep);
	void GetQuestTitle(struct FVAL_QuestState& QuestState, class UVAL_QuestDef*& QuestDef, class UObject* __WorldContext, class FText* QuestTitle, const struct FVAL_QuestStepDef& CallFunc_GetCurrentQuestStepDefinition_QuestStepDef, bool CallFunc_GetCurrentQuestStepDefinition_bFoundQuestStep);
	void GetDescriptionFromQuestGoal(struct FVAL_QuestGoalState& QuestGoalState, struct FVAL_QuestGoalDef& QuestGoalDef, class UObject* __WorldContext, class FText* GoalDescriptionText, class FText GoalDescription, bool CallFunc_TextIsEmpty_ReturnValue, class FText CallFunc_GetAutoDescription_outDescription, bool CallFunc_GetAutoDescription_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int64 CallFunc_Conv_IntToInt64_ReturnValue, int64 CallFunc_Conv_IntToInt64_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
};

}


