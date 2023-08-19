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

enum class EFrameNumberDisplayFormats : uint8
{
	EFrameNumberDisplayFormats__NonDropFrameTimecode = 0,
	EFrameNumberDisplayFormats__DropFrameTimecode = 1,
	EFrameNumberDisplayFormats__Seconds = 2,
	EFrameNumberDisplayFormats__Frames = 3,
	EFrameNumberDisplayFormats__MAX_Count = 4,
	EFrameNumberDisplayFormats__EFrameNumberDisplayFormats_MAX = 5,
};

enum class ETimedDataInputEvaluationType : uint8
{
	ETimedDataInputEvaluationType__None = 0,
	ETimedDataInputEvaluationType__Timecode = 1,
	ETimedDataInputEvaluationType__PlatformTime = 2,
	ETimedDataInputEvaluationType__ETimedDataInputEvaluationType_MAX = 3,
};

enum class ETimedDataInputState : uint8
{
	ETimedDataInputState__Connected = 0,
	ETimedDataInputState__Unresponsive = 1,
	ETimedDataInputState__Disconnected = 2,
	ETimedDataInputState__ETimedDataInputState_MAX = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x18 - 0x0)
// ScriptStruct TimeManagement.TimedDataChannelSampleTime
struct FTimedDataChannelSampleTime
{
public:
	uint8                                        Pad_2114[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct TimeManagement.TimedDataInputEvaluationData
struct FTimedDataInputEvaluationData
{
public:
	float                                        DistanceToNewestSampleSeconds;                     // 0x0(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DistanceToOldestSampleSeconds;                     // 0x4(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
