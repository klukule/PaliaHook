#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x100 (0x100 - 0x0)
// ScriptStruct S6UICommonWidgets.S6UI_BackgroundBlurSettings
struct FS6UI_BackgroundBlurSettings
{
public:
	struct FLinearColor                          Color;                                             // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMargin                               Padding;                                           // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	enum class EHorizontalAlignment              HorizontalAlignment;                               // 0x20(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EVerticalAlignment                VerticalAlignment;                                 // 0x21(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bApplyAlphaToBlur;                                 // 0x22(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D54[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        BlurStrength;                                      // 0x24(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOverrideAutoRadiusCalculation;                    // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D58[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        BlurRadius;                                        // 0x2C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateBrush                           LowQualityFallbackBrush;                           // 0x30(0xD0)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0x2F8 (0x300 - 0x8)
// ScriptStruct S6UICommonWidgets.S6UI_FEditableRichTextStyleRow
struct FS6UI_FEditableRichTextStyleRow : public FTableRowBase
{
public:
	uint8                                        Pad_D5F[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEditableTextStyle                    TextStyle;                                         // 0x10(0x2F0)(Edit, NativeAccessSpecifierPublic)
};

// 0x50 (0x58 - 0x8)
// ScriptStruct S6UICommonWidgets.S6UI_FRichImageRow_Soft
struct FS6UI_FRichImageRow_Soft : public FTableRowBase
{
public:
	TSoftObjectPtr<class UTexture2D>             ImageTexture;                                      // 0x8(0x30)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             ImageSize;                                         // 0x38(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          TintColor;                                         // 0x48(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x758 (0x760 - 0x8)
// ScriptStruct S6UICommonWidgets.S6UI_RichTextHyperlinkStyle
struct FS6UI_RichTextHyperlinkStyle : public FTableRowBase
{
public:
	uint8                                        Pad_D64[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHyperlinkStyle                       Style;                                             // 0x10(0x750)(Edit, NativeAccessSpecifierPublic)
};

}


