#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPFL_CharacterCustomizationUI.BPFL_CharacterCustomizationUI_C
// (None)

class UClass* UBPFL_CharacterCustomizationUI_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPFL_CharacterCustomizationUI_C");

	return Clss;
}


// BPFL_CharacterCustomizationUI_C BPFL_CharacterCustomizationUI.Default__BPFL_CharacterCustomizationUI_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPFL_CharacterCustomizationUI_C* UBPFL_CharacterCustomizationUI_C::GetDefaultObj()
{
	static class UBPFL_CharacterCustomizationUI_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPFL_CharacterCustomizationUI_C*>(UBPFL_CharacterCustomizationUI_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPFL_CharacterCustomizationUI.BPFL_CharacterCustomizationUI_C.CheckHasAllItemEntitlementsForIdSet
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TSet<struct FGuid>                 Ids                                                              (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               HasAllEntitlements                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FGuid>               CallFunc_Set_ToArray_Result                                      (ReferenceParm)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckHasItemEntitlementById_HasEntitlement              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_CharacterCustomizationUI_C::CheckHasAllItemEntitlementsForIdSet(TSet<struct FGuid> Ids, class UObject* __WorldContext, bool* HasAllEntitlements, TArray<struct FGuid>& CallFunc_Set_ToArray_Result, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, const struct FGuid& CallFunc_Array_Get_Item, bool CallFunc_CheckHasItemEntitlementById_HasEntitlement, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_CharacterCustomizationUI_C", "CheckHasAllItemEntitlementsForIdSet");

	Params::UBPFL_CharacterCustomizationUI_C_CheckHasAllItemEntitlementsForIdSet_Params Parms{};

	Parms.Ids = Ids;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_Set_ToArray_Result = CallFunc_Set_ToArray_Result;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_CheckHasItemEntitlementById_HasEntitlement = CallFunc_CheckHasItemEntitlementById_HasEntitlement;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (HasAllEntitlements != nullptr)
		*HasAllEntitlements = Parms.HasAllEntitlements;

}


// Function BPFL_CharacterCustomizationUI.BPFL_CharacterCustomizationUI_C.CheckHasItemEntitlementById
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FGuid                       ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               HasEntitlement                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVAL_EntitlementSubsystem*   CallFunc_GetLocalPlayerSubsystem_ReturnValue                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasEntitlement_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_CharacterCustomizationUI_C::CheckHasItemEntitlementById(const struct FGuid& ID, class UObject* __WorldContext, bool* HasEntitlement, class UVAL_EntitlementSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, bool CallFunc_HasEntitlement_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_CharacterCustomizationUI_C", "CheckHasItemEntitlementById");

	Params::UBPFL_CharacterCustomizationUI_C_CheckHasItemEntitlementById_Params Parms{};

	Parms.ID = ID;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetLocalPlayerSubsystem_ReturnValue = CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	Parms.CallFunc_HasEntitlement_ReturnValue = CallFunc_HasEntitlement_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (HasEntitlement != nullptr)
		*HasEntitlement = Parms.HasEntitlement;

}


// Function BPFL_CharacterCustomizationUI.BPFL_CharacterCustomizationUI_C.CheckHasItemEntitlementByItem
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UVAL_CharacterCustomizationItemBase*Character_Customization_Item                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               HasEntitlement                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckHasItemEntitlementById_HasEntitlement              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_CharacterCustomizationUI_C::CheckHasItemEntitlementByItem(class UVAL_CharacterCustomizationItemBase* Character_Customization_Item, class UObject* __WorldContext, bool* HasEntitlement, bool CallFunc_CheckHasItemEntitlementById_HasEntitlement, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_CharacterCustomizationUI_C", "CheckHasItemEntitlementByItem");

	Params::UBPFL_CharacterCustomizationUI_C_CheckHasItemEntitlementByItem_Params Parms{};

	Parms.Character_Customization_Item = Character_Customization_Item;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_CheckHasItemEntitlementById_HasEntitlement = CallFunc_CheckHasItemEntitlementById_HasEntitlement;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (HasEntitlement != nullptr)
		*HasEntitlement = Parms.HasEntitlement;

}


// Function BPFL_CharacterCustomizationUI.BPFL_CharacterCustomizationUI_C.PopulateTileViewFromCharacterCustomizationItemClass
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_CharacterCustomization_TileView_C*Character_Customization_Tile_View                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Item_Class                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Is_Unequippable                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EVAL_CharacterBodyType  Body_Type                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UVALUI_TileView_Styled*      Tile_View                                                        (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FVAL_CharCustomization_AssetDataTileAssetData                                                    (Edit, BlueprintVisible)
// class AValeriaCharacter*           ValeriaCharacter                                                 (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// TArray<struct FAssetData>          AssetData                                                        (Edit, BlueprintVisible)
// class UVAL_EntitlementSubsystem*   CallFunc_GetLocalPlayerSubsystem_ReturnValue                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EValeriaFuncResult      CallFunc_GetValeriaCharacter_OutResult                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValeriaCharacter*           CallFunc_GetValeriaCharacter_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TSet<struct FGuid>                 CallFunc_GetEntitlements_ReturnValue                             (ConstParm)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVALUI_TileView_Styled*      CallFunc_GetTileView_Tile_View                                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTileItem_CharacterCustomizationItem_C*CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class UObject*>             CallFunc_GetListItems_ReturnValue                                (ConstParm, ReferenceParm)
// class UTileItem_CharacterCustomizationItem_C*CallFunc_SpawnObject_ReturnValue_1                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetItemEnabledInCharacterCustomizationItemsConfig_ReturnValue(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVAL_CharacterCustomizationComponent*CallFunc_GetCharacterCustomizationComponent_ReturnValue          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FAssetData                  CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// class FName                        CallFunc_GetLoadoutSlotNameForItemClass_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVAL_CharCustomization_AssetDataCallFunc_GenerateTileAssetData_ReturnValue                       (None)
// class UVAL_CharacterCustomizationItemBase*CallFunc_TryGetItemInLoadout_OutItem                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TryGetItemInLoadout_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UVAL_CharacterCustomizationItemBase>CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue            (UObjectWrapper, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FAssetData>          CallFunc_GetAllCharacterCustomizationItems_ReturnValue           (ReferenceParm)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVAL_CharCustomization_AssetDataK2Node_MakeStruct_VAL_CharCustomization_AssetData                (None)

void UBPFL_CharacterCustomizationUI_C::PopulateTileViewFromCharacterCustomizationItemClass(class UWBP_CharacterCustomization_TileView_C* Character_Customization_Tile_View, class UClass* Item_Class, bool Is_Unequippable, enum class EVAL_CharacterBodyType Body_Type, class UObject* __WorldContext, class UVALUI_TileView_Styled* Tile_View, const struct FVAL_CharCustomization_AssetData& TileAssetData, class AValeriaCharacter* ValeriaCharacter, const TArray<struct FAssetData>& AssetData, class UVAL_EntitlementSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, enum class EValeriaFuncResult CallFunc_GetValeriaCharacter_OutResult, class AValeriaCharacter* CallFunc_GetValeriaCharacter_ReturnValue, TSet<struct FGuid> CallFunc_GetEntitlements_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UVALUI_TileView_Styled* CallFunc_GetTileView_Tile_View, int32 Temp_int_Array_Index_Variable, class UTileItem_CharacterCustomizationItem_C* CallFunc_SpawnObject_ReturnValue, TArray<class UObject*>& CallFunc_GetListItems_ReturnValue, class UTileItem_CharacterCustomizationItem_C* CallFunc_SpawnObject_ReturnValue_1, bool CallFunc_GetItemEnabledInCharacterCustomizationItemsConfig_ReturnValue, class UVAL_CharacterCustomizationComponent* CallFunc_GetCharacterCustomizationComponent_ReturnValue, const struct FAssetData& CallFunc_Array_Get_Item, class FName CallFunc_GetLoadoutSlotNameForItemClass_ReturnValue, const struct FVAL_CharCustomization_AssetData& CallFunc_GenerateTileAssetData_ReturnValue, class UVAL_CharacterCustomizationItemBase* CallFunc_TryGetItemInLoadout_OutItem, bool CallFunc_TryGetItemInLoadout_ReturnValue, TSoftObjectPtr<class UVAL_CharacterCustomizationItemBase> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, TArray<struct FAssetData>& CallFunc_GetAllCharacterCustomizationItems_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FVAL_CharCustomization_AssetData& K2Node_MakeStruct_VAL_CharCustomization_AssetData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_CharacterCustomizationUI_C", "PopulateTileViewFromCharacterCustomizationItemClass");

	Params::UBPFL_CharacterCustomizationUI_C_PopulateTileViewFromCharacterCustomizationItemClass_Params Parms{};

	Parms.Character_Customization_Tile_View = Character_Customization_Tile_View;
	Parms.Item_Class = Item_Class;
	Parms.Is_Unequippable = Is_Unequippable;
	Parms.Body_Type = Body_Type;
	Parms.__WorldContext = __WorldContext;
	Parms.Tile_View = Tile_View;
	Parms.TileAssetData = TileAssetData;
	Parms.ValeriaCharacter = ValeriaCharacter;
	Parms.AssetData = AssetData;
	Parms.CallFunc_GetLocalPlayerSubsystem_ReturnValue = CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	Parms.CallFunc_GetValeriaCharacter_OutResult = CallFunc_GetValeriaCharacter_OutResult;
	Parms.CallFunc_GetValeriaCharacter_ReturnValue = CallFunc_GetValeriaCharacter_ReturnValue;
	Parms.CallFunc_GetEntitlements_ReturnValue = CallFunc_GetEntitlements_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetTileView_Tile_View = CallFunc_GetTileView_Tile_View;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;
	Parms.CallFunc_GetListItems_ReturnValue = CallFunc_GetListItems_ReturnValue;
	Parms.CallFunc_SpawnObject_ReturnValue_1 = CallFunc_SpawnObject_ReturnValue_1;
	Parms.CallFunc_GetItemEnabledInCharacterCustomizationItemsConfig_ReturnValue = CallFunc_GetItemEnabledInCharacterCustomizationItemsConfig_ReturnValue;
	Parms.CallFunc_GetCharacterCustomizationComponent_ReturnValue = CallFunc_GetCharacterCustomizationComponent_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetLoadoutSlotNameForItemClass_ReturnValue = CallFunc_GetLoadoutSlotNameForItemClass_ReturnValue;
	Parms.CallFunc_GenerateTileAssetData_ReturnValue = CallFunc_GenerateTileAssetData_ReturnValue;
	Parms.CallFunc_TryGetItemInLoadout_OutItem = CallFunc_TryGetItemInLoadout_OutItem;
	Parms.CallFunc_TryGetItemInLoadout_ReturnValue = CallFunc_TryGetItemInLoadout_ReturnValue;
	Parms.CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue = CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_GetAllCharacterCustomizationItems_ReturnValue = CallFunc_GetAllCharacterCustomizationItems_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_MakeStruct_VAL_CharCustomization_AssetData = K2Node_MakeStruct_VAL_CharCustomization_AssetData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPFL_CharacterCustomizationUI.BPFL_CharacterCustomizationUI_C.Set New For Items In List View
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UListView*                   List_View                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EValeriaFuncResult      CallFunc_GetValeriaPlayerController_OutResult                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValeriaPlayerController*    CallFunc_GetValeriaPlayerController_ReturnValue                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class UObject*>             CallFunc_GetListItems_ReturnValue                                (ConstParm, ReferenceParm)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTileItem_CharacterCustomizationItem_C*K2Node_DynamicCast_AsTile_Item_Character_Customization_Item      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_WasPremiumStoreEntitlementSeen_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_CharacterCustomizationUI_C::Set_New_For_Items_In_List_View(class UListView* List_View, class UObject* __WorldContext, enum class EValeriaFuncResult CallFunc_GetValeriaPlayerController_OutResult, class AValeriaPlayerController* CallFunc_GetValeriaPlayerController_ReturnValue, TArray<class UObject*>& CallFunc_GetListItems_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class UObject* CallFunc_Array_Get_Item, class UTileItem_CharacterCustomizationItem_C* K2Node_DynamicCast_AsTile_Item_Character_Customization_Item, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_WasPremiumStoreEntitlementSeen_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_CharacterCustomizationUI_C", "Set New For Items In List View");

	Params::UBPFL_CharacterCustomizationUI_C_Set_New_For_Items_In_List_View_Params Parms{};

	Parms.List_View = List_View;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetValeriaPlayerController_OutResult = CallFunc_GetValeriaPlayerController_OutResult;
	Parms.CallFunc_GetValeriaPlayerController_ReturnValue = CallFunc_GetValeriaPlayerController_ReturnValue;
	Parms.CallFunc_GetListItems_ReturnValue = CallFunc_GetListItems_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsTile_Item_Character_Customization_Item = K2Node_DynamicCast_AsTile_Item_Character_Customization_Item;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_WasPremiumStoreEntitlementSeen_ReturnValue = CallFunc_WasPremiumStoreEntitlementSeen_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPFL_CharacterCustomizationUI.BPFL_CharacterCustomizationUI_C.Set Owned For Items In List View
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UListView*                   ListView                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<class UObject*>             Objects                                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVAL_EntitlementSubsystem*   CallFunc_GetLocalPlayerSubsystem_ReturnValue                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTileItem_CharacterCustomizationItem_C*K2Node_DynamicCast_AsTile_Item_Character_Customization_Item      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasEntitlement_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_CharacterCustomizationUI_C::Set_Owned_For_Items_In_List_View(class UListView* ListView, TArray<class UObject*>& Objects, class UObject* __WorldContext, int32 Temp_int_Loop_Counter_Variable, class UVAL_EntitlementSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class UObject* CallFunc_Array_Get_Item, class UTileItem_CharacterCustomizationItem_C* K2Node_DynamicCast_AsTile_Item_Character_Customization_Item, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValidSoftObjectReference_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_HasEntitlement_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_CharacterCustomizationUI_C", "Set Owned For Items In List View");

	Params::UBPFL_CharacterCustomizationUI_C_Set_Owned_For_Items_In_List_View_Params Parms{};

	Parms.ListView = ListView;
	Parms.Objects = Objects;
	Parms.__WorldContext = __WorldContext;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_GetLocalPlayerSubsystem_ReturnValue = CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsTile_Item_Character_Customization_Item = K2Node_DynamicCast_AsTile_Item_Character_Customization_Item;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue = CallFunc_IsValidSoftObjectReference_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_HasEntitlement_ReturnValue = CallFunc_HasEntitlement_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPFL_CharacterCustomizationUI.BPFL_CharacterCustomizationUI_C.Set Selected Item In Tile View From Char Cust Item
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UVAL_CharacterCustomizationItemBase>Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UVALUI_TileView_Styled*      Tile_View                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UObject*>             CallFunc_GetListItems_ReturnValue                                (ConstParm, ReferenceParm)
// class UObject*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTileItem_CharacterCustomizationItem_C*K2Node_DynamicCast_AsTile_Item_Character_Customization_Item      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_SoftObjectReference_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_CharacterCustomizationUI_C::Set_Selected_Item_In_Tile_View_From_Char_Cust_Item(TSoftObjectPtr<class UVAL_CharacterCustomizationItemBase> Item, class UVALUI_TileView_Styled* Tile_View, class UObject* __WorldContext, int32 Temp_int_Array_Index_Variable, TArray<class UObject*>& CallFunc_GetListItems_ReturnValue, class UObject* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UTileItem_CharacterCustomizationItem_C* K2Node_DynamicCast_AsTile_Item_Character_Customization_Item, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_SoftObjectReference_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_CharacterCustomizationUI_C", "Set Selected Item In Tile View From Char Cust Item");

	Params::UBPFL_CharacterCustomizationUI_C_Set_Selected_Item_In_Tile_View_From_Char_Cust_Item_Params Parms{};

	Parms.Item = Item;
	Parms.Tile_View = Tile_View;
	Parms.__WorldContext = __WorldContext;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetListItems_ReturnValue = CallFunc_GetListItems_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_DynamicCast_AsTile_Item_Character_Customization_Item = K2Node_DynamicCast_AsTile_Item_Character_Customization_Item;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_SoftObjectReference_ReturnValue = CallFunc_EqualEqual_SoftObjectReference_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


