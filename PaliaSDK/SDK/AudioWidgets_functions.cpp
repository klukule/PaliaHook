#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function AudioWidgets.AudioMeter.SetMeterValueColor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor                InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAudioMeter::SetMeterValueColor(const struct FLinearColor& InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioMeter", "SetMeterValueColor");

	Params::UAudioMeter_SetMeterValueColor_Params Parms{};

	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AudioWidgets.AudioMeter.SetMeterScaleLabelColor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor                InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAudioMeter::SetMeterScaleLabelColor(const struct FLinearColor& InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioMeter", "SetMeterScaleLabelColor");

	Params::UAudioMeter_SetMeterScaleLabelColor_Params Parms{};

	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AudioWidgets.AudioMeter.SetMeterScaleColor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor                InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAudioMeter::SetMeterScaleColor(const struct FLinearColor& InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioMeter", "SetMeterScaleColor");

	Params::UAudioMeter_SetMeterScaleColor_Params Parms{};

	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AudioWidgets.AudioMeter.SetMeterPeakColor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor                InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAudioMeter::SetMeterPeakColor(const struct FLinearColor& InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioMeter", "SetMeterPeakColor");

	Params::UAudioMeter_SetMeterPeakColor_Params Parms{};

	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AudioWidgets.AudioMeter.SetMeterClippingColor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor                InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAudioMeter::SetMeterClippingColor(const struct FLinearColor& InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioMeter", "SetMeterClippingColor");

	Params::UAudioMeter_SetMeterClippingColor_Params Parms{};

	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AudioWidgets.AudioMeter.SetMeterChannelInfo
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FMeterChannelInfo>   InMeterChannelInfo                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UAudioMeter::SetMeterChannelInfo(TArray<struct FMeterChannelInfo>& InMeterChannelInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioMeter", "SetMeterChannelInfo");

	Params::UAudioMeter_SetMeterChannelInfo_Params Parms{};

	Parms.InMeterChannelInfo = InMeterChannelInfo;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AudioWidgets.AudioMeter.SetMeterBackgroundColor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor                InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAudioMeter::SetMeterBackgroundColor(const struct FLinearColor& InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioMeter", "SetMeterBackgroundColor");

	Params::UAudioMeter_SetMeterBackgroundColor_Params Parms{};

	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AudioWidgets.AudioMeter.SetBackgroundColor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor                InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAudioMeter::SetBackgroundColor(const struct FLinearColor& InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioMeter", "SetBackgroundColor");

	Params::UAudioMeter_SetBackgroundColor_Params Parms{};

	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// DelegateFunction AudioWidgets.AudioMeter.GetMeterChannelInfo__DelegateSignature
// (Public, Delegate)
// Parameters:
// TArray<struct FMeterChannelInfo>   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FMeterChannelInfo> UAudioMeter::GetMeterChannelInfo__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioMeter", "GetMeterChannelInfo__DelegateSignature");

	Params::UAudioMeter_GetMeterChannelInfo__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function AudioWidgets.AudioMeter.GetMeterChannelInfo
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FMeterChannelInfo>   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FMeterChannelInfo> UAudioMeter::GetMeterChannelInfo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioMeter", "GetMeterChannelInfo");

	Params::UAudioMeter_GetMeterChannelInfo_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AudioWidgets.AudioRadialSlider.SetWidgetLayout
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EAudioRadialSliderLayoutInLayout                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAudioRadialSlider::SetWidgetLayout(enum class EAudioRadialSliderLayout InLayout)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioRadialSlider", "SetWidgetLayout");

	Params::UAudioRadialSlider_SetWidgetLayout_Params Parms{};

	Parms.InLayout = InLayout;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AudioWidgets.AudioRadialSlider.SetValueTextReadOnly
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bIsReadOnly                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAudioRadialSlider::SetValueTextReadOnly(bool bIsReadOnly)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioRadialSlider", "SetValueTextReadOnly");

	Params::UAudioRadialSlider_SetValueTextReadOnly_Params Parms{};

	Parms.bIsReadOnly = bIsReadOnly;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AudioWidgets.AudioRadialSlider.SetUnitsTextReadOnly
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bIsReadOnly                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAudioRadialSlider::SetUnitsTextReadOnly(bool bIsReadOnly)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioRadialSlider", "SetUnitsTextReadOnly");

	Params::UAudioRadialSlider_SetUnitsTextReadOnly_Params Parms{};

	Parms.bIsReadOnly = bIsReadOnly;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AudioWidgets.AudioRadialSlider.SetUnitsText
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FText                        Units                                                            (ConstParm, Parm, NativeAccessSpecifierPublic)

void UAudioRadialSlider::SetUnitsText(class FText Units)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioRadialSlider", "SetUnitsText");

	Params::UAudioRadialSlider_SetUnitsText_Params Parms{};

	Parms.Units = Units;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AudioWidgets.AudioRadialSlider.SetTextLabelBackgroundColor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FSlateColor                 InColor                                                          (Parm, NativeAccessSpecifierPublic)

void UAudioRadialSlider::SetTextLabelBackgroundColor(const struct FSlateColor& InColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioRadialSlider", "SetTextLabelBackgroundColor");

	Params::UAudioRadialSlider_SetTextLabelBackgroundColor_Params Parms{};

	Parms.InColor = InColor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AudioWidgets.AudioRadialSlider.SetSliderThickness
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InThickness                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAudioRadialSlider::SetSliderThickness(float InThickness)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioRadialSlider", "SetSliderThickness");

	Params::UAudioRadialSlider_SetSliderThickness_Params Parms{};

	Parms.InThickness = InThickness;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AudioWidgets.AudioRadialSlider.SetSliderProgressColor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor                InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAudioRadialSlider::SetSliderProgressColor(const struct FLinearColor& InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioRadialSlider", "SetSliderProgressColor");

	Params::UAudioRadialSlider_SetSliderProgressColor_Params Parms{};

	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AudioWidgets.AudioRadialSlider.SetSliderBarColor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor                InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAudioRadialSlider::SetSliderBarColor(const struct FLinearColor& InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioRadialSlider", "SetSliderBarColor");

	Params::UAudioRadialSlider_SetSliderBarColor_Params Parms{};

	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AudioWidgets.AudioRadialSlider.SetShowUnitsText
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bShowUnitsText                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAudioRadialSlider::SetShowUnitsText(bool bShowUnitsText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioRadialSlider", "SetShowUnitsText");

	Params::UAudioRadialSlider_SetShowUnitsText_Params Parms{};

	Parms.bShowUnitsText = bShowUnitsText;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AudioWidgets.AudioRadialSlider.SetShowLabelOnlyOnHover
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bShowLabelOnlyOnHover                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAudioRadialSlider::SetShowLabelOnlyOnHover(bool bShowLabelOnlyOnHover)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioRadialSlider", "SetShowLabelOnlyOnHover");

	Params::UAudioRadialSlider_SetShowLabelOnlyOnHover_Params Parms{};

	Parms.bShowLabelOnlyOnHover = bShowLabelOnlyOnHover;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AudioWidgets.AudioRadialSlider.SetOutputRange
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D                   InOutputRange                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAudioRadialSlider::SetOutputRange(const struct FVector2D& InOutputRange)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioRadialSlider", "SetOutputRange");

	Params::UAudioRadialSlider_SetOutputRange_Params Parms{};

	Parms.InOutputRange = InOutputRange;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AudioWidgets.AudioRadialSlider.SetHandStartEndRatio
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D                   InHandStartEndRatio                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAudioRadialSlider::SetHandStartEndRatio(const struct FVector2D& InHandStartEndRatio)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioRadialSlider", "SetHandStartEndRatio");

	Params::UAudioRadialSlider_SetHandStartEndRatio_Params Parms{};

	Parms.InHandStartEndRatio = InHandStartEndRatio;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AudioWidgets.AudioRadialSlider.SetCenterBackgroundColor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor                InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAudioRadialSlider::SetCenterBackgroundColor(const struct FLinearColor& InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioRadialSlider", "SetCenterBackgroundColor");

	Params::UAudioRadialSlider_SetCenterBackgroundColor_Params Parms{};

	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AudioWidgets.AudioRadialSlider.GetSliderValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              OutputValue                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UAudioRadialSlider::GetSliderValue(float OutputValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioRadialSlider", "GetSliderValue");

	Params::UAudioRadialSlider_GetSliderValue_Params Parms{};

	Parms.OutputValue = OutputValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AudioWidgets.AudioRadialSlider.GetOutputValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InSliderValue                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UAudioRadialSlider::GetOutputValue(float InSliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioRadialSlider", "GetOutputValue");

	Params::UAudioRadialSlider_GetOutputValue_Params Parms{};

	Parms.InSliderValue = InSliderValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AudioWidgets.AudioSliderBase.SetWidgetBackgroundColor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor                InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAudioSliderBase::SetWidgetBackgroundColor(const struct FLinearColor& InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioSliderBase", "SetWidgetBackgroundColor");

	Params::UAudioSliderBase_SetWidgetBackgroundColor_Params Parms{};

	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AudioWidgets.AudioSliderBase.SetValueTextReadOnly
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bIsReadOnly                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAudioSliderBase::SetValueTextReadOnly(bool bIsReadOnly)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioSliderBase", "SetValueTextReadOnly");

	Params::UAudioSliderBase_SetValueTextReadOnly_Params Parms{};

	Parms.bIsReadOnly = bIsReadOnly;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AudioWidgets.AudioSliderBase.SetUnitsTextReadOnly
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bIsReadOnly                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAudioSliderBase::SetUnitsTextReadOnly(bool bIsReadOnly)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioSliderBase", "SetUnitsTextReadOnly");

	Params::UAudioSliderBase_SetUnitsTextReadOnly_Params Parms{};

	Parms.bIsReadOnly = bIsReadOnly;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AudioWidgets.AudioSliderBase.SetUnitsText
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FText                        Units                                                            (ConstParm, Parm, NativeAccessSpecifierPublic)

void UAudioSliderBase::SetUnitsText(class FText Units)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioSliderBase", "SetUnitsText");

	Params::UAudioSliderBase_SetUnitsText_Params Parms{};

	Parms.Units = Units;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AudioWidgets.AudioSliderBase.SetTextLabelBackgroundColor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FSlateColor                 InColor                                                          (Parm, NativeAccessSpecifierPublic)

void UAudioSliderBase::SetTextLabelBackgroundColor(const struct FSlateColor& InColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioSliderBase", "SetTextLabelBackgroundColor");

	Params::UAudioSliderBase_SetTextLabelBackgroundColor_Params Parms{};

	Parms.InColor = InColor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AudioWidgets.AudioSliderBase.SetSliderThumbColor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor                InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAudioSliderBase::SetSliderThumbColor(const struct FLinearColor& InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioSliderBase", "SetSliderThumbColor");

	Params::UAudioSliderBase_SetSliderThumbColor_Params Parms{};

	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AudioWidgets.AudioSliderBase.SetSliderBarColor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor                InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAudioSliderBase::SetSliderBarColor(const struct FLinearColor& InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioSliderBase", "SetSliderBarColor");

	Params::UAudioSliderBase_SetSliderBarColor_Params Parms{};

	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AudioWidgets.AudioSliderBase.SetSliderBackgroundColor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor                InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAudioSliderBase::SetSliderBackgroundColor(const struct FLinearColor& InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioSliderBase", "SetSliderBackgroundColor");

	Params::UAudioSliderBase_SetSliderBackgroundColor_Params Parms{};

	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AudioWidgets.AudioSliderBase.SetShowUnitsText
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bShowUnitsText                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAudioSliderBase::SetShowUnitsText(bool bShowUnitsText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioSliderBase", "SetShowUnitsText");

	Params::UAudioSliderBase_SetShowUnitsText_Params Parms{};

	Parms.bShowUnitsText = bShowUnitsText;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AudioWidgets.AudioSliderBase.SetShowLabelOnlyOnHover
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bShowLabelOnlyOnHover                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAudioSliderBase::SetShowLabelOnlyOnHover(bool bShowLabelOnlyOnHover)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioSliderBase", "SetShowLabelOnlyOnHover");

	Params::UAudioSliderBase_SetShowLabelOnlyOnHover_Params Parms{};

	Parms.bShowLabelOnlyOnHover = bShowLabelOnlyOnHover;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AudioWidgets.AudioSliderBase.GetSliderValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              OutputValue                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UAudioSliderBase::GetSliderValue(float OutputValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioSliderBase", "GetSliderValue");

	Params::UAudioSliderBase_GetSliderValue_Params Parms{};

	Parms.OutputValue = OutputValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AudioWidgets.AudioSliderBase.GetOutputValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InSliderValue                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UAudioSliderBase::GetOutputValue(float InSliderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioSliderBase", "GetOutputValue");

	Params::UAudioSliderBase_GetOutputValue_Params Parms{};

	Parms.InSliderValue = InSliderValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AudioWidgets.AudioSliderBase.GetLinValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              OutputValue                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UAudioSliderBase::GetLinValue(float OutputValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioSliderBase", "GetLinValue");

	Params::UAudioSliderBase_GetLinValue_Params Parms{};

	Parms.OutputValue = OutputValue;

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
