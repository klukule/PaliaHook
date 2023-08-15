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

// 0x8 (0x30 - 0x28)
// Class ResonanceAudio.ResonanceAudioSoundfieldSettings
class UResonanceAudioSoundfieldSettings : public USoundfieldEncodingSettingsBase
{
public:
	enum class EResonanceRenderMode              RenderMode;                                        // 0x28(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F9D[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("ResonanceAudioSoundfieldSettings");

		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class ResonanceAudio.ResonanceAudioBlueprintFunctionLibrary
class UResonanceAudioBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("ResonanceAudioBlueprintFunctionLibrary");

		return Clss;
	}

	void SetGlobalReverbPreset(class UResonanceAudioReverbPluginPreset* InPreset);
	class UResonanceAudioReverbPluginPreset* GetGlobalReverbPreset();
};

// 0x80 (0x310 - 0x290)
// Class ResonanceAudio.ResonanceAudioDirectivityVisualizer
class AResonanceAudioDirectivityVisualizer : public AActor
{
public:
	uint8                                        Pad_1FA9[0x70];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterial*                             Material;                                          // 0x300(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UResonanceAudioSpatializationSourceSettings* Settings;                                          // 0x308(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("ResonanceAudioDirectivityVisualizer");

		return Clss;
	}

};

// 0x108 (0x170 - 0x68)
// Class ResonanceAudio.ResonanceAudioReverbPluginPreset
class UResonanceAudioReverbPluginPreset : public USoundEffectSubmixPreset
{
public:
	uint8                                        Pad_1FB2[0x98];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FResonanceAudioReverbPluginSettings   Settings;                                          // 0x100(0x70)(Edit, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("ResonanceAudioReverbPluginPreset");

		return Clss;
	}

	void SetRoomRotation(struct FQuat& InRotation);
	void SetRoomPosition(struct FVector& InPosition);
	void SetRoomMaterials(TArray<enum class ERaMaterialName>& InMaterials);
	void SetRoomDimensions(struct FVector& InDimensions);
	void SetReverbTimeModifier(float InReverbTimeModifier);
	void SetReverbGain(float InReverbGain);
	void SetReverbBrightness(float InReverbBrightness);
	void SetReflectionScalar(float InReflectionScalar);
	void SetEnableRoomEffects(bool bInEnableRoomEffects);
};

// 0x68 (0x90 - 0x28)
// Class ResonanceAudio.ResonanceAudioSettings
class UResonanceAudioSettings : public UObject
{
public:
	struct FSoftObjectPath                       OutputSubmix;                                      // 0x28(0x20)(Edit, ZeroConstructor, Config, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERaQualityMode                    QualityMode;                                       // 0x48(0x1)(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FB5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSoftObjectPath                       GlobalReverbPreset;                                // 0x50(0x20)(Edit, ZeroConstructor, Config, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSoftObjectPath                       GlobalSourcePreset;                                // 0x70(0x20)(Edit, ZeroConstructor, Config, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("ResonanceAudioSettings");

		return Clss;
	}

};

// 0x28 (0x50 - 0x28)
// Class ResonanceAudio.ResonanceAudioSpatializationSourceSettings
class UResonanceAudioSpatializationSourceSettings : public USpatializationPluginSourceSettingsBase
{
public:
	enum class ERaSpatializationMethod           SpatializationMethod;                              // 0x28(0x1)(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FB8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Pattern;                                           // 0x2C(0x4)(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Sharpness;                                         // 0x30(0x4)(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bToggleVisualization;                              // 0x34(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FB9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Scale;                                             // 0x38(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Spread;                                            // 0x3C(0x4)(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERaDistanceRolloffModel           Rolloff;                                           // 0x40(0x1)(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FBB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MinDistance;                                       // 0x44(0x4)(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxDistance;                                       // 0x48(0x4)(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FBC[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("ResonanceAudioSpatializationSourceSettings");

		return Clss;
	}

	void SetSoundSourceSpread(float InSpread);
	void SetSoundSourceDirectivity(float InPattern, float InSharpness);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
