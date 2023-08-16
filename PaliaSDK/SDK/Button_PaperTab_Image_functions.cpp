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


// Function Button_PaperTab_Image.Button_PaperTab_Image_C.PreConstruct
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UButton_PaperTab_Image_C::PreConstruct(bool InIsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Button_PaperTab_Image_C", "PreConstruct");

	Params::UButton_PaperTab_Image_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = InIsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Button_PaperTab_Image.Button_PaperTab_Image_C.SetIsActiveTabButton
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bIsActive                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UButton_PaperTab_Image_C::SetIsActiveTabButton(bool InbIsActive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Button_PaperTab_Image_C", "SetIsActiveTabButton");

	Params::UButton_PaperTab_Image_C_SetIsActiveTabButton_Params Parms{};

	Parms.bIsActive = InbIsActive;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Button_PaperTab_Image.Button_PaperTab_Image_C.ExecuteUbergraph_Button_PaperTab_Image
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bIsActive                                           (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UImage*                      CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USizeBox*                    CallFunc_SpawnObject_ReturnValue_1                               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_SetContent_ReturnValue                                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UVALUI_ButtonStyle*          K2Node_Select_Default                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     ()
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_1                                   ()
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOverlay*                    CallFunc_SpawnObject_ReturnValue_2                               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UOverlaySlot*                CallFunc_AddChildToOverlay_ReturnValue                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_SetContent_ReturnValue_1                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UButtonSlot*                 K2Node_DynamicCast_AsButton_Slot                                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_Select_Default_1                                          ()
// float                              CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UButton_PaperTab_Image_C::ExecuteUbergraph_Button_PaperTab_Image(int32 InEntryPoint, bool InK2Node_Event_bIsActive, class UImage* InCallFunc_SpawnObject_ReturnValue, bool InTemp_bool_Variable, class USizeBox* InCallFunc_SpawnObject_ReturnValue_1, class UPanelSlot* InCallFunc_SetContent_ReturnValue, class UVALUI_ButtonStyle* InK2Node_Select_Default, const struct FSlateColor& InK2Node_MakeStruct_SlateColor, const struct FSlateColor& InK2Node_MakeStruct_SlateColor_1, bool InK2Node_Event_IsDesignTime, class UOverlay* InCallFunc_SpawnObject_ReturnValue_2, class UOverlaySlot* InCallFunc_AddChildToOverlay_ReturnValue, class UPanelSlot* InCallFunc_SetContent_ReturnValue_1, class UButtonSlot* InK2Node_DynamicCast_AsButton_Slot, bool InK2Node_DynamicCast_bSuccess, bool InTemp_bool_Variable_1, const struct FSlateColor& InK2Node_Select_Default_1, float InCallFunc_SetWidthOverride_InWidthOverride_ImplicitCast, float InCallFunc_SetHeightOverride_InHeightOverride_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Button_PaperTab_Image_C", "ExecuteUbergraph_Button_PaperTab_Image");

	Params::UButton_PaperTab_Image_C_ExecuteUbergraph_Button_PaperTab_Image_Params Parms{};

	Parms.EntryPoint = InEntryPoint;
	Parms.K2Node_Event_bIsActive = InK2Node_Event_bIsActive;
	Parms.CallFunc_SpawnObject_ReturnValue = InCallFunc_SpawnObject_ReturnValue;
	Parms.Temp_bool_Variable = InTemp_bool_Variable;
	Parms.CallFunc_SpawnObject_ReturnValue_1 = InCallFunc_SpawnObject_ReturnValue_1;
	Parms.CallFunc_SetContent_ReturnValue = InCallFunc_SetContent_ReturnValue;
	Parms.K2Node_Select_Default = InK2Node_Select_Default;
	Parms.K2Node_MakeStruct_SlateColor = InK2Node_MakeStruct_SlateColor;
	Parms.K2Node_MakeStruct_SlateColor_1 = InK2Node_MakeStruct_SlateColor_1;
	Parms.K2Node_Event_IsDesignTime = InK2Node_Event_IsDesignTime;
	Parms.CallFunc_SpawnObject_ReturnValue_2 = InCallFunc_SpawnObject_ReturnValue_2;
	Parms.CallFunc_AddChildToOverlay_ReturnValue = InCallFunc_AddChildToOverlay_ReturnValue;
	Parms.CallFunc_SetContent_ReturnValue_1 = InCallFunc_SetContent_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsButton_Slot = InK2Node_DynamicCast_AsButton_Slot;
	Parms.K2Node_DynamicCast_bSuccess = InK2Node_DynamicCast_bSuccess;
	Parms.Temp_bool_Variable_1 = InTemp_bool_Variable_1;
	Parms.K2Node_Select_Default_1 = InK2Node_Select_Default_1;
	Parms.CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast = InCallFunc_SetWidthOverride_InWidthOverride_ImplicitCast;
	Parms.CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast = InCallFunc_SetHeightOverride_InHeightOverride_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
