#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

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
	uint8                                        Pad_41D6[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           IconBrush;                                         // 0x670(0xD0)(Edit, BlueprintVisible)
	double                                       FixedIconWidth;                                    // 0x740(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       FixedIconHeight;                                   // 0x748(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          ActiveIconTint;                                    // 0x750(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          InactiveIconTint;                                  // 0x760(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UImage*                                Image_Icon;                                        // 0x770(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FMargin                               IconPadding;                                       // 0x778(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EVerticalAlignment                IconVAlignment;                                    // 0x788(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EHorizontalAlignment              IconHAlignment;                                    // 0x789(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Button_PaperTab_Image_C");
		return Clss;
	}

	void PreConstruct(bool InIsDesignTime);
	void SetIsActiveTabButton(bool InbIsActive);
	void ExecuteUbergraph_Button_PaperTab_Image(int32 InEntryPoint, bool InK2Node_Event_bIsActive, class UImage* InCallFunc_SpawnObject_ReturnValue, bool InTemp_bool_Variable, class USizeBox* InCallFunc_SpawnObject_ReturnValue_1, class UPanelSlot* InCallFunc_SetContent_ReturnValue, class UVALUI_ButtonStyle* InK2Node_Select_Default, const struct FSlateColor& InK2Node_MakeStruct_SlateColor, const struct FSlateColor& InK2Node_MakeStruct_SlateColor_1, bool InK2Node_Event_IsDesignTime, class UOverlay* InCallFunc_SpawnObject_ReturnValue_2, class UOverlaySlot* InCallFunc_AddChildToOverlay_ReturnValue, class UPanelSlot* InCallFunc_SetContent_ReturnValue_1, class UButtonSlot* InK2Node_DynamicCast_AsButton_Slot, bool InK2Node_DynamicCast_bSuccess, bool InTemp_bool_Variable_1, const struct FSlateColor& InK2Node_Select_Default_1, float InCallFunc_SetWidthOverride_InWidthOverride_ImplicitCast, float InCallFunc_SetHeightOverride_InHeightOverride_ImplicitCast);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
