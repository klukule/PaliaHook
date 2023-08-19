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

// 0x0 (0x28 - 0x28)
// Class AudioSynesthesia.AudioSynesthesiaSettings
class UAudioSynesthesiaSettings : public UAudioAnalyzerSettings
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AudioSynesthesiaSettings");
		return Clss;
	}

};

// 0x8 (0x30 - 0x28)
// Class AudioSynesthesia.SynesthesiaSpectrumAnalysisSettings
class USynesthesiaSpectrumAnalysisSettings : public UAudioSynesthesiaSettings
{
public:
	float                                        AnalysisPeriod;                                    // 0x28(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFFTSize                          FFTSize;                                           // 0x2C(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAudioSpectrumType                SpectrumType;                                      // 0x2D(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFFTWindowType                    WindowType;                                        // 0x2E(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDownmixToMono;                                    // 0x2F(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SynesthesiaSpectrumAnalysisSettings");
		return Clss;
	}

};

// 0x58 (0xE8 - 0x90)
// Class AudioSynesthesia.SynesthesiaSpectrumAnalyzer
class USynesthesiaSpectrumAnalyzer : public UAudioAnalyzer
{
public:
	class USynesthesiaSpectrumAnalysisSettings*  Settings;                                          // 0x90(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnSpectrumResults;                                 // 0x98(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D10[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnLatestSpectrumResults;                           // 0xC0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D11[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SynesthesiaSpectrumAnalyzer");
		return Clss;
	}

	int32 GetNumCenterFrequencies();
	void GetCenterFrequencies(float InInSampleRate, TArray<float>* InOutCenterFrequencies);
};

// 0x0 (0x28 - 0x28)
// Class AudioSynesthesia.AudioSynesthesiaNRTSettings
class UAudioSynesthesiaNRTSettings : public UAudioAnalyzerNRTSettings
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AudioSynesthesiaNRTSettings");
		return Clss;
	}

};

// 0x0 (0x78 - 0x78)
// Class AudioSynesthesia.AudioSynesthesiaNRT
class UAudioSynesthesiaNRT : public UAudioAnalyzerNRT
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AudioSynesthesiaNRT");
		return Clss;
	}

};

// 0x20 (0x48 - 0x28)
// Class AudioSynesthesia.ConstantQNRTSettings
class UConstantQNRTSettings : public UAudioSynesthesiaNRTSettings
{
public:
	float                                        StartingFrequency;                                 // 0x28(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumBands;                                          // 0x2C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NumBandsPerOctave;                                 // 0x30(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AnalysisPeriod;                                    // 0x34(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDownmixToMono;                                    // 0x38(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EConstantQFFTSizeEnum             FFTSize;                                           // 0x39(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFFTWindowType                    WindowType;                                        // 0x3A(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAudioSpectrumType                SpectrumType;                                      // 0x3B(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BandWidthStretch;                                  // 0x3C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EConstantQNormalizationEnum       CQTNormalization;                                  // 0x40(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D14[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        NoiseFloorDb;                                      // 0x44(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ConstantQNRTSettings");
		return Clss;
	}

};

// 0x8 (0x80 - 0x78)
// Class AudioSynesthesia.ConstantQNRT
class UConstantQNRT : public UAudioSynesthesiaNRT
{
public:
	class UConstantQNRTSettings*                 Settings;                                          // 0x78(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ConstantQNRT");
		return Clss;
	}

	void GetNormalizedChannelConstantQAtTime(float InInSeconds, int32 InInChannel, TArray<float>* InOutConstantQ);
	void GetChannelConstantQAtTime(float InInSeconds, int32 InInChannel, TArray<float>* InOutConstantQ);
};

// 0x18 (0x40 - 0x28)
// Class AudioSynesthesia.LoudnessSettings
class ULoudnessSettings : public UAudioSynesthesiaSettings
{
public:
	float                                        AnalysisPeriod;                                    // 0x28(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinimumFrequency;                                  // 0x2C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaximumFrequency;                                  // 0x30(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ELoudnessCurveTypeEnum            CurveType;                                         // 0x34(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D1E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        NoiseFloorDb;                                      // 0x38(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ExpectedMaxLoudness;                               // 0x3C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LoudnessSettings");
		return Clss;
	}

};

// 0x48 (0xD8 - 0x90)
// Class AudioSynesthesia.LoudnessAnalyzer
class ULoudnessAnalyzer : public UAudioAnalyzer
{
public:
	class ULoudnessSettings*                     Settings;                                          // 0x90(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnOverallLoudnessResults;                          // 0x98(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnPerChannelLoudnessResults;                       // 0xA8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnLatestOverallLoudnessResults;                    // 0xB8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnLatestPerChannelLoudnessResults;                 // 0xC8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LoudnessAnalyzer");
		return Clss;
	}

};

// 0x18 (0x40 - 0x28)
// Class AudioSynesthesia.LoudnessNRTSettings
class ULoudnessNRTSettings : public UAudioSynesthesiaNRTSettings
{
public:
	float                                        AnalysisPeriod;                                    // 0x28(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinimumFrequency;                                  // 0x2C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaximumFrequency;                                  // 0x30(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ELoudnessNRTCurveTypeEnum         CurveType;                                         // 0x34(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D29[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        NoiseFloorDb;                                      // 0x38(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D2A[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LoudnessNRTSettings");
		return Clss;
	}

};

// 0x8 (0x80 - 0x78)
// Class AudioSynesthesia.LoudnessNRT
class ULoudnessNRT : public UAudioSynesthesiaNRT
{
public:
	class ULoudnessNRTSettings*                  Settings;                                          // 0x78(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LoudnessNRT");
		return Clss;
	}

	void GetNormalizedLoudnessAtTime(float InInSeconds, float* InOutLoudness);
	void GetNormalizedChannelLoudnessAtTime(float InInSeconds, int32 InInChannel, float* InOutLoudness);
	void GetLoudnessAtTime(float InInSeconds, float* InOutLoudness);
	void GetChannelLoudnessAtTime(float InInSeconds, int32 InInChannel, float* InOutLoudness);
};

// 0x18 (0x40 - 0x28)
// Class AudioSynesthesia.MeterSettings
class UMeterSettings : public UAudioSynesthesiaSettings
{
public:
	float                                        AnalysisPeriod;                                    // 0x28(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMeterPeakType                    PeakMode;                                          // 0x2C(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D3D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MeterAttackTime;                                   // 0x30(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MeterReleaseTime;                                  // 0x34(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PeakHoldTime;                                      // 0x38(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ClippingThreshold;                                 // 0x3C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MeterSettings");
		return Clss;
	}

};

// 0xA8 (0x138 - 0x90)
// Class AudioSynesthesia.MeterAnalyzer
class UMeterAnalyzer : public UAudioAnalyzer
{
public:
	class UMeterSettings*                        Settings;                                          // 0x90(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnOverallMeterResults;                             // 0x98(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D45[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnPerChannelMeterResults;                          // 0xC0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D47[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnLatestOverallMeterResults;                       // 0xE8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D48[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnLatestPerChannelMeterResults;                    // 0x110(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D4A[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MeterAnalyzer");
		return Clss;
	}

};

// 0x18 (0x40 - 0x28)
// Class AudioSynesthesia.OnsetNRTSettings
class UOnsetNRTSettings : public UAudioSynesthesiaNRTSettings
{
public:
	bool                                         bDownmixToMono;                                    // 0x28(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D4B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        GranularityInSeconds;                              // 0x2C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Sensitivity;                                       // 0x30(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinimumFrequency;                                  // 0x34(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaximumFrequency;                                  // 0x38(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D4F[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("OnsetNRTSettings");
		return Clss;
	}

};

// 0x8 (0x80 - 0x78)
// Class AudioSynesthesia.OnsetNRT
class UOnsetNRT : public UAudioSynesthesiaNRT
{
public:
	class UOnsetNRTSettings*                     Settings;                                          // 0x78(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("OnsetNRT");
		return Clss;
	}

	void GetNormalizedChannelOnsetsBetweenTimes(float InInStartSeconds, float InInEndSeconds, int32 InInChannel, TArray<float>* InOutOnsetTimestamps, TArray<float>* InOutOnsetStrengths);
	void GetChannelOnsetsBetweenTimes(float InInStartSeconds, float InInEndSeconds, int32 InInChannel, TArray<float>* InOutOnsetTimestamps, TArray<float>* InOutOnsetStrengths);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
