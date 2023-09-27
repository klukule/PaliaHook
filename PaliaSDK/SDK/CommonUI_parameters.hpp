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

// 0x10 (0x10 - 0x0)
// Function CommonUI.CommonActionWidget.SetInputActions
struct UCommonActionWidget_SetInputActions_Params
{
public:
	TArray<struct FDataTableRowHandle>           NewInputActions;                                   // 0x0(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CommonUI.CommonActionWidget.SetInputAction
struct UCommonActionWidget_SetInputAction_Params
{
public:
	struct FDataTableRowHandle                   InputActionRow;                                    // 0x0(0x10)(Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0xD0 (0xD0 - 0x0)
// Function CommonUI.CommonActionWidget.SetIconRimBrush
struct UCommonActionWidget_SetIconRimBrush_Params
{
public:
	struct FSlateBrush                           InIconRimBrush;                                    // 0x0(0xD0)(Parm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CommonUI.CommonActionWidget.SetEnhancedInputAction
struct UCommonActionWidget_SetEnhancedInputAction_Params
{
public:
	class UInputAction*                          InInputAction;                                     // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// DelegateFunction CommonUI.CommonActionWidget.OnInputMethodChanged__DelegateSignature
struct UCommonActionWidget_OnInputMethodChanged__DelegateSignature_Params
{
public:
	bool                                         bUsingGamepad;                                     // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CommonUI.CommonActionWidget.IsHeldAction
struct UCommonActionWidget_IsHeldAction_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xD0 (0xD0 - 0x0)
// Function CommonUI.CommonActionWidget.GetIcon
struct UCommonActionWidget_GetIcon_Params
{
public:
	struct FSlateBrush                           ReturnValue;                                       // 0x0(0xD0)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function CommonUI.CommonActionWidget.GetDisplayText
struct UCommonActionWidget_GetDisplayText_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CommonUI.CommonUserWidget.SetConsumePointerInput
struct UCommonUserWidget_SetConsumePointerInput_Params
{
public:
	bool                                         bInConsumePointerInput;                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x3 (0x3 - 0x0)
// Function CommonUI.CommonActivatableWidget.SetBindVisibilities
struct UCommonActivatableWidget_SetBindVisibilities_Params
{
public:
	enum class ESlateVisibility                  OnActivatedVisibility;                             // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESlateVisibility                  OnDeactivatedVisibility;                           // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInAllActive;                                      // 0x2(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CommonUI.CommonActivatableWidget.IsActivated
struct UCommonActivatableWidget_IsActivated_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CommonUI.CommonActivatableWidget.GetDesiredFocusTarget
struct UCommonActivatableWidget_GetDesiredFocusTarget_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function CommonUI.CommonActivatableWidget.DeactivateWidget
struct UCommonActivatableWidget_DeactivateWidget_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function CommonUI.CommonActivatableWidget.BP_OnHandleBackAction
struct UCommonActivatableWidget_BP_OnHandleBackAction_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function CommonUI.CommonActivatableWidget.BP_OnDeactivated
struct UCommonActivatableWidget_BP_OnDeactivated_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function CommonUI.CommonActivatableWidget.BP_OnActivated
struct UCommonActivatableWidget_BP_OnActivated_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function CommonUI.CommonActivatableWidget.BP_GetDesiredFocusTarget
struct UCommonActivatableWidget_BP_GetDesiredFocusTarget_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CommonUI.CommonActivatableWidget.BindVisibilityToActivation
struct UCommonActivatableWidget_BindVisibilityToActivation_Params
{
public:
	class UCommonActivatableWidget*              ActivatableWidget;                                 // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function CommonUI.CommonActivatableWidget.ActivateWidget
struct UCommonActivatableWidget_ActivateWidget_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function CommonUI.CommonAnimatedSwitcher.SetDisableTransitionAnimation
struct UCommonAnimatedSwitcher_SetDisableTransitionAnimation_Params
{
public:
	bool                                         bDisableAnimation;                                 // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CommonUI.CommonAnimatedSwitcher.IsTransitionPlaying
struct UCommonAnimatedSwitcher_IsTransitionPlaying_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CommonUI.CommonAnimatedSwitcher.IsCurrentlySwitching
struct UCommonAnimatedSwitcher_IsCurrentlySwitching_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CommonUI.CommonAnimatedSwitcher.HasWidgets
struct UCommonAnimatedSwitcher_HasWidgets_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CommonUI.CommonAnimatedSwitcher.ActivatePreviousWidget
struct UCommonAnimatedSwitcher_ActivatePreviousWidget_Params
{
public:
	bool                                         bCanWrap;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CommonUI.CommonAnimatedSwitcher.ActivateNextWidget
struct UCommonAnimatedSwitcher_ActivateNextWidget_Params
{
public:
	bool                                         bCanWrap;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xD0 (0xD0 - 0x0)
// Function CommonUI.CommonBorderStyle.GetBackgroundBrush
struct UCommonBorderStyle_GetBackgroundBrush_Params
{
public:
	struct FSlateBrush                           Brush;                                             // 0x0(0xD0)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CommonUI.CommonBorder.SetStyle
struct UCommonBorder_SetStyle_Params
{
public:
	TSubclassOf<class UCommonBorderStyle>        InStyle;                                           // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CommonUI.CommonButtonStyle.GetSelectedTextStyle
struct UCommonButtonStyle_GetSelectedTextStyle_Params
{
public:
	class UCommonTextStyle*                      ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xD0 (0xD0 - 0x0)
// Function CommonUI.CommonButtonStyle.GetSelectedPressedBrush
struct UCommonButtonStyle_GetSelectedPressedBrush_Params
{
public:
	struct FSlateBrush                           Brush;                                             // 0x0(0xD0)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CommonUI.CommonButtonStyle.GetSelectedHoveredTextStyle
struct UCommonButtonStyle_GetSelectedHoveredTextStyle_Params
{
public:
	class UCommonTextStyle*                      ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xD0 (0xD0 - 0x0)
// Function CommonUI.CommonButtonStyle.GetSelectedHoveredBrush
struct UCommonButtonStyle_GetSelectedHoveredBrush_Params
{
public:
	struct FSlateBrush                           Brush;                                             // 0x0(0xD0)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0xD0 (0xD0 - 0x0)
// Function CommonUI.CommonButtonStyle.GetSelectedBaseBrush
struct UCommonButtonStyle_GetSelectedBaseBrush_Params
{
public:
	struct FSlateBrush                           Brush;                                             // 0x0(0xD0)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CommonUI.CommonButtonStyle.GetNormalTextStyle
struct UCommonButtonStyle_GetNormalTextStyle_Params
{
public:
	class UCommonTextStyle*                      ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xD0 (0xD0 - 0x0)
// Function CommonUI.CommonButtonStyle.GetNormalPressedBrush
struct UCommonButtonStyle_GetNormalPressedBrush_Params
{
public:
	struct FSlateBrush                           Brush;                                             // 0x0(0xD0)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CommonUI.CommonButtonStyle.GetNormalHoveredTextStyle
struct UCommonButtonStyle_GetNormalHoveredTextStyle_Params
{
public:
	class UCommonTextStyle*                      ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xD0 (0xD0 - 0x0)
// Function CommonUI.CommonButtonStyle.GetNormalHoveredBrush
struct UCommonButtonStyle_GetNormalHoveredBrush_Params
{
public:
	struct FSlateBrush                           Brush;                                             // 0x0(0xD0)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0xD0 (0xD0 - 0x0)
// Function CommonUI.CommonButtonStyle.GetNormalBaseBrush
struct UCommonButtonStyle_GetNormalBaseBrush_Params
{
public:
	struct FSlateBrush                           Brush;                                             // 0x0(0xD0)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0xD0 (0xD0 - 0x0)
// Function CommonUI.CommonButtonStyle.GetMaterialBrush
struct UCommonButtonStyle_GetMaterialBrush_Params
{
public:
	struct FSlateBrush                           Brush;                                             // 0x0(0xD0)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CommonUI.CommonButtonStyle.GetDisabledTextStyle
struct UCommonButtonStyle_GetDisabledTextStyle_Params
{
public:
	class UCommonTextStyle*                      ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xD0 (0xD0 - 0x0)
// Function CommonUI.CommonButtonStyle.GetDisabledBrush
struct UCommonButtonStyle_GetDisabledBrush_Params
{
public:
	struct FSlateBrush                           Brush;                                             // 0x0(0xD0)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CommonUI.CommonButtonStyle.GetCustomPadding
struct UCommonButtonStyle_GetCustomPadding_Params
{
public:
	struct FMargin                               OutCustomPadding;                                  // 0x0(0x10)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CommonUI.CommonButtonStyle.GetButtonPadding
struct UCommonButtonStyle_GetButtonPadding_Params
{
public:
	struct FMargin                               OutButtonPadding;                                  // 0x0(0x10)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function CommonUI.CommonButtonBase.StopDoubleClickPropagation
struct UCommonButtonBase_StopDoubleClickPropagation_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function CommonUI.CommonButtonBase.SetTriggeringInputAction
struct UCommonButtonBase_SetTriggeringInputAction_Params
{
public:
	struct FDataTableRowHandle                   InputActionRow;                                    // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CommonUI.CommonButtonBase.SetTriggeringEnhancedInputAction
struct UCommonButtonBase_SetTriggeringEnhancedInputAction_Params
{
public:
	class UInputAction*                          InInputAction;                                     // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CommonUI.CommonButtonBase.SetTriggeredInputAction
struct UCommonButtonBase_SetTriggeredInputAction_Params
{
public:
	struct FDataTableRowHandle                   InputActionRow;                                    // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CommonUI.CommonButtonBase.SetTouchMethod
struct UCommonButtonBase_SetTouchMethod_Params
{
public:
	enum class EButtonTouchMethod                InTouchMethod;                                     // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CommonUI.CommonButtonBase.SetStyle
struct UCommonButtonBase_SetStyle_Params
{
public:
	TSubclassOf<class UCommonButtonStyle>        InStyle;                                           // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CommonUI.CommonButtonBase.SetShouldUseFallbackDefaultInputAction
struct UCommonButtonBase_SetShouldUseFallbackDefaultInputAction_Params
{
public:
	bool                                         bInShouldUseFallbackDefaultInputAction;            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CommonUI.CommonButtonBase.SetShouldSelectUponReceivingFocus
struct UCommonButtonBase_SetShouldSelectUponReceivingFocus_Params
{
public:
	bool                                         bInShouldSelectUponReceivingFocus;                 // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CommonUI.CommonButtonBase.SetSelectedPressedSoundOverride
struct UCommonButtonBase_SetSelectedPressedSoundOverride_Params
{
public:
	class USoundBase*                            Sound;                                             // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x3 (0x3 - 0x0)
// Function CommonUI.CommonButtonBase.SetSelectedInternal
struct UCommonButtonBase_SetSelectedInternal_Params
{
public:
	bool                                         bInSelected;                                       // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowSound;                                       // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bBroadcast;                                        // 0x2(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CommonUI.CommonButtonBase.SetSelectedHoveredSoundOverride
struct UCommonButtonBase_SetSelectedHoveredSoundOverride_Params
{
public:
	class USoundBase*                            Sound;                                             // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CommonUI.CommonButtonBase.SetPressMethod
struct UCommonButtonBase_SetPressMethod_Params
{
public:
	enum class EButtonPressMethod                InPressMethod;                                     // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CommonUI.CommonButtonBase.SetPressedSoundOverride
struct UCommonButtonBase_SetPressedSoundOverride_Params
{
public:
	class USoundBase*                            Sound;                                             // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CommonUI.CommonButtonBase.SetMinDimensions
struct UCommonButtonBase_SetMinDimensions_Params
{
public:
	int32                                        InMinWidth;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InMinHeight;                                       // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CommonUI.CommonButtonBase.SetLockedPressedSoundOverride
struct UCommonButtonBase_SetLockedPressedSoundOverride_Params
{
public:
	class USoundBase*                            Sound;                                             // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CommonUI.CommonButtonBase.SetLockedHoveredSoundOverride
struct UCommonButtonBase_SetLockedHoveredSoundOverride_Params
{
public:
	class USoundBase*                            Sound;                                             // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CommonUI.CommonButtonBase.SetIsToggleable
struct UCommonButtonBase_SetIsToggleable_Params
{
public:
	bool                                         bInIsToggleable;                                   // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function CommonUI.CommonButtonBase.SetIsSelected
struct UCommonButtonBase_SetIsSelected_Params
{
public:
	bool                                         InSelected;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bGiveClickFeedback;                                // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CommonUI.CommonButtonBase.SetIsSelectable
struct UCommonButtonBase_SetIsSelectable_Params
{
public:
	bool                                         bInIsSelectable;                                   // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CommonUI.CommonButtonBase.SetIsLocked
struct UCommonButtonBase_SetIsLocked_Params
{
public:
	bool                                         bInIsLocked;                                       // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CommonUI.CommonButtonBase.SetIsInteractionEnabled
struct UCommonButtonBase_SetIsInteractionEnabled_Params
{
public:
	bool                                         bInIsInteractionEnabled;                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CommonUI.CommonButtonBase.SetIsInteractableWhenSelected
struct UCommonButtonBase_SetIsInteractableWhenSelected_Params
{
public:
	bool                                         bInInteractableWhenSelected;                       // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CommonUI.CommonButtonBase.SetIsFocusable
struct UCommonButtonBase_SetIsFocusable_Params
{
public:
	bool                                         bInIsFocusable;                                    // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xE0 (0xE0 - 0x0)
// Function CommonUI.CommonButtonBase.SetInputActionProgressMaterial
struct UCommonButtonBase_SetInputActionProgressMaterial_Params
{
public:
	struct FSlateBrush                           InProgressMaterialBrush;                           // 0x0(0xD0)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FName                                  InProgressMaterialParam;                           // 0xD0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_273[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function CommonUI.CommonButtonBase.SetHoveredSoundOverride
struct UCommonButtonBase_SetHoveredSoundOverride_Params
{
public:
	class USoundBase*                            Sound;                                             // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CommonUI.CommonButtonBase.SetHideInputAction
struct UCommonButtonBase_SetHideInputAction_Params
{
public:
	bool                                         bInHideInputAction;                                // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CommonUI.CommonButtonBase.SetClickMethod
struct UCommonButtonBase_SetClickMethod_Params
{
public:
	enum class EButtonClickMethod                InClickMethod;                                     // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CommonUI.CommonButtonBase.OnTriggeringInputActionChanged
struct UCommonButtonBase_OnTriggeringInputActionChanged_Params
{
public:
	struct FDataTableRowHandle                   NewTriggeredAction;                                // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CommonUI.CommonButtonBase.OnTriggeringEnhancedInputActionChanged
struct UCommonButtonBase_OnTriggeringEnhancedInputActionChanged_Params
{
public:
	class UInputAction*                          InInputAction;                                     // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CommonUI.CommonButtonBase.OnTriggeredInputActionChanged
struct UCommonButtonBase_OnTriggeredInputActionChanged_Params
{
public:
	struct FDataTableRowHandle                   NewTriggeredAction;                                // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CommonUI.CommonButtonBase.OnInputMethodChanged
struct UCommonButtonBase_OnInputMethodChanged_Params
{
public:
	enum class ECommonInputType                  CurrentInputType;                                  // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function CommonUI.CommonButtonBase.OnCurrentTextStyleChanged
struct UCommonButtonBase_OnCurrentTextStyleChanged_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function CommonUI.CommonButtonBase.OnControlMappingsRebuilt
struct UCommonButtonBase_OnControlMappingsRebuilt_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function CommonUI.CommonButtonBase.OnActionProgress
struct UCommonButtonBase_OnActionProgress_Params
{
public:
	float                                        HeldPercent;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function CommonUI.CommonButtonBase.OnActionComplete
struct UCommonButtonBase_OnActionComplete_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function CommonUI.CommonButtonBase.NativeOnActionProgress
struct UCommonButtonBase_NativeOnActionProgress_Params
{
public:
	float                                        HeldPercent;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function CommonUI.CommonButtonBase.NativeOnActionComplete
struct UCommonButtonBase_NativeOnActionComplete_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function CommonUI.CommonButtonBase.IsPressed
struct UCommonButtonBase_IsPressed_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CommonUI.CommonButtonBase.IsInteractionEnabled
struct UCommonButtonBase_IsInteractionEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CommonUI.CommonButtonBase.HandleTriggeringActionCommited
struct UCommonButtonBase_HandleTriggeringActionCommited_Params
{
public:
	bool                                         bPassThrough;                                      // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function CommonUI.CommonButtonBase.HandleFocusReceived
struct UCommonButtonBase_HandleFocusReceived_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function CommonUI.CommonButtonBase.HandleFocusLost
struct UCommonButtonBase_HandleFocusLost_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function CommonUI.CommonButtonBase.HandleButtonReleased
struct UCommonButtonBase_HandleButtonReleased_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function CommonUI.CommonButtonBase.HandleButtonPressed
struct UCommonButtonBase_HandleButtonPressed_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function CommonUI.CommonButtonBase.HandleButtonClicked
struct UCommonButtonBase_HandleButtonClicked_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function CommonUI.CommonButtonBase.GetStyle
struct UCommonButtonBase_GetStyle_Params
{
public:
	class UCommonButtonStyle*                    ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CommonUI.CommonButtonBase.GetSingleMaterialStyleMID
struct UCommonButtonBase_GetSingleMaterialStyleMID_Params
{
public:
	class UMaterialInstanceDynamic*              ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CommonUI.CommonButtonBase.GetShouldSelectUponReceivingFocus
struct UCommonButtonBase_GetShouldSelectUponReceivingFocus_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CommonUI.CommonButtonBase.GetSelected
struct UCommonButtonBase_GetSelected_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CommonUI.CommonButtonBase.GetLocked
struct UCommonButtonBase_GetLocked_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CommonUI.CommonButtonBase.GetIsFocusable
struct UCommonButtonBase_GetIsFocusable_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function CommonUI.CommonButtonBase.GetInputAction
struct UCommonButtonBase_GetInputAction_Params
{
public:
	struct FDataTableRowHandle                   InputActionRow;                                    // 0x0(0x10)(Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28B[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function CommonUI.CommonButtonBase.GetEnhancedInputAction
struct UCommonButtonBase_GetEnhancedInputAction_Params
{
public:
	class UInputAction*                          ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CommonUI.CommonButtonBase.GetCurrentTextStyleClass
struct UCommonButtonBase_GetCurrentTextStyleClass_Params
{
public:
	TSubclassOf<class UCommonTextStyle>          ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CommonUI.CommonButtonBase.GetCurrentTextStyle
struct UCommonButtonBase_GetCurrentTextStyle_Params
{
public:
	class UCommonTextStyle*                      ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CommonUI.CommonButtonBase.GetCurrentCustomPadding
struct UCommonButtonBase_GetCurrentCustomPadding_Params
{
public:
	struct FMargin                               OutCustomPadding;                                  // 0x0(0x10)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CommonUI.CommonButtonBase.GetCurrentButtonPadding
struct UCommonButtonBase_GetCurrentButtonPadding_Params
{
public:
	struct FMargin                               OutButtonPadding;                                  // 0x0(0x10)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function CommonUI.CommonButtonBase.DisableButtonWithReason
struct UCommonButtonBase_DisableButtonWithReason_Params
{
public:
	class FText                                  DisabledReason;                                    // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function CommonUI.CommonButtonBase.ClearSelection
struct UCommonButtonBase_ClearSelection_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function CommonUI.CommonButtonBase.BP_OnUnhovered
struct UCommonButtonBase_BP_OnUnhovered_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function CommonUI.CommonButtonBase.BP_OnSelected
struct UCommonButtonBase_BP_OnSelected_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function CommonUI.CommonButtonBase.BP_OnReleased
struct UCommonButtonBase_BP_OnReleased_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function CommonUI.CommonButtonBase.BP_OnPressed
struct UCommonButtonBase_BP_OnPressed_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function CommonUI.CommonButtonBase.BP_OnLockedChanged
struct UCommonButtonBase_BP_OnLockedChanged_Params
{
public:
	bool                                         bIsLocked;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function CommonUI.CommonButtonBase.BP_OnLockDoubleClicked
struct UCommonButtonBase_BP_OnLockDoubleClicked_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function CommonUI.CommonButtonBase.BP_OnLockClicked
struct UCommonButtonBase_BP_OnLockClicked_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function CommonUI.CommonButtonBase.BP_OnInputMethodChanged
struct UCommonButtonBase_BP_OnInputMethodChanged_Params
{
public:
	enum class ECommonInputType                  CurrentInputType;                                  // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function CommonUI.CommonButtonBase.BP_OnHovered
struct UCommonButtonBase_BP_OnHovered_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function CommonUI.CommonButtonBase.BP_OnFocusReceived
struct UCommonButtonBase_BP_OnFocusReceived_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function CommonUI.CommonButtonBase.BP_OnFocusLost
struct UCommonButtonBase_BP_OnFocusLost_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function CommonUI.CommonButtonBase.BP_OnEnabled
struct UCommonButtonBase_BP_OnEnabled_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function CommonUI.CommonButtonBase.BP_OnDoubleClicked
struct UCommonButtonBase_BP_OnDoubleClicked_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function CommonUI.CommonButtonBase.BP_OnDisabled
struct UCommonButtonBase_BP_OnDisabled_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function CommonUI.CommonButtonBase.BP_OnDeselected
struct UCommonButtonBase_BP_OnDeselected_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function CommonUI.CommonButtonBase.BP_OnClicked
struct UCommonButtonBase_BP_OnClicked_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function CommonUI.CommonTextBlock.SetWrapTextWidth
struct UCommonTextBlock_SetWrapTextWidth_Params
{
public:
	int32                                        InWrapTextAt;                                      // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CommonUI.CommonTextBlock.SetTextCase
struct UCommonTextBlock_SetTextCase_Params
{
public:
	bool                                         bUseAllCaps;                                       // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CommonUI.CommonTextBlock.SetStyle
struct UCommonTextBlock_SetStyle_Params
{
public:
	TSubclassOf<class UCommonTextStyle>          InStyle;                                           // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CommonUI.CommonTextBlock.SetScrollingEnabled
struct UCommonTextBlock_SetScrollingEnabled_Params
{
public:
	bool                                         bInIsScrollingEnabled;                             // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function CommonUI.CommonTextBlock.SetMobileFontSizeMultiplier
struct UCommonTextBlock_SetMobileFontSizeMultiplier_Params
{
public:
	float                                        InMobileFontSizeMultiplier;                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CommonUI.CommonTextBlock.SetMargin
struct UCommonTextBlock_SetMargin_Params
{
public:
	struct FMargin                               InMargin;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function CommonUI.CommonTextBlock.SetLineHeightPercentage
struct UCommonTextBlock_SetLineHeightPercentage_Params
{
public:
	float                                        InLineHeightPercentage;                            // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function CommonUI.CommonTextBlock.ResetScrollState
struct UCommonTextBlock_ResetScrollState_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function CommonUI.CommonTextBlock.GetMobileFontSizeMultiplier
struct UCommonTextBlock_GetMobileFontSizeMultiplier_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CommonUI.CommonTextBlock.GetMargin
struct UCommonTextBlock_GetMargin_Params
{
public:
	struct FMargin                               ReturnValue;                                       // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CommonUI.CommonDateTimeTextBlock.SetTimespanValue
struct UCommonDateTimeTextBlock_SetTimespanValue_Params
{
public:
	struct FTimespan                             InTimespan;                                        // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CommonUI.CommonDateTimeTextBlock.SetDateTimeValue
struct UCommonDateTimeTextBlock_SetDateTimeValue_Params
{
public:
	struct FDateTime                             InDateTime;                                        // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowAsCountdown;                                  // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D4[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        InRefreshDelay;                                    // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function CommonUI.CommonDateTimeTextBlock.SetCountDownCompletionText
struct UCommonDateTimeTextBlock_SetCountDownCompletionText_Params
{
public:
	class FText                                  InCompletionText;                                  // 0x0(0x18)(ConstParm, Parm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CommonUI.CommonDateTimeTextBlock.GetDateTime
struct UCommonDateTimeTextBlock_GetDateTime_Params
{
public:
	struct FDateTime                             ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CommonUI.CommonLazyImage.SetMaterialTextureParamName
struct UCommonLazyImage_SetMaterialTextureParamName_Params
{
public:
	class FName                                  TextureParamName;                                  // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function CommonUI.CommonLazyImage.SetBrushFromLazyTexture
struct UCommonLazyImage_SetBrushFromLazyTexture_Params
{
public:
	TSoftObjectPtr<class UTexture2D>             LazyTexture;                                       // 0x0(0x30)(ConstParm, Parm, OutParm, ReferenceParm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMatchSize;                                        // 0x30(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2EF[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function CommonUI.CommonLazyImage.SetBrushFromLazyMaterial
struct UCommonLazyImage_SetBrushFromLazyMaterial_Params
{
public:
	TSoftObjectPtr<class UMaterialInterface>     LazyMaterial;                                      // 0x0(0x30)(ConstParm, Parm, OutParm, ReferenceParm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function CommonUI.CommonLazyImage.SetBrushFromLazyDisplayAsset
struct UCommonLazyImage_SetBrushFromLazyDisplayAsset_Params
{
public:
	TSoftObjectPtr<class UObject>                LazyObject;                                        // 0x0(0x30)(ConstParm, Parm, OutParm, ReferenceParm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMatchTextureSize;                                 // 0x30(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2F6[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function CommonUI.CommonLazyImage.IsLoading
struct UCommonLazyImage_IsLoading_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function CommonUI.CommonLazyWidget.SetLazyContent
struct UCommonLazyWidget_SetLazyContent_Params
{
public:
	TSoftClassPtr<class UUserWidget>             SoftWidget;                                        // 0x0(0x30)(ConstParm, Parm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CommonUI.CommonLazyWidget.IsLoading
struct UCommonLazyWidget_IsLoading_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CommonUI.CommonLazyWidget.GetContent
struct UCommonLazyWidget_GetContent_Params
{
public:
	class UUserWidget*                           ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function CommonUI.CommonListView.SetEntrySpacing
struct UCommonListView_SetEntrySpacing_Params
{
public:
	float                                        InEntrySpacing;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CommonUI.LoadGuardSlot.SetVerticalAlignment
struct ULoadGuardSlot_SetVerticalAlignment_Params
{
public:
	enum class EVerticalAlignment                InVerticalAlignment;                               // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CommonUI.LoadGuardSlot.SetPadding
struct ULoadGuardSlot_SetPadding_Params
{
public:
	struct FMargin                               InPadding;                                         // 0x0(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CommonUI.LoadGuardSlot.SetHorizontalAlignment
struct ULoadGuardSlot_SetHorizontalAlignment_Params
{
public:
	enum class EHorizontalAlignment              InHorizontalAlignment;                             // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function CommonUI.CommonLoadGuard.SetLoadingText
struct UCommonLoadGuard_SetLoadingText_Params
{
public:
	class FText                                  InLoadingText;                                     // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CommonUI.CommonLoadGuard.SetIsLoading
struct UCommonLoadGuard_SetIsLoading_Params
{
public:
	bool                                         bInIsLoading;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// DelegateFunction CommonUI.CommonLoadGuard.OnAssetLoaded__DelegateSignature
struct UCommonLoadGuard_OnAssetLoaded__DelegateSignature_Params
{
public:
	class UObject*                               Object;                                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CommonUI.CommonLoadGuard.IsLoading
struct UCommonLoadGuard_IsLoading_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function CommonUI.CommonLoadGuard.BP_GuardAndLoadAsset
struct UCommonLoadGuard_BP_GuardAndLoadAsset_Params
{
public:
	TSoftObjectPtr<class UObject>                InLazyAsset;                                       // 0x0(0x30)(ConstParm, Parm, OutParm, ReferenceParm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnAssetLoaded;                                     // 0x30(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CommonUI.CommonNumericTextBlock.SetNumericType
struct UCommonNumericTextBlock_SetNumericType_Params
{
public:
	enum class ECommonNumericType                InNumericType;                                     // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function CommonUI.CommonNumericTextBlock.SetCurrentValue
struct UCommonNumericTextBlock_SetCurrentValue_Params
{
public:
	float                                        NewValue;                                          // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// DelegateFunction CommonUI.CommonNumericTextBlock.OnOutro__DelegateSignature
struct UCommonNumericTextBlock_OnOutro__DelegateSignature_Params
{
public:
	class UCommonNumericTextBlock*               NumericTextBlock;                                  // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// DelegateFunction CommonUI.CommonNumericTextBlock.OnInterpolationUpdated__DelegateSignature
struct UCommonNumericTextBlock_OnInterpolationUpdated__DelegateSignature_Params
{
public:
	class UCommonNumericTextBlock*               NumericTextBlock;                                  // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LastValue;                                         // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NewValue;                                          // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// DelegateFunction CommonUI.CommonNumericTextBlock.OnInterpolationStarted__DelegateSignature
struct UCommonNumericTextBlock_OnInterpolationStarted__DelegateSignature_Params
{
public:
	class UCommonNumericTextBlock*               NumericTextBlock;                                  // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// DelegateFunction CommonUI.CommonNumericTextBlock.OnInterpolationEnded__DelegateSignature
struct UCommonNumericTextBlock_OnInterpolationEnded__DelegateSignature_Params
{
public:
	class UCommonNumericTextBlock*               NumericTextBlock;                                  // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         HadCompleted;                                      // 0x8(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_360[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function CommonUI.CommonNumericTextBlock.IsInterpolatingNumericValue
struct UCommonNumericTextBlock_IsInterpolatingNumericValue_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CommonUI.CommonNumericTextBlock.InterpolateToValue
struct UCommonNumericTextBlock_InterpolateToValue_Params
{
public:
	float                                        TargetValue;                                       // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaximumInterpolationDuration;                      // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinimumChangeRate;                                 // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OutroOffset;                                       // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function CommonUI.CommonNumericTextBlock.GetTargetValue
struct UCommonNumericTextBlock_GetTargetValue_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function CommonUI.CommonPoolableWidgetInterface.OnReleaseToPool
struct ICommonPoolableWidgetInterface_OnReleaseToPool_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function CommonUI.CommonPoolableWidgetInterface.OnAcquireFromPool
struct ICommonPoolableWidgetInterface_OnAcquireFromPool_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function CommonUI.CommonRichTextBlock.SetScrollingEnabled
struct UCommonRichTextBlock_SetScrollingEnabled_Params
{
public:
	bool                                         bInIsScrollingEnabled;                             // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function CommonUI.CommonRotator.ShiftTextRight
struct UCommonRotator_ShiftTextRight_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function CommonUI.CommonRotator.ShiftTextLeft
struct UCommonRotator_ShiftTextLeft_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function CommonUI.CommonRotator.SetSelectedItem
struct UCommonRotator_SetSelectedItem_Params
{
public:
	int32                                        InValue;                                           // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CommonUI.CommonRotator.PopulateTextLabels
struct UCommonRotator_PopulateTextLabels_Params
{
public:
	TArray<class FText>                          Labels;                                            // 0x0(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function CommonUI.CommonRotator.GetSelectedText
struct UCommonRotator_GetSelectedText_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function CommonUI.CommonRotator.GetSelectedIndex
struct UCommonRotator_GetSelectedIndex_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function CommonUI.CommonRotator.BP_OnOptionsPopulated
struct UCommonRotator_BP_OnOptionsPopulated_Params
{
public:
	int32                                        Count;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function CommonUI.CommonRotator.BP_OnOptionSelected
struct UCommonRotator_BP_OnOptionSelected_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function CommonUI.CommonTabListWidgetBase.SetTabVisibility
struct UCommonTabListWidgetBase_SetTabVisibility_Params
{
public:
	class FName                                  TabNameID;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESlateVisibility                  NewVisibility;                                     // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3AD[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// Function CommonUI.CommonTabListWidgetBase.SetTabInteractionEnabled
struct UCommonTabListWidgetBase_SetTabInteractionEnabled_Params
{
public:
	class FName                                  TabNameID;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnable;                                           // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B0[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// Function CommonUI.CommonTabListWidgetBase.SetTabEnabled
struct UCommonTabListWidgetBase_SetTabEnabled_Params
{
public:
	class FName                                  TabNameID;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnable;                                           // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B3[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function CommonUI.CommonTabListWidgetBase.SetListeningForInput
struct UCommonTabListWidgetBase_SetListeningForInput_Params
{
public:
	bool                                         bShouldListen;                                     // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CommonUI.CommonTabListWidgetBase.SetLinkedSwitcher
struct UCommonTabListWidgetBase_SetLinkedSwitcher_Params
{
public:
	class UCommonAnimatedSwitcher*               CommonSwitcher;                                    // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function CommonUI.CommonTabListWidgetBase.SelectTabByID
struct UCommonTabListWidgetBase_SelectTabByID_Params
{
public:
	class FName                                  TabNameID;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSuppressClickFeedback;                            // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x9(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C1[0x2];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// Function CommonUI.CommonTabListWidgetBase.RemoveTab
struct UCommonTabListWidgetBase_RemoveTab_Params
{
public:
	class FName                                  TabNameID;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C8[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x0 - 0x0)
// Function CommonUI.CommonTabListWidgetBase.RemoveAllTabs
struct UCommonTabListWidgetBase_RemoveAllTabs_Params
{
public:
};

// 0x20 (0x20 - 0x0)
// Function CommonUI.CommonTabListWidgetBase.RegisterTab
struct UCommonTabListWidgetBase_RegisterTab_Params
{
public:
	class FName                                  TabNameID;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UCommonButtonBase>         ButtonWidgetType;                                  // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                               ContentWidget;                                     // 0x10(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TabIndex;                                          // 0x18(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1C(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D3[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// DelegateFunction CommonUI.CommonTabListWidgetBase.OnTabSelected__DelegateSignature
struct UCommonTabListWidgetBase_OnTabSelected__DelegateSignature_Params
{
public:
	class FName                                  TabId;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// DelegateFunction CommonUI.CommonTabListWidgetBase.OnTabListRebuilt__DelegateSignature
struct UCommonTabListWidgetBase_OnTabListRebuilt__DelegateSignature_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// DelegateFunction CommonUI.CommonTabListWidgetBase.OnTabButtonRemoval__DelegateSignature
struct UCommonTabListWidgetBase_OnTabButtonRemoval__DelegateSignature_Params
{
public:
	class FName                                  TabId;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCommonButtonBase*                     TabButton;                                         // 0x8(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// DelegateFunction CommonUI.CommonTabListWidgetBase.OnTabButtonCreation__DelegateSignature
struct UCommonTabListWidgetBase_OnTabButtonCreation__DelegateSignature_Params
{
public:
	class FName                                  TabId;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCommonButtonBase*                     TabButton;                                         // 0x8(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CommonUI.CommonTabListWidgetBase.HandleTabRemoval
struct UCommonTabListWidgetBase_HandleTabRemoval_Params
{
public:
	class FName                                  TabNameID;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCommonButtonBase*                     TabButton;                                         // 0x8(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CommonUI.CommonTabListWidgetBase.HandleTabCreation
struct UCommonTabListWidgetBase_HandleTabCreation_Params
{
public:
	class FName                                  TabNameID;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCommonButtonBase*                     TabButton;                                         // 0x8(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CommonUI.CommonTabListWidgetBase.HandleTabButtonSelected
struct UCommonTabListWidgetBase_HandleTabButtonSelected_Params
{
public:
	class UCommonButtonBase*                     SelectedTabButton;                                 // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ButtonIndex;                                       // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E7[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function CommonUI.CommonTabListWidgetBase.HandlePreviousTabInputAction
struct UCommonTabListWidgetBase_HandlePreviousTabInputAction_Params
{
public:
	bool                                         bPassThrough;                                      // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function CommonUI.CommonTabListWidgetBase.HandlePreLinkedSwitcherChanged_BP
struct UCommonTabListWidgetBase_HandlePreLinkedSwitcherChanged_BP_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function CommonUI.CommonTabListWidgetBase.HandlePostLinkedSwitcherChanged_BP
struct UCommonTabListWidgetBase_HandlePostLinkedSwitcherChanged_BP_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function CommonUI.CommonTabListWidgetBase.HandleNextTabInputAction
struct UCommonTabListWidgetBase_HandleNextTabInputAction_Params
{
public:
	bool                                         bPassThrough;                                      // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function CommonUI.CommonTabListWidgetBase.GetTabIdAtIndex
struct UCommonTabListWidgetBase_GetTabIdAtIndex_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ReturnValue;                                       // 0x4(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function CommonUI.CommonTabListWidgetBase.GetTabCount
struct UCommonTabListWidgetBase_GetTabCount_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CommonUI.CommonTabListWidgetBase.GetTabButtonBaseByID
struct UCommonTabListWidgetBase_GetTabButtonBaseByID_Params
{
public:
	class FName                                  TabNameID;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCommonButtonBase*                     ReturnValue;                                       // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CommonUI.CommonTabListWidgetBase.GetSelectedTabId
struct UCommonTabListWidgetBase_GetSelectedTabId_Params
{
public:
	class FName                                  ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CommonUI.CommonTabListWidgetBase.GetLinkedSwitcher
struct UCommonTabListWidgetBase_GetLinkedSwitcher_Params
{
public:
	class UCommonAnimatedSwitcher*               ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CommonUI.CommonTabListWidgetBase.GetActiveTab
struct UCommonTabListWidgetBase_GetActiveTab_Params
{
public:
	class FName                                  ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function CommonUI.CommonTabListWidgetBase.DisableTabWithReason
struct UCommonTabListWidgetBase_DisableTabWithReason_Params
{
public:
	class FName                                  TabNameID;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  Reason;                                            // 0x8(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0xD0 (0xD0 - 0x0)
// Function CommonUI.CommonTextStyle.GetStrikeBrush
struct UCommonTextStyle_GetStrikeBrush_Params
{
public:
	struct FSlateBrush                           OutStrikeBrush;                                    // 0x0(0xD0)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CommonUI.CommonTextStyle.GetShadowOffset
struct UCommonTextStyle_GetShadowOffset_Params
{
public:
	struct FVector2D                             OutShadowOffset;                                   // 0x0(0x10)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CommonUI.CommonTextStyle.GetShadowColor
struct UCommonTextStyle_GetShadowColor_Params
{
public:
	struct FLinearColor                          OutColor;                                          // 0x0(0x10)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CommonUI.CommonTextStyle.GetMargin
struct UCommonTextStyle_GetMargin_Params
{
public:
	struct FMargin                               OutMargin;                                         // 0x0(0x10)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function CommonUI.CommonTextStyle.GetLineHeightPercentage
struct UCommonTextStyle_GetLineHeightPercentage_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// Function CommonUI.CommonTextStyle.GetFont
struct UCommonTextStyle_GetFont_Params
{
public:
	struct FSlateFontInfo                        OutFont;                                           // 0x0(0x58)(Parm, OutParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CommonUI.CommonTextStyle.GetColor
struct UCommonTextStyle_GetColor_Params
{
public:
	struct FLinearColor                          OutColor;                                          // 0x0(0x10)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function CommonUI.CommonUILibrary.FindParentWidgetOfType
struct UCommonUILibrary_FindParentWidgetOfType_Params
{
public:
	class UWidget*                               StartingWidget;                                    // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UWidget>                   Type;                                              // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                               ReturnValue;                                       // 0x10(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xF0 (0xF0 - 0x0)
// Function CommonUI.CommonUISubsystemBase.GetInputActionButtonIcon
struct UCommonUISubsystemBase_GetInputActionButtonIcon_Params
{
public:
	struct FDataTableRowHandle                   InputActionRowHandle;                              // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	enum class ECommonInputType                  InputType;                                         // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_445[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  GamepadName;                                       // 0x14(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_446[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           ReturnValue;                                       // 0x20(0xD0)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0xE0 (0xE0 - 0x0)
// Function CommonUI.CommonUISubsystemBase.GetEnhancedInputActionButtonIcon
struct UCommonUISubsystemBase_GetEnhancedInputActionButtonIcon_Params
{
public:
	class UInputAction*                          InputAction;                                       // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULocalPlayer*                          LocalPlayer;                                       // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateBrush                           ReturnValue;                                       // 0x10(0xD0)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function CommonUI.CommonVisibilitySwitcher.SetActiveWidgetIndex
struct UCommonVisibilitySwitcher_SetActiveWidgetIndex_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CommonUI.CommonVisibilitySwitcher.SetActiveWidget
struct UCommonVisibilitySwitcher_SetActiveWidget_Params
{
public:
	class UWidget*                               Widget;                                            // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CommonUI.CommonVisibilitySwitcher.IncrementActiveWidgetIndex
struct UCommonVisibilitySwitcher_IncrementActiveWidgetIndex_Params
{
public:
	bool                                         bAllowWrapping;                                    // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function CommonUI.CommonVisibilitySwitcher.GetActiveWidgetIndex
struct UCommonVisibilitySwitcher_GetActiveWidgetIndex_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CommonUI.CommonVisibilitySwitcher.GetActiveWidget
struct UCommonVisibilitySwitcher_GetActiveWidget_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CommonUI.CommonVisibilitySwitcher.DecrementActiveWidgetIndex
struct UCommonVisibilitySwitcher_DecrementActiveWidgetIndex_Params
{
public:
	bool                                         bAllowWrapping;                                    // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function CommonUI.CommonVisibilitySwitcher.DeactivateVisibleSlot
struct UCommonVisibilitySwitcher_DeactivateVisibleSlot_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function CommonUI.CommonVisibilitySwitcher.ActivateVisibleSlot
struct UCommonVisibilitySwitcher_ActivateVisibleSlot_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function CommonUI.UCommonVisibilityWidgetBase.GetRegisteredPlatforms
struct UUCommonVisibilityWidgetBase_GetRegisteredPlatforms_Params
{
public:
	TArray<class FName>                          ReturnValue;                                       // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function CommonUI.CommonWidgetCarousel.SetActiveWidgetIndex
struct UCommonWidgetCarousel_SetActiveWidgetIndex_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CommonUI.CommonWidgetCarousel.SetActiveWidget
struct UCommonWidgetCarousel_SetActiveWidget_Params
{
public:
	class UWidget*                               Widget;                                            // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function CommonUI.CommonWidgetCarousel.PreviousPage
struct UCommonWidgetCarousel_PreviousPage_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function CommonUI.CommonWidgetCarousel.NextPage
struct UCommonWidgetCarousel_NextPage_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function CommonUI.CommonWidgetCarousel.GetWidgetAtIndex
struct UCommonWidgetCarousel_GetWidgetAtIndex_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_49B[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               ReturnValue;                                       // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function CommonUI.CommonWidgetCarousel.GetActiveWidgetIndex
struct UCommonWidgetCarousel_GetActiveWidgetIndex_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function CommonUI.CommonWidgetCarousel.EndAutoScrolling
struct UCommonWidgetCarousel_EndAutoScrolling_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function CommonUI.CommonWidgetCarousel.BeginAutoScrolling
struct UCommonWidgetCarousel_BeginAutoScrolling_Params
{
public:
	float                                        ScrollInterval;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CommonUI.CommonWidgetCarouselNavBar.SetLinkedCarousel
struct UCommonWidgetCarouselNavBar_SetLinkedCarousel_Params
{
public:
	class UCommonWidgetCarousel*                 CommonCarousel;                                    // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CommonUI.CommonWidgetCarouselNavBar.HandlePageChanged
struct UCommonWidgetCarouselNavBar_HandlePageChanged_Params
{
public:
	class UCommonWidgetCarousel*                 CommonCarousel;                                    // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PageIndex;                                         // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4AD[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function CommonUI.CommonWidgetCarouselNavBar.HandleButtonClicked
struct UCommonWidgetCarouselNavBar_HandleButtonClicked_Params
{
public:
	class UCommonButtonBase*                     AssociatedButton;                                  // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ButtonIndex;                                       // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4B6[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function CommonUI.CommonWidgetGroupBase.RemoveWidget
struct UCommonWidgetGroupBase_RemoveWidget_Params
{
public:
	class UWidget*                               InWidget;                                          // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function CommonUI.CommonWidgetGroupBase.RemoveAll
struct UCommonWidgetGroupBase_RemoveAll_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function CommonUI.CommonWidgetGroupBase.AddWidget
struct UCommonWidgetGroupBase_AddWidget_Params
{
public:
	class UWidget*                               InWidget;                                          // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CommonUI.CommonButtonGroupBase.SetSelectionRequired
struct UCommonButtonGroupBase_SetSelectionRequired_Params
{
public:
	bool                                         bRequireSelection;                                 // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CommonUI.CommonButtonGroupBase.SelectPreviousButton
struct UCommonButtonGroupBase_SelectPreviousButton_Params
{
public:
	bool                                         bAllowWrap;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CommonUI.CommonButtonGroupBase.SelectNextButton
struct UCommonButtonGroupBase_SelectNextButton_Params
{
public:
	bool                                         bAllowWrap;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CommonUI.CommonButtonGroupBase.SelectButtonAtIndex
struct UCommonButtonGroupBase_SelectButtonAtIndex_Params
{
public:
	int32                                        ButtonIndex;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowSound;                                       // 0x4(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4C8[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function CommonUI.CommonButtonGroupBase.OnSelectionStateChangedBase
struct UCommonButtonGroupBase_OnSelectionStateChangedBase_Params
{
public:
	class UCommonButtonBase*                     BaseButton;                                        // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsSelected;                                       // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4CE[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function CommonUI.CommonButtonGroupBase.OnHandleButtonBaseDoubleClicked
struct UCommonButtonGroupBase_OnHandleButtonBaseDoubleClicked_Params
{
public:
	class UCommonButtonBase*                     BaseButton;                                        // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CommonUI.CommonButtonGroupBase.OnHandleButtonBaseClicked
struct UCommonButtonGroupBase_OnHandleButtonBaseClicked_Params
{
public:
	class UCommonButtonBase*                     BaseButton;                                        // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CommonUI.CommonButtonGroupBase.OnButtonBaseUnhovered
struct UCommonButtonGroupBase_OnButtonBaseUnhovered_Params
{
public:
	class UCommonButtonBase*                     BaseButton;                                        // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CommonUI.CommonButtonGroupBase.OnButtonBaseHovered
struct UCommonButtonGroupBase_OnButtonBaseHovered_Params
{
public:
	class UCommonButtonBase*                     BaseButton;                                        // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CommonUI.CommonButtonGroupBase.HasAnyButtons
struct UCommonButtonGroupBase_HasAnyButtons_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function CommonUI.CommonButtonGroupBase.GetSelectedButtonIndex
struct UCommonButtonGroupBase_GetSelectedButtonIndex_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CommonUI.CommonButtonGroupBase.GetSelectedButtonBase
struct UCommonButtonGroupBase_GetSelectedButtonBase_Params
{
public:
	class UCommonButtonBase*                     ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function CommonUI.CommonButtonGroupBase.GetHoveredButtonIndex
struct UCommonButtonGroupBase_GetHoveredButtonIndex_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function CommonUI.CommonButtonGroupBase.GetButtonCount
struct UCommonButtonGroupBase_GetButtonCount_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CommonUI.CommonButtonGroupBase.GetButtonBaseAtIndex
struct UCommonButtonGroupBase_GetButtonBaseAtIndex_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4E3[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonButtonBase*                     ReturnValue;                                       // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CommonUI.CommonButtonGroupBase.FindButtonIndex
struct UCommonButtonGroupBase_FindButtonIndex_Params
{
public:
	class UCommonButtonBase*                     ButtonToFind;                                      // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4E7[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x0 - 0x0)
// Function CommonUI.CommonButtonGroupBase.DeselectAll
struct UCommonButtonGroupBase_DeselectAll_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function CommonUI.CommonBoundActionBar.SetDisplayOwningPlayerActionsOnly
struct UCommonBoundActionBar_SetDisplayOwningPlayerActionsOnly_Params
{
public:
	bool                                         bShouldOnlyDisplayOwningPlayerActions;             // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function CommonUI.CommonBoundActionButton.OnUpdateInputAction
struct UCommonBoundActionButton_OnUpdateInputAction_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function CommonUI.CommonActivatableWidgetContainerBase.SetTransitionDuration
struct UCommonActivatableWidgetContainerBase_SetTransitionDuration_Params
{
public:
	float                                        Duration;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CommonUI.CommonActivatableWidgetContainerBase.RemoveWidget
struct UCommonActivatableWidgetContainerBase_RemoveWidget_Params
{
public:
	class UCommonActivatableWidget*              WidgetToRemove;                                    // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function CommonUI.CommonActivatableWidgetContainerBase.GetTransitionDuration
struct UCommonActivatableWidgetContainerBase_GetTransitionDuration_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CommonUI.CommonActivatableWidgetContainerBase.GetActiveWidget
struct UCommonActivatableWidgetContainerBase_GetActiveWidget_Params
{
public:
	class UCommonActivatableWidget*              ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function CommonUI.CommonActivatableWidgetContainerBase.ClearWidgets
struct UCommonActivatableWidgetContainerBase_ClearWidgets_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function CommonUI.CommonActivatableWidgetContainerBase.BP_AddWidget
struct UCommonActivatableWidgetContainerBase_BP_AddWidget_Params
{
public:
	TSubclassOf<class UCommonActivatableWidget>  ActivatableWidgetClass;                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCommonActivatableWidget*              ReturnValue;                                       // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


