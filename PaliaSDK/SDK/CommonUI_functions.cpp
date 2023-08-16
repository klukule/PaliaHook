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


// Function CommonUI.CommonUserWidget.SetConsumePointerInput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInConsumePointerInput                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonUserWidget::SetConsumePointerInput(bool InbInConsumePointerInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonUserWidget", "SetConsumePointerInput");

	Params::UCommonUserWidget_SetConsumePointerInput_Params Parms{};

	Parms.bInConsumePointerInput = InbInConsumePointerInput;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonActivatableWidget.SetBindVisibilities
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ESlateVisibility        OnActivatedVisibility                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ESlateVisibility        OnDeactivatedVisibility                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bInAllActive                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonActivatableWidget::SetBindVisibilities(enum class ESlateVisibility InOnActivatedVisibility, enum class ESlateVisibility InOnDeactivatedVisibility, bool InbInAllActive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonActivatableWidget", "SetBindVisibilities");

	Params::UCommonActivatableWidget_SetBindVisibilities_Params Parms{};

	Parms.OnActivatedVisibility = InOnActivatedVisibility;
	Parms.OnDeactivatedVisibility = InOnDeactivatedVisibility;
	Parms.bInAllActive = InbInAllActive;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonActivatableWidget.IsActivated
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCommonActivatableWidget::IsActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonActivatableWidget", "IsActivated");

	Params::UCommonActivatableWidget_IsActivated_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonActivatableWidget.GetDesiredFocusTarget
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UWidget*                     ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UWidget* UCommonActivatableWidget::GetDesiredFocusTarget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonActivatableWidget", "GetDesiredFocusTarget");

	Params::UCommonActivatableWidget_GetDesiredFocusTarget_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonActivatableWidget.DeactivateWidget
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UCommonActivatableWidget::DeactivateWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonActivatableWidget", "DeactivateWidget");

	Params::UCommonActivatableWidget_DeactivateWidget_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonActivatableWidget.BP_OnHandleBackAction
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCommonActivatableWidget::BP_OnHandleBackAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonActivatableWidget", "BP_OnHandleBackAction");

	Params::UCommonActivatableWidget_BP_OnHandleBackAction_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function CommonUI.CommonActivatableWidget.BP_OnDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UCommonActivatableWidget::BP_OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonActivatableWidget", "BP_OnDeactivated");

	Params::UCommonActivatableWidget_BP_OnDeactivated_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function CommonUI.CommonActivatableWidget.BP_OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UCommonActivatableWidget::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonActivatableWidget", "BP_OnActivated");

	Params::UCommonActivatableWidget_BP_OnActivated_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function CommonUI.CommonActivatableWidget.BP_GetDesiredFocusTarget
// (Event, Protected, BlueprintEvent, Const)
// Parameters:
// class UWidget*                     ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UWidget* UCommonActivatableWidget::BP_GetDesiredFocusTarget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonActivatableWidget", "BP_GetDesiredFocusTarget");

	Params::UCommonActivatableWidget_BP_GetDesiredFocusTarget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function CommonUI.CommonActivatableWidget.BindVisibilityToActivation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UCommonActivatableWidget*    ActivatableWidget                                                (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonActivatableWidget::BindVisibilityToActivation(class UCommonActivatableWidget* InActivatableWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonActivatableWidget", "BindVisibilityToActivation");

	Params::UCommonActivatableWidget_BindVisibilityToActivation_Params Parms{};

	Parms.ActivatableWidget = InActivatableWidget;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonActivatableWidget.ActivateWidget
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UCommonActivatableWidget::ActivateWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonActivatableWidget", "ActivateWidget");

	Params::UCommonActivatableWidget_ActivateWidget_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonButtonStyle.GetSelectedTextStyle
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UCommonTextStyle*            ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UCommonTextStyle* UCommonButtonStyle::GetSelectedTextStyle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonStyle", "GetSelectedTextStyle");

	Params::UCommonButtonStyle_GetSelectedTextStyle_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonButtonStyle.GetSelectedPressedBrush
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FSlateBrush                 Brush                                                            (Parm, OutParm, NativeAccessSpecifierPublic)

void UCommonButtonStyle::GetSelectedPressedBrush(struct FSlateBrush* InBrush)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonStyle", "GetSelectedPressedBrush");

	Params::UCommonButtonStyle_GetSelectedPressedBrush_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (InBrush != nullptr)
		*InBrush = Parms.Brush;

}


// Function CommonUI.CommonButtonStyle.GetSelectedHoveredTextStyle
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UCommonTextStyle*            ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UCommonTextStyle* UCommonButtonStyle::GetSelectedHoveredTextStyle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonStyle", "GetSelectedHoveredTextStyle");

	Params::UCommonButtonStyle_GetSelectedHoveredTextStyle_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonButtonStyle.GetSelectedHoveredBrush
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FSlateBrush                 Brush                                                            (Parm, OutParm, NativeAccessSpecifierPublic)

void UCommonButtonStyle::GetSelectedHoveredBrush(struct FSlateBrush* InBrush)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonStyle", "GetSelectedHoveredBrush");

	Params::UCommonButtonStyle_GetSelectedHoveredBrush_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (InBrush != nullptr)
		*InBrush = Parms.Brush;

}


// Function CommonUI.CommonButtonStyle.GetSelectedBaseBrush
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FSlateBrush                 Brush                                                            (Parm, OutParm, NativeAccessSpecifierPublic)

void UCommonButtonStyle::GetSelectedBaseBrush(struct FSlateBrush* InBrush)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonStyle", "GetSelectedBaseBrush");

	Params::UCommonButtonStyle_GetSelectedBaseBrush_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (InBrush != nullptr)
		*InBrush = Parms.Brush;

}


// Function CommonUI.CommonButtonStyle.GetNormalTextStyle
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UCommonTextStyle*            ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UCommonTextStyle* UCommonButtonStyle::GetNormalTextStyle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonStyle", "GetNormalTextStyle");

	Params::UCommonButtonStyle_GetNormalTextStyle_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonButtonStyle.GetNormalPressedBrush
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FSlateBrush                 Brush                                                            (Parm, OutParm, NativeAccessSpecifierPublic)

void UCommonButtonStyle::GetNormalPressedBrush(struct FSlateBrush* InBrush)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonStyle", "GetNormalPressedBrush");

	Params::UCommonButtonStyle_GetNormalPressedBrush_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (InBrush != nullptr)
		*InBrush = Parms.Brush;

}


// Function CommonUI.CommonButtonStyle.GetNormalHoveredTextStyle
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UCommonTextStyle*            ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UCommonTextStyle* UCommonButtonStyle::GetNormalHoveredTextStyle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonStyle", "GetNormalHoveredTextStyle");

	Params::UCommonButtonStyle_GetNormalHoveredTextStyle_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonButtonStyle.GetNormalHoveredBrush
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FSlateBrush                 Brush                                                            (Parm, OutParm, NativeAccessSpecifierPublic)

void UCommonButtonStyle::GetNormalHoveredBrush(struct FSlateBrush* InBrush)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonStyle", "GetNormalHoveredBrush");

	Params::UCommonButtonStyle_GetNormalHoveredBrush_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (InBrush != nullptr)
		*InBrush = Parms.Brush;

}


// Function CommonUI.CommonButtonStyle.GetNormalBaseBrush
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FSlateBrush                 Brush                                                            (Parm, OutParm, NativeAccessSpecifierPublic)

void UCommonButtonStyle::GetNormalBaseBrush(struct FSlateBrush* InBrush)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonStyle", "GetNormalBaseBrush");

	Params::UCommonButtonStyle_GetNormalBaseBrush_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (InBrush != nullptr)
		*InBrush = Parms.Brush;

}


// Function CommonUI.CommonButtonStyle.GetMaterialBrush
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FSlateBrush                 Brush                                                            (Parm, OutParm, NativeAccessSpecifierPublic)

void UCommonButtonStyle::GetMaterialBrush(struct FSlateBrush* InBrush)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonStyle", "GetMaterialBrush");

	Params::UCommonButtonStyle_GetMaterialBrush_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (InBrush != nullptr)
		*InBrush = Parms.Brush;

}


// Function CommonUI.CommonButtonStyle.GetDisabledTextStyle
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UCommonTextStyle*            ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UCommonTextStyle* UCommonButtonStyle::GetDisabledTextStyle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonStyle", "GetDisabledTextStyle");

	Params::UCommonButtonStyle_GetDisabledTextStyle_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonButtonStyle.GetDisabledBrush
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FSlateBrush                 Brush                                                            (Parm, OutParm, NativeAccessSpecifierPublic)

void UCommonButtonStyle::GetDisabledBrush(struct FSlateBrush* InBrush)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonStyle", "GetDisabledBrush");

	Params::UCommonButtonStyle_GetDisabledBrush_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (InBrush != nullptr)
		*InBrush = Parms.Brush;

}


// Function CommonUI.CommonButtonStyle.GetCustomPadding
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMargin                     OutCustomPadding                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void UCommonButtonStyle::GetCustomPadding(struct FMargin* InOutCustomPadding)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonStyle", "GetCustomPadding");

	Params::UCommonButtonStyle_GetCustomPadding_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (InOutCustomPadding != nullptr)
		*InOutCustomPadding = Parms.OutCustomPadding;

}


// Function CommonUI.CommonButtonStyle.GetButtonPadding
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMargin                     OutButtonPadding                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void UCommonButtonStyle::GetButtonPadding(struct FMargin* InOutButtonPadding)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonStyle", "GetButtonPadding");

	Params::UCommonButtonStyle_GetButtonPadding_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (InOutButtonPadding != nullptr)
		*InOutButtonPadding = Parms.OutButtonPadding;

}


// Function CommonUI.CommonButtonBase.StopDoubleClickPropagation
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UCommonButtonBase::StopDoubleClickPropagation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonBase", "StopDoubleClickPropagation");

	Params::UCommonButtonBase_StopDoubleClickPropagation_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonButtonBase.SetTriggeringInputAction
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FDataTableRowHandle         InputActionRow                                                   (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UCommonButtonBase::SetTriggeringInputAction(struct FDataTableRowHandle& InInputActionRow)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonBase", "SetTriggeringInputAction");

	Params::UCommonButtonBase_SetTriggeringInputAction_Params Parms{};

	Parms.InputActionRow = InInputActionRow;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonButtonBase.SetTriggeringEnhancedInputAction
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UInputAction*                InInputAction                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonButtonBase::SetTriggeringEnhancedInputAction(class UInputAction* InInInputAction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonBase", "SetTriggeringEnhancedInputAction");

	Params::UCommonButtonBase_SetTriggeringEnhancedInputAction_Params Parms{};

	Parms.InInputAction = InInInputAction;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonButtonBase.SetTriggeredInputAction
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FDataTableRowHandle         InputActionRow                                                   (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UCommonButtonBase::SetTriggeredInputAction(struct FDataTableRowHandle& InInputActionRow)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonBase", "SetTriggeredInputAction");

	Params::UCommonButtonBase_SetTriggeredInputAction_Params Parms{};

	Parms.InputActionRow = InInputActionRow;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonButtonBase.SetTouchMethod
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EButtonTouchMethod      InTouchMethod                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonButtonBase::SetTouchMethod(enum class EButtonTouchMethod InInTouchMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonBase", "SetTouchMethod");

	Params::UCommonButtonBase_SetTouchMethod_Params Parms{};

	Parms.InTouchMethod = InInTouchMethod;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonButtonBase.SetStyle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TSubclassOf<class UCommonButtonStyle>InStyle                                                          (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonButtonBase::SetStyle(TSubclassOf<class UCommonButtonStyle> InInStyle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonBase", "SetStyle");

	Params::UCommonButtonBase_SetStyle_Params Parms{};

	Parms.InStyle = InInStyle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonButtonBase.SetShouldUseFallbackDefaultInputAction
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInShouldUseFallbackDefaultInputAction                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonButtonBase::SetShouldUseFallbackDefaultInputAction(bool InbInShouldUseFallbackDefaultInputAction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonBase", "SetShouldUseFallbackDefaultInputAction");

	Params::UCommonButtonBase_SetShouldUseFallbackDefaultInputAction_Params Parms{};

	Parms.bInShouldUseFallbackDefaultInputAction = InbInShouldUseFallbackDefaultInputAction;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonButtonBase.SetShouldSelectUponReceivingFocus
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInShouldSelectUponReceivingFocus                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonButtonBase::SetShouldSelectUponReceivingFocus(bool InbInShouldSelectUponReceivingFocus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonBase", "SetShouldSelectUponReceivingFocus");

	Params::UCommonButtonBase_SetShouldSelectUponReceivingFocus_Params Parms{};

	Parms.bInShouldSelectUponReceivingFocus = InbInShouldSelectUponReceivingFocus;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonButtonBase.SetSelectedPressedSoundOverride
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USoundBase*                  Sound                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonButtonBase::SetSelectedPressedSoundOverride(class USoundBase* InSound)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonBase", "SetSelectedPressedSoundOverride");

	Params::UCommonButtonBase_SetSelectedPressedSoundOverride_Params Parms{};

	Parms.Sound = InSound;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonButtonBase.SetSelectedInternal
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// bool                               bInSelected                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAllowSound                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bBroadcast                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonButtonBase::SetSelectedInternal(bool InbInSelected, bool InbAllowSound, bool InbBroadcast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonBase", "SetSelectedInternal");

	Params::UCommonButtonBase_SetSelectedInternal_Params Parms{};

	Parms.bInSelected = InbInSelected;
	Parms.bAllowSound = InbAllowSound;
	Parms.bBroadcast = InbBroadcast;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonButtonBase.SetSelectedHoveredSoundOverride
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USoundBase*                  Sound                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonButtonBase::SetSelectedHoveredSoundOverride(class USoundBase* InSound)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonBase", "SetSelectedHoveredSoundOverride");

	Params::UCommonButtonBase_SetSelectedHoveredSoundOverride_Params Parms{};

	Parms.Sound = InSound;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonButtonBase.SetPressMethod
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EButtonPressMethod      InPressMethod                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonButtonBase::SetPressMethod(enum class EButtonPressMethod InInPressMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonBase", "SetPressMethod");

	Params::UCommonButtonBase_SetPressMethod_Params Parms{};

	Parms.InPressMethod = InInPressMethod;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonButtonBase.SetPressedSoundOverride
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USoundBase*                  Sound                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonButtonBase::SetPressedSoundOverride(class USoundBase* InSound)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonBase", "SetPressedSoundOverride");

	Params::UCommonButtonBase_SetPressedSoundOverride_Params Parms{};

	Parms.Sound = InSound;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonButtonBase.SetMinDimensions
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              InMinWidth                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              InMinHeight                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonButtonBase::SetMinDimensions(int32 InInMinWidth, int32 InInMinHeight)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonBase", "SetMinDimensions");

	Params::UCommonButtonBase_SetMinDimensions_Params Parms{};

	Parms.InMinWidth = InInMinWidth;
	Parms.InMinHeight = InInMinHeight;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonButtonBase.SetLockedPressedSoundOverride
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USoundBase*                  Sound                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonButtonBase::SetLockedPressedSoundOverride(class USoundBase* InSound)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonBase", "SetLockedPressedSoundOverride");

	Params::UCommonButtonBase_SetLockedPressedSoundOverride_Params Parms{};

	Parms.Sound = InSound;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonButtonBase.SetLockedHoveredSoundOverride
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USoundBase*                  Sound                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonButtonBase::SetLockedHoveredSoundOverride(class USoundBase* InSound)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonBase", "SetLockedHoveredSoundOverride");

	Params::UCommonButtonBase_SetLockedHoveredSoundOverride_Params Parms{};

	Parms.Sound = InSound;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonButtonBase.SetIsToggleable
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInIsToggleable                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonButtonBase::SetIsToggleable(bool InbInIsToggleable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonBase", "SetIsToggleable");

	Params::UCommonButtonBase_SetIsToggleable_Params Parms{};

	Parms.bInIsToggleable = InbInIsToggleable;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonButtonBase.SetIsSelected
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               InSelected                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bGiveClickFeedback                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonButtonBase::SetIsSelected(bool InInSelected, bool InbGiveClickFeedback)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonBase", "SetIsSelected");

	Params::UCommonButtonBase_SetIsSelected_Params Parms{};

	Parms.InSelected = InInSelected;
	Parms.bGiveClickFeedback = InbGiveClickFeedback;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonButtonBase.SetIsSelectable
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInIsSelectable                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonButtonBase::SetIsSelectable(bool InbInIsSelectable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonBase", "SetIsSelectable");

	Params::UCommonButtonBase_SetIsSelectable_Params Parms{};

	Parms.bInIsSelectable = InbInIsSelectable;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonButtonBase.SetIsLocked
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInIsLocked                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonButtonBase::SetIsLocked(bool InbInIsLocked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonBase", "SetIsLocked");

	Params::UCommonButtonBase_SetIsLocked_Params Parms{};

	Parms.bInIsLocked = InbInIsLocked;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonButtonBase.SetIsInteractionEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInIsInteractionEnabled                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonButtonBase::SetIsInteractionEnabled(bool InbInIsInteractionEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonBase", "SetIsInteractionEnabled");

	Params::UCommonButtonBase_SetIsInteractionEnabled_Params Parms{};

	Parms.bInIsInteractionEnabled = InbInIsInteractionEnabled;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonButtonBase.SetIsInteractableWhenSelected
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInInteractableWhenSelected                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonButtonBase::SetIsInteractableWhenSelected(bool InbInInteractableWhenSelected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonBase", "SetIsInteractableWhenSelected");

	Params::UCommonButtonBase_SetIsInteractableWhenSelected_Params Parms{};

	Parms.bInInteractableWhenSelected = InbInInteractableWhenSelected;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonButtonBase.SetIsFocusable
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInIsFocusable                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonButtonBase::SetIsFocusable(bool InbInIsFocusable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonBase", "SetIsFocusable");

	Params::UCommonButtonBase_SetIsFocusable_Params Parms{};

	Parms.bInIsFocusable = InbInIsFocusable;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonButtonBase.SetInputActionProgressMaterial
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSlateBrush                 InProgressMaterialBrush                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FName                        InProgressMaterialParam                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonButtonBase::SetInputActionProgressMaterial(struct FSlateBrush& InInProgressMaterialBrush, class FName& InInProgressMaterialParam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonBase", "SetInputActionProgressMaterial");

	Params::UCommonButtonBase_SetInputActionProgressMaterial_Params Parms{};

	Parms.InProgressMaterialBrush = InInProgressMaterialBrush;
	Parms.InProgressMaterialParam = InInProgressMaterialParam;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonButtonBase.SetHoveredSoundOverride
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USoundBase*                  Sound                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonButtonBase::SetHoveredSoundOverride(class USoundBase* InSound)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonBase", "SetHoveredSoundOverride");

	Params::UCommonButtonBase_SetHoveredSoundOverride_Params Parms{};

	Parms.Sound = InSound;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonButtonBase.SetHideInputAction
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInHideInputAction                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonButtonBase::SetHideInputAction(bool InbInHideInputAction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonBase", "SetHideInputAction");

	Params::UCommonButtonBase_SetHideInputAction_Params Parms{};

	Parms.bInHideInputAction = InbInHideInputAction;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonButtonBase.SetClickMethod
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EButtonClickMethod      InClickMethod                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonButtonBase::SetClickMethod(enum class EButtonClickMethod InInClickMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonBase", "SetClickMethod");

	Params::UCommonButtonBase_SetClickMethod_Params Parms{};

	Parms.InClickMethod = InInClickMethod;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonButtonBase.OnTriggeringInputActionChanged
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle         NewTriggeredAction                                               (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UCommonButtonBase::OnTriggeringInputActionChanged(struct FDataTableRowHandle& InNewTriggeredAction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonBase", "OnTriggeringInputActionChanged");

	Params::UCommonButtonBase_OnTriggeringInputActionChanged_Params Parms{};

	Parms.NewTriggeredAction = InNewTriggeredAction;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CommonUI.CommonButtonBase.OnTriggeringEnhancedInputActionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UInputAction*                InInputAction                                                    (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonButtonBase::OnTriggeringEnhancedInputActionChanged(class UInputAction* InInInputAction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonBase", "OnTriggeringEnhancedInputActionChanged");

	Params::UCommonButtonBase_OnTriggeringEnhancedInputActionChanged_Params Parms{};

	Parms.InInputAction = InInInputAction;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CommonUI.CommonButtonBase.OnTriggeredInputActionChanged
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FDataTableRowHandle         NewTriggeredAction                                               (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UCommonButtonBase::OnTriggeredInputActionChanged(struct FDataTableRowHandle& InNewTriggeredAction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonBase", "OnTriggeredInputActionChanged");

	Params::UCommonButtonBase_OnTriggeredInputActionChanged_Params Parms{};

	Parms.NewTriggeredAction = InNewTriggeredAction;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CommonUI.CommonButtonBase.OnInputMethodChanged
// (Native, Protected)
// Parameters:
// enum class ECommonInputType        CurrentInputType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonButtonBase::OnInputMethodChanged(enum class ECommonInputType InCurrentInputType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonBase", "OnInputMethodChanged");

	Params::UCommonButtonBase_OnInputMethodChanged_Params Parms{};

	Parms.CurrentInputType = InCurrentInputType;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonButtonBase.OnCurrentTextStyleChanged
// (Event, Protected, BlueprintEvent)
// Parameters:

void UCommonButtonBase::OnCurrentTextStyleChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonBase", "OnCurrentTextStyleChanged");

	Params::UCommonButtonBase_OnCurrentTextStyleChanged_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function CommonUI.CommonButtonBase.OnActionProgress
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              HeldPercent                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonButtonBase::OnActionProgress(float InHeldPercent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonBase", "OnActionProgress");

	Params::UCommonButtonBase_OnActionProgress_Params Parms{};

	Parms.HeldPercent = InHeldPercent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CommonUI.CommonButtonBase.OnActionComplete
// (Event, Protected, BlueprintEvent)
// Parameters:

void UCommonButtonBase::OnActionComplete()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonBase", "OnActionComplete");

	Params::UCommonButtonBase_OnActionComplete_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function CommonUI.CommonButtonBase.NativeOnActionProgress
// (Native, Protected)
// Parameters:
// float                              HeldPercent                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonButtonBase::NativeOnActionProgress(float InHeldPercent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonBase", "NativeOnActionProgress");

	Params::UCommonButtonBase_NativeOnActionProgress_Params Parms{};

	Parms.HeldPercent = InHeldPercent;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonButtonBase.NativeOnActionComplete
// (Native, Protected)
// Parameters:

void UCommonButtonBase::NativeOnActionComplete()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonBase", "NativeOnActionComplete");

	Params::UCommonButtonBase_NativeOnActionComplete_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonButtonBase.IsPressed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCommonButtonBase::IsPressed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonBase", "IsPressed");

	Params::UCommonButtonBase_IsPressed_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonButtonBase.IsInteractionEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCommonButtonBase::IsInteractionEnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonBase", "IsInteractionEnabled");

	Params::UCommonButtonBase_IsInteractionEnabled_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonButtonBase.HandleTriggeringActionCommited
// (Native, Protected, HasOutParams)
// Parameters:
// bool                               bPassThrough                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonButtonBase::HandleTriggeringActionCommited(bool* InbPassThrough)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonBase", "HandleTriggeringActionCommited");

	Params::UCommonButtonBase_HandleTriggeringActionCommited_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (InbPassThrough != nullptr)
		*InbPassThrough = Parms.bPassThrough;

}


// Function CommonUI.CommonButtonBase.HandleFocusReceived
// (Native, Protected)
// Parameters:

void UCommonButtonBase::HandleFocusReceived()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonBase", "HandleFocusReceived");

	Params::UCommonButtonBase_HandleFocusReceived_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonButtonBase.HandleFocusLost
// (Native, Protected)
// Parameters:

void UCommonButtonBase::HandleFocusLost()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonBase", "HandleFocusLost");

	Params::UCommonButtonBase_HandleFocusLost_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonButtonBase.HandleButtonReleased
// (Final, Native, Protected)
// Parameters:

void UCommonButtonBase::HandleButtonReleased()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonBase", "HandleButtonReleased");

	Params::UCommonButtonBase_HandleButtonReleased_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonButtonBase.HandleButtonPressed
// (Final, Native, Protected)
// Parameters:

void UCommonButtonBase::HandleButtonPressed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonBase", "HandleButtonPressed");

	Params::UCommonButtonBase_HandleButtonPressed_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonButtonBase.HandleButtonClicked
// (Final, Native, Protected)
// Parameters:

void UCommonButtonBase::HandleButtonClicked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonBase", "HandleButtonClicked");

	Params::UCommonButtonBase_HandleButtonClicked_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonButtonBase.GetStyle
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UCommonButtonStyle*          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UCommonButtonStyle* UCommonButtonBase::GetStyle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonBase", "GetStyle");

	Params::UCommonButtonBase_GetStyle_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonButtonBase.GetSingleMaterialStyleMID
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UMaterialInstanceDynamic*    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMaterialInstanceDynamic* UCommonButtonBase::GetSingleMaterialStyleMID()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonBase", "GetSingleMaterialStyleMID");

	Params::UCommonButtonBase_GetSingleMaterialStyleMID_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonButtonBase.GetShouldSelectUponReceivingFocus
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCommonButtonBase::GetShouldSelectUponReceivingFocus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonBase", "GetShouldSelectUponReceivingFocus");

	Params::UCommonButtonBase_GetShouldSelectUponReceivingFocus_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonButtonBase.GetSelected
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCommonButtonBase::GetSelected()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonBase", "GetSelected");

	Params::UCommonButtonBase_GetSelected_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonButtonBase.GetLocked
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCommonButtonBase::GetLocked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonBase", "GetLocked");

	Params::UCommonButtonBase_GetLocked_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonButtonBase.GetIsFocusable
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCommonButtonBase::GetIsFocusable()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonBase", "GetIsFocusable");

	Params::UCommonButtonBase_GetIsFocusable_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonButtonBase.GetInputAction
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FDataTableRowHandle         InputActionRow                                                   (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCommonButtonBase::GetInputAction(struct FDataTableRowHandle* InInputActionRow)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonBase", "GetInputAction");

	Params::UCommonButtonBase_GetInputAction_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (InInputActionRow != nullptr)
		*InInputActionRow = Parms.InputActionRow;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonButtonBase.GetEnhancedInputAction
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UInputAction*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UInputAction* UCommonButtonBase::GetEnhancedInputAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonBase", "GetEnhancedInputAction");

	Params::UCommonButtonBase_GetEnhancedInputAction_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonButtonBase.GetCurrentTextStyleClass
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TSubclassOf<class UCommonTextStyle>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TSubclassOf<class UCommonTextStyle> UCommonButtonBase::GetCurrentTextStyleClass()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonBase", "GetCurrentTextStyleClass");

	Params::UCommonButtonBase_GetCurrentTextStyleClass_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonButtonBase.GetCurrentTextStyle
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UCommonTextStyle*            ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UCommonTextStyle* UCommonButtonBase::GetCurrentTextStyle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonBase", "GetCurrentTextStyle");

	Params::UCommonButtonBase_GetCurrentTextStyle_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonButtonBase.GetCurrentCustomPadding
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMargin                     OutCustomPadding                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void UCommonButtonBase::GetCurrentCustomPadding(struct FMargin* InOutCustomPadding)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonBase", "GetCurrentCustomPadding");

	Params::UCommonButtonBase_GetCurrentCustomPadding_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (InOutCustomPadding != nullptr)
		*InOutCustomPadding = Parms.OutCustomPadding;

}


// Function CommonUI.CommonButtonBase.GetCurrentButtonPadding
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMargin                     OutButtonPadding                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void UCommonButtonBase::GetCurrentButtonPadding(struct FMargin* InOutButtonPadding)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonBase", "GetCurrentButtonPadding");

	Params::UCommonButtonBase_GetCurrentButtonPadding_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (InOutButtonPadding != nullptr)
		*InOutButtonPadding = Parms.OutButtonPadding;

}


// Function CommonUI.CommonButtonBase.DisableButtonWithReason
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FText                        DisabledReason                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UCommonButtonBase::DisableButtonWithReason(class FText& InDisabledReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonBase", "DisableButtonWithReason");

	Params::UCommonButtonBase_DisableButtonWithReason_Params Parms{};

	Parms.DisabledReason = InDisabledReason;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonButtonBase.ClearSelection
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UCommonButtonBase::ClearSelection()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonBase", "ClearSelection");

	Params::UCommonButtonBase_ClearSelection_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonButtonBase.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UCommonButtonBase::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonBase", "BP_OnUnhovered");

	Params::UCommonButtonBase_BP_OnUnhovered_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function CommonUI.CommonButtonBase.BP_OnSelected
// (Event, Protected, BlueprintEvent)
// Parameters:

void UCommonButtonBase::BP_OnSelected()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonBase", "BP_OnSelected");

	Params::UCommonButtonBase_BP_OnSelected_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function CommonUI.CommonButtonBase.BP_OnReleased
// (Event, Protected, BlueprintEvent)
// Parameters:

void UCommonButtonBase::BP_OnReleased()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonBase", "BP_OnReleased");

	Params::UCommonButtonBase_BP_OnReleased_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function CommonUI.CommonButtonBase.BP_OnPressed
// (Event, Protected, BlueprintEvent)
// Parameters:

void UCommonButtonBase::BP_OnPressed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonBase", "BP_OnPressed");

	Params::UCommonButtonBase_BP_OnPressed_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function CommonUI.CommonButtonBase.BP_OnLockedChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsLocked                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonButtonBase::BP_OnLockedChanged(bool InbIsLocked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonBase", "BP_OnLockedChanged");

	Params::UCommonButtonBase_BP_OnLockedChanged_Params Parms{};

	Parms.bIsLocked = InbIsLocked;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CommonUI.CommonButtonBase.BP_OnLockDoubleClicked
// (Event, Protected, BlueprintEvent)
// Parameters:

void UCommonButtonBase::BP_OnLockDoubleClicked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonBase", "BP_OnLockDoubleClicked");

	Params::UCommonButtonBase_BP_OnLockDoubleClicked_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function CommonUI.CommonButtonBase.BP_OnLockClicked
// (Event, Protected, BlueprintEvent)
// Parameters:

void UCommonButtonBase::BP_OnLockClicked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonBase", "BP_OnLockClicked");

	Params::UCommonButtonBase_BP_OnLockClicked_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function CommonUI.CommonButtonBase.BP_OnInputMethodChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class ECommonInputType        CurrentInputType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonButtonBase::BP_OnInputMethodChanged(enum class ECommonInputType InCurrentInputType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonBase", "BP_OnInputMethodChanged");

	Params::UCommonButtonBase_BP_OnInputMethodChanged_Params Parms{};

	Parms.CurrentInputType = InCurrentInputType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CommonUI.CommonButtonBase.BP_OnHovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UCommonButtonBase::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonBase", "BP_OnHovered");

	Params::UCommonButtonBase_BP_OnHovered_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function CommonUI.CommonButtonBase.BP_OnFocusReceived
// (Event, Protected, BlueprintEvent)
// Parameters:

void UCommonButtonBase::BP_OnFocusReceived()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonBase", "BP_OnFocusReceived");

	Params::UCommonButtonBase_BP_OnFocusReceived_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function CommonUI.CommonButtonBase.BP_OnFocusLost
// (Event, Protected, BlueprintEvent)
// Parameters:

void UCommonButtonBase::BP_OnFocusLost()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonBase", "BP_OnFocusLost");

	Params::UCommonButtonBase_BP_OnFocusLost_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function CommonUI.CommonButtonBase.BP_OnEnabled
// (Event, Protected, BlueprintEvent)
// Parameters:

void UCommonButtonBase::BP_OnEnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonBase", "BP_OnEnabled");

	Params::UCommonButtonBase_BP_OnEnabled_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function CommonUI.CommonButtonBase.BP_OnDoubleClicked
// (Event, Protected, BlueprintEvent)
// Parameters:

void UCommonButtonBase::BP_OnDoubleClicked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonBase", "BP_OnDoubleClicked");

	Params::UCommonButtonBase_BP_OnDoubleClicked_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function CommonUI.CommonButtonBase.BP_OnDisabled
// (Event, Protected, BlueprintEvent)
// Parameters:

void UCommonButtonBase::BP_OnDisabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonBase", "BP_OnDisabled");

	Params::UCommonButtonBase_BP_OnDisabled_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function CommonUI.CommonButtonBase.BP_OnDeselected
// (Event, Protected, BlueprintEvent)
// Parameters:

void UCommonButtonBase::BP_OnDeselected()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonBase", "BP_OnDeselected");

	Params::UCommonButtonBase_BP_OnDeselected_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function CommonUI.CommonButtonBase.BP_OnClicked
// (Event, Protected, BlueprintEvent)
// Parameters:

void UCommonButtonBase::BP_OnClicked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonBase", "BP_OnClicked");

	Params::UCommonButtonBase_BP_OnClicked_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function CommonUI.CommonActionWidget.SetInputActions
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<struct FDataTableRowHandle> NewInputActions                                                  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)

void UCommonActionWidget::SetInputActions(const TArray<struct FDataTableRowHandle>& InNewInputActions)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonActionWidget", "SetInputActions");

	Params::UCommonActionWidget_SetInputActions_Params Parms{};

	Parms.NewInputActions = InNewInputActions;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonActionWidget.SetInputAction
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FDataTableRowHandle         InputActionRow                                                   (Parm, NoDestructor, NativeAccessSpecifierPublic)

void UCommonActionWidget::SetInputAction(const struct FDataTableRowHandle& InInputActionRow)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonActionWidget", "SetInputAction");

	Params::UCommonActionWidget_SetInputAction_Params Parms{};

	Parms.InputActionRow = InInputActionRow;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonActionWidget.SetIconRimBrush
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FSlateBrush                 InIconRimBrush                                                   (Parm, NativeAccessSpecifierPublic)

void UCommonActionWidget::SetIconRimBrush(const struct FSlateBrush& InInIconRimBrush)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonActionWidget", "SetIconRimBrush");

	Params::UCommonActionWidget_SetIconRimBrush_Params Parms{};

	Parms.InIconRimBrush = InInIconRimBrush;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonActionWidget.SetEnhancedInputAction
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UInputAction*                InInputAction                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonActionWidget::SetEnhancedInputAction(class UInputAction* InInInputAction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonActionWidget", "SetEnhancedInputAction");

	Params::UCommonActionWidget_SetEnhancedInputAction_Params Parms{};

	Parms.InInputAction = InInInputAction;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// DelegateFunction CommonUI.CommonActionWidget.OnInputMethodChanged__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// bool                               bUsingGamepad                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonActionWidget::OnInputMethodChanged__DelegateSignature(bool InbUsingGamepad)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonActionWidget", "OnInputMethodChanged__DelegateSignature");

	Params::UCommonActionWidget_OnInputMethodChanged__DelegateSignature_Params Parms{};

	Parms.bUsingGamepad = InbUsingGamepad;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CommonUI.CommonActionWidget.IsHeldAction
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCommonActionWidget::IsHeldAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonActionWidget", "IsHeldAction");

	Params::UCommonActionWidget_IsHeldAction_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonActionWidget.GetIcon
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FSlateBrush                 ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FSlateBrush UCommonActionWidget::GetIcon()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonActionWidget", "GetIcon");

	Params::UCommonActionWidget_GetIcon_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonActionWidget.GetDisplayText
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText UCommonActionWidget::GetDisplayText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonActionWidget", "GetDisplayText");

	Params::UCommonActionWidget_GetDisplayText_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonAnimatedSwitcher.SetDisableTransitionAnimation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bDisableAnimation                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonAnimatedSwitcher::SetDisableTransitionAnimation(bool InbDisableAnimation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonAnimatedSwitcher", "SetDisableTransitionAnimation");

	Params::UCommonAnimatedSwitcher_SetDisableTransitionAnimation_Params Parms{};

	Parms.bDisableAnimation = InbDisableAnimation;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonAnimatedSwitcher.IsTransitionPlaying
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCommonAnimatedSwitcher::IsTransitionPlaying()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonAnimatedSwitcher", "IsTransitionPlaying");

	Params::UCommonAnimatedSwitcher_IsTransitionPlaying_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonAnimatedSwitcher.IsCurrentlySwitching
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCommonAnimatedSwitcher::IsCurrentlySwitching()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonAnimatedSwitcher", "IsCurrentlySwitching");

	Params::UCommonAnimatedSwitcher_IsCurrentlySwitching_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonAnimatedSwitcher.HasWidgets
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCommonAnimatedSwitcher::HasWidgets()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonAnimatedSwitcher", "HasWidgets");

	Params::UCommonAnimatedSwitcher_HasWidgets_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonAnimatedSwitcher.ActivatePreviousWidget
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bCanWrap                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonAnimatedSwitcher::ActivatePreviousWidget(bool InbCanWrap)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonAnimatedSwitcher", "ActivatePreviousWidget");

	Params::UCommonAnimatedSwitcher_ActivatePreviousWidget_Params Parms{};

	Parms.bCanWrap = InbCanWrap;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonAnimatedSwitcher.ActivateNextWidget
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bCanWrap                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonAnimatedSwitcher::ActivateNextWidget(bool InbCanWrap)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonAnimatedSwitcher", "ActivateNextWidget");

	Params::UCommonAnimatedSwitcher_ActivateNextWidget_Params Parms{};

	Parms.bCanWrap = InbCanWrap;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonBorderStyle.GetBackgroundBrush
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FSlateBrush                 Brush                                                            (Parm, OutParm, NativeAccessSpecifierPublic)

void UCommonBorderStyle::GetBackgroundBrush(struct FSlateBrush* InBrush)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonBorderStyle", "GetBackgroundBrush");

	Params::UCommonBorderStyle_GetBackgroundBrush_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (InBrush != nullptr)
		*InBrush = Parms.Brush;

}


// Function CommonUI.CommonBorder.SetStyle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TSubclassOf<class UCommonBorderStyle>InStyle                                                          (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonBorder::SetStyle(TSubclassOf<class UCommonBorderStyle> InInStyle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonBorder", "SetStyle");

	Params::UCommonBorder_SetStyle_Params Parms{};

	Parms.InStyle = InInStyle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonTextBlock.SetWrapTextWidth
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              InWrapTextAt                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonTextBlock::SetWrapTextWidth(int32 InInWrapTextAt)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonTextBlock", "SetWrapTextWidth");

	Params::UCommonTextBlock_SetWrapTextWidth_Params Parms{};

	Parms.InWrapTextAt = InInWrapTextAt;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonTextBlock.SetTextCase
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bUseAllCaps                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonTextBlock::SetTextCase(bool InbUseAllCaps)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonTextBlock", "SetTextCase");

	Params::UCommonTextBlock_SetTextCase_Params Parms{};

	Parms.bUseAllCaps = InbUseAllCaps;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonTextBlock.SetStyle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TSubclassOf<class UCommonTextStyle>InStyle                                                          (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonTextBlock::SetStyle(TSubclassOf<class UCommonTextStyle> InInStyle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonTextBlock", "SetStyle");

	Params::UCommonTextBlock_SetStyle_Params Parms{};

	Parms.InStyle = InInStyle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonTextBlock.SetScrollingEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInIsScrollingEnabled                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonTextBlock::SetScrollingEnabled(bool InbInIsScrollingEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonTextBlock", "SetScrollingEnabled");

	Params::UCommonTextBlock_SetScrollingEnabled_Params Parms{};

	Parms.bInIsScrollingEnabled = InbInIsScrollingEnabled;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonTextBlock.SetMobileFontSizeMultiplier
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InMobileFontSizeMultiplier                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonTextBlock::SetMobileFontSizeMultiplier(float InInMobileFontSizeMultiplier)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonTextBlock", "SetMobileFontSizeMultiplier");

	Params::UCommonTextBlock_SetMobileFontSizeMultiplier_Params Parms{};

	Parms.InMobileFontSizeMultiplier = InInMobileFontSizeMultiplier;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonTextBlock.SetMargin
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FMargin                     InMargin                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void UCommonTextBlock::SetMargin(struct FMargin& InInMargin)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonTextBlock", "SetMargin");

	Params::UCommonTextBlock_SetMargin_Params Parms{};

	Parms.InMargin = InInMargin;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonTextBlock.SetLineHeightPercentage
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InLineHeightPercentage                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonTextBlock::SetLineHeightPercentage(float InInLineHeightPercentage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonTextBlock", "SetLineHeightPercentage");

	Params::UCommonTextBlock_SetLineHeightPercentage_Params Parms{};

	Parms.InLineHeightPercentage = InInLineHeightPercentage;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonTextBlock.ResetScrollState
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UCommonTextBlock::ResetScrollState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonTextBlock", "ResetScrollState");

	Params::UCommonTextBlock_ResetScrollState_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonTextBlock.GetMobileFontSizeMultiplier
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UCommonTextBlock::GetMobileFontSizeMultiplier()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonTextBlock", "GetMobileFontSizeMultiplier");

	Params::UCommonTextBlock_GetMobileFontSizeMultiplier_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonTextBlock.GetMargin
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMargin                     ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FMargin UCommonTextBlock::GetMargin()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonTextBlock", "GetMargin");

	Params::UCommonTextBlock_GetMargin_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonDateTimeTextBlock.SetTimespanValue
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTimespan                   InTimespan                                                       (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonDateTimeTextBlock::SetTimespanValue(const struct FTimespan& InInTimespan)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonDateTimeTextBlock", "SetTimespanValue");

	Params::UCommonDateTimeTextBlock_SetTimespanValue_Params Parms{};

	Parms.InTimespan = InInTimespan;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonDateTimeTextBlock.SetDateTimeValue
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FDateTime                   InDateTime                                                       (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bShowAsCountdown                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InRefreshDelay                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonDateTimeTextBlock::SetDateTimeValue(const struct FDateTime& InInDateTime, bool InbShowAsCountdown, float InInRefreshDelay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonDateTimeTextBlock", "SetDateTimeValue");

	Params::UCommonDateTimeTextBlock_SetDateTimeValue_Params Parms{};

	Parms.InDateTime = InInDateTime;
	Parms.bShowAsCountdown = InbShowAsCountdown;
	Parms.InRefreshDelay = InInRefreshDelay;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonDateTimeTextBlock.SetCountDownCompletionText
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FText                        InCompletionText                                                 (ConstParm, Parm, NativeAccessSpecifierPublic)

void UCommonDateTimeTextBlock::SetCountDownCompletionText(class FText InInCompletionText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonDateTimeTextBlock", "SetCountDownCompletionText");

	Params::UCommonDateTimeTextBlock_SetCountDownCompletionText_Params Parms{};

	Parms.InCompletionText = InInCompletionText;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonDateTimeTextBlock.GetDateTime
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FDateTime                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FDateTime UCommonDateTimeTextBlock::GetDateTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonDateTimeTextBlock", "GetDateTime");

	Params::UCommonDateTimeTextBlock_GetDateTime_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonLazyImage.SetMaterialTextureParamName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        TextureParamName                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonLazyImage::SetMaterialTextureParamName(class FName InTextureParamName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonLazyImage", "SetMaterialTextureParamName");

	Params::UCommonLazyImage_SetMaterialTextureParamName_Params Parms{};

	Parms.TextureParamName = InTextureParamName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonLazyImage.SetBrushFromLazyTexture
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TSoftObjectPtr<class UTexture2D>   LazyTexture                                                      (ConstParm, Parm, OutParm, ReferenceParm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bMatchSize                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonLazyImage::SetBrushFromLazyTexture(TSoftObjectPtr<class UTexture2D>& InLazyTexture, bool InbMatchSize)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonLazyImage", "SetBrushFromLazyTexture");

	Params::UCommonLazyImage_SetBrushFromLazyTexture_Params Parms{};

	Parms.LazyTexture = InLazyTexture;
	Parms.bMatchSize = InbMatchSize;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonLazyImage.SetBrushFromLazyMaterial
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TSoftObjectPtr<class UMaterialInterface>LazyMaterial                                                     (ConstParm, Parm, OutParm, ReferenceParm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonLazyImage::SetBrushFromLazyMaterial(TSoftObjectPtr<class UMaterialInterface>& InLazyMaterial)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonLazyImage", "SetBrushFromLazyMaterial");

	Params::UCommonLazyImage_SetBrushFromLazyMaterial_Params Parms{};

	Parms.LazyMaterial = InLazyMaterial;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonLazyImage.SetBrushFromLazyDisplayAsset
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TSoftObjectPtr<class UObject>      LazyObject                                                       (ConstParm, Parm, OutParm, ReferenceParm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bMatchTextureSize                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonLazyImage::SetBrushFromLazyDisplayAsset(TSoftObjectPtr<class UObject>& InLazyObject, bool InbMatchTextureSize)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonLazyImage", "SetBrushFromLazyDisplayAsset");

	Params::UCommonLazyImage_SetBrushFromLazyDisplayAsset_Params Parms{};

	Parms.LazyObject = InLazyObject;
	Parms.bMatchTextureSize = InbMatchTextureSize;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonLazyImage.IsLoading
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCommonLazyImage::IsLoading()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonLazyImage", "IsLoading");

	Params::UCommonLazyImage_IsLoading_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonLazyWidget.SetLazyContent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TSoftClassPtr<class UUserWidget>   SoftWidget                                                       (ConstParm, Parm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonLazyWidget::SetLazyContent(TSoftClassPtr<class UUserWidget> InSoftWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonLazyWidget", "SetLazyContent");

	Params::UCommonLazyWidget_SetLazyContent_Params Parms{};

	Parms.SoftWidget = InSoftWidget;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonLazyWidget.IsLoading
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCommonLazyWidget::IsLoading()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonLazyWidget", "IsLoading");

	Params::UCommonLazyWidget_IsLoading_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonLazyWidget.GetContent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UUserWidget*                 ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UUserWidget* UCommonLazyWidget::GetContent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonLazyWidget", "GetContent");

	Params::UCommonLazyWidget_GetContent_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonListView.SetEntrySpacing
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InEntrySpacing                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonListView::SetEntrySpacing(float InInEntrySpacing)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonListView", "SetEntrySpacing");

	Params::UCommonListView_SetEntrySpacing_Params Parms{};

	Parms.InEntrySpacing = InInEntrySpacing;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUI.LoadGuardSlot.SetVerticalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EVerticalAlignment      InVerticalAlignment                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULoadGuardSlot::SetVerticalAlignment(enum class EVerticalAlignment InInVerticalAlignment)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoadGuardSlot", "SetVerticalAlignment");

	Params::ULoadGuardSlot_SetVerticalAlignment_Params Parms{};

	Parms.InVerticalAlignment = InInVerticalAlignment;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUI.LoadGuardSlot.SetPadding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMargin                     InPadding                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void ULoadGuardSlot::SetPadding(const struct FMargin& InInPadding)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoadGuardSlot", "SetPadding");

	Params::ULoadGuardSlot_SetPadding_Params Parms{};

	Parms.InPadding = InInPadding;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUI.LoadGuardSlot.SetHorizontalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EHorizontalAlignment    InHorizontalAlignment                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULoadGuardSlot::SetHorizontalAlignment(enum class EHorizontalAlignment InInHorizontalAlignment)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoadGuardSlot", "SetHorizontalAlignment");

	Params::ULoadGuardSlot_SetHorizontalAlignment_Params Parms{};

	Parms.InHorizontalAlignment = InInHorizontalAlignment;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonLoadGuard.SetLoadingText
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FText                        InLoadingText                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UCommonLoadGuard::SetLoadingText(class FText& InInLoadingText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonLoadGuard", "SetLoadingText");

	Params::UCommonLoadGuard_SetLoadingText_Params Parms{};

	Parms.InLoadingText = InInLoadingText;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonLoadGuard.SetIsLoading
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInIsLoading                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonLoadGuard::SetIsLoading(bool InbInIsLoading)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonLoadGuard", "SetIsLoading");

	Params::UCommonLoadGuard_SetIsLoading_Params Parms{};

	Parms.bInIsLoading = InbInIsLoading;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// DelegateFunction CommonUI.CommonLoadGuard.OnAssetLoaded__DelegateSignature
// (Public, Delegate)
// Parameters:
// class UObject*                     Object                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonLoadGuard::OnAssetLoaded__DelegateSignature(class UObject* InObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonLoadGuard", "OnAssetLoaded__DelegateSignature");

	Params::UCommonLoadGuard_OnAssetLoaded__DelegateSignature_Params Parms{};

	Parms.Object = InObject;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CommonUI.CommonLoadGuard.IsLoading
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCommonLoadGuard::IsLoading()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonLoadGuard", "IsLoading");

	Params::UCommonLoadGuard_IsLoading_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonLoadGuard.BP_GuardAndLoadAsset
// (Final, Native, Private, HasOutParams, BlueprintCallable)
// Parameters:
// TSoftObjectPtr<class UObject>      InLazyAsset                                                      (ConstParm, Parm, OutParm, ReferenceParm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnAssetLoaded                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonLoadGuard::BP_GuardAndLoadAsset(TSoftObjectPtr<class UObject>& InInLazyAsset, FDelegateProperty_& InOnAssetLoaded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonLoadGuard", "BP_GuardAndLoadAsset");

	Params::UCommonLoadGuard_BP_GuardAndLoadAsset_Params Parms{};

	Parms.InLazyAsset = InInLazyAsset;
	Parms.OnAssetLoaded = InOnAssetLoaded;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonNumericTextBlock.SetNumericType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ECommonNumericType      InNumericType                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonNumericTextBlock::SetNumericType(enum class ECommonNumericType InInNumericType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonNumericTextBlock", "SetNumericType");

	Params::UCommonNumericTextBlock_SetNumericType_Params Parms{};

	Parms.InNumericType = InInNumericType;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonNumericTextBlock.SetCurrentValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              NewValue                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonNumericTextBlock::SetCurrentValue(float InNewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonNumericTextBlock", "SetCurrentValue");

	Params::UCommonNumericTextBlock_SetCurrentValue_Params Parms{};

	Parms.NewValue = InNewValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// DelegateFunction CommonUI.CommonNumericTextBlock.OnOutro__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UCommonNumericTextBlock*     NumericTextBlock                                                 (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonNumericTextBlock::OnOutro__DelegateSignature(class UCommonNumericTextBlock* InNumericTextBlock)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonNumericTextBlock", "OnOutro__DelegateSignature");

	Params::UCommonNumericTextBlock_OnOutro__DelegateSignature_Params Parms{};

	Parms.NumericTextBlock = InNumericTextBlock;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction CommonUI.CommonNumericTextBlock.OnInterpolationUpdated__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UCommonNumericTextBlock*     NumericTextBlock                                                 (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              LastValue                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              NewValue                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonNumericTextBlock::OnInterpolationUpdated__DelegateSignature(class UCommonNumericTextBlock* InNumericTextBlock, float InLastValue, float InNewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonNumericTextBlock", "OnInterpolationUpdated__DelegateSignature");

	Params::UCommonNumericTextBlock_OnInterpolationUpdated__DelegateSignature_Params Parms{};

	Parms.NumericTextBlock = InNumericTextBlock;
	Parms.LastValue = InLastValue;
	Parms.NewValue = InNewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction CommonUI.CommonNumericTextBlock.OnInterpolationStarted__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UCommonNumericTextBlock*     NumericTextBlock                                                 (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonNumericTextBlock::OnInterpolationStarted__DelegateSignature(class UCommonNumericTextBlock* InNumericTextBlock)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonNumericTextBlock", "OnInterpolationStarted__DelegateSignature");

	Params::UCommonNumericTextBlock_OnInterpolationStarted__DelegateSignature_Params Parms{};

	Parms.NumericTextBlock = InNumericTextBlock;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction CommonUI.CommonNumericTextBlock.OnInterpolationEnded__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UCommonNumericTextBlock*     NumericTextBlock                                                 (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               HadCompleted                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonNumericTextBlock::OnInterpolationEnded__DelegateSignature(class UCommonNumericTextBlock* InNumericTextBlock, bool InHadCompleted)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonNumericTextBlock", "OnInterpolationEnded__DelegateSignature");

	Params::UCommonNumericTextBlock_OnInterpolationEnded__DelegateSignature_Params Parms{};

	Parms.NumericTextBlock = InNumericTextBlock;
	Parms.HadCompleted = InHadCompleted;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CommonUI.CommonNumericTextBlock.IsInterpolatingNumericValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCommonNumericTextBlock::IsInterpolatingNumericValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonNumericTextBlock", "IsInterpolatingNumericValue");

	Params::UCommonNumericTextBlock_IsInterpolatingNumericValue_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonNumericTextBlock.InterpolateToValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              TargetValue                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              MaximumInterpolationDuration                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              MinimumChangeRate                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              OutroOffset                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonNumericTextBlock::InterpolateToValue(float InTargetValue, float InMaximumInterpolationDuration, float InMinimumChangeRate, float InOutroOffset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonNumericTextBlock", "InterpolateToValue");

	Params::UCommonNumericTextBlock_InterpolateToValue_Params Parms{};

	Parms.TargetValue = InTargetValue;
	Parms.MaximumInterpolationDuration = InMaximumInterpolationDuration;
	Parms.MinimumChangeRate = InMinimumChangeRate;
	Parms.OutroOffset = InOutroOffset;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonNumericTextBlock.GetTargetValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UCommonNumericTextBlock::GetTargetValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonNumericTextBlock", "GetTargetValue");

	Params::UCommonNumericTextBlock_GetTargetValue_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonPoolableWidgetInterface.OnReleaseToPool
// (Native, Event, Protected, BlueprintEvent)
// Parameters:

void ICommonPoolableWidgetInterface::OnReleaseToPool()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonPoolableWidgetInterface", "OnReleaseToPool");

	Params::ICommonPoolableWidgetInterface_OnReleaseToPool_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonPoolableWidgetInterface.OnAcquireFromPool
// (Native, Event, Protected, BlueprintEvent)
// Parameters:

void ICommonPoolableWidgetInterface::OnAcquireFromPool()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonPoolableWidgetInterface", "OnAcquireFromPool");

	Params::ICommonPoolableWidgetInterface_OnAcquireFromPool_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonRichTextBlock.SetScrollingEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInIsScrollingEnabled                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonRichTextBlock::SetScrollingEnabled(bool InbInIsScrollingEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonRichTextBlock", "SetScrollingEnabled");

	Params::UCommonRichTextBlock_SetScrollingEnabled_Params Parms{};

	Parms.bInIsScrollingEnabled = InbInIsScrollingEnabled;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonRotator.ShiftTextRight
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UCommonRotator::ShiftTextRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonRotator", "ShiftTextRight");

	Params::UCommonRotator_ShiftTextRight_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonRotator.ShiftTextLeft
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UCommonRotator::ShiftTextLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonRotator", "ShiftTextLeft");

	Params::UCommonRotator_ShiftTextLeft_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonRotator.SetSelectedItem
// (Native, Public, BlueprintCallable)
// Parameters:
// int32                              InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonRotator::SetSelectedItem(int32 InInValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonRotator", "SetSelectedItem");

	Params::UCommonRotator_SetSelectedItem_Params Parms{};

	Parms.InValue = InInValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonRotator.PopulateTextLabels
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<class FText>                Labels                                                           (Parm, ZeroConstructor, NativeAccessSpecifierPublic)

void UCommonRotator::PopulateTextLabels(const TArray<class FText>& InLabels)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonRotator", "PopulateTextLabels");

	Params::UCommonRotator_PopulateTextLabels_Params Parms{};

	Parms.Labels = InLabels;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonRotator.GetSelectedText
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText UCommonRotator::GetSelectedText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonRotator", "GetSelectedText");

	Params::UCommonRotator_GetSelectedText_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonRotator.GetSelectedIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UCommonRotator::GetSelectedIndex()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonRotator", "GetSelectedIndex");

	Params::UCommonRotator_GetSelectedIndex_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonRotator.BP_OnOptionsPopulated
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              Count                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonRotator::BP_OnOptionsPopulated(int32 InCount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonRotator", "BP_OnOptionsPopulated");

	Params::UCommonRotator_BP_OnOptionsPopulated_Params Parms{};

	Parms.Count = InCount;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CommonUI.CommonRotator.BP_OnOptionSelected
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonRotator::BP_OnOptionSelected(int32 InIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonRotator", "BP_OnOptionSelected");

	Params::UCommonRotator_BP_OnOptionSelected_Params Parms{};

	Parms.Index = InIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CommonUI.CommonTabListWidgetBase.SetTabVisibility
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        TabNameID                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ESlateVisibility        NewVisibility                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonTabListWidgetBase::SetTabVisibility(class FName InTabNameID, enum class ESlateVisibility InNewVisibility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonTabListWidgetBase", "SetTabVisibility");

	Params::UCommonTabListWidgetBase_SetTabVisibility_Params Parms{};

	Parms.TabNameID = InTabNameID;
	Parms.NewVisibility = InNewVisibility;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonTabListWidgetBase.SetTabInteractionEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        TabNameID                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bEnable                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonTabListWidgetBase::SetTabInteractionEnabled(class FName InTabNameID, bool InbEnable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonTabListWidgetBase", "SetTabInteractionEnabled");

	Params::UCommonTabListWidgetBase_SetTabInteractionEnabled_Params Parms{};

	Parms.TabNameID = InTabNameID;
	Parms.bEnable = InbEnable;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonTabListWidgetBase.SetTabEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        TabNameID                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bEnable                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonTabListWidgetBase::SetTabEnabled(class FName InTabNameID, bool InbEnable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonTabListWidgetBase", "SetTabEnabled");

	Params::UCommonTabListWidgetBase_SetTabEnabled_Params Parms{};

	Parms.TabNameID = InTabNameID;
	Parms.bEnable = InbEnable;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonTabListWidgetBase.SetListeningForInput
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                               bShouldListen                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonTabListWidgetBase::SetListeningForInput(bool InbShouldListen)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonTabListWidgetBase", "SetListeningForInput");

	Params::UCommonTabListWidgetBase_SetListeningForInput_Params Parms{};

	Parms.bShouldListen = InbShouldListen;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonTabListWidgetBase.SetLinkedSwitcher
// (Native, Public, BlueprintCallable)
// Parameters:
// class UCommonAnimatedSwitcher*     CommonSwitcher                                                   (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonTabListWidgetBase::SetLinkedSwitcher(class UCommonAnimatedSwitcher* InCommonSwitcher)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonTabListWidgetBase", "SetLinkedSwitcher");

	Params::UCommonTabListWidgetBase_SetLinkedSwitcher_Params Parms{};

	Parms.CommonSwitcher = InCommonSwitcher;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonTabListWidgetBase.SelectTabByID
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        TabNameID                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bSuppressClickFeedback                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCommonTabListWidgetBase::SelectTabByID(class FName InTabNameID, bool InbSuppressClickFeedback)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonTabListWidgetBase", "SelectTabByID");

	Params::UCommonTabListWidgetBase_SelectTabByID_Params Parms{};

	Parms.TabNameID = InTabNameID;
	Parms.bSuppressClickFeedback = InbSuppressClickFeedback;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonTabListWidgetBase.RemoveTab
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        TabNameID                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCommonTabListWidgetBase::RemoveTab(class FName InTabNameID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonTabListWidgetBase", "RemoveTab");

	Params::UCommonTabListWidgetBase_RemoveTab_Params Parms{};

	Parms.TabNameID = InTabNameID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonTabListWidgetBase.RemoveAllTabs
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UCommonTabListWidgetBase::RemoveAllTabs()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonTabListWidgetBase", "RemoveAllTabs");

	Params::UCommonTabListWidgetBase_RemoveAllTabs_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonTabListWidgetBase.RegisterTab
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        TabNameID                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class UCommonButtonBase>ButtonWidgetType                                                 (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWidget*                     ContentWidget                                                    (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              TabIndex                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCommonTabListWidgetBase::RegisterTab(class FName InTabNameID, TSubclassOf<class UCommonButtonBase> InButtonWidgetType, class UWidget* InContentWidget, int32 InTabIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonTabListWidgetBase", "RegisterTab");

	Params::UCommonTabListWidgetBase_RegisterTab_Params Parms{};

	Parms.TabNameID = InTabNameID;
	Parms.ButtonWidgetType = InButtonWidgetType;
	Parms.ContentWidget = InContentWidget;
	Parms.TabIndex = InTabIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// DelegateFunction CommonUI.CommonTabListWidgetBase.OnTabSelected__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class FName                        TabId                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonTabListWidgetBase::OnTabSelected__DelegateSignature(class FName InTabId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonTabListWidgetBase", "OnTabSelected__DelegateSignature");

	Params::UCommonTabListWidgetBase_OnTabSelected__DelegateSignature_Params Parms{};

	Parms.TabId = InTabId;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction CommonUI.CommonTabListWidgetBase.OnTabListRebuilt__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:

void UCommonTabListWidgetBase::OnTabListRebuilt__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonTabListWidgetBase", "OnTabListRebuilt__DelegateSignature");

	Params::UCommonTabListWidgetBase_OnTabListRebuilt__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction CommonUI.CommonTabListWidgetBase.OnTabButtonRemoval__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class FName                        TabId                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCommonButtonBase*           TabButton                                                        (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonTabListWidgetBase::OnTabButtonRemoval__DelegateSignature(class FName InTabId, class UCommonButtonBase* InTabButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonTabListWidgetBase", "OnTabButtonRemoval__DelegateSignature");

	Params::UCommonTabListWidgetBase_OnTabButtonRemoval__DelegateSignature_Params Parms{};

	Parms.TabId = InTabId;
	Parms.TabButton = InTabButton;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction CommonUI.CommonTabListWidgetBase.OnTabButtonCreation__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class FName                        TabId                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCommonButtonBase*           TabButton                                                        (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonTabListWidgetBase::OnTabButtonCreation__DelegateSignature(class FName InTabId, class UCommonButtonBase* InTabButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonTabListWidgetBase", "OnTabButtonCreation__DelegateSignature");

	Params::UCommonTabListWidgetBase_OnTabButtonCreation__DelegateSignature_Params Parms{};

	Parms.TabId = InTabId;
	Parms.TabButton = InTabButton;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CommonUI.CommonTabListWidgetBase.HandleTabRemoval
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// class FName                        TabNameID                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCommonButtonBase*           TabButton                                                        (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonTabListWidgetBase::HandleTabRemoval(class FName InTabNameID, class UCommonButtonBase* InTabButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonTabListWidgetBase", "HandleTabRemoval");

	Params::UCommonTabListWidgetBase_HandleTabRemoval_Params Parms{};

	Parms.TabNameID = InTabNameID;
	Parms.TabButton = InTabButton;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonTabListWidgetBase.HandleTabCreation
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// class FName                        TabNameID                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCommonButtonBase*           TabButton                                                        (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonTabListWidgetBase::HandleTabCreation(class FName InTabNameID, class UCommonButtonBase* InTabButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonTabListWidgetBase", "HandleTabCreation");

	Params::UCommonTabListWidgetBase_HandleTabCreation_Params Parms{};

	Parms.TabNameID = InTabNameID;
	Parms.TabButton = InTabButton;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonTabListWidgetBase.HandleTabButtonSelected
// (Final, Native, Protected)
// Parameters:
// class UCommonButtonBase*           SelectedTabButton                                                (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ButtonIndex                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonTabListWidgetBase::HandleTabButtonSelected(class UCommonButtonBase* InSelectedTabButton, int32 InButtonIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonTabListWidgetBase", "HandleTabButtonSelected");

	Params::UCommonTabListWidgetBase_HandleTabButtonSelected_Params Parms{};

	Parms.SelectedTabButton = InSelectedTabButton;
	Parms.ButtonIndex = InButtonIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonTabListWidgetBase.HandlePreviousTabInputAction
// (Final, Native, Protected, HasOutParams)
// Parameters:
// bool                               bPassThrough                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonTabListWidgetBase::HandlePreviousTabInputAction(bool* InbPassThrough)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonTabListWidgetBase", "HandlePreviousTabInputAction");

	Params::UCommonTabListWidgetBase_HandlePreviousTabInputAction_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (InbPassThrough != nullptr)
		*InbPassThrough = Parms.bPassThrough;

}


// Function CommonUI.CommonTabListWidgetBase.HandlePreLinkedSwitcherChanged_BP
// (Event, Protected, BlueprintEvent)
// Parameters:

void UCommonTabListWidgetBase::HandlePreLinkedSwitcherChanged_BP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonTabListWidgetBase", "HandlePreLinkedSwitcherChanged_BP");

	Params::UCommonTabListWidgetBase_HandlePreLinkedSwitcherChanged_BP_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function CommonUI.CommonTabListWidgetBase.HandlePostLinkedSwitcherChanged_BP
// (Event, Protected, BlueprintEvent)
// Parameters:

void UCommonTabListWidgetBase::HandlePostLinkedSwitcherChanged_BP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonTabListWidgetBase", "HandlePostLinkedSwitcherChanged_BP");

	Params::UCommonTabListWidgetBase_HandlePostLinkedSwitcherChanged_BP_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function CommonUI.CommonTabListWidgetBase.HandleNextTabInputAction
// (Final, Native, Protected, HasOutParams)
// Parameters:
// bool                               bPassThrough                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonTabListWidgetBase::HandleNextTabInputAction(bool* InbPassThrough)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonTabListWidgetBase", "HandleNextTabInputAction");

	Params::UCommonTabListWidgetBase_HandleNextTabInputAction_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (InbPassThrough != nullptr)
		*InbPassThrough = Parms.bPassThrough;

}


// Function CommonUI.CommonTabListWidgetBase.GetTabIdAtIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FName UCommonTabListWidgetBase::GetTabIdAtIndex(int32 InIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonTabListWidgetBase", "GetTabIdAtIndex");

	Params::UCommonTabListWidgetBase_GetTabIdAtIndex_Params Parms{};

	Parms.Index = InIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonTabListWidgetBase.GetTabCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UCommonTabListWidgetBase::GetTabCount()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonTabListWidgetBase", "GetTabCount");

	Params::UCommonTabListWidgetBase_GetTabCount_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonTabListWidgetBase.GetTabButtonBaseByID
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        TabNameID                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCommonButtonBase*           ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UCommonButtonBase* UCommonTabListWidgetBase::GetTabButtonBaseByID(class FName InTabNameID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonTabListWidgetBase", "GetTabButtonBaseByID");

	Params::UCommonTabListWidgetBase_GetTabButtonBaseByID_Params Parms{};

	Parms.TabNameID = InTabNameID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonTabListWidgetBase.GetSelectedTabId
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FName UCommonTabListWidgetBase::GetSelectedTabId()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonTabListWidgetBase", "GetSelectedTabId");

	Params::UCommonTabListWidgetBase_GetSelectedTabId_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonTabListWidgetBase.GetLinkedSwitcher
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UCommonAnimatedSwitcher*     ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UCommonAnimatedSwitcher* UCommonTabListWidgetBase::GetLinkedSwitcher()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonTabListWidgetBase", "GetLinkedSwitcher");

	Params::UCommonTabListWidgetBase_GetLinkedSwitcher_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonTabListWidgetBase.GetActiveTab
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FName UCommonTabListWidgetBase::GetActiveTab()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonTabListWidgetBase", "GetActiveTab");

	Params::UCommonTabListWidgetBase_GetActiveTab_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonTabListWidgetBase.DisableTabWithReason
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        TabNameID                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FText                        Reason                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UCommonTabListWidgetBase::DisableTabWithReason(class FName InTabNameID, class FText& InReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonTabListWidgetBase", "DisableTabWithReason");

	Params::UCommonTabListWidgetBase_DisableTabWithReason_Params Parms{};

	Parms.TabNameID = InTabNameID;
	Parms.Reason = InReason;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonTextStyle.GetStrikeBrush
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FSlateBrush                 OutStrikeBrush                                                   (Parm, OutParm, NativeAccessSpecifierPublic)

void UCommonTextStyle::GetStrikeBrush(struct FSlateBrush* InOutStrikeBrush)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonTextStyle", "GetStrikeBrush");

	Params::UCommonTextStyle_GetStrikeBrush_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (InOutStrikeBrush != nullptr)
		*InOutStrikeBrush = Parms.OutStrikeBrush;

}


// Function CommonUI.CommonTextStyle.GetShadowOffset
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector2D                   OutShadowOffset                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonTextStyle::GetShadowOffset(struct FVector2D* InOutShadowOffset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonTextStyle", "GetShadowOffset");

	Params::UCommonTextStyle_GetShadowOffset_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (InOutShadowOffset != nullptr)
		*InOutShadowOffset = Parms.OutShadowOffset;

}


// Function CommonUI.CommonTextStyle.GetShadowColor
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FLinearColor                OutColor                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonTextStyle::GetShadowColor(struct FLinearColor* InOutColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonTextStyle", "GetShadowColor");

	Params::UCommonTextStyle_GetShadowColor_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (InOutColor != nullptr)
		*InOutColor = Parms.OutColor;

}


// Function CommonUI.CommonTextStyle.GetMargin
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMargin                     OutMargin                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void UCommonTextStyle::GetMargin(struct FMargin* InOutMargin)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonTextStyle", "GetMargin");

	Params::UCommonTextStyle_GetMargin_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (InOutMargin != nullptr)
		*InOutMargin = Parms.OutMargin;

}


// Function CommonUI.CommonTextStyle.GetLineHeightPercentage
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UCommonTextStyle::GetLineHeightPercentage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonTextStyle", "GetLineHeightPercentage");

	Params::UCommonTextStyle_GetLineHeightPercentage_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonTextStyle.GetFont
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FSlateFontInfo              OutFont                                                          (Parm, OutParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonTextStyle::GetFont(struct FSlateFontInfo* InOutFont)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonTextStyle", "GetFont");

	Params::UCommonTextStyle_GetFont_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (InOutFont != nullptr)
		*InOutFont = Parms.OutFont;

}


// Function CommonUI.CommonTextStyle.GetColor
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FLinearColor                OutColor                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonTextStyle::GetColor(struct FLinearColor* InOutColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonTextStyle", "GetColor");

	Params::UCommonTextStyle_GetColor_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (InOutColor != nullptr)
		*InOutColor = Parms.OutColor;

}


// Function CommonUI.CommonUILibrary.FindParentWidgetOfType
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UWidget*                     StartingWidget                                                   (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class UWidget>         Type                                                             (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWidget*                     ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UWidget* UCommonUILibrary::FindParentWidgetOfType(class UWidget* InStartingWidget, TSubclassOf<class UWidget> InType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonUILibrary", "FindParentWidgetOfType");

	Params::UCommonUILibrary_FindParentWidgetOfType_Params Parms{};

	Parms.StartingWidget = InStartingWidget;
	Parms.Type = InType;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonUISubsystemBase.GetInputActionButtonIcon
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FDataTableRowHandle         InputActionRowHandle                                             (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// enum class ECommonInputType        InputType                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        GamepadName                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSlateBrush                 ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FSlateBrush UCommonUISubsystemBase::GetInputActionButtonIcon(struct FDataTableRowHandle& InInputActionRowHandle, enum class ECommonInputType InInputType, class FName& InGamepadName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonUISubsystemBase", "GetInputActionButtonIcon");

	Params::UCommonUISubsystemBase_GetInputActionButtonIcon_Params Parms{};

	Parms.InputActionRowHandle = InInputActionRowHandle;
	Parms.InputType = InInputType;
	Parms.GamepadName = InGamepadName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonUISubsystemBase.GetEnhancedInputActionButtonIcon
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UInputAction*                InputAction                                                      (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ULocalPlayer*                LocalPlayer                                                      (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSlateBrush                 ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FSlateBrush UCommonUISubsystemBase::GetEnhancedInputActionButtonIcon(class UInputAction* InInputAction, class ULocalPlayer* InLocalPlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonUISubsystemBase", "GetEnhancedInputActionButtonIcon");

	Params::UCommonUISubsystemBase_GetEnhancedInputActionButtonIcon_Params Parms{};

	Parms.InputAction = InInputAction;
	Parms.LocalPlayer = InLocalPlayer;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonVisibilitySwitcher.SetActiveWidgetIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonVisibilitySwitcher::SetActiveWidgetIndex(int32 InIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonVisibilitySwitcher", "SetActiveWidgetIndex");

	Params::UCommonVisibilitySwitcher_SetActiveWidgetIndex_Params Parms{};

	Parms.Index = InIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonVisibilitySwitcher.SetActiveWidget
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                     Widget                                                           (ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonVisibilitySwitcher::SetActiveWidget(class UWidget* InWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonVisibilitySwitcher", "SetActiveWidget");

	Params::UCommonVisibilitySwitcher_SetActiveWidget_Params Parms{};

	Parms.Widget = InWidget;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonVisibilitySwitcher.IncrementActiveWidgetIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bAllowWrapping                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonVisibilitySwitcher::IncrementActiveWidgetIndex(bool InbAllowWrapping)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonVisibilitySwitcher", "IncrementActiveWidgetIndex");

	Params::UCommonVisibilitySwitcher_IncrementActiveWidgetIndex_Params Parms{};

	Parms.bAllowWrapping = InbAllowWrapping;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonVisibilitySwitcher.GetActiveWidgetIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UCommonVisibilitySwitcher::GetActiveWidgetIndex()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonVisibilitySwitcher", "GetActiveWidgetIndex");

	Params::UCommonVisibilitySwitcher_GetActiveWidgetIndex_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonVisibilitySwitcher.GetActiveWidget
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UWidget*                     ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UWidget* UCommonVisibilitySwitcher::GetActiveWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonVisibilitySwitcher", "GetActiveWidget");

	Params::UCommonVisibilitySwitcher_GetActiveWidget_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonVisibilitySwitcher.DecrementActiveWidgetIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bAllowWrapping                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonVisibilitySwitcher::DecrementActiveWidgetIndex(bool InbAllowWrapping)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonVisibilitySwitcher", "DecrementActiveWidgetIndex");

	Params::UCommonVisibilitySwitcher_DecrementActiveWidgetIndex_Params Parms{};

	Parms.bAllowWrapping = InbAllowWrapping;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonVisibilitySwitcher.DeactivateVisibleSlot
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UCommonVisibilitySwitcher::DeactivateVisibleSlot()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonVisibilitySwitcher", "DeactivateVisibleSlot");

	Params::UCommonVisibilitySwitcher_DeactivateVisibleSlot_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonVisibilitySwitcher.ActivateVisibleSlot
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UCommonVisibilitySwitcher::ActivateVisibleSlot()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonVisibilitySwitcher", "ActivateVisibleSlot");

	Params::UCommonVisibilitySwitcher_ActivateVisibleSlot_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUI.UCommonVisibilityWidgetBase.GetRegisteredPlatforms
// (Final, Native, Static, Protected)
// Parameters:
// TArray<class FName>                ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

TArray<class FName> UUCommonVisibilityWidgetBase::GetRegisteredPlatforms()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UCommonVisibilityWidgetBase", "GetRegisteredPlatforms");

	Params::UUCommonVisibilityWidgetBase_GetRegisteredPlatforms_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonWidgetCarousel.SetActiveWidgetIndex
// (Native, Public, BlueprintCallable)
// Parameters:
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonWidgetCarousel::SetActiveWidgetIndex(int32 InIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonWidgetCarousel", "SetActiveWidgetIndex");

	Params::UCommonWidgetCarousel_SetActiveWidgetIndex_Params Parms{};

	Parms.Index = InIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonWidgetCarousel.SetActiveWidget
// (Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                     Widget                                                           (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonWidgetCarousel::SetActiveWidget(class UWidget* InWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonWidgetCarousel", "SetActiveWidget");

	Params::UCommonWidgetCarousel_SetActiveWidget_Params Parms{};

	Parms.Widget = InWidget;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonWidgetCarousel.PreviousPage
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UCommonWidgetCarousel::PreviousPage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonWidgetCarousel", "PreviousPage");

	Params::UCommonWidgetCarousel_PreviousPage_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonWidgetCarousel.NextPage
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UCommonWidgetCarousel::NextPage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonWidgetCarousel", "NextPage");

	Params::UCommonWidgetCarousel_NextPage_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonWidgetCarousel.GetWidgetAtIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWidget*                     ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UWidget* UCommonWidgetCarousel::GetWidgetAtIndex(int32 InIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonWidgetCarousel", "GetWidgetAtIndex");

	Params::UCommonWidgetCarousel_GetWidgetAtIndex_Params Parms{};

	Parms.Index = InIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonWidgetCarousel.GetActiveWidgetIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UCommonWidgetCarousel::GetActiveWidgetIndex()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonWidgetCarousel", "GetActiveWidgetIndex");

	Params::UCommonWidgetCarousel_GetActiveWidgetIndex_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonWidgetCarousel.EndAutoScrolling
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UCommonWidgetCarousel::EndAutoScrolling()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonWidgetCarousel", "EndAutoScrolling");

	Params::UCommonWidgetCarousel_EndAutoScrolling_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonWidgetCarousel.BeginAutoScrolling
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              ScrollInterval                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonWidgetCarousel::BeginAutoScrolling(float InScrollInterval)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonWidgetCarousel", "BeginAutoScrolling");

	Params::UCommonWidgetCarousel_BeginAutoScrolling_Params Parms{};

	Parms.ScrollInterval = InScrollInterval;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonWidgetCarouselNavBar.SetLinkedCarousel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UCommonWidgetCarousel*       CommonCarousel                                                   (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonWidgetCarouselNavBar::SetLinkedCarousel(class UCommonWidgetCarousel* InCommonCarousel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonWidgetCarouselNavBar", "SetLinkedCarousel");

	Params::UCommonWidgetCarouselNavBar_SetLinkedCarousel_Params Parms{};

	Parms.CommonCarousel = InCommonCarousel;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonWidgetCarouselNavBar.HandlePageChanged
// (Final, Native, Protected)
// Parameters:
// class UCommonWidgetCarousel*       CommonCarousel                                                   (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              PageIndex                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonWidgetCarouselNavBar::HandlePageChanged(class UCommonWidgetCarousel* InCommonCarousel, int32 InPageIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonWidgetCarouselNavBar", "HandlePageChanged");

	Params::UCommonWidgetCarouselNavBar_HandlePageChanged_Params Parms{};

	Parms.CommonCarousel = InCommonCarousel;
	Parms.PageIndex = InPageIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonWidgetCarouselNavBar.HandleButtonClicked
// (Final, Native, Protected)
// Parameters:
// class UCommonButtonBase*           AssociatedButton                                                 (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ButtonIndex                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonWidgetCarouselNavBar::HandleButtonClicked(class UCommonButtonBase* InAssociatedButton, int32 InButtonIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonWidgetCarouselNavBar", "HandleButtonClicked");

	Params::UCommonWidgetCarouselNavBar_HandleButtonClicked_Params Parms{};

	Parms.AssociatedButton = InAssociatedButton;
	Parms.ButtonIndex = InButtonIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonWidgetGroupBase.RemoveWidget
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                     InWidget                                                         (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonWidgetGroupBase::RemoveWidget(class UWidget* InInWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonWidgetGroupBase", "RemoveWidget");

	Params::UCommonWidgetGroupBase_RemoveWidget_Params Parms{};

	Parms.InWidget = InInWidget;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonWidgetGroupBase.RemoveAll
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UCommonWidgetGroupBase::RemoveAll()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonWidgetGroupBase", "RemoveAll");

	Params::UCommonWidgetGroupBase_RemoveAll_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonWidgetGroupBase.AddWidget
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                     InWidget                                                         (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonWidgetGroupBase::AddWidget(class UWidget* InInWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonWidgetGroupBase", "AddWidget");

	Params::UCommonWidgetGroupBase_AddWidget_Params Parms{};

	Parms.InWidget = InInWidget;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonButtonGroupBase.SetSelectionRequired
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bRequireSelection                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonButtonGroupBase::SetSelectionRequired(bool InbRequireSelection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonGroupBase", "SetSelectionRequired");

	Params::UCommonButtonGroupBase_SetSelectionRequired_Params Parms{};

	Parms.bRequireSelection = InbRequireSelection;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonButtonGroupBase.SelectPreviousButton
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bAllowWrap                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonButtonGroupBase::SelectPreviousButton(bool InbAllowWrap)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonGroupBase", "SelectPreviousButton");

	Params::UCommonButtonGroupBase_SelectPreviousButton_Params Parms{};

	Parms.bAllowWrap = InbAllowWrap;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonButtonGroupBase.SelectNextButton
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bAllowWrap                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonButtonGroupBase::SelectNextButton(bool InbAllowWrap)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonGroupBase", "SelectNextButton");

	Params::UCommonButtonGroupBase_SelectNextButton_Params Parms{};

	Parms.bAllowWrap = InbAllowWrap;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonButtonGroupBase.SelectButtonAtIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              ButtonIndex                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAllowSound                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonButtonGroupBase::SelectButtonAtIndex(int32 InButtonIndex, bool InbAllowSound)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonGroupBase", "SelectButtonAtIndex");

	Params::UCommonButtonGroupBase_SelectButtonAtIndex_Params Parms{};

	Parms.ButtonIndex = InButtonIndex;
	Parms.bAllowSound = InbAllowSound;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonButtonGroupBase.OnSelectionStateChangedBase
// (Native, Protected)
// Parameters:
// class UCommonButtonBase*           BaseButton                                                       (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsSelected                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonButtonGroupBase::OnSelectionStateChangedBase(class UCommonButtonBase* InBaseButton, bool InbIsSelected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonGroupBase", "OnSelectionStateChangedBase");

	Params::UCommonButtonGroupBase_OnSelectionStateChangedBase_Params Parms{};

	Parms.BaseButton = InBaseButton;
	Parms.bIsSelected = InbIsSelected;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonButtonGroupBase.OnHandleButtonBaseDoubleClicked
// (Native, Protected)
// Parameters:
// class UCommonButtonBase*           BaseButton                                                       (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonButtonGroupBase::OnHandleButtonBaseDoubleClicked(class UCommonButtonBase* InBaseButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonGroupBase", "OnHandleButtonBaseDoubleClicked");

	Params::UCommonButtonGroupBase_OnHandleButtonBaseDoubleClicked_Params Parms{};

	Parms.BaseButton = InBaseButton;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonButtonGroupBase.OnHandleButtonBaseClicked
// (Native, Protected)
// Parameters:
// class UCommonButtonBase*           BaseButton                                                       (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonButtonGroupBase::OnHandleButtonBaseClicked(class UCommonButtonBase* InBaseButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonGroupBase", "OnHandleButtonBaseClicked");

	Params::UCommonButtonGroupBase_OnHandleButtonBaseClicked_Params Parms{};

	Parms.BaseButton = InBaseButton;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonButtonGroupBase.OnButtonBaseUnhovered
// (Native, Protected)
// Parameters:
// class UCommonButtonBase*           BaseButton                                                       (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonButtonGroupBase::OnButtonBaseUnhovered(class UCommonButtonBase* InBaseButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonGroupBase", "OnButtonBaseUnhovered");

	Params::UCommonButtonGroupBase_OnButtonBaseUnhovered_Params Parms{};

	Parms.BaseButton = InBaseButton;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonButtonGroupBase.OnButtonBaseHovered
// (Native, Protected)
// Parameters:
// class UCommonButtonBase*           BaseButton                                                       (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonButtonGroupBase::OnButtonBaseHovered(class UCommonButtonBase* InBaseButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonGroupBase", "OnButtonBaseHovered");

	Params::UCommonButtonGroupBase_OnButtonBaseHovered_Params Parms{};

	Parms.BaseButton = InBaseButton;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonButtonGroupBase.HasAnyButtons
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCommonButtonGroupBase::HasAnyButtons()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonGroupBase", "HasAnyButtons");

	Params::UCommonButtonGroupBase_HasAnyButtons_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonButtonGroupBase.GetSelectedButtonIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UCommonButtonGroupBase::GetSelectedButtonIndex()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonGroupBase", "GetSelectedButtonIndex");

	Params::UCommonButtonGroupBase_GetSelectedButtonIndex_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonButtonGroupBase.GetSelectedButtonBase
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UCommonButtonBase*           ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UCommonButtonBase* UCommonButtonGroupBase::GetSelectedButtonBase()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonGroupBase", "GetSelectedButtonBase");

	Params::UCommonButtonGroupBase_GetSelectedButtonBase_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonButtonGroupBase.GetHoveredButtonIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UCommonButtonGroupBase::GetHoveredButtonIndex()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonGroupBase", "GetHoveredButtonIndex");

	Params::UCommonButtonGroupBase_GetHoveredButtonIndex_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonButtonGroupBase.GetButtonCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UCommonButtonGroupBase::GetButtonCount()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonGroupBase", "GetButtonCount");

	Params::UCommonButtonGroupBase_GetButtonCount_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonButtonGroupBase.GetButtonBaseAtIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCommonButtonBase*           ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UCommonButtonBase* UCommonButtonGroupBase::GetButtonBaseAtIndex(int32 InIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonGroupBase", "GetButtonBaseAtIndex");

	Params::UCommonButtonGroupBase_GetButtonBaseAtIndex_Params Parms{};

	Parms.Index = InIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonButtonGroupBase.FindButtonIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UCommonButtonBase*           ButtonToFind                                                     (ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UCommonButtonGroupBase::FindButtonIndex(class UCommonButtonBase* InButtonToFind)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonGroupBase", "FindButtonIndex");

	Params::UCommonButtonGroupBase_FindButtonIndex_Params Parms{};

	Parms.ButtonToFind = InButtonToFind;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonButtonGroupBase.DeselectAll
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UCommonButtonGroupBase::DeselectAll()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonButtonGroupBase", "DeselectAll");

	Params::UCommonButtonGroupBase_DeselectAll_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonBoundActionBar.SetDisplayOwningPlayerActionsOnly
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bShouldOnlyDisplayOwningPlayerActions                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonBoundActionBar::SetDisplayOwningPlayerActionsOnly(bool InbShouldOnlyDisplayOwningPlayerActions)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonBoundActionBar", "SetDisplayOwningPlayerActionsOnly");

	Params::UCommonBoundActionBar_SetDisplayOwningPlayerActionsOnly_Params Parms{};

	Parms.bShouldOnlyDisplayOwningPlayerActions = InbShouldOnlyDisplayOwningPlayerActions;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonBoundActionButton.OnUpdateInputAction
// (Event, Protected, BlueprintEvent)
// Parameters:

void UCommonBoundActionButton::OnUpdateInputAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonBoundActionButton", "OnUpdateInputAction");

	Params::UCommonBoundActionButton_OnUpdateInputAction_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function CommonUI.CommonActivatableWidgetContainerBase.SetTransitionDuration
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Duration                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonActivatableWidgetContainerBase::SetTransitionDuration(float InDuration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonActivatableWidgetContainerBase", "SetTransitionDuration");

	Params::UCommonActivatableWidgetContainerBase_SetTransitionDuration_Params Parms{};

	Parms.Duration = InDuration;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonActivatableWidgetContainerBase.RemoveWidget
// (Final, Native, Private, BlueprintCallable)
// Parameters:
// class UCommonActivatableWidget*    WidgetToRemove                                                   (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCommonActivatableWidgetContainerBase::RemoveWidget(class UCommonActivatableWidget* InWidgetToRemove)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonActivatableWidgetContainerBase", "RemoveWidget");

	Params::UCommonActivatableWidgetContainerBase_RemoveWidget_Params Parms{};

	Parms.WidgetToRemove = InWidgetToRemove;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonActivatableWidgetContainerBase.GetTransitionDuration
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UCommonActivatableWidgetContainerBase::GetTransitionDuration()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonActivatableWidgetContainerBase", "GetTransitionDuration");

	Params::UCommonActivatableWidgetContainerBase_GetTransitionDuration_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonActivatableWidgetContainerBase.GetActiveWidget
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UCommonActivatableWidget*    ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UCommonActivatableWidget* UCommonActivatableWidgetContainerBase::GetActiveWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonActivatableWidgetContainerBase", "GetActiveWidget");

	Params::UCommonActivatableWidgetContainerBase_GetActiveWidget_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CommonUI.CommonActivatableWidgetContainerBase.ClearWidgets
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UCommonActivatableWidgetContainerBase::ClearWidgets()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonActivatableWidgetContainerBase", "ClearWidgets");

	Params::UCommonActivatableWidgetContainerBase_ClearWidgets_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CommonUI.CommonActivatableWidgetContainerBase.BP_AddWidget
// (Final, Native, Private, BlueprintCallable)
// Parameters:
// TSubclassOf<class UCommonActivatableWidget>ActivatableWidgetClass                                           (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCommonActivatableWidget*    ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UCommonActivatableWidget* UCommonActivatableWidgetContainerBase::BP_AddWidget(TSubclassOf<class UCommonActivatableWidget> InActivatableWidgetClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommonActivatableWidgetContainerBase", "BP_AddWidget");

	Params::UCommonActivatableWidgetContainerBase_BP_AddWidget_Params Parms{};

	Parms.ActivatableWidgetClass = InActivatableWidgetClass;

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
