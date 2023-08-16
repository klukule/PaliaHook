#pragma once

// Dumped with Dumper-7!

#include "SDK.hpp"

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function BPFL_UiHelpers.BPFL_UiHelpers_C.TryDisplayBonusReceivedModal
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVALUI_PremiumStorefrontResponseStorefrontResponse                                               (BlueprintVisible, BlueprintReadOnly, Parm)
// TSet<struct FGuid>                 NewEntitlements                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_PetsBonusReceived_ModalWidget_C*Bonus_Received_Modal                                             (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_PetsBonusReceived_ModalWidget_C*Modal                                                            (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FVAL_CharacterCustomization_PetPurchaseBonusPetPurchaseBonus                                                 (Edit, BlueprintVisible)
// class AValeriaPlayerController*    ValeriaPlayerController                                          (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// TArray<TSoftObjectPtr<class UVAL_CharacterCustomizationItem_Pet>>NewPets                                                          (Edit, BlueprintVisible)
// enum class EValeriaFuncResult      CallFunc_GetValeriaPlayerController_OutResult                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValeriaPlayerController*    CallFunc_GetValeriaPlayerController_ReturnValue                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class US6UI_UIManagerWidgetBase*   CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_PetsBonusReceived_ModalWidget_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<TSoftObjectPtr<class UVAL_CharacterCustomizationItem_Pet>>CallFunc_GetNewPetsForBonusReceivedModal_ReturnValue             (ReferenceParm)
// struct FVAL_CharacterCustomization_PetPurchaseBonusCallFunc_GetPetPurchaseBonusFromPurchaseRewards_ReturnValue      ()
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_UiHelpers_C::TryDisplayBonusReceivedModal(const struct FVALUI_PremiumStorefrontResponse& InStorefrontResponse, TSet<struct FGuid> InNewEntitlements, class UObject* In__WorldContext, class UWBP_PetsBonusReceived_ModalWidget_C** InBonus_Received_Modal, class UWBP_PetsBonusReceived_ModalWidget_C* InModal, const struct FVAL_CharacterCustomization_PetPurchaseBonus& InPetPurchaseBonus, class AValeriaPlayerController* InValeriaPlayerController, const TArray<TSoftObjectPtr<class UVAL_CharacterCustomizationItem_Pet>>& InNewPets, enum class EValeriaFuncResult InCallFunc_GetValeriaPlayerController_OutResult, class AValeriaPlayerController* InCallFunc_GetValeriaPlayerController_ReturnValue, bool InK2Node_SwitchEnum_CmpSuccess, class US6UI_UIManagerWidgetBase* InCallFunc_GetUIManagerWidget_ReturnValue, class UWBP_PetsBonusReceived_ModalWidget_C* InCallFunc_Create_ReturnValue, TArray<TSoftObjectPtr<class UVAL_CharacterCustomizationItem_Pet>>& InCallFunc_GetNewPetsForBonusReceivedModal_ReturnValue, const struct FVAL_CharacterCustomization_PetPurchaseBonus& InCallFunc_GetPetPurchaseBonusFromPurchaseRewards_ReturnValue, int32 InCallFunc_Array_Length_ReturnValue, bool InCallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_UiHelpers_C", "TryDisplayBonusReceivedModal");

	Params::UBPFL_UiHelpers_C_TryDisplayBonusReceivedModal_Params Parms{};

	Parms.StorefrontResponse = InStorefrontResponse;
	Parms.NewEntitlements = InNewEntitlements;
	Parms.__WorldContext = In__WorldContext;
	Parms.Modal = InModal;
	Parms.PetPurchaseBonus = InPetPurchaseBonus;
	Parms.ValeriaPlayerController = InValeriaPlayerController;
	Parms.NewPets = InNewPets;
	Parms.CallFunc_GetValeriaPlayerController_OutResult = InCallFunc_GetValeriaPlayerController_OutResult;
	Parms.CallFunc_GetValeriaPlayerController_ReturnValue = InCallFunc_GetValeriaPlayerController_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = InK2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue = InCallFunc_GetUIManagerWidget_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = InCallFunc_Create_ReturnValue;
	Parms.CallFunc_GetNewPetsForBonusReceivedModal_ReturnValue = InCallFunc_GetNewPetsForBonusReceivedModal_ReturnValue;
	Parms.CallFunc_GetPetPurchaseBonusFromPurchaseRewards_ReturnValue = InCallFunc_GetPetPurchaseBonusFromPurchaseRewards_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = InCallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = InCallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (InBonus_Received_Modal != nullptr)
		*InBonus_Received_Modal = Parms.Bonus_Received_Modal;

}


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

void UBPFL_UiHelpers_C::DoesWorldLocationContextMatchCurrentTravelType(enum class EWorldLocationContext InWorldLocationContext, enum class ETeleportTravelType InTravelType, class UObject* In__WorldContext, bool* InDoesMatch, bool InK2Node_SwitchEnum_CmpSuccess, bool InCallFunc_EqualEqual_ByteByte_ReturnValue, bool InCallFunc_EqualEqual_ByteByte_ReturnValue_1, bool InCallFunc_EqualEqual_ByteByte_ReturnValue_2, bool InCallFunc_BooleanOR_ReturnValue, bool InCallFunc_EqualEqual_ByteByte_ReturnValue_3, bool InCallFunc_EqualEqual_ByteByte_ReturnValue_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_UiHelpers_C", "DoesWorldLocationContextMatchCurrentTravelType");

	Params::UBPFL_UiHelpers_C_DoesWorldLocationContextMatchCurrentTravelType_Params Parms{};

	Parms.WorldLocationContext = InWorldLocationContext;
	Parms.TravelType = InTravelType;
	Parms.__WorldContext = In__WorldContext;
	Parms.K2Node_SwitchEnum_CmpSuccess = InK2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = InCallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = InCallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = InCallFunc_EqualEqual_ByteByte_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue = InCallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_3 = InCallFunc_EqualEqual_ByteByte_ReturnValue_3;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_4 = InCallFunc_EqualEqual_ByteByte_ReturnValue_4;

	UObject::ProcessEvent(Func, &Parms);

	if (InDoesMatch != nullptr)
		*InDoesMatch = Parms.DoesMatch;

}


// Function BPFL_UiHelpers.BPFL_UiHelpers_C.GetVillagerMarkerTextureForDialogueType
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EDialogueType           DialogueType                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  DeterminedTexture                                                (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_UiHelpers_C::GetVillagerMarkerTextureForDialogueType(enum class EDialogueType InDialogueType, class UObject* In__WorldContext, class UTexture2D** InDeterminedTexture, bool InK2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_UiHelpers_C", "GetVillagerMarkerTextureForDialogueType");

	Params::UBPFL_UiHelpers_C_GetVillagerMarkerTextureForDialogueType_Params Parms{};

	Parms.DialogueType = InDialogueType;
	Parms.__WorldContext = In__WorldContext;
	Parms.K2Node_SwitchEnum_CmpSuccess = InK2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (InDeterminedTexture != nullptr)
		*InDeterminedTexture = Parms.DeterminedTexture;

}


// Function BPFL_UiHelpers.BPFL_UiHelpers_C.GetVillagerMarkerTextureForStatus
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EVillagerMarkerStatus   VillagerMarkerStatus                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  DeterminedTexture                                                (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_UiHelpers_C::GetVillagerMarkerTextureForStatus(enum class EVillagerMarkerStatus InVillagerMarkerStatus, class UObject* In__WorldContext, class UTexture2D** InDeterminedTexture, bool InK2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_UiHelpers_C", "GetVillagerMarkerTextureForStatus");

	Params::UBPFL_UiHelpers_C_GetVillagerMarkerTextureForStatus_Params Parms{};

	Parms.VillagerMarkerStatus = InVillagerMarkerStatus;
	Parms.__WorldContext = In__WorldContext;
	Parms.K2Node_SwitchEnum_CmpSuccess = InK2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (InDeterminedTexture != nullptr)
		*InDeterminedTexture = Parms.DeterminedTexture;

}


// Function BPFL_UiHelpers.BPFL_UiHelpers_C.SetVisibility
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Visibility                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        CallFunc_GetVisibility_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_UiHelpers_C::SetVisibility(class UWidget* InTarget, enum class ESlateVisibility InVisibility, class UObject* In__WorldContext, enum class ESlateVisibility InCallFunc_GetVisibility_ReturnValue, bool InCallFunc_NotEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_UiHelpers_C", "SetVisibility");

	Params::UBPFL_UiHelpers_C_SetVisibility_Params Parms{};

	Parms.Target = InTarget;
	Parms.Visibility = InVisibility;
	Parms.__WorldContext = In__WorldContext;
	Parms.CallFunc_GetVisibility_ReturnValue = InCallFunc_GetVisibility_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = InCallFunc_NotEqual_ByteByte_ReturnValue;

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

void UBPFL_UiHelpers_C::GetCostIcon(const struct FStoreItem& InStoreItem, class UObject* InContext, class UObject* In__WorldContext, class UTexture2D** InIcon, enum class EValeriaFuncResult InCallFunc_FindVitalConfigByType_OutResult, const struct FVitalConfig& InCallFunc_FindVitalConfigByType_ReturnValue, const struct FPrimaryAssetId& InK2Node_MakeStruct_PrimaryAssetId, class UObject* InCallFunc_GetObjectFromPrimaryAssetId_ReturnValue, class UCurrencyConfig* InK2Node_DynamicCast_AsCurrency_Config, bool InK2Node_DynamicCast_bSuccess, bool InK2Node_SwitchEnum_CmpSuccess, bool InCallFunc_FNameIsNone_ReturnValue, bool InCallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_UiHelpers_C", "GetCostIcon");

	Params::UBPFL_UiHelpers_C_GetCostIcon_Params Parms{};

	Parms.StoreItem = InStoreItem;
	Parms.Context = InContext;
	Parms.__WorldContext = In__WorldContext;
	Parms.CallFunc_FindVitalConfigByType_OutResult = InCallFunc_FindVitalConfigByType_OutResult;
	Parms.CallFunc_FindVitalConfigByType_ReturnValue = InCallFunc_FindVitalConfigByType_ReturnValue;
	Parms.K2Node_MakeStruct_PrimaryAssetId = InK2Node_MakeStruct_PrimaryAssetId;
	Parms.CallFunc_GetObjectFromPrimaryAssetId_ReturnValue = InCallFunc_GetObjectFromPrimaryAssetId_ReturnValue;
	Parms.K2Node_DynamicCast_AsCurrency_Config = InK2Node_DynamicCast_AsCurrency_Config;
	Parms.K2Node_DynamicCast_bSuccess = InK2Node_DynamicCast_bSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess = InK2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_FNameIsNone_ReturnValue = InCallFunc_FNameIsNone_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = InCallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (InIcon != nullptr)
		*InIcon = Parms.Icon;

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

void UBPFL_UiHelpers_C::IsWithinMap(const struct FVector& InLocation, const struct FWorldMapConfig& InWorldMapConfig, class UObject* In__WorldContext, bool* InInsideOf, double InCallFunc_BreakVector_X, double InCallFunc_BreakVector_Y, double InCallFunc_BreakVector_Z, double InCallFunc_BreakVector_X_1, double InCallFunc_BreakVector_Y_1, double InCallFunc_BreakVector_Z_1, bool InCallFunc_Not_PreBool_ReturnValue, double InCallFunc_BreakVector_X_2, double InCallFunc_BreakVector_Y_2, double InCallFunc_BreakVector_Z_2, double InCallFunc_BreakVector_X_3, double InCallFunc_BreakVector_Y_3, double InCallFunc_BreakVector_Z_3, bool InCallFunc_LessEqual_DoubleDouble_ReturnValue, bool InCallFunc_LessEqual_DoubleDouble_ReturnValue_1, double InCallFunc_BreakVector_X_4, double InCallFunc_BreakVector_Y_4, double InCallFunc_BreakVector_Z_4, double InCallFunc_BreakVector_X_5, double InCallFunc_BreakVector_Y_5, double InCallFunc_BreakVector_Z_5, bool InCallFunc_LessEqual_DoubleDouble_ReturnValue_2, bool InCallFunc_LessEqual_DoubleDouble_ReturnValue_3, bool InCallFunc_BooleanAND_ReturnValue, bool InCallFunc_BooleanAND_ReturnValue_1, bool InCallFunc_BooleanAND_ReturnValue_2, bool InCallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_UiHelpers_C", "IsWithinMap");

	Params::UBPFL_UiHelpers_C_IsWithinMap_Params Parms{};

	Parms.Location = InLocation;
	Parms.WorldMapConfig = InWorldMapConfig;
	Parms.__WorldContext = In__WorldContext;
	Parms.CallFunc_BreakVector_X = InCallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = InCallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = InCallFunc_BreakVector_Z;
	Parms.CallFunc_BreakVector_X_1 = InCallFunc_BreakVector_X_1;
	Parms.CallFunc_BreakVector_Y_1 = InCallFunc_BreakVector_Y_1;
	Parms.CallFunc_BreakVector_Z_1 = InCallFunc_BreakVector_Z_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = InCallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BreakVector_X_2 = InCallFunc_BreakVector_X_2;
	Parms.CallFunc_BreakVector_Y_2 = InCallFunc_BreakVector_Y_2;
	Parms.CallFunc_BreakVector_Z_2 = InCallFunc_BreakVector_Z_2;
	Parms.CallFunc_BreakVector_X_3 = InCallFunc_BreakVector_X_3;
	Parms.CallFunc_BreakVector_Y_3 = InCallFunc_BreakVector_Y_3;
	Parms.CallFunc_BreakVector_Z_3 = InCallFunc_BreakVector_Z_3;
	Parms.CallFunc_LessEqual_DoubleDouble_ReturnValue = InCallFunc_LessEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_LessEqual_DoubleDouble_ReturnValue_1 = InCallFunc_LessEqual_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_BreakVector_X_4 = InCallFunc_BreakVector_X_4;
	Parms.CallFunc_BreakVector_Y_4 = InCallFunc_BreakVector_Y_4;
	Parms.CallFunc_BreakVector_Z_4 = InCallFunc_BreakVector_Z_4;
	Parms.CallFunc_BreakVector_X_5 = InCallFunc_BreakVector_X_5;
	Parms.CallFunc_BreakVector_Y_5 = InCallFunc_BreakVector_Y_5;
	Parms.CallFunc_BreakVector_Z_5 = InCallFunc_BreakVector_Z_5;
	Parms.CallFunc_LessEqual_DoubleDouble_ReturnValue_2 = InCallFunc_LessEqual_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_LessEqual_DoubleDouble_ReturnValue_3 = InCallFunc_LessEqual_DoubleDouble_ReturnValue_3;
	Parms.CallFunc_BooleanAND_ReturnValue = InCallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = InCallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = InCallFunc_BooleanAND_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue = InCallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (InInsideOf != nullptr)
		*InInsideOf = Parms.InsideOf;

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

void UBPFL_UiHelpers_C::SortUniformGridPanelByVisibility(class UUniformGridPanel* InUniformGridPanel, int32 InColumnSize, class UObject* In__WorldContext, class UUniformGridSlot* InLocalGridSlot, class UWidget* InLocalWidgetVar, int32 InLocalNumVisibleChildren, int32 InCallFunc_GetChildrenCount_ReturnValue, int32 InCallFunc_Subtract_IntInt_ReturnValue, enum class ESlateVisibility InCallFunc_GetVisibility_ReturnValue, bool InCallFunc_EqualEqual_ByteByte_ReturnValue, int32 InCallFunc_Add_IntInt_ReturnValue, int32 InCallFunc_Divide_IntInt_ReturnValue, int32 InCallFunc_Percent_IntInt_ReturnValue, int32 InTemp_int_Variable, int32 InTemp_int_Variable_1, class UWidget* InCallFunc_GetChildAt_ReturnValue, bool InCallFunc_LessEqual_IntInt_ReturnValue, int32 InCallFunc_Add_IntInt_ReturnValue_1, class UUniformGridSlot* InCallFunc_SlotAsUniformGridSlot_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_UiHelpers_C", "SortUniformGridPanelByVisibility");

	Params::UBPFL_UiHelpers_C_SortUniformGridPanelByVisibility_Params Parms{};

	Parms.UniformGridPanel = InUniformGridPanel;
	Parms.ColumnSize = InColumnSize;
	Parms.__WorldContext = In__WorldContext;
	Parms.LocalGridSlot = InLocalGridSlot;
	Parms.LocalWidgetVar = InLocalWidgetVar;
	Parms.LocalNumVisibleChildren = InLocalNumVisibleChildren;
	Parms.CallFunc_GetChildrenCount_ReturnValue = InCallFunc_GetChildrenCount_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = InCallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_GetVisibility_ReturnValue = InCallFunc_GetVisibility_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = InCallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = InCallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Divide_IntInt_ReturnValue = InCallFunc_Divide_IntInt_ReturnValue;
	Parms.CallFunc_Percent_IntInt_ReturnValue = InCallFunc_Percent_IntInt_ReturnValue;
	Parms.Temp_int_Variable = InTemp_int_Variable;
	Parms.Temp_int_Variable_1 = InTemp_int_Variable_1;
	Parms.CallFunc_GetChildAt_ReturnValue = InCallFunc_GetChildAt_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = InCallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = InCallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_SlotAsUniformGridSlot_ReturnValue = InCallFunc_SlotAsUniformGridSlot_ReturnValue;

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

void UBPFL_UiHelpers_C::Get_World_Map_by_Player_Position(class UObject* In__WorldContext, struct FWorldMapConfig* InWorldMapConfig, bool* InFound, int32 InTemp_int_Array_Index_Variable, class APlayerController* InCallFunc_GetPlayerController_ReturnValue, class APawn* InCallFunc_K2_GetPawn_ReturnValue, const class FString& InCallFunc_GetCurrentLevelName_ReturnValue, const struct FVector& InCallFunc_K2_GetActorLocation_ReturnValue, int32 InTemp_int_Loop_Counter_Variable, const struct FConfigsManager& InCallFunc_GetConfigsManager_ConfigsManager, bool InCallFunc_GetConfigsManager_IsValid, int32 InCallFunc_Add_IntInt_ReturnValue, const struct FWorldMapConfig& InCallFunc_Array_Get_Item, int32 InCallFunc_Array_Length_ReturnValue, bool InCallFunc_Less_IntInt_ReturnValue, bool InCallFunc_IsWithinMap_InsideOf, bool InCallFunc_Contains_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_UiHelpers_C", "Get World Map by Player Position");

	Params::UBPFL_UiHelpers_C_Get_World_Map_by_Player_Position_Params Parms{};

	Parms.__WorldContext = In__WorldContext;
	Parms.Temp_int_Array_Index_Variable = InTemp_int_Array_Index_Variable;
	Parms.CallFunc_GetPlayerController_ReturnValue = InCallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_K2_GetPawn_ReturnValue = InCallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_GetCurrentLevelName_ReturnValue = InCallFunc_GetCurrentLevelName_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = InCallFunc_K2_GetActorLocation_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = InTemp_int_Loop_Counter_Variable;
	Parms.CallFunc_GetConfigsManager_ConfigsManager = InCallFunc_GetConfigsManager_ConfigsManager;
	Parms.CallFunc_GetConfigsManager_IsValid = InCallFunc_GetConfigsManager_IsValid;
	Parms.CallFunc_Add_IntInt_ReturnValue = InCallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = InCallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = InCallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = InCallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_IsWithinMap_InsideOf = InCallFunc_IsWithinMap_InsideOf;
	Parms.CallFunc_Contains_ReturnValue = InCallFunc_Contains_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (InWorldMapConfig != nullptr)
		*InWorldMapConfig = Parms.WorldMapConfig;

	if (InFound != nullptr)
		*InFound = Parms.Found;

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

void UBPFL_UiHelpers_C::GetConfigsManager(class UObject* In__WorldContext, struct FConfigsManager* InConfigsManager, bool* InIsValid, class UGameInstance* InCallFunc_GetGameInstance_ReturnValue, class UValeriaGameInstance* InK2Node_DynamicCast_AsValeria_Game_Instance, bool InK2Node_DynamicCast_bSuccess, const struct FConfigsManager& InCallFunc_GetConfigsManager_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_UiHelpers_C", "GetConfigsManager");

	Params::UBPFL_UiHelpers_C_GetConfigsManager_Params Parms{};

	Parms.__WorldContext = In__WorldContext;
	Parms.CallFunc_GetGameInstance_ReturnValue = InCallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsValeria_Game_Instance = InK2Node_DynamicCast_AsValeria_Game_Instance;
	Parms.K2Node_DynamicCast_bSuccess = InK2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetConfigsManager_ReturnValue = InCallFunc_GetConfigsManager_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (InConfigsManager != nullptr)
		*InConfigsManager = Parms.ConfigsManager;

	if (InIsValid != nullptr)
		*InIsValid = Parms.IsValid;

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

void UBPFL_UiHelpers_C::AreCheatsEnabled(class UObject* InContext, class UObject* In__WorldContext, bool* InResult, class AValeriaCharacter* InCharacterCached, enum class EValeriaFuncResult InCallFunc_GetValeriaCharacter_OutResult, class AValeriaCharacter* InCallFunc_GetValeriaCharacter_ReturnValue, bool InCallFunc_IsValid_ReturnValue, bool InK2Node_SwitchEnum_CmpSuccess, class UDebugInfoComponent* InCallFunc_GetDebugInfoComponent_ReturnValue, bool InCallFunc_AreCheatsEnabled_ReturnValue, bool InCallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_UiHelpers_C", "AreCheatsEnabled");

	Params::UBPFL_UiHelpers_C_AreCheatsEnabled_Params Parms{};

	Parms.Context = InContext;
	Parms.__WorldContext = In__WorldContext;
	Parms.CharacterCached = InCharacterCached;
	Parms.CallFunc_GetValeriaCharacter_OutResult = InCallFunc_GetValeriaCharacter_OutResult;
	Parms.CallFunc_GetValeriaCharacter_ReturnValue = InCallFunc_GetValeriaCharacter_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = InCallFunc_IsValid_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = InK2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetDebugInfoComponent_ReturnValue = InCallFunc_GetDebugInfoComponent_ReturnValue;
	Parms.CallFunc_AreCheatsEnabled_ReturnValue = InCallFunc_AreCheatsEnabled_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = InCallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (InResult != nullptr)
		*InResult = Parms.Result;

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

void UBPFL_UiHelpers_C::GetItemStorageCategoryIcon(enum class EItemStorageCategory InCategory, class UObject* In__WorldContext, class UTexture2D** InName, enum class EItemStorageCategory InTemp_byte_Variable, class UTexture2D* InTemp_object_Variable, class UTexture2D* InTemp_object_Variable_1, class UTexture2D* InTemp_object_Variable_2, class UTexture2D* InTemp_object_Variable_3, class UTexture2D* InTemp_object_Variable_4, class UTexture2D* InTemp_object_Variable_5, class UTexture2D* InTemp_object_Variable_6, class UTexture2D* InTemp_object_Variable_7, class UTexture2D* InTemp_object_Variable_8, class UTexture2D* InTemp_object_Variable_9, class UTexture2D* InTemp_object_Variable_10, class UTexture2D* InTemp_object_Variable_11, class UTexture2D* InTemp_object_Variable_12, class UTexture2D* InTemp_object_Variable_13, class UTexture2D* InK2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_UiHelpers_C", "GetItemStorageCategoryIcon");

	Params::UBPFL_UiHelpers_C_GetItemStorageCategoryIcon_Params Parms{};

	Parms.Category = InCategory;
	Parms.__WorldContext = In__WorldContext;
	Parms.Temp_byte_Variable = InTemp_byte_Variable;
	Parms.Temp_object_Variable = InTemp_object_Variable;
	Parms.Temp_object_Variable_1 = InTemp_object_Variable_1;
	Parms.Temp_object_Variable_2 = InTemp_object_Variable_2;
	Parms.Temp_object_Variable_3 = InTemp_object_Variable_3;
	Parms.Temp_object_Variable_4 = InTemp_object_Variable_4;
	Parms.Temp_object_Variable_5 = InTemp_object_Variable_5;
	Parms.Temp_object_Variable_6 = InTemp_object_Variable_6;
	Parms.Temp_object_Variable_7 = InTemp_object_Variable_7;
	Parms.Temp_object_Variable_8 = InTemp_object_Variable_8;
	Parms.Temp_object_Variable_9 = InTemp_object_Variable_9;
	Parms.Temp_object_Variable_10 = InTemp_object_Variable_10;
	Parms.Temp_object_Variable_11 = InTemp_object_Variable_11;
	Parms.Temp_object_Variable_12 = InTemp_object_Variable_12;
	Parms.Temp_object_Variable_13 = InTemp_object_Variable_13;
	Parms.K2Node_Select_Default = InK2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (InName != nullptr)
		*InName = Parms.Name;

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

void UBPFL_UiHelpers_C::GetItemQualityName(enum class EItemQuality InItemQuality, class UObject* In__WorldContext, class FText* InName, enum class EItemQuality InTemp_byte_Variable, class FText InTemp_text_Variable, class FText InTemp_text_Variable_1, class FText InTemp_text_Variable_2, class FText InTemp_text_Variable_3, class FText InTemp_text_Variable_4, class FText InTemp_text_Variable_5, class FText InTemp_text_Variable_6, class FText InK2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_UiHelpers_C", "GetItemQualityName");

	Params::UBPFL_UiHelpers_C_GetItemQualityName_Params Parms{};

	Parms.ItemQuality = InItemQuality;
	Parms.__WorldContext = In__WorldContext;
	Parms.Temp_byte_Variable = InTemp_byte_Variable;
	Parms.Temp_text_Variable = InTemp_text_Variable;
	Parms.Temp_text_Variable_1 = InTemp_text_Variable_1;
	Parms.Temp_text_Variable_2 = InTemp_text_Variable_2;
	Parms.Temp_text_Variable_3 = InTemp_text_Variable_3;
	Parms.Temp_text_Variable_4 = InTemp_text_Variable_4;
	Parms.Temp_text_Variable_5 = InTemp_text_Variable_5;
	Parms.Temp_text_Variable_6 = InTemp_text_Variable_6;
	Parms.K2Node_Select_Default = InK2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (InName != nullptr)
		*InName = Parms.Name;

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

void UBPFL_UiHelpers_C::GetItemQualityColor(enum class EItemQuality InItemQuality, class UObject* In__WorldContext, struct FLinearColor* InColor, enum class EItemQuality InTemp_byte_Variable, const struct FLinearColor& InTemp_struct_Variable, const struct FLinearColor& InTemp_struct_Variable_1, const struct FLinearColor& InTemp_struct_Variable_2, const struct FLinearColor& InTemp_struct_Variable_3, const struct FLinearColor& InTemp_struct_Variable_4, const struct FLinearColor& InTemp_struct_Variable_5, const struct FLinearColor& InTemp_struct_Variable_6, const struct FLinearColor& InK2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_UiHelpers_C", "GetItemQualityColor");

	Params::UBPFL_UiHelpers_C_GetItemQualityColor_Params Parms{};

	Parms.ItemQuality = InItemQuality;
	Parms.__WorldContext = In__WorldContext;
	Parms.Temp_byte_Variable = InTemp_byte_Variable;
	Parms.Temp_struct_Variable = InTemp_struct_Variable;
	Parms.Temp_struct_Variable_1 = InTemp_struct_Variable_1;
	Parms.Temp_struct_Variable_2 = InTemp_struct_Variable_2;
	Parms.Temp_struct_Variable_3 = InTemp_struct_Variable_3;
	Parms.Temp_struct_Variable_4 = InTemp_struct_Variable_4;
	Parms.Temp_struct_Variable_5 = InTemp_struct_Variable_5;
	Parms.Temp_struct_Variable_6 = InTemp_struct_Variable_6;
	Parms.K2Node_Select_Default = InK2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (InColor != nullptr)
		*InColor = Parms.Color;

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

void UBPFL_UiHelpers_C::GetItemRarityName(enum class EItemRarity InItemRarity, class UObject* In__WorldContext, class FText* InName, enum class EItemRarity InTemp_byte_Variable, class FText InTemp_text_Variable, class FText InTemp_text_Variable_1, class FText InTemp_text_Variable_2, class FText InTemp_text_Variable_3, class FText InTemp_text_Variable_4, class FText InTemp_text_Variable_5, class FText InTemp_text_Variable_6, class FText InK2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_UiHelpers_C", "GetItemRarityName");

	Params::UBPFL_UiHelpers_C_GetItemRarityName_Params Parms{};

	Parms.ItemRarity = InItemRarity;
	Parms.__WorldContext = In__WorldContext;
	Parms.Temp_byte_Variable = InTemp_byte_Variable;
	Parms.Temp_text_Variable = InTemp_text_Variable;
	Parms.Temp_text_Variable_1 = InTemp_text_Variable_1;
	Parms.Temp_text_Variable_2 = InTemp_text_Variable_2;
	Parms.Temp_text_Variable_3 = InTemp_text_Variable_3;
	Parms.Temp_text_Variable_4 = InTemp_text_Variable_4;
	Parms.Temp_text_Variable_5 = InTemp_text_Variable_5;
	Parms.Temp_text_Variable_6 = InTemp_text_Variable_6;
	Parms.K2Node_Select_Default = InK2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (InName != nullptr)
		*InName = Parms.Name;

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

void UBPFL_UiHelpers_C::GetItemRarityColor(enum class EItemRarity InItemRarity, class UObject* In__WorldContext, struct FLinearColor* InColor, enum class EItemRarity InTemp_byte_Variable, const struct FLinearColor& InTemp_struct_Variable, const struct FLinearColor& InTemp_struct_Variable_1, const struct FLinearColor& InTemp_struct_Variable_2, const struct FLinearColor& InTemp_struct_Variable_3, const struct FLinearColor& InTemp_struct_Variable_4, const struct FLinearColor& InTemp_struct_Variable_5, const struct FLinearColor& InTemp_struct_Variable_6, const struct FLinearColor& InK2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_UiHelpers_C", "GetItemRarityColor");

	Params::UBPFL_UiHelpers_C_GetItemRarityColor_Params Parms{};

	Parms.ItemRarity = InItemRarity;
	Parms.__WorldContext = In__WorldContext;
	Parms.Temp_byte_Variable = InTemp_byte_Variable;
	Parms.Temp_struct_Variable = InTemp_struct_Variable;
	Parms.Temp_struct_Variable_1 = InTemp_struct_Variable_1;
	Parms.Temp_struct_Variable_2 = InTemp_struct_Variable_2;
	Parms.Temp_struct_Variable_3 = InTemp_struct_Variable_3;
	Parms.Temp_struct_Variable_4 = InTemp_struct_Variable_4;
	Parms.Temp_struct_Variable_5 = InTemp_struct_Variable_5;
	Parms.Temp_struct_Variable_6 = InTemp_struct_Variable_6;
	Parms.K2Node_Select_Default = InK2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (InColor != nullptr)
		*InColor = Parms.Color;

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

void UBPFL_UiHelpers_C::GetCurrentDay(class UObject* In__WorldContext, int32* InCurrentDay, bool* InIsValid, class UValeriaTimeManager* InCallFunc_GetGameInstanceSubsystem_ReturnValue, class UValeriaTimeManager* InCallFunc_GetGameInstanceSubsystem_ReturnValue_1, bool InCallFunc_IsValeriaTimeValid_ReturnValue, int32 InCallFunc_GetCurrentDay_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_UiHelpers_C", "GetCurrentDay");

	Params::UBPFL_UiHelpers_C_GetCurrentDay_Params Parms{};

	Parms.__WorldContext = In__WorldContext;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = InCallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_1 = InCallFunc_GetGameInstanceSubsystem_ReturnValue_1;
	Parms.CallFunc_IsValeriaTimeValid_ReturnValue = InCallFunc_IsValeriaTimeValid_ReturnValue;
	Parms.CallFunc_GetCurrentDay_ReturnValue = InCallFunc_GetCurrentDay_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (InCurrentDay != nullptr)
		*InCurrentDay = Parms.CurrentDay;

	if (InIsValid != nullptr)
		*InIsValid = Parms.IsValid;

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

void UBPFL_UiHelpers_C::CanItemBeRequested_(TSoftObjectPtr<class UVAL_ItemTypeDefinitionAsset> InItemType, class UObject* In__WorldContext, bool* InIsRequestable_, class UObject* InCallFunc_LoadAsset_Blocking_ReturnValue, class UVAL_ItemTypeDefinitionAsset* InK2Node_DynamicCast_AsItem_Type_Definition, bool InK2Node_DynamicCast_bSuccess, bool InCallFunc_IsValid_ReturnValue, bool InCallFunc_Greater_IntInt_ReturnValue, bool InCallFunc_Not_PreBool_ReturnValue, bool InCallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_UiHelpers_C", "CanItemBeRequested?");

	Params::UBPFL_UiHelpers_C_CanItemBeRequested__Params Parms{};

	Parms.ItemType = InItemType;
	Parms.__WorldContext = In__WorldContext;
	Parms.CallFunc_LoadAsset_Blocking_ReturnValue = InCallFunc_LoadAsset_Blocking_ReturnValue;
	Parms.K2Node_DynamicCast_AsItem_Type_Definition = InK2Node_DynamicCast_AsItem_Type_Definition;
	Parms.K2Node_DynamicCast_bSuccess = InK2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = InCallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = InCallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = InCallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = InCallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (InIsRequestable_ != nullptr)
		*InIsRequestable_ = Parms.IsRequestable_;

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

void UBPFL_UiHelpers_C::GetItemStorageCategoryName(enum class EItemStorageCategory InCategory, class UObject* In__WorldContext, class FText* InName, enum class EItemStorageCategory InTemp_byte_Variable, class FText InTemp_text_Variable, class FText InTemp_text_Variable_1, class FText InTemp_text_Variable_2, class FText InTemp_text_Variable_3, class FText InTemp_text_Variable_4, class FText InTemp_text_Variable_5, class FText InTemp_text_Variable_6, class FText InTemp_text_Variable_7, class FText InTemp_text_Variable_8, class FText InTemp_text_Variable_9, class FText InTemp_text_Variable_10, class FText InTemp_text_Variable_11, class FText InTemp_text_Variable_12, class FText InTemp_text_Variable_13, class FText InK2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_UiHelpers_C", "GetItemStorageCategoryName");

	Params::UBPFL_UiHelpers_C_GetItemStorageCategoryName_Params Parms{};

	Parms.Category = InCategory;
	Parms.__WorldContext = In__WorldContext;
	Parms.Temp_byte_Variable = InTemp_byte_Variable;
	Parms.Temp_text_Variable = InTemp_text_Variable;
	Parms.Temp_text_Variable_1 = InTemp_text_Variable_1;
	Parms.Temp_text_Variable_2 = InTemp_text_Variable_2;
	Parms.Temp_text_Variable_3 = InTemp_text_Variable_3;
	Parms.Temp_text_Variable_4 = InTemp_text_Variable_4;
	Parms.Temp_text_Variable_5 = InTemp_text_Variable_5;
	Parms.Temp_text_Variable_6 = InTemp_text_Variable_6;
	Parms.Temp_text_Variable_7 = InTemp_text_Variable_7;
	Parms.Temp_text_Variable_8 = InTemp_text_Variable_8;
	Parms.Temp_text_Variable_9 = InTemp_text_Variable_9;
	Parms.Temp_text_Variable_10 = InTemp_text_Variable_10;
	Parms.Temp_text_Variable_11 = InTemp_text_Variable_11;
	Parms.Temp_text_Variable_12 = InTemp_text_Variable_12;
	Parms.Temp_text_Variable_13 = InTemp_text_Variable_13;
	Parms.K2Node_Select_Default = InK2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (InName != nullptr)
		*InName = Parms.Name;

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

void UBPFL_UiHelpers_C::CheckTimePassed(double InTimePassed, double InDeltaTime, double InPeriod, class UObject* In__WorldContext, double* InNewTimePassed, bool* InHasPassed, double InTmpTimePassed, double InCallFunc_Add_DoubleDouble_ReturnValue, bool InCallFunc_GreaterEqual_DoubleDouble_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_UiHelpers_C", "CheckTimePassed");

	Params::UBPFL_UiHelpers_C_CheckTimePassed_Params Parms{};

	Parms.TimePassed = InTimePassed;
	Parms.DeltaTime = InDeltaTime;
	Parms.Period = InPeriod;
	Parms.__WorldContext = In__WorldContext;
	Parms.TmpTimePassed = InTmpTimePassed;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = InCallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_GreaterEqual_DoubleDouble_ReturnValue = InCallFunc_GreaterEqual_DoubleDouble_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (InNewTimePassed != nullptr)
		*InNewTimePassed = Parms.NewTimePassed;

	if (InHasPassed != nullptr)
		*InHasPassed = Parms.HasPassed;

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

void UBPFL_UiHelpers_C::WorldPositionToUiPosition(const struct FVector& InWorldPosition, const struct FBox2D& InWorldBounds, const struct FVector2D& InUiSize, enum class EWorldToUiScaling InScaling, class UObject* In__WorldContext, struct FVector2D* InUiPosition, const struct FVector2D& InTmpWorldHalfExtents, const struct FVector2D& InTmpWorldCenter, enum class EWorldToUiScaling InTemp_byte_Variable, double InCallFunc_BreakVector2D_X, double InCallFunc_BreakVector2D_Y, const struct FVector2D& InCallFunc_MakeVector2D_ReturnValue, const struct FVector2D& InCallFunc_MakeVector2D_ReturnValue_1, const struct FVector2D& InCallFunc_MakeVector2D_ReturnValue_2, const struct FVector2D& InK2Node_Select_Default, const struct FVector2D& InCallFunc_Multiply_Vector2DFloat_ReturnValue, const struct FVector2D& InCallFunc_Subtract_Vector2DVector2D_ReturnValue, const struct FVector2D& InCallFunc_Conv_VectorToVector2D_ReturnValue, const struct FVector2D& InCallFunc_Divide_Vector2DFloat_ReturnValue, const struct FVector2D& InCallFunc_Add_Vector2DVector2D_ReturnValue, const struct FVector2D& InCallFunc_Subtract_Vector2DVector2D_ReturnValue_1, const struct FVector2D& InCallFunc_Divide_Vector2DVector2D_ReturnValue, const struct FVector2D& InCallFunc_Multiply_Vector2DVector2D_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_UiHelpers_C", "WorldPositionToUiPosition");

	Params::UBPFL_UiHelpers_C_WorldPositionToUiPosition_Params Parms{};

	Parms.WorldPosition = InWorldPosition;
	Parms.WorldBounds = InWorldBounds;
	Parms.UiSize = InUiSize;
	Parms.Scaling = InScaling;
	Parms.__WorldContext = In__WorldContext;
	Parms.TmpWorldHalfExtents = InTmpWorldHalfExtents;
	Parms.TmpWorldCenter = InTmpWorldCenter;
	Parms.Temp_byte_Variable = InTemp_byte_Variable;
	Parms.CallFunc_BreakVector2D_X = InCallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = InCallFunc_BreakVector2D_Y;
	Parms.CallFunc_MakeVector2D_ReturnValue = InCallFunc_MakeVector2D_ReturnValue;
	Parms.CallFunc_MakeVector2D_ReturnValue_1 = InCallFunc_MakeVector2D_ReturnValue_1;
	Parms.CallFunc_MakeVector2D_ReturnValue_2 = InCallFunc_MakeVector2D_ReturnValue_2;
	Parms.K2Node_Select_Default = InK2Node_Select_Default;
	Parms.CallFunc_Multiply_Vector2DFloat_ReturnValue = InCallFunc_Multiply_Vector2DFloat_ReturnValue;
	Parms.CallFunc_Subtract_Vector2DVector2D_ReturnValue = InCallFunc_Subtract_Vector2DVector2D_ReturnValue;
	Parms.CallFunc_Conv_VectorToVector2D_ReturnValue = InCallFunc_Conv_VectorToVector2D_ReturnValue;
	Parms.CallFunc_Divide_Vector2DFloat_ReturnValue = InCallFunc_Divide_Vector2DFloat_ReturnValue;
	Parms.CallFunc_Add_Vector2DVector2D_ReturnValue = InCallFunc_Add_Vector2DVector2D_ReturnValue;
	Parms.CallFunc_Subtract_Vector2DVector2D_ReturnValue_1 = InCallFunc_Subtract_Vector2DVector2D_ReturnValue_1;
	Parms.CallFunc_Divide_Vector2DVector2D_ReturnValue = InCallFunc_Divide_Vector2DVector2D_ReturnValue;
	Parms.CallFunc_Multiply_Vector2DVector2D_ReturnValue = InCallFunc_Multiply_Vector2DVector2D_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (InUiPosition != nullptr)
		*InUiPosition = Parms.UiPosition;

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

void UBPFL_UiHelpers_C::IsAlmostBurnt_(class UCrafterComponent* InCrafter, class UObject* In__WorldContext, bool* InIsAlmostBurnt, bool InTemp_bool_Variable, int32 InCallFunc_GetTimeRemainingTillBurntMs_ReturnValue, bool InCallFunc_InRange_IntInt_ReturnValue, enum class ECrafterState InCallFunc_GetCrafterState_ReturnValue, bool InCallFunc_IsValid_ReturnValue, bool InTemp_bool_Variable_1, bool InTemp_bool_Variable_2, bool InTemp_bool_Variable_3, bool InTemp_bool_Variable_4, enum class ECrafterState InTemp_byte_Variable, bool InK2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_UiHelpers_C", "IsAlmostBurnt?");

	Params::UBPFL_UiHelpers_C_IsAlmostBurnt__Params Parms{};

	Parms.Crafter = InCrafter;
	Parms.__WorldContext = In__WorldContext;
	Parms.Temp_bool_Variable = InTemp_bool_Variable;
	Parms.CallFunc_GetTimeRemainingTillBurntMs_ReturnValue = InCallFunc_GetTimeRemainingTillBurntMs_ReturnValue;
	Parms.CallFunc_InRange_IntInt_ReturnValue = InCallFunc_InRange_IntInt_ReturnValue;
	Parms.CallFunc_GetCrafterState_ReturnValue = InCallFunc_GetCrafterState_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = InCallFunc_IsValid_ReturnValue;
	Parms.Temp_bool_Variable_1 = InTemp_bool_Variable_1;
	Parms.Temp_bool_Variable_2 = InTemp_bool_Variable_2;
	Parms.Temp_bool_Variable_3 = InTemp_bool_Variable_3;
	Parms.Temp_bool_Variable_4 = InTemp_bool_Variable_4;
	Parms.Temp_byte_Variable = InTemp_byte_Variable;
	Parms.K2Node_Select_Default = InK2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (InIsAlmostBurnt != nullptr)
		*InIsAlmostBurnt = Parms.IsAlmostBurnt;

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

void UBPFL_UiHelpers_C::GetGwgTriplesTeamColor(bool InGoodGuys, class UObject* In__WorldContext, struct FLinearColor* InColor, bool InTemp_bool_Variable, const struct FLinearColor& InTemp_struct_Variable, const struct FLinearColor& InTemp_struct_Variable_1, const struct FLinearColor& InK2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_UiHelpers_C", "GetGwgTriplesTeamColor");

	Params::UBPFL_UiHelpers_C_GetGwgTriplesTeamColor_Params Parms{};

	Parms.GoodGuys = InGoodGuys;
	Parms.__WorldContext = In__WorldContext;
	Parms.Temp_bool_Variable = InTemp_bool_Variable;
	Parms.Temp_struct_Variable = InTemp_struct_Variable;
	Parms.Temp_struct_Variable_1 = InTemp_struct_Variable_1;
	Parms.K2Node_Select_Default = InK2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (InColor != nullptr)
		*InColor = Parms.Color;

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

void UBPFL_UiHelpers_C::IsDebuggingOn_(class UObject* InContext, class UObject* In__WorldContext, bool* InIsDebuggingOn, class UGameInstance* InCallFunc_GetGameInstance_ReturnValue, class UValeriaGameInstance* InK2Node_DynamicCast_AsValeria_Game_Instance, bool InK2Node_DynamicCast_bSuccess, bool InCallFunc_IsDebuggingOn_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_UiHelpers_C", "IsDebuggingOn?");

	Params::UBPFL_UiHelpers_C_IsDebuggingOn__Params Parms{};

	Parms.Context = InContext;
	Parms.__WorldContext = In__WorldContext;
	Parms.CallFunc_GetGameInstance_ReturnValue = InCallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsValeria_Game_Instance = InK2Node_DynamicCast_AsValeria_Game_Instance;
	Parms.K2Node_DynamicCast_bSuccess = InK2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsDebuggingOn_ReturnValue = InCallFunc_IsDebuggingOn_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (InIsDebuggingOn != nullptr)
		*InIsDebuggingOn = Parms.IsDebuggingOn;

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

void UBPFL_UiHelpers_C::FormatClockTimInValeriaDHM(const struct FClockTimeInValeria& InTime, class UObject* In__WorldContext, class FString* InResult, const class FString& InCallFunc_FormatClockTimeInValeria_Result, const class FString& InCallFunc_Conv_IntToString_ReturnValue, const class FString& InCallFunc_Concat_StrStr_ReturnValue, const class FString& InCallFunc_Concat_StrStr_ReturnValue_1, const class FString& InCallFunc_Concat_StrStr_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_UiHelpers_C", "FormatClockTimInValeriaDHM");

	Params::UBPFL_UiHelpers_C_FormatClockTimInValeriaDHM_Params Parms{};

	Parms.Time = InTime;
	Parms.__WorldContext = In__WorldContext;
	Parms.CallFunc_FormatClockTimeInValeria_Result = InCallFunc_FormatClockTimeInValeria_Result;
	Parms.CallFunc_Conv_IntToString_ReturnValue = InCallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = InCallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = InCallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = InCallFunc_Concat_StrStr_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

	if (InResult != nullptr)
		*InResult = Parms.Result;

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

void UBPFL_UiHelpers_C::FormatClockTimeInValeria(const struct FClockTimeInValeria& InTime, class UObject* In__WorldContext, class FString* InResult, const class FString& InTemp_string_Variable, bool InCallFunc_GreaterEqual_IntInt_ReturnValue, const class FString& InCallFunc_Conv_IntToString_ReturnValue, bool InCallFunc_GreaterEqual_IntInt_ReturnValue_1, int32 InCallFunc_Percent_IntInt_ReturnValue, const class FString& InTemp_string_Variable_1, bool InCallFunc_EqualEqual_IntInt_ReturnValue, bool InTemp_bool_Variable, int32 InTemp_int_Variable, bool InTemp_bool_Variable_1, int32 InK2Node_Select_Default, const class FString& InCallFunc_Conv_IntToString_ReturnValue_1, const class FString& InTemp_string_Variable_2, const class FString& InCallFunc_Concat_StrStr_ReturnValue, const class FString& InTemp_string_Variable_3, bool InTemp_bool_Variable_2, const class FString& InK2Node_Select_Default_1, const class FString& InK2Node_Select_Default_2, const class FString& InCallFunc_Concat_StrStr_ReturnValue_1, const class FString& InCallFunc_Concat_StrStr_ReturnValue_2, const class FString& InCallFunc_Concat_StrStr_ReturnValue_3, const class FString& InCallFunc_Concat_StrStr_ReturnValue_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_UiHelpers_C", "FormatClockTimeInValeria");

	Params::UBPFL_UiHelpers_C_FormatClockTimeInValeria_Params Parms{};

	Parms.Time = InTime;
	Parms.__WorldContext = In__WorldContext;
	Parms.Temp_string_Variable = InTemp_string_Variable;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = InCallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue = InCallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue_1 = InCallFunc_GreaterEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_Percent_IntInt_ReturnValue = InCallFunc_Percent_IntInt_ReturnValue;
	Parms.Temp_string_Variable_1 = InTemp_string_Variable_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = InCallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.Temp_bool_Variable = InTemp_bool_Variable;
	Parms.Temp_int_Variable = InTemp_int_Variable;
	Parms.Temp_bool_Variable_1 = InTemp_bool_Variable_1;
	Parms.K2Node_Select_Default = InK2Node_Select_Default;
	Parms.CallFunc_Conv_IntToString_ReturnValue_1 = InCallFunc_Conv_IntToString_ReturnValue_1;
	Parms.Temp_string_Variable_2 = InTemp_string_Variable_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue = InCallFunc_Concat_StrStr_ReturnValue;
	Parms.Temp_string_Variable_3 = InTemp_string_Variable_3;
	Parms.Temp_bool_Variable_2 = InTemp_bool_Variable_2;
	Parms.K2Node_Select_Default_1 = InK2Node_Select_Default_1;
	Parms.K2Node_Select_Default_2 = InK2Node_Select_Default_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = InCallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = InCallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = InCallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = InCallFunc_Concat_StrStr_ReturnValue_4;

	UObject::ProcessEvent(Func, &Parms);

	if (InResult != nullptr)
		*InResult = Parms.Result;

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

void UBPFL_UiHelpers_C::GetTimeOfDayLerp(class UObject* InContext, class UObject* In__WorldContext, double* InTimeOfDayLerp, bool* InIsValid, class UValeriaTimeManager* InCallFunc_GetGameInstanceSubsystem_ReturnValue, class UValeriaTimeManager* InCallFunc_GetGameInstanceSubsystem_ReturnValue_1, float InCallFunc_GetTimeOfDayLerp_ReturnValue, bool InCallFunc_IsValeriaTimeValid_ReturnValue, double InK2Node_FunctionResult_TimeOfDayLerp_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_UiHelpers_C", "GetTimeOfDayLerp");

	Params::UBPFL_UiHelpers_C_GetTimeOfDayLerp_Params Parms{};

	Parms.Context = InContext;
	Parms.__WorldContext = In__WorldContext;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = InCallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_1 = InCallFunc_GetGameInstanceSubsystem_ReturnValue_1;
	Parms.CallFunc_GetTimeOfDayLerp_ReturnValue = InCallFunc_GetTimeOfDayLerp_ReturnValue;
	Parms.CallFunc_IsValeriaTimeValid_ReturnValue = InCallFunc_IsValeriaTimeValid_ReturnValue;
	Parms.K2Node_FunctionResult_TimeOfDayLerp_ImplicitCast = InK2Node_FunctionResult_TimeOfDayLerp_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (InTimeOfDayLerp != nullptr)
		*InTimeOfDayLerp = Parms.TimeOfDayLerp;

	if (InIsValid != nullptr)
		*InIsValid = Parms.IsValid;

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

void UBPFL_UiHelpers_C::GetItemCategoryName(enum class EItemCategory InItemCategory, class UObject* In__WorldContext, class FText* InName, enum class EItemCategory InTemp_byte_Variable, class FText InTemp_text_Variable, class FText InTemp_text_Variable_1, class FText InTemp_text_Variable_2, class FText InTemp_text_Variable_3, class FText InTemp_text_Variable_4, class FText InTemp_text_Variable_5, class FText InTemp_text_Variable_6, class FText InTemp_text_Variable_7, class FText InTemp_text_Variable_8, class FText InTemp_text_Variable_9, class FText InTemp_text_Variable_10, class FText InTemp_text_Variable_11, class FText InTemp_text_Variable_12, class FText InTemp_text_Variable_13, class FText InTemp_text_Variable_14, class FText InTemp_text_Variable_15, class FText InTemp_text_Variable_16, class FText InTemp_text_Variable_17, class FText InTemp_text_Variable_18, class FText InTemp_text_Variable_19, class FText InTemp_text_Variable_20, class FText InTemp_text_Variable_21, class FText InTemp_text_Variable_22, class FText InTemp_text_Variable_23, class FText InTemp_text_Variable_24, class FText InTemp_text_Variable_25, class FText InTemp_text_Variable_26, class FText InK2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_UiHelpers_C", "GetItemCategoryName");

	Params::UBPFL_UiHelpers_C_GetItemCategoryName_Params Parms{};

	Parms.ItemCategory = InItemCategory;
	Parms.__WorldContext = In__WorldContext;
	Parms.Temp_byte_Variable = InTemp_byte_Variable;
	Parms.Temp_text_Variable = InTemp_text_Variable;
	Parms.Temp_text_Variable_1 = InTemp_text_Variable_1;
	Parms.Temp_text_Variable_2 = InTemp_text_Variable_2;
	Parms.Temp_text_Variable_3 = InTemp_text_Variable_3;
	Parms.Temp_text_Variable_4 = InTemp_text_Variable_4;
	Parms.Temp_text_Variable_5 = InTemp_text_Variable_5;
	Parms.Temp_text_Variable_6 = InTemp_text_Variable_6;
	Parms.Temp_text_Variable_7 = InTemp_text_Variable_7;
	Parms.Temp_text_Variable_8 = InTemp_text_Variable_8;
	Parms.Temp_text_Variable_9 = InTemp_text_Variable_9;
	Parms.Temp_text_Variable_10 = InTemp_text_Variable_10;
	Parms.Temp_text_Variable_11 = InTemp_text_Variable_11;
	Parms.Temp_text_Variable_12 = InTemp_text_Variable_12;
	Parms.Temp_text_Variable_13 = InTemp_text_Variable_13;
	Parms.Temp_text_Variable_14 = InTemp_text_Variable_14;
	Parms.Temp_text_Variable_15 = InTemp_text_Variable_15;
	Parms.Temp_text_Variable_16 = InTemp_text_Variable_16;
	Parms.Temp_text_Variable_17 = InTemp_text_Variable_17;
	Parms.Temp_text_Variable_18 = InTemp_text_Variable_18;
	Parms.Temp_text_Variable_19 = InTemp_text_Variable_19;
	Parms.Temp_text_Variable_20 = InTemp_text_Variable_20;
	Parms.Temp_text_Variable_21 = InTemp_text_Variable_21;
	Parms.Temp_text_Variable_22 = InTemp_text_Variable_22;
	Parms.Temp_text_Variable_23 = InTemp_text_Variable_23;
	Parms.Temp_text_Variable_24 = InTemp_text_Variable_24;
	Parms.Temp_text_Variable_25 = InTemp_text_Variable_25;
	Parms.Temp_text_Variable_26 = InTemp_text_Variable_26;
	Parms.K2Node_Select_Default = InK2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (InName != nullptr)
		*InName = Parms.Name;

}


// Function BPFL_UiHelpers.BPFL_UiHelpers_C.SetCanvasSlotToScreenCoords
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   Screen_Position                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            Canvas_Slot                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FAnchors                    K2Node_MakeStruct_Anchors                                        (NoDestructor)

void UBPFL_UiHelpers_C::SetCanvasSlotToScreenCoords(const struct FVector2D& InScreen_Position, class UCanvasPanelSlot* InCanvas_Slot, class UObject* In__WorldContext, const struct FAnchors& InK2Node_MakeStruct_Anchors)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_UiHelpers_C", "SetCanvasSlotToScreenCoords");

	Params::UBPFL_UiHelpers_C_SetCanvasSlotToScreenCoords_Params Parms{};

	Parms.Screen_Position = InScreen_Position;
	Parms.Canvas_Slot = InCanvas_Slot;
	Parms.__WorldContext = In__WorldContext;
	Parms.K2Node_MakeStruct_Anchors = InK2Node_MakeStruct_Anchors;

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

void UBPFL_UiHelpers_C::ChangeCanvasSlotPosition(class UCanvasPanelSlot* InToChange, class UCanvasPanelSlot* InToCopyFrom, class UObject* In__WorldContext, int32 InCallFunc_GetZOrder_ReturnValue, const struct FVector2D& InCallFunc_GetSize_ReturnValue, const struct FAnchorData& InCallFunc_GetLayout_ReturnValue, bool InCallFunc_GetAutoSize_ReturnValue, const struct FVector2D& InCallFunc_GetAlignment_ReturnValue, const struct FVector2D& InCallFunc_GetPosition_ReturnValue, const struct FAnchors& InCallFunc_GetAnchors_ReturnValue, bool InCallFunc_IsValid_ReturnValue, bool InCallFunc_IsValid_ReturnValue_1, bool InCallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_UiHelpers_C", "ChangeCanvasSlotPosition");

	Params::UBPFL_UiHelpers_C_ChangeCanvasSlotPosition_Params Parms{};

	Parms.ToChange = InToChange;
	Parms.ToCopyFrom = InToCopyFrom;
	Parms.__WorldContext = In__WorldContext;
	Parms.CallFunc_GetZOrder_ReturnValue = InCallFunc_GetZOrder_ReturnValue;
	Parms.CallFunc_GetSize_ReturnValue = InCallFunc_GetSize_ReturnValue;
	Parms.CallFunc_GetLayout_ReturnValue = InCallFunc_GetLayout_ReturnValue;
	Parms.CallFunc_GetAutoSize_ReturnValue = InCallFunc_GetAutoSize_ReturnValue;
	Parms.CallFunc_GetAlignment_ReturnValue = InCallFunc_GetAlignment_ReturnValue;
	Parms.CallFunc_GetPosition_ReturnValue = InCallFunc_GetPosition_ReturnValue;
	Parms.CallFunc_GetAnchors_ReturnValue = InCallFunc_GetAnchors_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = InCallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = InCallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = InCallFunc_BooleanAND_ReturnValue;

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

void UBPFL_UiHelpers_C::CenterMousePointer(class UObject* InWorldContextObject, class UObject* In__WorldContext, class APlayerController* InCallFunc_GetPlayerController_ReturnValue, const struct FVector2D& InCallFunc_GetViewportSize_ReturnValue, double InCallFunc_BreakVector2D_X, double InCallFunc_BreakVector2D_Y, double InCallFunc_Divide_DoubleDouble_ReturnValue, double InCallFunc_Divide_DoubleDouble_ReturnValue_1, int32 InCallFunc_FTrunc_ReturnValue, int32 InCallFunc_FTrunc_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_UiHelpers_C", "CenterMousePointer");

	Params::UBPFL_UiHelpers_C_CenterMousePointer_Params Parms{};

	Parms.WorldContextObject = InWorldContextObject;
	Parms.__WorldContext = In__WorldContext;
	Parms.CallFunc_GetPlayerController_ReturnValue = InCallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetViewportSize_ReturnValue = InCallFunc_GetViewportSize_ReturnValue;
	Parms.CallFunc_BreakVector2D_X = InCallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = InCallFunc_BreakVector2D_Y;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = InCallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue_1 = InCallFunc_Divide_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_FTrunc_ReturnValue = InCallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue_1 = InCallFunc_FTrunc_ReturnValue_1;

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

void UBPFL_UiHelpers_C::IsShiftDown_(class APlayerController* InPlayerController, class UObject* In__WorldContext, bool* InResult, float InCallFunc_GetInputKeyTimeDown_ReturnValue, float InCallFunc_GetInputKeyTimeDown_ReturnValue_1, bool InCallFunc_Greater_DoubleDouble_ReturnValue, bool InCallFunc_Greater_DoubleDouble_ReturnValue_1, bool InCallFunc_BooleanOR_ReturnValue, double InCallFunc_Greater_DoubleDouble_A_ImplicitCast, double InCallFunc_Greater_DoubleDouble_A_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_UiHelpers_C", "IsShiftDown?");

	Params::UBPFL_UiHelpers_C_IsShiftDown__Params Parms{};

	Parms.PlayerController = InPlayerController;
	Parms.__WorldContext = In__WorldContext;
	Parms.CallFunc_GetInputKeyTimeDown_ReturnValue = InCallFunc_GetInputKeyTimeDown_ReturnValue;
	Parms.CallFunc_GetInputKeyTimeDown_ReturnValue_1 = InCallFunc_GetInputKeyTimeDown_ReturnValue_1;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = InCallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_1 = InCallFunc_Greater_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = InCallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_A_ImplicitCast = InCallFunc_Greater_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_Greater_DoubleDouble_A_ImplicitCast_1 = InCallFunc_Greater_DoubleDouble_A_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

	if (InResult != nullptr)
		*InResult = Parms.Result;

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

void UBPFL_UiHelpers_C::ShowHideWidget(class UUserWidget* InUserWidget, bool InIsVisible_, bool InUiBlocksInput_, class UObject* In__WorldContext, bool InTmpWasVisible, class UUserWidget* InTmpUserWidgetToToggle, enum class ESlateVisibility InTemp_byte_Variable, enum class ESlateVisibility InTemp_byte_Variable_1, bool InTemp_bool_Variable, bool InCallFunc_BooleanAND_ReturnValue, enum class ESlateVisibility InK2Node_Select_Default, bool InCallFunc_NotEqual_BoolBool_ReturnValue, TScriptInterface<class IBPI_VisibilityChanges_C> InK2Node_DynamicCast_AsBPI_Visibility_Changes, bool InK2Node_DynamicCast_bSuccess, bool InCallFunc_IsVisible_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_UiHelpers_C", "ShowHideWidget");

	Params::UBPFL_UiHelpers_C_ShowHideWidget_Params Parms{};

	Parms.UserWidget = InUserWidget;
	Parms.IsVisible_ = InIsVisible_;
	Parms.UiBlocksInput_ = InUiBlocksInput_;
	Parms.__WorldContext = In__WorldContext;
	Parms.TmpWasVisible = InTmpWasVisible;
	Parms.TmpUserWidgetToToggle = InTmpUserWidgetToToggle;
	Parms.Temp_byte_Variable = InTemp_byte_Variable;
	Parms.Temp_byte_Variable_1 = InTemp_byte_Variable_1;
	Parms.Temp_bool_Variable = InTemp_bool_Variable;
	Parms.CallFunc_BooleanAND_ReturnValue = InCallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_Select_Default = InK2Node_Select_Default;
	Parms.CallFunc_NotEqual_BoolBool_ReturnValue = InCallFunc_NotEqual_BoolBool_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_Visibility_Changes = InK2Node_DynamicCast_AsBPI_Visibility_Changes;
	Parms.K2Node_DynamicCast_bSuccess = InK2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsVisible_ReturnValue = InCallFunc_IsVisible_ReturnValue;

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

void UBPFL_UiHelpers_C::GetItemCategoryColor(enum class EItemCategory InItemCategory, class UObject* In__WorldContext, struct FLinearColor* InColor, enum class EItemCategory InTemp_byte_Variable, const struct FLinearColor& InTemp_struct_Variable, const struct FLinearColor& InTemp_struct_Variable_1, const struct FLinearColor& InTemp_struct_Variable_2, const struct FLinearColor& InTemp_struct_Variable_3, const struct FLinearColor& InTemp_struct_Variable_4, const struct FLinearColor& InTemp_struct_Variable_5, const struct FLinearColor& InTemp_struct_Variable_6, const struct FLinearColor& InTemp_struct_Variable_7, const struct FLinearColor& InTemp_struct_Variable_8, const struct FLinearColor& InTemp_struct_Variable_9, const struct FLinearColor& InTemp_struct_Variable_10, const struct FLinearColor& InTemp_struct_Variable_11, const struct FLinearColor& InTemp_struct_Variable_12, const struct FLinearColor& InTemp_struct_Variable_13, const struct FLinearColor& InTemp_struct_Variable_14, const struct FLinearColor& InTemp_struct_Variable_15, const struct FLinearColor& InTemp_struct_Variable_16, const struct FLinearColor& InTemp_struct_Variable_17, const struct FLinearColor& InTemp_struct_Variable_18, const struct FLinearColor& InTemp_struct_Variable_19, const struct FLinearColor& InTemp_struct_Variable_20, const struct FLinearColor& InTemp_struct_Variable_21, const struct FLinearColor& InTemp_struct_Variable_22, const struct FLinearColor& InTemp_struct_Variable_23, const struct FLinearColor& InTemp_struct_Variable_24, const struct FLinearColor& InTemp_struct_Variable_25, const struct FLinearColor& InTemp_struct_Variable_26, const struct FLinearColor& InK2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_UiHelpers_C", "GetItemCategoryColor");

	Params::UBPFL_UiHelpers_C_GetItemCategoryColor_Params Parms{};

	Parms.ItemCategory = InItemCategory;
	Parms.__WorldContext = In__WorldContext;
	Parms.Temp_byte_Variable = InTemp_byte_Variable;
	Parms.Temp_struct_Variable = InTemp_struct_Variable;
	Parms.Temp_struct_Variable_1 = InTemp_struct_Variable_1;
	Parms.Temp_struct_Variable_2 = InTemp_struct_Variable_2;
	Parms.Temp_struct_Variable_3 = InTemp_struct_Variable_3;
	Parms.Temp_struct_Variable_4 = InTemp_struct_Variable_4;
	Parms.Temp_struct_Variable_5 = InTemp_struct_Variable_5;
	Parms.Temp_struct_Variable_6 = InTemp_struct_Variable_6;
	Parms.Temp_struct_Variable_7 = InTemp_struct_Variable_7;
	Parms.Temp_struct_Variable_8 = InTemp_struct_Variable_8;
	Parms.Temp_struct_Variable_9 = InTemp_struct_Variable_9;
	Parms.Temp_struct_Variable_10 = InTemp_struct_Variable_10;
	Parms.Temp_struct_Variable_11 = InTemp_struct_Variable_11;
	Parms.Temp_struct_Variable_12 = InTemp_struct_Variable_12;
	Parms.Temp_struct_Variable_13 = InTemp_struct_Variable_13;
	Parms.Temp_struct_Variable_14 = InTemp_struct_Variable_14;
	Parms.Temp_struct_Variable_15 = InTemp_struct_Variable_15;
	Parms.Temp_struct_Variable_16 = InTemp_struct_Variable_16;
	Parms.Temp_struct_Variable_17 = InTemp_struct_Variable_17;
	Parms.Temp_struct_Variable_18 = InTemp_struct_Variable_18;
	Parms.Temp_struct_Variable_19 = InTemp_struct_Variable_19;
	Parms.Temp_struct_Variable_20 = InTemp_struct_Variable_20;
	Parms.Temp_struct_Variable_21 = InTemp_struct_Variable_21;
	Parms.Temp_struct_Variable_22 = InTemp_struct_Variable_22;
	Parms.Temp_struct_Variable_23 = InTemp_struct_Variable_23;
	Parms.Temp_struct_Variable_24 = InTemp_struct_Variable_24;
	Parms.Temp_struct_Variable_25 = InTemp_struct_Variable_25;
	Parms.Temp_struct_Variable_26 = InTemp_struct_Variable_26;
	Parms.K2Node_Select_Default = InK2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (InColor != nullptr)
		*InColor = Parms.Color;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
