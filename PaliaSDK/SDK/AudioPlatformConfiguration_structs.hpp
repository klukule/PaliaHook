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

enum class ESoundwaveSampleRateSettings : uint8
{
	ESoundwaveSampleRateSettings__Max = 0,
	ESoundwaveSampleRateSettings__High = 1,
	ESoundwaveSampleRateSettings__Medium = 2,
	ESoundwaveSampleRateSettings__Low = 3,
	ESoundwaveSampleRateSettings__Min = 4,
	ESoundwaveSampleRateSettings__MatchDevice_DEPRECATED = 5,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x10 - 0x0)
// ScriptStruct AudioPlatformConfiguration.PlatformRuntimeAudioCompressionOverrides
struct FPlatformRuntimeAudioCompressionOverrides
{
public:
	bool                                         bOverrideCompressionTimes;                         // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27B9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DurationThreshold;                                 // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxNumRandomBranches;                              // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SoundCueQualityIndex;                              // 0xC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
