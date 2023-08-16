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


// Function S6UICommonWidgets.S6UI_CommonButton_Styled.SetIsDropShadow
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bEnable                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void US6UI_CommonButton_Styled::SetIsDropShadow(bool InbEnable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6UI_CommonButton_Styled", "SetIsDropShadow");

	Params::US6UI_CommonButton_Styled_SetIsDropShadow_Params Parms{};

	Parms.bEnable = InbEnable;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function S6UICommonWidgets.S6UI_CommonButton_Styled.SetCommonButtonStyle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TSubclassOf<class US6UI_CommonButtonStyle>InStyle                                                          (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void US6UI_CommonButton_Styled::SetCommonButtonStyle(TSubclassOf<class US6UI_CommonButtonStyle> InInStyle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6UI_CommonButton_Styled", "SetCommonButtonStyle");

	Params::US6UI_CommonButton_Styled_SetCommonButtonStyle_Params Parms{};

	Parms.InStyle = InInStyle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function S6UICommonWidgets.S6UI_EditableRichText.Undo
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void US6UI_EditableRichText::Undo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6UI_EditableRichText", "Undo");

	Params::US6UI_EditableRichText_Undo_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function S6UICommonWidgets.S6UI_EditableRichText.SetTextStyleSet
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UDataTable*                  NewTextStyleSet                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void US6UI_EditableRichText::SetTextStyleSet(class UDataTable* InNewTextStyleSet)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6UI_EditableRichText", "SetTextStyleSet");

	Params::US6UI_EditableRichText_SetTextStyleSet_Params Parms{};

	Parms.NewTextStyleSet = InNewTextStyleSet;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function S6UICommonWidgets.S6UI_EditableRichText.SetText
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FText                        InText                                                           (Parm, NativeAccessSpecifierPublic)

void US6UI_EditableRichText::SetText(class FText InInText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6UI_EditableRichText", "SetText");

	Params::US6UI_EditableRichText_SetText_Params Parms{};

	Parms.InText = InInText;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function S6UICommonWidgets.S6UI_EditableRichText.SetJustification
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ETextJustify            InJustification                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void US6UI_EditableRichText::SetJustification(enum class ETextJustify InInJustification)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6UI_EditableRichText", "SetJustification");

	Params::US6UI_EditableRichText_SetJustification_Params Parms{};

	Parms.InJustification = InInJustification;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function S6UICommonWidgets.S6UI_EditableRichText.SetIsReadOnly
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               InbIsReadyOnly                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void US6UI_EditableRichText::SetIsReadOnly(bool InInbIsReadyOnly)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6UI_EditableRichText", "SetIsReadOnly");

	Params::US6UI_EditableRichText_SetIsReadOnly_Params Parms{};

	Parms.InbIsReadyOnly = InInbIsReadyOnly;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function S6UICommonWidgets.S6UI_EditableRichText.SetHintText
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FText                        InHintText                                                       (Parm, NativeAccessSpecifierPublic)

void US6UI_EditableRichText::SetHintText(class FText InInHintText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6UI_EditableRichText", "SetHintText");

	Params::US6UI_EditableRichText_SetHintText_Params Parms{};

	Parms.InHintText = InInHintText;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function S6UICommonWidgets.S6UI_EditableRichText.SetDefaultTextStyle
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FEditableTextStyle          InDefaultTextStyle                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void US6UI_EditableRichText::SetDefaultTextStyle(struct FEditableTextStyle& InInDefaultTextStyle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6UI_EditableRichText", "SetDefaultTextStyle");

	Params::US6UI_EditableRichText_SetDefaultTextStyle_Params Parms{};

	Parms.InDefaultTextStyle = InInDefaultTextStyle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function S6UICommonWidgets.S6UI_EditableRichText.SetDefaultFont
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FSlateFontInfo              InFontInfo                                                       (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void US6UI_EditableRichText::SetDefaultFont(const struct FSlateFontInfo& InInFontInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6UI_EditableRichText", "SetDefaultFont");

	Params::US6UI_EditableRichText_SetDefaultFont_Params Parms{};

	Parms.InFontInfo = InInFontInfo;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function S6UICommonWidgets.S6UI_EditableRichText.SetDefaultColorAndOpacity
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FSlateColor                 InColorAndOpacity                                                (Parm, NativeAccessSpecifierPublic)

void US6UI_EditableRichText::SetDefaultColorAndOpacity(const struct FSlateColor& InInColorAndOpacity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6UI_EditableRichText", "SetDefaultColorAndOpacity");

	Params::US6UI_EditableRichText_SetDefaultColorAndOpacity_Params Parms{};

	Parms.InColorAndOpacity = InInColorAndOpacity;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function S6UICommonWidgets.S6UI_EditableRichText.SetDefaultCaretImage
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FSlateBrush                 InCaretImage                                                     (Parm, NativeAccessSpecifierPublic)

void US6UI_EditableRichText::SetDefaultCaretImage(const struct FSlateBrush& InInCaretImage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6UI_EditableRichText", "SetDefaultCaretImage");

	Params::US6UI_EditableRichText_SetDefaultCaretImage_Params Parms{};

	Parms.InCaretImage = InInCaretImage;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function S6UICommonWidgets.S6UI_EditableRichText.SetDefaultBackgroundImageSelected
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FSlateBrush                 InBackgroundImageSelected                                        (Parm, NativeAccessSpecifierPublic)

void US6UI_EditableRichText::SetDefaultBackgroundImageSelected(const struct FSlateBrush& InInBackgroundImageSelected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6UI_EditableRichText", "SetDefaultBackgroundImageSelected");

	Params::US6UI_EditableRichText_SetDefaultBackgroundImageSelected_Params Parms{};

	Parms.InBackgroundImageSelected = InInBackgroundImageSelected;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function S6UICommonWidgets.S6UI_EditableRichText.SetDefaultBackgroundImageComposing
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FSlateBrush                 InBackgroundImageComposing                                       (Parm, NativeAccessSpecifierPublic)

void US6UI_EditableRichText::SetDefaultBackgroundImageComposing(const struct FSlateBrush& InInBackgroundImageComposing)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6UI_EditableRichText", "SetDefaultBackgroundImageComposing");

	Params::US6UI_EditableRichText_SetDefaultBackgroundImageComposing_Params Parms{};

	Parms.InBackgroundImageComposing = InInBackgroundImageComposing;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function S6UICommonWidgets.S6UI_EditableRichText.SelectAllText
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void US6UI_EditableRichText::SelectAllText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6UI_EditableRichText", "SelectAllText");

	Params::US6UI_EditableRichText_SelectAllText_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// DelegateFunction S6UICommonWidgets.S6UI_EditableRichText.S6UI_OnEditableTextCommittedEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams)
// Parameters:
// class FText                        Text                                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// enum class ETextCommit             CommitMethod                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void US6UI_EditableRichText::S6UI_OnEditableTextCommittedEvent__DelegateSignature(class FText& InText, enum class ETextCommit InCommitMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6UI_EditableRichText", "S6UI_OnEditableTextCommittedEvent__DelegateSignature");

	Params::US6UI_EditableRichText_S6UI_OnEditableTextCommittedEvent__DelegateSignature_Params Parms{};

	Parms.Text = InText;
	Parms.CommitMethod = InCommitMethod;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction S6UICommonWidgets.S6UI_EditableRichText.S6UI_OnEditableTextChangedEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams)
// Parameters:
// class FText                        Text                                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void US6UI_EditableRichText::S6UI_OnEditableTextChangedEvent__DelegateSignature(class FText& InText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6UI_EditableRichText", "S6UI_OnEditableTextChangedEvent__DelegateSignature");

	Params::US6UI_EditableRichText_S6UI_OnEditableTextChangedEvent__DelegateSignature_Params Parms{};

	Parms.Text = InText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function S6UICommonWidgets.S6UI_EditableRichText.Redo
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void US6UI_EditableRichText::Redo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6UI_EditableRichText", "Redo");

	Params::US6UI_EditableRichText_Redo_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function S6UICommonWidgets.S6UI_EditableRichText.PasteTextFromClipboard
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void US6UI_EditableRichText::PasteTextFromClipboard()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6UI_EditableRichText", "PasteTextFromClipboard");

	Params::US6UI_EditableRichText_PasteTextFromClipboard_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function S6UICommonWidgets.S6UI_EditableRichText.InsertTextAtCursor
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FText                        InText                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void US6UI_EditableRichText::InsertTextAtCursor(class FText& InInText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6UI_EditableRichText", "InsertTextAtCursor");

	Params::US6UI_EditableRichText_InsertTextAtCursor_Params Parms{};

	Parms.InText = InInText;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function S6UICommonWidgets.S6UI_EditableRichText.GetText
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText US6UI_EditableRichText::GetText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6UI_EditableRichText", "GetText");

	Params::US6UI_EditableRichText_GetText_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function S6UICommonWidgets.S6UI_EditableRichText.GetSelectedText
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText US6UI_EditableRichText::GetSelectedText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6UI_EditableRichText", "GetSelectedText");

	Params::US6UI_EditableRichText_GetSelectedText_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function S6UICommonWidgets.S6UI_EditableRichText.GetPlainText
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText US6UI_EditableRichText::GetPlainText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6UI_EditableRichText", "GetPlainText");

	Params::US6UI_EditableRichText_GetPlainText_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function S6UICommonWidgets.S6UI_EditableRichText.GetDecoratorByClass
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TSubclassOf<class US6UI_EditableRichTextDecorator>DecoratorClass                                                   (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class US6UI_EditableRichTextDecorator*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class US6UI_EditableRichTextDecorator* US6UI_EditableRichText::GetDecoratorByClass(TSubclassOf<class US6UI_EditableRichTextDecorator> InDecoratorClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6UI_EditableRichText", "GetDecoratorByClass");

	Params::US6UI_EditableRichText_GetDecoratorByClass_Params Parms{};

	Parms.DecoratorClass = InDecoratorClass;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function S6UICommonWidgets.S6UI_EditableRichText.DeleteSelectedText
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void US6UI_EditableRichText::DeleteSelectedText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6UI_EditableRichText", "DeleteSelectedText");

	Params::US6UI_EditableRichText_DeleteSelectedText_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function S6UICommonWidgets.S6UI_EditableRichText.CutSelectedTextToClipboard
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void US6UI_EditableRichText::CutSelectedTextToClipboard()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6UI_EditableRichText", "CutSelectedTextToClipboard");

	Params::US6UI_EditableRichText_CutSelectedTextToClipboard_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function S6UICommonWidgets.S6UI_EditableRichText.CopySelectedTextToClipboard
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void US6UI_EditableRichText::CopySelectedTextToClipboard()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6UI_EditableRichText", "CopySelectedTextToClipboard");

	Params::US6UI_EditableRichText_CopySelectedTextToClipboard_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function S6UICommonWidgets.S6UI_EditableRichText.ClearAllDefaultStyleOverrides
// (Final, Native, Public)
// Parameters:

void US6UI_EditableRichText::ClearAllDefaultStyleOverrides()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6UI_EditableRichText", "ClearAllDefaultStyleOverrides");

	Params::US6UI_EditableRichText_ClearAllDefaultStyleOverrides_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function S6UICommonWidgets.S6UI_EditableRichText.AnyTextSelected
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool US6UI_EditableRichText::AnyTextSelected()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6UI_EditableRichText", "AnyTextSelected");

	Params::US6UI_EditableRichText_AnyTextSelected_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function S6UICommonWidgets.S6UI_GridPanel.ClearFill
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void US6UI_GridPanel::ClearFill()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6UI_GridPanel", "ClearFill");

	Params::US6UI_GridPanel_ClearFill_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function S6UICommonWidgets.S6UI_OverlaySwitcher.SetActiveWidgetIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void US6UI_OverlaySwitcher::SetActiveWidgetIndex(int32 InIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6UI_OverlaySwitcher", "SetActiveWidgetIndex");

	Params::US6UI_OverlaySwitcher_SetActiveWidgetIndex_Params Parms{};

	Parms.Index = InIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function S6UICommonWidgets.S6UI_OverlaySwitcher.SetActiveWidget
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                     Widget                                                           (ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void US6UI_OverlaySwitcher::SetActiveWidget(class UWidget* InWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6UI_OverlaySwitcher", "SetActiveWidget");

	Params::US6UI_OverlaySwitcher_SetActiveWidget_Params Parms{};

	Parms.Widget = InWidget;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function S6UICommonWidgets.S6UI_OverlaySwitcher.GetActiveWidgetIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 US6UI_OverlaySwitcher::GetActiveWidgetIndex()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6UI_OverlaySwitcher", "GetActiveWidgetIndex");

	Params::US6UI_OverlaySwitcher_GetActiveWidgetIndex_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function S6UICommonWidgets.S6UI_OverlaySwitcher.GetActiveWidget
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UWidget*                     ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UWidget* US6UI_OverlaySwitcher::GetActiveWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6UI_OverlaySwitcher", "GetActiveWidget");

	Params::US6UI_OverlaySwitcher_GetActiveWidget_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function S6UICommonWidgets.S6UI_OverlaySwitcher.AddChildToOverlaySwitcher
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                     Content                                                          (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class US6UI_OverlaySwitcherSlot*   ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class US6UI_OverlaySwitcherSlot* US6UI_OverlaySwitcher::AddChildToOverlaySwitcher(class UWidget* InContent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6UI_OverlaySwitcher", "AddChildToOverlaySwitcher");

	Params::US6UI_OverlaySwitcher_AddChildToOverlaySwitcher_Params Parms{};

	Parms.Content = InContent;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
