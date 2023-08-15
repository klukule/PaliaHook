#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EConstantQNormalizationEnum : uint8
{
	EConstantQNormalizationEnum__EqualEuclideanNorm = 0,
	EConstantQNormalizationEnum__EqualEnergy = 1,
	EConstantQNormalizationEnum__EqualAmplitude = 2,
	EConstantQNormalizationEnum__EConstantQNormalizationEnum_MAX = 3,
};

enum class EConstantQFFTSizeEnum : uint8
{
	EConstantQFFTSizeEnum__Min     = 0,
	EConstantQFFTSizeEnum__XXSmall = 1,
	EConstantQFFTSizeEnum__XSmall  = 2,
	EConstantQFFTSizeEnum__Small   = 3,
	EConstantQFFTSizeEnum__Medium  = 4,
	EConstantQFFTSizeEnum__Large   = 5,
	EConstantQFFTSizeEnum__XLarge  = 6,
	EConstantQFFTSizeEnum__XXLarge = 7,
	EConstantQFFTSizeEnum__Max     = 8,
};

enum class ELoudnessCurveTypeEnum : uint8
{
	ELoudnessCurveTypeEnum__A      = 0,
	ELoudnessCurveTypeEnum__B      = 1,
	ELoudnessCurveTypeEnum__C      = 2,
	ELoudnessCurveTypeEnum__D      = 3,
	ELoudnessCurveTypeEnum__None   = 4,
	ELoudnessCurveTypeEnum__ELoudnessCurveTypeEnum_MAX = 5,
};

enum class ELoudnessNRTCurveTypeEnum : uint8
{
	ELoudnessNRTCurveTypeEnum__A   = 0,
	ELoudnessNRTCurveTypeEnum__B   = 1,
	ELoudnessNRTCurveTypeEnum__C   = 2,
	ELoudnessNRTCurveTypeEnum__D   = 3,
	ELoudnessNRTCurveTypeEnum__None = 4,
	ELoudnessNRTCurveTypeEnum__ELoudnessNRTCurveTypeEnum_MAX = 5,
};

enum class EMeterPeakType : uint8
{
	EMeterPeakType__MeanSquared    = 0,
	EMeterPeakType__RootMeanSquared = 1,
	EMeterPeakType__Peak           = 2,
	EMeterPeakType__Count          = 3,
	EMeterPeakType__EMeterPeakType_MAX = 4,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x10 - 0x0)
// ScriptStruct AudioSynesthesia.LoudnessResults
struct FLoudnessResults
{
public:
	float                                        Loudness;                                          // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NormalizedLoudness;                                // 0x4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PerceptualEnergy;                                  // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TimeSeconds;                                       // 0xC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct AudioSynesthesia.MeterResults
struct FMeterResults
{
public:
	float                                        TimeSeconds;                                       // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MeterValue;                                        // 0x4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PeakValue;                                         // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumSamplesClipping;                                // 0xC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ClippingValue;                                     // 0x10(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct AudioSynesthesia.SynesthesiaSpectrumResults
struct FSynesthesiaSpectrumResults
{
public:
	float                                        TimeSeconds;                                       // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F90[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                SpectrumValues;                                    // 0x8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
