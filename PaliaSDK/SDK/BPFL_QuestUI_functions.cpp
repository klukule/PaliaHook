#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPFL_QuestUI.BPFL_QuestUI_C
// (None)

class UClass* UBPFL_QuestUI_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPFL_QuestUI_C");

	return Clss;
}


// BPFL_QuestUI_C BPFL_QuestUI.Default__BPFL_QuestUI_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPFL_QuestUI_C* UBPFL_QuestUI_C::GetDefaultObj()
{
	static class UBPFL_QuestUI_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPFL_QuestUI_C*>(UBPFL_QuestUI_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPFL_QuestUI.BPFL_QuestUI_C.GetReturnTextAndIconForDialogueAsset
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVAL_QuestStepDef           QuestStepDef                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// class UVAL_DialogueAsset*          DialogueAsset                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               WasSuccess                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        ReturnToText                                                     (Parm, OutParm)
// TSoftObjectPtr<class UTexture2D>   ReturnToIcon                                                     (Parm, OutParm, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetVillagerName_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle                             (NoDestructor)
// enum class EValeriaFuncResult      CallFunc_GetVillagerDataTableRow_OutResult                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVillagerConfig             CallFunc_GetVillagerDataTableRow_ReturnValue                     (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class FText                        K2Node_Select_Default                                            (None)

void UBPFL_QuestUI_C::GetReturnTextAndIconForDialogueAsset(const struct FVAL_QuestStepDef& QuestStepDef, class UVAL_DialogueAsset* DialogueAsset, class UObject* __WorldContext, bool* WasSuccess, class FText* ReturnToText, TSoftObjectPtr<class UTexture2D>* ReturnToIcon, bool Temp_bool_Variable, class FName CallFunc_GetVillagerName_ReturnValue, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, enum class EValeriaFuncResult CallFunc_GetVillagerDataTableRow_OutResult, const struct FVillagerConfig& CallFunc_GetVillagerDataTableRow_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, bool K2Node_SwitchEnum_CmpSuccess, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, class FText K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_QuestUI_C", "GetReturnTextAndIconForDialogueAsset");

	Params::UBPFL_QuestUI_C_GetReturnTextAndIconForDialogueAsset_Params Parms{};

	Parms.QuestStepDef = QuestStepDef;
	Parms.DialogueAsset = DialogueAsset;
	Parms.__WorldContext = __WorldContext;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetVillagerName_ReturnValue = CallFunc_GetVillagerName_ReturnValue;
	Parms.K2Node_MakeStruct_DataTableRowHandle = K2Node_MakeStruct_DataTableRowHandle;
	Parms.CallFunc_GetVillagerDataTableRow_OutResult = CallFunc_GetVillagerDataTableRow_OutResult;
	Parms.CallFunc_GetVillagerDataTableRow_ReturnValue = CallFunc_GetVillagerDataTableRow_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (WasSuccess != nullptr)
		*WasSuccess = Parms.WasSuccess;

	if (ReturnToText != nullptr)
		*ReturnToText = Parms.ReturnToText;

	if (ReturnToIcon != nullptr)
		*ReturnToIcon = Parms.ReturnToIcon;

}


// Function BPFL_QuestUI.BPFL_QuestUI_C.GetReturnToText
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVAL_QuestStepDef           QuestStepDef                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// struct FVAL_QuestState             QuestState                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               WasSuccess                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        ReturnToText                                                     (Parm, OutParm)
// TSoftObjectPtr<class UTexture2D>   ReturnToIcon                                                     (Parm, OutParm, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_LoadAsset_Blocking_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UVAL_DialogueAsset*          K2Node_DynamicCast_AsDialogue_Asset                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_LoadAsset_Blocking_ReturnValue_1                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVAL_QuestStepState         CallFunc_GetCurrentQuestStep_QuestStepState                      (None)
// bool                               CallFunc_GetCurrentQuestStep_bFoundQuestStep                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVAL_DialogueAsset*          K2Node_DynamicCast_AsDialogue_Asset_1                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetReturnTextAndIconForDialogueAsset_WasSuccess         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetReturnTextAndIconForDialogueAsset_ReturnToText       (None)
// TSoftObjectPtr<class UTexture2D>   CallFunc_GetReturnTextAndIconForDialogueAsset_ReturnToIcon       (HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVAL_QuestBranchingGoalStateCallFunc_Array_Get_Item                                          (None)
// bool                               CallFunc_GetReturnTextAndIconForDialogueAsset_WasSuccess_1       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetReturnTextAndIconForDialogueAsset_ReturnToText_1     (None)
// TSoftObjectPtr<class UTexture2D>   CallFunc_GetReturnTextAndIconForDialogueAsset_ReturnToIcon_1     (HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_QuestUI_C::GetReturnToText(struct FVAL_QuestStepDef& QuestStepDef, const struct FVAL_QuestState& QuestState, class UObject* __WorldContext, bool* WasSuccess, class FText* ReturnToText, TSoftObjectPtr<class UTexture2D>* ReturnToIcon, int32 Temp_int_Array_Index_Variable, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, class UVAL_DialogueAsset* K2Node_DynamicCast_AsDialogue_Asset, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue_1, const struct FVAL_QuestStepState& CallFunc_GetCurrentQuestStep_QuestStepState, bool CallFunc_GetCurrentQuestStep_bFoundQuestStep, class UVAL_DialogueAsset* K2Node_DynamicCast_AsDialogue_Asset_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_GetReturnTextAndIconForDialogueAsset_WasSuccess, class FText CallFunc_GetReturnTextAndIconForDialogueAsset_ReturnToText, TSoftObjectPtr<class UTexture2D> CallFunc_GetReturnTextAndIconForDialogueAsset_ReturnToIcon, bool CallFunc_IsValid_ReturnValue_1, const struct FVAL_QuestBranchingGoalState& CallFunc_Array_Get_Item, bool CallFunc_GetReturnTextAndIconForDialogueAsset_WasSuccess_1, class FText CallFunc_GetReturnTextAndIconForDialogueAsset_ReturnToText_1, TSoftObjectPtr<class UTexture2D> CallFunc_GetReturnTextAndIconForDialogueAsset_ReturnToIcon_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_QuestUI_C", "GetReturnToText");

	Params::UBPFL_QuestUI_C_GetReturnToText_Params Parms{};

	Parms.QuestStepDef = QuestStepDef;
	Parms.QuestState = QuestState;
	Parms.__WorldContext = __WorldContext;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_LoadAsset_Blocking_ReturnValue = CallFunc_LoadAsset_Blocking_ReturnValue;
	Parms.K2Node_DynamicCast_AsDialogue_Asset = K2Node_DynamicCast_AsDialogue_Asset;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_LoadAsset_Blocking_ReturnValue_1 = CallFunc_LoadAsset_Blocking_ReturnValue_1;
	Parms.CallFunc_GetCurrentQuestStep_QuestStepState = CallFunc_GetCurrentQuestStep_QuestStepState;
	Parms.CallFunc_GetCurrentQuestStep_bFoundQuestStep = CallFunc_GetCurrentQuestStep_bFoundQuestStep;
	Parms.K2Node_DynamicCast_AsDialogue_Asset_1 = K2Node_DynamicCast_AsDialogue_Asset_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetReturnTextAndIconForDialogueAsset_WasSuccess = CallFunc_GetReturnTextAndIconForDialogueAsset_WasSuccess;
	Parms.CallFunc_GetReturnTextAndIconForDialogueAsset_ReturnToText = CallFunc_GetReturnTextAndIconForDialogueAsset_ReturnToText;
	Parms.CallFunc_GetReturnTextAndIconForDialogueAsset_ReturnToIcon = CallFunc_GetReturnTextAndIconForDialogueAsset_ReturnToIcon;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetReturnTextAndIconForDialogueAsset_WasSuccess_1 = CallFunc_GetReturnTextAndIconForDialogueAsset_WasSuccess_1;
	Parms.CallFunc_GetReturnTextAndIconForDialogueAsset_ReturnToText_1 = CallFunc_GetReturnTextAndIconForDialogueAsset_ReturnToText_1;
	Parms.CallFunc_GetReturnTextAndIconForDialogueAsset_ReturnToIcon_1 = CallFunc_GetReturnTextAndIconForDialogueAsset_ReturnToIcon_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (WasSuccess != nullptr)
		*WasSuccess = Parms.WasSuccess;

	if (ReturnToText != nullptr)
		*ReturnToText = Parms.ReturnToText;

	if (ReturnToIcon != nullptr)
		*ReturnToIcon = Parms.ReturnToIcon;

}


// Function BPFL_QuestUI.BPFL_QuestUI_C.GetBranchingStatement
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVAL_QuestStepDef           QuestStepDef                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        BranchingStatement                                               (Parm, OutParm)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_1                                         (ReferenceParm)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue_1                                    (None)

void UBPFL_QuestUI_C::GetBranchingStatement(struct FVAL_QuestStepDef& QuestStepDef, class UObject* __WorldContext, class FText* BranchingStatement, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int64 CallFunc_Conv_IntToInt64_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, int64 CallFunc_Conv_IntToInt64_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, bool CallFunc_BooleanAND_ReturnValue_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, bool CallFunc_BooleanAND_ReturnValue_2, class FText CallFunc_Format_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_QuestUI_C", "GetBranchingStatement");

	Params::UBPFL_QuestUI_C_GetBranchingStatement_Params Parms{};

	Parms.QuestStepDef = QuestStepDef;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToInt64_ReturnValue = CallFunc_Conv_IntToInt64_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_Conv_IntToInt64_ReturnValue_1 = CallFunc_Conv_IntToInt64_ReturnValue_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue_2 = CallFunc_Greater_IntInt_ReturnValue_2;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.CallFunc_Format_ReturnValue_1 = CallFunc_Format_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (BranchingStatement != nullptr)
		*BranchingStatement = Parms.BranchingStatement;

}


// Function BPFL_QuestUI.BPFL_QuestUI_C.GetQuestDescription
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVAL_QuestState             QuestState                                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UVAL_QuestDef*               QuestDef                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        QuestDescription                                                 (Parm, OutParm)
// struct FVAL_QuestStepDef           CallFunc_GetCurrentQuestStepDefinition_QuestStepDef              (ContainsInstancedReference)
// bool                               CallFunc_GetCurrentQuestStepDefinition_bFoundQuestStep           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_QuestUI_C::GetQuestDescription(struct FVAL_QuestState& QuestState, class UVAL_QuestDef*& QuestDef, class UObject* __WorldContext, class FText* QuestDescription, const struct FVAL_QuestStepDef& CallFunc_GetCurrentQuestStepDefinition_QuestStepDef, bool CallFunc_GetCurrentQuestStepDefinition_bFoundQuestStep)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_QuestUI_C", "GetQuestDescription");

	Params::UBPFL_QuestUI_C_GetQuestDescription_Params Parms{};

	Parms.QuestState = QuestState;
	Parms.QuestDef = QuestDef;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetCurrentQuestStepDefinition_QuestStepDef = CallFunc_GetCurrentQuestStepDefinition_QuestStepDef;
	Parms.CallFunc_GetCurrentQuestStepDefinition_bFoundQuestStep = CallFunc_GetCurrentQuestStepDefinition_bFoundQuestStep;

	UObject::ProcessEvent(Func, &Parms);

	if (QuestDescription != nullptr)
		*QuestDescription = Parms.QuestDescription;

}


// Function BPFL_QuestUI.BPFL_QuestUI_C.GetQuestTitle
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVAL_QuestState             QuestState                                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UVAL_QuestDef*               QuestDef                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        QuestTitle                                                       (Parm, OutParm)
// struct FVAL_QuestStepDef           CallFunc_GetCurrentQuestStepDefinition_QuestStepDef              (ContainsInstancedReference)
// bool                               CallFunc_GetCurrentQuestStepDefinition_bFoundQuestStep           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_QuestUI_C::GetQuestTitle(struct FVAL_QuestState& QuestState, class UVAL_QuestDef*& QuestDef, class UObject* __WorldContext, class FText* QuestTitle, const struct FVAL_QuestStepDef& CallFunc_GetCurrentQuestStepDefinition_QuestStepDef, bool CallFunc_GetCurrentQuestStepDefinition_bFoundQuestStep)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_QuestUI_C", "GetQuestTitle");

	Params::UBPFL_QuestUI_C_GetQuestTitle_Params Parms{};

	Parms.QuestState = QuestState;
	Parms.QuestDef = QuestDef;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetCurrentQuestStepDefinition_QuestStepDef = CallFunc_GetCurrentQuestStepDefinition_QuestStepDef;
	Parms.CallFunc_GetCurrentQuestStepDefinition_bFoundQuestStep = CallFunc_GetCurrentQuestStepDefinition_bFoundQuestStep;

	UObject::ProcessEvent(Func, &Parms);

	if (QuestTitle != nullptr)
		*QuestTitle = Parms.QuestTitle;

}


// Function BPFL_QuestUI.BPFL_QuestUI_C.GetDescriptionFromQuestGoal
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVAL_QuestGoalState         QuestGoalState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FVAL_QuestGoalDef           QuestGoalDef                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        GoalDescriptionText                                              (Parm, OutParm)
// class FText                        GoalDescription                                                  (Edit, BlueprintVisible)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetAutoDescription_outDescription                       (None)
// bool                               CallFunc_GetAutoDescription_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_2                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void UBPFL_QuestUI_C::GetDescriptionFromQuestGoal(struct FVAL_QuestGoalState& QuestGoalState, struct FVAL_QuestGoalDef& QuestGoalDef, class UObject* __WorldContext, class FText* GoalDescriptionText, class FText GoalDescription, bool CallFunc_TextIsEmpty_ReturnValue, class FText CallFunc_GetAutoDescription_outDescription, bool CallFunc_GetAutoDescription_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int64 CallFunc_Conv_IntToInt64_ReturnValue, int64 CallFunc_Conv_IntToInt64_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_QuestUI_C", "GetDescriptionFromQuestGoal");

	Params::UBPFL_QuestUI_C_GetDescriptionFromQuestGoal_Params Parms{};

	Parms.QuestGoalState = QuestGoalState;
	Parms.QuestGoalDef = QuestGoalDef;
	Parms.__WorldContext = __WorldContext;
	Parms.GoalDescription = GoalDescription;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.CallFunc_GetAutoDescription_outDescription = CallFunc_GetAutoDescription_outDescription;
	Parms.CallFunc_GetAutoDescription_ReturnValue = CallFunc_GetAutoDescription_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Conv_IntToInt64_ReturnValue = CallFunc_Conv_IntToInt64_ReturnValue;
	Parms.CallFunc_Conv_IntToInt64_ReturnValue_1 = CallFunc_Conv_IntToInt64_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_2 = K2Node_MakeStruct_FormatArgumentData_2;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (GoalDescriptionText != nullptr)
		*GoalDescriptionText = Parms.GoalDescriptionText;

}

}


