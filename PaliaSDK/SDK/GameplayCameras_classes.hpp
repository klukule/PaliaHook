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

// 0x128 (0x210 - 0xE8)
// Class GameplayCameras.LegacyCameraShake
class ULegacyCameraShake : public UCameraShakeBase
{
public:
	float                                        OscillationDuration;                               // 0xE8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OscillationBlendInTime;                            // 0xEC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OscillationBlendOutTime;                           // 0xF0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FROscillator                          RotOscillation;                                    // 0xF4(0x24)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FVOscillator                          LocOscillation;                                    // 0x118(0x24)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FFOscillator                          FOVOscillation;                                    // 0x13C(0xC)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	float                                        AnimPlayRate;                                      // 0x148(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AnimScale;                                         // 0x14C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AnimBlendInTime;                                   // 0x150(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AnimBlendOutTime;                                  // 0x154(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RandomAnimSegmentDuration;                         // 0x158(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9BF[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UCameraAnimationSequence*              AnimSequence;                                      // 0x160(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bRandomAnimSegment : 1;                            // Mask: 0x1, PropSize: 0x10x168(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_73 : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_9C4[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        OscillatorTimeRemaining;                           // 0x16C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9C6[0x70];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USequenceCameraShakePattern*           SequenceShakePattern;                              // 0x1E0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_9C7[0x28];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("LegacyCameraShake");

		return Clss;
	}

	class ULegacyCameraShake* StartLegacyCameraShakeFromSource(class APlayerCameraManager* PlayerCameraManager, TSubclassOf<class ULegacyCameraShake> ShakeClass, class UCameraShakeSourceComponent* SourceComponent, float Scale, enum class ECameraShakePlaySpace PlaySpace, const struct FRotator& UserPlaySpaceRot);
	class ULegacyCameraShake* StartLegacyCameraShake(class APlayerCameraManager* PlayerCameraManager, TSubclassOf<class ULegacyCameraShake> ShakeClass, float Scale, enum class ECameraShakePlaySpace PlaySpace, const struct FRotator& UserPlaySpaceRot);
	void ReceiveStopShake(bool bImmediately);
	void ReceivePlayShake(float Scale);
	bool ReceiveIsFinished();
	void BlueprintUpdateCameraShake(float DeltaTime, float Alpha, struct FMinimalViewInfo& POV, struct FMinimalViewInfo* ModifiedPOV);
};

// 0x0 (0x28 - 0x28)
// Class GameplayCameras.LegacyCameraShakePattern
class ULegacyCameraShakePattern : public UCameraShakePattern
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("LegacyCameraShakePattern");

		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class GameplayCameras.LegacyCameraShakeFunctionLibrary
class ULegacyCameraShakeFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("LegacyCameraShakeFunctionLibrary");

		return Clss;
	}

	class ULegacyCameraShake* Conv_LegacyCameraShake(class UCameraShakeBase* CameraShake);
};

// 0x18 (0x60 - 0x48)
// Class GameplayCameras.CameraAnimationCameraModifier
class UCameraAnimationCameraModifier : public UCameraModifier
{
public:
	TArray<struct FActiveCameraAnimationInfo>    ActiveAnimations;                                  // 0x48(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	uint16                                       NextInstanceSerialNumber;                          // 0x58(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_A56[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("CameraAnimationCameraModifier");

		return Clss;
	}

	void StopCameraAnimation(struct FCameraAnimationHandle& Handle, bool bImmediate);
	void StopAllCameraAnimationsOf(class UCameraAnimationSequence* Sequence, bool bImmediate);
	void StopAllCameraAnimations(bool bImmediate);
	struct FCameraAnimationHandle PlayCameraAnimation(class UCameraAnimationSequence* Sequence, const struct FCameraAnimationParams& Params);
	bool IsCameraAnimationActive(struct FCameraAnimationHandle& Handle);
	class UCameraAnimationCameraModifier* GetCameraAnimationCameraModifierFromPlayerController(class APlayerController* PlayerController);
	class UCameraAnimationCameraModifier* GetCameraAnimationCameraModifierFromID(class UObject* WorldContextObject, int32 ControllerId);
	class UCameraAnimationCameraModifier* GetCameraAnimationCameraModifier(class UObject* WorldContextObject, int32 PlayerIndex);
};

// 0x0 (0x28 - 0x28)
// Class GameplayCameras.GameplayCamerasFunctionLibrary
class UGameplayCamerasFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("GameplayCamerasFunctionLibrary");

		return Clss;
	}

	enum class ECameraShakePlaySpace Conv_CameraShakePlaySpace(enum class ECameraAnimationPlaySpace CameraAnimationPlaySpace);
	enum class ECameraAnimationPlaySpace Conv_CameraAnimationPlaySpace(enum class ECameraShakePlaySpace CameraShakePlaySpace);
	class UCameraAnimationCameraModifier* Conv_CameraAnimationCameraModifier(class APlayerCameraManager* PlayerCameraManager);
};

// 0x20 (0x48 - 0x28)
// Class GameplayCameras.CompositeCameraShakePattern
class UCompositeCameraShakePattern : public UCameraShakePattern
{
public:
	TArray<class UCameraShakePattern*>           ChildPatterns;                                     // 0x28(0x10)(Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic)
	uint8                                        Pad_A7A[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("CompositeCameraShakePattern");

		return Clss;
	}

};

// 0x8 (0xF0 - 0xE8)
// Class GameplayCameras.DefaultCameraShakeBase
class UDefaultCameraShakeBase : public UCameraShakeBase
{
public:
	uint8                                        Pad_A7D[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("DefaultCameraShakeBase");

		return Clss;
	}

};

// 0x0 (0x30 - 0x30)
// Class GameplayCameras.GameplayCamerasSubsystem
class UGameplayCamerasSubsystem : public UWorldSubsystem
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("GameplayCamerasSubsystem");

		return Clss;
	}

	void StopCameraAnimation(class APlayerController* PlayerController, struct FCameraAnimationHandle& Handle, bool bImmediate);
	void StopAllCameraAnimationsOf(class APlayerController* PlayerController, class UCameraAnimationSequence* Sequence, bool bImmediate);
	void StopAllCameraAnimations(class APlayerController* PlayerController, bool bImmediate);
	struct FCameraAnimationHandle PlayCameraAnimation(class APlayerController* PlayerController, class UCameraAnimationSequence* Sequence, const struct FCameraAnimationParams& Params);
	bool IsCameraAnimationActive(class APlayerController* PlayerController, struct FCameraAnimationHandle& Handle);
};

// 0x10 (0x38 - 0x28)
// Class GameplayCameras.SimpleCameraShakePattern
class USimpleCameraShakePattern : public UCameraShakePattern
{
public:
	float                                        Duration;                                          // 0x28(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BlendInTime;                                       // 0x2C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BlendOutTime;                                      // 0x30(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_AB4[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("SimpleCameraShakePattern");

		return Clss;
	}

};

// 0x80 (0xB8 - 0x38)
// Class GameplayCameras.PerlinNoiseCameraShakePattern
class UPerlinNoiseCameraShakePattern : public USimpleCameraShakePattern
{
public:
	float                                        LocationAmplitudeMultiplier;                       // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LocationFrequencyMultiplier;                       // 0x3C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPerlinNoiseShaker                    X;                                                 // 0x40(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FPerlinNoiseShaker                    Y;                                                 // 0x48(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FPerlinNoiseShaker                    Z;                                                 // 0x50(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	float                                        RotationAmplitudeMultiplier;                       // 0x58(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RotationFrequencyMultiplier;                       // 0x5C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPerlinNoiseShaker                    Pitch;                                             // 0x60(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FPerlinNoiseShaker                    Yaw;                                               // 0x68(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FPerlinNoiseShaker                    Roll;                                              // 0x70(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FPerlinNoiseShaker                    FOV;                                               // 0x78(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_ABA[0x38];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("PerlinNoiseCameraShakePattern");

		return Clss;
	}

};

// 0x8 (0xF0 - 0xE8)
// Class GameplayCameras.TestCameraShake
class UTestCameraShake : public UCameraShakeBase
{
public:
	uint8                                        Pad_ABC[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("TestCameraShake");

		return Clss;
	}

};

// 0x30 (0x68 - 0x38)
// Class GameplayCameras.ConstantCameraShakePattern
class UConstantCameraShakePattern : public USimpleCameraShakePattern
{
public:
	struct FVector                               LocationOffset;                                    // 0x38(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              RotationOffset;                                    // 0x50(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("ConstantCameraShakePattern");

		return Clss;
	}

};

// 0xA0 (0xD8 - 0x38)
// Class GameplayCameras.WaveOscillatorCameraShakePattern
class UWaveOscillatorCameraShakePattern : public USimpleCameraShakePattern
{
public:
	float                                        LocationAmplitudeMultiplier;                       // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LocationFrequencyMultiplier;                       // 0x3C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FWaveOscillator                       X;                                                 // 0x40(0xC)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FWaveOscillator                       Y;                                                 // 0x4C(0xC)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FWaveOscillator                       Z;                                                 // 0x58(0xC)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	float                                        RotationAmplitudeMultiplier;                       // 0x64(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RotationFrequencyMultiplier;                       // 0x68(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FWaveOscillator                       Pitch;                                             // 0x6C(0xC)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FWaveOscillator                       Yaw;                                               // 0x78(0xC)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FWaveOscillator                       Roll;                                              // 0x84(0xC)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FWaveOscillator                       FOV;                                               // 0x90(0xC)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_AC8[0x3C];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("WaveOscillatorCameraShakePattern");

		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
