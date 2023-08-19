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
// Class TimeManagement.FixedFrameRateCustomTimeStep
class UFixedFrameRateCustomTimeStep : public UEngineCustomTimeStep
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FixedFrameRateCustomTimeStep");
		return Clss;
	}

};

// 0x8 (0x30 - 0x28)
// Class TimeManagement.GenlockedCustomTimeStep
class UGenlockedCustomTimeStep : public UFixedFrameRateCustomTimeStep
{
public:
	bool                                         bAutoDetectFormat;                                 // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2091[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GenlockedCustomTimeStep");
		return Clss;
	}

};

// 0x20 (0x50 - 0x30)
// Class TimeManagement.GenlockedFixedRateCustomTimeStep
class UGenlockedFixedRateCustomTimeStep : public UGenlockedCustomTimeStep
{
public:
	struct FFrameRate                            FrameRate;                                         // 0x30(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShouldBlock;                                      // 0x38(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bForceSingleFrameDeltaTime;                        // 0x39(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2096[0x16];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GenlockedFixedRateCustomTimeStep");
		return Clss;
	}

};

// 0x28 (0x58 - 0x30)
// Class TimeManagement.GenlockedTimecodeProvider
class UGenlockedTimecodeProvider : public UTimecodeProvider
{
public:
	bool                                         bUseGenlockToCount;                                // 0x30(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2099[0x27];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GenlockedTimecodeProvider");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class TimeManagement.TimeManagementBlueprintLibrary
class UTimeManagementBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TimeManagementBlueprintLibrary");
		return Clss;
	}

	struct FFrameTime TransformTime(struct FFrameTime& InSourceTime, struct FFrameRate& InSourceRate, struct FFrameRate& InDestinationRate);
	struct FFrameNumber Subtract_FrameNumberInteger(const struct FFrameNumber& InA, int32 InB);
	struct FFrameNumber Subtract_FrameNumberFrameNumber(const struct FFrameNumber& InA, const struct FFrameNumber& InB);
	struct FFrameTime SnapFrameTimeToRate(struct FFrameTime& InSourceTime, struct FFrameRate& InSourceRate, struct FFrameRate& InSnapToRate);
	struct FFrameTime Multiply_SecondsFrameRate(float InTimeInSeconds, struct FFrameRate& InFrameRate);
	struct FFrameNumber Multiply_FrameNumberInteger(const struct FFrameNumber& InA, int32 InB);
	bool IsValid_MultipleOf(struct FFrameRate& InInFrameRate, struct FFrameRate& InOtherFramerate);
	bool IsValid_Framerate(struct FFrameRate& InInFrameRate);
	struct FFrameRate GetTimecodeFrameRate();
	struct FTimecode GetTimecode();
	struct FFrameNumber Divide_FrameNumberInteger(const struct FFrameNumber& InA, int32 InB);
	class FString Conv_TimecodeToString(struct FTimecode& InInTimecode, bool InbForceSignDisplay);
	float Conv_QualifiedFrameTimeToSeconds(struct FQualifiedFrameTime& InInFrameTime);
	float Conv_FrameRateToSeconds(struct FFrameRate& InInFrameRate);
	int32 Conv_FrameNumberToInteger(struct FFrameNumber& InInFrameNumber);
	struct FFrameNumber Add_FrameNumberInteger(const struct FFrameNumber& InA, int32 InB);
	struct FFrameNumber Add_FrameNumberFrameNumber(const struct FFrameNumber& InA, const struct FFrameNumber& InB);
};

// 0x8 (0x30 - 0x28)
// Class TimeManagement.TimeSynchronizationSource
class UTimeSynchronizationSource : public UObject
{
public:
	bool                                         bUseForSynchronization;                            // 0x28(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_210E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        FrameOffset;                                       // 0x2C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TimeSynchronizationSource");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
