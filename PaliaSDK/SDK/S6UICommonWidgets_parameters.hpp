#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x1 (0x1 - 0x0)
// Function S6UICommonWidgets.S6UI_CommonButton_Styled.SetIsDropShadow
struct US6UI_CommonButton_Styled_SetIsDropShadow_Params
{
public:
	bool                                         bEnable;                                           // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function S6UICommonWidgets.S6UI_CommonButton_Styled.SetCommonButtonStyle
struct US6UI_CommonButton_Styled_SetCommonButtonStyle_Params
{
public:
	TSubclassOf<class US6UI_CommonButtonStyle>   InStyle;                                           // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function S6UICommonWidgets.S6UI_EditableRichText.Undo
struct US6UI_EditableRichText_Undo_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function S6UICommonWidgets.S6UI_EditableRichText.SetTextStyleSet
struct US6UI_EditableRichText_SetTextStyleSet_Params
{
public:
	class UDataTable*                            NewTextStyleSet;                                   // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function S6UICommonWidgets.S6UI_EditableRichText.SetText
struct US6UI_EditableRichText_SetText_Params
{
public:
	class FText                                  InText;                                            // 0x0(0x18)(Parm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function S6UICommonWidgets.S6UI_EditableRichText.SetJustification
struct US6UI_EditableRichText_SetJustification_Params
{
public:
	enum class ETextJustify                      InJustification;                                   // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function S6UICommonWidgets.S6UI_EditableRichText.SetIsReadOnly
struct US6UI_EditableRichText_SetIsReadOnly_Params
{
public:
	bool                                         InbIsReadyOnly;                                    // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function S6UICommonWidgets.S6UI_EditableRichText.SetHintText
struct US6UI_EditableRichText_SetHintText_Params
{
public:
	class FText                                  InHintText;                                        // 0x0(0x18)(Parm, NativeAccessSpecifierPublic)
};

// 0x2F0 (0x2F0 - 0x0)
// Function S6UICommonWidgets.S6UI_EditableRichText.SetDefaultTextStyle
struct US6UI_EditableRichText_SetDefaultTextStyle_Params
{
public:
	struct FEditableTextStyle                    InDefaultTextStyle;                                // 0x0(0x2F0)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// Function S6UICommonWidgets.S6UI_EditableRichText.SetDefaultFont
struct US6UI_EditableRichText_SetDefaultFont_Params
{
public:
	struct FSlateFontInfo                        InFontInfo;                                        // 0x0(0x58)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// Function S6UICommonWidgets.S6UI_EditableRichText.SetDefaultColorAndOpacity
struct US6UI_EditableRichText_SetDefaultColorAndOpacity_Params
{
public:
	struct FSlateColor                           InColorAndOpacity;                                 // 0x0(0x14)(Parm, NativeAccessSpecifierPublic)
};

// 0xD0 (0xD0 - 0x0)
// Function S6UICommonWidgets.S6UI_EditableRichText.SetDefaultCaretImage
struct US6UI_EditableRichText_SetDefaultCaretImage_Params
{
public:
	struct FSlateBrush                           InCaretImage;                                      // 0x0(0xD0)(Parm, NativeAccessSpecifierPublic)
};

// 0xD0 (0xD0 - 0x0)
// Function S6UICommonWidgets.S6UI_EditableRichText.SetDefaultBackgroundImageSelected
struct US6UI_EditableRichText_SetDefaultBackgroundImageSelected_Params
{
public:
	struct FSlateBrush                           InBackgroundImageSelected;                         // 0x0(0xD0)(Parm, NativeAccessSpecifierPublic)
};

// 0xD0 (0xD0 - 0x0)
// Function S6UICommonWidgets.S6UI_EditableRichText.SetDefaultBackgroundImageComposing
struct US6UI_EditableRichText_SetDefaultBackgroundImageComposing_Params
{
public:
	struct FSlateBrush                           InBackgroundImageComposing;                        // 0x0(0xD0)(Parm, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function S6UICommonWidgets.S6UI_EditableRichText.SelectAllText
struct US6UI_EditableRichText_SelectAllText_Params
{
public:
};

// 0x20 (0x20 - 0x0)
// DelegateFunction S6UICommonWidgets.S6UI_EditableRichText.S6UI_OnEditableTextCommittedEvent__DelegateSignature
struct US6UI_EditableRichText_S6UI_OnEditableTextCommittedEvent__DelegateSignature_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	enum class ETextCommit                       CommitMethod;                                      // 0x18(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BB9[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// DelegateFunction S6UICommonWidgets.S6UI_EditableRichText.S6UI_OnEditableTextChangedEvent__DelegateSignature
struct US6UI_EditableRichText_S6UI_OnEditableTextChangedEvent__DelegateSignature_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function S6UICommonWidgets.S6UI_EditableRichText.Redo
struct US6UI_EditableRichText_Redo_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function S6UICommonWidgets.S6UI_EditableRichText.PasteTextFromClipboard
struct US6UI_EditableRichText_PasteTextFromClipboard_Params
{
public:
};

// 0x18 (0x18 - 0x0)
// Function S6UICommonWidgets.S6UI_EditableRichText.InsertTextAtCursor
struct US6UI_EditableRichText_InsertTextAtCursor_Params
{
public:
	class FText                                  InText;                                            // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function S6UICommonWidgets.S6UI_EditableRichText.GetText
struct US6UI_EditableRichText_GetText_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function S6UICommonWidgets.S6UI_EditableRichText.GetSelectedText
struct US6UI_EditableRichText_GetSelectedText_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function S6UICommonWidgets.S6UI_EditableRichText.GetPlainText
struct US6UI_EditableRichText_GetPlainText_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function S6UICommonWidgets.S6UI_EditableRichText.GetDecoratorByClass
struct US6UI_EditableRichText_GetDecoratorByClass_Params
{
public:
	TSubclassOf<class US6UI_EditableRichTextDecorator> DecoratorClass;                                    // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class US6UI_EditableRichTextDecorator*       ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function S6UICommonWidgets.S6UI_EditableRichText.DeleteSelectedText
struct US6UI_EditableRichText_DeleteSelectedText_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function S6UICommonWidgets.S6UI_EditableRichText.CutSelectedTextToClipboard
struct US6UI_EditableRichText_CutSelectedTextToClipboard_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function S6UICommonWidgets.S6UI_EditableRichText.CopySelectedTextToClipboard
struct US6UI_EditableRichText_CopySelectedTextToClipboard_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function S6UICommonWidgets.S6UI_EditableRichText.ClearAllDefaultStyleOverrides
struct US6UI_EditableRichText_ClearAllDefaultStyleOverrides_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function S6UICommonWidgets.S6UI_EditableRichText.AnyTextSelected
struct US6UI_EditableRichText_AnyTextSelected_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function S6UICommonWidgets.S6UI_GridPanel.ClearFill
struct US6UI_GridPanel_ClearFill_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function S6UICommonWidgets.S6UI_OverlaySwitcher.SetActiveWidgetIndex
struct US6UI_OverlaySwitcher_SetActiveWidgetIndex_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function S6UICommonWidgets.S6UI_OverlaySwitcher.SetActiveWidget
struct US6UI_OverlaySwitcher_SetActiveWidget_Params
{
public:
	class UWidget*                               Widget;                                            // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function S6UICommonWidgets.S6UI_OverlaySwitcher.GetActiveWidgetIndex
struct US6UI_OverlaySwitcher_GetActiveWidgetIndex_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function S6UICommonWidgets.S6UI_OverlaySwitcher.GetActiveWidget
struct US6UI_OverlaySwitcher_GetActiveWidget_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function S6UICommonWidgets.S6UI_OverlaySwitcher.AddChildToOverlaySwitcher
struct US6UI_OverlaySwitcher_AddChildToOverlaySwitcher_Params
{
public:
	class UWidget*                               Content;                                           // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class US6UI_OverlaySwitcherSlot*             ReturnValue;                                       // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


