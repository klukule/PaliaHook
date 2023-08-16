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

// 0x1D8 (0x210 - 0x38)
// Class S6UICommonWidgets.S6UI_Settings
class US6UI_Settings : public UDeveloperSettings
{
public:
	uint8                                        Pad_12E8[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS6UI_BackgroundBlurSettings          BackgroundBlurSettings;                            // 0x40(0x100)(Edit, BlueprintVisible, BlueprintReadOnly, Config, NativeAccessSpecifierPublic)
	struct FSlateBrush                           BackgroundFallbackImage;                           // 0x140(0xD0)(Edit, BlueprintVisible, BlueprintReadOnly, Config, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("S6UI_Settings");
		return Clss;
	}

};

// 0x120 (0x3B0 - 0x290)
// Class S6UICommonWidgets.S6UI_BackgroundBlur
class US6UI_BackgroundBlur : public UBackgroundBlur
{
public:
	bool                                         bOverrideBlurSettings;                             // 0x290(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_12EC[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS6UI_BackgroundBlurSettings          BlurSettings;                                      // 0x2A0(0x100)(Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_12ED[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("S6UI_BackgroundBlur");
		return Clss;
	}

};

// 0x50 (0x800 - 0x7B0)
// Class S6UICommonWidgets.S6UI_CommonButtonStyle
class US6UI_CommonButtonStyle : public UCommonButtonStyle
{
public:
	bool                                         bDropShadow;                                       // 0x7B0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12EE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DropShadowCornerRadius;                            // 0x7B4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             ShadowOffset_Normal;                               // 0x7B8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             ShadowOffset_Pressed;                              // 0x7C8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ShadowHardness_Normal;                             // 0x7D8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ShadowHardness_Pressed;                            // 0x7DC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          ShadowColor_Normal;                                // 0x7E0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          ShadowColor_Pressed;                               // 0x7F0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("S6UI_CommonButtonStyle");
		return Clss;
	}

};

// 0x78 (0x6D0 - 0x658)
// Class S6UICommonWidgets.S6UI_CommonButtonInternalBase
class US6UI_CommonButtonInternalBase : public UCommonButtonInternalBase
{
public:
	float                                        DropShadowCornerRadius;                            // 0x658(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_12F1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             ShadowOffset_Normal;                               // 0x660(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FVector2D                             ShadowOffset_Pressed;                              // 0x670(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        ShadowHardness_Normal;                             // 0x680(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        ShadowHardness_Pressed;                            // 0x684(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FLinearColor                          ShadowColor_Normal;                                // 0x688(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FLinearColor                          ShadowColor_Pressed;                               // 0x698(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_12F5[0x28];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("S6UI_CommonButtonInternalBase");
		return Clss;
	}

};

// 0x30 (0x1520 - 0x14F0)
// Class S6UICommonWidgets.S6UI_CommonButton_Styled
class US6UI_CommonButton_Styled : public UCommonButtonBase
{
public:
	FMulticastInlineDelegateProperty_            OnButtonPressed;                                   // 0x14F0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnButtonReleased;                                  // 0x1500(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	uint8                                        bTransparent : 1;                                  // Mask: 0x1, PropSize: 0x10x1510(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1300[0xF];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("S6UI_CommonButton_Styled");
		return Clss;
	}

	void SetIsDropShadow(bool InbEnable);
	void SetCommonButtonStyle(TSubclassOf<class US6UI_CommonButtonStyle> InInStyle);
};

// 0x6C0 (0x810 - 0x150)
// Class S6UICommonWidgets.S6UI_EditableRichText
class US6UI_EditableRichText : public UWidget
{
public:
	class FText                                  Text;                                              // 0x150(0x18)(Edit, NativeAccessSpecifierPublic)
	FDelegateProperty_                           TextDelegate;                                      // 0x168(0x10)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  HintText;                                          // 0x178(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	FDelegateProperty_                           HintTextDelegate;                                  // 0x190(0x10)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsReadOnly;                                        // 0x1A0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1325[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MinimumDesiredWidth;                               // 0x1A4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsCaretMovedWhenGainFocus;                         // 0x1A8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         SelectAllTextWhenFocused;                          // 0x1A9(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ShouldClearTextSelectionOnFocusLoss;               // 0x1AA(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         RevertTextOnEscape;                                // 0x1AB(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ClearKeyboardFocusOnCommit;                        // 0x1AC(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         SelectAllTextOnCommit;                             // 0x1AD(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AllowContextMenu;                                  // 0x1AE(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EVirtualKeyboardType              KeyboardType;                                      // 0x1AF(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVirtualKeyboardOptions               VirtualKeyboardOptions;                            // 0x1B0(0x1)(Edit, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	enum class EVirtualKeyboardTrigger           VirtualKeyboardTrigger;                            // 0x1B1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EVirtualKeyboardDismissAction     VirtualKeyboardDismissAction;                      // 0x1B2(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETextJustify                      Justification;                                     // 0x1B3(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FShapedTextOptions                    ShapedTextOptions;                                 // 0x1B4(0x3)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	uint8                                        Pad_132A[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnTextChanged;                                     // 0x1B8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnTextCommitted;                                   // 0x1C8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UDataTable*                            TextStyleSet;                                      // 0x1D8(0x8)(Edit, ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<TSubclassOf<class US6UI_EditableRichTextDecorator>> DecoratorClasses;                                  // 0x1E0(0x10)(Edit, ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	bool                                         bOverrideDefaultStyle;                             // 0x1F0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_132B[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEditableTextStyle                    DefaultTextStyleOverride;                          // 0x200(0x2F0)(Edit, Protected, NativeAccessSpecifierProtected)
	struct FEditableTextStyle                    DefaultTextStyle;                                  // 0x4F0(0x2F0)(Transient, Protected, NativeAccessSpecifierProtected)
	TArray<class US6UI_EditableRichTextDecorator*> InstanceDecorators;                                // 0x7E0(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_132E[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("S6UI_EditableRichText");
		return Clss;
	}

	void Undo();
	void SetTextStyleSet(class UDataTable* InNewTextStyleSet);
	void SetText(class FText InInText);
	void SetJustification(enum class ETextJustify InInJustification);
	void SetIsReadOnly(bool InInbIsReadyOnly);
	void SetHintText(class FText InInHintText);
	void SetDefaultTextStyle(struct FEditableTextStyle& InInDefaultTextStyle);
	void SetDefaultFont(const struct FSlateFontInfo& InInFontInfo);
	void SetDefaultColorAndOpacity(const struct FSlateColor& InInColorAndOpacity);
	void SetDefaultCaretImage(const struct FSlateBrush& InInCaretImage);
	void SetDefaultBackgroundImageSelected(const struct FSlateBrush& InInBackgroundImageSelected);
	void SetDefaultBackgroundImageComposing(const struct FSlateBrush& InInBackgroundImageComposing);
	void SelectAllText();
	void S6UI_OnEditableTextCommittedEvent__DelegateSignature(class FText& InText, enum class ETextCommit InCommitMethod);
	void S6UI_OnEditableTextChangedEvent__DelegateSignature(class FText& InText);
	void Redo();
	void PasteTextFromClipboard();
	void InsertTextAtCursor(class FText& InInText);
	class FText GetText();
	class FText GetSelectedText();
	class FText GetPlainText();
	class US6UI_EditableRichTextDecorator* GetDecoratorByClass(TSubclassOf<class US6UI_EditableRichTextDecorator> InDecoratorClass);
	void DeleteSelectedText();
	void CutSelectedTextToClipboard();
	void CopySelectedTextToClipboard();
	void ClearAllDefaultStyleOverrides();
	bool AnyTextSelected();
};

// 0x0 (0x28 - 0x28)
// Class S6UICommonWidgets.S6UI_EditableRichTextDecorator
class US6UI_EditableRichTextDecorator : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("S6UI_EditableRichTextDecorator");
		return Clss;
	}

};

// 0x38 (0x60 - 0x28)
// Class S6UICommonWidgets.S6UI_EditableRichTextDecorator_Image
class US6UI_EditableRichTextDecorator_Image : public US6UI_EditableRichTextDecorator
{
public:
	TSoftObjectPtr<class UDataTable>             ImageSet;                                          // 0x28(0x30)(Edit, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USlateBrushAsset*                      ImageBrushAsset;                                   // 0x58(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("S6UI_EditableRichTextDecorator_Image");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class S6UICommonWidgets.S6UI_EditableRichTextDecorator_Style
class US6UI_EditableRichTextDecorator_Style : public US6UI_EditableRichTextDecorator
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("S6UI_EditableRichTextDecorator_Style");
		return Clss;
	}

};

// 0x18 (0x1B0 - 0x198)
// Class S6UICommonWidgets.S6UI_GridPanel
class US6UI_GridPanel : public UGridPanel
{
public:
	bool                                         bHasUniformSlotPadding;                            // 0x198(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_133B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMargin                               UniformSlotPadding;                                // 0x19C(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_133D[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("S6UI_GridPanel");
		return Clss;
	}

	void ClearFill();
};

// 0x10 (0x68 - 0x58)
// Class S6UICommonWidgets.S6UI_OverlaySwitcherSlot
class US6UI_OverlaySwitcherSlot : public UOverlaySlot
{
public:
	uint8                                        Pad_133E[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("S6UI_OverlaySwitcherSlot");
		return Clss;
	}

};

// 0x48 (0x1B0 - 0x168)
// Class S6UICommonWidgets.S6UI_OverlaySwitcher
class US6UI_OverlaySwitcher : public UPanelWidget
{
public:
	uint8                                        Pad_1349[0x28];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ActiveWidgetIndex;                                 // 0x190(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_134A[0x1C];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("S6UI_OverlaySwitcher");
		return Clss;
	}

	void SetActiveWidgetIndex(int32 InIndex);
	void SetActiveWidget(class UWidget* InWidget);
	int32 GetActiveWidgetIndex();
	class UWidget* GetActiveWidget();
	class US6UI_OverlaySwitcherSlot* AddChildToOverlaySwitcher(class UWidget* InContent);
};

// 0x40 (0x68 - 0x28)
// Class S6UICommonWidgets.S6UI_RichTextBlockDecorator_SoftImage
class US6UI_RichTextBlockDecorator_SoftImage : public URichTextBlockDecorator
{
public:
	TSoftObjectPtr<class UDataTable>             ImageSet;                                          // 0x28(0x30)(Edit, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USlateBrushAsset*                      ImageBrushAsset;                                   // 0x58(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDataTable*                            LoadedImageSet;                                    // 0x60(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("S6UI_RichTextBlockDecorator_SoftImage");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class S6UICommonWidgets.S6UI_RichTextBlockDecorator_Style
class US6UI_RichTextBlockDecorator_Style : public URichTextBlockDecorator
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("S6UI_RichTextBlockDecorator_Style");
		return Clss;
	}

};

// 0x8 (0x30 - 0x28)
// Class S6UICommonWidgets.S6UI_RichTextBlockDecorator_URL
class US6UI_RichTextBlockDecorator_URL : public URichTextBlockDecorator
{
public:
	class UDataTable*                            StyleTable;                                        // 0x28(0x8)(Edit, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("S6UI_RichTextBlockDecorator_URL");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
