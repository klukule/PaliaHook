#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPFL_UiHelpers.BPFL_UiHelpers_C
class UBPFL_UiHelpers_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UBPFL_UiHelpers_C* GetDefaultObj();

	void IsCompassDisplaySettingEnabled(int32 CompassFlags, enum class ECompassDisplaySettings Setting, class UObject* __WorldContext, bool* IsEnabled, enum class ECompassDisplaySettings Temp_byte_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable_1, int32 Temp_int_Variable_2, int32 K2Node_Select_Default, int32 CallFunc_And_IntInt_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue);
	void TryDisplayBonusReceivedModal(const struct FVALUI_PremiumStorefrontResponse& StorefrontResponse, TSet<struct FGuid> NewEntitlements, class UObject* __WorldContext, class UWBP_PetsBonusReceived_ModalWidget_C** Bonus_Received_Modal, class UWBP_PetsBonusReceived_ModalWidget_C* Modal, const struct FVAL_CharacterCustomization_PetPurchaseBonus& PetPurchaseBonus, class AValeriaPlayerController* ValeriaPlayerController, const TArray<TSoftObjectPtr<class UVAL_CharacterCustomizationItem_Pet>>& NewPets, enum class EValeriaFuncResult CallFunc_GetValeriaPlayerController_OutResult, class AValeriaPlayerController* CallFunc_GetValeriaPlayerController_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class US6UI_UIManagerWidgetBase* CallFunc_GetUIManagerWidget_ReturnValue, class UWBP_PetsBonusReceived_ModalWidget_C* CallFunc_Create_ReturnValue, TArray<TSoftObjectPtr<class UVAL_CharacterCustomizationItem_Pet>>& CallFunc_GetNewPetsForBonusReceivedModal_ReturnValue, const struct FVAL_CharacterCustomization_PetPurchaseBonus& CallFunc_GetPetPurchaseBonusFromPurchaseRewards_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
	void DoesWorldLocationContextMatchCurrentTravelType(enum class EWorldLocationContext WorldLocationContext, enum class ETeleportTravelType TravelType, class UObject* __WorldContext, bool* DoesMatch, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue_4, bool CallFunc_EqualEqual_ByteByte_ReturnValue_5);
	void GetVillagerMarkerTextureForDialogueType(enum class EDialogueType DialogueType, class UObject* __WorldContext, class UTexture2D** DeterminedTexture, bool K2Node_SwitchEnum_CmpSuccess);
	void GetVillagerMarkerTextureForStatus(enum class EVillagerMarkerStatus VillagerMarkerStatus, class UObject* __WorldContext, class UTexture2D** DeterminedTexture, bool K2Node_SwitchEnum_CmpSuccess);
	void SetVisibility(class UWidget* Target, enum class ESlateVisibility Visibility, class UObject* __WorldContext, enum class ESlateVisibility CallFunc_GetVisibility_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue);
	void GetCostIcon(const struct FStoreItem& StoreItem, class UObject* Context, class UObject* __WorldContext, class UTexture2D** Icon, enum class EValeriaFuncResult CallFunc_FindVitalConfigByType_OutResult, const struct FVitalConfig& CallFunc_FindVitalConfigByType_ReturnValue, const struct FPrimaryAssetId& K2Node_MakeStruct_PrimaryAssetId, class UObject* CallFunc_GetObjectFromPrimaryAssetId_ReturnValue, class UCurrencyConfig* K2Node_DynamicCast_AsCurrency_Config, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_FNameIsNone_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void IsWithinMap(const struct FVector& Location, const struct FWorldMapConfig& WorldMapConfig, class UObject* __WorldContext, bool* InsideOf, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, double CallFunc_BreakVector_X_1, double CallFunc_BreakVector_Y_1, double CallFunc_BreakVector_Z_1, bool CallFunc_Not_PreBool_ReturnValue, double CallFunc_BreakVector_X_2, double CallFunc_BreakVector_Y_2, double CallFunc_BreakVector_Z_2, double CallFunc_BreakVector_X_3, double CallFunc_BreakVector_Y_3, double CallFunc_BreakVector_Z_3, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue_1, double CallFunc_BreakVector_X_4, double CallFunc_BreakVector_Y_4, double CallFunc_BreakVector_Z_4, double CallFunc_BreakVector_X_5, double CallFunc_BreakVector_Y_5, double CallFunc_BreakVector_Z_5, bool CallFunc_LessEqual_DoubleDouble_ReturnValue_2, bool CallFunc_LessEqual_DoubleDouble_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue);
	void SortUniformGridPanelByVisibility(class UUniformGridPanel* UniformGridPanel, int32 ColumnSize, class UObject* __WorldContext, class UUniformGridSlot* LocalGridSlot, class UWidget* LocalWidgetVar, int32 LocalNumVisibleChildren, int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, enum class ESlateVisibility CallFunc_GetVisibility_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Divide_IntInt_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue, int32 Temp_int_Variable, int32 Temp_int_Variable_1, class UWidget* CallFunc_GetChildAt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, class UUniformGridSlot* CallFunc_SlotAsUniformGridSlot_ReturnValue);
	void Get_World_Map_by_Player_Position(class UObject* __WorldContext, struct FWorldMapConfig* WorldMapConfig, bool* Found, int32 Temp_int_Array_Index_Variable, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, const class FString& CallFunc_GetCurrentLevelName_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, int32 Temp_int_Loop_Counter_Variable, const struct FConfigsManager& CallFunc_GetConfigsManager_ConfigsManager, bool CallFunc_GetConfigsManager_IsValid, int32 CallFunc_Add_IntInt_ReturnValue, const struct FWorldMapConfig& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsWithinMap_InsideOf, bool CallFunc_Contains_ReturnValue);
	void GetConfigsManager(class UObject* __WorldContext, struct FConfigsManager* ConfigsManager, bool* IsValid, const struct FConfigsManager& CallFunc_GetConfigsManagerForBP_ConfigsManager, bool CallFunc_GetConfigsManagerForBP_ReturnValue);
	void AreCheatsEnabled(class UObject* Context, class UObject* __WorldContext, bool* Result, class AValeriaCharacter* CharacterCached, enum class EValeriaFuncResult CallFunc_GetValeriaCharacter_OutResult, class AValeriaCharacter* CallFunc_GetValeriaCharacter_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UDebugInfoComponent* CallFunc_GetDebugInfoComponent_ReturnValue, bool CallFunc_AreCheatsEnabled_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void GetItemStorageCategoryIcon(enum class EItemStorageCategory Category, class UObject* __WorldContext, class UTexture2D** Name, enum class EItemStorageCategory Temp_byte_Variable, class UTexture2D* Temp_object_Variable, class UTexture2D* Temp_object_Variable_1, class UTexture2D* Temp_object_Variable_2, class UTexture2D* Temp_object_Variable_3, class UTexture2D* Temp_object_Variable_4, class UTexture2D* Temp_object_Variable_5, class UTexture2D* Temp_object_Variable_6, class UTexture2D* Temp_object_Variable_7, class UTexture2D* Temp_object_Variable_8, class UTexture2D* Temp_object_Variable_9, class UTexture2D* Temp_object_Variable_10, class UTexture2D* Temp_object_Variable_11, class UTexture2D* Temp_object_Variable_12, class UTexture2D* Temp_object_Variable_13, class UTexture2D* K2Node_Select_Default);
	void GetItemQualityName(enum class EItemQuality ItemQuality, class UObject* __WorldContext, class FText* Name, enum class EItemQuality Temp_byte_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, class FText Temp_text_Variable_4, class FText Temp_text_Variable_5, class FText Temp_text_Variable_6, class FText K2Node_Select_Default);
	void GetItemQualityColor(enum class EItemQuality ItemQuality, class UObject* __WorldContext, struct FLinearColor* Color, enum class EItemQuality Temp_byte_Variable, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable_1, const struct FLinearColor& Temp_struct_Variable_2, const struct FLinearColor& Temp_struct_Variable_3, const struct FLinearColor& Temp_struct_Variable_4, const struct FLinearColor& Temp_struct_Variable_5, const struct FLinearColor& Temp_struct_Variable_6, const struct FLinearColor& K2Node_Select_Default);
	void GetItemRarityName(enum class EItemRarity ItemRarity, class UObject* __WorldContext, class FText* Name, enum class EItemRarity Temp_byte_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, class FText Temp_text_Variable_4, class FText Temp_text_Variable_5, class FText Temp_text_Variable_6, class FText K2Node_Select_Default);
	void GetItemRarityColor(enum class EItemRarity ItemRarity, class UObject* __WorldContext, struct FLinearColor* Color, enum class EItemRarity Temp_byte_Variable, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable_1, const struct FLinearColor& Temp_struct_Variable_2, const struct FLinearColor& Temp_struct_Variable_3, const struct FLinearColor& Temp_struct_Variable_4, const struct FLinearColor& Temp_struct_Variable_5, const struct FLinearColor& Temp_struct_Variable_6, const struct FLinearColor& K2Node_Select_Default);
	void GetCurrentDay(class UObject* __WorldContext, int32* CurrentDay, bool* IsValid, class UValeriaTimeManager* CallFunc_GetGameInstanceSubsystem_ReturnValue, class UValeriaTimeManager* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, bool CallFunc_IsValeriaTimeValid_ReturnValue, int32 CallFunc_GetCurrentDay_ReturnValue);
	void CanItemBeRequested_(TSoftObjectPtr<class UVAL_ItemTypeDefinitionAsset> ItemType, class UObject* __WorldContext, bool* IsRequestable_, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, class UVAL_ItemTypeDefinitionAsset* K2Node_DynamicCast_AsItem_Type_Definition, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void GetItemStorageCategoryName(enum class EItemStorageCategory Category, class UObject* __WorldContext, class FText* Name, enum class EItemStorageCategory Temp_byte_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, class FText Temp_text_Variable_4, class FText Temp_text_Variable_5, class FText Temp_text_Variable_6, class FText Temp_text_Variable_7, class FText Temp_text_Variable_8, class FText Temp_text_Variable_9, class FText Temp_text_Variable_10, class FText Temp_text_Variable_11, class FText Temp_text_Variable_12, class FText Temp_text_Variable_13, class FText K2Node_Select_Default);
	void CheckTimePassed(double TimePassed, double DeltaTime, double Period, class UObject* __WorldContext, double* NewTimePassed, bool* HasPassed, double TmpTimePassed, double CallFunc_Add_DoubleDouble_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue);
	void WorldPositionToUiPosition(const struct FVector& WorldPosition, const struct FBox2D& WorldBounds, const struct FVector2D& UiSize, enum class EWorldToUiScaling Scaling, class UObject* __WorldContext, struct FVector2D* UiPosition, const struct FVector2D& TmpWorldHalfExtents, const struct FVector2D& TmpWorldCenter, enum class EWorldToUiScaling Temp_byte_Variable, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_2, const struct FVector2D& K2Node_Select_Default, const struct FVector2D& CallFunc_Multiply_Vector2DFloat_ReturnValue, const struct FVector2D& CallFunc_Subtract_Vector2DVector2D_ReturnValue, const struct FVector2D& CallFunc_Conv_VectorToVector2D_ReturnValue, const struct FVector2D& CallFunc_Divide_Vector2DFloat_ReturnValue, const struct FVector2D& CallFunc_Add_Vector2DVector2D_ReturnValue, const struct FVector2D& CallFunc_Subtract_Vector2DVector2D_ReturnValue_1, const struct FVector2D& CallFunc_Divide_Vector2DVector2D_ReturnValue, const struct FVector2D& CallFunc_Multiply_Vector2DVector2D_ReturnValue);
	void IsAlmostBurnt_(class UCrafterComponent* Crafter, class UObject* __WorldContext, bool* IsAlmostBurnt, bool Temp_bool_Variable, int32 CallFunc_GetTimeRemainingTillBurntMs_ReturnValue, bool CallFunc_InRange_IntInt_ReturnValue, enum class ECrafterState CallFunc_GetCrafterState_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, bool Temp_bool_Variable_4, enum class ECrafterState Temp_byte_Variable, bool K2Node_Select_Default);
	void GetGwgTriplesTeamColor(bool GoodGuys, class UObject* __WorldContext, struct FLinearColor* Color, bool Temp_bool_Variable, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable_1, const struct FLinearColor& K2Node_Select_Default);
	void IsDebuggingOn_(class UObject* Context, class UObject* __WorldContext, bool* IsDebuggingOn, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UValeriaGameInstance* K2Node_DynamicCast_AsValeria_Game_Instance, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsDebuggingOn_ReturnValue);
	void FormatClockTimInValeriaDHM(const struct FClockTimeInValeria& Time, class UObject* __WorldContext, class FString* Result, const class FString& CallFunc_FormatClockTimeInValeria_Result, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2);
	void FormatClockTimeInValeria(const struct FClockTimeInValeria& Time, class UObject* __WorldContext, class FString* Result, const class FString& Temp_string_Variable, bool CallFunc_GreaterEqual_IntInt_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue_1, int32 CallFunc_Percent_IntInt_ReturnValue, const class FString& Temp_string_Variable_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool Temp_bool_Variable, int32 Temp_int_Variable, bool Temp_bool_Variable_1, int32 K2Node_Select_Default, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, const class FString& Temp_string_Variable_2, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& Temp_string_Variable_3, bool Temp_bool_Variable_2, const class FString& K2Node_Select_Default_1, const class FString& K2Node_Select_Default_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4);
	void GetTimeOfDayLerp(class UObject* Context, class UObject* __WorldContext, double* TimeOfDayLerp, bool* IsValid, class UValeriaTimeManager* CallFunc_GetGameInstanceSubsystem_ReturnValue, class UValeriaTimeManager* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, float CallFunc_GetTimeOfDayLerp_ReturnValue, bool CallFunc_IsValeriaTimeValid_ReturnValue, double K2Node_FunctionResult_TimeOfDayLerp_ImplicitCast);
	void GetItemCategoryName(enum class EItemCategory ItemCategory, class UObject* __WorldContext, class FText* Name, enum class EItemCategory Temp_byte_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, class FText Temp_text_Variable_4, class FText Temp_text_Variable_5, class FText Temp_text_Variable_6, class FText Temp_text_Variable_7, class FText Temp_text_Variable_8, class FText Temp_text_Variable_9, class FText Temp_text_Variable_10, class FText Temp_text_Variable_11, class FText Temp_text_Variable_12, class FText Temp_text_Variable_13, class FText Temp_text_Variable_14, class FText Temp_text_Variable_15, class FText Temp_text_Variable_16, class FText Temp_text_Variable_17, class FText Temp_text_Variable_18, class FText Temp_text_Variable_19, class FText Temp_text_Variable_20, class FText Temp_text_Variable_21, class FText Temp_text_Variable_22, class FText Temp_text_Variable_23, class FText Temp_text_Variable_24, class FText Temp_text_Variable_25, class FText Temp_text_Variable_26, class FText K2Node_Select_Default);
	void SetCanvasSlotToScreenCoords(const struct FVector2D& Screen_Position, class UCanvasPanelSlot* Canvas_Slot, class UObject* __WorldContext, const struct FAnchors& K2Node_MakeStruct_Anchors);
	void ChangeCanvasSlotPosition(class UCanvasPanelSlot* ToChange, class UCanvasPanelSlot* ToCopyFrom, class UObject* __WorldContext, int32 CallFunc_GetZOrder_ReturnValue, const struct FVector2D& CallFunc_GetSize_ReturnValue, const struct FAnchorData& CallFunc_GetLayout_ReturnValue, bool CallFunc_GetAutoSize_ReturnValue, const struct FVector2D& CallFunc_GetAlignment_ReturnValue, const struct FVector2D& CallFunc_GetPosition_ReturnValue, const struct FAnchors& CallFunc_GetAnchors_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue);
	void CenterMousePointer(class UObject* WorldContextObject, class UObject* __WorldContext, class APlayerController* CallFunc_GetPlayerController_ReturnValue, const struct FVector2D& CallFunc_GetViewportSize_ReturnValue, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue_1, int32 CallFunc_FTrunc_ReturnValue, int32 CallFunc_FTrunc_ReturnValue_1);
	void IsShiftDown_(class APlayerController* PlayerController, class UObject* __WorldContext, bool* Result, float CallFunc_GetInputKeyTimeDown_ReturnValue, float CallFunc_GetInputKeyTimeDown_ReturnValue_1, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, double CallFunc_Greater_DoubleDouble_A_ImplicitCast, double CallFunc_Greater_DoubleDouble_A_ImplicitCast_1);
	void ShowHideWidget(class UUserWidget* UserWidget, bool IsVisible_, bool UiBlocksInput_, class UObject* __WorldContext, bool TmpWasVisible, class UUserWidget* TmpUserWidgetToToggle, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, bool CallFunc_BooleanAND_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, bool CallFunc_NotEqual_BoolBool_ReturnValue, TScriptInterface<class IBPI_VisibilityChanges_C> K2Node_DynamicCast_AsBPI_Visibility_Changes, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsVisible_ReturnValue);
	void GetItemCategoryColor(enum class EItemCategory ItemCategory, class UObject* __WorldContext, struct FLinearColor* Color, enum class EItemCategory Temp_byte_Variable, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable_1, const struct FLinearColor& Temp_struct_Variable_2, const struct FLinearColor& Temp_struct_Variable_3, const struct FLinearColor& Temp_struct_Variable_4, const struct FLinearColor& Temp_struct_Variable_5, const struct FLinearColor& Temp_struct_Variable_6, const struct FLinearColor& Temp_struct_Variable_7, const struct FLinearColor& Temp_struct_Variable_8, const struct FLinearColor& Temp_struct_Variable_9, const struct FLinearColor& Temp_struct_Variable_10, const struct FLinearColor& Temp_struct_Variable_11, const struct FLinearColor& Temp_struct_Variable_12, const struct FLinearColor& Temp_struct_Variable_13, const struct FLinearColor& Temp_struct_Variable_14, const struct FLinearColor& Temp_struct_Variable_15, const struct FLinearColor& Temp_struct_Variable_16, const struct FLinearColor& Temp_struct_Variable_17, const struct FLinearColor& Temp_struct_Variable_18, const struct FLinearColor& Temp_struct_Variable_19, const struct FLinearColor& Temp_struct_Variable_20, const struct FLinearColor& Temp_struct_Variable_21, const struct FLinearColor& Temp_struct_Variable_22, const struct FLinearColor& Temp_struct_Variable_23, const struct FLinearColor& Temp_struct_Variable_24, const struct FLinearColor& Temp_struct_Variable_25, const struct FLinearColor& Temp_struct_Variable_26, const struct FLinearColor& K2Node_Select_Default);
};

}


