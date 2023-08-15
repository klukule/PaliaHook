#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x4C (0x4C - 0x0)
// UserDefinedStruct F_Button_Primary_Settings.F_Button_Primary_Settings
struct FF_Button_Primary_Settings
{
public:
	class FText                                  ButtonText_18_B3AE7F5E41230861051B0A8B8C8F592A;    // 0x0(0x18)(Edit, BlueprintVisible)
	enum class ESlateVisibility                  LeftSlotVisibility_19_34D9086E4F971C2661144596179F88B8; // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  RightSlotVisibility_20_FE4CD6174404DA9E772E40AF8B8C6989; // 0x19(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4270[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UVALUI_TextBlockStyle*                 TextStyle_Pressed_21_97389A0F4CDC262AE56C47A4F9FAF0A6; // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UVALUI_TextBlockStyle*                 TextStyle_Normal_22_E70EEC6545B6E4690D4848B41537F9C5; // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UVALUI_ButtonStyle*                    ButtonStyle_Override_24_FB713911401A8553E6EFA199CF3A33DC; // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         ShouldOverrideButtonStyle_16_95ED882649C3D64FD1602081D436146E; // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4271[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMargin                               TextPadding_23_D0F2CE684E502BE224FFAD9C1C49D805;   // 0x3C(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
