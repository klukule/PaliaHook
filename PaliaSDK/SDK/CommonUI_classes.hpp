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

// 0x28 (0x2A0 - 0x278)
// Class CommonUI.CommonUserWidget
class UCommonUserWidget : public UUserWidget
{
public:
	bool                                         bDisplayInActionBar;                               // 0x278(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bConsumePointerInput;                              // 0x279(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_C67[0x26];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonUserWidget");
		return Clss;
	}

	void SetConsumePointerInput(bool InbInConsumePointerInput);
};

// 0x138 (0x3D8 - 0x2A0)
// Class CommonUI.CommonActivatableWidget
class UCommonActivatableWidget : public UCommonUserWidget
{
public:
	bool                                         bIsBackHandler;                                    // 0x2A0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsBackActionDisplayedInActionBar;                 // 0x2A1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bAutoActivate;                                     // 0x2A2(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bSupportsActivationFocus;                          // 0x2A3(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsModal;                                          // 0x2A4(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bAutoRestoreFocus;                                 // 0x2A5(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bOverrideActionDomain;                             // 0x2A6(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_C84[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UInputMappingContext*                  InputMapping;                                      // 0x2A8(0x8)(Edit, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        InputMappingPriority;                              // 0x2B0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_C86[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UCommonInputActionDomain> ActionDomainOverride;                              // 0x2B8(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            BP_OnWidgetActivated;                              // 0x2E8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	FMulticastInlineDelegateProperty_            BP_OnWidgetDeactivated;                            // 0x2F8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	bool                                         bIsActive;                                         // 0x308(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_C87[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<TWeakObjectPtr<class UCommonActivatableWidget>> VisibilityBoundWidgets;                            // 0x310(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                        Pad_C89[0xB0];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bSetVisibilityOnActivated;                         // 0x3D0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ESlateVisibility                  ActivatedVisibility;                               // 0x3D1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bSetVisibilityOnDeactivated;                       // 0x3D2(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ESlateVisibility                  DeactivatedVisibility;                             // 0x3D3(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_C8D[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonActivatableWidget");
		return Clss;
	}

	void SetBindVisibilities(enum class ESlateVisibility InOnActivatedVisibility, enum class ESlateVisibility InOnDeactivatedVisibility, bool InbInAllActive);
	bool IsActivated();
	class UWidget* GetDesiredFocusTarget();
	void DeactivateWidget();
	bool BP_OnHandleBackAction();
	void BP_OnDeactivated();
	void BP_OnActivated();
	class UWidget* BP_GetDesiredFocusTarget();
	void BindVisibilityToActivation(class UCommonActivatableWidget* InActivatableWidget);
	void ActivateWidget();
};

// 0x40 (0x3E0 - 0x3A0)
// Class CommonUI.CommonGameViewportClient
class UCommonGameViewportClient : public UGameViewportClient
{
public:
	uint8                                        Pad_C90[0x40];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonGameViewportClient");
		return Clss;
	}

};

// 0x128 (0x158 - 0x30)
// Class CommonUI.CommonUIActionRouterBase
class UCommonUIActionRouterBase : public ULocalPlayerSubsystem
{
public:
	uint8                                        Pad_C93[0x128];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonUIActionRouterBase");
		return Clss;
	}

};

// 0x788 (0x7B0 - 0x28)
// Class CommonUI.CommonButtonStyle
class UCommonButtonStyle : public UObject
{
public:
	bool                                         bSingleMaterial;                                   // 0x28(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_CBB[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           SingleMaterialBrush;                               // 0x30(0xD0)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FSlateBrush                           NormalBase;                                        // 0x100(0xD0)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FSlateBrush                           NormalHovered;                                     // 0x1D0(0xD0)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FSlateBrush                           NormalPressed;                                     // 0x2A0(0xD0)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FSlateBrush                           SelectedBase;                                      // 0x370(0xD0)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FSlateBrush                           SelectedHovered;                                   // 0x440(0xD0)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FSlateBrush                           SelectedPressed;                                   // 0x510(0xD0)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FSlateBrush                           Disabled;                                          // 0x5E0(0xD0)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FMargin                               ButtonPadding;                                     // 0x6B0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               CustomPadding;                                     // 0x6C0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        MinWidth;                                          // 0x6D0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MinHeight;                                         // 0x6D4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UCommonTextStyle>          NormalTextStyle;                                   // 0x6D8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UCommonTextStyle>          NormalHoveredTextStyle;                            // 0x6E0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UCommonTextStyle>          SelectedTextStyle;                                 // 0x6E8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UCommonTextStyle>          SelectedHoveredTextStyle;                          // 0x6F0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UCommonTextStyle>          DisabledTextStyle;                                 // 0x6F8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateSound                           PressedSlateSound;                                 // 0x700(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FCommonButtonStyleOptionalSlateSound  SelectedPressedSlateSound;                         // 0x718(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FCommonButtonStyleOptionalSlateSound  LockedPressedSlateSound;                           // 0x738(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FSlateSound                           HoveredSlateSound;                                 // 0x758(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FCommonButtonStyleOptionalSlateSound  SelectedHoveredSlateSound;                         // 0x770(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)
	struct FCommonButtonStyleOptionalSlateSound  LockedHoveredSlateSound;                           // 0x790(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonButtonStyle");
		return Clss;
	}

	class UCommonTextStyle* GetSelectedTextStyle();
	void GetSelectedPressedBrush(struct FSlateBrush* InBrush);
	class UCommonTextStyle* GetSelectedHoveredTextStyle();
	void GetSelectedHoveredBrush(struct FSlateBrush* InBrush);
	void GetSelectedBaseBrush(struct FSlateBrush* InBrush);
	class UCommonTextStyle* GetNormalTextStyle();
	void GetNormalPressedBrush(struct FSlateBrush* InBrush);
	class UCommonTextStyle* GetNormalHoveredTextStyle();
	void GetNormalHoveredBrush(struct FSlateBrush* InBrush);
	void GetNormalBaseBrush(struct FSlateBrush* InBrush);
	void GetMaterialBrush(struct FSlateBrush* InBrush);
	class UCommonTextStyle* GetDisabledTextStyle();
	void GetDisabledBrush(struct FSlateBrush* InBrush);
	void GetCustomPadding(struct FMargin* InOutCustomPadding);
	void GetButtonPadding(struct FMargin* InOutButtonPadding);
};

// 0x70 (0x658 - 0x5E8)
// Class CommonUI.CommonButtonInternalBase
class UCommonButtonInternalBase : public UButton
{
public:
	uint8                                        Pad_CC3[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnDoubleClicked;                                   // 0x5F8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_CC4[0x20];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MinWidth;                                          // 0x628(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        MinHeight;                                         // 0x62C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bButtonEnabled;                                    // 0x630(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bInteractionEnabled;                               // 0x631(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_CC5[0x26];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonButtonInternalBase");
		return Clss;
	}

};

// 0x1250 (0x14F0 - 0x2A0)
// Class CommonUI.CommonButtonBase
class UCommonButtonBase : public UCommonUserWidget
{
public:
	int32                                        MinWidth;                                          // 0x2A0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        MinHeight;                                         // 0x2A4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UCommonButtonStyle>        Style;                                             // 0x2A8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bHideInputAction;                                  // 0x2B0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_D2D[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateSound                           PressedSlateSoundOverride;                         // 0x2B8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FSlateSound                           HoveredSlateSoundOverride;                         // 0x2D0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FSlateSound                           SelectedPressedSlateSoundOverride;                 // 0x2E8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FSlateSound                           SelectedHoveredSlateSoundOverride;                 // 0x300(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FSlateSound                           LockedPressedSlateSoundOverride;                   // 0x318(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FSlateSound                           LockedHoveredSlateSoundOverride;                   // 0x330(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        bApplyAlphaOnDisable : 1;                          // Mask: 0x1, PropSize: 0x10x348(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bLocked : 1;                                       // Mask: 0x2, PropSize: 0x10x348(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bSelectable : 1;                                   // Mask: 0x4, PropSize: 0x10x348(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bShouldSelectUponReceivingFocus : 1;               // Mask: 0x8, PropSize: 0x10x348(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bInteractableWhenSelected : 1;                     // Mask: 0x10, PropSize: 0x10x348(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bToggleable : 1;                                   // Mask: 0x20, PropSize: 0x10x348(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bTriggerClickedAfterSelection : 1;                 // Mask: 0x40, PropSize: 0x10x348(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bDisplayInputActionWhenNotInteractable : 1;        // Mask: 0x80, PropSize: 0x10x348(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bHideInputActionWithKeyboard : 1;                  // Mask: 0x1, PropSize: 0x10x349(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bShouldUseFallbackDefaultInputAction : 1;          // Mask: 0x2, PropSize: 0x10x349(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        BitPad_96 : 6;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	enum class EButtonClickMethod                ClickMethod;                                       // 0x34A(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EButtonTouchMethod                TouchMethod;                                       // 0x34B(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EButtonPressMethod                PressMethod;                                       // 0x34C(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D35[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        InputPriority;                                     // 0x350(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D36[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   TriggeringInputAction;                             // 0x358(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, ExposeOnSpawn, NativeAccessSpecifierPublic)
	class UInputAction*                          TriggeringEnhancedInputAction;                     // 0x368(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D37[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnSelectedChangedBase;                             // 0x380(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnButtonBaseClicked;                               // 0x390(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnButtonBaseDoubleClicked;                         // 0x3A0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnButtonBaseHovered;                               // 0x3B0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnButtonBaseUnhovered;                             // 0x3C0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_D39[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bIsPersistentBinding;                              // 0x3D4(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class ECommonInputMode                  InputModeOverride;                                 // 0x3D5(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_D3A[0x32];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              SingleMaterialStyleMID;                            // 0x408(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FButtonStyle                          NormalStyle;                                       // 0x410(0x3F0)(NativeAccessSpecifierPrivate)
	struct FButtonStyle                          SelectedStyle;                                     // 0x800(0x3F0)(NativeAccessSpecifierPrivate)
	struct FButtonStyle                          DisabledStyle;                                     // 0xBF0(0x3F0)(NativeAccessSpecifierPrivate)
	struct FButtonStyle                          LockedStyle;                                       // 0xFE0(0x3F0)(NativeAccessSpecifierPrivate)
	uint8                                        bStopDoubleClickPropagation : 1;                   // Mask: 0x1, PropSize: 0x10x13D0(0x1)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        BitPad_97 : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_D3C[0x117];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonActionWidget*                   InputActionWidget;                                 // 0x14E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonButtonBase");
		return Clss;
	}

	void StopDoubleClickPropagation();
	void SetTriggeringInputAction(struct FDataTableRowHandle& InInputActionRow);
	void SetTriggeringEnhancedInputAction(class UInputAction* InInInputAction);
	void SetTriggeredInputAction(struct FDataTableRowHandle& InInputActionRow);
	void SetTouchMethod(enum class EButtonTouchMethod InInTouchMethod);
	void SetStyle(TSubclassOf<class UCommonButtonStyle> InInStyle);
	void SetShouldUseFallbackDefaultInputAction(bool InbInShouldUseFallbackDefaultInputAction);
	void SetShouldSelectUponReceivingFocus(bool InbInShouldSelectUponReceivingFocus);
	void SetSelectedPressedSoundOverride(class USoundBase* InSound);
	void SetSelectedInternal(bool InbInSelected, bool InbAllowSound, bool InbBroadcast);
	void SetSelectedHoveredSoundOverride(class USoundBase* InSound);
	void SetPressMethod(enum class EButtonPressMethod InInPressMethod);
	void SetPressedSoundOverride(class USoundBase* InSound);
	void SetMinDimensions(int32 InInMinWidth, int32 InInMinHeight);
	void SetLockedPressedSoundOverride(class USoundBase* InSound);
	void SetLockedHoveredSoundOverride(class USoundBase* InSound);
	void SetIsToggleable(bool InbInIsToggleable);
	void SetIsSelected(bool InInSelected, bool InbGiveClickFeedback);
	void SetIsSelectable(bool InbInIsSelectable);
	void SetIsLocked(bool InbInIsLocked);
	void SetIsInteractionEnabled(bool InbInIsInteractionEnabled);
	void SetIsInteractableWhenSelected(bool InbInInteractableWhenSelected);
	void SetIsFocusable(bool InbInIsFocusable);
	void SetInputActionProgressMaterial(struct FSlateBrush& InInProgressMaterialBrush, class FName& InInProgressMaterialParam);
	void SetHoveredSoundOverride(class USoundBase* InSound);
	void SetHideInputAction(bool InbInHideInputAction);
	void SetClickMethod(enum class EButtonClickMethod InInClickMethod);
	void OnTriggeringInputActionChanged(struct FDataTableRowHandle& InNewTriggeredAction);
	void OnTriggeringEnhancedInputActionChanged(class UInputAction* InInInputAction);
	void OnTriggeredInputActionChanged(struct FDataTableRowHandle& InNewTriggeredAction);
	void OnInputMethodChanged(enum class ECommonInputType InCurrentInputType);
	void OnCurrentTextStyleChanged();
	void OnActionProgress(float InHeldPercent);
	void OnActionComplete();
	void NativeOnActionProgress(float InHeldPercent);
	void NativeOnActionComplete();
	bool IsPressed();
	bool IsInteractionEnabled();
	void HandleTriggeringActionCommited(bool* InbPassThrough);
	void HandleFocusReceived();
	void HandleFocusLost();
	void HandleButtonReleased();
	void HandleButtonPressed();
	void HandleButtonClicked();
	class UCommonButtonStyle* GetStyle();
	class UMaterialInstanceDynamic* GetSingleMaterialStyleMID();
	bool GetShouldSelectUponReceivingFocus();
	bool GetSelected();
	bool GetLocked();
	bool GetIsFocusable();
	bool GetInputAction(struct FDataTableRowHandle* InInputActionRow);
	class UInputAction* GetEnhancedInputAction();
	TSubclassOf<class UCommonTextStyle> GetCurrentTextStyleClass();
	class UCommonTextStyle* GetCurrentTextStyle();
	void GetCurrentCustomPadding(struct FMargin* InOutCustomPadding);
	void GetCurrentButtonPadding(struct FMargin* InOutButtonPadding);
	void DisableButtonWithReason(class FText& InDisabledReason);
	void ClearSelection();
	void BP_OnUnhovered();
	void BP_OnSelected();
	void BP_OnReleased();
	void BP_OnPressed();
	void BP_OnLockedChanged(bool InbIsLocked);
	void BP_OnLockDoubleClicked();
	void BP_OnLockClicked();
	void BP_OnInputMethodChanged(enum class ECommonInputType InCurrentInputType);
	void BP_OnHovered();
	void BP_OnFocusReceived();
	void BP_OnFocusLost();
	void BP_OnEnabled();
	void BP_OnDoubleClicked();
	void BP_OnDisabled();
	void BP_OnDeselected();
	void BP_OnClicked();
};

// 0x0 (0x28 - 0x28)
// Class CommonUI.CommonBoundActionButtonInterface
class ICommonBoundActionButtonInterface : public IInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonBoundActionButtonInterface");
		return Clss;
	}

};

// 0x8 (0x30 - 0x28)
// Class CommonUI.CommonStyleSheetTypeBase
class UCommonStyleSheetTypeBase : public UObject
{
public:
	bool                                         bIsEnabled;                                        // 0x28(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D44[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonStyleSheetTypeBase");
		return Clss;
	}

};

// 0x10 (0x40 - 0x30)
// Class CommonUI.CommonStyleSheetTypeColor
class UCommonStyleSheetTypeColor : public UCommonStyleSheetTypeBase
{
public:
	struct FLinearColor                          Color;                                             // 0x30(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonStyleSheetTypeColor");
		return Clss;
	}

};

// 0x8 (0x38 - 0x30)
// Class CommonUI.CommonStyleSheetTypeOpacity
class UCommonStyleSheetTypeOpacity : public UCommonStyleSheetTypeBase
{
public:
	float                                        Opacity;                                           // 0x30(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D48[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonStyleSheetTypeOpacity");
		return Clss;
	}

};

// 0x8 (0x38 - 0x30)
// Class CommonUI.CommonStyleSheetTypeLineHeightPercentage
class UCommonStyleSheetTypeLineHeightPercentage : public UCommonStyleSheetTypeBase
{
public:
	float                                        LineHeightPercentage;                              // 0x30(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D4A[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonStyleSheetTypeLineHeightPercentage");
		return Clss;
	}

};

// 0x58 (0x88 - 0x30)
// Class CommonUI.CommonStyleSheetTypeFontTypeface
class UCommonStyleSheetTypeFontTypeface : public UCommonStyleSheetTypeBase
{
public:
	struct FSlateFontInfo                        Typeface;                                          // 0x30(0x58)(Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonStyleSheetTypeFontTypeface");
		return Clss;
	}

};

// 0x8 (0x38 - 0x30)
// Class CommonUI.CommonStyleSheetTypeFontSize
class UCommonStyleSheetTypeFontSize : public UCommonStyleSheetTypeBase
{
public:
	int32                                        Size;                                              // 0x30(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D4D[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonStyleSheetTypeFontSize");
		return Clss;
	}

};

// 0x8 (0x38 - 0x30)
// Class CommonUI.CommonStyleSheetTypeFontLetterSpacing
class UCommonStyleSheetTypeFontLetterSpacing : public UCommonStyleSheetTypeBase
{
public:
	int32                                        LetterSpacing;                                     // 0x30(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D4E[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonStyleSheetTypeFontLetterSpacing");
		return Clss;
	}

};

// 0x8 (0x38 - 0x30)
// Class CommonUI.CommonStyleSheetTypeMarginLeft
class UCommonStyleSheetTypeMarginLeft : public UCommonStyleSheetTypeBase
{
public:
	float                                        Left;                                              // 0x30(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D4F[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonStyleSheetTypeMarginLeft");
		return Clss;
	}

};

// 0x8 (0x38 - 0x30)
// Class CommonUI.CommonStyleSheetTypeMarginRight
class UCommonStyleSheetTypeMarginRight : public UCommonStyleSheetTypeBase
{
public:
	float                                        Right;                                             // 0x30(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D50[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonStyleSheetTypeMarginRight");
		return Clss;
	}

};

// 0x8 (0x38 - 0x30)
// Class CommonUI.CommonStyleSheetTypeMarginTop
class UCommonStyleSheetTypeMarginTop : public UCommonStyleSheetTypeBase
{
public:
	float                                        Top;                                               // 0x30(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D53[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonStyleSheetTypeMarginTop");
		return Clss;
	}

};

// 0x8 (0x38 - 0x30)
// Class CommonUI.CommonStyleSheetTypeMarginBottom
class UCommonStyleSheetTypeMarginBottom : public UCommonStyleSheetTypeBase
{
public:
	float                                        Bottom;                                            // 0x30(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D54[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonStyleSheetTypeMarginBottom");
		return Clss;
	}

};

// 0x20 (0x720 - 0x700)
// Class CommonUI.AnalogSlider
class UAnalogSlider : public USlider
{
public:
	FMulticastInlineDelegateProperty_            OnAnalogCapture;                                   // 0x700(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_D55[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AnalogSlider");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class CommonUI.CommonActionHandlerInterface
class ICommonActionHandlerInterface : public IInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonActionHandlerInterface");
		return Clss;
	}

};

// 0x310 (0x460 - 0x150)
// Class CommonUI.CommonActionWidget
class UCommonActionWidget : public UWidget
{
public:
	FMulticastInlineDelegateProperty_            OnInputMethodChanged;                              // 0x150(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FSlateBrush                           ProgressMaterialBrush;                             // 0x160(0xD0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FName                                  ProgressMaterialParam;                             // 0x230(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D6C[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           IconRimBrush;                                      // 0x240(0xD0)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TArray<struct FDataTableRowHandle>           InputActions;                                      // 0x310(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	class UInputAction*                          EnhancedInputAction;                               // 0x320(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_D6E[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              ProgressDynamicMaterial;                           // 0x330(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_D6F[0x128];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonActionWidget");
		return Clss;
	}

	void SetInputActions(const TArray<struct FDataTableRowHandle>& InNewInputActions);
	void SetInputAction(const struct FDataTableRowHandle& InInputActionRow);
	void SetIconRimBrush(const struct FSlateBrush& InInIconRimBrush);
	void SetEnhancedInputAction(class UInputAction* InInInputAction);
	void OnInputMethodChanged__DelegateSignature(bool InbUsingGamepad);
	bool IsHeldAction();
	struct FSlateBrush GetIcon();
	class FText GetDisplayText();
};

// 0x70 (0x1F0 - 0x180)
// Class CommonUI.CommonAnimatedSwitcher
class UCommonAnimatedSwitcher : public UWidgetSwitcher
{
public:
	uint8                                        Pad_D82[0x30];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class ECommonSwitcherTransition         TransitionType;                                    // 0x1B0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ETransitionCurve                  TransitionCurveType;                               // 0x1B1(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_D84[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TransitionDuration;                                // 0x1B4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_D85[0x38];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonAnimatedSwitcher");
		return Clss;
	}

	void SetDisableTransitionAnimation(bool InbDisableAnimation);
	bool IsTransitionPlaying();
	bool IsCurrentlySwitching();
	bool HasWidgets();
	void ActivatePreviousWidget(bool InbCanWrap);
	void ActivateNextWidget(bool InbCanWrap);
};

// 0x10 (0x200 - 0x1F0)
// Class CommonUI.CommonActivatableWidgetSwitcher
class UCommonActivatableWidgetSwitcher : public UCommonAnimatedSwitcher
{
public:
	uint8                                        Pad_D89[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonActivatableWidgetSwitcher");
		return Clss;
	}

};

// 0xD8 (0x100 - 0x28)
// Class CommonUI.CommonBorderStyle
class UCommonBorderStyle : public UObject
{
public:
	uint8                                        Pad_D8A[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           Background;                                        // 0x30(0xD0)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonBorderStyle");
		return Clss;
	}

	void GetBackgroundBrush(struct FSlateBrush* InBrush);
};

// 0x20 (0x328 - 0x308)
// Class CommonUI.CommonBorder
class UCommonBorder : public UBorder
{
public:
	TSubclassOf<class UCommonBorderStyle>        Style;                                             // 0x308(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bReducePaddingBySafezone;                          // 0x310(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D92[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMargin                               MinimumPadding;                                    // 0x314(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_D94[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonBorder");
		return Clss;
	}

	void SetStyle(TSubclassOf<class UCommonBorderStyle> InInStyle);
};

// 0x18 (0x320 - 0x308)
// Class CommonUI.CommonCustomNavigation
class UCommonCustomNavigation : public UBorder
{
public:
	FDelegateProperty_                           OnNavigationEvent;                                 // 0x308(0x10)(Edit, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D98[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonCustomNavigation");
		return Clss;
	}

};

// 0x38 (0x370 - 0x338)
// Class CommonUI.CommonTextBlock
class UCommonTextBlock : public UTextBlock
{
public:
	float                                        MobileFontSizeMultiplier;                          // 0x338(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_DB3[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UCommonTextStyle>          Style;                                             // 0x340(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UCommonTextScrollStyle>    ScrollStyle;                                       // 0x348(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonStyleSheet*                     StyleSheet;                                        // 0x350(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, AdvancedDisplay, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bIsScrollingEnabled;                               // 0x358(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bDisplayAllCaps;                                   // 0x359(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bAutoCollapseWithEmptyText;                        // 0x35A(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_DB6[0x15];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonTextBlock");
		return Clss;
	}

	void SetWrapTextWidth(int32 InInWrapTextAt);
	void SetTextCase(bool InbUseAllCaps);
	void SetStyle(TSubclassOf<class UCommonTextStyle> InInStyle);
	void SetScrollingEnabled(bool InbInIsScrollingEnabled);
	void SetMobileFontSizeMultiplier(float InInMobileFontSizeMultiplier);
	void SetMargin(struct FMargin& InInMargin);
	void SetLineHeightPercentage(float InInLineHeightPercentage);
	void ResetScrollState();
	float GetMobileFontSizeMultiplier();
	struct FMargin GetMargin();
};

// 0x60 (0x3D0 - 0x370)
// Class CommonUI.CommonDateTimeTextBlock
class UCommonDateTimeTextBlock : public UCommonTextBlock
{
public:
	uint8                                        Pad_DBB[0x60];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonDateTimeTextBlock");
		return Clss;
	}

	void SetTimespanValue(const struct FTimespan& InInTimespan);
	void SetDateTimeValue(const struct FDateTime& InInDateTime, bool InbShowAsCountdown, float InInRefreshDelay);
	void SetCountDownCompletionText(class FText InInCompletionText);
	struct FDateTime GetDateTime();
};

// 0x58 (0x380 - 0x328)
// Class CommonUI.CommonHardwareVisibilityBorder
class UCommonHardwareVisibilityBorder : public UCommonBorder
{
public:
	struct FGameplayTagQuery                     VisibilityQuery;                                   // 0x328(0x48)(Edit, Protected, NativeAccessSpecifierProtected)
	enum class ESlateVisibility                  VisibleType;                                       // 0x370(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ESlateVisibility                  HiddenType;                                        // 0x371(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_DBC[0xE];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonHardwareVisibilityBorder");
		return Clss;
	}

};

// 0x8 (0xCA0 - 0xC98)
// Class CommonUI.CommonHierarchicalScrollBox
class UCommonHierarchicalScrollBox : public UScrollBox
{
public:
	uint8                                        Pad_DBE[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonHierarchicalScrollBox");
		return Clss;
	}

};

// 0x110 (0x3C0 - 0x2B0)
// Class CommonUI.CommonLazyImage
class UCommonLazyImage : public UImage
{
public:
	struct FSlateBrush                           LoadingBackgroundBrush;                            // 0x2B0(0xD0)(Edit, NativeAccessSpecifierPrivate)
	class FName                                  MaterialTextureParamName;                          // 0x380(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	FMulticastInlineDelegateProperty_            BP_OnLoadingStateChanged;                          // 0x388(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	uint8                                        Pad_DD0[0x28];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonLazyImage");
		return Clss;
	}

	void SetMaterialTextureParamName(class FName InTextureParamName);
	void SetBrushFromLazyTexture(TSoftObjectPtr<class UTexture2D>& InLazyTexture, bool InbMatchSize);
	void SetBrushFromLazyMaterial(TSoftObjectPtr<class UMaterialInterface>& InLazyMaterial);
	void SetBrushFromLazyDisplayAsset(TSoftObjectPtr<class UObject>& InLazyObject, bool InbMatchTextureSize);
	bool IsLoading();
};

// 0x160 (0x2B0 - 0x150)
// Class CommonUI.CommonLazyWidget
class UCommonLazyWidget : public UWidget
{
public:
	struct FSlateBrush                           LoadingBackgroundBrush;                            // 0x150(0xD0)(Edit, NativeAccessSpecifierPrivate)
	class UUserWidget*                           Content;                                           // 0x220(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_DD5[0x30];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            BP_OnLoadingStateChanged;                          // 0x258(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	uint8                                        Pad_DD6[0x48];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonLazyWidget");
		return Clss;
	}

	void SetLazyContent(TSoftClassPtr<class UUserWidget> InSoftWidget);
	bool IsLoading();
	class UUserWidget* GetContent();
};

// 0x0 (0xC20 - 0xC20)
// Class CommonUI.CommonListView
class UCommonListView : public UListView
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonListView");
		return Clss;
	}

	void SetEntrySpacing(float InInEntrySpacing);
};

// 0x28 (0x60 - 0x38)
// Class CommonUI.LoadGuardSlot
class ULoadGuardSlot : public UPanelSlot
{
public:
	struct FMargin                               Padding;                                           // 0x38(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	enum class EHorizontalAlignment              HorizontalAlignment;                               // 0x48(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class EVerticalAlignment                VerticalAlignment;                                 // 0x49(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_DE4[0x16];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LoadGuardSlot");
		return Clss;
	}

	void SetVerticalAlignment(enum class EVerticalAlignment InInVerticalAlignment);
	void SetPadding(const struct FMargin& InInPadding);
	void SetHorizontalAlignment(enum class EHorizontalAlignment InInHorizontalAlignment);
};

// 0x168 (0x2D0 - 0x168)
// Class CommonUI.CommonLoadGuard
class UCommonLoadGuard : public UContentWidget
{
public:
	uint8                                        Pad_DED[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           LoadingBackgroundBrush;                            // 0x170(0xD0)(Edit, NativeAccessSpecifierPrivate)
	enum class EHorizontalAlignment              ThrobberAlignment;                                 // 0x240(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_DF0[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMargin                               ThrobberPadding;                                   // 0x244(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_DF1[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  LoadingText;                                       // 0x258(0x18)(Edit, NativeAccessSpecifierPrivate)
	TSubclassOf<class UCommonTextStyle>          TextStyle;                                         // 0x270(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	FMulticastInlineDelegateProperty_            BP_OnLoadingStateChanged;                          // 0x278(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	struct FSoftObjectPath                       SpinnerMaterialPath;                               // 0x288(0x20)(ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_DF3[0x28];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonLoadGuard");
		return Clss;
	}

	void SetLoadingText(class FText& InInLoadingText);
	void SetIsLoading(bool InbInIsLoading);
	void OnAssetLoaded__DelegateSignature(class UObject* InObject);
	bool IsLoading();
	void BP_GuardAndLoadAsset(TSoftObjectPtr<class UObject>& InInLazyAsset, FDelegateProperty_& InOnAssetLoaded);
};

// 0xA0 (0x410 - 0x370)
// Class CommonUI.CommonNumericTextBlock
class UCommonNumericTextBlock : public UCommonTextBlock
{
public:
	FMulticastInlineDelegateProperty_            OnInterpolationStartedEvent;                       // 0x370(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnInterpolationUpdatedEvent;                       // 0x380(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnOutroEvent;                                      // 0x390(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnInterpolationEndedEvent;                         // 0x3A0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	float                                        CurrentNumericValue;                               // 0x3B0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECommonNumericType                NumericType;                                       // 0x3B4(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E0F[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCommonNumberFormattingOptions        FormattingSpecification;                           // 0x3B8(0x14)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	float                                        EaseOutInterpolationExponent;                      // 0x3CC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InterpolationUpdateInterval;                       // 0x3D0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PostInterpolationShrinkDuration;                   // 0x3D4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         PerformSizeInterpolation;                          // 0x3D8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsPercentage;                                      // 0x3D9(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_E12[0x36];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonNumericTextBlock");
		return Clss;
	}

	void SetNumericType(enum class ECommonNumericType InInNumericType);
	void SetCurrentValue(float InNewValue);
	void OnOutro__DelegateSignature(class UCommonNumericTextBlock* InNumericTextBlock);
	void OnInterpolationUpdated__DelegateSignature(class UCommonNumericTextBlock* InNumericTextBlock, float InLastValue, float InNewValue);
	void OnInterpolationStarted__DelegateSignature(class UCommonNumericTextBlock* InNumericTextBlock);
	void OnInterpolationEnded__DelegateSignature(class UCommonNumericTextBlock* InNumericTextBlock, bool InHadCompleted);
	bool IsInterpolatingNumericValue();
	void InterpolateToValue(float InTargetValue, float InMaximumInterpolationDuration, float InMinimumChangeRate, float InOutroOffset);
	float GetTargetValue();
};

// 0x0 (0x28 - 0x28)
// Class CommonUI.CommonPoolableWidgetInterface
class ICommonPoolableWidgetInterface : public IInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonPoolableWidgetInterface");
		return Clss;
	}

	void OnReleaseToPool();
	void OnAcquireFromPool();
};

// 0x40 (0x8B0 - 0x870)
// Class CommonUI.CommonRichTextBlock
class UCommonRichTextBlock : public URichTextBlock
{
public:
	enum class ERichTextInlineIconDisplayMode    InlineIconDisplayMode;                             // 0x870(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTintInlineIcon;                                   // 0x871(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E1A[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UCommonTextStyle>          DefaultTextStyleOverrideClass;                     // 0x878(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        MobileTextBlockScale;                              // 0x880(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_E1C[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UCommonTextScrollStyle>    ScrollStyle;                                       // 0x888(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bIsScrollingEnabled;                               // 0x890(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bDisplayAllCaps;                                   // 0x891(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bAutoCollapseWithEmptyText;                        // 0x892(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_E1D[0x1D];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonRichTextBlock");
		return Clss;
	}

	void SetScrollingEnabled(bool InbInIsScrollingEnabled);
};

// 0x60 (0x1550 - 0x14F0)
// Class CommonUI.CommonRotator
class UCommonRotator : public UCommonButtonBase
{
public:
	uint8                                        Pad_E24[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnRotated;                                         // 0x1500(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_E25[0x18];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonTextBlock*                      MyText;                                            // 0x1528(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_E27[0x20];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonRotator");
		return Clss;
	}

	void ShiftTextRight();
	void ShiftTextLeft();
	void SetSelectedItem(int32 InInValue);
	void PopulateTextLabels(const TArray<class FText>& InLabels);
	class FText GetSelectedText();
	int32 GetSelectedIndex();
	void BP_OnOptionsPopulated(int32 InCount);
	void BP_OnOptionSelected(int32 InIndex);
};

// 0xF8 (0x398 - 0x2A0)
// Class CommonUI.CommonTabListWidgetBase
class UCommonTabListWidgetBase : public UCommonUserWidget
{
public:
	FMulticastInlineDelegateProperty_            OnTabSelected;                                     // 0x2A0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnTabButtonCreation;                               // 0x2B0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnTabButtonRemoval;                                // 0x2C0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnTabListRebuilt;                                  // 0x2D0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FDataTableRowHandle                   NextTabInputActionData;                            // 0x2E0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FDataTableRowHandle                   PreviousTabInputActionData;                        // 0x2F0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	class UInputAction*                          NextTabEnhancedInputAction;                        // 0x300(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UInputAction*                          PreviousTabEnhancedInputAction;                    // 0x308(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bAutoListenForInput;                               // 0x310(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bDeferRebuildingTabList;                           // 0x311(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_E5E[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TWeakObjectPtr<class UCommonAnimatedSwitcher> LinkedSwitcher;                                    // 0x314(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_E5F[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonButtonGroupBase*                TabButtonGroup;                                    // 0x320(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_E60[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class FName, struct FCommonRegisteredTabInfo> RegisteredTabsByID;                                // 0x330(0x50)(Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	uint8                                        Pad_E61[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonTabListWidgetBase");
		return Clss;
	}

	void SetTabVisibility(class FName InTabNameID, enum class ESlateVisibility InNewVisibility);
	void SetTabInteractionEnabled(class FName InTabNameID, bool InbEnable);
	void SetTabEnabled(class FName InTabNameID, bool InbEnable);
	void SetListeningForInput(bool InbShouldListen);
	void SetLinkedSwitcher(class UCommonAnimatedSwitcher* InCommonSwitcher);
	bool SelectTabByID(class FName InTabNameID, bool InbSuppressClickFeedback);
	bool RemoveTab(class FName InTabNameID);
	void RemoveAllTabs();
	bool RegisterTab(class FName InTabNameID, TSubclassOf<class UCommonButtonBase> InButtonWidgetType, class UWidget* InContentWidget, int32 InTabIndex);
	void OnTabSelected__DelegateSignature(class FName InTabId);
	void OnTabListRebuilt__DelegateSignature();
	void OnTabButtonRemoval__DelegateSignature(class FName InTabId, class UCommonButtonBase* InTabButton);
	void OnTabButtonCreation__DelegateSignature(class FName InTabId, class UCommonButtonBase* InTabButton);
	void HandleTabRemoval(class FName InTabNameID, class UCommonButtonBase* InTabButton);
	void HandleTabCreation(class FName InTabNameID, class UCommonButtonBase* InTabButton);
	void HandleTabButtonSelected(class UCommonButtonBase* InSelectedTabButton, int32 InButtonIndex);
	void HandlePreviousTabInputAction(bool* InbPassThrough);
	void HandlePreLinkedSwitcherChanged_BP();
	void HandlePostLinkedSwitcherChanged_BP();
	void HandleNextTabInputAction(bool* InbPassThrough);
	class FName GetTabIdAtIndex(int32 InIndex);
	int32 GetTabCount();
	class UCommonButtonBase* GetTabButtonBaseByID(class FName InTabNameID);
	class FName GetSelectedTabId();
	class UCommonAnimatedSwitcher* GetLinkedSwitcher();
	class FName GetActiveTab();
	void DisableTabWithReason(class FName InTabNameID, class FText& InReason);
};

// 0x188 (0x1B0 - 0x28)
// Class CommonUI.CommonTextStyle
class UCommonTextStyle : public UObject
{
public:
	struct FSlateFontInfo                        Font;                                              // 0x28(0x58)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          Color;                                             // 0x80(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUsesDropShadow;                                   // 0x90(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E6F[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             ShadowOffset;                                      // 0x98(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          ShadowColor;                                       // 0xA8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMargin                               Margin;                                            // 0xB8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_E70[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           StrikeBrush;                                       // 0xD0(0xD0)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	float                                        LineHeightPercentage;                              // 0x1A0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E71[0xC];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonTextStyle");
		return Clss;
	}

	void GetStrikeBrush(struct FSlateBrush* InOutStrikeBrush);
	void GetShadowOffset(struct FVector2D* InOutShadowOffset);
	void GetShadowColor(struct FLinearColor* InOutColor);
	void GetMargin(struct FMargin* InOutMargin);
	float GetLineHeightPercentage();
	void GetFont(struct FSlateFontInfo* InOutFont);
	void GetColor(struct FLinearColor* InOutColor);
};

// 0x18 (0x40 - 0x28)
// Class CommonUI.CommonTextScrollStyle
class UCommonTextScrollStyle : public UObject
{
public:
	float                                        Speed;                                             // 0x28(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StartDelay;                                        // 0x2C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EndDelay;                                          // 0x30(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FadeInDelay;                                       // 0x34(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FadeOutDelay;                                      // 0x38(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E73[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonTextScrollStyle");
		return Clss;
	}

};

// 0x0 (0xC40 - 0xC40)
// Class CommonUI.CommonTileView
class UCommonTileView : public UTileView
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonTileView");
		return Clss;
	}

};

// 0x0 (0xC80 - 0xC80)
// Class CommonUI.CommonTreeView
class UCommonTreeView : public UTreeView
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonTreeView");
		return Clss;
	}

};

// 0x98 (0xC0 - 0x28)
// Class CommonUI.CommonUIEditorSettings
class UCommonUIEditorSettings : public UObject
{
public:
	TSoftClassPtr<class UCommonTextStyle>        TemplateTextStyle;                                 // 0x28(0x30)(Edit, Config, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSoftClassPtr<class UCommonButtonStyle>      TemplateButtonStyle;                               // 0x58(0x30)(Edit, Config, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSoftClassPtr<class UCommonBorderStyle>      TemplateBorderStyle;                               // 0x88(0x30)(Edit, Config, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_E77[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonUIEditorSettings");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class CommonUI.CommonUILibrary
class UCommonUILibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonUILibrary");
		return Clss;
	}

	class UWidget* FindParentWidgetOfType(class UWidget* InStartingWidget, TSubclassOf<class UWidget> InType);
};

// 0x8 (0x30 - 0x28)
// Class CommonUI.CommonUIRichTextData
class UCommonUIRichTextData : public UObject
{
public:
	class UDataTable*                            InlineIconSet;                                     // 0x28(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonUIRichTextData");
		return Clss;
	}

};

// 0x1C8 (0x1F0 - 0x28)
// Class CommonUI.CommonUISettings
class UCommonUISettings : public UObject
{
public:
	bool                                         bAutoLoadData;                                     // 0x28(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_E81[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UObject>                DefaultImageResourceObject;                        // 0x30(0x30)(Edit, Config, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSoftObjectPtr<class UMaterialInterface>     DefaultThrobberMaterial;                           // 0x60(0x30)(Edit, Config, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSoftClassPtr<class UCommonUIRichTextData>   DefaultRichTextDataClass;                          // 0x90(0x30)(Edit, Config, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FGameplayTag>                  PlatformTraits;                                    // 0xC0(0x10)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPrivate)
	uint8                                        Pad_E84[0x28];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               DefaultImageResourceObjectInstance;                // 0xF8(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMaterialInterface*                    DefaultThrobberMaterialInstance;                   // 0x100(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_E85[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           DefaultThrobberBrush;                              // 0x110(0xD0)(Transient, NativeAccessSpecifierPrivate)
	class UCommonUIRichTextData*                 RichTextDataInstance;                              // 0x1E0(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_E87[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonUISettings");
		return Clss;
	}

};

// 0x10 (0x40 - 0x30)
// Class CommonUI.CommonUISubsystemBase
class UCommonUISubsystemBase : public UGameInstanceSubsystem
{
public:
	uint8                                        Pad_E92[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonUISubsystemBase");
		return Clss;
	}

	struct FSlateBrush GetInputActionButtonIcon(struct FDataTableRowHandle& InInputActionRowHandle, enum class ECommonInputType InInputType, class FName& InGamepadName);
	struct FSlateBrush GetEnhancedInputActionButtonIcon(class UInputAction* InInputAction, class ULocalPlayer* InLocalPlayer);
};

// 0x8 (0x30 - 0x28)
// Class CommonUI.CommonInputMetadata
class UCommonInputMetadata : public UObject
{
public:
	int32                                        NavBarPriority;                                    // 0x28(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsGenericInputAction;                             // 0x2C(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E94[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonInputMetadata");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class CommonUI.CommonMappingContextMetadataInterface
class ICommonMappingContextMetadataInterface : public IInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonMappingContextMetadataInterface");
		return Clss;
	}

};

// 0x60 (0x90 - 0x30)
// Class CommonUI.CommonMappingContextMetadata
class UCommonMappingContextMetadata : public UDataAsset
{
public:
	uint8                                        Pad_E96[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonInputMetadata*                  EnhancedInputMetadata;                             // 0x38(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class UInputAction*, class UCommonInputMetadata*> PerActionEnhancedInputMetadata;                    // 0x40(0x50)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonMappingContextMetadata");
		return Clss;
	}

};

// 0x58 (0x88 - 0x30)
// Class CommonUI.CommonUIVisibilitySubsystem
class UCommonUIVisibilitySubsystem : public ULocalPlayerSubsystem
{
public:
	uint8                                        Pad_E97[0x58];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonUIVisibilitySubsystem");
		return Clss;
	}

};

// 0x160 (0x2B0 - 0x150)
// Class CommonUI.CommonVideoPlayer
class UCommonVideoPlayer : public UWidget
{
public:
	class UMediaSource*                          Video;                                             // 0x150(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMediaPlayer*                          MediaPlayer;                                       // 0x158(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMediaTexture*                         MediaTexture;                                      // 0x160(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMaterial*                             VideoMaterial;                                     // 0x168(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMediaSoundComponent*                  SoundComponent;                                    // 0x170(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_E9A[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           VideoBrush;                                        // 0x180(0xD0)(Transient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_E9B[0x60];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonVideoPlayer");
		return Clss;
	}

};

// 0x28 (0x1A0 - 0x178)
// Class CommonUI.CommonVisibilitySwitcher
class UCommonVisibilitySwitcher : public UOverlay
{
public:
	enum class ESlateVisibility                  ShownVisibility;                                   // 0x178(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_EAC[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ActiveWidgetIndex;                                 // 0x17C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bAutoActivateSlot;                                 // 0x180(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bActivateFirstSlotOnAdding;                        // 0x181(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_EAE[0x1E];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonVisibilitySwitcher");
		return Clss;
	}

	void SetActiveWidgetIndex(int32 InIndex);
	void SetActiveWidget(class UWidget* InWidget);
	void IncrementActiveWidgetIndex(bool InbAllowWrapping);
	int32 GetActiveWidgetIndex();
	class UWidget* GetActiveWidget();
	void DecrementActiveWidgetIndex(bool InbAllowWrapping);
	void DeactivateVisibleSlot();
	void ActivateVisibleSlot();
};

// 0x10 (0x68 - 0x58)
// Class CommonUI.CommonVisibilitySwitcherSlot
class UCommonVisibilitySwitcherSlot : public UOverlaySlot
{
public:
	uint8                                        Pad_EB0[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonVisibilitySwitcherSlot");
		return Clss;
	}

};

// 0x58 (0x380 - 0x328)
// Class CommonUI.UCommonVisibilityWidgetBase
class UUCommonVisibilityWidgetBase : public UCommonBorder
{
public:
	TMap<class FName, bool>                      VisibilityControls;                                // 0x328(0x50)(Edit, EditFixedSize, NativeAccessSpecifierPublic)
	bool                                         bShowForGamepad;                                   // 0x378(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowForMouseAndKeyboard;                          // 0x379(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowForTouch;                                     // 0x37A(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESlateVisibility                  VisibleType;                                       // 0x37B(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESlateVisibility                  HiddenType;                                        // 0x37C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_EB4[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("UCommonVisibilityWidgetBase");
		return Clss;
	}

	TArray<class FName> GetRegisteredPlatforms();
};

// 0x20 (0x1C0 - 0x1A0)
// Class CommonUI.CommonVisualAttachment
class UCommonVisualAttachment : public USizeBox
{
public:
	struct FVector2D                             ContentAnchor;                                     // 0x1A0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_EB7[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonVisualAttachment");
		return Clss;
	}

};

// 0x48 (0x1B0 - 0x168)
// Class CommonUI.CommonWidgetCarousel
class UCommonWidgetCarousel : public UPanelWidget
{
public:
	int32                                        ActiveWidgetIndex;                                 // 0x168(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_EC3[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnCurrentPageIndexChanged;                         // 0x170(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_EC5[0x30];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonWidgetCarousel");
		return Clss;
	}

	void SetActiveWidgetIndex(int32 InIndex);
	void SetActiveWidget(class UWidget* InWidget);
	void PreviousPage();
	void NextPage();
	class UWidget* GetWidgetAtIndex(int32 InIndex);
	int32 GetActiveWidgetIndex();
	void EndAutoScrolling();
	void BeginAutoScrolling(float InScrollInterval);
};

// 0x48 (0x198 - 0x150)
// Class CommonUI.CommonWidgetCarouselNavBar
class UCommonWidgetCarouselNavBar : public UWidget
{
public:
	TSubclassOf<class UCommonButtonBase>         ButtonWidgetType;                                  // 0x150(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMargin                               ButtonPadding;                                     // 0x158(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_ED7[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonWidgetCarousel*                 LinkedCarousel;                                    // 0x178(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonButtonGroupBase*                ButtonGroup;                                       // 0x180(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UCommonButtonBase*>             Buttons;                                           // 0x188(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, UObjectWrapper, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonWidgetCarouselNavBar");
		return Clss;
	}

	void SetLinkedCarousel(class UCommonWidgetCarousel* InCommonCarousel);
	void HandlePageChanged(class UCommonWidgetCarousel* InCommonCarousel, int32 InPageIndex);
	void HandleButtonClicked(class UCommonButtonBase* InAssociatedButton, int32 InButtonIndex);
};

// 0x0 (0x28 - 0x28)
// Class CommonUI.CommonWidgetGroupBase
class UCommonWidgetGroupBase : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonWidgetGroupBase");
		return Clss;
	}

	void RemoveWidget(class UWidget* InInWidget);
	void RemoveAll();
	void AddWidget(class UWidget* InInWidget);
};

// 0xE8 (0x110 - 0x28)
// Class CommonUI.CommonButtonGroupBase
class UCommonButtonGroupBase : public UCommonWidgetGroupBase
{
public:
	FMulticastInlineDelegateProperty_            OnSelectedButtonBaseChanged;                       // 0x28(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_F00[0x18];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnHoveredButtonBaseChanged;                        // 0x50(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_F01[0x18];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnButtonBaseClicked;                               // 0x78(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_F02[0x18];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnButtonBaseDoubleClicked;                         // 0xA0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_F04[0x18];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnSelectionCleared;                                // 0xC8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_F05[0x18];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bSelectionRequired;                                // 0xF0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_F06[0x1F];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonButtonGroupBase");
		return Clss;
	}

	void SetSelectionRequired(bool InbRequireSelection);
	void SelectPreviousButton(bool InbAllowWrap);
	void SelectNextButton(bool InbAllowWrap);
	void SelectButtonAtIndex(int32 InButtonIndex, bool InbAllowSound);
	void OnSelectionStateChangedBase(class UCommonButtonBase* InBaseButton, bool InbIsSelected);
	void OnHandleButtonBaseDoubleClicked(class UCommonButtonBase* InBaseButton);
	void OnHandleButtonBaseClicked(class UCommonButtonBase* InBaseButton);
	void OnButtonBaseUnhovered(class UCommonButtonBase* InBaseButton);
	void OnButtonBaseHovered(class UCommonButtonBase* InBaseButton);
	bool HasAnyButtons();
	int32 GetSelectedButtonIndex();
	class UCommonButtonBase* GetSelectedButtonBase();
	int32 GetHoveredButtonIndex();
	int32 GetButtonCount();
	class UCommonButtonBase* GetButtonBaseAtIndex(int32 InIndex);
	int32 FindButtonIndex(class UCommonButtonBase* InButtonToFind);
	void DeselectAll();
};

// 0x18 (0x248 - 0x230)
// Class CommonUI.CommonBoundActionBar
class UCommonBoundActionBar : public UDynamicEntryBoxBase
{
public:
	uint8                                        Pad_F0A[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UCommonButtonBase>         ActionButtonClass;                                 // 0x238(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bDisplayOwningPlayerActionsOnly;                   // 0x240(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bIgnoreDuplicateActions;                           // 0x241(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_F0B[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonBoundActionBar");
		return Clss;
	}

	void SetDisplayOwningPlayerActionsOnly(bool InbShouldOnlyDisplayOwningPlayerActions);
};

// 0x20 (0x1510 - 0x14F0)
// Class CommonUI.CommonBoundActionButton
class UCommonBoundActionButton : public UCommonButtonBase
{
public:
	uint8                                        Pad_F0E[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonTextBlock*                      Text_ActionName;                                   // 0x14F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_F0F[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonBoundActionButton");
		return Clss;
	}

	void OnUpdateInputAction();
};

// 0x0 (0xB0 - 0xB0)
// Class CommonUI.CommonGenericInputActionDataTable
class UCommonGenericInputActionDataTable : public UDataTable
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonGenericInputActionDataTable");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class CommonUI.CommonInputActionDataProcessor
class UCommonInputActionDataProcessor : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonInputActionDataProcessor");
		return Clss;
	}

};

// 0x50 (0x78 - 0x28)
// Class CommonUI.CommonUIInputSettings
class UCommonUIInputSettings : public UObject
{
public:
	bool                                         bLinkCursorToGamepadFocus;                         // 0x28(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_F11[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        UIActionProcessingPriority;                        // 0x2C(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FUIInputAction>                InputActions;                                      // 0x30(0x10)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPrivate)
	TArray<struct FUIInputAction>                ActionOverrides;                                   // 0x40(0x10)(ZeroConstructor, Config, NativeAccessSpecifierPrivate)
	struct FCommonAnalogCursorSettings           AnalogCursorSettings;                              // 0x50(0x24)(Edit, Config, NoDestructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_F12[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonUIInputSettings");
		return Clss;
	}

};

// 0x28 (0x58 - 0x30)
// Class CommonUI.CommonStyleSheet
class UCommonStyleSheet : public UDataAsset
{
public:
	TArray<class UCommonStyleSheetTypeBase*>     Properties;                                        // 0x30(0x10)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate)
	TArray<class UCommonStyleSheet*>             ImportedStyleSheets;                               // 0x40(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                        Pad_F14[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonStyleSheet");
		return Clss;
	}

};

// 0x120 (0x270 - 0x150)
// Class CommonUI.CommonActivatableWidgetContainerBase
class UCommonActivatableWidgetContainerBase : public UWidget
{
public:
	uint8                                        Pad_F23[0x18];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class ECommonSwitcherTransition         TransitionType;                                    // 0x168(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ETransitionCurve                  TransitionCurveType;                               // 0x169(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_F24[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TransitionDuration;                                // 0x16C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UCommonActivatableWidget*>      WidgetList;                                        // 0x170(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	class UCommonActivatableWidget*              DisplayedWidget;                                   // 0x180(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FUserWidgetPool                       GeneratedWidgetsPool;                              // 0x188(0x88)(Transient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_F26[0x60];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonActivatableWidgetContainerBase");
		return Clss;
	}

	void SetTransitionDuration(float InDuration);
	void RemoveWidget(class UCommonActivatableWidget* InWidgetToRemove);
	float GetTransitionDuration();
	class UCommonActivatableWidget* GetActiveWidget();
	void ClearWidgets();
	class UCommonActivatableWidget* BP_AddWidget(TSubclassOf<class UCommonActivatableWidget> InActivatableWidgetClass);
};

// 0x10 (0x280 - 0x270)
// Class CommonUI.CommonActivatableWidgetStack
class UCommonActivatableWidgetStack : public UCommonActivatableWidgetContainerBase
{
public:
	TSubclassOf<class UCommonActivatableWidget>  RootContentWidgetClass;                            // 0x270(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonActivatableWidget*              RootContentWidget;                                 // 0x278(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonActivatableWidgetStack");
		return Clss;
	}

};

// 0x0 (0x270 - 0x270)
// Class CommonUI.CommonActivatableWidgetQueue
class UCommonActivatableWidgetQueue : public UCommonActivatableWidgetContainerBase
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommonActivatableWidgetQueue");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
