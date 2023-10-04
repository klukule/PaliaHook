#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x13A (0x78A - 0x650)
// BlueprintGeneratedClass Button_PaperTab_Image.Button_PaperTab_Image_C
class UButton_PaperTab_Image_C : public UVALUI_Button_Styled
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x650(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UVALUI_ButtonStyle*                    ActiveTabStyle;                                    // 0x658(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UVALUI_ButtonStyle*                    InactiveTabStyle;                                  // 0x660(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5179[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           IconBrush;                                         // 0x670(0xD0)(Edit, BlueprintVisible)
	double                                       FixedIconWidth;                                    // 0x740(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       FixedIconHeight;                                   // 0x748(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          ActiveIconTint;                                    // 0x750(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          InactiveIconTint;                                  // 0x760(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UImage*                                Image_Icon;                                        // 0x770(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FMargin                               IconPadding;                                       // 0x778(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EVerticalAlignment                IconVAlignment;                                    // 0x788(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EHorizontalAlignment              IconHAlignment;                                    // 0x789(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UButton_PaperTab_Image_C* GetDefaultObj();

	void PreConstruct(bool IsDesignTime);
	void SetIsActiveTabButton(bool bIsActive);
	void ExecuteUbergraph_Button_PaperTab_Image(int32 EntryPoint, bool K2Node_Event_bIsActive, class UImage* CallFunc_SpawnObject_ReturnValue, bool Temp_bool_Variable, class USizeBox* CallFunc_SpawnObject_ReturnValue_1, class UPanelSlot* CallFunc_SetContent_ReturnValue, class UVALUI_ButtonStyle* K2Node_Select_Default, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, bool K2Node_Event_IsDesignTime, class UOverlay* CallFunc_SpawnObject_ReturnValue_2, class UOverlaySlot* CallFunc_AddChildToOverlay_ReturnValue, class UPanelSlot* CallFunc_SetContent_ReturnValue_1, class UButtonSlot* K2Node_DynamicCast_AsButton_Slot, bool K2Node_DynamicCast_bSuccess, bool Temp_bool_Variable_1, const struct FSlateColor& K2Node_Select_Default_1, float CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast, float CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast);
};

}


