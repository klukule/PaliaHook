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


// Function BPFL_UiHelpers.BPFL_UiHelpers_C.DoesWorldLocationContextMatchCurrentTravelType
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EWorldLocationContext   WorldLocationContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETeleportTravelType     TravelType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               DoesMatch                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_UiHelpers_C::DoesWorldLocationContextMatchCurrentTravelType(enum class EWorldLocationContext WorldLocationContext, enum class ETeleportTravelType TravelType, class UObject* __WorldContext, bool* DoesMatch, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_UiHelpers_C", "DoesWorldLocationContextMatchCurrentTravelType");

	Params::UBPFL_UiHelpers_C_DoesWorldLocationContextMatchCurrentTravelType_Params Parms{};

	Parms.WorldLocationContext = WorldLocationContext;
	Parms.TravelType = TravelType;
	Parms.__WorldContext = __WorldContext;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = CallFunc_EqualEqual_ByteByte_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_3 = CallFunc_EqualEqual_ByteByte_ReturnValue_3;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_4 = CallFunc_EqualEqual_ByteByte_ReturnValue_4;

	UObject::ProcessEvent(Func, &Parms);

	if (DoesMatch != nullptr)
		*DoesMatch = Parms.DoesMatch;

}


// Function BPFL_UiHelpers.BPFL_UiHelpers_C.GetVillagerMarkerTextureForDialogueType
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EDialogueType           DialogueType                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  DeterminedTexture                                                (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_UiHelpers_C::GetVillagerMarkerTextureForDialogueType(enum class EDialogueType DialogueType, class UObject* __WorldContext, class UTexture2D** DeterminedTexture, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_UiHelpers_C", "GetVillagerMarkerTextureForDialogueType");

	Params::UBPFL_UiHelpers_C_GetVillagerMarkerTextureForDialogueType_Params Parms{};

	Parms.DialogueType = DialogueType;
	Parms.__WorldContext = __WorldContext;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (DeterminedTexture != nullptr)
		*DeterminedTexture = Parms.DeterminedTexture;

}


// Function BPFL_UiHelpers.BPFL_UiHelpers_C.GetVillagerMarkerTextureForStatus
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EVillagerMarkerStatus   VillagerMarkerStatus                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  DeterminedTexture                                                (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_UiHelpers_C::GetVillagerMarkerTextureForStatus(enum class EVillagerMarkerStatus VillagerMarkerStatus, class UObject* __WorldContext, class UTexture2D** DeterminedTexture, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_UiHelpers_C", "GetVillagerMarkerTextureForStatus");

	Params::UBPFL_UiHelpers_C_GetVillagerMarkerTextureForStatus_Params Parms{};

	Parms.VillagerMarkerStatus = VillagerMarkerStatus;
	Parms.__WorldContext = __WorldContext;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (DeterminedTexture != nullptr)
		*DeterminedTexture = Parms.DeterminedTexture;

}


// Function BPFL_UiHelpers.BPFL_UiHelpers_C.SetVisibility
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Visibility                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        CallFunc_GetVisibility_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_UiHelpers_C::SetVisibility(class UWidget* Target, enum class ESlateVisibility Visibility, class UObject* __WorldContext, enum class ESlateVisibility CallFunc_GetVisibility_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_UiHelpers_C", "SetVisibility");

	Params::UBPFL_UiHelpers_C_SetVisibility_Params Parms{};

	Parms.Target = Target;
	Parms.Visibility = Visibility;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetVisibility_ReturnValue = CallFunc_GetVisibility_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPFL_UiHelpers.BPFL_UiHelpers_C.GetCostIcon
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FStoreItem                  StoreItem                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                     Context                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Icon                                                             (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EValeriaFuncResult      CallFunc_FindVitalConfigByType_OutResult                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVitalConfig                CallFunc_FindVitalConfigByType_ReturnValue                       ()
// struct FPrimaryAssetId             K2Node_MakeStruct_PrimaryAssetId                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_GetObjectFromPrimaryAssetId_ReturnValue                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCurrencyConfig*             K2Node_DynamicCast_AsCurrency_Config                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_FNameIsNone_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_UiHelpers_C::GetCostIcon(const struct FStoreItem& StoreItem, class UObject* Context, class UObject* __WorldContext, class UTexture2D** Icon, enum class EValeriaFuncResult CallFunc_FindVitalConfigByType_OutResult, const struct FVitalConfig& CallFunc_FindVitalConfigByType_ReturnValue, const struct FPrimaryAssetId& K2Node_MakeStruct_PrimaryAssetId, class UObject* CallFunc_GetObjectFromPrimaryAssetId_ReturnValue, class UCurrencyConfig* K2Node_DynamicCast_AsCurrency_Config, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_FNameIsNone_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_UiHelpers_C", "GetCostIcon");

	Params::UBPFL_UiHelpers_C_GetCostIcon_Params Parms{};

	Parms.StoreItem = StoreItem;
	Parms.Context = Context;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_FindVitalConfigByType_OutResult = CallFunc_FindVitalConfigByType_OutResult;
	Parms.CallFunc_FindVitalConfigByType_ReturnValue = CallFunc_FindVitalConfigByType_ReturnValue;
	Parms.K2Node_MakeStruct_PrimaryAssetId = K2Node_MakeStruct_PrimaryAssetId;
	Parms.CallFunc_GetObjectFromPrimaryAssetId_ReturnValue = CallFunc_GetObjectFromPrimaryAssetId_ReturnValue;
	Parms.K2Node_DynamicCast_AsCurrency_Config = K2Node_DynamicCast_AsCurrency_Config;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_FNameIsNone_ReturnValue = CallFunc_FNameIsNone_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Icon != nullptr)
		*Icon = Parms.Icon;

}


// Function BPFL_UiHelpers.BPFL_UiHelpers_C.IsWithinMap
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                     Location                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWorldMapConfig             WorldMapConfig                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               InsideOf                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_X_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Y_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Z_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_X_2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Y_2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Z_2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_X_3                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Y_3                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Z_3                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_X_4                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Y_4                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Z_4                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_X_5                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Y_5                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Z_5                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue_2                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue_3                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_UiHelpers_C::IsWithinMap(const struct FVector& Location, const struct FWorldMapConfig& WorldMapConfig, class UObject* __WorldContext, bool* InsideOf, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, double CallFunc_BreakVector_X_1, double CallFunc_BreakVector_Y_1, double CallFunc_BreakVector_Z_1, bool CallFunc_Not_PreBool_ReturnValue, double CallFunc_BreakVector_X_2, double CallFunc_BreakVector_Y_2, double CallFunc_BreakVector_Z_2, double CallFunc_BreakVector_X_3, double CallFunc_BreakVector_Y_3, double CallFunc_BreakVector_Z_3, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue_1, double CallFunc_BreakVector_X_4, double CallFunc_BreakVector_Y_4, double CallFunc_BreakVector_Z_4, double CallFunc_BreakVector_X_5, double CallFunc_BreakVector_Y_5, double CallFunc_BreakVector_Z_5, bool CallFunc_LessEqual_DoubleDouble_ReturnValue_2, bool CallFunc_LessEqual_DoubleDouble_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_UiHelpers_C", "IsWithinMap");

	Params::UBPFL_UiHelpers_C_IsWithinMap_Params Parms{};

	Parms.Location = Location;
	Parms.WorldMapConfig = WorldMapConfig;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_BreakVector_X_1 = CallFunc_BreakVector_X_1;
	Parms.CallFunc_BreakVector_Y_1 = CallFunc_BreakVector_Y_1;
	Parms.CallFunc_BreakVector_Z_1 = CallFunc_BreakVector_Z_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BreakVector_X_2 = CallFunc_BreakVector_X_2;
	Parms.CallFunc_BreakVector_Y_2 = CallFunc_BreakVector_Y_2;
	Parms.CallFunc_BreakVector_Z_2 = CallFunc_BreakVector_Z_2;
	Parms.CallFunc_BreakVector_X_3 = CallFunc_BreakVector_X_3;
	Parms.CallFunc_BreakVector_Y_3 = CallFunc_BreakVector_Y_3;
	Parms.CallFunc_BreakVector_Z_3 = CallFunc_BreakVector_Z_3;
	Parms.CallFunc_LessEqual_DoubleDouble_ReturnValue = CallFunc_LessEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_LessEqual_DoubleDouble_ReturnValue_1 = CallFunc_LessEqual_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_BreakVector_X_4 = CallFunc_BreakVector_X_4;
	Parms.CallFunc_BreakVector_Y_4 = CallFunc_BreakVector_Y_4;
	Parms.CallFunc_BreakVector_Z_4 = CallFunc_BreakVector_Z_4;
	Parms.CallFunc_BreakVector_X_5 = CallFunc_BreakVector_X_5;
	Parms.CallFunc_BreakVector_Y_5 = CallFunc_BreakVector_Y_5;
	Parms.CallFunc_BreakVector_Z_5 = CallFunc_BreakVector_Z_5;
	Parms.CallFunc_LessEqual_DoubleDouble_ReturnValue_2 = CallFunc_LessEqual_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_LessEqual_DoubleDouble_ReturnValue_3 = CallFunc_LessEqual_DoubleDouble_ReturnValue_3;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (InsideOf != nullptr)
		*InsideOf = Parms.InsideOf;

}


// Function BPFL_UiHelpers.BPFL_UiHelpers_C.SortUniformGridPanelByVisibility
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUniformGridPanel*           UniformGridPanel                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              ColumnSize                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUniformGridSlot*            LocalGridSlot                                                    (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     LocalWidgetVar                                                   (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              LocalNumVisibleChildren                                          (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetChildrenCount_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        CallFunc_GetVisibility_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Divide_IntInt_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Percent_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUniformGridSlot*            CallFunc_SlotAsUniformGridSlot_ReturnValue                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UBPFL_UiHelpers_C::SortUniformGridPanelByVisibility(class UUniformGridPanel* UniformGridPanel, int32 ColumnSize, class UObject* __WorldContext, class UUniformGridSlot* LocalGridSlot, class UWidget* LocalWidgetVar, int32 LocalNumVisibleChildren, int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, enum class ESlateVisibility CallFunc_GetVisibility_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Divide_IntInt_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue, int32 Temp_int_Variable, int32 Temp_int_Variable_1, class UWidget* CallFunc_GetChildAt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, class UUniformGridSlot* CallFunc_SlotAsUniformGridSlot_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_UiHelpers_C", "SortUniformGridPanelByVisibility");

	Params::UBPFL_UiHelpers_C_SortUniformGridPanelByVisibility_Params Parms{};

	Parms.UniformGridPanel = UniformGridPanel;
	Parms.ColumnSize = ColumnSize;
	Parms.__WorldContext = __WorldContext;
	Parms.LocalGridSlot = LocalGridSlot;
	Parms.LocalWidgetVar = LocalWidgetVar;
	Parms.LocalNumVisibleChildren = LocalNumVisibleChildren;
	Parms.CallFunc_GetChildrenCount_ReturnValue = CallFunc_GetChildrenCount_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_GetVisibility_ReturnValue = CallFunc_GetVisibility_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Divide_IntInt_ReturnValue = CallFunc_Divide_IntInt_ReturnValue;
	Parms.CallFunc_Percent_IntInt_ReturnValue = CallFunc_Percent_IntInt_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_SlotAsUniformGridSlot_ReturnValue = CallFunc_SlotAsUniformGridSlot_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPFL_UiHelpers.BPFL_UiHelpers_C.Get World Map by Player Position
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FWorldMapConfig             WorldMapConfig                                                   (Parm, OutParm)
// bool                               Found                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetCurrentLevelName_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FConfigsManager             CallFunc_GetConfigsManager_ConfigsManager                        ()
// bool                               CallFunc_GetConfigsManager_IsValid                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWorldMapConfig             CallFunc_Array_Get_Item                                          ()
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsWithinMap_InsideOf                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Contains_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_UiHelpers_C::Get_World_Map_by_Player_Position(class UObject* __WorldContext, struct FWorldMapConfig* WorldMapConfig, bool* Found, int32 Temp_int_Array_Index_Variable, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, const class FString& CallFunc_GetCurrentLevelName_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, int32 Temp_int_Loop_Counter_Variable, const struct FConfigsManager& CallFunc_GetConfigsManager_ConfigsManager, bool CallFunc_GetConfigsManager_IsValid, int32 CallFunc_Add_IntInt_ReturnValue, const struct FWorldMapConfig& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsWithinMap_InsideOf, bool CallFunc_Contains_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_UiHelpers_C", "Get World Map by Player Position");

	Params::UBPFL_UiHelpers_C_Get_World_Map_by_Player_Position_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_GetCurrentLevelName_ReturnValue = CallFunc_GetCurrentLevelName_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_GetConfigsManager_ConfigsManager = CallFunc_GetConfigsManager_ConfigsManager;
	Parms.CallFunc_GetConfigsManager_IsValid = CallFunc_GetConfigsManager_IsValid;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_IsWithinMap_InsideOf = CallFunc_IsWithinMap_InsideOf;
	Parms.CallFunc_Contains_ReturnValue = CallFunc_Contains_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (WorldMapConfig != nullptr)
		*WorldMapConfig = Parms.WorldMapConfig;

	if (Found != nullptr)
		*Found = Parms.Found;

}


// Function BPFL_UiHelpers.BPFL_UiHelpers_C.GetConfigsManager
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FConfigsManager             ConfigsManager                                                   (Parm, OutParm)
// bool                               IsValid                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UValeriaGameInstance*        K2Node_DynamicCast_AsValeria_Game_Instance                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FConfigsManager             CallFunc_GetConfigsManager_ReturnValue                           (ConstParm)

void UBPFL_UiHelpers_C::GetConfigsManager(class UObject* __WorldContext, struct FConfigsManager* ConfigsManager, bool* IsValid, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UValeriaGameInstance* K2Node_DynamicCast_AsValeria_Game_Instance, bool K2Node_DynamicCast_bSuccess, const struct FConfigsManager& CallFunc_GetConfigsManager_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_UiHelpers_C", "GetConfigsManager");

	Params::UBPFL_UiHelpers_C_GetConfigsManager_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsValeria_Game_Instance = K2Node_DynamicCast_AsValeria_Game_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetConfigsManager_ReturnValue = CallFunc_GetConfigsManager_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ConfigsManager != nullptr)
		*ConfigsManager = Parms.ConfigsManager;

	if (IsValid != nullptr)
		*IsValid = Parms.IsValid;

}


// Function BPFL_UiHelpers.BPFL_UiHelpers_C.AreCheatsEnabled
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     Context                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValeriaCharacter*           CharacterCached                                                  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// enum class EValeriaFuncResult      CallFunc_GetValeriaCharacter_OutResult                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValeriaCharacter*           CallFunc_GetValeriaCharacter_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDebugInfoComponent*         CallFunc_GetDebugInfoComponent_ReturnValue                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AreCheatsEnabled_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_UiHelpers_C::AreCheatsEnabled(class UObject* Context, class UObject* __WorldContext, bool* Result, class AValeriaCharacter* CharacterCached, enum class EValeriaFuncResult CallFunc_GetValeriaCharacter_OutResult, class AValeriaCharacter* CallFunc_GetValeriaCharacter_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UDebugInfoComponent* CallFunc_GetDebugInfoComponent_ReturnValue, bool CallFunc_AreCheatsEnabled_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_UiHelpers_C", "AreCheatsEnabled");

	Params::UBPFL_UiHelpers_C_AreCheatsEnabled_Params Parms{};

	Parms.Context = Context;
	Parms.__WorldContext = __WorldContext;
	Parms.CharacterCached = CharacterCached;
	Parms.CallFunc_GetValeriaCharacter_OutResult = CallFunc_GetValeriaCharacter_OutResult;
	Parms.CallFunc_GetValeriaCharacter_ReturnValue = CallFunc_GetValeriaCharacter_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetDebugInfoComponent_ReturnValue = CallFunc_GetDebugInfoComponent_ReturnValue;
	Parms.CallFunc_AreCheatsEnabled_ReturnValue = CallFunc_AreCheatsEnabled_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BPFL_UiHelpers.BPFL_UiHelpers_C.GetItemStorageCategoryIcon
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EItemStorageCategory    Category                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Name                                                             (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EItemStorageCategory    Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_1                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_2                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_3                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_4                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_5                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_6                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_7                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_8                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_9                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_10                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_11                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_12                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable_13                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_Select_Default                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBPFL_UiHelpers_C::GetItemStorageCategoryIcon(enum class EItemStorageCategory Category, class UObject* __WorldContext, class UTexture2D** Name, enum class EItemStorageCategory Temp_byte_Variable, class UTexture2D* Temp_object_Variable, class UTexture2D* Temp_object_Variable_1, class UTexture2D* Temp_object_Variable_2, class UTexture2D* Temp_object_Variable_3, class UTexture2D* Temp_object_Variable_4, class UTexture2D* Temp_object_Variable_5, class UTexture2D* Temp_object_Variable_6, class UTexture2D* Temp_object_Variable_7, class UTexture2D* Temp_object_Variable_8, class UTexture2D* Temp_object_Variable_9, class UTexture2D* Temp_object_Variable_10, class UTexture2D* Temp_object_Variable_11, class UTexture2D* Temp_object_Variable_12, class UTexture2D* Temp_object_Variable_13, class UTexture2D* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_UiHelpers_C", "GetItemStorageCategoryIcon");

	Params::UBPFL_UiHelpers_C_GetItemStorageCategoryIcon_Params Parms{};

	Parms.Category = Category;
	Parms.__WorldContext = __WorldContext;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.Temp_object_Variable_2 = Temp_object_Variable_2;
	Parms.Temp_object_Variable_3 = Temp_object_Variable_3;
	Parms.Temp_object_Variable_4 = Temp_object_Variable_4;
	Parms.Temp_object_Variable_5 = Temp_object_Variable_5;
	Parms.Temp_object_Variable_6 = Temp_object_Variable_6;
	Parms.Temp_object_Variable_7 = Temp_object_Variable_7;
	Parms.Temp_object_Variable_8 = Temp_object_Variable_8;
	Parms.Temp_object_Variable_9 = Temp_object_Variable_9;
	Parms.Temp_object_Variable_10 = Temp_object_Variable_10;
	Parms.Temp_object_Variable_11 = Temp_object_Variable_11;
	Parms.Temp_object_Variable_12 = Temp_object_Variable_12;
	Parms.Temp_object_Variable_13 = Temp_object_Variable_13;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (Name != nullptr)
		*Name = Parms.Name;

}


// Function BPFL_UiHelpers.BPFL_UiHelpers_C.GetItemQualityName
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EItemQuality            ItemQuality                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        Name                                                             (Parm, OutParm)
// enum class EItemQuality            Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               ()
// class FText                        Temp_text_Variable_1                                             ()
// class FText                        Temp_text_Variable_2                                             ()
// class FText                        Temp_text_Variable_3                                             ()
// class FText                        Temp_text_Variable_4                                             ()
// class FText                        Temp_text_Variable_5                                             ()
// class FText                        Temp_text_Variable_6                                             ()
// class FText                        K2Node_Select_Default                                            ()

void UBPFL_UiHelpers_C::GetItemQualityName(enum class EItemQuality ItemQuality, class UObject* __WorldContext, class FText* Name, enum class EItemQuality Temp_byte_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, class FText Temp_text_Variable_4, class FText Temp_text_Variable_5, class FText Temp_text_Variable_6, class FText K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_UiHelpers_C", "GetItemQualityName");

	Params::UBPFL_UiHelpers_C_GetItemQualityName_Params Parms{};

	Parms.ItemQuality = ItemQuality;
	Parms.__WorldContext = __WorldContext;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_text_Variable_2 = Temp_text_Variable_2;
	Parms.Temp_text_Variable_3 = Temp_text_Variable_3;
	Parms.Temp_text_Variable_4 = Temp_text_Variable_4;
	Parms.Temp_text_Variable_5 = Temp_text_Variable_5;
	Parms.Temp_text_Variable_6 = Temp_text_Variable_6;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (Name != nullptr)
		*Name = Parms.Name;

}


// Function BPFL_UiHelpers.BPFL_UiHelpers_C.GetItemQualityColor
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EItemQuality            ItemQuality                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Color                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EItemQuality            Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_3                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_4                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_5                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_6                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_UiHelpers_C::GetItemQualityColor(enum class EItemQuality ItemQuality, class UObject* __WorldContext, struct FLinearColor* Color, enum class EItemQuality Temp_byte_Variable, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable_1, const struct FLinearColor& Temp_struct_Variable_2, const struct FLinearColor& Temp_struct_Variable_3, const struct FLinearColor& Temp_struct_Variable_4, const struct FLinearColor& Temp_struct_Variable_5, const struct FLinearColor& Temp_struct_Variable_6, const struct FLinearColor& K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_UiHelpers_C", "GetItemQualityColor");

	Params::UBPFL_UiHelpers_C_GetItemQualityColor_Params Parms{};

	Parms.ItemQuality = ItemQuality;
	Parms.__WorldContext = __WorldContext;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.Temp_struct_Variable_2 = Temp_struct_Variable_2;
	Parms.Temp_struct_Variable_3 = Temp_struct_Variable_3;
	Parms.Temp_struct_Variable_4 = Temp_struct_Variable_4;
	Parms.Temp_struct_Variable_5 = Temp_struct_Variable_5;
	Parms.Temp_struct_Variable_6 = Temp_struct_Variable_6;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (Color != nullptr)
		*Color = Parms.Color;

}


// Function BPFL_UiHelpers.BPFL_UiHelpers_C.GetItemRarityName
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EItemRarity             ItemRarity                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        Name                                                             (Parm, OutParm)
// enum class EItemRarity             Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               ()
// class FText                        Temp_text_Variable_1                                             ()
// class FText                        Temp_text_Variable_2                                             ()
// class FText                        Temp_text_Variable_3                                             ()
// class FText                        Temp_text_Variable_4                                             ()
// class FText                        Temp_text_Variable_5                                             ()
// class FText                        Temp_text_Variable_6                                             ()
// class FText                        K2Node_Select_Default                                            ()

void UBPFL_UiHelpers_C::GetItemRarityName(enum class EItemRarity ItemRarity, class UObject* __WorldContext, class FText* Name, enum class EItemRarity Temp_byte_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, class FText Temp_text_Variable_4, class FText Temp_text_Variable_5, class FText Temp_text_Variable_6, class FText K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_UiHelpers_C", "GetItemRarityName");

	Params::UBPFL_UiHelpers_C_GetItemRarityName_Params Parms{};

	Parms.ItemRarity = ItemRarity;
	Parms.__WorldContext = __WorldContext;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_text_Variable_2 = Temp_text_Variable_2;
	Parms.Temp_text_Variable_3 = Temp_text_Variable_3;
	Parms.Temp_text_Variable_4 = Temp_text_Variable_4;
	Parms.Temp_text_Variable_5 = Temp_text_Variable_5;
	Parms.Temp_text_Variable_6 = Temp_text_Variable_6;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (Name != nullptr)
		*Name = Parms.Name;

}


// Function BPFL_UiHelpers.BPFL_UiHelpers_C.GetItemRarityColor
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EItemRarity             ItemRarity                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Color                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EItemRarity             Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_3                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_4                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_5                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_6                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_UiHelpers_C::GetItemRarityColor(enum class EItemRarity ItemRarity, class UObject* __WorldContext, struct FLinearColor* Color, enum class EItemRarity Temp_byte_Variable, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable_1, const struct FLinearColor& Temp_struct_Variable_2, const struct FLinearColor& Temp_struct_Variable_3, const struct FLinearColor& Temp_struct_Variable_4, const struct FLinearColor& Temp_struct_Variable_5, const struct FLinearColor& Temp_struct_Variable_6, const struct FLinearColor& K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_UiHelpers_C", "GetItemRarityColor");

	Params::UBPFL_UiHelpers_C_GetItemRarityColor_Params Parms{};

	Parms.ItemRarity = ItemRarity;
	Parms.__WorldContext = __WorldContext;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.Temp_struct_Variable_2 = Temp_struct_Variable_2;
	Parms.Temp_struct_Variable_3 = Temp_struct_Variable_3;
	Parms.Temp_struct_Variable_4 = Temp_struct_Variable_4;
	Parms.Temp_struct_Variable_5 = Temp_struct_Variable_5;
	Parms.Temp_struct_Variable_6 = Temp_struct_Variable_6;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (Color != nullptr)
		*Color = Parms.Color;

}


// Function BPFL_UiHelpers.BPFL_UiHelpers_C.GetCurrentDay
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CurrentDay                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsValid                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UValeriaTimeManager*         CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UValeriaTimeManager*         CallFunc_GetGameInstanceSubsystem_ReturnValue_1                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValeriaTimeValid_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCurrentDay_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_UiHelpers_C::GetCurrentDay(class UObject* __WorldContext, int32* CurrentDay, bool* IsValid, class UValeriaTimeManager* CallFunc_GetGameInstanceSubsystem_ReturnValue, class UValeriaTimeManager* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, bool CallFunc_IsValeriaTimeValid_ReturnValue, int32 CallFunc_GetCurrentDay_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_UiHelpers_C", "GetCurrentDay");

	Params::UBPFL_UiHelpers_C_GetCurrentDay_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_1 = CallFunc_GetGameInstanceSubsystem_ReturnValue_1;
	Parms.CallFunc_IsValeriaTimeValid_ReturnValue = CallFunc_IsValeriaTimeValid_ReturnValue;
	Parms.CallFunc_GetCurrentDay_ReturnValue = CallFunc_GetCurrentDay_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CurrentDay != nullptr)
		*CurrentDay = Parms.CurrentDay;

	if (IsValid != nullptr)
		*IsValid = Parms.IsValid;

}


// Function BPFL_UiHelpers.BPFL_UiHelpers_C.CanItemBeRequested?
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TSoftObjectPtr<class UVAL_ItemTypeDefinitionAsset>ItemType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               IsRequestable_                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_LoadAsset_Blocking_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UVAL_ItemTypeDefinitionAsset*K2Node_DynamicCast_AsItem_Type_Definition                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_UiHelpers_C::CanItemBeRequested_(TSoftObjectPtr<class UVAL_ItemTypeDefinitionAsset> ItemType, class UObject* __WorldContext, bool* IsRequestable_, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, class UVAL_ItemTypeDefinitionAsset* K2Node_DynamicCast_AsItem_Type_Definition, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_UiHelpers_C", "CanItemBeRequested?");

	Params::UBPFL_UiHelpers_C_CanItemBeRequested__Params Parms{};

	Parms.ItemType = ItemType;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_LoadAsset_Blocking_ReturnValue = CallFunc_LoadAsset_Blocking_ReturnValue;
	Parms.K2Node_DynamicCast_AsItem_Type_Definition = K2Node_DynamicCast_AsItem_Type_Definition;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsRequestable_ != nullptr)
		*IsRequestable_ = Parms.IsRequestable_;

}


// Function BPFL_UiHelpers.BPFL_UiHelpers_C.GetItemStorageCategoryName
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EItemStorageCategory    Category                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        Name                                                             (Parm, OutParm)
// enum class EItemStorageCategory    Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               ()
// class FText                        Temp_text_Variable_1                                             ()
// class FText                        Temp_text_Variable_2                                             ()
// class FText                        Temp_text_Variable_3                                             ()
// class FText                        Temp_text_Variable_4                                             ()
// class FText                        Temp_text_Variable_5                                             ()
// class FText                        Temp_text_Variable_6                                             ()
// class FText                        Temp_text_Variable_7                                             ()
// class FText                        Temp_text_Variable_8                                             ()
// class FText                        Temp_text_Variable_9                                             ()
// class FText                        Temp_text_Variable_10                                            ()
// class FText                        Temp_text_Variable_11                                            ()
// class FText                        Temp_text_Variable_12                                            ()
// class FText                        Temp_text_Variable_13                                            ()
// class FText                        K2Node_Select_Default                                            ()

void UBPFL_UiHelpers_C::GetItemStorageCategoryName(enum class EItemStorageCategory Category, class UObject* __WorldContext, class FText* Name, enum class EItemStorageCategory Temp_byte_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, class FText Temp_text_Variable_4, class FText Temp_text_Variable_5, class FText Temp_text_Variable_6, class FText Temp_text_Variable_7, class FText Temp_text_Variable_8, class FText Temp_text_Variable_9, class FText Temp_text_Variable_10, class FText Temp_text_Variable_11, class FText Temp_text_Variable_12, class FText Temp_text_Variable_13, class FText K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_UiHelpers_C", "GetItemStorageCategoryName");

	Params::UBPFL_UiHelpers_C_GetItemStorageCategoryName_Params Parms{};

	Parms.Category = Category;
	Parms.__WorldContext = __WorldContext;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_text_Variable_2 = Temp_text_Variable_2;
	Parms.Temp_text_Variable_3 = Temp_text_Variable_3;
	Parms.Temp_text_Variable_4 = Temp_text_Variable_4;
	Parms.Temp_text_Variable_5 = Temp_text_Variable_5;
	Parms.Temp_text_Variable_6 = Temp_text_Variable_6;
	Parms.Temp_text_Variable_7 = Temp_text_Variable_7;
	Parms.Temp_text_Variable_8 = Temp_text_Variable_8;
	Parms.Temp_text_Variable_9 = Temp_text_Variable_9;
	Parms.Temp_text_Variable_10 = Temp_text_Variable_10;
	Parms.Temp_text_Variable_11 = Temp_text_Variable_11;
	Parms.Temp_text_Variable_12 = Temp_text_Variable_12;
	Parms.Temp_text_Variable_13 = Temp_text_Variable_13;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (Name != nullptr)
		*Name = Parms.Name;

}


// Function BPFL_UiHelpers.BPFL_UiHelpers_C.CheckTimePassed
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             TimePassed                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Period                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             NewTimePassed                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               HasPassed                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             TmpTimePassed                                                    (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_DoubleDouble_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_UiHelpers_C::CheckTimePassed(double TimePassed, double DeltaTime, double Period, class UObject* __WorldContext, double* NewTimePassed, bool* HasPassed, double TmpTimePassed, double CallFunc_Add_DoubleDouble_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_UiHelpers_C", "CheckTimePassed");

	Params::UBPFL_UiHelpers_C_CheckTimePassed_Params Parms{};

	Parms.TimePassed = TimePassed;
	Parms.DeltaTime = DeltaTime;
	Parms.Period = Period;
	Parms.__WorldContext = __WorldContext;
	Parms.TmpTimePassed = TmpTimePassed;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue = CallFunc_GreaterEqual_DoubleDouble_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (NewTimePassed != nullptr)
		*NewTimePassed = Parms.NewTimePassed;

	if (HasPassed != nullptr)
		*HasPassed = Parms.HasPassed;

}


// Function BPFL_UiHelpers.BPFL_UiHelpers_C.WorldPositionToUiPosition
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                     WorldPosition                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBox2D                      WorldBounds                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   UiSize                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EWorldToUiScaling       Scaling                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   UiPosition                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   TmpWorldHalfExtents                                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   TmpWorldCenter                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EWorldToUiScaling       Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Multiply_Vector2DFloat_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Subtract_Vector2DVector2D_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Conv_VectorToVector2D_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Divide_Vector2DFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Add_Vector2DVector2D_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Subtract_Vector2DVector2D_ReturnValue_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Divide_Vector2DVector2D_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Multiply_Vector2DVector2D_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_UiHelpers_C::WorldPositionToUiPosition(const struct FVector& WorldPosition, const struct FBox2D& WorldBounds, const struct FVector2D& UiSize, enum class EWorldToUiScaling Scaling, class UObject* __WorldContext, struct FVector2D* UiPosition, const struct FVector2D& TmpWorldHalfExtents, const struct FVector2D& TmpWorldCenter, enum class EWorldToUiScaling Temp_byte_Variable, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_2, const struct FVector2D& K2Node_Select_Default, const struct FVector2D& CallFunc_Multiply_Vector2DFloat_ReturnValue, const struct FVector2D& CallFunc_Subtract_Vector2DVector2D_ReturnValue, const struct FVector2D& CallFunc_Conv_VectorToVector2D_ReturnValue, const struct FVector2D& CallFunc_Divide_Vector2DFloat_ReturnValue, const struct FVector2D& CallFunc_Add_Vector2DVector2D_ReturnValue, const struct FVector2D& CallFunc_Subtract_Vector2DVector2D_ReturnValue_1, const struct FVector2D& CallFunc_Divide_Vector2DVector2D_ReturnValue, const struct FVector2D& CallFunc_Multiply_Vector2DVector2D_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_UiHelpers_C", "WorldPositionToUiPosition");

	Params::UBPFL_UiHelpers_C_WorldPositionToUiPosition_Params Parms{};

	Parms.WorldPosition = WorldPosition;
	Parms.WorldBounds = WorldBounds;
	Parms.UiSize = UiSize;
	Parms.Scaling = Scaling;
	Parms.__WorldContext = __WorldContext;
	Parms.TmpWorldHalfExtents = TmpWorldHalfExtents;
	Parms.TmpWorldCenter = TmpWorldCenter;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.CallFunc_MakeVector2D_ReturnValue_1 = CallFunc_MakeVector2D_ReturnValue_1;
	Parms.CallFunc_MakeVector2D_ReturnValue_2 = CallFunc_MakeVector2D_ReturnValue_2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Multiply_Vector2DFloat_ReturnValue = CallFunc_Multiply_Vector2DFloat_ReturnValue;
	Parms.CallFunc_Subtract_Vector2DVector2D_ReturnValue = CallFunc_Subtract_Vector2DVector2D_ReturnValue;
	Parms.CallFunc_Conv_VectorToVector2D_ReturnValue = CallFunc_Conv_VectorToVector2D_ReturnValue;
	Parms.CallFunc_Divide_Vector2DFloat_ReturnValue = CallFunc_Divide_Vector2DFloat_ReturnValue;
	Parms.CallFunc_Add_Vector2DVector2D_ReturnValue = CallFunc_Add_Vector2DVector2D_ReturnValue;
	Parms.CallFunc_Subtract_Vector2DVector2D_ReturnValue_1 = CallFunc_Subtract_Vector2DVector2D_ReturnValue_1;
	Parms.CallFunc_Divide_Vector2DVector2D_ReturnValue = CallFunc_Divide_Vector2DVector2D_ReturnValue;
	Parms.CallFunc_Multiply_Vector2DVector2D_ReturnValue = CallFunc_Multiply_Vector2DVector2D_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (UiPosition != nullptr)
		*UiPosition = Parms.UiPosition;

}


// Function BPFL_UiHelpers.BPFL_UiHelpers_C.IsAlmostBurnt?
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UCrafterComponent*           Crafter                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               IsAlmostBurnt                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetTimeRemainingTillBurntMs_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_InRange_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECrafterState           CallFunc_GetCrafterState_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECrafterState           Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_UiHelpers_C::IsAlmostBurnt_(class UCrafterComponent* Crafter, class UObject* __WorldContext, bool* IsAlmostBurnt, bool Temp_bool_Variable, int32 CallFunc_GetTimeRemainingTillBurntMs_ReturnValue, bool CallFunc_InRange_IntInt_ReturnValue, enum class ECrafterState CallFunc_GetCrafterState_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, bool Temp_bool_Variable_4, enum class ECrafterState Temp_byte_Variable, bool K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_UiHelpers_C", "IsAlmostBurnt?");

	Params::UBPFL_UiHelpers_C_IsAlmostBurnt__Params Parms{};

	Parms.Crafter = Crafter;
	Parms.__WorldContext = __WorldContext;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetTimeRemainingTillBurntMs_ReturnValue = CallFunc_GetTimeRemainingTillBurntMs_ReturnValue;
	Parms.CallFunc_InRange_IntInt_ReturnValue = CallFunc_InRange_IntInt_ReturnValue;
	Parms.CallFunc_GetCrafterState_ReturnValue = CallFunc_GetCrafterState_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.Temp_bool_Variable_4 = Temp_bool_Variable_4;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (IsAlmostBurnt != nullptr)
		*IsAlmostBurnt = Parms.IsAlmostBurnt;

}


// Function BPFL_UiHelpers.BPFL_UiHelpers_C.GetGwgTriplesTeamColor
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               GoodGuys                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Color                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_UiHelpers_C::GetGwgTriplesTeamColor(bool GoodGuys, class UObject* __WorldContext, struct FLinearColor* Color, bool Temp_bool_Variable, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable_1, const struct FLinearColor& K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_UiHelpers_C", "GetGwgTriplesTeamColor");

	Params::UBPFL_UiHelpers_C_GetGwgTriplesTeamColor_Params Parms{};

	Parms.GoodGuys = GoodGuys;
	Parms.__WorldContext = __WorldContext;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (Color != nullptr)
		*Color = Parms.Color;

}


// Function BPFL_UiHelpers.BPFL_UiHelpers_C.IsDebuggingOn?
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     Context                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               IsDebuggingOn                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UValeriaGameInstance*        K2Node_DynamicCast_AsValeria_Game_Instance                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDebuggingOn_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_UiHelpers_C::IsDebuggingOn_(class UObject* Context, class UObject* __WorldContext, bool* IsDebuggingOn, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UValeriaGameInstance* K2Node_DynamicCast_AsValeria_Game_Instance, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsDebuggingOn_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_UiHelpers_C", "IsDebuggingOn?");

	Params::UBPFL_UiHelpers_C_IsDebuggingOn__Params Parms{};

	Parms.Context = Context;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsValeria_Game_Instance = K2Node_DynamicCast_AsValeria_Game_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsDebuggingOn_ReturnValue = CallFunc_IsDebuggingOn_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsDebuggingOn != nullptr)
		*IsDebuggingOn = Parms.IsDebuggingOn;

}


// Function BPFL_UiHelpers.BPFL_UiHelpers_C.FormatClockTimInValeriaDHM
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FClockTimeInValeria         Time                                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      Result                                                           (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_FormatClockTimeInValeria_Result                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)

void UBPFL_UiHelpers_C::FormatClockTimInValeriaDHM(const struct FClockTimeInValeria& Time, class UObject* __WorldContext, class FString* Result, const class FString& CallFunc_FormatClockTimeInValeria_Result, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_UiHelpers_C", "FormatClockTimInValeriaDHM");

	Params::UBPFL_UiHelpers_C_FormatClockTimInValeriaDHM_Params Parms{};

	Parms.Time = Time;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_FormatClockTimeInValeria_Result = CallFunc_FormatClockTimeInValeria_Result;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BPFL_UiHelpers.BPFL_UiHelpers_C.FormatClockTimeInValeria
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FClockTimeInValeria         Time                                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      Result                                                           (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable                                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Percent_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_1                                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_1                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_2                                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_3                                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_Select_Default_1                                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_Select_Default_2                                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (ZeroConstructor, HasGetValueTypeHash)

void UBPFL_UiHelpers_C::FormatClockTimeInValeria(const struct FClockTimeInValeria& Time, class UObject* __WorldContext, class FString* Result, const class FString& Temp_string_Variable, bool CallFunc_GreaterEqual_IntInt_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue_1, int32 CallFunc_Percent_IntInt_ReturnValue, const class FString& Temp_string_Variable_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool Temp_bool_Variable, int32 Temp_int_Variable, bool Temp_bool_Variable_1, int32 K2Node_Select_Default, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, const class FString& Temp_string_Variable_2, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& Temp_string_Variable_3, bool Temp_bool_Variable_2, const class FString& K2Node_Select_Default_1, const class FString& K2Node_Select_Default_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_UiHelpers_C", "FormatClockTimeInValeria");

	Params::UBPFL_UiHelpers_C_FormatClockTimeInValeria_Params Parms{};

	Parms.Time = Time;
	Parms.__WorldContext = __WorldContext;
	Parms.Temp_string_Variable = Temp_string_Variable;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue_1 = CallFunc_GreaterEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_Percent_IntInt_ReturnValue = CallFunc_Percent_IntInt_ReturnValue;
	Parms.Temp_string_Variable_1 = Temp_string_Variable_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Conv_IntToString_ReturnValue_1 = CallFunc_Conv_IntToString_ReturnValue_1;
	Parms.Temp_string_Variable_2 = Temp_string_Variable_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.Temp_string_Variable_3 = Temp_string_Variable_3;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = CallFunc_Concat_StrStr_ReturnValue_4;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BPFL_UiHelpers.BPFL_UiHelpers_C.GetTimeOfDayLerp
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     Context                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             TimeOfDayLerp                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsValid                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UValeriaTimeManager*         CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UValeriaTimeManager*         CallFunc_GetGameInstanceSubsystem_ReturnValue_1                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetTimeOfDayLerp_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValeriaTimeValid_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_FunctionResult_TimeOfDayLerp_ImplicitCast                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_UiHelpers_C::GetTimeOfDayLerp(class UObject* Context, class UObject* __WorldContext, double* TimeOfDayLerp, bool* IsValid, class UValeriaTimeManager* CallFunc_GetGameInstanceSubsystem_ReturnValue, class UValeriaTimeManager* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, float CallFunc_GetTimeOfDayLerp_ReturnValue, bool CallFunc_IsValeriaTimeValid_ReturnValue, double K2Node_FunctionResult_TimeOfDayLerp_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_UiHelpers_C", "GetTimeOfDayLerp");

	Params::UBPFL_UiHelpers_C_GetTimeOfDayLerp_Params Parms{};

	Parms.Context = Context;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_1 = CallFunc_GetGameInstanceSubsystem_ReturnValue_1;
	Parms.CallFunc_GetTimeOfDayLerp_ReturnValue = CallFunc_GetTimeOfDayLerp_ReturnValue;
	Parms.CallFunc_IsValeriaTimeValid_ReturnValue = CallFunc_IsValeriaTimeValid_ReturnValue;
	Parms.K2Node_FunctionResult_TimeOfDayLerp_ImplicitCast = K2Node_FunctionResult_TimeOfDayLerp_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (TimeOfDayLerp != nullptr)
		*TimeOfDayLerp = Parms.TimeOfDayLerp;

	if (IsValid != nullptr)
		*IsValid = Parms.IsValid;

}


// Function BPFL_UiHelpers.BPFL_UiHelpers_C.GetItemCategoryName
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EItemCategory           ItemCategory                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        Name                                                             (Parm, OutParm)
// enum class EItemCategory           Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               ()
// class FText                        Temp_text_Variable_1                                             ()
// class FText                        Temp_text_Variable_2                                             ()
// class FText                        Temp_text_Variable_3                                             ()
// class FText                        Temp_text_Variable_4                                             ()
// class FText                        Temp_text_Variable_5                                             ()
// class FText                        Temp_text_Variable_6                                             ()
// class FText                        Temp_text_Variable_7                                             ()
// class FText                        Temp_text_Variable_8                                             ()
// class FText                        Temp_text_Variable_9                                             ()
// class FText                        Temp_text_Variable_10                                            ()
// class FText                        Temp_text_Variable_11                                            ()
// class FText                        Temp_text_Variable_12                                            ()
// class FText                        Temp_text_Variable_13                                            ()
// class FText                        Temp_text_Variable_14                                            ()
// class FText                        Temp_text_Variable_15                                            ()
// class FText                        Temp_text_Variable_16                                            ()
// class FText                        Temp_text_Variable_17                                            ()
// class FText                        Temp_text_Variable_18                                            ()
// class FText                        Temp_text_Variable_19                                            ()
// class FText                        Temp_text_Variable_20                                            ()
// class FText                        Temp_text_Variable_21                                            ()
// class FText                        Temp_text_Variable_22                                            ()
// class FText                        Temp_text_Variable_23                                            ()
// class FText                        Temp_text_Variable_24                                            ()
// class FText                        Temp_text_Variable_25                                            ()
// class FText                        Temp_text_Variable_26                                            ()
// class FText                        K2Node_Select_Default                                            ()

void UBPFL_UiHelpers_C::GetItemCategoryName(enum class EItemCategory ItemCategory, class UObject* __WorldContext, class FText* Name, enum class EItemCategory Temp_byte_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, class FText Temp_text_Variable_4, class FText Temp_text_Variable_5, class FText Temp_text_Variable_6, class FText Temp_text_Variable_7, class FText Temp_text_Variable_8, class FText Temp_text_Variable_9, class FText Temp_text_Variable_10, class FText Temp_text_Variable_11, class FText Temp_text_Variable_12, class FText Temp_text_Variable_13, class FText Temp_text_Variable_14, class FText Temp_text_Variable_15, class FText Temp_text_Variable_16, class FText Temp_text_Variable_17, class FText Temp_text_Variable_18, class FText Temp_text_Variable_19, class FText Temp_text_Variable_20, class FText Temp_text_Variable_21, class FText Temp_text_Variable_22, class FText Temp_text_Variable_23, class FText Temp_text_Variable_24, class FText Temp_text_Variable_25, class FText Temp_text_Variable_26, class FText K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_UiHelpers_C", "GetItemCategoryName");

	Params::UBPFL_UiHelpers_C_GetItemCategoryName_Params Parms{};

	Parms.ItemCategory = ItemCategory;
	Parms.__WorldContext = __WorldContext;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_text_Variable_2 = Temp_text_Variable_2;
	Parms.Temp_text_Variable_3 = Temp_text_Variable_3;
	Parms.Temp_text_Variable_4 = Temp_text_Variable_4;
	Parms.Temp_text_Variable_5 = Temp_text_Variable_5;
	Parms.Temp_text_Variable_6 = Temp_text_Variable_6;
	Parms.Temp_text_Variable_7 = Temp_text_Variable_7;
	Parms.Temp_text_Variable_8 = Temp_text_Variable_8;
	Parms.Temp_text_Variable_9 = Temp_text_Variable_9;
	Parms.Temp_text_Variable_10 = Temp_text_Variable_10;
	Parms.Temp_text_Variable_11 = Temp_text_Variable_11;
	Parms.Temp_text_Variable_12 = Temp_text_Variable_12;
	Parms.Temp_text_Variable_13 = Temp_text_Variable_13;
	Parms.Temp_text_Variable_14 = Temp_text_Variable_14;
	Parms.Temp_text_Variable_15 = Temp_text_Variable_15;
	Parms.Temp_text_Variable_16 = Temp_text_Variable_16;
	Parms.Temp_text_Variable_17 = Temp_text_Variable_17;
	Parms.Temp_text_Variable_18 = Temp_text_Variable_18;
	Parms.Temp_text_Variable_19 = Temp_text_Variable_19;
	Parms.Temp_text_Variable_20 = Temp_text_Variable_20;
	Parms.Temp_text_Variable_21 = Temp_text_Variable_21;
	Parms.Temp_text_Variable_22 = Temp_text_Variable_22;
	Parms.Temp_text_Variable_23 = Temp_text_Variable_23;
	Parms.Temp_text_Variable_24 = Temp_text_Variable_24;
	Parms.Temp_text_Variable_25 = Temp_text_Variable_25;
	Parms.Temp_text_Variable_26 = Temp_text_Variable_26;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (Name != nullptr)
		*Name = Parms.Name;

}


// Function BPFL_UiHelpers.BPFL_UiHelpers_C.SetCanvasSlotToScreenCoords
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   Screen_Position                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            Canvas_Slot                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FAnchors                    K2Node_MakeStruct_Anchors                                        (NoDestructor)

void UBPFL_UiHelpers_C::SetCanvasSlotToScreenCoords(const struct FVector2D& Screen_Position, class UCanvasPanelSlot* Canvas_Slot, class UObject* __WorldContext, const struct FAnchors& K2Node_MakeStruct_Anchors)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_UiHelpers_C", "SetCanvasSlotToScreenCoords");

	Params::UBPFL_UiHelpers_C_SetCanvasSlotToScreenCoords_Params Parms{};

	Parms.Screen_Position = Screen_Position;
	Parms.Canvas_Slot = Canvas_Slot;
	Parms.__WorldContext = __WorldContext;
	Parms.K2Node_MakeStruct_Anchors = K2Node_MakeStruct_Anchors;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPFL_UiHelpers.BPFL_UiHelpers_C.ChangeCanvasSlotPosition
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCanvasPanelSlot*            ToChange                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            ToCopyFrom                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetZOrder_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetSize_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAnchorData                 CallFunc_GetLayout_ReturnValue                                   (NoDestructor)
// bool                               CallFunc_GetAutoSize_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetAlignment_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetPosition_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAnchors                    CallFunc_GetAnchors_ReturnValue                                  (NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_UiHelpers_C::ChangeCanvasSlotPosition(class UCanvasPanelSlot* ToChange, class UCanvasPanelSlot* ToCopyFrom, class UObject* __WorldContext, int32 CallFunc_GetZOrder_ReturnValue, const struct FVector2D& CallFunc_GetSize_ReturnValue, const struct FAnchorData& CallFunc_GetLayout_ReturnValue, bool CallFunc_GetAutoSize_ReturnValue, const struct FVector2D& CallFunc_GetAlignment_ReturnValue, const struct FVector2D& CallFunc_GetPosition_ReturnValue, const struct FAnchors& CallFunc_GetAnchors_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_UiHelpers_C", "ChangeCanvasSlotPosition");

	Params::UBPFL_UiHelpers_C_ChangeCanvasSlotPosition_Params Parms{};

	Parms.ToChange = ToChange;
	Parms.ToCopyFrom = ToCopyFrom;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetZOrder_ReturnValue = CallFunc_GetZOrder_ReturnValue;
	Parms.CallFunc_GetSize_ReturnValue = CallFunc_GetSize_ReturnValue;
	Parms.CallFunc_GetLayout_ReturnValue = CallFunc_GetLayout_ReturnValue;
	Parms.CallFunc_GetAutoSize_ReturnValue = CallFunc_GetAutoSize_ReturnValue;
	Parms.CallFunc_GetAlignment_ReturnValue = CallFunc_GetAlignment_ReturnValue;
	Parms.CallFunc_GetPosition_ReturnValue = CallFunc_GetPosition_ReturnValue;
	Parms.CallFunc_GetAnchors_ReturnValue = CallFunc_GetAnchors_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPFL_UiHelpers.BPFL_UiHelpers_C.CenterMousePointer
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     WorldContextObject                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetViewportSize_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_UiHelpers_C::CenterMousePointer(class UObject* WorldContextObject, class UObject* __WorldContext, class APlayerController* CallFunc_GetPlayerController_ReturnValue, const struct FVector2D& CallFunc_GetViewportSize_ReturnValue, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue_1, int32 CallFunc_FTrunc_ReturnValue, int32 CallFunc_FTrunc_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_UiHelpers_C", "CenterMousePointer");

	Params::UBPFL_UiHelpers_C_CenterMousePointer_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetViewportSize_ReturnValue = CallFunc_GetViewportSize_ReturnValue;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue_1 = CallFunc_Divide_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue_1 = CallFunc_FTrunc_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPFL_UiHelpers.BPFL_UiHelpers_C.IsShiftDown?
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class APlayerController*           PlayerController                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetInputKeyTimeDown_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetInputKeyTimeDown_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_UiHelpers_C::IsShiftDown_(class APlayerController* PlayerController, class UObject* __WorldContext, bool* Result, float CallFunc_GetInputKeyTimeDown_ReturnValue, float CallFunc_GetInputKeyTimeDown_ReturnValue_1, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, double CallFunc_Greater_DoubleDouble_A_ImplicitCast, double CallFunc_Greater_DoubleDouble_A_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_UiHelpers_C", "IsShiftDown?");

	Params::UBPFL_UiHelpers_C_IsShiftDown__Params Parms{};

	Parms.PlayerController = PlayerController;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetInputKeyTimeDown_ReturnValue = CallFunc_GetInputKeyTimeDown_ReturnValue;
	Parms.CallFunc_GetInputKeyTimeDown_ReturnValue_1 = CallFunc_GetInputKeyTimeDown_ReturnValue_1;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_1 = CallFunc_Greater_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_A_ImplicitCast = CallFunc_Greater_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_Greater_DoubleDouble_A_ImplicitCast_1 = CallFunc_Greater_DoubleDouble_A_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BPFL_UiHelpers.BPFL_UiHelpers_C.ShowHideWidget
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                 UserWidget                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               IsVisible_                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               UiBlocksInput_                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               TmpWasVisible                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 TmpUserWidgetToToggle                                            (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_BoolBool_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_VisibilityChanges_C>K2Node_DynamicCast_AsBPI_Visibility_Changes                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_UiHelpers_C::ShowHideWidget(class UUserWidget* UserWidget, bool IsVisible_, bool UiBlocksInput_, class UObject* __WorldContext, bool TmpWasVisible, class UUserWidget* TmpUserWidgetToToggle, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, bool CallFunc_BooleanAND_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, bool CallFunc_NotEqual_BoolBool_ReturnValue, TScriptInterface<class IBPI_VisibilityChanges_C> K2Node_DynamicCast_AsBPI_Visibility_Changes, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsVisible_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_UiHelpers_C", "ShowHideWidget");

	Params::UBPFL_UiHelpers_C_ShowHideWidget_Params Parms{};

	Parms.UserWidget = UserWidget;
	Parms.IsVisible_ = IsVisible_;
	Parms.UiBlocksInput_ = UiBlocksInput_;
	Parms.__WorldContext = __WorldContext;
	Parms.TmpWasVisible = TmpWasVisible;
	Parms.TmpUserWidgetToToggle = TmpUserWidgetToToggle;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_NotEqual_BoolBool_ReturnValue = CallFunc_NotEqual_BoolBool_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_Visibility_Changes = K2Node_DynamicCast_AsBPI_Visibility_Changes;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPFL_UiHelpers.BPFL_UiHelpers_C.GetItemCategoryColor
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EItemCategory           ItemCategory                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Color                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EItemCategory           Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_3                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_4                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_5                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_6                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_7                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_8                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_9                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_10                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_11                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_12                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_13                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_14                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_15                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_16                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_17                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_18                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_19                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_20                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_21                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_22                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_23                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_24                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_25                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_26                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_UiHelpers_C::GetItemCategoryColor(enum class EItemCategory ItemCategory, class UObject* __WorldContext, struct FLinearColor* Color, enum class EItemCategory Temp_byte_Variable, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable_1, const struct FLinearColor& Temp_struct_Variable_2, const struct FLinearColor& Temp_struct_Variable_3, const struct FLinearColor& Temp_struct_Variable_4, const struct FLinearColor& Temp_struct_Variable_5, const struct FLinearColor& Temp_struct_Variable_6, const struct FLinearColor& Temp_struct_Variable_7, const struct FLinearColor& Temp_struct_Variable_8, const struct FLinearColor& Temp_struct_Variable_9, const struct FLinearColor& Temp_struct_Variable_10, const struct FLinearColor& Temp_struct_Variable_11, const struct FLinearColor& Temp_struct_Variable_12, const struct FLinearColor& Temp_struct_Variable_13, const struct FLinearColor& Temp_struct_Variable_14, const struct FLinearColor& Temp_struct_Variable_15, const struct FLinearColor& Temp_struct_Variable_16, const struct FLinearColor& Temp_struct_Variable_17, const struct FLinearColor& Temp_struct_Variable_18, const struct FLinearColor& Temp_struct_Variable_19, const struct FLinearColor& Temp_struct_Variable_20, const struct FLinearColor& Temp_struct_Variable_21, const struct FLinearColor& Temp_struct_Variable_22, const struct FLinearColor& Temp_struct_Variable_23, const struct FLinearColor& Temp_struct_Variable_24, const struct FLinearColor& Temp_struct_Variable_25, const struct FLinearColor& Temp_struct_Variable_26, const struct FLinearColor& K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_UiHelpers_C", "GetItemCategoryColor");

	Params::UBPFL_UiHelpers_C_GetItemCategoryColor_Params Parms{};

	Parms.ItemCategory = ItemCategory;
	Parms.__WorldContext = __WorldContext;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.Temp_struct_Variable_2 = Temp_struct_Variable_2;
	Parms.Temp_struct_Variable_3 = Temp_struct_Variable_3;
	Parms.Temp_struct_Variable_4 = Temp_struct_Variable_4;
	Parms.Temp_struct_Variable_5 = Temp_struct_Variable_5;
	Parms.Temp_struct_Variable_6 = Temp_struct_Variable_6;
	Parms.Temp_struct_Variable_7 = Temp_struct_Variable_7;
	Parms.Temp_struct_Variable_8 = Temp_struct_Variable_8;
	Parms.Temp_struct_Variable_9 = Temp_struct_Variable_9;
	Parms.Temp_struct_Variable_10 = Temp_struct_Variable_10;
	Parms.Temp_struct_Variable_11 = Temp_struct_Variable_11;
	Parms.Temp_struct_Variable_12 = Temp_struct_Variable_12;
	Parms.Temp_struct_Variable_13 = Temp_struct_Variable_13;
	Parms.Temp_struct_Variable_14 = Temp_struct_Variable_14;
	Parms.Temp_struct_Variable_15 = Temp_struct_Variable_15;
	Parms.Temp_struct_Variable_16 = Temp_struct_Variable_16;
	Parms.Temp_struct_Variable_17 = Temp_struct_Variable_17;
	Parms.Temp_struct_Variable_18 = Temp_struct_Variable_18;
	Parms.Temp_struct_Variable_19 = Temp_struct_Variable_19;
	Parms.Temp_struct_Variable_20 = Temp_struct_Variable_20;
	Parms.Temp_struct_Variable_21 = Temp_struct_Variable_21;
	Parms.Temp_struct_Variable_22 = Temp_struct_Variable_22;
	Parms.Temp_struct_Variable_23 = Temp_struct_Variable_23;
	Parms.Temp_struct_Variable_24 = Temp_struct_Variable_24;
	Parms.Temp_struct_Variable_25 = Temp_struct_Variable_25;
	Parms.Temp_struct_Variable_26 = Temp_struct_Variable_26;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (Color != nullptr)
		*Color = Parms.Color;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
