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

// 0x580 (0x6D0 - 0x150)
// Class AudioWidgets.AudioMeter
class UAudioMeter : public UWidget
{
public:
	TArray<struct FMeterChannelInfo>             MeterChannelInfo;                                  // 0x150(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	FDelegateProperty_                           MeterChannelInfoDelegate;                          // 0x160(0x10)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAudioMeterStyle                      WidgetStyle;                                       // 0x170(0x4D0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	enum class EOrientation                      Orientation;                                       // 0x640(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FDA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          BackgroundColor;                                   // 0x644(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          MeterBackgroundColor;                              // 0x654(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          MeterValueColor;                                   // 0x664(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          MeterPeakColor;                                    // 0x674(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          MeterClippingColor;                                // 0x684(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          MeterScaleColor;                                   // 0x694(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          MeterScaleLabelColor;                              // 0x6A4(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FDD[0x1C];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AudioMeter");
		return Clss;
	}

	void SetMeterValueColor(const struct FLinearColor& InInValue);
	void SetMeterScaleLabelColor(const struct FLinearColor& InInValue);
	void SetMeterScaleColor(const struct FLinearColor& InInValue);
	void SetMeterPeakColor(const struct FLinearColor& InInValue);
	void SetMeterClippingColor(const struct FLinearColor& InInValue);
	void SetMeterChannelInfo(TArray<struct FMeterChannelInfo>& InInMeterChannelInfo);
	void SetMeterBackgroundColor(const struct FLinearColor& InInValue);
	void SetBackgroundColor(const struct FLinearColor& InInValue);
	TArray<struct FMeterChannelInfo> GetMeterChannelInfo__DelegateSignature();
	TArray<struct FMeterChannelInfo> GetMeterChannelInfo();
};

// 0x220 (0x370 - 0x150)
// Class AudioWidgets.AudioRadialSlider
class UAudioRadialSlider : public UWidget
{
public:
	float                                        Value;                                             // 0x150(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           ValueDelegate;                                     // 0x154(0x10)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAudioRadialSliderLayout          WidgetLayout;                                      // 0x164(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2016[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          CenterBackgroundColor;                             // 0x168(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          SliderProgressColor;                               // 0x178(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          SliderBarColor;                                    // 0x188(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             HandStartEndRatio;                                 // 0x198(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  UnitsText;                                         // 0x1A8(0x18)(Edit, NativeAccessSpecifierPublic)
	struct FLinearColor                          TextLabelBackgroundColor;                          // 0x1C0(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ShowLabelOnlyOnHover;                              // 0x1D0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ShowUnitsText;                                     // 0x1D1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsUnitsTextReadOnly;                               // 0x1D2(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsValueTextReadOnly;                               // 0x1D3(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SliderThickness;                                   // 0x1D4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             OutputRange;                                       // 0x1D8(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnValueChanged;                                    // 0x1E8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_201A[0x178];                                   // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AudioRadialSlider");
		return Clss;
	}

	void SetWidgetLayout(enum class EAudioRadialSliderLayout InInLayout);
	void SetValueTextReadOnly(bool InbIsReadOnly);
	void SetUnitsTextReadOnly(bool InbIsReadOnly);
	void SetUnitsText(class FText InUnits);
	void SetTextLabelBackgroundColor(const struct FSlateColor& InInColor);
	void SetSliderThickness(float InInThickness);
	void SetSliderProgressColor(const struct FLinearColor& InInValue);
	void SetSliderBarColor(const struct FLinearColor& InInValue);
	void SetShowUnitsText(bool InbShowUnitsText);
	void SetShowLabelOnlyOnHover(bool InbShowLabelOnlyOnHover);
	void SetOutputRange(const struct FVector2D& InInOutputRange);
	void SetHandStartEndRatio(const struct FVector2D& InInHandStartEndRatio);
	void SetCenterBackgroundColor(const struct FLinearColor& InInValue);
	float GetSliderValue(float InOutputValue);
	float GetOutputValue(float InInSliderValue);
};

// 0x0 (0x370 - 0x370)
// Class AudioWidgets.AudioVolumeRadialSlider
class UAudioVolumeRadialSlider : public UAudioRadialSlider
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AudioVolumeRadialSlider");
		return Clss;
	}

};

// 0x0 (0x370 - 0x370)
// Class AudioWidgets.AudioFrequencyRadialSlider
class UAudioFrequencyRadialSlider : public UAudioRadialSlider
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AudioFrequencyRadialSlider");
		return Clss;
	}

};

// 0x850 (0x9A0 - 0x150)
// Class AudioWidgets.AudioSliderBase
class UAudioSliderBase : public UWidget
{
public:
	float                                        Value;                                             // 0x150(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_203B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  UnitsText;                                         // 0x158(0x18)(Edit, NativeAccessSpecifierPublic)
	struct FLinearColor                          TextLabelBackgroundColor;                          // 0x170(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           TextLabelBackgroundColorDelegate;                  // 0x180(0x10)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ShowLabelOnlyOnHover;                              // 0x190(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ShowUnitsText;                                     // 0x191(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsUnitsTextReadOnly;                               // 0x192(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsValueTextReadOnly;                               // 0x193(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           ValueDelegate;                                     // 0x194(0x10)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          SliderBackgroundColor;                             // 0x1A4(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           SliderBackgroundColorDelegate;                     // 0x1B4(0x10)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          SliderBarColor;                                    // 0x1C4(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           SliderBarColorDelegate;                            // 0x1D4(0x10)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          SliderThumbColor;                                  // 0x1E4(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           SliderThumbColorDelegate;                          // 0x1F4(0x10)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          WidgetBackgroundColor;                             // 0x204(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           WidgetBackgroundColorDelegate;                     // 0x214(0x10)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EOrientation                      Orientation;                                       // 0x224(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2044[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnValueChanged;                                    // 0x228(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_2045[0x768];                                   // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AudioSliderBase");
		return Clss;
	}

	void SetWidgetBackgroundColor(const struct FLinearColor& InInValue);
	void SetValueTextReadOnly(bool InbIsReadOnly);
	void SetUnitsTextReadOnly(bool InbIsReadOnly);
	void SetUnitsText(class FText InUnits);
	void SetTextLabelBackgroundColor(const struct FSlateColor& InInColor);
	void SetSliderThumbColor(const struct FLinearColor& InInValue);
	void SetSliderBarColor(const struct FLinearColor& InInValue);
	void SetSliderBackgroundColor(const struct FLinearColor& InInValue);
	void SetShowUnitsText(bool InbShowUnitsText);
	void SetShowLabelOnlyOnHover(bool InbShowLabelOnlyOnHover);
	float GetSliderValue(float InOutputValue);
	float GetOutputValue(float InInSliderValue);
	float GetLinValue(float InOutputValue);
};

// 0x10 (0x9B0 - 0x9A0)
// Class AudioWidgets.AudioSlider
class UAudioSlider : public UAudioSliderBase
{
public:
	TWeakObjectPtr<class UCurveFloat>            LinToOutputCurve;                                  // 0x9A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UCurveFloat>            OutputToLinCurve;                                  // 0x9A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AudioSlider");
		return Clss;
	}

};

// 0x0 (0x9B0 - 0x9B0)
// Class AudioWidgets.AudioVolumeSlider
class UAudioVolumeSlider : public UAudioSlider
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AudioVolumeSlider");
		return Clss;
	}

};

// 0x10 (0x9B0 - 0x9A0)
// Class AudioWidgets.AudioFrequencySlider
class UAudioFrequencySlider : public UAudioSliderBase
{
public:
	struct FVector2D                             OutputRange;                                       // 0x9A0(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AudioFrequencySlider");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
