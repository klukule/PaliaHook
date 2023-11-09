#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPFL_CharacterCustomizationUI.BPFL_CharacterCustomizationUI_C
class UBPFL_CharacterCustomizationUI_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UBPFL_CharacterCustomizationUI_C* GetDefaultObj();

	void CheckHasAllItemEntitlementsForIdSet(TSet<struct FGuid> Ids, class UObject* __WorldContext, bool* HasAllEntitlements, TArray<struct FGuid>& CallFunc_Set_ToArray_Result, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, const struct FGuid& CallFunc_Array_Get_Item, bool CallFunc_CheckHasItemEntitlementById_HasEntitlement, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void CheckHasItemEntitlementById(const struct FGuid& ID, class UObject* __WorldContext, bool* HasEntitlement, class UVAL_EntitlementSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, bool CallFunc_HasEntitlement_ReturnValue);
	void CheckHasItemEntitlementByItem(class UVAL_CharacterCustomizationItemBase* Character_Customization_Item, class UObject* __WorldContext, bool* HasEntitlement, bool CallFunc_CheckHasItemEntitlementById_HasEntitlement, bool K2Node_SwitchEnum_CmpSuccess);
	void PopulateTileViewFromCharacterCustomizationItemClass(class UWBP_CharacterCustomization_TileView_C* Character_Customization_Tile_View, class UClass* Item_Class, bool Is_Unequippable, enum class EVAL_CharacterBodyType Body_Type, class UObject* __WorldContext, class UVALUI_TileView_Styled* Tile_View, const struct FVAL_CharCustomization_AssetData& TileAssetData, class AValeriaCharacter* ValeriaCharacter, const TArray<struct FAssetData>& AssetData, class UVAL_EntitlementSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, enum class EValeriaFuncResult CallFunc_GetValeriaCharacter_OutResult, class AValeriaCharacter* CallFunc_GetValeriaCharacter_ReturnValue, TSet<struct FGuid> CallFunc_GetEntitlements_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UVALUI_TileView_Styled* CallFunc_GetTileView_Tile_View, int32 Temp_int_Array_Index_Variable, class UTileItem_CharacterCustomizationItem_C* CallFunc_SpawnObject_ReturnValue, TArray<class UObject*>& CallFunc_GetListItems_ReturnValue, class UTileItem_CharacterCustomizationItem_C* CallFunc_SpawnObject_ReturnValue_1, bool CallFunc_GetItemEnabledInCharacterCustomizationItemsConfig_ReturnValue, class UVAL_CharacterCustomizationComponent* CallFunc_GetCharacterCustomizationComponent_ReturnValue, const struct FAssetData& CallFunc_Array_Get_Item, class FName CallFunc_GetLoadoutSlotNameForItemClass_ReturnValue, const struct FVAL_CharCustomization_AssetData& CallFunc_GenerateTileAssetData_ReturnValue, class UVAL_CharacterCustomizationItemBase* CallFunc_TryGetItemInLoadout_OutItem, bool CallFunc_TryGetItemInLoadout_ReturnValue, TSoftObjectPtr<class UVAL_CharacterCustomizationItemBase> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, TArray<struct FAssetData>& CallFunc_GetAllCharacterCustomizationItems_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FVAL_CharCustomization_AssetData& K2Node_MakeStruct_VAL_CharCustomization_AssetData);
	void Set_New_For_Items_In_List_View(class UListView* List_View, class UObject* __WorldContext, enum class EValeriaFuncResult CallFunc_GetValeriaPlayerController_OutResult, class AValeriaPlayerController* CallFunc_GetValeriaPlayerController_ReturnValue, TArray<class UObject*>& CallFunc_GetListItems_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class UObject* CallFunc_Array_Get_Item, class UTileItem_CharacterCustomizationItem_C* K2Node_DynamicCast_AsTile_Item_Character_Customization_Item, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_WasPremiumStoreEntitlementSeen_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void Set_Owned_For_Items_In_List_View(class UListView* ListView, TArray<class UObject*>& Objects, class UObject* __WorldContext, int32 Temp_int_Loop_Counter_Variable, class UVAL_EntitlementSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class UObject* CallFunc_Array_Get_Item, class UTileItem_CharacterCustomizationItem_C* K2Node_DynamicCast_AsTile_Item_Character_Customization_Item, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValidSoftObjectReference_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_HasEntitlement_ReturnValue);
	void Set_Selected_Item_In_Tile_View_From_Char_Cust_Item(TSoftObjectPtr<class UVAL_CharacterCustomizationItemBase> Item, class UVALUI_TileView_Styled* Tile_View, class UObject* __WorldContext, int32 Temp_int_Array_Index_Variable, TArray<class UObject*>& CallFunc_GetListItems_ReturnValue, class UObject* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UTileItem_CharacterCustomizationItem_C* K2Node_DynamicCast_AsTile_Item_Character_Customization_Item, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_SoftObjectReference_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
};

}


