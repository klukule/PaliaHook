#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function UMG.Widget.SetVisibility
// (Native, Public, BlueprintCallable)
// Parameters:
// enum class ESlateVisibility        InVisibility                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWidget::SetVisibility(enum class ESlateVisibility InVisibility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "SetVisibility");

	Params::UWidget_SetVisibility_Params Parms{};

	Parms.InVisibility = InVisibility;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.Widget.SetUserFocus
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class APlayerController*           PlayerController                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWidget::SetUserFocus(class APlayerController* PlayerController)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "SetUserFocus");

	Params::UWidget_SetUserFocus_Params Parms{};

	Parms.PlayerController = PlayerController;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.Widget.SetToolTipText
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FText                        InToolTipText                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UWidget::SetToolTipText(class FText& InToolTipText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "SetToolTipText");

	Params::UWidget_SetToolTipText_Params Parms{};

	Parms.InToolTipText = InToolTipText;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.Widget.SetToolTip
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                     Widget                                                           (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWidget::SetToolTip(class UWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "SetToolTip");

	Params::UWidget_SetToolTip_Params Parms{};

	Parms.Widget = Widget;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.Widget.SetRenderTranslation
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D                   Translation                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWidget::SetRenderTranslation(const struct FVector2D& Translation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "SetRenderTranslation");

	Params::UWidget_SetRenderTranslation_Params Parms{};

	Parms.Translation = Translation;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.Widget.SetRenderTransformPivot
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D                   Pivot                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWidget::SetRenderTransformPivot(const struct FVector2D& Pivot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "SetRenderTransformPivot");

	Params::UWidget_SetRenderTransformPivot_Params Parms{};

	Parms.Pivot = Pivot;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.Widget.SetRenderTransformAngle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Angle                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWidget::SetRenderTransformAngle(float Angle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "SetRenderTransformAngle");

	Params::UWidget_SetRenderTransformAngle_Params Parms{};

	Parms.Angle = Angle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.Widget.SetRenderTransform
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FWidgetTransform            InTransform                                                      (Parm, NoDestructor, NativeAccessSpecifierPublic)

void UWidget::SetRenderTransform(const struct FWidgetTransform& InTransform)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "SetRenderTransform");

	Params::UWidget_SetRenderTransform_Params Parms{};

	Parms.InTransform = InTransform;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.Widget.SetRenderShear
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D                   Shear                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWidget::SetRenderShear(const struct FVector2D& Shear)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "SetRenderShear");

	Params::UWidget_SetRenderShear_Params Parms{};

	Parms.Shear = Shear;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.Widget.SetRenderScale
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D                   Scale                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWidget::SetRenderScale(const struct FVector2D& Scale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "SetRenderScale");

	Params::UWidget_SetRenderScale_Params Parms{};

	Parms.Scale = Scale;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.Widget.SetRenderOpacity
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InOpacity                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWidget::SetRenderOpacity(float InOpacity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "SetRenderOpacity");

	Params::UWidget_SetRenderOpacity_Params Parms{};

	Parms.InOpacity = InOpacity;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.Widget.SetNavigationRuleExplicit
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EUINavigation           Direction                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWidget*                     InWidget                                                         (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWidget::SetNavigationRuleExplicit(enum class EUINavigation Direction, class UWidget* InWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "SetNavigationRuleExplicit");

	Params::UWidget_SetNavigationRuleExplicit_Params Parms{};

	Parms.Direction = Direction;
	Parms.InWidget = InWidget;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.Widget.SetNavigationRuleCustomBoundary
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EUINavigation           Direction                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 InCustomDelegate                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWidget::SetNavigationRuleCustomBoundary(enum class EUINavigation Direction, FDelegateProperty_ InCustomDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "SetNavigationRuleCustomBoundary");

	Params::UWidget_SetNavigationRuleCustomBoundary_Params Parms{};

	Parms.Direction = Direction;
	Parms.InCustomDelegate = InCustomDelegate;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.Widget.SetNavigationRuleCustom
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EUINavigation           Direction                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 InCustomDelegate                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWidget::SetNavigationRuleCustom(enum class EUINavigation Direction, FDelegateProperty_ InCustomDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "SetNavigationRuleCustom");

	Params::UWidget_SetNavigationRuleCustom_Params Parms{};

	Parms.Direction = Direction;
	Parms.InCustomDelegate = InCustomDelegate;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.Widget.SetNavigationRuleBase
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EUINavigation           Direction                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EUINavigationRule       Rule                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWidget::SetNavigationRuleBase(enum class EUINavigation Direction, enum class EUINavigationRule Rule)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "SetNavigationRuleBase");

	Params::UWidget_SetNavigationRuleBase_Params Parms{};

	Parms.Direction = Direction;
	Parms.Rule = Rule;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.Widget.SetNavigationRule
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EUINavigation           Direction                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EUINavigationRule       Rule                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        WidgetToFocus                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWidget::SetNavigationRule(enum class EUINavigation Direction, enum class EUINavigationRule Rule, class FName WidgetToFocus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "SetNavigationRule");

	Params::UWidget_SetNavigationRule_Params Parms{};

	Parms.Direction = Direction;
	Parms.Rule = Rule;
	Parms.WidgetToFocus = WidgetToFocus;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.Widget.SetKeyboardFocus
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UWidget::SetKeyboardFocus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "SetKeyboardFocus");

	Params::UWidget_SetKeyboardFocus_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.Widget.SetIsEnabled
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInIsEnabled                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWidget::SetIsEnabled(bool bInIsEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "SetIsEnabled");

	Params::UWidget_SetIsEnabled_Params Parms{};

	Parms.bInIsEnabled = bInIsEnabled;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.Widget.SetFocus
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UWidget::SetFocus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "SetFocus");

	Params::UWidget_SetFocus_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.Widget.SetCursor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EMouseCursor            InCursor                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWidget::SetCursor(enum class EMouseCursor InCursor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "SetCursor");

	Params::UWidget_SetCursor_Params Parms{};

	Parms.InCursor = InCursor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.Widget.SetClipping
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EWidgetClipping         InClipping                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWidget::SetClipping(enum class EWidgetClipping InClipping)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "SetClipping");

	Params::UWidget_SetClipping_Params Parms{};

	Parms.InClipping = InClipping;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.Widget.SetAllNavigationRules
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EUINavigationRule       Rule                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        WidgetToFocus                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWidget::SetAllNavigationRules(enum class EUINavigationRule Rule, class FName WidgetToFocus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "SetAllNavigationRules");

	Params::UWidget_SetAllNavigationRules_Params Parms{};

	Parms.Rule = Rule;
	Parms.WidgetToFocus = WidgetToFocus;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.Widget.ResetCursor
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UWidget::ResetCursor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "ResetCursor");

	Params::UWidget_ResetCursor_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.Widget.RemoveFromParent
// (Native, Public, BlueprintCallable)
// Parameters:

void UWidget::RemoveFromParent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "RemoveFromParent");

	Params::UWidget_RemoveFromParent_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// DelegateFunction UMG.Widget.OnReply__DelegateSignature
// (Public, Delegate)
// Parameters:
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FEventReply UWidget::OnReply__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "OnReply__DelegateSignature");

	Params::UWidget_OnReply__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// DelegateFunction UMG.Widget.OnPointerEvent__DelegateSignature
// (Public, Delegate, HasOutParams)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FEventReply UWidget::OnPointerEvent__DelegateSignature(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "OnPointerEvent__DelegateSignature");

	Params::UWidget_OnPointerEvent__DelegateSignature_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG.Widget.K2_RemoveFieldValueChangedDelegate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FFieldNotificationId        FieldId                                                          (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Delegate                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWidget::K2_RemoveFieldValueChangedDelegate(const struct FFieldNotificationId& FieldId, FDelegateProperty_ Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "K2_RemoveFieldValueChangedDelegate");

	Params::UWidget_K2_RemoveFieldValueChangedDelegate_Params Parms{};

	Parms.FieldId = FieldId;
	Parms.Delegate = Delegate;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.Widget.K2_BroadcastFieldValueChanged
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// struct FFieldNotificationId        FieldId                                                          (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWidget::K2_BroadcastFieldValueChanged(const struct FFieldNotificationId& FieldId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "K2_BroadcastFieldValueChanged");

	Params::UWidget_K2_BroadcastFieldValueChanged_Params Parms{};

	Parms.FieldId = FieldId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.Widget.K2_AddFieldValueChangedDelegate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FFieldNotificationId        FieldId                                                          (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Delegate                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWidget::K2_AddFieldValueChangedDelegate(const struct FFieldNotificationId& FieldId, FDelegateProperty_ Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "K2_AddFieldValueChangedDelegate");

	Params::UWidget_K2_AddFieldValueChangedDelegate_Params Parms{};

	Parms.FieldId = FieldId;
	Parms.Delegate = Delegate;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.Widget.IsVisible
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UWidget::IsVisible()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "IsVisible");

	Params::UWidget_IsVisible_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.Widget.IsRendered
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UWidget::IsRendered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "IsRendered");

	Params::UWidget_IsRendered_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.Widget.IsInViewport
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UWidget::IsInViewport()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "IsInViewport");

	Params::UWidget_IsInViewport_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.Widget.IsHovered
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UWidget::IsHovered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "IsHovered");

	Params::UWidget_IsHovered_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.Widget.InvalidateLayoutAndVolatility
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UWidget::InvalidateLayoutAndVolatility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "InvalidateLayoutAndVolatility");

	Params::UWidget_InvalidateLayoutAndVolatility_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.Widget.HasUserFocusedDescendants
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class APlayerController*           PlayerController                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UWidget::HasUserFocusedDescendants(class APlayerController* PlayerController)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "HasUserFocusedDescendants");

	Params::UWidget_HasUserFocusedDescendants_Params Parms{};

	Parms.PlayerController = PlayerController;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.Widget.HasUserFocus
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class APlayerController*           PlayerController                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UWidget::HasUserFocus(class APlayerController* PlayerController)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "HasUserFocus");

	Params::UWidget_HasUserFocus_Params Parms{};

	Parms.PlayerController = PlayerController;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.Widget.HasMouseCaptureByUser
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              UserIndex                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              PointerIndex                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UWidget::HasMouseCaptureByUser(int32 UserIndex, int32 PointerIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "HasMouseCaptureByUser");

	Params::UWidget_HasMouseCaptureByUser_Params Parms{};

	Parms.UserIndex = UserIndex;
	Parms.PointerIndex = PointerIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.Widget.HasMouseCapture
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UWidget::HasMouseCapture()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "HasMouseCapture");

	Params::UWidget_HasMouseCapture_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.Widget.HasKeyboardFocus
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UWidget::HasKeyboardFocus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "HasKeyboardFocus");

	Params::UWidget_HasKeyboardFocus_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.Widget.HasFocusedDescendants
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UWidget::HasFocusedDescendants()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "HasFocusedDescendants");

	Params::UWidget_HasFocusedDescendants_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.Widget.HasAnyUserFocus
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UWidget::HasAnyUserFocus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "HasAnyUserFocus");

	Params::UWidget_HasAnyUserFocus_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// DelegateFunction UMG.Widget.GetWidget__DelegateSignature
// (Public, Delegate)
// Parameters:
// class UWidget*                     ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UWidget* UWidget::GetWidget__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "GetWidget__DelegateSignature");

	Params::UWidget_GetWidget__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG.Widget.GetVisibility
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ESlateVisibility UWidget::GetVisibility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "GetVisibility");

	Params::UWidget_GetVisibility_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.Widget.GetTickSpaceGeometry
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGeometry                   ReturnValue                                                      (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FGeometry UWidget::GetTickSpaceGeometry()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "GetTickSpaceGeometry");

	Params::UWidget_GetTickSpaceGeometry_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// DelegateFunction UMG.Widget.GetText__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText UWidget::GetText__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "GetText__DelegateSignature");

	Params::UWidget_GetText__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// DelegateFunction UMG.Widget.GetSlateVisibility__DelegateSignature
// (Public, Delegate)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ESlateVisibility UWidget::GetSlateVisibility__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "GetSlateVisibility__DelegateSignature");

	Params::UWidget_GetSlateVisibility__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// DelegateFunction UMG.Widget.GetSlateColor__DelegateSignature
// (Public, Delegate)
// Parameters:
// struct FSlateColor                 ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FSlateColor UWidget::GetSlateColor__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "GetSlateColor__DelegateSignature");

	Params::UWidget_GetSlateColor__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// DelegateFunction UMG.Widget.GetSlateBrush__DelegateSignature
// (Public, Delegate)
// Parameters:
// struct FSlateBrush                 ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FSlateBrush UWidget::GetSlateBrush__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "GetSlateBrush__DelegateSignature");

	Params::UWidget_GetSlateBrush__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG.Widget.GetRenderTransformAngle
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UWidget::GetRenderTransformAngle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "GetRenderTransformAngle");

	Params::UWidget_GetRenderTransformAngle_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.Widget.GetRenderOpacity
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UWidget::GetRenderOpacity()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "GetRenderOpacity");

	Params::UWidget_GetRenderOpacity_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.Widget.GetParent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UPanelWidget*                ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UPanelWidget* UWidget::GetParent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "GetParent");

	Params::UWidget_GetParent_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.Widget.GetPaintSpaceGeometry
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGeometry                   ReturnValue                                                      (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FGeometry UWidget::GetPaintSpaceGeometry()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "GetPaintSpaceGeometry");

	Params::UWidget_GetPaintSpaceGeometry_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.Widget.GetOwningPlayer
// (BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class APlayerController*           ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class APlayerController* UWidget::GetOwningPlayer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "GetOwningPlayer");

	Params::UWidget_GetOwningPlayer_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.Widget.GetOwningLocalPlayer
// (BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ULocalPlayer*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULocalPlayer* UWidget::GetOwningLocalPlayer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "GetOwningLocalPlayer");

	Params::UWidget_GetOwningLocalPlayer_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// DelegateFunction UMG.Widget.GetMouseCursor__DelegateSignature
// (Public, Delegate)
// Parameters:
// enum class EMouseCursor            ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EMouseCursor UWidget::GetMouseCursor__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "GetMouseCursor__DelegateSignature");

	Params::UWidget_GetMouseCursor__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// DelegateFunction UMG.Widget.GetLinearColor__DelegateSignature
// (Public, Delegate, HasDefaults)
// Parameters:
// struct FLinearColor                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FLinearColor UWidget::GetLinearColor__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "GetLinearColor__DelegateSignature");

	Params::UWidget_GetLinearColor__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG.Widget.GetIsEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UWidget::GetIsEnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "GetIsEnabled");

	Params::UWidget_GetIsEnabled_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// DelegateFunction UMG.Widget.GetInt32__DelegateSignature
// (Public, Delegate)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UWidget::GetInt32__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "GetInt32__DelegateSignature");

	Params::UWidget_GetInt32__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG.Widget.GetGameInstance
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UGameInstance*               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UGameInstance* UWidget::GetGameInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "GetGameInstance");

	Params::UWidget_GetGameInstance_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// DelegateFunction UMG.Widget.GetFloat__DelegateSignature
// (Public, Delegate)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UWidget::GetFloat__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "GetFloat__DelegateSignature");

	Params::UWidget_GetFloat__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG.Widget.GetDesiredSize
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector2D                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector2D UWidget::GetDesiredSize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "GetDesiredSize");

	Params::UWidget_GetDesiredSize_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.Widget.GetClipping
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EWidgetClipping         ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EWidgetClipping UWidget::GetClipping()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "GetClipping");

	Params::UWidget_GetClipping_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// DelegateFunction UMG.Widget.GetCheckBoxState__DelegateSignature
// (Public, Delegate)
// Parameters:
// enum class ECheckBoxState          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ECheckBoxState UWidget::GetCheckBoxState__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "GetCheckBoxState__DelegateSignature");

	Params::UWidget_GetCheckBoxState__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG.Widget.GetCachedGeometry
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGeometry                   ReturnValue                                                      (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FGeometry UWidget::GetCachedGeometry()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "GetCachedGeometry");

	Params::UWidget_GetCachedGeometry_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// DelegateFunction UMG.Widget.GetBool__DelegateSignature
// (Public, Delegate)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UWidget::GetBool__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "GetBool__DelegateSignature");

	Params::UWidget_GetBool__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG.Widget.GetAccessibleText
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText UWidget::GetAccessibleText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "GetAccessibleText");

	Params::UWidget_GetAccessibleText_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.Widget.GetAccessibleSummaryText
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText UWidget::GetAccessibleSummaryText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "GetAccessibleSummaryText");

	Params::UWidget_GetAccessibleSummaryText_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// DelegateFunction UMG.Widget.GenerateWidgetForString__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FString                      Item                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWidget*                     ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UWidget* UWidget::GenerateWidgetForString__DelegateSignature(const class FString& Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "GenerateWidgetForString__DelegateSignature");

	Params::UWidget_GenerateWidgetForString__DelegateSignature_Params Parms{};

	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// DelegateFunction UMG.Widget.GenerateWidgetForObject__DelegateSignature
// (Public, Delegate)
// Parameters:
// class UObject*                     Item                                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWidget*                     ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UWidget* UWidget::GenerateWidgetForObject__DelegateSignature(class UObject* Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "GenerateWidgetForObject__DelegateSignature");

	Params::UWidget_GenerateWidgetForObject__DelegateSignature_Params Parms{};

	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG.Widget.ForceVolatile
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bForce                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWidget::ForceVolatile(bool bForce)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "ForceVolatile");

	Params::UWidget_ForceVolatile_Params Parms{};

	Parms.bForce = bForce;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.Widget.ForceLayoutPrepass
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UWidget::ForceLayoutPrepass()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Widget", "ForceLayoutPrepass");

	Params::UWidget_ForceLayoutPrepass_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.PanelWidget.RemoveChildAt
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UPanelWidget::RemoveChildAt(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PanelWidget", "RemoveChildAt");

	Params::UPanelWidget_RemoveChildAt_Params Parms{};

	Parms.Index = Index;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.PanelWidget.RemoveChild
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                     Content                                                          (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UPanelWidget::RemoveChild(class UWidget* Content)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PanelWidget", "RemoveChild");

	Params::UPanelWidget_RemoveChild_Params Parms{};

	Parms.Content = Content;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.PanelWidget.HasChild
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UWidget*                     Content                                                          (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UPanelWidget::HasChild(class UWidget* Content)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PanelWidget", "HasChild");

	Params::UPanelWidget_HasChild_Params Parms{};

	Parms.Content = Content;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.PanelWidget.HasAnyChildren
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UPanelWidget::HasAnyChildren()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PanelWidget", "HasAnyChildren");

	Params::UPanelWidget_HasAnyChildren_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.PanelWidget.GetChildrenCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UPanelWidget::GetChildrenCount()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PanelWidget", "GetChildrenCount");

	Params::UPanelWidget_GetChildrenCount_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.PanelWidget.GetChildIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UWidget*                     Content                                                          (ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UPanelWidget::GetChildIndex(class UWidget* Content)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PanelWidget", "GetChildIndex");

	Params::UPanelWidget_GetChildIndex_Params Parms{};

	Parms.Content = Content;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.PanelWidget.GetChildAt
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWidget*                     ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UWidget* UPanelWidget::GetChildAt(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PanelWidget", "GetChildAt");

	Params::UPanelWidget_GetChildAt_Params Parms{};

	Parms.Index = Index;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.PanelWidget.GetAllChildren
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UWidget*>             ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

TArray<class UWidget*> UPanelWidget::GetAllChildren()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PanelWidget", "GetAllChildren");

	Params::UPanelWidget_GetAllChildren_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.PanelWidget.ClearChildren
// (Native, Public, BlueprintCallable)
// Parameters:

void UPanelWidget::ClearChildren()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PanelWidget", "ClearChildren");

	Params::UPanelWidget_ClearChildren_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.PanelWidget.AddChild
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                     Content                                                          (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPanelSlot*                  ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UPanelSlot* UPanelWidget::AddChild(class UWidget* Content)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PanelWidget", "AddChild");

	Params::UPanelWidget_AddChild_Params Parms{};

	Parms.Content = Content;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.ContentWidget.SetContent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                     Content                                                          (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPanelSlot*                  ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UPanelSlot* UContentWidget::SetContent(class UWidget* Content)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ContentWidget", "SetContent");

	Params::UContentWidget_SetContent_Params Parms{};

	Parms.Content = Content;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.ContentWidget.GetContentSlot
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UPanelSlot*                  ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UPanelSlot* UContentWidget::GetContentSlot()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ContentWidget", "GetContentSlot");

	Params::UContentWidget_GetContentSlot_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.ContentWidget.GetContent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UWidget*                     ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UWidget* UContentWidget::GetContent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ContentWidget", "GetContent");

	Params::UContentWidget_GetContent_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.UserWidget.UnregisterInputComponent
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UUserWidget::UnregisterInputComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "UnregisterInputComponent");

	Params::UUserWidget_UnregisterInputComponent_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.UserWidget.UnbindFromAnimationStarted
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidgetAnimation*            Animation                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Delegate                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUserWidget::UnbindFromAnimationStarted(class UWidgetAnimation* Animation, FDelegateProperty_ Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "UnbindFromAnimationStarted");

	Params::UUserWidget_UnbindFromAnimationStarted_Params Parms{};

	Parms.Animation = Animation;
	Parms.Delegate = Delegate;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.UserWidget.UnbindFromAnimationFinished
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidgetAnimation*            Animation                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Delegate                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUserWidget::UnbindFromAnimationFinished(class UWidgetAnimation* Animation, FDelegateProperty_ Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "UnbindFromAnimationFinished");

	Params::UUserWidget_UnbindFromAnimationFinished_Params Parms{};

	Parms.Animation = Animation;
	Parms.Delegate = Delegate;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.UserWidget.UnbindAllFromAnimationStarted
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidgetAnimation*            Animation                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUserWidget::UnbindAllFromAnimationStarted(class UWidgetAnimation* Animation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "UnbindAllFromAnimationStarted");

	Params::UUserWidget_UnbindAllFromAnimationStarted_Params Parms{};

	Parms.Animation = Animation;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.UserWidget.UnbindAllFromAnimationFinished
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidgetAnimation*            Animation                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUserWidget::UnbindAllFromAnimationFinished(class UWidgetAnimation* Animation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "UnbindAllFromAnimationFinished");

	Params::UUserWidget_UnbindAllFromAnimationFinished_Params Parms{};

	Parms.Animation = Animation;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.UserWidget.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// float                              InDeltaTime                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUserWidget::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "Tick");

	Params::UUserWidget_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG.UserWidget.StopListeningForInputAction
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class FName                        ActionName                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EInputEvent             EventType                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUserWidget::StopListeningForInputAction(class FName ActionName, enum class EInputEvent EventType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "StopListeningForInputAction");

	Params::UUserWidget_StopListeningForInputAction_Params Parms{};

	Parms.ActionName = ActionName;
	Parms.EventType = EventType;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.UserWidget.StopListeningForAllInputActions
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UUserWidget::StopListeningForAllInputActions()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "StopListeningForAllInputActions");

	Params::UUserWidget_StopListeningForAllInputActions_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.UserWidget.StopAnimationsAndLatentActions
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UUserWidget::StopAnimationsAndLatentActions()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "StopAnimationsAndLatentActions");

	Params::UUserWidget_StopAnimationsAndLatentActions_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.UserWidget.StopAnimation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidgetAnimation*            InAnimation                                                      (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUserWidget::StopAnimation(class UWidgetAnimation* InAnimation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "StopAnimation");

	Params::UUserWidget_StopAnimation_Params Parms{};

	Parms.InAnimation = InAnimation;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.UserWidget.StopAllAnimations
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UUserWidget::StopAllAnimations()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "StopAllAnimations");

	Params::UUserWidget_StopAllAnimations_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.UserWidget.SetPositionInViewport
// (Final, BlueprintCosmetic, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D                   Position                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bRemoveDPIScale                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUserWidget::SetPositionInViewport(const struct FVector2D& Position, bool bRemoveDPIScale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "SetPositionInViewport");

	Params::UUserWidget_SetPositionInViewport_Params Parms{};

	Parms.Position = Position;
	Parms.bRemoveDPIScale = bRemoveDPIScale;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.UserWidget.SetPlaybackSpeed
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class UWidgetAnimation*            InAnimation                                                      (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              PlaybackSpeed                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUserWidget::SetPlaybackSpeed(class UWidgetAnimation* InAnimation, float PlaybackSpeed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "SetPlaybackSpeed");

	Params::UUserWidget_SetPlaybackSpeed_Params Parms{};

	Parms.InAnimation = InAnimation;
	Parms.PlaybackSpeed = PlaybackSpeed;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.UserWidget.SetPadding
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// struct FMargin                     InPadding                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void UUserWidget::SetPadding(const struct FMargin& InPadding)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "SetPadding");

	Params::UUserWidget_SetPadding_Params Parms{};

	Parms.InPadding = InPadding;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.UserWidget.SetOwningPlayer
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class APlayerController*           LocalPlayerController                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUserWidget::SetOwningPlayer(class APlayerController* LocalPlayerController)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "SetOwningPlayer");

	Params::UUserWidget_SetOwningPlayer_Params Parms{};

	Parms.LocalPlayerController = LocalPlayerController;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.UserWidget.SetNumLoopsToPlay
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class UWidgetAnimation*            InAnimation                                                      (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              NumLoopsToPlay                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUserWidget::SetNumLoopsToPlay(class UWidgetAnimation* InAnimation, int32 NumLoopsToPlay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "SetNumLoopsToPlay");

	Params::UUserWidget_SetNumLoopsToPlay_Params Parms{};

	Parms.InAnimation = InAnimation;
	Parms.NumLoopsToPlay = NumLoopsToPlay;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.UserWidget.SetInputActionPriority
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// int32                              NewPriority                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUserWidget::SetInputActionPriority(int32 NewPriority)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "SetInputActionPriority");

	Params::UUserWidget_SetInputActionPriority_Params Parms{};

	Parms.NewPriority = NewPriority;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.UserWidget.SetInputActionBlocking
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// bool                               bShouldBlock                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUserWidget::SetInputActionBlocking(bool bShouldBlock)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "SetInputActionBlocking");

	Params::UUserWidget_SetInputActionBlocking_Params Parms{};

	Parms.bShouldBlock = bShouldBlock;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.UserWidget.SetForegroundColor
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// struct FSlateColor                 InForegroundColor                                                (Parm, NativeAccessSpecifierPublic)

void UUserWidget::SetForegroundColor(const struct FSlateColor& InForegroundColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "SetForegroundColor");

	Params::UUserWidget_SetForegroundColor_Params Parms{};

	Parms.InForegroundColor = InForegroundColor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.UserWidget.SetDesiredSizeInViewport
// (Final, BlueprintCosmetic, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D                   Size                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUserWidget::SetDesiredSizeInViewport(const struct FVector2D& Size)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "SetDesiredSizeInViewport");

	Params::UUserWidget_SetDesiredSizeInViewport_Params Parms{};

	Parms.Size = Size;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.UserWidget.SetColorAndOpacity
// (Final, BlueprintCosmetic, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor                InColorAndOpacity                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUserWidget::SetColorAndOpacity(const struct FLinearColor& InColorAndOpacity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "SetColorAndOpacity");

	Params::UUserWidget_SetColorAndOpacity_Params Parms{};

	Parms.InColorAndOpacity = InColorAndOpacity;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.UserWidget.SetAnimationCurrentTime
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class UWidgetAnimation*            InAnimation                                                      (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InTime                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUserWidget::SetAnimationCurrentTime(class UWidgetAnimation* InAnimation, float InTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "SetAnimationCurrentTime");

	Params::UUserWidget_SetAnimationCurrentTime_Params Parms{};

	Parms.InAnimation = InAnimation;
	Parms.InTime = InTime;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.UserWidget.SetAnchorsInViewport
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// struct FAnchors                    Anchors                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)

void UUserWidget::SetAnchorsInViewport(const struct FAnchors& Anchors)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "SetAnchorsInViewport");

	Params::UUserWidget_SetAnchorsInViewport_Params Parms{};

	Parms.Anchors = Anchors;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.UserWidget.SetAlignmentInViewport
// (Final, BlueprintCosmetic, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D                   Alignment                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUserWidget::SetAlignmentInViewport(const struct FVector2D& Alignment)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "SetAlignmentInViewport");

	Params::UUserWidget_SetAlignmentInViewport_Params Parms{};

	Parms.Alignment = Alignment;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.UserWidget.ReverseAnimation
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class UWidgetAnimation*            InAnimation                                                      (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUserWidget::ReverseAnimation(class UWidgetAnimation* InAnimation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "ReverseAnimation");

	Params::UUserWidget_ReverseAnimation_Params Parms{};

	Parms.InAnimation = InAnimation;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.UserWidget.RemoveFromViewport
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:

void UUserWidget::RemoveFromViewport()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "RemoveFromViewport");

	Params::UUserWidget_RemoveFromViewport_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.UserWidget.RemoveExtensions
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TSubclassOf<class UUserWidgetExtension>InExtensionType                                                  (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUserWidget::RemoveExtensions(TSubclassOf<class UUserWidgetExtension> InExtensionType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "RemoveExtensions");

	Params::UUserWidget_RemoveExtensions_Params Parms{};

	Parms.InExtensionType = InExtensionType;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.UserWidget.RemoveExtension
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UUserWidgetExtension*        InExtension                                                      (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUserWidget::RemoveExtension(class UUserWidgetExtension* InExtension)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "RemoveExtension");

	Params::UUserWidget_RemoveExtension_Params Parms{};

	Parms.InExtension = InExtension;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.UserWidget.RegisterInputComponent
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UUserWidget::RegisterInputComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "RegisterInputComponent");

	Params::UUserWidget_RegisterInputComponent_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.UserWidget.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUserWidget::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "PreConstruct");

	Params::UUserWidget_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG.UserWidget.PlaySound
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class USoundBase*                  SoundToPlay                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUserWidget::PlaySound(class USoundBase* SoundToPlay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "PlaySound");

	Params::UUserWidget_PlaySound_Params Parms{};

	Parms.SoundToPlay = SoundToPlay;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.UserWidget.PlayAnimationTimeRange
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class UWidgetAnimation*            InAnimation                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              StartAtTime                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              EndAtTime                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              NumLoopsToPlay                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EUMGSequencePlayMode    PlayMode                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              PlaybackSpeed                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bRestoreState                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UUMGSequencePlayer*          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UUMGSequencePlayer* UUserWidget::PlayAnimationTimeRange(class UWidgetAnimation* InAnimation, float StartAtTime, float EndAtTime, int32 NumLoopsToPlay, enum class EUMGSequencePlayMode PlayMode, float PlaybackSpeed, bool bRestoreState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "PlayAnimationTimeRange");

	Params::UUserWidget_PlayAnimationTimeRange_Params Parms{};

	Parms.InAnimation = InAnimation;
	Parms.StartAtTime = StartAtTime;
	Parms.EndAtTime = EndAtTime;
	Parms.NumLoopsToPlay = NumLoopsToPlay;
	Parms.PlayMode = PlayMode;
	Parms.PlaybackSpeed = PlaybackSpeed;
	Parms.bRestoreState = bRestoreState;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.UserWidget.PlayAnimationReverse
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class UWidgetAnimation*            InAnimation                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              PlaybackSpeed                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bRestoreState                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UUMGSequencePlayer*          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UUMGSequencePlayer* UUserWidget::PlayAnimationReverse(class UWidgetAnimation* InAnimation, float PlaybackSpeed, bool bRestoreState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "PlayAnimationReverse");

	Params::UUserWidget_PlayAnimationReverse_Params Parms{};

	Parms.InAnimation = InAnimation;
	Parms.PlaybackSpeed = PlaybackSpeed;
	Parms.bRestoreState = bRestoreState;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.UserWidget.PlayAnimationForward
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class UWidgetAnimation*            InAnimation                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              PlaybackSpeed                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bRestoreState                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UUMGSequencePlayer*          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UUMGSequencePlayer* UUserWidget::PlayAnimationForward(class UWidgetAnimation* InAnimation, float PlaybackSpeed, bool bRestoreState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "PlayAnimationForward");

	Params::UUserWidget_PlayAnimationForward_Params Parms{};

	Parms.InAnimation = InAnimation;
	Parms.PlaybackSpeed = PlaybackSpeed;
	Parms.bRestoreState = bRestoreState;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.UserWidget.PlayAnimation
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class UWidgetAnimation*            InAnimation                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              StartAtTime                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              NumLoopsToPlay                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EUMGSequencePlayMode    PlayMode                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              PlaybackSpeed                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bRestoreState                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UUMGSequencePlayer*          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UUMGSequencePlayer* UUserWidget::PlayAnimation(class UWidgetAnimation* InAnimation, float StartAtTime, int32 NumLoopsToPlay, enum class EUMGSequencePlayMode PlayMode, float PlaybackSpeed, bool bRestoreState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "PlayAnimation");

	Params::UUserWidget_PlayAnimation_Params Parms{};

	Parms.InAnimation = InAnimation;
	Parms.StartAtTime = StartAtTime;
	Parms.NumLoopsToPlay = NumLoopsToPlay;
	Parms.PlayMode = PlayMode;
	Parms.PlaybackSpeed = PlaybackSpeed;
	Parms.bRestoreState = bRestoreState;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.UserWidget.PauseAnimation
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class UWidgetAnimation*            InAnimation                                                      (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UUserWidget::PauseAnimation(class UWidgetAnimation* InAnimation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "PauseAnimation");

	Params::UUserWidget_PauseAnimation_Params Parms{};

	Parms.InAnimation = InAnimation;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.UserWidget.OnTouchStarted
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FPointerEvent               InTouchEvent                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FEventReply UUserWidget::OnTouchStarted(const struct FGeometry& MyGeometry, struct FPointerEvent& InTouchEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "OnTouchStarted");

	Params::UUserWidget_OnTouchStarted_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InTouchEvent = InTouchEvent;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG.UserWidget.OnTouchMoved
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FPointerEvent               InTouchEvent                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FEventReply UUserWidget::OnTouchMoved(const struct FGeometry& MyGeometry, struct FPointerEvent& InTouchEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "OnTouchMoved");

	Params::UUserWidget_OnTouchMoved_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InTouchEvent = InTouchEvent;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG.UserWidget.OnTouchGesture
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FPointerEvent               GestureEvent                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FEventReply UUserWidget::OnTouchGesture(const struct FGeometry& MyGeometry, struct FPointerEvent& GestureEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "OnTouchGesture");

	Params::UUserWidget_OnTouchGesture_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.GestureEvent = GestureEvent;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG.UserWidget.OnTouchForceChanged
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FPointerEvent               InTouchEvent                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FEventReply UUserWidget::OnTouchForceChanged(const struct FGeometry& MyGeometry, struct FPointerEvent& InTouchEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "OnTouchForceChanged");

	Params::UUserWidget_OnTouchForceChanged_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InTouchEvent = InTouchEvent;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG.UserWidget.OnTouchEnded
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FPointerEvent               InTouchEvent                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FEventReply UUserWidget::OnTouchEnded(const struct FGeometry& MyGeometry, struct FPointerEvent& InTouchEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "OnTouchEnded");

	Params::UUserWidget_OnTouchEnded_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InTouchEvent = InTouchEvent;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG.UserWidget.OnRemovedFromFocusPath
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent                 InFocusEvent                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)

void UUserWidget::OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "OnRemovedFromFocusPath");

	Params::UUserWidget_OnRemovedFromFocusPath_Params Parms{};

	Parms.InFocusEvent = InFocusEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG.UserWidget.OnPreviewMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FEventReply UUserWidget::OnPreviewMouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "OnPreviewMouseButtonDown");

	Params::UUserWidget_OnPreviewMouseButtonDown_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG.UserWidget.OnPreviewKeyDown
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FKeyEvent                   InKeyEvent                                                       (Parm, NativeAccessSpecifierPublic)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FEventReply UUserWidget::OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "OnPreviewKeyDown");

	Params::UUserWidget_OnPreviewKeyDown_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InKeyEvent = InKeyEvent;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG.UserWidget.OnPaint
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent, Const)
// Parameters:
// struct FPaintContext               Context                                                          (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UUserWidget::OnPaint(struct FPaintContext& Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "OnPaint");

	Params::UUserWidget_OnPaint_Params Parms{};

	Parms.Context = Context;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG.UserWidget.OnMouseWheel
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FEventReply UUserWidget::OnMouseWheel(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "OnMouseWheel");

	Params::UUserWidget_OnMouseWheel_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG.UserWidget.OnMouseMove
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FEventReply UUserWidget::OnMouseMove(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "OnMouseMove");

	Params::UUserWidget_OnMouseMove_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG.UserWidget.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FPointerEvent               MouseEvent                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UUserWidget::OnMouseLeave(struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "OnMouseLeave");

	Params::UUserWidget_OnMouseLeave_Params Parms{};

	Parms.MouseEvent = MouseEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG.UserWidget.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UUserWidget::OnMouseEnter(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "OnMouseEnter");

	Params::UUserWidget_OnMouseEnter_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG.UserWidget.OnMouseCaptureLost
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUserWidget::OnMouseCaptureLost()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "OnMouseCaptureLost");

	Params::UUserWidget_OnMouseCaptureLost_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG.UserWidget.OnMouseButtonUp
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FEventReply UUserWidget::OnMouseButtonUp(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "OnMouseButtonUp");

	Params::UUserWidget_OnMouseButtonUp_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG.UserWidget.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FEventReply UUserWidget::OnMouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "OnMouseButtonDown");

	Params::UUserWidget_OnMouseButtonDown_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG.UserWidget.OnMouseButtonDoubleClick
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                   InMyGeometry                                                     (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FPointerEvent               InMouseEvent                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FEventReply UUserWidget::OnMouseButtonDoubleClick(const struct FGeometry& InMyGeometry, struct FPointerEvent& InMouseEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "OnMouseButtonDoubleClick");

	Params::UUserWidget_OnMouseButtonDoubleClick_Params Parms{};

	Parms.InMyGeometry = InMyGeometry;
	Parms.InMouseEvent = InMouseEvent;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG.UserWidget.OnMotionDetected
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FMotionEvent                InMotionEvent                                                    (Parm, NativeAccessSpecifierPublic)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FEventReply UUserWidget::OnMotionDetected(const struct FGeometry& MyGeometry, const struct FMotionEvent& InMotionEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "OnMotionDetected");

	Params::UUserWidget_OnMotionDetected_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InMotionEvent = InMotionEvent;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG.UserWidget.OnKeyUp
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FKeyEvent                   InKeyEvent                                                       (Parm, NativeAccessSpecifierPublic)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FEventReply UUserWidget::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "OnKeyUp");

	Params::UUserWidget_OnKeyUp_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InKeyEvent = InKeyEvent;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG.UserWidget.OnKeyDown
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FKeyEvent                   InKeyEvent                                                       (Parm, NativeAccessSpecifierPublic)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FEventReply UUserWidget::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "OnKeyDown");

	Params::UUserWidget_OnKeyDown_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InKeyEvent = InKeyEvent;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG.UserWidget.OnKeyChar
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FCharacterEvent             InCharacterEvent                                                 (Parm, NativeAccessSpecifierPublic)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FEventReply UUserWidget::OnKeyChar(const struct FGeometry& MyGeometry, const struct FCharacterEvent& InCharacterEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "OnKeyChar");

	Params::UUserWidget_OnKeyChar_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InCharacterEvent = InCharacterEvent;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG.UserWidget.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUserWidget::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "OnInitialized");

	Params::UUserWidget_OnInitialized_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG.UserWidget.OnFocusReceived
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FFocusEvent                 InFocusEvent                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FEventReply UUserWidget::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "OnFocusReceived");

	Params::UUserWidget_OnFocusReceived_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InFocusEvent = InFocusEvent;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG.UserWidget.OnFocusLost
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent                 InFocusEvent                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)

void UUserWidget::OnFocusLost(const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "OnFocusLost");

	Params::UUserWidget_OnFocusLost_Params Parms{};

	Parms.InFocusEvent = InFocusEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG.UserWidget.OnDrop
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FPointerEvent               PointerEvent                                                     (Parm, NativeAccessSpecifierPublic)
// class UDragDropOperation*          Operation                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UUserWidget::OnDrop(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "OnDrop");

	Params::UUserWidget_OnDrop_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.PointerEvent = PointerEvent;
	Parms.Operation = Operation;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG.UserWidget.OnDragOver
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FPointerEvent               PointerEvent                                                     (Parm, NativeAccessSpecifierPublic)
// class UDragDropOperation*          Operation                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UUserWidget::OnDragOver(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "OnDragOver");

	Params::UUserWidget_OnDragOver_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.PointerEvent = PointerEvent;
	Parms.Operation = Operation;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG.UserWidget.OnDragLeave
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FPointerEvent               PointerEvent                                                     (Parm, NativeAccessSpecifierPublic)
// class UDragDropOperation*          Operation                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUserWidget::OnDragLeave(const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "OnDragLeave");

	Params::UUserWidget_OnDragLeave_Params Parms{};

	Parms.PointerEvent = PointerEvent;
	Parms.Operation = Operation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG.UserWidget.OnDragEnter
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FPointerEvent               PointerEvent                                                     (Parm, NativeAccessSpecifierPublic)
// class UDragDropOperation*          Operation                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUserWidget::OnDragEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "OnDragEnter");

	Params::UUserWidget_OnDragEnter_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.PointerEvent = PointerEvent;
	Parms.Operation = Operation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG.UserWidget.OnDragDetected
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FPointerEvent               PointerEvent                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UDragDropOperation*          Operation                                                        (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUserWidget::OnDragDetected(const struct FGeometry& MyGeometry, struct FPointerEvent& PointerEvent, class UDragDropOperation** Operation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "OnDragDetected");

	Params::UUserWidget_OnDragDetected_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.PointerEvent = PointerEvent;

	UObject::ProcessEvent(Func, &Parms);

	if (Operation != nullptr)
		*Operation = Parms.Operation;

}


// Function UMG.UserWidget.OnDragCancelled
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FPointerEvent               PointerEvent                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UDragDropOperation*          Operation                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUserWidget::OnDragCancelled(struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "OnDragCancelled");

	Params::UUserWidget_OnDragCancelled_Params Parms{};

	Parms.PointerEvent = PointerEvent;
	Parms.Operation = Operation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG.UserWidget.OnAnimationStarted
// (BlueprintCosmetic, Native, Event, Protected, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*            Animation                                                        (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUserWidget::OnAnimationStarted(class UWidgetAnimation* Animation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "OnAnimationStarted");

	Params::UUserWidget_OnAnimationStarted_Params Parms{};

	Parms.Animation = Animation;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.UserWidget.OnAnimationFinished
// (BlueprintCosmetic, Native, Event, Protected, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*            Animation                                                        (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUserWidget::OnAnimationFinished(class UWidgetAnimation* Animation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "OnAnimationFinished");

	Params::UUserWidget_OnAnimationFinished_Params Parms{};

	Parms.Animation = Animation;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.UserWidget.OnAnalogValueChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FAnalogInputEvent           InAnalogInputEvent                                               (Parm, NativeAccessSpecifierPublic)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FEventReply UUserWidget::OnAnalogValueChanged(const struct FGeometry& MyGeometry, const struct FAnalogInputEvent& InAnalogInputEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "OnAnalogValueChanged");

	Params::UUserWidget_OnAnalogValueChanged_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InAnalogInputEvent = InAnalogInputEvent;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG.UserWidget.OnAddedToFocusPath
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent                 InFocusEvent                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)

void UUserWidget::OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "OnAddedToFocusPath");

	Params::UUserWidget_OnAddedToFocusPath_Params Parms{};

	Parms.InFocusEvent = InFocusEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG.UserWidget.ListenForInputAction
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class FName                        ActionName                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EInputEvent             EventType                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bConsume                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUserWidget::ListenForInputAction(class FName ActionName, enum class EInputEvent EventType, bool bConsume, FDelegateProperty_ Callback)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "ListenForInputAction");

	Params::UUserWidget_ListenForInputAction_Params Parms{};

	Parms.ActionName = ActionName;
	Parms.EventType = EventType;
	Parms.bConsume = bConsume;
	Parms.Callback = Callback;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.UserWidget.IsPlayingAnimation
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UUserWidget::IsPlayingAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "IsPlayingAnimation");

	Params::UUserWidget_IsPlayingAnimation_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.UserWidget.IsListeningForInputAction
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        ActionName                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UUserWidget::IsListeningForInputAction(class FName ActionName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "IsListeningForInputAction");

	Params::UUserWidget_IsListeningForInputAction_Params Parms{};

	Parms.ActionName = ActionName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.UserWidget.IsInteractable
// (BlueprintCosmetic, Event, Public, BlueprintEvent, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UUserWidget::IsInteractable()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "IsInteractable");

	Params::UUserWidget_IsInteractable_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG.UserWidget.IsAnyAnimationPlaying
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UUserWidget::IsAnyAnimationPlaying()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "IsAnyAnimationPlaying");

	Params::UUserWidget_IsAnyAnimationPlaying_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.UserWidget.IsAnimationPlayingForward
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class UWidgetAnimation*            InAnimation                                                      (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UUserWidget::IsAnimationPlayingForward(class UWidgetAnimation* InAnimation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "IsAnimationPlayingForward");

	Params::UUserWidget_IsAnimationPlayingForward_Params Parms{};

	Parms.InAnimation = InAnimation;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.UserWidget.IsAnimationPlaying
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UWidgetAnimation*            InAnimation                                                      (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UUserWidget::IsAnimationPlaying(class UWidgetAnimation* InAnimation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "IsAnimationPlaying");

	Params::UUserWidget_IsAnimationPlaying_Params Parms{};

	Parms.InAnimation = InAnimation;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.UserWidget.GetOwningPlayerPawn
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class APawn*                       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class APawn* UUserWidget::GetOwningPlayerPawn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "GetOwningPlayerPawn");

	Params::UUserWidget_GetOwningPlayerPawn_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.UserWidget.GetOwningPlayerCameraManager
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class APlayerCameraManager*        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class APlayerCameraManager* UUserWidget::GetOwningPlayerCameraManager()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "GetOwningPlayerCameraManager");

	Params::UUserWidget_GetOwningPlayerCameraManager_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.UserWidget.GetIsVisible
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UUserWidget::GetIsVisible()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "GetIsVisible");

	Params::UUserWidget_GetIsVisible_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.UserWidget.GetExtensions
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TSubclassOf<class UUserWidgetExtension>ExtensionType                                                    (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UUserWidgetExtension*>ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

TArray<class UUserWidgetExtension*> UUserWidget::GetExtensions(TSubclassOf<class UUserWidgetExtension> ExtensionType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "GetExtensions");

	Params::UUserWidget_GetExtensions_Params Parms{};

	Parms.ExtensionType = ExtensionType;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.UserWidget.GetExtension
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TSubclassOf<class UUserWidgetExtension>ExtensionType                                                    (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UUserWidgetExtension*        ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UUserWidgetExtension* UUserWidget::GetExtension(TSubclassOf<class UUserWidgetExtension> ExtensionType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "GetExtension");

	Params::UUserWidget_GetExtension_Params Parms{};

	Parms.ExtensionType = ExtensionType;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.UserWidget.GetAnimationCurrentTime
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UWidgetAnimation*            InAnimation                                                      (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UUserWidget::GetAnimationCurrentTime(class UWidgetAnimation* InAnimation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "GetAnimationCurrentTime");

	Params::UUserWidget_GetAnimationCurrentTime_Params Parms{};

	Parms.InAnimation = InAnimation;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.UserWidget.GetAnchorsInViewport
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FAnchors                    ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FAnchors UUserWidget::GetAnchorsInViewport()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "GetAnchorsInViewport");

	Params::UUserWidget_GetAnchorsInViewport_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.UserWidget.GetAlignmentInViewport
// (Final, BlueprintCosmetic, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector2D                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector2D UUserWidget::GetAlignmentInViewport()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "GetAlignmentInViewport");

	Params::UUserWidget_GetAlignmentInViewport_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.UserWidget.FlushAnimations
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:

void UUserWidget::FlushAnimations()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "FlushAnimations");

	Params::UUserWidget_FlushAnimations_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.UserWidget.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUserWidget::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "Destruct");

	Params::UUserWidget_Destruct_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG.UserWidget.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUserWidget::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "Construct");

	Params::UUserWidget_Construct_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG.UserWidget.CancelLatentActions
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UUserWidget::CancelLatentActions()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "CancelLatentActions");

	Params::UUserWidget_CancelLatentActions_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.UserWidget.BindToAnimationStarted
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidgetAnimation*            Animation                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Delegate                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUserWidget::BindToAnimationStarted(class UWidgetAnimation* Animation, FDelegateProperty_ Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "BindToAnimationStarted");

	Params::UUserWidget_BindToAnimationStarted_Params Parms{};

	Parms.Animation = Animation;
	Parms.Delegate = Delegate;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.UserWidget.BindToAnimationFinished
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidgetAnimation*            Animation                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Delegate                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUserWidget::BindToAnimationFinished(class UWidgetAnimation* Animation, FDelegateProperty_ Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "BindToAnimationFinished");

	Params::UUserWidget_BindToAnimationFinished_Params Parms{};

	Parms.Animation = Animation;
	Parms.Delegate = Delegate;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.UserWidget.BindToAnimationEvent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidgetAnimation*            Animation                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Delegate                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EWidgetAnimationEvent   AnimationEvent                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        UserTag                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUserWidget::BindToAnimationEvent(class UWidgetAnimation* Animation, FDelegateProperty_ Delegate, enum class EWidgetAnimationEvent AnimationEvent, class FName UserTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "BindToAnimationEvent");

	Params::UUserWidget_BindToAnimationEvent_Params Parms{};

	Parms.Animation = Animation;
	Parms.Delegate = Delegate;
	Parms.AnimationEvent = AnimationEvent;
	Parms.UserTag = UserTag;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.UserWidget.AddToViewport
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// int32                              ZOrder                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUserWidget::AddToViewport(int32 ZOrder)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "AddToViewport");

	Params::UUserWidget_AddToViewport_Params Parms{};

	Parms.ZOrder = ZOrder;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.UserWidget.AddToPlayerScreen
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// int32                              ZOrder                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UUserWidget::AddToPlayerScreen(int32 ZOrder)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "AddToPlayerScreen");

	Params::UUserWidget_AddToPlayerScreen_Params Parms{};

	Parms.ZOrder = ZOrder;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.UserWidget.AddExtension
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TSubclassOf<class UUserWidgetExtension>InExtensionType                                                  (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UUserWidgetExtension*        ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UUserWidgetExtension* UUserWidget::AddExtension(TSubclassOf<class UUserWidgetExtension> InExtensionType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserWidget", "AddExtension");

	Params::UUserWidget_AddExtension_Params Parms{};

	Parms.InExtensionType = InExtensionType;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.BackgroundBlur.SetVerticalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EVerticalAlignment      InVerticalAlignment                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBackgroundBlur::SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BackgroundBlur", "SetVerticalAlignment");

	Params::UBackgroundBlur_SetVerticalAlignment_Params Parms{};

	Parms.InVerticalAlignment = InVerticalAlignment;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.BackgroundBlur.SetPadding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMargin                     InPadding                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void UBackgroundBlur::SetPadding(const struct FMargin& InPadding)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BackgroundBlur", "SetPadding");

	Params::UBackgroundBlur_SetPadding_Params Parms{};

	Parms.InPadding = InPadding;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.BackgroundBlur.SetLowQualityFallbackBrush
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSlateBrush                 InBrush                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UBackgroundBlur::SetLowQualityFallbackBrush(struct FSlateBrush& InBrush)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BackgroundBlur", "SetLowQualityFallbackBrush");

	Params::UBackgroundBlur_SetLowQualityFallbackBrush_Params Parms{};

	Parms.InBrush = InBrush;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.BackgroundBlur.SetHorizontalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EHorizontalAlignment    InHorizontalAlignment                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBackgroundBlur::SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BackgroundBlur", "SetHorizontalAlignment");

	Params::UBackgroundBlur_SetHorizontalAlignment_Params Parms{};

	Parms.InHorizontalAlignment = InHorizontalAlignment;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.BackgroundBlur.SetCornerRadius
// (Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector4                    InCornerRadius                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBackgroundBlur::SetCornerRadius(const struct FVector4& InCornerRadius)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BackgroundBlur", "SetCornerRadius");

	Params::UBackgroundBlur_SetCornerRadius_Params Parms{};

	Parms.InCornerRadius = InCornerRadius;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.BackgroundBlur.SetBlurStrength
// (Native, Public, BlueprintCallable)
// Parameters:
// float                              InStrength                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBackgroundBlur::SetBlurStrength(float InStrength)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BackgroundBlur", "SetBlurStrength");

	Params::UBackgroundBlur_SetBlurStrength_Params Parms{};

	Parms.InStrength = InStrength;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.BackgroundBlur.SetBlurRadius
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              InBlurRadius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBackgroundBlur::SetBlurRadius(int32 InBlurRadius)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BackgroundBlur", "SetBlurRadius");

	Params::UBackgroundBlur_SetBlurRadius_Params Parms{};

	Parms.InBlurRadius = InBlurRadius;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.BackgroundBlur.SetApplyAlphaToBlur
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInApplyAlphaToBlur                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBackgroundBlur::SetApplyAlphaToBlur(bool bInApplyAlphaToBlur)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BackgroundBlur", "SetApplyAlphaToBlur");

	Params::UBackgroundBlur_SetApplyAlphaToBlur_Params Parms{};

	Parms.bInApplyAlphaToBlur = bInApplyAlphaToBlur;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.Button.SetTouchMethod
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EButtonTouchMethod      InTouchMethod                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UButton::SetTouchMethod(enum class EButtonTouchMethod InTouchMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Button", "SetTouchMethod");

	Params::UButton_SetTouchMethod_Params Parms{};

	Parms.InTouchMethod = InTouchMethod;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.Button.SetStyle
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FButtonStyle                InStyle                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UButton::SetStyle(struct FButtonStyle& InStyle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Button", "SetStyle");

	Params::UButton_SetStyle_Params Parms{};

	Parms.InStyle = InStyle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.Button.SetPressMethod
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EButtonPressMethod      InPressMethod                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UButton::SetPressMethod(enum class EButtonPressMethod InPressMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Button", "SetPressMethod");

	Params::UButton_SetPressMethod_Params Parms{};

	Parms.InPressMethod = InPressMethod;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.Button.SetColorAndOpacity
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor                InColorAndOpacity                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UButton::SetColorAndOpacity(const struct FLinearColor& InColorAndOpacity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Button", "SetColorAndOpacity");

	Params::UButton_SetColorAndOpacity_Params Parms{};

	Parms.InColorAndOpacity = InColorAndOpacity;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.Button.SetClickMethod
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EButtonClickMethod      InClickMethod                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UButton::SetClickMethod(enum class EButtonClickMethod InClickMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Button", "SetClickMethod");

	Params::UButton_SetClickMethod_Params Parms{};

	Parms.InClickMethod = InClickMethod;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.Button.SetBackgroundColor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor                InBackgroundColor                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UButton::SetBackgroundColor(const struct FLinearColor& InBackgroundColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Button", "SetBackgroundColor");

	Params::UButton_SetBackgroundColor_Params Parms{};

	Parms.InBackgroundColor = InBackgroundColor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.Button.IsPressed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UButton::IsPressed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Button", "IsPressed");

	Params::UButton_IsPressed_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.GridPanel.SetRowFill
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              RowIndex                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Coefficient                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGridPanel::SetRowFill(int32 RowIndex, float Coefficient)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GridPanel", "SetRowFill");

	Params::UGridPanel_SetRowFill_Params Parms{};

	Parms.RowIndex = RowIndex;
	Parms.Coefficient = Coefficient;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.GridPanel.SetColumnFill
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              ColumnIndex                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Coefficient                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGridPanel::SetColumnFill(int32 ColumnIndex, float Coefficient)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GridPanel", "SetColumnFill");

	Params::UGridPanel_SetColumnFill_Params Parms{};

	Parms.ColumnIndex = ColumnIndex;
	Parms.Coefficient = Coefficient;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.GridPanel.AddChildToGrid
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                     Content                                                          (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              InRow                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              InColumn                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGridSlot*                   ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UGridSlot* UGridPanel::AddChildToGrid(class UWidget* Content, int32 InRow, int32 InColumn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GridPanel", "AddChildToGrid");

	Params::UGridPanel_AddChildToGrid_Params Parms{};

	Parms.Content = Content;
	Parms.InRow = InRow;
	Parms.InColumn = InColumn;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.OverlaySlot.SetVerticalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EVerticalAlignment      InVerticalAlignment                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UOverlaySlot::SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OverlaySlot", "SetVerticalAlignment");

	Params::UOverlaySlot_SetVerticalAlignment_Params Parms{};

	Parms.InVerticalAlignment = InVerticalAlignment;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.OverlaySlot.SetPadding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMargin                     InPadding                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void UOverlaySlot::SetPadding(const struct FMargin& InPadding)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OverlaySlot", "SetPadding");

	Params::UOverlaySlot_SetPadding_Params Parms{};

	Parms.InPadding = InPadding;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.OverlaySlot.SetHorizontalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EHorizontalAlignment    InHorizontalAlignment                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UOverlaySlot::SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OverlaySlot", "SetHorizontalAlignment");

	Params::UOverlaySlot_SetHorizontalAlignment_Params Parms{};

	Parms.InHorizontalAlignment = InHorizontalAlignment;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.Slider.SetValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USlider::SetValue(float InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Slider", "SetValue");

	Params::USlider_SetValue_Params Parms{};

	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.Slider.SetStepSize
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USlider::SetStepSize(float InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Slider", "SetStepSize");

	Params::USlider_SetStepSize_Params Parms{};

	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.Slider.SetSliderHandleColor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor                InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USlider::SetSliderHandleColor(const struct FLinearColor& InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Slider", "SetSliderHandleColor");

	Params::USlider_SetSliderHandleColor_Params Parms{};

	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.Slider.SetSliderBarColor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor                InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USlider::SetSliderBarColor(const struct FLinearColor& InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Slider", "SetSliderBarColor");

	Params::USlider_SetSliderBarColor_Params Parms{};

	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.Slider.SetMinValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USlider::SetMinValue(float InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Slider", "SetMinValue");

	Params::USlider_SetMinValue_Params Parms{};

	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.Slider.SetMaxValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USlider::SetMaxValue(float InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Slider", "SetMaxValue");

	Params::USlider_SetMaxValue_Params Parms{};

	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.Slider.SetLocked
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USlider::SetLocked(bool InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Slider", "SetLocked");

	Params::USlider_SetLocked_Params Parms{};

	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.Slider.SetIndentHandle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USlider::SetIndentHandle(bool InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Slider", "SetIndentHandle");

	Params::USlider_SetIndentHandle_Params Parms{};

	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.Slider.GetValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float USlider::GetValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Slider", "GetValue");

	Params::USlider_GetValue_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.Slider.GetNormalizedValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float USlider::GetNormalizedValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Slider", "GetNormalizedValue");

	Params::USlider_GetNormalizedValue_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.WidgetSwitcher.SetActiveWidgetIndex
// (Native, Public, BlueprintCallable)
// Parameters:
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWidgetSwitcher::SetActiveWidgetIndex(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetSwitcher", "SetActiveWidgetIndex");

	Params::UWidgetSwitcher_SetActiveWidgetIndex_Params Parms{};

	Parms.Index = Index;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.WidgetSwitcher.SetActiveWidget
// (Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                     Widget                                                           (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWidgetSwitcher::SetActiveWidget(class UWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetSwitcher", "SetActiveWidget");

	Params::UWidgetSwitcher_SetActiveWidget_Params Parms{};

	Parms.Widget = Widget;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.WidgetSwitcher.GetWidgetAtIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWidget*                     ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UWidget* UWidgetSwitcher::GetWidgetAtIndex(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetSwitcher", "GetWidgetAtIndex");

	Params::UWidgetSwitcher_GetWidgetAtIndex_Params Parms{};

	Parms.Index = Index;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.WidgetSwitcher.GetNumWidgets
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UWidgetSwitcher::GetNumWidgets()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetSwitcher", "GetNumWidgets");

	Params::UWidgetSwitcher_GetNumWidgets_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.WidgetSwitcher.GetActiveWidgetIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UWidgetSwitcher::GetActiveWidgetIndex()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetSwitcher", "GetActiveWidgetIndex");

	Params::UWidgetSwitcher_GetActiveWidgetIndex_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.WidgetSwitcher.GetActiveWidget
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UWidget*                     ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UWidget* UWidgetSwitcher::GetActiveWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetSwitcher", "GetActiveWidget");

	Params::UWidgetSwitcher_GetActiveWidget_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.Border.SetVerticalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EVerticalAlignment      InVerticalAlignment                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBorder::SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Border", "SetVerticalAlignment");

	Params::UBorder_SetVerticalAlignment_Params Parms{};

	Parms.InVerticalAlignment = InVerticalAlignment;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.Border.SetShowEffectWhenDisabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInShowEffectWhenDisabled                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBorder::SetShowEffectWhenDisabled(bool bInShowEffectWhenDisabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Border", "SetShowEffectWhenDisabled");

	Params::UBorder_SetShowEffectWhenDisabled_Params Parms{};

	Parms.bInShowEffectWhenDisabled = bInShowEffectWhenDisabled;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.Border.SetPadding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMargin                     InPadding                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void UBorder::SetPadding(const struct FMargin& InPadding)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Border", "SetPadding");

	Params::UBorder_SetPadding_Params Parms{};

	Parms.InPadding = InPadding;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.Border.SetHorizontalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EHorizontalAlignment    InHorizontalAlignment                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBorder::SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Border", "SetHorizontalAlignment");

	Params::UBorder_SetHorizontalAlignment_Params Parms{};

	Parms.InHorizontalAlignment = InHorizontalAlignment;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.Border.SetDesiredSizeScale
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D                   InScale                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBorder::SetDesiredSizeScale(const struct FVector2D& InScale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Border", "SetDesiredSizeScale");

	Params::UBorder_SetDesiredSizeScale_Params Parms{};

	Parms.InScale = InScale;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.Border.SetContentColorAndOpacity
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor                InContentColorAndOpacity                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBorder::SetContentColorAndOpacity(const struct FLinearColor& InContentColorAndOpacity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Border", "SetContentColorAndOpacity");

	Params::UBorder_SetContentColorAndOpacity_Params Parms{};

	Parms.InContentColorAndOpacity = InContentColorAndOpacity;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.Border.SetBrushFromTexture
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UTexture2D*                  Texture                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBorder::SetBrushFromTexture(class UTexture2D* Texture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Border", "SetBrushFromTexture");

	Params::UBorder_SetBrushFromTexture_Params Parms{};

	Parms.Texture = Texture;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.Border.SetBrushFromMaterial
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialInterface*          Material                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBorder::SetBrushFromMaterial(class UMaterialInterface* Material)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Border", "SetBrushFromMaterial");

	Params::UBorder_SetBrushFromMaterial_Params Parms{};

	Parms.Material = Material;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.Border.SetBrushFromAsset
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USlateBrushAsset*            Asset                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBorder::SetBrushFromAsset(class USlateBrushAsset* Asset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Border", "SetBrushFromAsset");

	Params::UBorder_SetBrushFromAsset_Params Parms{};

	Parms.Asset = Asset;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.Border.SetBrushColor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor                InBrushColor                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBorder::SetBrushColor(const struct FLinearColor& InBrushColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Border", "SetBrushColor");

	Params::UBorder_SetBrushColor_Params Parms{};

	Parms.InBrushColor = InBrushColor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.Border.SetBrush
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSlateBrush                 InBrush                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UBorder::SetBrush(struct FSlateBrush& InBrush)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Border", "SetBrush");

	Params::UBorder_SetBrush_Params Parms{};

	Parms.InBrush = InBrush;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.Border.GetDynamicMaterial
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialInstanceDynamic*    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMaterialInstanceDynamic* UBorder::GetDynamicMaterial()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Border", "GetDynamicMaterial");

	Params::UBorder_GetDynamicMaterial_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.TextLayoutWidget.SetJustification
// (Native, Public, BlueprintCallable)
// Parameters:
// enum class ETextJustify            InJustification                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTextLayoutWidget::SetJustification(enum class ETextJustify InJustification)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TextLayoutWidget", "SetJustification");

	Params::UTextLayoutWidget_SetJustification_Params Parms{};

	Parms.InJustification = InJustification;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.TextBlock.SetTextTransformPolicy
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ETextTransformPolicy    InTransformPolicy                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTextBlock::SetTextTransformPolicy(enum class ETextTransformPolicy InTransformPolicy)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TextBlock", "SetTextTransformPolicy");

	Params::UTextBlock_SetTextTransformPolicy_Params Parms{};

	Parms.InTransformPolicy = InTransformPolicy;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.TextBlock.SetTextOverflowPolicy
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ETextOverflowPolicy     InOverflowPolicy                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTextBlock::SetTextOverflowPolicy(enum class ETextOverflowPolicy InOverflowPolicy)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TextBlock", "SetTextOverflowPolicy");

	Params::UTextBlock_SetTextOverflowPolicy_Params Parms{};

	Parms.InOverflowPolicy = InOverflowPolicy;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.TextBlock.SetText
// (Native, Public, BlueprintCallable)
// Parameters:
// class FText                        InText                                                           (Parm, NativeAccessSpecifierPublic)

void UTextBlock::SetText(class FText InText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TextBlock", "SetText");

	Params::UTextBlock_SetText_Params Parms{};

	Parms.InText = InText;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.TextBlock.SetStrikeBrush
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FSlateBrush                 InStrikeBrush                                                    (Parm, NativeAccessSpecifierPublic)

void UTextBlock::SetStrikeBrush(const struct FSlateBrush& InStrikeBrush)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TextBlock", "SetStrikeBrush");

	Params::UTextBlock_SetStrikeBrush_Params Parms{};

	Parms.InStrikeBrush = InStrikeBrush;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.TextBlock.SetShadowOffset
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D                   InShadowOffset                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTextBlock::SetShadowOffset(const struct FVector2D& InShadowOffset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TextBlock", "SetShadowOffset");

	Params::UTextBlock_SetShadowOffset_Params Parms{};

	Parms.InShadowOffset = InShadowOffset;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.TextBlock.SetShadowColorAndOpacity
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor                InShadowColorAndOpacity                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTextBlock::SetShadowColorAndOpacity(const struct FLinearColor& InShadowColorAndOpacity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TextBlock", "SetShadowColorAndOpacity");

	Params::UTextBlock_SetShadowColorAndOpacity_Params Parms{};

	Parms.InShadowColorAndOpacity = InShadowColorAndOpacity;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.TextBlock.SetOpacity
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InOpacity                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTextBlock::SetOpacity(float InOpacity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TextBlock", "SetOpacity");

	Params::UTextBlock_SetOpacity_Params Parms{};

	Parms.InOpacity = InOpacity;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.TextBlock.SetMinDesiredWidth
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InMinDesiredWidth                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTextBlock::SetMinDesiredWidth(float InMinDesiredWidth)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TextBlock", "SetMinDesiredWidth");

	Params::UTextBlock_SetMinDesiredWidth_Params Parms{};

	Parms.InMinDesiredWidth = InMinDesiredWidth;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.TextBlock.SetFontOutlineMaterial
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialInterface*          InMaterial                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTextBlock::SetFontOutlineMaterial(class UMaterialInterface* InMaterial)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TextBlock", "SetFontOutlineMaterial");

	Params::UTextBlock_SetFontOutlineMaterial_Params Parms{};

	Parms.InMaterial = InMaterial;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.TextBlock.SetFontMaterial
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialInterface*          InMaterial                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTextBlock::SetFontMaterial(class UMaterialInterface* InMaterial)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TextBlock", "SetFontMaterial");

	Params::UTextBlock_SetFontMaterial_Params Parms{};

	Parms.InMaterial = InMaterial;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.TextBlock.SetFont
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FSlateFontInfo              InFontInfo                                                       (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTextBlock::SetFont(const struct FSlateFontInfo& InFontInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TextBlock", "SetFont");

	Params::UTextBlock_SetFont_Params Parms{};

	Parms.InFontInfo = InFontInfo;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.TextBlock.SetColorAndOpacity
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FSlateColor                 InColorAndOpacity                                                (Parm, NativeAccessSpecifierPublic)

void UTextBlock::SetColorAndOpacity(const struct FSlateColor& InColorAndOpacity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TextBlock", "SetColorAndOpacity");

	Params::UTextBlock_SetColorAndOpacity_Params Parms{};

	Parms.InColorAndOpacity = InColorAndOpacity;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.TextBlock.SetAutoWrapText
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               InAutoTextWrap                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTextBlock::SetAutoWrapText(bool InAutoTextWrap)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TextBlock", "SetAutoWrapText");

	Params::UTextBlock_SetAutoWrapText_Params Parms{};

	Parms.InAutoTextWrap = InAutoTextWrap;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.TextBlock.GetText
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText UTextBlock::GetText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TextBlock", "GetText");

	Params::UTextBlock_GetText_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.TextBlock.GetDynamicOutlineMaterial
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialInstanceDynamic*    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMaterialInstanceDynamic* UTextBlock::GetDynamicOutlineMaterial()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TextBlock", "GetDynamicOutlineMaterial");

	Params::UTextBlock_GetDynamicOutlineMaterial_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.TextBlock.GetDynamicFontMaterial
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialInstanceDynamic*    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMaterialInstanceDynamic* UTextBlock::GetDynamicFontMaterial()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TextBlock", "GetDynamicFontMaterial");

	Params::UTextBlock_GetDynamicFontMaterial_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.ScrollBox.SetWheelScrollMultiplier
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              NewWheelScrollMultiplier                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UScrollBox::SetWheelScrollMultiplier(float NewWheelScrollMultiplier)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScrollBox", "SetWheelScrollMultiplier");

	Params::UScrollBox_SetWheelScrollMultiplier_Params Parms{};

	Parms.NewWheelScrollMultiplier = NewWheelScrollMultiplier;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.ScrollBox.SetScrollWhenFocusChanges
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EScrollWhenFocusChanges NewScrollWhenFocusChanges                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UScrollBox::SetScrollWhenFocusChanges(enum class EScrollWhenFocusChanges NewScrollWhenFocusChanges)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScrollBox", "SetScrollWhenFocusChanges");

	Params::UScrollBox_SetScrollWhenFocusChanges_Params Parms{};

	Parms.NewScrollWhenFocusChanges = NewScrollWhenFocusChanges;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.ScrollBox.SetScrollOffset
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              NewScrollOffset                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UScrollBox::SetScrollOffset(float NewScrollOffset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScrollBox", "SetScrollOffset");

	Params::UScrollBox_SetScrollOffset_Params Parms{};

	Parms.NewScrollOffset = NewScrollOffset;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.ScrollBox.SetScrollBarVisibility
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ESlateVisibility        NewScrollBarVisibility                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UScrollBox::SetScrollBarVisibility(enum class ESlateVisibility NewScrollBarVisibility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScrollBox", "SetScrollBarVisibility");

	Params::UScrollBox_SetScrollBarVisibility_Params Parms{};

	Parms.NewScrollBarVisibility = NewScrollBarVisibility;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.ScrollBox.SetScrollbarThickness
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D                   NewScrollbarThickness                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UScrollBox::SetScrollbarThickness(struct FVector2D& NewScrollbarThickness)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScrollBox", "SetScrollbarThickness");

	Params::UScrollBox_SetScrollbarThickness_Params Parms{};

	Parms.NewScrollbarThickness = NewScrollbarThickness;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.ScrollBox.SetScrollbarPadding
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FMargin                     NewScrollbarPadding                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void UScrollBox::SetScrollbarPadding(struct FMargin& NewScrollbarPadding)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScrollBox", "SetScrollbarPadding");

	Params::UScrollBox_SetScrollbarPadding_Params Parms{};

	Parms.NewScrollbarPadding = NewScrollbarPadding;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.ScrollBox.SetOrientation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EOrientation            NewOrientation                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UScrollBox::SetOrientation(enum class EOrientation NewOrientation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScrollBox", "SetOrientation");

	Params::UScrollBox_SetOrientation_Params Parms{};

	Parms.NewOrientation = NewOrientation;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.ScrollBox.SetNavigationDestination
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EDescendantScrollDestinationNewNavigationDestination                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UScrollBox::SetNavigationDestination(enum class EDescendantScrollDestination NewNavigationDestination)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScrollBox", "SetNavigationDestination");

	Params::UScrollBox_SetNavigationDestination_Params Parms{};

	Parms.NewNavigationDestination = NewNavigationDestination;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.ScrollBox.SetConsumeMouseWheel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EConsumeMouseWheel      NewConsumeMouseWheel                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UScrollBox::SetConsumeMouseWheel(enum class EConsumeMouseWheel NewConsumeMouseWheel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScrollBox", "SetConsumeMouseWheel");

	Params::UScrollBox_SetConsumeMouseWheel_Params Parms{};

	Parms.NewConsumeMouseWheel = NewConsumeMouseWheel;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.ScrollBox.SetAnimateWheelScrolling
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bShouldAnimateWheelScrolling                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UScrollBox::SetAnimateWheelScrolling(bool bShouldAnimateWheelScrolling)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScrollBox", "SetAnimateWheelScrolling");

	Params::UScrollBox_SetAnimateWheelScrolling_Params Parms{};

	Parms.bShouldAnimateWheelScrolling = bShouldAnimateWheelScrolling;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.ScrollBox.SetAlwaysShowScrollbar
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               NewAlwaysShowScrollbar                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UScrollBox::SetAlwaysShowScrollbar(bool NewAlwaysShowScrollbar)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScrollBox", "SetAlwaysShowScrollbar");

	Params::UScrollBox_SetAlwaysShowScrollbar_Params Parms{};

	Parms.NewAlwaysShowScrollbar = NewAlwaysShowScrollbar;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.ScrollBox.SetAllowOverscroll
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               NewAllowOverscroll                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UScrollBox::SetAllowOverscroll(bool NewAllowOverscroll)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScrollBox", "SetAllowOverscroll");

	Params::UScrollBox_SetAllowOverscroll_Params Parms{};

	Parms.NewAllowOverscroll = NewAllowOverscroll;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.ScrollBox.ScrollWidgetIntoView
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                     WidgetToFind                                                     (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               AnimateScroll                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EDescendantScrollDestinationScrollDestination                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Padding                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UScrollBox::ScrollWidgetIntoView(class UWidget* WidgetToFind, bool AnimateScroll, enum class EDescendantScrollDestination ScrollDestination, float Padding)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScrollBox", "ScrollWidgetIntoView");

	Params::UScrollBox_ScrollWidgetIntoView_Params Parms{};

	Parms.WidgetToFind = WidgetToFind;
	Parms.AnimateScroll = AnimateScroll;
	Parms.ScrollDestination = ScrollDestination;
	Parms.Padding = Padding;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.ScrollBox.ScrollToStart
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UScrollBox::ScrollToStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScrollBox", "ScrollToStart");

	Params::UScrollBox_ScrollToStart_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.ScrollBox.ScrollToEnd
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UScrollBox::ScrollToEnd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScrollBox", "ScrollToEnd");

	Params::UScrollBox_ScrollToEnd_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.ScrollBox.GetViewOffsetFraction
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UScrollBox::GetViewOffsetFraction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScrollBox", "GetViewOffsetFraction");

	Params::UScrollBox_GetViewOffsetFraction_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.ScrollBox.GetViewFraction
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UScrollBox::GetViewFraction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScrollBox", "GetViewFraction");

	Params::UScrollBox_GetViewFraction_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.ScrollBox.GetScrollOffsetOfEnd
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UScrollBox::GetScrollOffsetOfEnd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScrollBox", "GetScrollOffsetOfEnd");

	Params::UScrollBox_GetScrollOffsetOfEnd_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.ScrollBox.GetScrollOffset
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UScrollBox::GetScrollOffset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScrollBox", "GetScrollOffset");

	Params::UScrollBox_GetScrollOffset_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.ScrollBox.EndInertialScrolling
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UScrollBox::EndInertialScrolling()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScrollBox", "EndInertialScrolling");

	Params::UScrollBox_EndInertialScrolling_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.Image.SetOpacity
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InOpacity                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UImage::SetOpacity(float InOpacity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Image", "SetOpacity");

	Params::UImage_SetOpacity_Params Parms{};

	Parms.InOpacity = InOpacity;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.Image.SetDesiredSizeOverride
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D                   DesiredSize                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UImage::SetDesiredSizeOverride(const struct FVector2D& DesiredSize)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Image", "SetDesiredSizeOverride");

	Params::UImage_SetDesiredSizeOverride_Params Parms{};

	Parms.DesiredSize = DesiredSize;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.Image.SetColorAndOpacity
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor                InColorAndOpacity                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UImage::SetColorAndOpacity(const struct FLinearColor& InColorAndOpacity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Image", "SetColorAndOpacity");

	Params::UImage_SetColorAndOpacity_Params Parms{};

	Parms.InColorAndOpacity = InColorAndOpacity;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.Image.SetBrushTintColor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FSlateColor                 TintColor                                                        (Parm, NativeAccessSpecifierPublic)

void UImage::SetBrushTintColor(const struct FSlateColor& TintColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Image", "SetBrushTintColor");

	Params::UImage_SetBrushTintColor_Params Parms{};

	Parms.TintColor = TintColor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.Image.SetBrushResourceObject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     ResourceObject                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UImage::SetBrushResourceObject(class UObject* ResourceObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Image", "SetBrushResourceObject");

	Params::UImage_SetBrushResourceObject_Params Parms{};

	Parms.ResourceObject = ResourceObject;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.Image.SetBrushFromTextureDynamic
// (Native, Public, BlueprintCallable)
// Parameters:
// class UTexture2DDynamic*           Texture                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bMatchSize                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UImage::SetBrushFromTextureDynamic(class UTexture2DDynamic* Texture, bool bMatchSize)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Image", "SetBrushFromTextureDynamic");

	Params::UImage_SetBrushFromTextureDynamic_Params Parms{};

	Parms.Texture = Texture;
	Parms.bMatchSize = bMatchSize;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.Image.SetBrushFromTexture
// (Native, Public, BlueprintCallable)
// Parameters:
// class UTexture2D*                  Texture                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bMatchSize                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UImage::SetBrushFromTexture(class UTexture2D* Texture, bool bMatchSize)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Image", "SetBrushFromTexture");

	Params::UImage_SetBrushFromTexture_Params Parms{};

	Parms.Texture = Texture;
	Parms.bMatchSize = bMatchSize;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.Image.SetBrushFromSoftTexture
// (Native, Public, BlueprintCallable)
// Parameters:
// TSoftObjectPtr<class UTexture2D>   SoftTexture                                                      (Parm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bMatchSize                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UImage::SetBrushFromSoftTexture(TSoftObjectPtr<class UTexture2D> SoftTexture, bool bMatchSize)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Image", "SetBrushFromSoftTexture");

	Params::UImage_SetBrushFromSoftTexture_Params Parms{};

	Parms.SoftTexture = SoftTexture;
	Parms.bMatchSize = bMatchSize;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.Image.SetBrushFromSoftMaterial
// (Native, Public, BlueprintCallable)
// Parameters:
// TSoftObjectPtr<class UMaterialInterface>SoftMaterial                                                     (Parm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UImage::SetBrushFromSoftMaterial(TSoftObjectPtr<class UMaterialInterface> SoftMaterial)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Image", "SetBrushFromSoftMaterial");

	Params::UImage_SetBrushFromSoftMaterial_Params Parms{};

	Parms.SoftMaterial = SoftMaterial;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.Image.SetBrushFromMaterial
// (Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialInterface*          Material                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UImage::SetBrushFromMaterial(class UMaterialInterface* Material)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Image", "SetBrushFromMaterial");

	Params::UImage_SetBrushFromMaterial_Params Parms{};

	Parms.Material = Material;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.Image.SetBrushFromAtlasInterface
// (Native, Public, BlueprintCallable)
// Parameters:
// TScriptInterface<class ISlateTextureAtlasInterface>AtlasRegion                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bMatchSize                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UImage::SetBrushFromAtlasInterface(TScriptInterface<class ISlateTextureAtlasInterface> AtlasRegion, bool bMatchSize)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Image", "SetBrushFromAtlasInterface");

	Params::UImage_SetBrushFromAtlasInterface_Params Parms{};

	Parms.AtlasRegion = AtlasRegion;
	Parms.bMatchSize = bMatchSize;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.Image.SetBrushFromAsset
// (Native, Public, BlueprintCallable)
// Parameters:
// class USlateBrushAsset*            Asset                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UImage::SetBrushFromAsset(class USlateBrushAsset* Asset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Image", "SetBrushFromAsset");

	Params::UImage_SetBrushFromAsset_Params Parms{};

	Parms.Asset = Asset;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.Image.SetBrush
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSlateBrush                 InBrush                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UImage::SetBrush(struct FSlateBrush& InBrush)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Image", "SetBrush");

	Params::UImage_SetBrush_Params Parms{};

	Parms.InBrush = InBrush;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.Image.GetDynamicMaterial
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialInstanceDynamic*    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMaterialInstanceDynamic* UImage::GetDynamicMaterial()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Image", "GetDynamicMaterial");

	Params::UImage_GetDynamicMaterial_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.ListViewBase.SetWheelScrollMultiplier
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              NewWheelScrollMultiplier                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UListViewBase::SetWheelScrollMultiplier(float NewWheelScrollMultiplier)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ListViewBase", "SetWheelScrollMultiplier");

	Params::UListViewBase_SetWheelScrollMultiplier_Params Parms{};

	Parms.NewWheelScrollMultiplier = NewWheelScrollMultiplier;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.ListViewBase.SetScrollOffset
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InScrollOffset                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UListViewBase::SetScrollOffset(float InScrollOffset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ListViewBase", "SetScrollOffset");

	Params::UListViewBase_SetScrollOffset_Params Parms{};

	Parms.InScrollOffset = InScrollOffset;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.ListViewBase.SetScrollBarVisibility
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ESlateVisibility        InVisibility                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UListViewBase::SetScrollBarVisibility(enum class ESlateVisibility InVisibility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ListViewBase", "SetScrollBarVisibility");

	Params::UListViewBase_SetScrollBarVisibility_Params Parms{};

	Parms.InVisibility = InVisibility;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.ListViewBase.ScrollToTop
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UListViewBase::ScrollToTop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ListViewBase", "ScrollToTop");

	Params::UListViewBase_ScrollToTop_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.ListViewBase.ScrollToBottom
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UListViewBase::ScrollToBottom()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ListViewBase", "ScrollToBottom");

	Params::UListViewBase_ScrollToBottom_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.ListViewBase.RequestRefresh
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UListViewBase::RequestRefresh()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ListViewBase", "RequestRefresh");

	Params::UListViewBase_RequestRefresh_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.ListViewBase.RegenerateAllEntries
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UListViewBase::RegenerateAllEntries()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ListViewBase", "RegenerateAllEntries");

	Params::UListViewBase_RegenerateAllEntries_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.ListViewBase.GetScrollOffset
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UListViewBase::GetScrollOffset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ListViewBase", "GetScrollOffset");

	Params::UListViewBase_GetScrollOffset_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.ListViewBase.GetDisplayedEntryWidgets
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UUserWidget*>         ReturnValue                                                      (ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

TArray<class UUserWidget*> UListViewBase::GetDisplayedEntryWidgets()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ListViewBase", "GetDisplayedEntryWidgets");

	Params::UListViewBase_GetDisplayedEntryWidgets_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.ListView.SetSelectionMode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ESelectionMode          SelectionMode                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UListView::SetSelectionMode(enum class ESelectionMode SelectionMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ListView", "SetSelectionMode");

	Params::UListView_SetSelectionMode_Params Parms{};

	Parms.SelectionMode = SelectionMode;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.ListView.SetSelectedIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UListView::SetSelectedIndex(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ListView", "SetSelectedIndex");

	Params::UListView_SetSelectedIndex_Params Parms{};

	Parms.Index = Index;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.ListView.ScrollIndexIntoView
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UListView::ScrollIndexIntoView(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ListView", "ScrollIndexIntoView");

	Params::UListView_ScrollIndexIntoView_Params Parms{};

	Parms.Index = Index;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.ListView.RemoveItem
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     Item                                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UListView::RemoveItem(class UObject* Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ListView", "RemoveItem");

	Params::UListView_RemoveItem_Params Parms{};

	Parms.Item = Item;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.ListView.OnListItemOuterEndPlayed
// (Final, Native, Protected)
// Parameters:
// class AActor*                      ItemOuter                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EEndPlayReason          EndPlayReason                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UListView::OnListItemOuterEndPlayed(class AActor* ItemOuter, enum class EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ListView", "OnListItemOuterEndPlayed");

	Params::UListView_OnListItemOuterEndPlayed_Params Parms{};

	Parms.ItemOuter = ItemOuter;
	Parms.EndPlayReason = EndPlayReason;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.ListView.OnListItemEndPlayed
// (Final, Native, Protected)
// Parameters:
// class AActor*                      Item                                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EEndPlayReason          EndPlayReason                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UListView::OnListItemEndPlayed(class AActor* Item, enum class EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ListView", "OnListItemEndPlayed");

	Params::UListView_OnListItemEndPlayed_Params Parms{};

	Parms.Item = Item;
	Parms.EndPlayReason = EndPlayReason;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.ListView.NavigateToIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UListView::NavigateToIndex(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ListView", "NavigateToIndex");

	Params::UListView_NavigateToIndex_Params Parms{};

	Parms.Index = Index;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.ListView.IsRefreshPending
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UListView::IsRefreshPending()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ListView", "IsRefreshPending");

	Params::UListView_IsRefreshPending_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.ListView.GetNumItems
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UListView::GetNumItems()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ListView", "GetNumItems");

	Params::UListView_GetNumItems_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.ListView.GetListItems
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UObject*>             ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

TArray<class UObject*> UListView::GetListItems()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ListView", "GetListItems");

	Params::UListView_GetListItems_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.ListView.GetItemAt
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UObject* UListView::GetItemAt(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ListView", "GetItemAt");

	Params::UListView_GetItemAt_Params Parms{};

	Parms.Index = Index;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.ListView.GetIndexForItem
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UObject*                     Item                                                             (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UListView::GetIndexForItem(class UObject* Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ListView", "GetIndexForItem");

	Params::UListView_GetIndexForItem_Params Parms{};

	Parms.Item = Item;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.ListView.ClearListItems
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UListView::ClearListItems()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ListView", "ClearListItems");

	Params::UListView_ClearListItems_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.ListView.BP_SetSelectedItem
// (Final, Native, Private, BlueprintCallable)
// Parameters:
// class UObject*                     Item                                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UListView::BP_SetSelectedItem(class UObject* Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ListView", "BP_SetSelectedItem");

	Params::UListView_BP_SetSelectedItem_Params Parms{};

	Parms.Item = Item;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.ListView.BP_SetListItems
// (Final, Native, Private, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class UObject*>             InListItems                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UListView::BP_SetListItems(TArray<class UObject*>& InListItems)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ListView", "BP_SetListItems");

	Params::UListView_BP_SetListItems_Params Parms{};

	Parms.InListItems = InListItems;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.ListView.BP_SetItemSelection
// (Final, Native, Private, BlueprintCallable)
// Parameters:
// class UObject*                     Item                                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bSelected                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UListView::BP_SetItemSelection(class UObject* Item, bool bSelected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ListView", "BP_SetItemSelection");

	Params::UListView_BP_SetItemSelection_Params Parms{};

	Parms.Item = Item;
	Parms.bSelected = bSelected;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.ListView.BP_ScrollItemIntoView
// (Final, Native, Private, BlueprintCallable)
// Parameters:
// class UObject*                     Item                                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UListView::BP_ScrollItemIntoView(class UObject* Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ListView", "BP_ScrollItemIntoView");

	Params::UListView_BP_ScrollItemIntoView_Params Parms{};

	Parms.Item = Item;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.ListView.BP_NavigateToItem
// (Final, Native, Private, BlueprintCallable)
// Parameters:
// class UObject*                     Item                                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UListView::BP_NavigateToItem(class UObject* Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ListView", "BP_NavigateToItem");

	Params::UListView_BP_NavigateToItem_Params Parms{};

	Parms.Item = Item;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.ListView.BP_IsItemVisible
// (Final, Native, Private, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UObject*                     Item                                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UListView::BP_IsItemVisible(class UObject* Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ListView", "BP_IsItemVisible");

	Params::UListView_BP_IsItemVisible_Params Parms{};

	Parms.Item = Item;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.ListView.BP_GetSelectedItems
// (Final, Native, Private, HasOutParams, BlueprintCallable, Const)
// Parameters:
// TArray<class UObject*>             Items                                                            (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UListView::BP_GetSelectedItems(TArray<class UObject*>* Items)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ListView", "BP_GetSelectedItems");

	Params::UListView_BP_GetSelectedItems_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (Items != nullptr)
		*Items = Parms.Items;

	return Parms.ReturnValue;

}


// Function UMG.ListView.BP_GetSelectedItem
// (Final, Native, Private, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UObject*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UObject* UListView::BP_GetSelectedItem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ListView", "BP_GetSelectedItem");

	Params::UListView_BP_GetSelectedItem_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.ListView.BP_GetNumItemsSelected
// (Final, Native, Private, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UListView::BP_GetNumItemsSelected()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ListView", "BP_GetNumItemsSelected");

	Params::UListView_BP_GetNumItemsSelected_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.ListView.BP_ClearSelection
// (Final, Native, Private, BlueprintCallable)
// Parameters:

void UListView::BP_ClearSelection()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ListView", "BP_ClearSelection");

	Params::UListView_BP_ClearSelection_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.ListView.BP_CancelScrollIntoView
// (Final, Native, Private, BlueprintCallable)
// Parameters:

void UListView::BP_CancelScrollIntoView()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ListView", "BP_CancelScrollIntoView");

	Params::UListView_BP_CancelScrollIntoView_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.ListView.AddItem
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     Item                                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UListView::AddItem(class UObject* Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ListView", "AddItem");

	Params::UListView_AddItem_Params Parms{};

	Parms.Item = Item;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.RichTextBlock.SetTextTransformPolicy
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ETextTransformPolicy    InTransformPolicy                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URichTextBlock::SetTextTransformPolicy(enum class ETextTransformPolicy InTransformPolicy)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RichTextBlock", "SetTextTransformPolicy");

	Params::URichTextBlock_SetTextTransformPolicy_Params Parms{};

	Parms.InTransformPolicy = InTransformPolicy;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.RichTextBlock.SetTextStyleSet
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UDataTable*                  NewTextStyleSet                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URichTextBlock::SetTextStyleSet(class UDataTable* NewTextStyleSet)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RichTextBlock", "SetTextStyleSet");

	Params::URichTextBlock_SetTextStyleSet_Params Parms{};

	Parms.NewTextStyleSet = NewTextStyleSet;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.RichTextBlock.SetTextOverflowPolicy
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ETextOverflowPolicy     InOverflowPolicy                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URichTextBlock::SetTextOverflowPolicy(enum class ETextOverflowPolicy InOverflowPolicy)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RichTextBlock", "SetTextOverflowPolicy");

	Params::URichTextBlock_SetTextOverflowPolicy_Params Parms{};

	Parms.InOverflowPolicy = InOverflowPolicy;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.RichTextBlock.SetText
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FText                        InText                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void URichTextBlock::SetText(class FText& InText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RichTextBlock", "SetText");

	Params::URichTextBlock_SetText_Params Parms{};

	Parms.InText = InText;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.RichTextBlock.SetMinDesiredWidth
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InMinDesiredWidth                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URichTextBlock::SetMinDesiredWidth(float InMinDesiredWidth)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RichTextBlock", "SetMinDesiredWidth");

	Params::URichTextBlock_SetMinDesiredWidth_Params Parms{};

	Parms.InMinDesiredWidth = InMinDesiredWidth;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.RichTextBlock.SetDefaultTextStyle
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTextBlockStyle             InDefaultTextStyle                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void URichTextBlock::SetDefaultTextStyle(struct FTextBlockStyle& InDefaultTextStyle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RichTextBlock", "SetDefaultTextStyle");

	Params::URichTextBlock_SetDefaultTextStyle_Params Parms{};

	Parms.InDefaultTextStyle = InDefaultTextStyle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.RichTextBlock.SetDefaultStrikeBrush
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSlateBrush                 InStrikeBrush                                                    (Parm, OutParm, NativeAccessSpecifierPublic)

void URichTextBlock::SetDefaultStrikeBrush(struct FSlateBrush* InStrikeBrush)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RichTextBlock", "SetDefaultStrikeBrush");

	Params::URichTextBlock_SetDefaultStrikeBrush_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (InStrikeBrush != nullptr)
		*InStrikeBrush = Parms.InStrikeBrush;

}


// Function UMG.RichTextBlock.SetDefaultShadowOffset
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D                   InShadowOffset                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URichTextBlock::SetDefaultShadowOffset(const struct FVector2D& InShadowOffset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RichTextBlock", "SetDefaultShadowOffset");

	Params::URichTextBlock_SetDefaultShadowOffset_Params Parms{};

	Parms.InShadowOffset = InShadowOffset;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.RichTextBlock.SetDefaultShadowColorAndOpacity
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor                InShadowColorAndOpacity                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URichTextBlock::SetDefaultShadowColorAndOpacity(const struct FLinearColor& InShadowColorAndOpacity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RichTextBlock", "SetDefaultShadowColorAndOpacity");

	Params::URichTextBlock_SetDefaultShadowColorAndOpacity_Params Parms{};

	Parms.InShadowColorAndOpacity = InShadowColorAndOpacity;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.RichTextBlock.SetDefaultMaterial
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialInterface*          InMaterial                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URichTextBlock::SetDefaultMaterial(class UMaterialInterface* InMaterial)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RichTextBlock", "SetDefaultMaterial");

	Params::URichTextBlock_SetDefaultMaterial_Params Parms{};

	Parms.InMaterial = InMaterial;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.RichTextBlock.SetDefaultFont
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FSlateFontInfo              InFontInfo                                                       (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URichTextBlock::SetDefaultFont(const struct FSlateFontInfo& InFontInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RichTextBlock", "SetDefaultFont");

	Params::URichTextBlock_SetDefaultFont_Params Parms{};

	Parms.InFontInfo = InFontInfo;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.RichTextBlock.SetDefaultColorAndOpacity
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FSlateColor                 InColorAndOpacity                                                (Parm, NativeAccessSpecifierPublic)

void URichTextBlock::SetDefaultColorAndOpacity(const struct FSlateColor& InColorAndOpacity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RichTextBlock", "SetDefaultColorAndOpacity");

	Params::URichTextBlock_SetDefaultColorAndOpacity_Params Parms{};

	Parms.InColorAndOpacity = InColorAndOpacity;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.RichTextBlock.SetDecorators
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<TSubclassOf<class URichTextBlockDecorator>>InDecoratorClasses                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, UObjectWrapper, NativeAccessSpecifierPublic)

void URichTextBlock::SetDecorators(TArray<TSubclassOf<class URichTextBlockDecorator>>& InDecoratorClasses)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RichTextBlock", "SetDecorators");

	Params::URichTextBlock_SetDecorators_Params Parms{};

	Parms.InDecoratorClasses = InDecoratorClasses;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.RichTextBlock.SetAutoWrapText
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               InAutoTextWrap                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URichTextBlock::SetAutoWrapText(bool InAutoTextWrap)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RichTextBlock", "SetAutoWrapText");

	Params::URichTextBlock_SetAutoWrapText_Params Parms{};

	Parms.InAutoTextWrap = InAutoTextWrap;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.RichTextBlock.RefreshTextLayout
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void URichTextBlock::RefreshTextLayout()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RichTextBlock", "RefreshTextLayout");

	Params::URichTextBlock_RefreshTextLayout_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.RichTextBlock.GetTextStyleSet
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UDataTable*                  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDataTable* URichTextBlock::GetTextStyleSet()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RichTextBlock", "GetTextStyleSet");

	Params::URichTextBlock_GetTextStyleSet_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.RichTextBlock.GetText
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText URichTextBlock::GetText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RichTextBlock", "GetText");

	Params::URichTextBlock_GetText_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.RichTextBlock.GetDefaultDynamicMaterial
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialInstanceDynamic*    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMaterialInstanceDynamic* URichTextBlock::GetDefaultDynamicMaterial()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RichTextBlock", "GetDefaultDynamicMaterial");

	Params::URichTextBlock_GetDefaultDynamicMaterial_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.RichTextBlock.GetDecoratorByClass
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TSubclassOf<class URichTextBlockDecorator>DecoratorClass                                                   (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class URichTextBlockDecorator*     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class URichTextBlockDecorator* URichTextBlock::GetDecoratorByClass(TSubclassOf<class URichTextBlockDecorator> DecoratorClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RichTextBlock", "GetDecoratorByClass");

	Params::URichTextBlock_GetDecoratorByClass_Params Parms{};

	Parms.DecoratorClass = DecoratorClass;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.RichTextBlock.ClearAllDefaultStyleOverrides
// (Final, Native, Public)
// Parameters:

void URichTextBlock::ClearAllDefaultStyleOverrides()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RichTextBlock", "ClearAllDefaultStyleOverrides");

	Params::URichTextBlock_ClearAllDefaultStyleOverrides_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.TileView.SetEntryWidth
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              NewWidth                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTileView::SetEntryWidth(float NewWidth)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TileView", "SetEntryWidth");

	Params::UTileView_SetEntryWidth_Params Parms{};

	Parms.NewWidth = NewWidth;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.TileView.SetEntryHeight
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              NewHeight                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTileView::SetEntryHeight(float NewHeight)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TileView", "SetEntryHeight");

	Params::UTileView_SetEntryHeight_Params Parms{};

	Parms.NewHeight = NewHeight;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.TileView.GetEntryWidth
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UTileView::GetEntryWidth()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TileView", "GetEntryWidth");

	Params::UTileView_GetEntryWidth_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.TileView.GetEntryHeight
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UTileView::GetEntryHeight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TileView", "GetEntryHeight");

	Params::UTileView_GetEntryHeight_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.TreeView.SetItemExpansion
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     Item                                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bExpandItem                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTreeView::SetItemExpansion(class UObject* Item, bool bExpandItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TreeView", "SetItemExpansion");

	Params::UTreeView_SetItemExpansion_Params Parms{};

	Parms.Item = Item;
	Parms.bExpandItem = bExpandItem;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.TreeView.ExpandAll
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UTreeView::ExpandAll()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TreeView", "ExpandAll");

	Params::UTreeView_ExpandAll_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.TreeView.CollapseAll
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UTreeView::CollapseAll()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TreeView", "CollapseAll");

	Params::UTreeView_CollapseAll_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.Overlay.AddChildToOverlay
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                     Content                                                          (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOverlaySlot*                ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOverlaySlot* UOverlay::AddChildToOverlay(class UWidget* Content)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Overlay", "AddChildToOverlay");

	Params::UOverlay_AddChildToOverlay_Params Parms{};

	Parms.Content = Content;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.SizeBox.SetWidthOverride
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InWidthOverride                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USizeBox::SetWidthOverride(float InWidthOverride)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SizeBox", "SetWidthOverride");

	Params::USizeBox_SetWidthOverride_Params Parms{};

	Parms.InWidthOverride = InWidthOverride;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.SizeBox.SetMinDesiredWidth
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InMinDesiredWidth                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USizeBox::SetMinDesiredWidth(float InMinDesiredWidth)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SizeBox", "SetMinDesiredWidth");

	Params::USizeBox_SetMinDesiredWidth_Params Parms{};

	Parms.InMinDesiredWidth = InMinDesiredWidth;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.SizeBox.SetMinDesiredHeight
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InMinDesiredHeight                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USizeBox::SetMinDesiredHeight(float InMinDesiredHeight)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SizeBox", "SetMinDesiredHeight");

	Params::USizeBox_SetMinDesiredHeight_Params Parms{};

	Parms.InMinDesiredHeight = InMinDesiredHeight;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.SizeBox.SetMinAspectRatio
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InMinAspectRatio                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USizeBox::SetMinAspectRatio(float InMinAspectRatio)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SizeBox", "SetMinAspectRatio");

	Params::USizeBox_SetMinAspectRatio_Params Parms{};

	Parms.InMinAspectRatio = InMinAspectRatio;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.SizeBox.SetMaxDesiredWidth
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InMaxDesiredWidth                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USizeBox::SetMaxDesiredWidth(float InMaxDesiredWidth)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SizeBox", "SetMaxDesiredWidth");

	Params::USizeBox_SetMaxDesiredWidth_Params Parms{};

	Parms.InMaxDesiredWidth = InMaxDesiredWidth;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.SizeBox.SetMaxDesiredHeight
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InMaxDesiredHeight                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USizeBox::SetMaxDesiredHeight(float InMaxDesiredHeight)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SizeBox", "SetMaxDesiredHeight");

	Params::USizeBox_SetMaxDesiredHeight_Params Parms{};

	Parms.InMaxDesiredHeight = InMaxDesiredHeight;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.SizeBox.SetMaxAspectRatio
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InMaxAspectRatio                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USizeBox::SetMaxAspectRatio(float InMaxAspectRatio)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SizeBox", "SetMaxAspectRatio");

	Params::USizeBox_SetMaxAspectRatio_Params Parms{};

	Parms.InMaxAspectRatio = InMaxAspectRatio;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.SizeBox.SetHeightOverride
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InHeightOverride                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USizeBox::SetHeightOverride(float InHeightOverride)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SizeBox", "SetHeightOverride");

	Params::USizeBox_SetHeightOverride_Params Parms{};

	Parms.InHeightOverride = InHeightOverride;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.SizeBox.ClearWidthOverride
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USizeBox::ClearWidthOverride()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SizeBox", "ClearWidthOverride");

	Params::USizeBox_ClearWidthOverride_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.SizeBox.ClearMinDesiredWidth
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USizeBox::ClearMinDesiredWidth()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SizeBox", "ClearMinDesiredWidth");

	Params::USizeBox_ClearMinDesiredWidth_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.SizeBox.ClearMinDesiredHeight
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USizeBox::ClearMinDesiredHeight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SizeBox", "ClearMinDesiredHeight");

	Params::USizeBox_ClearMinDesiredHeight_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.SizeBox.ClearMinAspectRatio
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USizeBox::ClearMinAspectRatio()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SizeBox", "ClearMinAspectRatio");

	Params::USizeBox_ClearMinAspectRatio_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.SizeBox.ClearMaxDesiredWidth
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USizeBox::ClearMaxDesiredWidth()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SizeBox", "ClearMaxDesiredWidth");

	Params::USizeBox_ClearMaxDesiredWidth_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.SizeBox.ClearMaxDesiredHeight
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USizeBox::ClearMaxDesiredHeight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SizeBox", "ClearMaxDesiredHeight");

	Params::USizeBox_ClearMaxDesiredHeight_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.SizeBox.ClearMaxAspectRatio
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USizeBox::ClearMaxAspectRatio()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SizeBox", "ClearMaxAspectRatio");

	Params::USizeBox_ClearMaxAspectRatio_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.SizeBox.ClearHeightOverride
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USizeBox::ClearHeightOverride()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SizeBox", "ClearHeightOverride");

	Params::USizeBox_ClearHeightOverride_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.DynamicEntryBoxBase.SetRadialSettings
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FRadialBoxSettings          InSettings                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UDynamicEntryBoxBase::SetRadialSettings(struct FRadialBoxSettings& InSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DynamicEntryBoxBase", "SetRadialSettings");

	Params::UDynamicEntryBoxBase_SetRadialSettings_Params Parms{};

	Parms.InSettings = InSettings;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.DynamicEntryBoxBase.SetEntrySpacing
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D                   InEntrySpacing                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDynamicEntryBoxBase::SetEntrySpacing(struct FVector2D& InEntrySpacing)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DynamicEntryBoxBase", "SetEntrySpacing");

	Params::UDynamicEntryBoxBase_SetEntrySpacing_Params Parms{};

	Parms.InEntrySpacing = InEntrySpacing;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.DynamicEntryBoxBase.GetNumEntries
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UDynamicEntryBoxBase::GetNumEntries()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DynamicEntryBoxBase", "GetNumEntries");

	Params::UDynamicEntryBoxBase_GetNumEntries_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.DynamicEntryBoxBase.GetAllEntries
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UUserWidget*>         ReturnValue                                                      (ConstParm, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

TArray<class UUserWidget*> UDynamicEntryBoxBase::GetAllEntries()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DynamicEntryBoxBase", "GetAllEntries");

	Params::UDynamicEntryBoxBase_GetAllEntries_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.CheckBox.SetTouchMethod
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EButtonTouchMethod      InTouchMethod                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCheckBox::SetTouchMethod(enum class EButtonTouchMethod InTouchMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheckBox", "SetTouchMethod");

	Params::UCheckBox_SetTouchMethod_Params Parms{};

	Parms.InTouchMethod = InTouchMethod;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.CheckBox.SetPressMethod
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EButtonPressMethod      InPressMethod                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCheckBox::SetPressMethod(enum class EButtonPressMethod InPressMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheckBox", "SetPressMethod");

	Params::UCheckBox_SetPressMethod_Params Parms{};

	Parms.InPressMethod = InPressMethod;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.CheckBox.SetIsChecked
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               InIsChecked                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCheckBox::SetIsChecked(bool InIsChecked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheckBox", "SetIsChecked");

	Params::UCheckBox_SetIsChecked_Params Parms{};

	Parms.InIsChecked = InIsChecked;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.CheckBox.SetClickMethod
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EButtonClickMethod      InClickMethod                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCheckBox::SetClickMethod(enum class EButtonClickMethod InClickMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheckBox", "SetClickMethod");

	Params::UCheckBox_SetClickMethod_Params Parms{};

	Parms.InClickMethod = InClickMethod;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.CheckBox.SetCheckedState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ECheckBoxState          InCheckedState                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCheckBox::SetCheckedState(enum class ECheckBoxState InCheckedState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheckBox", "SetCheckedState");

	Params::UCheckBox_SetCheckedState_Params Parms{};

	Parms.InCheckedState = InCheckedState;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.CheckBox.IsPressed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCheckBox::IsPressed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheckBox", "IsPressed");

	Params::UCheckBox_IsPressed_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.CheckBox.IsChecked
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCheckBox::IsChecked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheckBox", "IsChecked");

	Params::UCheckBox_IsChecked_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.CheckBox.GetCheckedState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ECheckBoxState          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ECheckBoxState UCheckBox::GetCheckedState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheckBox", "GetCheckedState");

	Params::UCheckBox_GetCheckedState_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.HorizontalBox.AddChildToHorizontalBox
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                     Content                                                          (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UHorizontalBoxSlot*          ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UHorizontalBoxSlot* UHorizontalBox::AddChildToHorizontalBox(class UWidget* Content)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HorizontalBox", "AddChildToHorizontalBox");

	Params::UHorizontalBox_AddChildToHorizontalBox_Params Parms{};

	Parms.Content = Content;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.DragDropOperation.Drop
// (Native, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FPointerEvent               PointerEvent                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UDragDropOperation::Drop(struct FPointerEvent& PointerEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DragDropOperation", "Drop");

	Params::UDragDropOperation_Drop_Params Parms{};

	Parms.PointerEvent = PointerEvent;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.DragDropOperation.Dragged
// (Native, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FPointerEvent               PointerEvent                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UDragDropOperation::Dragged(struct FPointerEvent& PointerEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DragDropOperation", "Dragged");

	Params::UDragDropOperation_Dragged_Params Parms{};

	Parms.PointerEvent = PointerEvent;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.DragDropOperation.DragCancelled
// (Native, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FPointerEvent               PointerEvent                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UDragDropOperation::DragCancelled(struct FPointerEvent& PointerEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DragDropOperation", "DragCancelled");

	Params::UDragDropOperation_DragCancelled_Params Parms{};

	Parms.PointerEvent = PointerEvent;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.EditableTextBox.SetTextOverflowPolicy
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ETextOverflowPolicy     InOverflowPolicy                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEditableTextBox::SetTextOverflowPolicy(enum class ETextOverflowPolicy InOverflowPolicy)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditableTextBox", "SetTextOverflowPolicy");

	Params::UEditableTextBox_SetTextOverflowPolicy_Params Parms{};

	Parms.InOverflowPolicy = InOverflowPolicy;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.EditableTextBox.SetText
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FText                        InText                                                           (Parm, NativeAccessSpecifierPublic)

void UEditableTextBox::SetText(class FText InText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditableTextBox", "SetText");

	Params::UEditableTextBox_SetText_Params Parms{};

	Parms.InText = InText;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.EditableTextBox.SetJustification
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ETextJustify            InJustification                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEditableTextBox::SetJustification(enum class ETextJustify InJustification)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditableTextBox", "SetJustification");

	Params::UEditableTextBox_SetJustification_Params Parms{};

	Parms.InJustification = InJustification;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.EditableTextBox.SetIsReadOnly
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bReadOnly                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEditableTextBox::SetIsReadOnly(bool bReadOnly)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditableTextBox", "SetIsReadOnly");

	Params::UEditableTextBox_SetIsReadOnly_Params Parms{};

	Parms.bReadOnly = bReadOnly;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.EditableTextBox.SetIsPassword
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bIsPassword                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEditableTextBox::SetIsPassword(bool bIsPassword)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditableTextBox", "SetIsPassword");

	Params::UEditableTextBox_SetIsPassword_Params Parms{};

	Parms.bIsPassword = bIsPassword;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.EditableTextBox.SetHintText
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FText                        InText                                                           (Parm, NativeAccessSpecifierPublic)

void UEditableTextBox::SetHintText(class FText InText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditableTextBox", "SetHintText");

	Params::UEditableTextBox_SetHintText_Params Parms{};

	Parms.InText = InText;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.EditableTextBox.SetForegroundColor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor                Color                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEditableTextBox::SetForegroundColor(const struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditableTextBox", "SetForegroundColor");

	Params::UEditableTextBox_SetForegroundColor_Params Parms{};

	Parms.Color = Color;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.EditableTextBox.SetError
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FText                        InError                                                          (Parm, NativeAccessSpecifierPublic)

void UEditableTextBox::SetError(class FText InError)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditableTextBox", "SetError");

	Params::UEditableTextBox_SetError_Params Parms{};

	Parms.InError = InError;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// DelegateFunction UMG.EditableTextBox.OnEditableTextBoxCommittedEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams)
// Parameters:
// class FText                        Text                                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// enum class ETextCommit             CommitMethod                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEditableTextBox::OnEditableTextBoxCommittedEvent__DelegateSignature(class FText& Text, enum class ETextCommit CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditableTextBox", "OnEditableTextBoxCommittedEvent__DelegateSignature");

	Params::UEditableTextBox_OnEditableTextBoxCommittedEvent__DelegateSignature_Params Parms{};

	Parms.Text = Text;
	Parms.CommitMethod = CommitMethod;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction UMG.EditableTextBox.OnEditableTextBoxChangedEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams)
// Parameters:
// class FText                        Text                                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UEditableTextBox::OnEditableTextBoxChangedEvent__DelegateSignature(class FText& Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditableTextBox", "OnEditableTextBoxChangedEvent__DelegateSignature");

	Params::UEditableTextBox_OnEditableTextBoxChangedEvent__DelegateSignature_Params Parms{};

	Parms.Text = Text;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG.EditableTextBox.HasError
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UEditableTextBox::HasError()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditableTextBox", "HasError");

	Params::UEditableTextBox_HasError_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.EditableTextBox.GetText
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText UEditableTextBox::GetText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditableTextBox", "GetText");

	Params::UEditableTextBox_GetText_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.EditableTextBox.ClearError
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UEditableTextBox::ClearError()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditableTextBox", "ClearError");

	Params::UEditableTextBox_ClearError_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.EditableText.SetTextOverflowPolicy
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ETextOverflowPolicy     InOverflowPolicy                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEditableText::SetTextOverflowPolicy(enum class ETextOverflowPolicy InOverflowPolicy)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditableText", "SetTextOverflowPolicy");

	Params::UEditableText_SetTextOverflowPolicy_Params Parms{};

	Parms.InOverflowPolicy = InOverflowPolicy;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.EditableText.SetText
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FText                        InText                                                           (Parm, NativeAccessSpecifierPublic)

void UEditableText::SetText(class FText InText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditableText", "SetText");

	Params::UEditableText_SetText_Params Parms{};

	Parms.InText = InText;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.EditableText.SetMinimumDesiredWidth
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InMinDesiredWidth                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEditableText::SetMinimumDesiredWidth(float InMinDesiredWidth)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditableText", "SetMinimumDesiredWidth");

	Params::UEditableText_SetMinimumDesiredWidth_Params Parms{};

	Parms.InMinDesiredWidth = InMinDesiredWidth;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.EditableText.SetJustification
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ETextJustify            InJustification                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEditableText::SetJustification(enum class ETextJustify InJustification)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditableText", "SetJustification");

	Params::UEditableText_SetJustification_Params Parms{};

	Parms.InJustification = InJustification;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.EditableText.SetIsReadOnly
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               InbIsReadyOnly                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEditableText::SetIsReadOnly(bool InbIsReadyOnly)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditableText", "SetIsReadOnly");

	Params::UEditableText_SetIsReadOnly_Params Parms{};

	Parms.InbIsReadyOnly = InbIsReadyOnly;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.EditableText.SetIsPassword
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               InbIsPassword                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEditableText::SetIsPassword(bool InbIsPassword)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditableText", "SetIsPassword");

	Params::UEditableText_SetIsPassword_Params Parms{};

	Parms.InbIsPassword = InbIsPassword;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.EditableText.SetHintText
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FText                        InHintText                                                       (Parm, NativeAccessSpecifierPublic)

void UEditableText::SetHintText(class FText InHintText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditableText", "SetHintText");

	Params::UEditableText_SetHintText_Params Parms{};

	Parms.InHintText = InHintText;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.EditableText.SetFontOutlineMaterial
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialInterface*          InMaterial                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEditableText::SetFontOutlineMaterial(class UMaterialInterface* InMaterial)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditableText", "SetFontOutlineMaterial");

	Params::UEditableText_SetFontOutlineMaterial_Params Parms{};

	Parms.InMaterial = InMaterial;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.EditableText.SetFontMaterial
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialInterface*          InMaterial                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEditableText::SetFontMaterial(class UMaterialInterface* InMaterial)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditableText", "SetFontMaterial");

	Params::UEditableText_SetFontMaterial_Params Parms{};

	Parms.InMaterial = InMaterial;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.EditableText.SetFont
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FSlateFontInfo              InFontInfo                                                       (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEditableText::SetFont(const struct FSlateFontInfo& InFontInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditableText", "SetFont");

	Params::UEditableText_SetFont_Params Parms{};

	Parms.InFontInfo = InFontInfo;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// DelegateFunction UMG.EditableText.OnEditableTextCommittedEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams)
// Parameters:
// class FText                        Text                                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// enum class ETextCommit             CommitMethod                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEditableText::OnEditableTextCommittedEvent__DelegateSignature(class FText& Text, enum class ETextCommit CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditableText", "OnEditableTextCommittedEvent__DelegateSignature");

	Params::UEditableText_OnEditableTextCommittedEvent__DelegateSignature_Params Parms{};

	Parms.Text = Text;
	Parms.CommitMethod = CommitMethod;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction UMG.EditableText.OnEditableTextChangedEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams)
// Parameters:
// class FText                        Text                                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UEditableText::OnEditableTextChangedEvent__DelegateSignature(class FText& Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditableText", "OnEditableTextChangedEvent__DelegateSignature");

	Params::UEditableText_OnEditableTextChangedEvent__DelegateSignature_Params Parms{};

	Parms.Text = Text;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG.EditableText.GetText
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText UEditableText::GetText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditableText", "GetText");

	Params::UEditableText_GetText_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.EditableText.GetJustification
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ETextJustify            ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ETextJustify UEditableText::GetJustification()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditableText", "GetJustification");

	Params::UEditableText_GetJustification_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.EditableText.GetHintText
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText UEditableText::GetHintText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditableText", "GetHintText");

	Params::UEditableText_GetHintText_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.EditableText.GetFont
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FSlateFontInfo              ReturnValue                                                      (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSlateFontInfo UEditableText::GetFont()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EditableText", "GetFont");

	Params::UEditableText_GetFont_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.ExpandableArea.SetIsExpanded_Animated
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               IsExpanded                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UExpandableArea::SetIsExpanded_Animated(bool IsExpanded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ExpandableArea", "SetIsExpanded_Animated");

	Params::UExpandableArea_SetIsExpanded_Animated_Params Parms{};

	Parms.IsExpanded = IsExpanded;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.ExpandableArea.SetIsExpanded
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               IsExpanded                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UExpandableArea::SetIsExpanded(bool IsExpanded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ExpandableArea", "SetIsExpanded");

	Params::UExpandableArea_SetIsExpanded_Params Parms{};

	Parms.IsExpanded = IsExpanded;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.ExpandableArea.GetIsExpanded
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UExpandableArea::GetIsExpanded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ExpandableArea", "GetIsExpanded");

	Params::UExpandableArea_GetIsExpanded_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.MultiLineEditableTextBox.SetTextStyle
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTextBlockStyle             InTextStyle                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UMultiLineEditableTextBox::SetTextStyle(struct FTextBlockStyle& InTextStyle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiLineEditableTextBox", "SetTextStyle");

	Params::UMultiLineEditableTextBox_SetTextStyle_Params Parms{};

	Parms.InTextStyle = InTextStyle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.MultiLineEditableTextBox.SetText
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FText                        InText                                                           (Parm, NativeAccessSpecifierPublic)

void UMultiLineEditableTextBox::SetText(class FText InText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiLineEditableTextBox", "SetText");

	Params::UMultiLineEditableTextBox_SetText_Params Parms{};

	Parms.InText = InText;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.MultiLineEditableTextBox.SetIsReadOnly
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bReadOnly                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMultiLineEditableTextBox::SetIsReadOnly(bool bReadOnly)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiLineEditableTextBox", "SetIsReadOnly");

	Params::UMultiLineEditableTextBox_SetIsReadOnly_Params Parms{};

	Parms.bReadOnly = bReadOnly;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.MultiLineEditableTextBox.SetHintText
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FText                        InHintText                                                       (Parm, NativeAccessSpecifierPublic)

void UMultiLineEditableTextBox::SetHintText(class FText InHintText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiLineEditableTextBox", "SetHintText");

	Params::UMultiLineEditableTextBox_SetHintText_Params Parms{};

	Parms.InHintText = InHintText;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.MultiLineEditableTextBox.SetForegroundColor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor                Color                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMultiLineEditableTextBox::SetForegroundColor(const struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiLineEditableTextBox", "SetForegroundColor");

	Params::UMultiLineEditableTextBox_SetForegroundColor_Params Parms{};

	Parms.Color = Color;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.MultiLineEditableTextBox.SetError
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FText                        InError                                                          (Parm, NativeAccessSpecifierPublic)

void UMultiLineEditableTextBox::SetError(class FText InError)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiLineEditableTextBox", "SetError");

	Params::UMultiLineEditableTextBox_SetError_Params Parms{};

	Parms.InError = InError;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// DelegateFunction UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams)
// Parameters:
// class FText                        Text                                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// enum class ETextCommit             CommitMethod                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMultiLineEditableTextBox::OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature(class FText& Text, enum class ETextCommit CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiLineEditableTextBox", "OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature");

	Params::UMultiLineEditableTextBox_OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature_Params Parms{};

	Parms.Text = Text;
	Parms.CommitMethod = CommitMethod;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxChangedEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams)
// Parameters:
// class FText                        Text                                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UMultiLineEditableTextBox::OnMultiLineEditableTextBoxChangedEvent__DelegateSignature(class FText& Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiLineEditableTextBox", "OnMultiLineEditableTextBoxChangedEvent__DelegateSignature");

	Params::UMultiLineEditableTextBox_OnMultiLineEditableTextBoxChangedEvent__DelegateSignature_Params Parms{};

	Parms.Text = Text;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG.MultiLineEditableTextBox.GetText
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText UMultiLineEditableTextBox::GetText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiLineEditableTextBox", "GetText");

	Params::UMultiLineEditableTextBox_GetText_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.MultiLineEditableTextBox.GetHintText
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText UMultiLineEditableTextBox::GetHintText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiLineEditableTextBox", "GetHintText");

	Params::UMultiLineEditableTextBox_GetHintText_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.MultiLineEditableText.SetWidgetStyle
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTextBlockStyle             InWidgetStyle                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UMultiLineEditableText::SetWidgetStyle(struct FTextBlockStyle& InWidgetStyle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiLineEditableText", "SetWidgetStyle");

	Params::UMultiLineEditableText_SetWidgetStyle_Params Parms{};

	Parms.InWidgetStyle = InWidgetStyle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.MultiLineEditableText.SetText
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FText                        InText                                                           (Parm, NativeAccessSpecifierPublic)

void UMultiLineEditableText::SetText(class FText InText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiLineEditableText", "SetText");

	Params::UMultiLineEditableText_SetText_Params Parms{};

	Parms.InText = InText;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.MultiLineEditableText.SetIsReadOnly
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bReadOnly                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMultiLineEditableText::SetIsReadOnly(bool bReadOnly)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiLineEditableText", "SetIsReadOnly");

	Params::UMultiLineEditableText_SetIsReadOnly_Params Parms{};

	Parms.bReadOnly = bReadOnly;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.MultiLineEditableText.SetHintText
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FText                        InHintText                                                       (Parm, NativeAccessSpecifierPublic)

void UMultiLineEditableText::SetHintText(class FText InHintText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiLineEditableText", "SetHintText");

	Params::UMultiLineEditableText_SetHintText_Params Parms{};

	Parms.InHintText = InHintText;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.MultiLineEditableText.SetFontOutlineMaterial
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialInterface*          InMaterial                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMultiLineEditableText::SetFontOutlineMaterial(class UMaterialInterface* InMaterial)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiLineEditableText", "SetFontOutlineMaterial");

	Params::UMultiLineEditableText_SetFontOutlineMaterial_Params Parms{};

	Parms.InMaterial = InMaterial;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.MultiLineEditableText.SetFontMaterial
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialInterface*          InMaterial                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMultiLineEditableText::SetFontMaterial(class UMaterialInterface* InMaterial)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiLineEditableText", "SetFontMaterial");

	Params::UMultiLineEditableText_SetFontMaterial_Params Parms{};

	Parms.InMaterial = InMaterial;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.MultiLineEditableText.SetFont
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FSlateFontInfo              InFontInfo                                                       (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMultiLineEditableText::SetFont(const struct FSlateFontInfo& InFontInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiLineEditableText", "SetFont");

	Params::UMultiLineEditableText_SetFont_Params Parms{};

	Parms.InFontInfo = InFontInfo;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// DelegateFunction UMG.MultiLineEditableText.OnMultiLineEditableTextCommittedEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams)
// Parameters:
// class FText                        Text                                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// enum class ETextCommit             CommitMethod                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMultiLineEditableText::OnMultiLineEditableTextCommittedEvent__DelegateSignature(class FText& Text, enum class ETextCommit CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiLineEditableText", "OnMultiLineEditableTextCommittedEvent__DelegateSignature");

	Params::UMultiLineEditableText_OnMultiLineEditableTextCommittedEvent__DelegateSignature_Params Parms{};

	Parms.Text = Text;
	Parms.CommitMethod = CommitMethod;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction UMG.MultiLineEditableText.OnMultiLineEditableTextChangedEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams)
// Parameters:
// class FText                        Text                                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UMultiLineEditableText::OnMultiLineEditableTextChangedEvent__DelegateSignature(class FText& Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiLineEditableText", "OnMultiLineEditableTextChangedEvent__DelegateSignature");

	Params::UMultiLineEditableText_OnMultiLineEditableTextChangedEvent__DelegateSignature_Params Parms{};

	Parms.Text = Text;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG.MultiLineEditableText.GetText
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText UMultiLineEditableText::GetText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiLineEditableText", "GetText");

	Params::UMultiLineEditableText_GetText_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.MultiLineEditableText.GetHintText
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText UMultiLineEditableText::GetHintText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiLineEditableText", "GetHintText");

	Params::UMultiLineEditableText_GetHintText_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.MultiLineEditableText.GetFont
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FSlateFontInfo              ReturnValue                                                      (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FSlateFontInfo UMultiLineEditableText::GetFont()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MultiLineEditableText", "GetFont");

	Params::UMultiLineEditableText_GetFont_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.ProgressBar.SetPercent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InPercent                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UProgressBar::SetPercent(float InPercent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBar", "SetPercent");

	Params::UProgressBar_SetPercent_Params Parms{};

	Parms.InPercent = InPercent;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.ProgressBar.SetIsMarquee
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               InbIsMarquee                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UProgressBar::SetIsMarquee(bool InbIsMarquee)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBar", "SetIsMarquee");

	Params::UProgressBar_SetIsMarquee_Params Parms{};

	Parms.InbIsMarquee = InbIsMarquee;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.ProgressBar.SetFillColorAndOpacity
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor                InColor                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UProgressBar::SetFillColorAndOpacity(const struct FLinearColor& InColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ProgressBar", "SetFillColorAndOpacity");

	Params::UProgressBar_SetFillColorAndOpacity_Params Parms{};

	Parms.InColor = InColor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.UMGSequencePlayer.SetUserTag
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        InUserTag                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUMGSequencePlayer::SetUserTag(class FName InUserTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMGSequencePlayer", "SetUserTag");

	Params::UUMGSequencePlayer_SetUserTag_Params Parms{};

	Parms.InUserTag = InUserTag;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.UMGSequencePlayer.GetUserTag
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FName UUMGSequencePlayer::GetUserTag()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMGSequencePlayer", "GetUserTag");

	Params::UUMGSequencePlayer_GetUserTag_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.WidgetAnimation.UnbindFromAnimationStarted
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UUserWidget*                 Widget                                                           (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Delegate                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWidgetAnimation::UnbindFromAnimationStarted(class UUserWidget* Widget, FDelegateProperty_ Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetAnimation", "UnbindFromAnimationStarted");

	Params::UWidgetAnimation_UnbindFromAnimationStarted_Params Parms{};

	Parms.Widget = Widget;
	Parms.Delegate = Delegate;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.WidgetAnimation.UnbindFromAnimationFinished
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UUserWidget*                 Widget                                                           (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Delegate                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWidgetAnimation::UnbindFromAnimationFinished(class UUserWidget* Widget, FDelegateProperty_ Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetAnimation", "UnbindFromAnimationFinished");

	Params::UWidgetAnimation_UnbindFromAnimationFinished_Params Parms{};

	Parms.Widget = Widget;
	Parms.Delegate = Delegate;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.WidgetAnimation.UnbindAllFromAnimationStarted
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UUserWidget*                 Widget                                                           (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWidgetAnimation::UnbindAllFromAnimationStarted(class UUserWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetAnimation", "UnbindAllFromAnimationStarted");

	Params::UWidgetAnimation_UnbindAllFromAnimationStarted_Params Parms{};

	Parms.Widget = Widget;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.WidgetAnimation.UnbindAllFromAnimationFinished
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UUserWidget*                 Widget                                                           (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWidgetAnimation::UnbindAllFromAnimationFinished(class UUserWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetAnimation", "UnbindAllFromAnimationFinished");

	Params::UWidgetAnimation_UnbindAllFromAnimationFinished_Params Parms{};

	Parms.Widget = Widget;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.WidgetAnimation.GetStartTime
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UWidgetAnimation::GetStartTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetAnimation", "GetStartTime");

	Params::UWidgetAnimation_GetStartTime_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.WidgetAnimation.GetEndTime
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UWidgetAnimation::GetEndTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetAnimation", "GetEndTime");

	Params::UWidgetAnimation_GetEndTime_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.WidgetAnimation.BindToAnimationStarted
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UUserWidget*                 Widget                                                           (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Delegate                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWidgetAnimation::BindToAnimationStarted(class UUserWidget* Widget, FDelegateProperty_ Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetAnimation", "BindToAnimationStarted");

	Params::UWidgetAnimation_BindToAnimationStarted_Params Parms{};

	Parms.Widget = Widget;
	Parms.Delegate = Delegate;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.WidgetAnimation.BindToAnimationFinished
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UUserWidget*                 Widget                                                           (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Delegate                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWidgetAnimation::BindToAnimationFinished(class UUserWidget* Widget, FDelegateProperty_ Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetAnimation", "BindToAnimationFinished");

	Params::UWidgetAnimation_BindToAnimationFinished_Params Parms{};

	Parms.Widget = Widget;
	Parms.Delegate = Delegate;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.WidgetAnimationPlayCallbackProxy.CreatePlayAnimationTimeRangeProxyObject
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UUMGSequencePlayer*          Result                                                           (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UUserWidget*                 Widget                                                           (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWidgetAnimation*            InAnimation                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              StartAtTime                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              EndAtTime                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              NumLoopsToPlay                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EUMGSequencePlayMode    PlayMode                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              PlaybackSpeed                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWidgetAnimationPlayCallbackProxy*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UWidgetAnimationPlayCallbackProxy* UWidgetAnimationPlayCallbackProxy::CreatePlayAnimationTimeRangeProxyObject(class UUMGSequencePlayer** Result, class UUserWidget* Widget, class UWidgetAnimation* InAnimation, float StartAtTime, float EndAtTime, int32 NumLoopsToPlay, enum class EUMGSequencePlayMode PlayMode, float PlaybackSpeed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetAnimationPlayCallbackProxy", "CreatePlayAnimationTimeRangeProxyObject");

	Params::UWidgetAnimationPlayCallbackProxy_CreatePlayAnimationTimeRangeProxyObject_Params Parms{};

	Parms.Widget = Widget;
	Parms.InAnimation = InAnimation;
	Parms.StartAtTime = StartAtTime;
	Parms.EndAtTime = EndAtTime;
	Parms.NumLoopsToPlay = NumLoopsToPlay;
	Parms.PlayMode = PlayMode;
	Parms.PlaybackSpeed = PlaybackSpeed;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (Result != nullptr)
		*Result = Parms.Result;

	return Parms.ReturnValue;

}


// Function UMG.WidgetAnimationPlayCallbackProxy.CreatePlayAnimationProxyObject
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UUMGSequencePlayer*          Result                                                           (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UUserWidget*                 Widget                                                           (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWidgetAnimation*            InAnimation                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              StartAtTime                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              NumLoopsToPlay                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EUMGSequencePlayMode    PlayMode                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              PlaybackSpeed                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWidgetAnimationPlayCallbackProxy*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UWidgetAnimationPlayCallbackProxy* UWidgetAnimationPlayCallbackProxy::CreatePlayAnimationProxyObject(class UUMGSequencePlayer** Result, class UUserWidget* Widget, class UWidgetAnimation* InAnimation, float StartAtTime, int32 NumLoopsToPlay, enum class EUMGSequencePlayMode PlayMode, float PlaybackSpeed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetAnimationPlayCallbackProxy", "CreatePlayAnimationProxyObject");

	Params::UWidgetAnimationPlayCallbackProxy_CreatePlayAnimationProxyObject_Params Parms{};

	Parms.Widget = Widget;
	Parms.InAnimation = InAnimation;
	Parms.StartAtTime = StartAtTime;
	Parms.NumLoopsToPlay = NumLoopsToPlay;
	Parms.PlayMode = PlayMode;
	Parms.PlaybackSpeed = PlaybackSpeed;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (Result != nullptr)
		*Result = Parms.Result;

	return Parms.ReturnValue;

}


// Function UMG.BoolBinding.GetValue
// (Final, Native, Public, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UBoolBinding::GetValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BoolBinding", "GetValue");

	Params::UBoolBinding_GetValue_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.BrushBinding.GetValue
// (Final, Native, Public, Const)
// Parameters:
// struct FSlateBrush                 ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FSlateBrush UBrushBinding::GetValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BrushBinding", "GetValue");

	Params::UBrushBinding_GetValue_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.CheckedStateBinding.GetValue
// (Final, Native, Public, Const)
// Parameters:
// enum class ECheckBoxState          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ECheckBoxState UCheckedStateBinding::GetValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CheckedStateBinding", "GetValue");

	Params::UCheckedStateBinding_GetValue_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.ColorBinding.GetSlateValue
// (Final, Native, Public, Const)
// Parameters:
// struct FSlateColor                 ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FSlateColor UColorBinding::GetSlateValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ColorBinding", "GetSlateValue");

	Params::UColorBinding_GetSlateValue_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.ColorBinding.GetLinearValue
// (Final, Native, Public, HasDefaults, Const)
// Parameters:
// struct FLinearColor                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FLinearColor UColorBinding::GetLinearValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ColorBinding", "GetLinearValue");

	Params::UColorBinding_GetLinearValue_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.FloatBinding.GetValue
// (Final, Native, Public, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UFloatBinding::GetValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FloatBinding", "GetValue");

	Params::UFloatBinding_GetValue_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.Int32Binding.GetValue
// (Final, Native, Public, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UInt32Binding::GetValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Int32Binding", "GetValue");

	Params::UInt32Binding_GetValue_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.MouseCursorBinding.GetValue
// (Final, Native, Public, Const)
// Parameters:
// enum class EMouseCursor            ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EMouseCursor UMouseCursorBinding::GetValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MouseCursorBinding", "GetValue");

	Params::UMouseCursorBinding_GetValue_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.TextBinding.GetTextValue
// (Final, Native, Public, Const)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText UTextBinding::GetTextValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TextBinding", "GetTextValue");

	Params::UTextBinding_GetTextValue_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.TextBinding.GetStringValue
// (Final, Native, Public, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UTextBinding::GetStringValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TextBinding", "GetStringValue");

	Params::UTextBinding_GetStringValue_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.VisibilityBinding.GetValue
// (Final, Native, Public, Const)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ESlateVisibility UVisibilityBinding::GetValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VisibilityBinding", "GetValue");

	Params::UVisibilityBinding_GetValue_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.WidgetBinding.GetValue
// (Final, Native, Public, Const)
// Parameters:
// class UWidget*                     ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UWidget* UWidgetBinding::GetValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBinding", "GetValue");

	Params::UWidgetBinding_GetValue_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.AsyncTaskDownloadImage.DownloadImage
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      URL                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAsyncTaskDownloadImage*     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAsyncTaskDownloadImage* UAsyncTaskDownloadImage::DownloadImage(const class FString& URL)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AsyncTaskDownloadImage", "DownloadImage");

	Params::UAsyncTaskDownloadImage_DownloadImage_Params Parms{};

	Parms.URL = URL;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.GameViewportSubsystem.SetWidgetSlotPosition
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FGameViewportWidgetSlot     Slot                                                             (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class UWidget*                     Widget                                                           (ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   Position                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bRemoveDPIScale                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameViewportWidgetSlot     ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FGameViewportWidgetSlot UGameViewportSubsystem::SetWidgetSlotPosition(const struct FGameViewportWidgetSlot& Slot, class UWidget* Widget, const struct FVector2D& Position, bool bRemoveDPIScale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameViewportSubsystem", "SetWidgetSlotPosition");

	Params::UGameViewportSubsystem_SetWidgetSlotPosition_Params Parms{};

	Parms.Slot = Slot;
	Parms.Widget = Widget;
	Parms.Position = Position;
	Parms.bRemoveDPIScale = bRemoveDPIScale;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.GameViewportSubsystem.SetWidgetSlotDesiredSize
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FGameViewportWidgetSlot     Slot                                                             (Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FVector2D                   Size                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameViewportWidgetSlot     ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FGameViewportWidgetSlot UGameViewportSubsystem::SetWidgetSlotDesiredSize(const struct FGameViewportWidgetSlot& Slot, const struct FVector2D& Size)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameViewportSubsystem", "SetWidgetSlotDesiredSize");

	Params::UGameViewportSubsystem_SetWidgetSlotDesiredSize_Params Parms{};

	Parms.Slot = Slot;
	Parms.Size = Size;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.GameViewportSubsystem.SetWidgetSlot
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                     Widget                                                           (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameViewportWidgetSlot     Slot                                                             (Parm, NoDestructor, NativeAccessSpecifierPublic)

void UGameViewportSubsystem::SetWidgetSlot(class UWidget* Widget, const struct FGameViewportWidgetSlot& Slot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameViewportSubsystem", "SetWidgetSlot");

	Params::UGameViewportSubsystem_SetWidgetSlot_Params Parms{};

	Parms.Widget = Widget;
	Parms.Slot = Slot;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.GameViewportSubsystem.RemoveWidget
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                     Widget                                                           (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameViewportSubsystem::RemoveWidget(class UWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameViewportSubsystem", "RemoveWidget");

	Params::UGameViewportSubsystem_RemoveWidget_Params Parms{};

	Parms.Widget = Widget;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.GameViewportSubsystem.IsWidgetAdded
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UWidget*                     Widget                                                           (ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGameViewportSubsystem::IsWidgetAdded(class UWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameViewportSubsystem", "IsWidgetAdded");

	Params::UGameViewportSubsystem_IsWidgetAdded_Params Parms{};

	Parms.Widget = Widget;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.GameViewportSubsystem.GetWidgetSlot
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UWidget*                     Widget                                                           (ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameViewportWidgetSlot     ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FGameViewportWidgetSlot UGameViewportSubsystem::GetWidgetSlot(class UWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameViewportSubsystem", "GetWidgetSlot");

	Params::UGameViewportSubsystem_GetWidgetSlot_Params Parms{};

	Parms.Widget = Widget;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.GameViewportSubsystem.AddWidgetForPlayer
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                     Widget                                                           (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ULocalPlayer*                Player                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameViewportWidgetSlot     Slot                                                             (Parm, NoDestructor, NativeAccessSpecifierPublic)

void UGameViewportSubsystem::AddWidgetForPlayer(class UWidget* Widget, class ULocalPlayer* Player, const struct FGameViewportWidgetSlot& Slot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameViewportSubsystem", "AddWidgetForPlayer");

	Params::UGameViewportSubsystem_AddWidgetForPlayer_Params Parms{};

	Parms.Widget = Widget;
	Parms.Player = Player;
	Parms.Slot = Slot;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.GameViewportSubsystem.AddWidget
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                     Widget                                                           (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameViewportWidgetSlot     Slot                                                             (Parm, NoDestructor, NativeAccessSpecifierPublic)

void UGameViewportSubsystem::AddWidget(class UWidget* Widget, const struct FGameViewportWidgetSlot& Slot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameViewportSubsystem", "AddWidget");

	Params::UGameViewportSubsystem_AddWidget_Params Parms{};

	Parms.Widget = Widget;
	Parms.Slot = Slot;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.UserListEntry.BP_OnItemSelectionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsSelected                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IUserListEntry::BP_OnItemSelectionChanged(bool bIsSelected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserListEntry", "BP_OnItemSelectionChanged");

	Params::IUserListEntry_BP_OnItemSelectionChanged_Params Parms{};

	Parms.bIsSelected = bIsSelected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG.UserListEntry.BP_OnItemExpansionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsExpanded                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IUserListEntry::BP_OnItemExpansionChanged(bool bIsExpanded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserListEntry", "BP_OnItemExpansionChanged");

	Params::IUserListEntry_BP_OnItemExpansionChanged_Params Parms{};

	Parms.bIsExpanded = bIsExpanded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG.UserListEntry.BP_OnEntryReleased
// (Event, Protected, BlueprintEvent)
// Parameters:

void IUserListEntry::BP_OnEntryReleased()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserListEntry", "BP_OnEntryReleased");

	Params::IUserListEntry_BP_OnEntryReleased_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG.UserListEntryLibrary.IsListItemSelected
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TScriptInterface<class IUserListEntry>UserListEntry                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UUserListEntryLibrary::IsListItemSelected(TScriptInterface<class IUserListEntry> UserListEntry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserListEntryLibrary", "IsListItemSelected");

	Params::UUserListEntryLibrary_IsListItemSelected_Params Parms{};

	Parms.UserListEntry = UserListEntry;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.UserListEntryLibrary.IsListItemExpanded
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TScriptInterface<class IUserListEntry>UserListEntry                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UUserListEntryLibrary::IsListItemExpanded(TScriptInterface<class IUserListEntry> UserListEntry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserListEntryLibrary", "IsListItemExpanded");

	Params::UUserListEntryLibrary_IsListItemExpanded_Params Parms{};

	Parms.UserListEntry = UserListEntry;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.UserListEntryLibrary.GetOwningListView
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TScriptInterface<class IUserListEntry>UserListEntry                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UListViewBase*               ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UListViewBase* UUserListEntryLibrary::GetOwningListView(TScriptInterface<class IUserListEntry> UserListEntry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserListEntryLibrary", "GetOwningListView");

	Params::UUserListEntryLibrary_GetOwningListView_Params Parms{};

	Parms.UserListEntry = UserListEntry;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.UserObjectListEntry.OnListItemObjectSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UObject*                     ListItemObject                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IUserObjectListEntry::OnListItemObjectSet(class UObject* ListItemObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserObjectListEntry", "OnListItemObjectSet");

	Params::IUserObjectListEntry_OnListItemObjectSet_Params Parms{};

	Parms.ListItemObject = ListItemObject;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG.UserObjectListEntryLibrary.GetListItemObject
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TScriptInterface<class IUserObjectListEntry>UserObjectListEntry                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UObject* UUserObjectListEntryLibrary::GetListItemObject(TScriptInterface<class IUserObjectListEntry> UserObjectListEntry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UserObjectListEntryLibrary", "GetListItemObject");

	Params::UUserObjectListEntryLibrary_GetListItemObject_Params Parms{};

	Parms.UserObjectListEntry = UserObjectListEntry;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.BackgroundBlurSlot.SetVerticalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EVerticalAlignment      InVerticalAlignment                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBackgroundBlurSlot::SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BackgroundBlurSlot", "SetVerticalAlignment");

	Params::UBackgroundBlurSlot_SetVerticalAlignment_Params Parms{};

	Parms.InVerticalAlignment = InVerticalAlignment;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.BackgroundBlurSlot.SetPadding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMargin                     InPadding                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void UBackgroundBlurSlot::SetPadding(const struct FMargin& InPadding)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BackgroundBlurSlot", "SetPadding");

	Params::UBackgroundBlurSlot_SetPadding_Params Parms{};

	Parms.InPadding = InPadding;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.BackgroundBlurSlot.SetHorizontalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EHorizontalAlignment    InHorizontalAlignment                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBackgroundBlurSlot::SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BackgroundBlurSlot", "SetHorizontalAlignment");

	Params::UBackgroundBlurSlot_SetHorizontalAlignment_Params Parms{};

	Parms.InHorizontalAlignment = InHorizontalAlignment;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.BorderSlot.SetVerticalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EVerticalAlignment      InVerticalAlignment                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBorderSlot::SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BorderSlot", "SetVerticalAlignment");

	Params::UBorderSlot_SetVerticalAlignment_Params Parms{};

	Parms.InVerticalAlignment = InVerticalAlignment;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.BorderSlot.SetPadding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMargin                     InPadding                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void UBorderSlot::SetPadding(const struct FMargin& InPadding)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BorderSlot", "SetPadding");

	Params::UBorderSlot_SetPadding_Params Parms{};

	Parms.InPadding = InPadding;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.BorderSlot.SetHorizontalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EHorizontalAlignment    InHorizontalAlignment                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBorderSlot::SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BorderSlot", "SetHorizontalAlignment");

	Params::UBorderSlot_SetHorizontalAlignment_Params Parms{};

	Parms.InHorizontalAlignment = InHorizontalAlignment;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.ButtonSlot.SetVerticalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EVerticalAlignment      InVerticalAlignment                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UButtonSlot::SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ButtonSlot", "SetVerticalAlignment");

	Params::UButtonSlot_SetVerticalAlignment_Params Parms{};

	Parms.InVerticalAlignment = InVerticalAlignment;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.ButtonSlot.SetPadding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMargin                     InPadding                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void UButtonSlot::SetPadding(const struct FMargin& InPadding)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ButtonSlot", "SetPadding");

	Params::UButtonSlot_SetPadding_Params Parms{};

	Parms.InPadding = InPadding;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.ButtonSlot.SetHorizontalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EHorizontalAlignment    InHorizontalAlignment                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UButtonSlot::SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ButtonSlot", "SetHorizontalAlignment");

	Params::UButtonSlot_SetHorizontalAlignment_Params Parms{};

	Parms.InHorizontalAlignment = InHorizontalAlignment;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.CanvasPanel.AddChildToCanvas
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                     Content                                                          (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCanvasPanelSlot*            ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UCanvasPanelSlot* UCanvasPanel::AddChildToCanvas(class UWidget* Content)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CanvasPanel", "AddChildToCanvas");

	Params::UCanvasPanel_AddChildToCanvas_Params Parms{};

	Parms.Content = Content;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.CanvasPanelSlot.SetZOrder
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              InZOrder                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCanvasPanelSlot::SetZOrder(int32 InZOrder)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CanvasPanelSlot", "SetZOrder");

	Params::UCanvasPanelSlot_SetZOrder_Params Parms{};

	Parms.InZOrder = InZOrder;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.CanvasPanelSlot.SetSize
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D                   InSize                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCanvasPanelSlot::SetSize(const struct FVector2D& InSize)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CanvasPanelSlot", "SetSize");

	Params::UCanvasPanelSlot_SetSize_Params Parms{};

	Parms.InSize = InSize;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.CanvasPanelSlot.SetPosition
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D                   InPosition                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCanvasPanelSlot::SetPosition(const struct FVector2D& InPosition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CanvasPanelSlot", "SetPosition");

	Params::UCanvasPanelSlot_SetPosition_Params Parms{};

	Parms.InPosition = InPosition;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.CanvasPanelSlot.SetOffsets
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMargin                     InOffset                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void UCanvasPanelSlot::SetOffsets(const struct FMargin& InOffset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CanvasPanelSlot", "SetOffsets");

	Params::UCanvasPanelSlot_SetOffsets_Params Parms{};

	Parms.InOffset = InOffset;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.CanvasPanelSlot.SetMinimum
// (Final, Native, Public, HasDefaults)
// Parameters:
// struct FVector2D                   InMinimumAnchors                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCanvasPanelSlot::SetMinimum(const struct FVector2D& InMinimumAnchors)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CanvasPanelSlot", "SetMinimum");

	Params::UCanvasPanelSlot_SetMinimum_Params Parms{};

	Parms.InMinimumAnchors = InMinimumAnchors;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.CanvasPanelSlot.SetMaximum
// (Final, Native, Public, HasDefaults)
// Parameters:
// struct FVector2D                   InMaximumAnchors                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCanvasPanelSlot::SetMaximum(const struct FVector2D& InMaximumAnchors)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CanvasPanelSlot", "SetMaximum");

	Params::UCanvasPanelSlot_SetMaximum_Params Parms{};

	Parms.InMaximumAnchors = InMaximumAnchors;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.CanvasPanelSlot.SetLayout
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAnchorData                 InLayoutData                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UCanvasPanelSlot::SetLayout(struct FAnchorData& InLayoutData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CanvasPanelSlot", "SetLayout");

	Params::UCanvasPanelSlot_SetLayout_Params Parms{};

	Parms.InLayoutData = InLayoutData;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.CanvasPanelSlot.SetAutoSize
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               InbAutoSize                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCanvasPanelSlot::SetAutoSize(bool InbAutoSize)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CanvasPanelSlot", "SetAutoSize");

	Params::UCanvasPanelSlot_SetAutoSize_Params Parms{};

	Parms.InbAutoSize = InbAutoSize;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.CanvasPanelSlot.SetAnchors
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FAnchors                    InAnchors                                                        (Parm, NoDestructor, NativeAccessSpecifierPublic)

void UCanvasPanelSlot::SetAnchors(const struct FAnchors& InAnchors)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CanvasPanelSlot", "SetAnchors");

	Params::UCanvasPanelSlot_SetAnchors_Params Parms{};

	Parms.InAnchors = InAnchors;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.CanvasPanelSlot.SetAlignment
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D                   InAlignment                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCanvasPanelSlot::SetAlignment(const struct FVector2D& InAlignment)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CanvasPanelSlot", "SetAlignment");

	Params::UCanvasPanelSlot_SetAlignment_Params Parms{};

	Parms.InAlignment = InAlignment;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.CanvasPanelSlot.GetZOrder
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UCanvasPanelSlot::GetZOrder()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CanvasPanelSlot", "GetZOrder");

	Params::UCanvasPanelSlot_GetZOrder_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.CanvasPanelSlot.GetSize
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector2D                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector2D UCanvasPanelSlot::GetSize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CanvasPanelSlot", "GetSize");

	Params::UCanvasPanelSlot_GetSize_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.CanvasPanelSlot.GetPosition
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector2D                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector2D UCanvasPanelSlot::GetPosition()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CanvasPanelSlot", "GetPosition");

	Params::UCanvasPanelSlot_GetPosition_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.CanvasPanelSlot.GetOffsets
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMargin                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FMargin UCanvasPanelSlot::GetOffsets()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CanvasPanelSlot", "GetOffsets");

	Params::UCanvasPanelSlot_GetOffsets_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.CanvasPanelSlot.GetLayout
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FAnchorData                 ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FAnchorData UCanvasPanelSlot::GetLayout()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CanvasPanelSlot", "GetLayout");

	Params::UCanvasPanelSlot_GetLayout_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.CanvasPanelSlot.GetAutoSize
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCanvasPanelSlot::GetAutoSize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CanvasPanelSlot", "GetAutoSize");

	Params::UCanvasPanelSlot_GetAutoSize_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.CanvasPanelSlot.GetAnchors
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FAnchors                    ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FAnchors UCanvasPanelSlot::GetAnchors()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CanvasPanelSlot", "GetAnchors");

	Params::UCanvasPanelSlot_GetAnchors_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.CanvasPanelSlot.GetAlignment
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector2D                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector2D UCanvasPanelSlot::GetAlignment()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CanvasPanelSlot", "GetAlignment");

	Params::UCanvasPanelSlot_GetAlignment_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.CircularThrobber.SetRadius
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InRadius                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCircularThrobber::SetRadius(float InRadius)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CircularThrobber", "SetRadius");

	Params::UCircularThrobber_SetRadius_Params Parms{};

	Parms.InRadius = InRadius;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.CircularThrobber.SetPeriod
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InPeriod                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCircularThrobber::SetPeriod(float InPeriod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CircularThrobber", "SetPeriod");

	Params::UCircularThrobber_SetPeriod_Params Parms{};

	Parms.InPeriod = InPeriod;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.CircularThrobber.SetNumberOfPieces
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              InNumberOfPieces                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCircularThrobber::SetNumberOfPieces(int32 InNumberOfPieces)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CircularThrobber", "SetNumberOfPieces");

	Params::UCircularThrobber_SetNumberOfPieces_Params Parms{};

	Parms.InNumberOfPieces = InNumberOfPieces;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.ComboBoxKey.SetSelectedOption
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        Option                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UComboBoxKey::SetSelectedOption(class FName Option)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComboBoxKey", "SetSelectedOption");

	Params::UComboBoxKey_SetSelectedOption_Params Parms{};

	Parms.Option = Option;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.ComboBoxKey.RemoveOption
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        Option                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UComboBoxKey::RemoveOption(class FName Option)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComboBoxKey", "RemoveOption");

	Params::UComboBoxKey_RemoveOption_Params Parms{};

	Parms.Option = Option;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// DelegateFunction UMG.ComboBoxKey.OnSelectionChangedEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class FName                        SelectedItem                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ESelectInfo             SelectionType                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UComboBoxKey::OnSelectionChangedEvent__DelegateSignature(class FName SelectedItem, enum class ESelectInfo SelectionType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComboBoxKey", "OnSelectionChangedEvent__DelegateSignature");

	Params::UComboBoxKey_OnSelectionChangedEvent__DelegateSignature_Params Parms{};

	Parms.SelectedItem = SelectedItem;
	Parms.SelectionType = SelectionType;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction UMG.ComboBoxKey.OnOpeningEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:

void UComboBoxKey::OnOpeningEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComboBoxKey", "OnOpeningEvent__DelegateSignature");

	Params::UComboBoxKey_OnOpeningEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG.ComboBoxKey.IsOpen
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UComboBoxKey::IsOpen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComboBoxKey", "IsOpen");

	Params::UComboBoxKey_IsOpen_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.ComboBoxKey.GetSelectedOption
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FName UComboBoxKey::GetSelectedOption()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComboBoxKey", "GetSelectedOption");

	Params::UComboBoxKey_GetSelectedOption_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// DelegateFunction UMG.ComboBoxKey.GenerateWidgetEvent__DelegateSignature
// (Public, Delegate)
// Parameters:
// class FName                        Item                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWidget*                     ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UWidget* UComboBoxKey::GenerateWidgetEvent__DelegateSignature(class FName Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComboBoxKey", "GenerateWidgetEvent__DelegateSignature");

	Params::UComboBoxKey_GenerateWidgetEvent__DelegateSignature_Params Parms{};

	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG.ComboBoxKey.ClearSelection
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UComboBoxKey::ClearSelection()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComboBoxKey", "ClearSelection");

	Params::UComboBoxKey_ClearSelection_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.ComboBoxKey.ClearOptions
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UComboBoxKey::ClearOptions()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComboBoxKey", "ClearOptions");

	Params::UComboBoxKey_ClearOptions_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.ComboBoxKey.AddOption
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        Option                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UComboBoxKey::AddOption(class FName Option)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComboBoxKey", "AddOption");

	Params::UComboBoxKey_AddOption_Params Parms{};

	Parms.Option = Option;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.ComboBoxString.SetSelectedOption
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Option                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UComboBoxString::SetSelectedOption(const class FString& Option)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComboBoxString", "SetSelectedOption");

	Params::UComboBoxString_SetSelectedOption_Params Parms{};

	Parms.Option = Option;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.ComboBoxString.SetSelectedIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              Index                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UComboBoxString::SetSelectedIndex(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComboBoxString", "SetSelectedIndex");

	Params::UComboBoxString_SetSelectedIndex_Params Parms{};

	Parms.Index = Index;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.ComboBoxString.RemoveOption
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Option                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UComboBoxString::RemoveOption(const class FString& Option)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComboBoxString", "RemoveOption");

	Params::UComboBoxString_RemoveOption_Params Parms{};

	Parms.Option = Option;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.ComboBoxString.RefreshOptions
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UComboBoxString::RefreshOptions()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComboBoxString", "RefreshOptions");

	Params::UComboBoxString_RefreshOptions_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// DelegateFunction UMG.ComboBoxString.OnSelectionChangedEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class FString                      SelectedItem                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ESelectInfo             SelectionType                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UComboBoxString::OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, enum class ESelectInfo SelectionType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComboBoxString", "OnSelectionChangedEvent__DelegateSignature");

	Params::UComboBoxString_OnSelectionChangedEvent__DelegateSignature_Params Parms{};

	Parms.SelectedItem = SelectedItem;
	Parms.SelectionType = SelectionType;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction UMG.ComboBoxString.OnOpeningEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:

void UComboBoxString::OnOpeningEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComboBoxString", "OnOpeningEvent__DelegateSignature");

	Params::UComboBoxString_OnOpeningEvent__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG.ComboBoxString.IsOpen
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UComboBoxString::IsOpen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComboBoxString", "IsOpen");

	Params::UComboBoxString_IsOpen_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.ComboBoxString.GetSelectedOption
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UComboBoxString::GetSelectedOption()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComboBoxString", "GetSelectedOption");

	Params::UComboBoxString_GetSelectedOption_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.ComboBoxString.GetSelectedIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UComboBoxString::GetSelectedIndex()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComboBoxString", "GetSelectedIndex");

	Params::UComboBoxString_GetSelectedIndex_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.ComboBoxString.GetOptionCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UComboBoxString::GetOptionCount()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComboBoxString", "GetOptionCount");

	Params::UComboBoxString_GetOptionCount_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.ComboBoxString.GetOptionAtIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UComboBoxString::GetOptionAtIndex(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComboBoxString", "GetOptionAtIndex");

	Params::UComboBoxString_GetOptionAtIndex_Params Parms{};

	Parms.Index = Index;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.ComboBoxString.FindOptionIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      Option                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UComboBoxString::FindOptionIndex(const class FString& Option)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComboBoxString", "FindOptionIndex");

	Params::UComboBoxString_FindOptionIndex_Params Parms{};

	Parms.Option = Option;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.ComboBoxString.ClearSelection
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UComboBoxString::ClearSelection()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComboBoxString", "ClearSelection");

	Params::UComboBoxString_ClearSelection_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.ComboBoxString.ClearOptions
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UComboBoxString::ClearOptions()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComboBoxString", "ClearOptions");

	Params::UComboBoxString_ClearOptions_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.ComboBoxString.AddOption
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Option                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UComboBoxString::AddOption(const class FString& Option)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComboBoxString", "AddOption");

	Params::UComboBoxString_AddOption_Params Parms{};

	Parms.Option = Option;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.DynamicEntryBox.Reset
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bDeleteWidgets                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDynamicEntryBox::Reset(bool bDeleteWidgets)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DynamicEntryBox", "Reset");

	Params::UDynamicEntryBox_Reset_Params Parms{};

	Parms.bDeleteWidgets = bDeleteWidgets;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.DynamicEntryBox.RemoveEntry
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UUserWidget*                 EntryWidget                                                      (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDynamicEntryBox::RemoveEntry(class UUserWidget* EntryWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DynamicEntryBox", "RemoveEntry");

	Params::UDynamicEntryBox_RemoveEntry_Params Parms{};

	Parms.EntryWidget = EntryWidget;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.DynamicEntryBox.BP_CreateEntryOfClass
// (Final, Native, Private, BlueprintCallable)
// Parameters:
// TSubclassOf<class UUserWidget>     EntryClass                                                       (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UUserWidget*                 ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UUserWidget* UDynamicEntryBox::BP_CreateEntryOfClass(TSubclassOf<class UUserWidget> EntryClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DynamicEntryBox", "BP_CreateEntryOfClass");

	Params::UDynamicEntryBox_BP_CreateEntryOfClass_Params Parms{};

	Parms.EntryClass = EntryClass;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.DynamicEntryBox.BP_CreateEntry
// (Final, Native, Private, BlueprintCallable)
// Parameters:
// class UUserWidget*                 ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UUserWidget* UDynamicEntryBox::BP_CreateEntry()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DynamicEntryBox", "BP_CreateEntry");

	Params::UDynamicEntryBox_BP_CreateEntry_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.GridSlot.SetVerticalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EVerticalAlignment      InVerticalAlignment                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGridSlot::SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GridSlot", "SetVerticalAlignment");

	Params::UGridSlot_SetVerticalAlignment_Params Parms{};

	Parms.InVerticalAlignment = InVerticalAlignment;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.GridSlot.SetRowSpan
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              InRowSpan                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGridSlot::SetRowSpan(int32 InRowSpan)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GridSlot", "SetRowSpan");

	Params::UGridSlot_SetRowSpan_Params Parms{};

	Parms.InRowSpan = InRowSpan;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.GridSlot.SetRow
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              InRow                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGridSlot::SetRow(int32 InRow)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GridSlot", "SetRow");

	Params::UGridSlot_SetRow_Params Parms{};

	Parms.InRow = InRow;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.GridSlot.SetPadding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMargin                     InPadding                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void UGridSlot::SetPadding(const struct FMargin& InPadding)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GridSlot", "SetPadding");

	Params::UGridSlot_SetPadding_Params Parms{};

	Parms.InPadding = InPadding;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.GridSlot.SetNudge
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D                   InNudge                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGridSlot::SetNudge(const struct FVector2D& InNudge)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GridSlot", "SetNudge");

	Params::UGridSlot_SetNudge_Params Parms{};

	Parms.InNudge = InNudge;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.GridSlot.SetLayer
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              InLayer                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGridSlot::SetLayer(int32 InLayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GridSlot", "SetLayer");

	Params::UGridSlot_SetLayer_Params Parms{};

	Parms.InLayer = InLayer;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.GridSlot.SetHorizontalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EHorizontalAlignment    InHorizontalAlignment                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGridSlot::SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GridSlot", "SetHorizontalAlignment");

	Params::UGridSlot_SetHorizontalAlignment_Params Parms{};

	Parms.InHorizontalAlignment = InHorizontalAlignment;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.GridSlot.SetColumnSpan
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              InColumnSpan                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGridSlot::SetColumnSpan(int32 InColumnSpan)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GridSlot", "SetColumnSpan");

	Params::UGridSlot_SetColumnSpan_Params Parms{};

	Parms.InColumnSpan = InColumnSpan;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.GridSlot.SetColumn
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              InColumn                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGridSlot::SetColumn(int32 InColumn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GridSlot", "SetColumn");

	Params::UGridSlot_SetColumn_Params Parms{};

	Parms.InColumn = InColumn;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.HorizontalBoxSlot.SetVerticalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EVerticalAlignment      InVerticalAlignment                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UHorizontalBoxSlot::SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HorizontalBoxSlot", "SetVerticalAlignment");

	Params::UHorizontalBoxSlot_SetVerticalAlignment_Params Parms{};

	Parms.InVerticalAlignment = InVerticalAlignment;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.HorizontalBoxSlot.SetSize
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FSlateChildSize             InSize                                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)

void UHorizontalBoxSlot::SetSize(const struct FSlateChildSize& InSize)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HorizontalBoxSlot", "SetSize");

	Params::UHorizontalBoxSlot_SetSize_Params Parms{};

	Parms.InSize = InSize;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.HorizontalBoxSlot.SetPadding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMargin                     InPadding                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void UHorizontalBoxSlot::SetPadding(const struct FMargin& InPadding)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HorizontalBoxSlot", "SetPadding");

	Params::UHorizontalBoxSlot_SetPadding_Params Parms{};

	Parms.InPadding = InPadding;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.HorizontalBoxSlot.SetHorizontalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EHorizontalAlignment    InHorizontalAlignment                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UHorizontalBoxSlot::SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HorizontalBoxSlot", "SetHorizontalAlignment");

	Params::UHorizontalBoxSlot_SetHorizontalAlignment_Params Parms{};

	Parms.InHorizontalAlignment = InHorizontalAlignment;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.InputKeySelector.SetTextBlockVisibility
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ESlateVisibility        InVisibility                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UInputKeySelector::SetTextBlockVisibility(enum class ESlateVisibility InVisibility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InputKeySelector", "SetTextBlockVisibility");

	Params::UInputKeySelector_SetTextBlockVisibility_Params Parms{};

	Parms.InVisibility = InVisibility;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.InputKeySelector.SetSelectedKey
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FInputChord                 InSelectedKey                                                    (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UInputKeySelector::SetSelectedKey(struct FInputChord& InSelectedKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InputKeySelector", "SetSelectedKey");

	Params::UInputKeySelector_SetSelectedKey_Params Parms{};

	Parms.InSelectedKey = InSelectedKey;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.InputKeySelector.SetNoKeySpecifiedText
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FText                        InNoKeySpecifiedText                                             (Parm, NativeAccessSpecifierPublic)

void UInputKeySelector::SetNoKeySpecifiedText(class FText InNoKeySpecifiedText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InputKeySelector", "SetNoKeySpecifiedText");

	Params::UInputKeySelector_SetNoKeySpecifiedText_Params Parms{};

	Parms.InNoKeySpecifiedText = InNoKeySpecifiedText;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.InputKeySelector.SetKeySelectionText
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FText                        InKeySelectionText                                               (Parm, NativeAccessSpecifierPublic)

void UInputKeySelector::SetKeySelectionText(class FText InKeySelectionText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InputKeySelector", "SetKeySelectionText");

	Params::UInputKeySelector_SetKeySelectionText_Params Parms{};

	Parms.InKeySelectionText = InKeySelectionText;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.InputKeySelector.SetEscapeKeys
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FKey>                InKeys                                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UInputKeySelector::SetEscapeKeys(TArray<struct FKey>& InKeys)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InputKeySelector", "SetEscapeKeys");

	Params::UInputKeySelector_SetEscapeKeys_Params Parms{};

	Parms.InKeys = InKeys;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.InputKeySelector.SetAllowModifierKeys
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInAllowModifierKeys                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UInputKeySelector::SetAllowModifierKeys(bool bInAllowModifierKeys)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InputKeySelector", "SetAllowModifierKeys");

	Params::UInputKeySelector_SetAllowModifierKeys_Params Parms{};

	Parms.bInAllowModifierKeys = bInAllowModifierKeys;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.InputKeySelector.SetAllowGamepadKeys
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInAllowGamepadKeys                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UInputKeySelector::SetAllowGamepadKeys(bool bInAllowGamepadKeys)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InputKeySelector", "SetAllowGamepadKeys");

	Params::UInputKeySelector_SetAllowGamepadKeys_Params Parms{};

	Parms.bInAllowGamepadKeys = bInAllowGamepadKeys;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// DelegateFunction UMG.InputKeySelector.OnKeySelected__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// struct FInputChord                 SelectedKey                                                      (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UInputKeySelector::OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InputKeySelector", "OnKeySelected__DelegateSignature");

	Params::UInputKeySelector_OnKeySelected__DelegateSignature_Params Parms{};

	Parms.SelectedKey = SelectedKey;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction UMG.InputKeySelector.OnIsSelectingKeyChanged__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:

void UInputKeySelector::OnIsSelectingKeyChanged__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InputKeySelector", "OnIsSelectingKeyChanged__DelegateSignature");

	Params::UInputKeySelector_OnIsSelectingKeyChanged__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG.InputKeySelector.GetIsSelectingKey
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInputKeySelector::GetIsSelectingKey()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InputKeySelector", "GetIsSelectingKey");

	Params::UInputKeySelector_GetIsSelectingKey_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.InvalidationBox.SetCanCache
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               CanCache                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UInvalidationBox::SetCanCache(bool CanCache)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InvalidationBox", "SetCanCache");

	Params::UInvalidationBox_SetCanCache_Params Parms{};

	Parms.CanCache = CanCache;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.InvalidationBox.InvalidateCache
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UInvalidationBox::InvalidateCache()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InvalidationBox", "InvalidateCache");

	Params::UInvalidationBox_InvalidateCache_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.InvalidationBox.GetCanCache
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UInvalidationBox::GetCanCache()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InvalidationBox", "GetCanCache");

	Params::UInvalidationBox_GetCanCache_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.MenuAnchor.ToggleOpen
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bFocusOnOpen                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMenuAnchor::ToggleOpen(bool bFocusOnOpen)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuAnchor", "ToggleOpen");

	Params::UMenuAnchor_ToggleOpen_Params Parms{};

	Parms.bFocusOnOpen = bFocusOnOpen;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.MenuAnchor.ShouldOpenDueToClick
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMenuAnchor::ShouldOpenDueToClick()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuAnchor", "ShouldOpenDueToClick");

	Params::UMenuAnchor_ShouldOpenDueToClick_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.MenuAnchor.SetPlacement
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EMenuPlacement          InPlacement                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMenuAnchor::SetPlacement(enum class EMenuPlacement InPlacement)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuAnchor", "SetPlacement");

	Params::UMenuAnchor_SetPlacement_Params Parms{};

	Parms.InPlacement = InPlacement;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.MenuAnchor.Open
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bFocusMenu                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMenuAnchor::Open(bool bFocusMenu)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuAnchor", "Open");

	Params::UMenuAnchor_Open_Params Parms{};

	Parms.bFocusMenu = bFocusMenu;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.MenuAnchor.IsOpen
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMenuAnchor::IsOpen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuAnchor", "IsOpen");

	Params::UMenuAnchor_IsOpen_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.MenuAnchor.HasOpenSubMenus
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMenuAnchor::HasOpenSubMenus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuAnchor", "HasOpenSubMenus");

	Params::UMenuAnchor_HasOpenSubMenus_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// DelegateFunction UMG.MenuAnchor.GetUserWidget__DelegateSignature
// (Public, Delegate)
// Parameters:
// class UUserWidget*                 ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UUserWidget* UMenuAnchor::GetUserWidget__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuAnchor", "GetUserWidget__DelegateSignature");

	Params::UMenuAnchor_GetUserWidget__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG.MenuAnchor.GetMenuPosition
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector2D                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector2D UMenuAnchor::GetMenuPosition()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuAnchor", "GetMenuPosition");

	Params::UMenuAnchor_GetMenuPosition_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.MenuAnchor.FitInWindow
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bFit                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMenuAnchor::FitInWindow(bool bFit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuAnchor", "FitInWindow");

	Params::UMenuAnchor_FitInWindow_Params Parms{};

	Parms.bFit = bFit;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.MenuAnchor.Close
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UMenuAnchor::Close()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MenuAnchor", "Close");

	Params::UMenuAnchor_Close_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.RetainerBox.SetTextureParameter
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        TextureParameter                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URetainerBox::SetTextureParameter(class FName TextureParameter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RetainerBox", "SetTextureParameter");

	Params::URetainerBox_SetTextureParameter_Params Parms{};

	Parms.TextureParameter = TextureParameter;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.RetainerBox.SetRetainRendering
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInRetainRendering                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URetainerBox::SetRetainRendering(bool bInRetainRendering)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RetainerBox", "SetRetainRendering");

	Params::URetainerBox_SetRetainRendering_Params Parms{};

	Parms.bInRetainRendering = bInRetainRendering;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.RetainerBox.SetRenderingPhase
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              RenderPhase                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              TotalPhases                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URetainerBox::SetRenderingPhase(int32 RenderPhase, int32 TotalPhases)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RetainerBox", "SetRenderingPhase");

	Params::URetainerBox_SetRenderingPhase_Params Parms{};

	Parms.RenderPhase = RenderPhase;
	Parms.TotalPhases = TotalPhases;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.RetainerBox.SetEffectMaterial
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMaterialInterface*          EffectMaterial                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void URetainerBox::SetEffectMaterial(class UMaterialInterface* EffectMaterial)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RetainerBox", "SetEffectMaterial");

	Params::URetainerBox_SetEffectMaterial_Params Parms{};

	Parms.EffectMaterial = EffectMaterial;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.RetainerBox.RequestRender
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void URetainerBox::RequestRender()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RetainerBox", "RequestRender");

	Params::URetainerBox_RequestRender_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.RetainerBox.GetEffectMaterial
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UMaterialInstanceDynamic*    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMaterialInstanceDynamic* URetainerBox::GetEffectMaterial()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RetainerBox", "GetEffectMaterial");

	Params::URetainerBox_GetEffectMaterial_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.SafeZone.SetSidesToPad
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               InPadLeft                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               InPadRight                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               InPadTop                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               InPadBottom                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USafeZone::SetSidesToPad(bool InPadLeft, bool InPadRight, bool InPadTop, bool InPadBottom)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SafeZone", "SetSidesToPad");

	Params::USafeZone_SetSidesToPad_Params Parms{};

	Parms.InPadLeft = InPadLeft;
	Parms.InPadRight = InPadRight;
	Parms.InPadTop = InPadTop;
	Parms.InPadBottom = InPadBottom;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.ScaleBox.SetUserSpecifiedScale
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InUserSpecifiedScale                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UScaleBox::SetUserSpecifiedScale(float InUserSpecifiedScale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScaleBox", "SetUserSpecifiedScale");

	Params::UScaleBox_SetUserSpecifiedScale_Params Parms{};

	Parms.InUserSpecifiedScale = InUserSpecifiedScale;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.ScaleBox.SetStretchDirection
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EStretchDirection       InStretchDirection                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UScaleBox::SetStretchDirection(enum class EStretchDirection InStretchDirection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScaleBox", "SetStretchDirection");

	Params::UScaleBox_SetStretchDirection_Params Parms{};

	Parms.InStretchDirection = InStretchDirection;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.ScaleBox.SetStretch
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EStretch                InStretch                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UScaleBox::SetStretch(enum class EStretch InStretch)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScaleBox", "SetStretch");

	Params::UScaleBox_SetStretch_Params Parms{};

	Parms.InStretch = InStretch;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.ScaleBox.SetIgnoreInheritedScale
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInIgnoreInheritedScale                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UScaleBox::SetIgnoreInheritedScale(bool bInIgnoreInheritedScale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScaleBox", "SetIgnoreInheritedScale");

	Params::UScaleBox_SetIgnoreInheritedScale_Params Parms{};

	Parms.bInIgnoreInheritedScale = bInIgnoreInheritedScale;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.ScaleBoxSlot.SetVerticalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EVerticalAlignment      InVerticalAlignment                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UScaleBoxSlot::SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScaleBoxSlot", "SetVerticalAlignment");

	Params::UScaleBoxSlot_SetVerticalAlignment_Params Parms{};

	Parms.InVerticalAlignment = InVerticalAlignment;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.ScaleBoxSlot.SetPadding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMargin                     InPadding                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void UScaleBoxSlot::SetPadding(const struct FMargin& InPadding)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScaleBoxSlot", "SetPadding");

	Params::UScaleBoxSlot_SetPadding_Params Parms{};

	Parms.InPadding = InPadding;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.ScaleBoxSlot.SetHorizontalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EHorizontalAlignment    InHorizontalAlignment                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UScaleBoxSlot::SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScaleBoxSlot", "SetHorizontalAlignment");

	Params::UScaleBoxSlot_SetHorizontalAlignment_Params Parms{};

	Parms.InHorizontalAlignment = InHorizontalAlignment;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.ScrollBar.SetState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InOffsetFraction                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InThumbSizeFraction                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UScrollBar::SetState(float InOffsetFraction, float InThumbSizeFraction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScrollBar", "SetState");

	Params::UScrollBar_SetState_Params Parms{};

	Parms.InOffsetFraction = InOffsetFraction;
	Parms.InThumbSizeFraction = InThumbSizeFraction;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.ScrollBoxSlot.SetVerticalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EVerticalAlignment      InVerticalAlignment                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UScrollBoxSlot::SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScrollBoxSlot", "SetVerticalAlignment");

	Params::UScrollBoxSlot_SetVerticalAlignment_Params Parms{};

	Parms.InVerticalAlignment = InVerticalAlignment;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.ScrollBoxSlot.SetPadding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMargin                     InPadding                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void UScrollBoxSlot::SetPadding(const struct FMargin& InPadding)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScrollBoxSlot", "SetPadding");

	Params::UScrollBoxSlot_SetPadding_Params Parms{};

	Parms.InPadding = InPadding;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.ScrollBoxSlot.SetHorizontalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EHorizontalAlignment    InHorizontalAlignment                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UScrollBoxSlot::SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScrollBoxSlot", "SetHorizontalAlignment");

	Params::UScrollBoxSlot_SetHorizontalAlignment_Params Parms{};

	Parms.InHorizontalAlignment = InHorizontalAlignment;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.SizeBoxSlot.SetVerticalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EVerticalAlignment      InVerticalAlignment                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USizeBoxSlot::SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SizeBoxSlot", "SetVerticalAlignment");

	Params::USizeBoxSlot_SetVerticalAlignment_Params Parms{};

	Parms.InVerticalAlignment = InVerticalAlignment;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.SizeBoxSlot.SetPadding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMargin                     InPadding                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void USizeBoxSlot::SetPadding(const struct FMargin& InPadding)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SizeBoxSlot", "SetPadding");

	Params::USizeBoxSlot_SetPadding_Params Parms{};

	Parms.InPadding = InPadding;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.SizeBoxSlot.SetHorizontalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EHorizontalAlignment    InHorizontalAlignment                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USizeBoxSlot::SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SizeBoxSlot", "SetHorizontalAlignment");

	Params::USizeBoxSlot_SetHorizontalAlignment_Params Parms{};

	Parms.InHorizontalAlignment = InHorizontalAlignment;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.Spacer.SetSize
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D                   InSize                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USpacer::SetSize(const struct FVector2D& InSize)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Spacer", "SetSize");

	Params::USpacer_SetSize_Params Parms{};

	Parms.InSize = InSize;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.SpinBox.SetValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              NewValue                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USpinBox::SetValue(float NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpinBox", "SetValue");

	Params::USpinBox_SetValue_Params Parms{};

	Parms.NewValue = NewValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.SpinBox.SetMinValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              NewValue                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USpinBox::SetMinValue(float NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpinBox", "SetMinValue");

	Params::USpinBox_SetMinValue_Params Parms{};

	Parms.NewValue = NewValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.SpinBox.SetMinSliderValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              NewValue                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USpinBox::SetMinSliderValue(float NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpinBox", "SetMinSliderValue");

	Params::USpinBox_SetMinSliderValue_Params Parms{};

	Parms.NewValue = NewValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.SpinBox.SetMinFractionalDigits
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              NewValue                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USpinBox::SetMinFractionalDigits(int32 NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpinBox", "SetMinFractionalDigits");

	Params::USpinBox_SetMinFractionalDigits_Params Parms{};

	Parms.NewValue = NewValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.SpinBox.SetMaxValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              NewValue                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USpinBox::SetMaxValue(float NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpinBox", "SetMaxValue");

	Params::USpinBox_SetMaxValue_Params Parms{};

	Parms.NewValue = NewValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.SpinBox.SetMaxSliderValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              NewValue                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USpinBox::SetMaxSliderValue(float NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpinBox", "SetMaxSliderValue");

	Params::USpinBox_SetMaxSliderValue_Params Parms{};

	Parms.NewValue = NewValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.SpinBox.SetMaxFractionalDigits
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              NewValue                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USpinBox::SetMaxFractionalDigits(int32 NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpinBox", "SetMaxFractionalDigits");

	Params::USpinBox_SetMaxFractionalDigits_Params Parms{};

	Parms.NewValue = NewValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.SpinBox.SetForegroundColor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FSlateColor                 InForegroundColor                                                (Parm, NativeAccessSpecifierPublic)

void USpinBox::SetForegroundColor(const struct FSlateColor& InForegroundColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpinBox", "SetForegroundColor");

	Params::USpinBox_SetForegroundColor_Params Parms{};

	Parms.InForegroundColor = InForegroundColor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.SpinBox.SetDelta
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              NewValue                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USpinBox::SetDelta(float NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpinBox", "SetDelta");

	Params::USpinBox_SetDelta_Params Parms{};

	Parms.NewValue = NewValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.SpinBox.SetAlwaysUsesDeltaSnap
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bNewValue                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USpinBox::SetAlwaysUsesDeltaSnap(bool bNewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpinBox", "SetAlwaysUsesDeltaSnap");

	Params::USpinBox_SetAlwaysUsesDeltaSnap_Params Parms{};

	Parms.bNewValue = bNewValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// DelegateFunction UMG.SpinBox.OnSpinBoxValueCommittedEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// float                              InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ETextCommit             CommitMethod                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USpinBox::OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, enum class ETextCommit CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpinBox", "OnSpinBoxValueCommittedEvent__DelegateSignature");

	Params::USpinBox_OnSpinBoxValueCommittedEvent__DelegateSignature_Params Parms{};

	Parms.InValue = InValue;
	Parms.CommitMethod = CommitMethod;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction UMG.SpinBox.OnSpinBoxValueChangedEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// float                              InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USpinBox::OnSpinBoxValueChangedEvent__DelegateSignature(float InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpinBox", "OnSpinBoxValueChangedEvent__DelegateSignature");

	Params::USpinBox_OnSpinBoxValueChangedEvent__DelegateSignature_Params Parms{};

	Parms.InValue = InValue;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction UMG.SpinBox.OnSpinBoxBeginSliderMovement__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:

void USpinBox::OnSpinBoxBeginSliderMovement__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpinBox", "OnSpinBoxBeginSliderMovement__DelegateSignature");

	Params::USpinBox_OnSpinBoxBeginSliderMovement__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG.SpinBox.GetValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float USpinBox::GetValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpinBox", "GetValue");

	Params::USpinBox_GetValue_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.SpinBox.GetMinValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float USpinBox::GetMinValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpinBox", "GetMinValue");

	Params::USpinBox_GetMinValue_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.SpinBox.GetMinSliderValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float USpinBox::GetMinSliderValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpinBox", "GetMinSliderValue");

	Params::USpinBox_GetMinSliderValue_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.SpinBox.GetMinFractionalDigits
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 USpinBox::GetMinFractionalDigits()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpinBox", "GetMinFractionalDigits");

	Params::USpinBox_GetMinFractionalDigits_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.SpinBox.GetMaxValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float USpinBox::GetMaxValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpinBox", "GetMaxValue");

	Params::USpinBox_GetMaxValue_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.SpinBox.GetMaxSliderValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float USpinBox::GetMaxSliderValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpinBox", "GetMaxSliderValue");

	Params::USpinBox_GetMaxSliderValue_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.SpinBox.GetMaxFractionalDigits
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 USpinBox::GetMaxFractionalDigits()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpinBox", "GetMaxFractionalDigits");

	Params::USpinBox_GetMaxFractionalDigits_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.SpinBox.GetDelta
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float USpinBox::GetDelta()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpinBox", "GetDelta");

	Params::USpinBox_GetDelta_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.SpinBox.GetAlwaysUsesDeltaSnap
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USpinBox::GetAlwaysUsesDeltaSnap()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpinBox", "GetAlwaysUsesDeltaSnap");

	Params::USpinBox_GetAlwaysUsesDeltaSnap_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.SpinBox.ClearMinValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USpinBox::ClearMinValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpinBox", "ClearMinValue");

	Params::USpinBox_ClearMinValue_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.SpinBox.ClearMinSliderValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USpinBox::ClearMinSliderValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpinBox", "ClearMinSliderValue");

	Params::USpinBox_ClearMinSliderValue_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.SpinBox.ClearMaxValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USpinBox::ClearMaxValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpinBox", "ClearMaxValue");

	Params::USpinBox_ClearMaxValue_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.SpinBox.ClearMaxSliderValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USpinBox::ClearMaxSliderValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpinBox", "ClearMaxSliderValue");

	Params::USpinBox_ClearMaxSliderValue_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.StackBox.AddChildToStackBox
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                     Content                                                          (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UStackBoxSlot*               ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UStackBoxSlot* UStackBox::AddChildToStackBox(class UWidget* Content)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StackBox", "AddChildToStackBox");

	Params::UStackBox_AddChildToStackBox_Params Parms{};

	Parms.Content = Content;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.Throbber.SetNumberOfPieces
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              InNumberOfPieces                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UThrobber::SetNumberOfPieces(int32 InNumberOfPieces)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Throbber", "SetNumberOfPieces");

	Params::UThrobber_SetNumberOfPieces_Params Parms{};

	Parms.InNumberOfPieces = InNumberOfPieces;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.Throbber.SetAnimateVertically
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInAnimateVertically                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UThrobber::SetAnimateVertically(bool bInAnimateVertically)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Throbber", "SetAnimateVertically");

	Params::UThrobber_SetAnimateVertically_Params Parms{};

	Parms.bInAnimateVertically = bInAnimateVertically;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.Throbber.SetAnimateOpacity
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInAnimateOpacity                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UThrobber::SetAnimateOpacity(bool bInAnimateOpacity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Throbber", "SetAnimateOpacity");

	Params::UThrobber_SetAnimateOpacity_Params Parms{};

	Parms.bInAnimateOpacity = bInAnimateOpacity;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.Throbber.SetAnimateHorizontally
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInAnimateHorizontally                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UThrobber::SetAnimateHorizontally(bool bInAnimateHorizontally)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Throbber", "SetAnimateHorizontally");

	Params::UThrobber_SetAnimateHorizontally_Params Parms{};

	Parms.bInAnimateHorizontally = bInAnimateHorizontally;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.UniformGridPanel.SetSlotPadding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMargin                     InSlotPadding                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void UUniformGridPanel::SetSlotPadding(const struct FMargin& InSlotPadding)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UniformGridPanel", "SetSlotPadding");

	Params::UUniformGridPanel_SetSlotPadding_Params Parms{};

	Parms.InSlotPadding = InSlotPadding;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.UniformGridPanel.SetMinDesiredSlotWidth
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InMinDesiredSlotWidth                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUniformGridPanel::SetMinDesiredSlotWidth(float InMinDesiredSlotWidth)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UniformGridPanel", "SetMinDesiredSlotWidth");

	Params::UUniformGridPanel_SetMinDesiredSlotWidth_Params Parms{};

	Parms.InMinDesiredSlotWidth = InMinDesiredSlotWidth;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.UniformGridPanel.SetMinDesiredSlotHeight
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InMinDesiredSlotHeight                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUniformGridPanel::SetMinDesiredSlotHeight(float InMinDesiredSlotHeight)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UniformGridPanel", "SetMinDesiredSlotHeight");

	Params::UUniformGridPanel_SetMinDesiredSlotHeight_Params Parms{};

	Parms.InMinDesiredSlotHeight = InMinDesiredSlotHeight;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.UniformGridPanel.AddChildToUniformGrid
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                     Content                                                          (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              InRow                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              InColumn                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UUniformGridSlot*            ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UUniformGridSlot* UUniformGridPanel::AddChildToUniformGrid(class UWidget* Content, int32 InRow, int32 InColumn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UniformGridPanel", "AddChildToUniformGrid");

	Params::UUniformGridPanel_AddChildToUniformGrid_Params Parms{};

	Parms.Content = Content;
	Parms.InRow = InRow;
	Parms.InColumn = InColumn;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.UniformGridSlot.SetVerticalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EVerticalAlignment      InVerticalAlignment                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUniformGridSlot::SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UniformGridSlot", "SetVerticalAlignment");

	Params::UUniformGridSlot_SetVerticalAlignment_Params Parms{};

	Parms.InVerticalAlignment = InVerticalAlignment;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.UniformGridSlot.SetRow
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              InRow                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUniformGridSlot::SetRow(int32 InRow)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UniformGridSlot", "SetRow");

	Params::UUniformGridSlot_SetRow_Params Parms{};

	Parms.InRow = InRow;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.UniformGridSlot.SetHorizontalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EHorizontalAlignment    InHorizontalAlignment                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUniformGridSlot::SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UniformGridSlot", "SetHorizontalAlignment");

	Params::UUniformGridSlot_SetHorizontalAlignment_Params Parms{};

	Parms.InHorizontalAlignment = InHorizontalAlignment;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.UniformGridSlot.SetColumn
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              InColumn                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UUniformGridSlot::SetColumn(int32 InColumn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UniformGridSlot", "SetColumn");

	Params::UUniformGridSlot_SetColumn_Params Parms{};

	Parms.InColumn = InColumn;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.VerticalBox.AddChildToVerticalBox
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                     Content                                                          (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UVerticalBoxSlot*            ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UVerticalBoxSlot* UVerticalBox::AddChildToVerticalBox(class UWidget* Content)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerticalBox", "AddChildToVerticalBox");

	Params::UVerticalBox_AddChildToVerticalBox_Params Parms{};

	Parms.Content = Content;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.VerticalBoxSlot.SetVerticalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EVerticalAlignment      InVerticalAlignment                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVerticalBoxSlot::SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerticalBoxSlot", "SetVerticalAlignment");

	Params::UVerticalBoxSlot_SetVerticalAlignment_Params Parms{};

	Parms.InVerticalAlignment = InVerticalAlignment;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.VerticalBoxSlot.SetSize
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FSlateChildSize             InSize                                                           (Parm, NoDestructor, NativeAccessSpecifierPublic)

void UVerticalBoxSlot::SetSize(const struct FSlateChildSize& InSize)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerticalBoxSlot", "SetSize");

	Params::UVerticalBoxSlot_SetSize_Params Parms{};

	Parms.InSize = InSize;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.VerticalBoxSlot.SetPadding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMargin                     InPadding                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void UVerticalBoxSlot::SetPadding(const struct FMargin& InPadding)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerticalBoxSlot", "SetPadding");

	Params::UVerticalBoxSlot_SetPadding_Params Parms{};

	Parms.InPadding = InPadding;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.VerticalBoxSlot.SetHorizontalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EHorizontalAlignment    InHorizontalAlignment                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVerticalBoxSlot::SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerticalBoxSlot", "SetHorizontalAlignment");

	Params::UVerticalBoxSlot_SetHorizontalAlignment_Params Parms{};

	Parms.InHorizontalAlignment = InHorizontalAlignment;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.Viewport.Spawn
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TSubclassOf<class AActor>          ActorClass                                                       (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class AActor* UViewport::Spawn(TSubclassOf<class AActor> ActorClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Viewport", "Spawn");

	Params::UViewport_Spawn_Params Parms{};

	Parms.ActorClass = ActorClass;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.Viewport.SetViewRotation
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRotator                    Rotation                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void UViewport::SetViewRotation(const struct FRotator& Rotation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Viewport", "SetViewRotation");

	Params::UViewport_SetViewRotation_Params Parms{};

	Parms.Rotation = Rotation;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.Viewport.SetViewLocation
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     Location                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UViewport::SetViewLocation(const struct FVector& Location)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Viewport", "SetViewLocation");

	Params::UViewport_SetViewLocation_Params Parms{};

	Parms.Location = Location;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.Viewport.GetViewRotation
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRotator                    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FRotator UViewport::GetViewRotation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Viewport", "GetViewRotation");

	Params::UViewport_GetViewRotation_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.Viewport.GetViewportWorld
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UWorld*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UWorld* UViewport::GetViewportWorld()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Viewport", "GetViewportWorld");

	Params::UViewport_GetViewportWorld_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.Viewport.GetViewLocation
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UViewport::GetViewLocation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Viewport", "GetViewLocation");

	Params::UViewport_GetViewLocation_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.WidgetComponent.SetWindowVisibility
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EWindowVisibility       InVisibility                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWidgetComponent::SetWindowVisibility(enum class EWindowVisibility InVisibility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetComponent", "SetWindowVisibility");

	Params::UWidgetComponent_SetWindowVisibility_Params Parms{};

	Parms.InVisibility = InVisibility;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.WidgetComponent.SetWindowFocusable
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInWindowFocusable                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWidgetComponent::SetWindowFocusable(bool bInWindowFocusable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetComponent", "SetWindowFocusable");

	Params::UWidgetComponent_SetWindowFocusable_Params Parms{};

	Parms.bInWindowFocusable = bInWindowFocusable;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.WidgetComponent.SetWidgetSpace
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EWidgetSpace            NewSpace                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWidgetComponent::SetWidgetSpace(enum class EWidgetSpace NewSpace)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetComponent", "SetWidgetSpace");

	Params::UWidgetComponent_SetWidgetSpace_Params Parms{};

	Parms.NewSpace = NewSpace;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.WidgetComponent.SetWidget
// (Native, Public, BlueprintCallable)
// Parameters:
// class UUserWidget*                 Widget                                                           (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWidgetComponent::SetWidget(class UUserWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetComponent", "SetWidget");

	Params::UWidgetComponent_SetWidget_Params Parms{};

	Parms.Widget = Widget;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.WidgetComponent.SetTwoSided
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bWantTwoSided                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWidgetComponent::SetTwoSided(bool bWantTwoSided)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetComponent", "SetTwoSided");

	Params::UWidgetComponent_SetTwoSided_Params Parms{};

	Parms.bWantTwoSided = bWantTwoSided;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.WidgetComponent.SetTintColorAndOpacity
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor                NewTintColorAndOpacity                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWidgetComponent::SetTintColorAndOpacity(const struct FLinearColor& NewTintColorAndOpacity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetComponent", "SetTintColorAndOpacity");

	Params::UWidgetComponent_SetTintColorAndOpacity_Params Parms{};

	Parms.NewTintColorAndOpacity = NewTintColorAndOpacity;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.WidgetComponent.SetTickWhenOffscreen
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bWantTickWhenOffscreen                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWidgetComponent::SetTickWhenOffscreen(bool bWantTickWhenOffscreen)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetComponent", "SetTickWhenOffscreen");

	Params::UWidgetComponent_SetTickWhenOffscreen_Params Parms{};

	Parms.bWantTickWhenOffscreen = bWantTickWhenOffscreen;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.WidgetComponent.SetTickMode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ETickMode               InTickMode                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWidgetComponent::SetTickMode(enum class ETickMode InTickMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetComponent", "SetTickMode");

	Params::UWidgetComponent_SetTickMode_Params Parms{};

	Parms.InTickMode = InTickMode;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.WidgetComponent.SetRedrawTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InRedrawTime                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWidgetComponent::SetRedrawTime(float InRedrawTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetComponent", "SetRedrawTime");

	Params::UWidgetComponent_SetRedrawTime_Params Parms{};

	Parms.InRedrawTime = InRedrawTime;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.WidgetComponent.SetPivot
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D                   InPivot                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWidgetComponent::SetPivot(struct FVector2D& InPivot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetComponent", "SetPivot");

	Params::UWidgetComponent_SetPivot_Params Parms{};

	Parms.InPivot = InPivot;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.WidgetComponent.SetOwnerPlayer
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ULocalPlayer*                LocalPlayer                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWidgetComponent::SetOwnerPlayer(class ULocalPlayer* LocalPlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetComponent", "SetOwnerPlayer");

	Params::UWidgetComponent_SetOwnerPlayer_Params Parms{};

	Parms.LocalPlayer = LocalPlayer;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.WidgetComponent.SetManuallyRedraw
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bUseManualRedraw                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWidgetComponent::SetManuallyRedraw(bool bUseManualRedraw)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetComponent", "SetManuallyRedraw");

	Params::UWidgetComponent_SetManuallyRedraw_Params Parms{};

	Parms.bUseManualRedraw = bUseManualRedraw;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.WidgetComponent.SetGeometryMode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EWidgetGeometryMode     InGeometryMode                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWidgetComponent::SetGeometryMode(enum class EWidgetGeometryMode InGeometryMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetComponent", "SetGeometryMode");

	Params::UWidgetComponent_SetGeometryMode_Params Parms{};

	Parms.InGeometryMode = InGeometryMode;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.WidgetComponent.SetDrawSize
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D                   Size                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWidgetComponent::SetDrawSize(const struct FVector2D& Size)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetComponent", "SetDrawSize");

	Params::UWidgetComponent_SetDrawSize_Params Parms{};

	Parms.Size = Size;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.WidgetComponent.SetDrawAtDesiredSize
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInDrawAtDesiredSize                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWidgetComponent::SetDrawAtDesiredSize(bool bInDrawAtDesiredSize)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetComponent", "SetDrawAtDesiredSize");

	Params::UWidgetComponent_SetDrawAtDesiredSize_Params Parms{};

	Parms.bInDrawAtDesiredSize = bInDrawAtDesiredSize;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.WidgetComponent.SetCylinderArcAngle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InCylinderArcAngle                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWidgetComponent::SetCylinderArcAngle(float InCylinderArcAngle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetComponent", "SetCylinderArcAngle");

	Params::UWidgetComponent_SetCylinderArcAngle_Params Parms{};

	Parms.InCylinderArcAngle = InCylinderArcAngle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.WidgetComponent.SetBackgroundColor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor                NewBackgroundColor                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWidgetComponent::SetBackgroundColor(const struct FLinearColor& NewBackgroundColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetComponent", "SetBackgroundColor");

	Params::UWidgetComponent_SetBackgroundColor_Params Parms{};

	Parms.NewBackgroundColor = NewBackgroundColor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.WidgetComponent.RequestRenderUpdate
// (Native, Public, BlueprintCallable)
// Parameters:

void UWidgetComponent::RequestRenderUpdate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetComponent", "RequestRenderUpdate");

	Params::UWidgetComponent_RequestRenderUpdate_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.WidgetComponent.RequestRedraw
// (Native, Public, BlueprintCallable)
// Parameters:

void UWidgetComponent::RequestRedraw()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetComponent", "RequestRedraw");

	Params::UWidgetComponent_RequestRedraw_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.WidgetComponent.IsWidgetVisible
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UWidgetComponent::IsWidgetVisible()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetComponent", "IsWidgetVisible");

	Params::UWidgetComponent_IsWidgetVisible_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.WidgetComponent.GetWindowVisiblility
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EWindowVisibility       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EWindowVisibility UWidgetComponent::GetWindowVisiblility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetComponent", "GetWindowVisiblility");

	Params::UWidgetComponent_GetWindowVisiblility_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.WidgetComponent.GetWindowFocusable
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UWidgetComponent::GetWindowFocusable()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetComponent", "GetWindowFocusable");

	Params::UWidgetComponent_GetWindowFocusable_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.WidgetComponent.GetWidgetSpace
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EWidgetSpace            ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EWidgetSpace UWidgetComponent::GetWidgetSpace()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetComponent", "GetWidgetSpace");

	Params::UWidgetComponent_GetWidgetSpace_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.WidgetComponent.GetWidget
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UUserWidget*                 ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UUserWidget* UWidgetComponent::GetWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetComponent", "GetWidget");

	Params::UWidgetComponent_GetWidget_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.WidgetComponent.GetUserWidgetObject
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UUserWidget*                 ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UUserWidget* UWidgetComponent::GetUserWidgetObject()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetComponent", "GetUserWidgetObject");

	Params::UWidgetComponent_GetUserWidgetObject_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.WidgetComponent.GetTwoSided
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UWidgetComponent::GetTwoSided()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetComponent", "GetTwoSided");

	Params::UWidgetComponent_GetTwoSided_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.WidgetComponent.GetTickWhenOffscreen
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UWidgetComponent::GetTickWhenOffscreen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetComponent", "GetTickWhenOffscreen");

	Params::UWidgetComponent_GetTickWhenOffscreen_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.WidgetComponent.GetRenderTarget
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UTextureRenderTarget2D*      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UTextureRenderTarget2D* UWidgetComponent::GetRenderTarget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetComponent", "GetRenderTarget");

	Params::UWidgetComponent_GetRenderTarget_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.WidgetComponent.GetRedrawTime
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UWidgetComponent::GetRedrawTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetComponent", "GetRedrawTime");

	Params::UWidgetComponent_GetRedrawTime_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.WidgetComponent.GetPivot
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector2D                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector2D UWidgetComponent::GetPivot()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetComponent", "GetPivot");

	Params::UWidgetComponent_GetPivot_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.WidgetComponent.GetOwnerPlayer
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ULocalPlayer*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULocalPlayer* UWidgetComponent::GetOwnerPlayer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetComponent", "GetOwnerPlayer");

	Params::UWidgetComponent_GetOwnerPlayer_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.WidgetComponent.GetMaterialInstance
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UMaterialInstanceDynamic*    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMaterialInstanceDynamic* UWidgetComponent::GetMaterialInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetComponent", "GetMaterialInstance");

	Params::UWidgetComponent_GetMaterialInstance_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.WidgetComponent.GetManuallyRedraw
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UWidgetComponent::GetManuallyRedraw()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetComponent", "GetManuallyRedraw");

	Params::UWidgetComponent_GetManuallyRedraw_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.WidgetComponent.GetGeometryMode
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EWidgetGeometryMode     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EWidgetGeometryMode UWidgetComponent::GetGeometryMode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetComponent", "GetGeometryMode");

	Params::UWidgetComponent_GetGeometryMode_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.WidgetComponent.GetDrawSize
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector2D                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector2D UWidgetComponent::GetDrawSize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetComponent", "GetDrawSize");

	Params::UWidgetComponent_GetDrawSize_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.WidgetComponent.GetDrawAtDesiredSize
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UWidgetComponent::GetDrawAtDesiredSize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetComponent", "GetDrawAtDesiredSize");

	Params::UWidgetComponent_GetDrawAtDesiredSize_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.WidgetComponent.GetCylinderArcAngle
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UWidgetComponent::GetCylinderArcAngle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetComponent", "GetCylinderArcAngle");

	Params::UWidgetComponent_GetCylinderArcAngle_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.WidgetComponent.GetCurrentDrawSize
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector2D                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector2D UWidgetComponent::GetCurrentDrawSize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetComponent", "GetCurrentDrawSize");

	Params::UWidgetComponent_GetCurrentDrawSize_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.WidgetInteractionComponent.SetFocus
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                     FocusWidget                                                      (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWidgetInteractionComponent::SetFocus(class UWidget* FocusWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetInteractionComponent", "SetFocus");

	Params::UWidgetInteractionComponent_SetFocus_Params Parms{};

	Parms.FocusWidget = FocusWidget;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.WidgetInteractionComponent.SetCustomHitResult
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FHitResult                  HitResult                                                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UWidgetInteractionComponent::SetCustomHitResult(struct FHitResult& HitResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetInteractionComponent", "SetCustomHitResult");

	Params::UWidgetInteractionComponent_SetCustomHitResult_Params Parms{};

	Parms.HitResult = HitResult;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.WidgetInteractionComponent.SendKeyChar
// (Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Characters                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bRepeat                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UWidgetInteractionComponent::SendKeyChar(const class FString& Characters, bool bRepeat)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetInteractionComponent", "SendKeyChar");

	Params::UWidgetInteractionComponent_SendKeyChar_Params Parms{};

	Parms.Characters = Characters;
	Parms.bRepeat = bRepeat;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.WidgetInteractionComponent.ScrollWheel
// (Native, Public, BlueprintCallable)
// Parameters:
// float                              ScrollDelta                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWidgetInteractionComponent::ScrollWheel(float ScrollDelta)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetInteractionComponent", "ScrollWheel");

	Params::UWidgetInteractionComponent_ScrollWheel_Params Parms{};

	Parms.ScrollDelta = ScrollDelta;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.WidgetInteractionComponent.ReleasePointerKey
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FKey                        Key                                                              (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWidgetInteractionComponent::ReleasePointerKey(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetInteractionComponent", "ReleasePointerKey");

	Params::UWidgetInteractionComponent_ReleasePointerKey_Params Parms{};

	Parms.Key = Key;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.WidgetInteractionComponent.ReleaseKey
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FKey                        Key                                                              (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UWidgetInteractionComponent::ReleaseKey(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetInteractionComponent", "ReleaseKey");

	Params::UWidgetInteractionComponent_ReleaseKey_Params Parms{};

	Parms.Key = Key;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.WidgetInteractionComponent.PressPointerKey
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FKey                        Key                                                              (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWidgetInteractionComponent::PressPointerKey(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetInteractionComponent", "PressPointerKey");

	Params::UWidgetInteractionComponent_PressPointerKey_Params Parms{};

	Parms.Key = Key;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.WidgetInteractionComponent.PressKey
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FKey                        Key                                                              (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bRepeat                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UWidgetInteractionComponent::PressKey(const struct FKey& Key, bool bRepeat)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetInteractionComponent", "PressKey");

	Params::UWidgetInteractionComponent_PressKey_Params Parms{};

	Parms.Key = Key;
	Parms.bRepeat = bRepeat;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.WidgetInteractionComponent.PressAndReleaseKey
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FKey                        Key                                                              (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UWidgetInteractionComponent::PressAndReleaseKey(const struct FKey& Key)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetInteractionComponent", "PressAndReleaseKey");

	Params::UWidgetInteractionComponent_PressAndReleaseKey_Params Parms{};

	Parms.Key = Key;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.WidgetInteractionComponent.IsOverInteractableWidget
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UWidgetInteractionComponent::IsOverInteractableWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetInteractionComponent", "IsOverInteractableWidget");

	Params::UWidgetInteractionComponent_IsOverInteractableWidget_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.WidgetInteractionComponent.IsOverHitTestVisibleWidget
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UWidgetInteractionComponent::IsOverHitTestVisibleWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetInteractionComponent", "IsOverHitTestVisibleWidget");

	Params::UWidgetInteractionComponent_IsOverHitTestVisibleWidget_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.WidgetInteractionComponent.IsOverFocusableWidget
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UWidgetInteractionComponent::IsOverFocusableWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetInteractionComponent", "IsOverFocusableWidget");

	Params::UWidgetInteractionComponent_IsOverFocusableWidget_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.WidgetInteractionComponent.GetLastHitResult
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FHitResult                  ReturnValue                                                      (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

struct FHitResult UWidgetInteractionComponent::GetLastHitResult()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetInteractionComponent", "GetLastHitResult");

	Params::UWidgetInteractionComponent_GetLastHitResult_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.WidgetInteractionComponent.GetHoveredWidgetComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UWidgetComponent*            ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UWidgetComponent* UWidgetInteractionComponent::GetHoveredWidgetComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetInteractionComponent", "GetHoveredWidgetComponent");

	Params::UWidgetInteractionComponent_GetHoveredWidgetComponent_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.WidgetInteractionComponent.Get2DHitLocation
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector2D                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector2D UWidgetInteractionComponent::Get2DHitLocation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetInteractionComponent", "Get2DHitLocation");

	Params::UWidgetInteractionComponent_Get2DHitLocation_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.WidgetSwitcherSlot.SetVerticalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EVerticalAlignment      InVerticalAlignment                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWidgetSwitcherSlot::SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetSwitcherSlot", "SetVerticalAlignment");

	Params::UWidgetSwitcherSlot_SetVerticalAlignment_Params Parms{};

	Parms.InVerticalAlignment = InVerticalAlignment;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.WidgetSwitcherSlot.SetPadding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMargin                     InPadding                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void UWidgetSwitcherSlot::SetPadding(const struct FMargin& InPadding)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetSwitcherSlot", "SetPadding");

	Params::UWidgetSwitcherSlot_SetPadding_Params Parms{};

	Parms.InPadding = InPadding;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.WidgetSwitcherSlot.SetHorizontalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EHorizontalAlignment    InHorizontalAlignment                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWidgetSwitcherSlot::SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetSwitcherSlot", "SetHorizontalAlignment");

	Params::UWidgetSwitcherSlot_SetHorizontalAlignment_Params Parms{};

	Parms.InHorizontalAlignment = InHorizontalAlignment;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.WindowTitleBarArea.SetVerticalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EVerticalAlignment      InVerticalAlignment                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWindowTitleBarArea::SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WindowTitleBarArea", "SetVerticalAlignment");

	Params::UWindowTitleBarArea_SetVerticalAlignment_Params Parms{};

	Parms.InVerticalAlignment = InVerticalAlignment;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.WindowTitleBarArea.SetPadding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMargin                     InPadding                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void UWindowTitleBarArea::SetPadding(const struct FMargin& InPadding)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WindowTitleBarArea", "SetPadding");

	Params::UWindowTitleBarArea_SetPadding_Params Parms{};

	Parms.InPadding = InPadding;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.WindowTitleBarArea.SetHorizontalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EHorizontalAlignment    InHorizontalAlignment                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWindowTitleBarArea::SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WindowTitleBarArea", "SetHorizontalAlignment");

	Params::UWindowTitleBarArea_SetHorizontalAlignment_Params Parms{};

	Parms.InHorizontalAlignment = InHorizontalAlignment;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.WindowTitleBarAreaSlot.SetVerticalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EVerticalAlignment      InVerticalAlignment                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWindowTitleBarAreaSlot::SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WindowTitleBarAreaSlot", "SetVerticalAlignment");

	Params::UWindowTitleBarAreaSlot_SetVerticalAlignment_Params Parms{};

	Parms.InVerticalAlignment = InVerticalAlignment;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.WindowTitleBarAreaSlot.SetPadding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMargin                     InPadding                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void UWindowTitleBarAreaSlot::SetPadding(const struct FMargin& InPadding)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WindowTitleBarAreaSlot", "SetPadding");

	Params::UWindowTitleBarAreaSlot_SetPadding_Params Parms{};

	Parms.InPadding = InPadding;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.WindowTitleBarAreaSlot.SetHorizontalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EHorizontalAlignment    InHorizontalAlignment                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWindowTitleBarAreaSlot::SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WindowTitleBarAreaSlot", "SetHorizontalAlignment");

	Params::UWindowTitleBarAreaSlot_SetHorizontalAlignment_Params Parms{};

	Parms.InHorizontalAlignment = InHorizontalAlignment;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.WrapBox.SetInnerSlotPadding
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D                   InPadding                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWrapBox::SetInnerSlotPadding(const struct FVector2D& InPadding)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WrapBox", "SetInnerSlotPadding");

	Params::UWrapBox_SetInnerSlotPadding_Params Parms{};

	Parms.InPadding = InPadding;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.WrapBox.SetHorizontalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EHorizontalAlignment    InHorizontalAlignment                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWrapBox::SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WrapBox", "SetHorizontalAlignment");

	Params::UWrapBox_SetHorizontalAlignment_Params Parms{};

	Parms.InHorizontalAlignment = InHorizontalAlignment;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.WrapBox.AddChildToWrapBox
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                     Content                                                          (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWrapBoxSlot*                ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UWrapBoxSlot* UWrapBox::AddChildToWrapBox(class UWidget* Content)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WrapBox", "AddChildToWrapBox");

	Params::UWrapBox_AddChildToWrapBox_Params Parms{};

	Parms.Content = Content;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.WrapBoxSlot.SetVerticalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EVerticalAlignment      InVerticalAlignment                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWrapBoxSlot::SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WrapBoxSlot", "SetVerticalAlignment");

	Params::UWrapBoxSlot_SetVerticalAlignment_Params Parms{};

	Parms.InVerticalAlignment = InVerticalAlignment;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.WrapBoxSlot.SetPadding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMargin                     InPadding                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void UWrapBoxSlot::SetPadding(const struct FMargin& InPadding)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WrapBoxSlot", "SetPadding");

	Params::UWrapBoxSlot_SetPadding_Params Parms{};

	Parms.InPadding = InPadding;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.WrapBoxSlot.SetNewLine
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               InForceNewLine                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWrapBoxSlot::SetNewLine(bool InForceNewLine)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WrapBoxSlot", "SetNewLine");

	Params::UWrapBoxSlot_SetNewLine_Params Parms{};

	Parms.InForceNewLine = InForceNewLine;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.WrapBoxSlot.SetHorizontalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EHorizontalAlignment    InHorizontalAlignment                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWrapBoxSlot::SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WrapBoxSlot", "SetHorizontalAlignment");

	Params::UWrapBoxSlot_SetHorizontalAlignment_Params Parms{};

	Parms.InHorizontalAlignment = InHorizontalAlignment;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.WrapBoxSlot.SetFillSpanWhenLessThan
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InFillSpanWhenLessThan                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWrapBoxSlot::SetFillSpanWhenLessThan(float InFillSpanWhenLessThan)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WrapBoxSlot", "SetFillSpanWhenLessThan");

	Params::UWrapBoxSlot_SetFillSpanWhenLessThan_Params Parms{};

	Parms.InFillSpanWhenLessThan = InFillSpanWhenLessThan;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.WrapBoxSlot.SetFillEmptySpace
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               InbFillEmptySpace                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWrapBoxSlot::SetFillEmptySpace(bool InbFillEmptySpace)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WrapBoxSlot", "SetFillEmptySpace");

	Params::UWrapBoxSlot_SetFillEmptySpace_Params Parms{};

	Parms.InbFillEmptySpace = InbFillEmptySpace;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.SlateBlueprintLibrary.TransformVectorLocalToAbsolute
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGeometry                   Geometry                                                         (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FVector2D                   LocalVector                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector2D USlateBlueprintLibrary::TransformVectorLocalToAbsolute(struct FGeometry& Geometry, const struct FVector2D& LocalVector)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SlateBlueprintLibrary", "TransformVectorLocalToAbsolute");

	Params::USlateBlueprintLibrary_TransformVectorLocalToAbsolute_Params Parms{};

	Parms.Geometry = Geometry;
	Parms.LocalVector = LocalVector;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.SlateBlueprintLibrary.TransformVectorAbsoluteToLocal
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGeometry                   Geometry                                                         (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FVector2D                   AbsoluteVector                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector2D USlateBlueprintLibrary::TransformVectorAbsoluteToLocal(struct FGeometry& Geometry, const struct FVector2D& AbsoluteVector)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SlateBlueprintLibrary", "TransformVectorAbsoluteToLocal");

	Params::USlateBlueprintLibrary_TransformVectorAbsoluteToLocal_Params Parms{};

	Parms.Geometry = Geometry;
	Parms.AbsoluteVector = AbsoluteVector;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.SlateBlueprintLibrary.TransformScalarLocalToAbsolute
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGeometry                   Geometry                                                         (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// float                              LocalScalar                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float USlateBlueprintLibrary::TransformScalarLocalToAbsolute(struct FGeometry& Geometry, float LocalScalar)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SlateBlueprintLibrary", "TransformScalarLocalToAbsolute");

	Params::USlateBlueprintLibrary_TransformScalarLocalToAbsolute_Params Parms{};

	Parms.Geometry = Geometry;
	Parms.LocalScalar = LocalScalar;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.SlateBlueprintLibrary.TransformScalarAbsoluteToLocal
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGeometry                   Geometry                                                         (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// float                              AbsoluteScalar                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float USlateBlueprintLibrary::TransformScalarAbsoluteToLocal(struct FGeometry& Geometry, float AbsoluteScalar)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SlateBlueprintLibrary", "TransformScalarAbsoluteToLocal");

	Params::USlateBlueprintLibrary_TransformScalarAbsoluteToLocal_Params Parms{};

	Parms.Geometry = Geometry;
	Parms.AbsoluteScalar = AbsoluteScalar;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.SlateBlueprintLibrary.ScreenToWidgetLocal
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGeometry                   Geometry                                                         (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FVector2D                   ScreenPosition                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   LocalCoordinate                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIncludeWindowPosition                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USlateBlueprintLibrary::ScreenToWidgetLocal(class UObject* WorldContextObject, struct FGeometry& Geometry, const struct FVector2D& ScreenPosition, struct FVector2D* LocalCoordinate, bool bIncludeWindowPosition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SlateBlueprintLibrary", "ScreenToWidgetLocal");

	Params::USlateBlueprintLibrary_ScreenToWidgetLocal_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Geometry = Geometry;
	Parms.ScreenPosition = ScreenPosition;
	Parms.bIncludeWindowPosition = bIncludeWindowPosition;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (LocalCoordinate != nullptr)
		*LocalCoordinate = Parms.LocalCoordinate;

}


// Function UMG.SlateBlueprintLibrary.ScreenToWidgetAbsolute
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   ScreenPosition                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   AbsoluteCoordinate                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIncludeWindowPosition                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USlateBlueprintLibrary::ScreenToWidgetAbsolute(class UObject* WorldContextObject, const struct FVector2D& ScreenPosition, struct FVector2D* AbsoluteCoordinate, bool bIncludeWindowPosition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SlateBlueprintLibrary", "ScreenToWidgetAbsolute");

	Params::USlateBlueprintLibrary_ScreenToWidgetAbsolute_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.ScreenPosition = ScreenPosition;
	Parms.bIncludeWindowPosition = bIncludeWindowPosition;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (AbsoluteCoordinate != nullptr)
		*AbsoluteCoordinate = Parms.AbsoluteCoordinate;

}


// Function UMG.SlateBlueprintLibrary.ScreenToViewport
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   ScreenPosition                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   ViewportPosition                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USlateBlueprintLibrary::ScreenToViewport(class UObject* WorldContextObject, const struct FVector2D& ScreenPosition, struct FVector2D* ViewportPosition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SlateBlueprintLibrary", "ScreenToViewport");

	Params::USlateBlueprintLibrary_ScreenToViewport_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.ScreenPosition = ScreenPosition;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (ViewportPosition != nullptr)
		*ViewportPosition = Parms.ViewportPosition;

}


// Function UMG.SlateBlueprintLibrary.LocalToViewport
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGeometry                   Geometry                                                         (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FVector2D                   LocalCoordinate                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   PixelPosition                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   ViewportPosition                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USlateBlueprintLibrary::LocalToViewport(class UObject* WorldContextObject, struct FGeometry& Geometry, const struct FVector2D& LocalCoordinate, struct FVector2D* PixelPosition, struct FVector2D* ViewportPosition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SlateBlueprintLibrary", "LocalToViewport");

	Params::USlateBlueprintLibrary_LocalToViewport_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Geometry = Geometry;
	Parms.LocalCoordinate = LocalCoordinate;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (PixelPosition != nullptr)
		*PixelPosition = Parms.PixelPosition;

	if (ViewportPosition != nullptr)
		*ViewportPosition = Parms.ViewportPosition;

}


// Function UMG.SlateBlueprintLibrary.LocalToAbsolute
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGeometry                   Geometry                                                         (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FVector2D                   LocalCoordinate                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector2D USlateBlueprintLibrary::LocalToAbsolute(struct FGeometry& Geometry, const struct FVector2D& LocalCoordinate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SlateBlueprintLibrary", "LocalToAbsolute");

	Params::USlateBlueprintLibrary_LocalToAbsolute_Params Parms{};

	Parms.Geometry = Geometry;
	Parms.LocalCoordinate = LocalCoordinate;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.SlateBlueprintLibrary.IsUnderLocation
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGeometry                   Geometry                                                         (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FVector2D                   AbsoluteCoordinate                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USlateBlueprintLibrary::IsUnderLocation(struct FGeometry& Geometry, struct FVector2D& AbsoluteCoordinate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SlateBlueprintLibrary", "IsUnderLocation");

	Params::USlateBlueprintLibrary_IsUnderLocation_Params Parms{};

	Parms.Geometry = Geometry;
	Parms.AbsoluteCoordinate = AbsoluteCoordinate;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.SlateBlueprintLibrary.GetLocalTopLeft
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGeometry                   Geometry                                                         (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FVector2D                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector2D USlateBlueprintLibrary::GetLocalTopLeft(struct FGeometry& Geometry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SlateBlueprintLibrary", "GetLocalTopLeft");

	Params::USlateBlueprintLibrary_GetLocalTopLeft_Params Parms{};

	Parms.Geometry = Geometry;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.SlateBlueprintLibrary.GetLocalSize
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGeometry                   Geometry                                                         (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FVector2D                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector2D USlateBlueprintLibrary::GetLocalSize(struct FGeometry& Geometry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SlateBlueprintLibrary", "GetLocalSize");

	Params::USlateBlueprintLibrary_GetLocalSize_Params Parms{};

	Parms.Geometry = Geometry;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.SlateBlueprintLibrary.GetAbsoluteSize
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGeometry                   Geometry                                                         (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FVector2D                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector2D USlateBlueprintLibrary::GetAbsoluteSize(struct FGeometry& Geometry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SlateBlueprintLibrary", "GetAbsoluteSize");

	Params::USlateBlueprintLibrary_GetAbsoluteSize_Params Parms{};

	Parms.Geometry = Geometry;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.SlateBlueprintLibrary.EqualEqual_SlateBrush
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSlateBrush                 A                                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FSlateBrush                 B                                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USlateBlueprintLibrary::EqualEqual_SlateBrush(struct FSlateBrush& A, struct FSlateBrush& B)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SlateBlueprintLibrary", "EqualEqual_SlateBrush");

	Params::USlateBlueprintLibrary_EqualEqual_SlateBrush_Params Parms{};

	Parms.A = A;
	Parms.B = B;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.SlateBlueprintLibrary.AbsoluteToViewport
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   AbsoluteDesktopCoordinate                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   PixelPosition                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   ViewportPosition                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USlateBlueprintLibrary::AbsoluteToViewport(class UObject* WorldContextObject, const struct FVector2D& AbsoluteDesktopCoordinate, struct FVector2D* PixelPosition, struct FVector2D* ViewportPosition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SlateBlueprintLibrary", "AbsoluteToViewport");

	Params::USlateBlueprintLibrary_AbsoluteToViewport_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.AbsoluteDesktopCoordinate = AbsoluteDesktopCoordinate;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (PixelPosition != nullptr)
		*PixelPosition = Parms.PixelPosition;

	if (ViewportPosition != nullptr)
		*ViewportPosition = Parms.ViewportPosition;

}


// Function UMG.SlateBlueprintLibrary.AbsoluteToLocal
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGeometry                   Geometry                                                         (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FVector2D                   AbsoluteCoordinate                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector2D USlateBlueprintLibrary::AbsoluteToLocal(struct FGeometry& Geometry, const struct FVector2D& AbsoluteCoordinate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SlateBlueprintLibrary", "AbsoluteToLocal");

	Params::USlateBlueprintLibrary_AbsoluteToLocal_Params Parms{};

	Parms.Geometry = Geometry;
	Parms.AbsoluteCoordinate = AbsoluteCoordinate;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.WidgetBlueprintLibrary.UnlockMouse
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FEventReply                 Reply                                                            (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FEventReply UWidgetBlueprintLibrary::UnlockMouse(struct FEventReply& Reply)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "UnlockMouse");

	Params::UWidgetBlueprintLibrary_UnlockMouse_Params Parms{};

	Parms.Reply = Reply;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.WidgetBlueprintLibrary.Unhandled
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FEventReply UWidgetBlueprintLibrary::Unhandled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "Unhandled");

	Params::UWidgetBlueprintLibrary_Unhandled_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.WidgetBlueprintLibrary.SetWindowTitleBarState
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UWidget*                     TitleBarContent                                                  (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EWindowTitleBarMode     Mode                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bTitleBarDragEnabled                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bWindowButtonsVisible                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bTitleBarVisible                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWidgetBlueprintLibrary::SetWindowTitleBarState(class UWidget* TitleBarContent, enum class EWindowTitleBarMode Mode, bool bTitleBarDragEnabled, bool bWindowButtonsVisible, bool bTitleBarVisible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "SetWindowTitleBarState");

	Params::UWidgetBlueprintLibrary_SetWindowTitleBarState_Params Parms{};

	Parms.TitleBarContent = TitleBarContent;
	Parms.Mode = Mode;
	Parms.bTitleBarDragEnabled = bTitleBarDragEnabled;
	Parms.bWindowButtonsVisible = bWindowButtonsVisible;
	Parms.bTitleBarVisible = bTitleBarVisible;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.WidgetBlueprintLibrary.SetWindowTitleBarOnCloseClickedDelegate
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 Delegate                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWidgetBlueprintLibrary::SetWindowTitleBarOnCloseClickedDelegate(FDelegateProperty_ Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "SetWindowTitleBarOnCloseClickedDelegate");

	Params::UWidgetBlueprintLibrary_SetWindowTitleBarOnCloseClickedDelegate_Params Parms{};

	Parms.Delegate = Delegate;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.WidgetBlueprintLibrary.SetWindowTitleBarCloseButtonActive
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               bActive                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWidgetBlueprintLibrary::SetWindowTitleBarCloseButtonActive(bool bActive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "SetWindowTitleBarCloseButtonActive");

	Params::UWidgetBlueprintLibrary_SetWindowTitleBarCloseButtonActive_Params Parms{};

	Parms.bActive = bActive;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.WidgetBlueprintLibrary.SetUserFocus
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FEventReply                 Reply                                                            (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UWidget*                     FocusWidget                                                      (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bInAllUsers                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FEventReply UWidgetBlueprintLibrary::SetUserFocus(struct FEventReply& Reply, class UWidget* FocusWidget, bool bInAllUsers)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "SetUserFocus");

	Params::UWidgetBlueprintLibrary_SetUserFocus_Params Parms{};

	Parms.Reply = Reply;
	Parms.FocusWidget = FocusWidget;
	Parms.bInAllUsers = bInAllUsers;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.WidgetBlueprintLibrary.SetMousePosition
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FEventReply                 Reply                                                            (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FVector2D                   NewMousePosition                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FEventReply UWidgetBlueprintLibrary::SetMousePosition(struct FEventReply& Reply, const struct FVector2D& NewMousePosition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "SetMousePosition");

	Params::UWidgetBlueprintLibrary_SetMousePosition_Params Parms{};

	Parms.Reply = Reply;
	Parms.NewMousePosition = NewMousePosition;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.WidgetBlueprintLibrary.SetInputMode_UIOnlyEx
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerController*           PlayerController                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWidget*                     InWidgetToFocus                                                  (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EMouseLockMode          InMouseLockMode                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bFlushInput                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWidgetBlueprintLibrary::SetInputMode_UIOnlyEx(class APlayerController* PlayerController, class UWidget* InWidgetToFocus, enum class EMouseLockMode InMouseLockMode, bool bFlushInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "SetInputMode_UIOnlyEx");

	Params::UWidgetBlueprintLibrary_SetInputMode_UIOnlyEx_Params Parms{};

	Parms.PlayerController = PlayerController;
	Parms.InWidgetToFocus = InWidgetToFocus;
	Parms.InMouseLockMode = InMouseLockMode;
	Parms.bFlushInput = bFlushInput;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.WidgetBlueprintLibrary.SetInputMode_GameOnly
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerController*           PlayerController                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bFlushInput                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWidgetBlueprintLibrary::SetInputMode_GameOnly(class APlayerController* PlayerController, bool bFlushInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "SetInputMode_GameOnly");

	Params::UWidgetBlueprintLibrary_SetInputMode_GameOnly_Params Parms{};

	Parms.PlayerController = PlayerController;
	Parms.bFlushInput = bFlushInput;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.WidgetBlueprintLibrary.SetInputMode_GameAndUIEx
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerController*           PlayerController                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWidget*                     InWidgetToFocus                                                  (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EMouseLockMode          InMouseLockMode                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bHideCursorDuringCapture                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bFlushInput                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWidgetBlueprintLibrary::SetInputMode_GameAndUIEx(class APlayerController* PlayerController, class UWidget* InWidgetToFocus, enum class EMouseLockMode InMouseLockMode, bool bHideCursorDuringCapture, bool bFlushInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "SetInputMode_GameAndUIEx");

	Params::UWidgetBlueprintLibrary_SetInputMode_GameAndUIEx_Params Parms{};

	Parms.PlayerController = PlayerController;
	Parms.InWidgetToFocus = InWidgetToFocus;
	Parms.InMouseLockMode = InMouseLockMode;
	Parms.bHideCursorDuringCapture = bHideCursorDuringCapture;
	Parms.bFlushInput = bFlushInput;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.WidgetBlueprintLibrary.SetHardwareCursor
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EMouseCursor            CursorShape                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        CursorName                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   HotSpot                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UWidgetBlueprintLibrary::SetHardwareCursor(class UObject* WorldContextObject, enum class EMouseCursor CursorShape, class FName CursorName, const struct FVector2D& HotSpot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "SetHardwareCursor");

	Params::UWidgetBlueprintLibrary_SetHardwareCursor_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.CursorShape = CursorShape;
	Parms.CursorName = CursorName;
	Parms.HotSpot = HotSpot;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.WidgetBlueprintLibrary.SetFocusToGameViewport
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:

void UWidgetBlueprintLibrary::SetFocusToGameViewport()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "SetFocusToGameViewport");

	Params::UWidgetBlueprintLibrary_SetFocusToGameViewport_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.WidgetBlueprintLibrary.SetColorVisionDeficiencyType
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// enum class EColorVisionDeficiency  Type                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Severity                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               CorrectDeficiency                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ShowCorrectionWithDeficiency                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWidgetBlueprintLibrary::SetColorVisionDeficiencyType(enum class EColorVisionDeficiency Type, float Severity, bool CorrectDeficiency, bool ShowCorrectionWithDeficiency)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "SetColorVisionDeficiencyType");

	Params::UWidgetBlueprintLibrary_SetColorVisionDeficiencyType_Params Parms{};

	Parms.Type = Type;
	Parms.Severity = Severity;
	Parms.CorrectDeficiency = CorrectDeficiency;
	Parms.ShowCorrectionWithDeficiency = ShowCorrectionWithDeficiency;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.WidgetBlueprintLibrary.SetBrushResourceToTexture
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSlateBrush                 Brush                                                            (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UTexture2D*                  Texture                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWidgetBlueprintLibrary::SetBrushResourceToTexture(struct FSlateBrush& Brush, class UTexture2D* Texture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "SetBrushResourceToTexture");

	Params::UWidgetBlueprintLibrary_SetBrushResourceToTexture_Params Parms{};

	Parms.Brush = Brush;
	Parms.Texture = Texture;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.WidgetBlueprintLibrary.SetBrushResourceToMaterial
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSlateBrush                 Brush                                                            (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UMaterialInterface*          Material                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWidgetBlueprintLibrary::SetBrushResourceToMaterial(struct FSlateBrush& Brush, class UMaterialInterface* Material)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "SetBrushResourceToMaterial");

	Params::UWidgetBlueprintLibrary_SetBrushResourceToMaterial_Params Parms{};

	Parms.Brush = Brush;
	Parms.Material = Material;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.WidgetBlueprintLibrary.RestorePreviousWindowTitleBarState
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:

void UWidgetBlueprintLibrary::RestorePreviousWindowTitleBarState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "RestorePreviousWindowTitleBarState");

	Params::UWidgetBlueprintLibrary_RestorePreviousWindowTitleBarState_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.WidgetBlueprintLibrary.ReleaseMouseCapture
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FEventReply                 Reply                                                            (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FEventReply UWidgetBlueprintLibrary::ReleaseMouseCapture(struct FEventReply& Reply)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "ReleaseMouseCapture");

	Params::UWidgetBlueprintLibrary_ReleaseMouseCapture_Params Parms{};

	Parms.Reply = Reply;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.WidgetBlueprintLibrary.ReleaseJoystickCapture
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FEventReply                 Reply                                                            (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               bInAllJoysticks                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FEventReply UWidgetBlueprintLibrary::ReleaseJoystickCapture(struct FEventReply& Reply, bool bInAllJoysticks)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "ReleaseJoystickCapture");

	Params::UWidgetBlueprintLibrary_ReleaseJoystickCapture_Params Parms{};

	Parms.Reply = Reply;
	Parms.bInAllJoysticks = bInAllJoysticks;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// DelegateFunction UMG.WidgetBlueprintLibrary.OnGameWindowCloseButtonClickedDelegate__DelegateSignature
// (Public, Delegate)
// Parameters:

void UWidgetBlueprintLibrary::OnGameWindowCloseButtonClickedDelegate__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "OnGameWindowCloseButtonClickedDelegate__DelegateSignature");

	Params::UWidgetBlueprintLibrary_OnGameWindowCloseButtonClickedDelegate__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG.WidgetBlueprintLibrary.NoResourceBrush
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSlateBrush                 ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FSlateBrush UWidgetBlueprintLibrary::NoResourceBrush()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "NoResourceBrush");

	Params::UWidgetBlueprintLibrary_NoResourceBrush_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.WidgetBlueprintLibrary.MakeBrushFromTexture
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UTexture2D*                  Texture                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Width                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Height                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSlateBrush                 ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FSlateBrush UWidgetBlueprintLibrary::MakeBrushFromTexture(class UTexture2D* Texture, int32 Width, int32 Height)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "MakeBrushFromTexture");

	Params::UWidgetBlueprintLibrary_MakeBrushFromTexture_Params Parms{};

	Parms.Texture = Texture;
	Parms.Width = Width;
	Parms.Height = Height;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.WidgetBlueprintLibrary.MakeBrushFromMaterial
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UMaterialInterface*          Material                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Width                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Height                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSlateBrush                 ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FSlateBrush UWidgetBlueprintLibrary::MakeBrushFromMaterial(class UMaterialInterface* Material, int32 Width, int32 Height)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "MakeBrushFromMaterial");

	Params::UWidgetBlueprintLibrary_MakeBrushFromMaterial_Params Parms{};

	Parms.Material = Material;
	Parms.Width = Width;
	Parms.Height = Height;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.WidgetBlueprintLibrary.MakeBrushFromAsset
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class USlateBrushAsset*            BrushAsset                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSlateBrush                 ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FSlateBrush UWidgetBlueprintLibrary::MakeBrushFromAsset(class USlateBrushAsset* BrushAsset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "MakeBrushFromAsset");

	Params::UWidgetBlueprintLibrary_MakeBrushFromAsset_Params Parms{};

	Parms.BrushAsset = BrushAsset;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.WidgetBlueprintLibrary.LockMouse
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FEventReply                 Reply                                                            (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UWidget*                     CapturingWidget                                                  (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FEventReply UWidgetBlueprintLibrary::LockMouse(struct FEventReply& Reply, class UWidget* CapturingWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "LockMouse");

	Params::UWidgetBlueprintLibrary_LockMouse_Params Parms{};

	Parms.Reply = Reply;
	Parms.CapturingWidget = CapturingWidget;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.WidgetBlueprintLibrary.IsDragDropping
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UWidgetBlueprintLibrary::IsDragDropping()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "IsDragDropping");

	Params::UWidgetBlueprintLibrary_IsDragDropping_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.WidgetBlueprintLibrary.Handled
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FEventReply UWidgetBlueprintLibrary::Handled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "Handled");

	Params::UWidgetBlueprintLibrary_Handled_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.WidgetBlueprintLibrary.GetSafeZonePadding
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector4                    SafePadding                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   SafePaddingScale                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector4                    SpillOverPadding                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWidgetBlueprintLibrary::GetSafeZonePadding(class UObject* WorldContextObject, struct FVector4* SafePadding, struct FVector2D* SafePaddingScale, struct FVector4* SpillOverPadding)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "GetSafeZonePadding");

	Params::UWidgetBlueprintLibrary_GetSafeZonePadding_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (SafePadding != nullptr)
		*SafePadding = Parms.SafePadding;

	if (SafePaddingScale != nullptr)
		*SafePaddingScale = Parms.SafePaddingScale;

	if (SpillOverPadding != nullptr)
		*SpillOverPadding = Parms.SpillOverPadding;

}


// Function UMG.WidgetBlueprintLibrary.GetKeyEventFromAnalogInputEvent
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAnalogInputEvent           Event                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FKeyEvent                   ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FKeyEvent UWidgetBlueprintLibrary::GetKeyEventFromAnalogInputEvent(struct FAnalogInputEvent& Event)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "GetKeyEventFromAnalogInputEvent");

	Params::UWidgetBlueprintLibrary_GetKeyEventFromAnalogInputEvent_Params Parms{};

	Parms.Event = Event;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.WidgetBlueprintLibrary.GetInputEventFromPointerEvent
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FPointerEvent               Event                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FInputEvent                 ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FInputEvent UWidgetBlueprintLibrary::GetInputEventFromPointerEvent(struct FPointerEvent& Event)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "GetInputEventFromPointerEvent");

	Params::UWidgetBlueprintLibrary_GetInputEventFromPointerEvent_Params Parms{};

	Parms.Event = Event;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.WidgetBlueprintLibrary.GetInputEventFromNavigationEvent
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FNavigationEvent            Event                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FInputEvent                 ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FInputEvent UWidgetBlueprintLibrary::GetInputEventFromNavigationEvent(struct FNavigationEvent& Event)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "GetInputEventFromNavigationEvent");

	Params::UWidgetBlueprintLibrary_GetInputEventFromNavigationEvent_Params Parms{};

	Parms.Event = Event;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.WidgetBlueprintLibrary.GetInputEventFromKeyEvent
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FKeyEvent                   Event                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FInputEvent                 ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FInputEvent UWidgetBlueprintLibrary::GetInputEventFromKeyEvent(struct FKeyEvent& Event)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "GetInputEventFromKeyEvent");

	Params::UWidgetBlueprintLibrary_GetInputEventFromKeyEvent_Params Parms{};

	Parms.Event = Event;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.WidgetBlueprintLibrary.GetInputEventFromCharacterEvent
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FCharacterEvent             Event                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FInputEvent                 ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FInputEvent UWidgetBlueprintLibrary::GetInputEventFromCharacterEvent(struct FCharacterEvent& Event)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "GetInputEventFromCharacterEvent");

	Params::UWidgetBlueprintLibrary_GetInputEventFromCharacterEvent_Params Parms{};

	Parms.Event = Event;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.WidgetBlueprintLibrary.GetDynamicMaterial
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSlateBrush                 Brush                                                            (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UMaterialInstanceDynamic*    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMaterialInstanceDynamic* UWidgetBlueprintLibrary::GetDynamicMaterial(struct FSlateBrush& Brush)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "GetDynamicMaterial");

	Params::UWidgetBlueprintLibrary_GetDynamicMaterial_Params Parms{};

	Parms.Brush = Brush;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.WidgetBlueprintLibrary.GetDragDroppingContent
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UDragDropOperation*          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDragDropOperation* UWidgetBlueprintLibrary::GetDragDroppingContent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "GetDragDroppingContent");

	Params::UWidgetBlueprintLibrary_GetDragDroppingContent_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.WidgetBlueprintLibrary.GetBrushResourceAsTexture2D
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSlateBrush                 Brush                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UTexture2D*                  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UTexture2D* UWidgetBlueprintLibrary::GetBrushResourceAsTexture2D(struct FSlateBrush& Brush)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "GetBrushResourceAsTexture2D");

	Params::UWidgetBlueprintLibrary_GetBrushResourceAsTexture2D_Params Parms{};

	Parms.Brush = Brush;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.WidgetBlueprintLibrary.GetBrushResourceAsMaterial
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSlateBrush                 Brush                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UMaterialInterface*          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMaterialInterface* UWidgetBlueprintLibrary::GetBrushResourceAsMaterial(struct FSlateBrush& Brush)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "GetBrushResourceAsMaterial");

	Params::UWidgetBlueprintLibrary_GetBrushResourceAsMaterial_Params Parms{};

	Parms.Brush = Brush;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.WidgetBlueprintLibrary.GetBrushResource
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSlateBrush                 Brush                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UObject*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UObject* UWidgetBlueprintLibrary::GetBrushResource(struct FSlateBrush& Brush)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "GetBrushResource");

	Params::UWidgetBlueprintLibrary_GetBrushResource_Params Parms{};

	Parms.Brush = Brush;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.WidgetBlueprintLibrary.GetAllWidgetsWithInterface
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UUserWidget*>         FoundWidgets                                                     (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// TSubclassOf<class IInterface>      Interface                                                        (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               TopLevelOnly                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWidgetBlueprintLibrary::GetAllWidgetsWithInterface(class UObject* WorldContextObject, TArray<class UUserWidget*>* FoundWidgets, TSubclassOf<class IInterface> Interface, bool TopLevelOnly)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "GetAllWidgetsWithInterface");

	Params::UWidgetBlueprintLibrary_GetAllWidgetsWithInterface_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Interface = Interface;
	Parms.TopLevelOnly = TopLevelOnly;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (FoundWidgets != nullptr)
		*FoundWidgets = Parms.FoundWidgets;

}


// Function UMG.WidgetBlueprintLibrary.GetAllWidgetsOfClass
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UUserWidget*>         FoundWidgets                                                     (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// TSubclassOf<class UUserWidget>     WidgetClass                                                      (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               TopLevelOnly                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWidgetBlueprintLibrary::GetAllWidgetsOfClass(class UObject* WorldContextObject, TArray<class UUserWidget*>* FoundWidgets, TSubclassOf<class UUserWidget> WidgetClass, bool TopLevelOnly)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "GetAllWidgetsOfClass");

	Params::UWidgetBlueprintLibrary_GetAllWidgetsOfClass_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.WidgetClass = WidgetClass;
	Parms.TopLevelOnly = TopLevelOnly;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (FoundWidgets != nullptr)
		*FoundWidgets = Parms.FoundWidgets;

}


// Function UMG.WidgetBlueprintLibrary.EndDragDrop
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FEventReply                 Reply                                                            (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FEventReply UWidgetBlueprintLibrary::EndDragDrop(struct FEventReply& Reply)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "EndDragDrop");

	Params::UWidgetBlueprintLibrary_EndDragDrop_Params Parms{};

	Parms.Reply = Reply;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.WidgetBlueprintLibrary.DrawTextFormatted
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FPaintContext               Context                                                          (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// class FText                        Text                                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FVector2D                   Position                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFont*                       Font                                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              FontSize                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        FontTypeFace                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor                Tint                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWidgetBlueprintLibrary::DrawTextFormatted(struct FPaintContext& Context, class FText& Text, const struct FVector2D& Position, class UFont* Font, int32 FontSize, class FName FontTypeFace, const struct FLinearColor& Tint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "DrawTextFormatted");

	Params::UWidgetBlueprintLibrary_DrawTextFormatted_Params Parms{};

	Parms.Context = Context;
	Parms.Text = Text;
	Parms.Position = Position;
	Parms.Font = Font;
	Parms.FontSize = FontSize;
	Parms.FontTypeFace = FontTypeFace;
	Parms.Tint = Tint;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.WidgetBlueprintLibrary.DrawText
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FPaintContext               Context                                                          (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// class FString                      InString                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   Position                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor                Tint                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWidgetBlueprintLibrary::DrawText(struct FPaintContext& Context, const class FString& InString, const struct FVector2D& Position, const struct FLinearColor& Tint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "DrawText");

	Params::UWidgetBlueprintLibrary_DrawText_Params Parms{};

	Parms.Context = Context;
	Parms.InString = InString;
	Parms.Position = Position;
	Parms.Tint = Tint;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.WidgetBlueprintLibrary.DrawSpline
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FPaintContext               Context                                                          (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FVector2D                   Start                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   StartDir                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   End                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   EndDir                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor                Tint                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Thickness                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWidgetBlueprintLibrary::DrawSpline(struct FPaintContext& Context, const struct FVector2D& Start, const struct FVector2D& StartDir, const struct FVector2D& End, const struct FVector2D& EndDir, const struct FLinearColor& Tint, float Thickness)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "DrawSpline");

	Params::UWidgetBlueprintLibrary_DrawSpline_Params Parms{};

	Parms.Context = Context;
	Parms.Start = Start;
	Parms.StartDir = StartDir;
	Parms.End = End;
	Parms.EndDir = EndDir;
	Parms.Tint = Tint;
	Parms.Thickness = Thickness;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.WidgetBlueprintLibrary.DrawLines
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FPaintContext               Context                                                          (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// TArray<struct FVector2D>           Points                                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// struct FLinearColor                Tint                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAntiAlias                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Thickness                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWidgetBlueprintLibrary::DrawLines(struct FPaintContext& Context, TArray<struct FVector2D>& Points, const struct FLinearColor& Tint, bool bAntiAlias, float Thickness)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "DrawLines");

	Params::UWidgetBlueprintLibrary_DrawLines_Params Parms{};

	Parms.Context = Context;
	Parms.Points = Points;
	Parms.Tint = Tint;
	Parms.bAntiAlias = bAntiAlias;
	Parms.Thickness = Thickness;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.WidgetBlueprintLibrary.DrawLine
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FPaintContext               Context                                                          (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FVector2D                   PositionA                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   PositionB                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor                Tint                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAntiAlias                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Thickness                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWidgetBlueprintLibrary::DrawLine(struct FPaintContext& Context, const struct FVector2D& PositionA, const struct FVector2D& PositionB, const struct FLinearColor& Tint, bool bAntiAlias, float Thickness)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "DrawLine");

	Params::UWidgetBlueprintLibrary_DrawLine_Params Parms{};

	Parms.Context = Context;
	Parms.PositionA = PositionA;
	Parms.PositionB = PositionB;
	Parms.Tint = Tint;
	Parms.bAntiAlias = bAntiAlias;
	Parms.Thickness = Thickness;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.WidgetBlueprintLibrary.DrawBox
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FPaintContext               Context                                                          (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FVector2D                   Position                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   Size                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USlateBrushAsset*            Brush                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor                Tint                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWidgetBlueprintLibrary::DrawBox(struct FPaintContext& Context, const struct FVector2D& Position, const struct FVector2D& Size, class USlateBrushAsset* Brush, const struct FLinearColor& Tint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "DrawBox");

	Params::UWidgetBlueprintLibrary_DrawBox_Params Parms{};

	Parms.Context = Context;
	Parms.Position = Position;
	Parms.Size = Size;
	Parms.Brush = Brush;
	Parms.Tint = Tint;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.WidgetBlueprintLibrary.DismissAllMenus
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:

void UWidgetBlueprintLibrary::DismissAllMenus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "DismissAllMenus");

	Params::UWidgetBlueprintLibrary_DismissAllMenus_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.WidgetBlueprintLibrary.DetectDragIfPressed
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FPointerEvent               PointerEvent                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UWidget*                     WidgetDetectingDrag                                              (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKey                        DragKey                                                          (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FEventReply UWidgetBlueprintLibrary::DetectDragIfPressed(struct FPointerEvent& PointerEvent, class UWidget* WidgetDetectingDrag, const struct FKey& DragKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "DetectDragIfPressed");

	Params::UWidgetBlueprintLibrary_DetectDragIfPressed_Params Parms{};

	Parms.PointerEvent = PointerEvent;
	Parms.WidgetDetectingDrag = WidgetDetectingDrag;
	Parms.DragKey = DragKey;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.WidgetBlueprintLibrary.DetectDrag
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FEventReply                 Reply                                                            (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UWidget*                     WidgetDetectingDrag                                              (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKey                        DragKey                                                          (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FEventReply UWidgetBlueprintLibrary::DetectDrag(struct FEventReply& Reply, class UWidget* WidgetDetectingDrag, const struct FKey& DragKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "DetectDrag");

	Params::UWidgetBlueprintLibrary_DetectDrag_Params Parms{};

	Parms.Reply = Reply;
	Parms.WidgetDetectingDrag = WidgetDetectingDrag;
	Parms.DragKey = DragKey;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.WidgetBlueprintLibrary.CreateDragDropOperation
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TSubclassOf<class UDragDropOperation>OperationClass                                                   (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDragDropOperation*          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDragDropOperation* UWidgetBlueprintLibrary::CreateDragDropOperation(TSubclassOf<class UDragDropOperation> OperationClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "CreateDragDropOperation");

	Params::UWidgetBlueprintLibrary_CreateDragDropOperation_Params Parms{};

	Parms.OperationClass = OperationClass;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.WidgetBlueprintLibrary.Create
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class UUserWidget>     WidgetType                                                       (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class APlayerController*           OwningPlayer                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UUserWidget*                 ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UUserWidget* UWidgetBlueprintLibrary::Create(class UObject* WorldContextObject, TSubclassOf<class UUserWidget> WidgetType, class APlayerController* OwningPlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "Create");

	Params::UWidgetBlueprintLibrary_Create_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.WidgetType = WidgetType;
	Parms.OwningPlayer = OwningPlayer;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.WidgetBlueprintLibrary.ClearUserFocus
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FEventReply                 Reply                                                            (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               bInAllUsers                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FEventReply UWidgetBlueprintLibrary::ClearUserFocus(struct FEventReply& Reply, bool bInAllUsers)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "ClearUserFocus");

	Params::UWidgetBlueprintLibrary_ClearUserFocus_Params Parms{};

	Parms.Reply = Reply;
	Parms.bInAllUsers = bInAllUsers;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.WidgetBlueprintLibrary.CaptureMouse
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FEventReply                 Reply                                                            (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UWidget*                     CapturingWidget                                                  (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FEventReply UWidgetBlueprintLibrary::CaptureMouse(struct FEventReply& Reply, class UWidget* CapturingWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "CaptureMouse");

	Params::UWidgetBlueprintLibrary_CaptureMouse_Params Parms{};

	Parms.Reply = Reply;
	Parms.CapturingWidget = CapturingWidget;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.WidgetBlueprintLibrary.CaptureJoystick
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FEventReply                 Reply                                                            (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UWidget*                     CapturingWidget                                                  (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bInAllJoysticks                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FEventReply UWidgetBlueprintLibrary::CaptureJoystick(struct FEventReply& Reply, class UWidget* CapturingWidget, bool bInAllJoysticks)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "CaptureJoystick");

	Params::UWidgetBlueprintLibrary_CaptureJoystick_Params Parms{};

	Parms.Reply = Reply;
	Parms.CapturingWidget = CapturingWidget;
	Parms.bInAllJoysticks = bInAllJoysticks;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.WidgetBlueprintLibrary.CancelDragDrop
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:

void UWidgetBlueprintLibrary::CancelDragDrop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetBlueprintLibrary", "CancelDragDrop");

	Params::UWidgetBlueprintLibrary_CancelDragDrop_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.WidgetLayoutLibrary.SlotAsWrapBoxSlot
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UWidget*                     Widget                                                           (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWrapBoxSlot*                ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UWrapBoxSlot* UWidgetLayoutLibrary::SlotAsWrapBoxSlot(class UWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetLayoutLibrary", "SlotAsWrapBoxSlot");

	Params::UWidgetLayoutLibrary_SlotAsWrapBoxSlot_Params Parms{};

	Parms.Widget = Widget;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.WidgetLayoutLibrary.SlotAsWidgetSwitcherSlot
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UWidget*                     Widget                                                           (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWidgetSwitcherSlot*         ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UWidgetSwitcherSlot* UWidgetLayoutLibrary::SlotAsWidgetSwitcherSlot(class UWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetLayoutLibrary", "SlotAsWidgetSwitcherSlot");

	Params::UWidgetLayoutLibrary_SlotAsWidgetSwitcherSlot_Params Parms{};

	Parms.Widget = Widget;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.WidgetLayoutLibrary.SlotAsVerticalBoxSlot
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UWidget*                     Widget                                                           (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UVerticalBoxSlot*            ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UVerticalBoxSlot* UWidgetLayoutLibrary::SlotAsVerticalBoxSlot(class UWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetLayoutLibrary", "SlotAsVerticalBoxSlot");

	Params::UWidgetLayoutLibrary_SlotAsVerticalBoxSlot_Params Parms{};

	Parms.Widget = Widget;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.WidgetLayoutLibrary.SlotAsUniformGridSlot
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UWidget*                     Widget                                                           (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UUniformGridSlot*            ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UUniformGridSlot* UWidgetLayoutLibrary::SlotAsUniformGridSlot(class UWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetLayoutLibrary", "SlotAsUniformGridSlot");

	Params::UWidgetLayoutLibrary_SlotAsUniformGridSlot_Params Parms{};

	Parms.Widget = Widget;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.WidgetLayoutLibrary.SlotAsSizeBoxSlot
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UWidget*                     Widget                                                           (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USizeBoxSlot*                ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USizeBoxSlot* UWidgetLayoutLibrary::SlotAsSizeBoxSlot(class UWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetLayoutLibrary", "SlotAsSizeBoxSlot");

	Params::UWidgetLayoutLibrary_SlotAsSizeBoxSlot_Params Parms{};

	Parms.Widget = Widget;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.WidgetLayoutLibrary.SlotAsScrollBoxSlot
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UWidget*                     Widget                                                           (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UScrollBoxSlot*              ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UScrollBoxSlot* UWidgetLayoutLibrary::SlotAsScrollBoxSlot(class UWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetLayoutLibrary", "SlotAsScrollBoxSlot");

	Params::UWidgetLayoutLibrary_SlotAsScrollBoxSlot_Params Parms{};

	Parms.Widget = Widget;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.WidgetLayoutLibrary.SlotAsScaleBoxSlot
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UWidget*                     Widget                                                           (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UScaleBoxSlot*               ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UScaleBoxSlot* UWidgetLayoutLibrary::SlotAsScaleBoxSlot(class UWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetLayoutLibrary", "SlotAsScaleBoxSlot");

	Params::UWidgetLayoutLibrary_SlotAsScaleBoxSlot_Params Parms{};

	Parms.Widget = Widget;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.WidgetLayoutLibrary.SlotAsSafeBoxSlot
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UWidget*                     Widget                                                           (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USafeZoneSlot*               ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USafeZoneSlot* UWidgetLayoutLibrary::SlotAsSafeBoxSlot(class UWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetLayoutLibrary", "SlotAsSafeBoxSlot");

	Params::UWidgetLayoutLibrary_SlotAsSafeBoxSlot_Params Parms{};

	Parms.Widget = Widget;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.WidgetLayoutLibrary.SlotAsOverlaySlot
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UWidget*                     Widget                                                           (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOverlaySlot*                ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOverlaySlot* UWidgetLayoutLibrary::SlotAsOverlaySlot(class UWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetLayoutLibrary", "SlotAsOverlaySlot");

	Params::UWidgetLayoutLibrary_SlotAsOverlaySlot_Params Parms{};

	Parms.Widget = Widget;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.WidgetLayoutLibrary.SlotAsHorizontalBoxSlot
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UWidget*                     Widget                                                           (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UHorizontalBoxSlot*          ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UHorizontalBoxSlot* UWidgetLayoutLibrary::SlotAsHorizontalBoxSlot(class UWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetLayoutLibrary", "SlotAsHorizontalBoxSlot");

	Params::UWidgetLayoutLibrary_SlotAsHorizontalBoxSlot_Params Parms{};

	Parms.Widget = Widget;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.WidgetLayoutLibrary.SlotAsGridSlot
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UWidget*                     Widget                                                           (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGridSlot*                   ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UGridSlot* UWidgetLayoutLibrary::SlotAsGridSlot(class UWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetLayoutLibrary", "SlotAsGridSlot");

	Params::UWidgetLayoutLibrary_SlotAsGridSlot_Params Parms{};

	Parms.Widget = Widget;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.WidgetLayoutLibrary.SlotAsCanvasSlot
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UWidget*                     Widget                                                           (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCanvasPanelSlot*            ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UCanvasPanelSlot* UWidgetLayoutLibrary::SlotAsCanvasSlot(class UWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetLayoutLibrary", "SlotAsCanvasSlot");

	Params::UWidgetLayoutLibrary_SlotAsCanvasSlot_Params Parms{};

	Parms.Widget = Widget;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.WidgetLayoutLibrary.SlotAsBorderSlot
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UWidget*                     Widget                                                           (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UBorderSlot*                 ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UBorderSlot* UWidgetLayoutLibrary::SlotAsBorderSlot(class UWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetLayoutLibrary", "SlotAsBorderSlot");

	Params::UWidgetLayoutLibrary_SlotAsBorderSlot_Params Parms{};

	Parms.Widget = Widget;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.WidgetLayoutLibrary.RemoveAllWidgets
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWidgetLayoutLibrary::RemoveAllWidgets(class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetLayoutLibrary", "RemoveAllWidgets");

	Params::UWidgetLayoutLibrary_RemoveAllWidgets_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function UMG.WidgetLayoutLibrary.ProjectWorldLocationToWidgetPosition
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class APlayerController*           PlayerController                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     WorldLocation                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   ScreenPosition                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bPlayerViewportRelative                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UWidgetLayoutLibrary::ProjectWorldLocationToWidgetPosition(class APlayerController* PlayerController, const struct FVector& WorldLocation, struct FVector2D* ScreenPosition, bool bPlayerViewportRelative)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetLayoutLibrary", "ProjectWorldLocationToWidgetPosition");

	Params::UWidgetLayoutLibrary_ProjectWorldLocationToWidgetPosition_Params Parms{};

	Parms.PlayerController = PlayerController;
	Parms.WorldLocation = WorldLocation;
	Parms.bPlayerViewportRelative = bPlayerViewportRelative;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (ScreenPosition != nullptr)
		*ScreenPosition = Parms.ScreenPosition;

	return Parms.ReturnValue;

}


// Function UMG.WidgetLayoutLibrary.GetViewportWidgetGeometry
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGeometry                   ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FGeometry UWidgetLayoutLibrary::GetViewportWidgetGeometry(class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetLayoutLibrary", "GetViewportWidgetGeometry");

	Params::UWidgetLayoutLibrary_GetViewportWidgetGeometry_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.WidgetLayoutLibrary.GetViewportSize
// (Final, BlueprintCosmetic, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector2D UWidgetLayoutLibrary::GetViewportSize(class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetLayoutLibrary", "GetViewportSize");

	Params::UWidgetLayoutLibrary_GetViewportSize_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.WidgetLayoutLibrary.GetViewportScale
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UWidgetLayoutLibrary::GetViewportScale(class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetLayoutLibrary", "GetViewportScale");

	Params::UWidgetLayoutLibrary_GetViewportScale_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.WidgetLayoutLibrary.GetPlayerScreenWidgetGeometry
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerController*           PlayerController                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGeometry                   ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FGeometry UWidgetLayoutLibrary::GetPlayerScreenWidgetGeometry(class APlayerController* PlayerController)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetLayoutLibrary", "GetPlayerScreenWidgetGeometry");

	Params::UWidgetLayoutLibrary_GetPlayerScreenWidgetGeometry_Params Parms{};

	Parms.PlayerController = PlayerController;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.WidgetLayoutLibrary.GetMousePositionScaledByDPI
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class APlayerController*           Player                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              LocationX                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              LocationY                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UWidgetLayoutLibrary::GetMousePositionScaledByDPI(class APlayerController* Player, float* LocationX, float* LocationY)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetLayoutLibrary", "GetMousePositionScaledByDPI");

	Params::UWidgetLayoutLibrary_GetMousePositionScaledByDPI_Params Parms{};

	Parms.Player = Player;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (LocationX != nullptr)
		*LocationX = Parms.LocationX;

	if (LocationY != nullptr)
		*LocationY = Parms.LocationY;

	return Parms.ReturnValue;

}


// Function UMG.WidgetLayoutLibrary.GetMousePositionOnViewport
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector2D UWidgetLayoutLibrary::GetMousePositionOnViewport(class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetLayoutLibrary", "GetMousePositionOnViewport");

	Params::UWidgetLayoutLibrary_GetMousePositionOnViewport_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function UMG.WidgetLayoutLibrary.GetMousePositionOnPlatform
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector2D UWidgetLayoutLibrary::GetMousePositionOnPlatform()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WidgetLayoutLibrary", "GetMousePositionOnPlatform");

	Params::UWidgetLayoutLibrary_GetMousePositionOnPlatform_Params Parms{};


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
