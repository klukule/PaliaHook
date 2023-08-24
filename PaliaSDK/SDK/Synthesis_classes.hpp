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

// 0x30 (0x58 - 0x28)
// Class Synthesis.AudioImpulseResponse
class UAudioImpulseResponse : public UObject
{
public:
	TArray<float>                                ImpulseResponse;                                   // 0x28(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        NumChannels;                                       // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SampleRate;                                        // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NormalizationVolumeDb;                             // 0x40(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTrueStereo;                                       // 0x44(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2024[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                IRData;                                            // 0x48(0x10)(ZeroConstructor, Deprecated, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AudioImpulseResponse");
		return Clss;
	}

};

// 0x10 (0x38 - 0x28)
// Class Synthesis.ModularSynthPresetBank
class UModularSynthPresetBank : public UObject
{
public:
	TArray<struct FModularSynthPresetBankEntry>  Presets;                                           // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ModularSynthPresetBank");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class Synthesis.ModularSynthLibrary
class UModularSynthLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ModularSynthLibrary");
		return Clss;
	}

	void AddModularSynthPresetToBankAsset(class UModularSynthPresetBank* InInBank, struct FModularSynthPreset& InPreset, const class FString& InPresetName);
};

// 0x6D0 (0xE60 - 0x790)
// Class Synthesis.ModularSynthComponent
class UModularSynthComponent : public USynthComponent
{
public:
	int32                                        VoiceCount;                                        // 0x790(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_212D[0x6CC];                                   // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ModularSynthComponent");
		return Clss;
	}

	void SetSynthPreset(struct FModularSynthPreset& InSynthPreset);
	void SetSustainGain(float InSustainGain);
	void SetStereoDelayWetlevel(float InDelayWetlevel);
	void SetStereoDelayTime(float InDelayTimeMsec);
	void SetStereoDelayRatio(float InDelayRatio);
	void SetStereoDelayMode(enum class ESynthStereoDelayMode InStereoDelayMode);
	void SetStereoDelayIsEnabled(bool InStereoDelayEnabled);
	void SetStereoDelayFeedback(float InDelayFeedback);
	void SetSpread(float InSpread);
	void SetReleaseTime(float InReleaseTimeMsec);
	void SetPortamento(float InPortamento);
	void SetPitchBend(float InPitchBend);
	void SetPan(float InPan);
	void SetOscType(int32 InOscIndex, enum class ESynth1OscType InOscType);
	void SetOscSync(bool InbIsSynced);
	void SetOscSemitones(int32 InOscIndex, float InSemitones);
	void SetOscPulsewidth(int32 InOscIndex, float InPulsewidth);
	void SetOscOctave(int32 InOscIndex, float InOctave);
	void SetOscGainMod(int32 InOscIndex, float InOscGainMod);
	void SetOscGain(int32 InOscIndex, float InOscGain);
	void SetOscFrequencyMod(int32 InOscIndex, float InOscFreqMod);
	void SetOscCents(int32 InOscIndex, float InCents);
	void SetModEnvSustainGain(float InSustainGain);
	void SetModEnvReleaseTime(float InRelease);
	void SetModEnvPatch(enum class ESynthModEnvPatch InInPatchType);
	void SetModEnvInvert(bool InbInvert);
	void SetModEnvDepth(float InDepth);
	void SetModEnvDecayTime(float InDecayTimeMsec);
	void SetModEnvBiasPatch(enum class ESynthModEnvBiasPatch InInPatchType);
	void SetModEnvBiasInvert(bool InbInvert);
	void SetModEnvAttackTime(float InAttackTimeMsec);
	void SetLFOType(int32 InLFOIndex, enum class ESynthLFOType InLFOType);
	void SetLFOPatch(int32 InLFOIndex, enum class ESynthLFOPatchType InLFOPatchType);
	void SetLFOMode(int32 InLFOIndex, enum class ESynthLFOMode InLFOMode);
	void SetLFOGainMod(int32 InLFOIndex, float InGainMod);
	void SetLFOGain(int32 InLFOIndex, float InGain);
	void SetLFOFrequencyMod(int32 InLFOIndex, float InFrequencyModHz);
	void SetLFOFrequency(int32 InLFOIndex, float InFrequencyHz);
	void SetGainDb(float InGainDb);
	void SetFilterType(enum class ESynthFilterType InFilterType);
	void SetFilterQMod(float InFilterQ);
	void SetFilterQ(float InFilterQ);
	void SetFilterFrequencyMod(float InFilterFrequencyHz);
	void SetFilterFrequency(float InFilterFrequencyHz);
	void SetFilterAlgorithm(enum class ESynthFilterAlgorithm InFilterAlgorithm);
	void SetEnableUnison(bool InEnableUnison);
	void SetEnableRetrigger(bool InRetriggerEnabled);
	void SetEnablePolyphony(bool InbEnablePolyphony);
	bool SetEnablePatch(const struct FPatchId& InPatchId, bool InbIsEnabled);
	void SetEnableLegato(bool InLegatoEnabled);
	void SetDecayTime(float InDecayTimeMsec);
	void SetChorusFrequency(float InFrequency);
	void SetChorusFeedback(float InFeedback);
	void SetChorusEnabled(bool InEnableChorus);
	void SetChorusDepth(float InDepth);
	void SetAttackTime(float InAttackTimeMsec);
	void NoteOn(float InNote, int32 InVelocity, float InDuration);
	void NoteOff(float InNote, bool InbAllNotesOff, bool InbKillAllNotes);
	struct FPatchId CreatePatch(enum class ESynth1PatchSource InPatchSource, TArray<struct FSynth1PatchCable>& InPatchCables, bool InbEnableByDefault);
};

// 0x1C8 (0x230 - 0x68)
// Class Synthesis.SourceEffectBitCrusherPreset
class USourceEffectBitCrusherPreset : public USoundEffectSourcePreset
{
public:
	uint8                                        Pad_2176[0xF8];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSourceEffectBitCrusherSettings       Settings;                                          // 0x160(0xD0)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SourceEffectBitCrusherPreset");
		return Clss;
	}

	void SetSettings(struct FSourceEffectBitCrusherBaseSettings& InSettings);
	void SetSampleRateModulators(TSet<class USoundModulatorBase*>& InInModulators);
	void SetSampleRateModulator(class USoundModulatorBase* InModulator);
	void SetSampleRate(float InSampleRate);
	void SetModulationSettings(struct FSourceEffectBitCrusherSettings& InModulationSettings);
	void SetBits(float InBits);
	void SetBitModulators(TSet<class USoundModulatorBase*>& InInModulators);
	void SetBitModulator(class USoundModulatorBase* InModulator);
};

// 0x4D8 (0x540 - 0x68)
// Class Synthesis.SourceEffectChorusPreset
class USourceEffectChorusPreset : public USoundEffectSourcePreset
{
public:
	uint8                                        Pad_21E6[0x280];                                   // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSourceEffectChorusSettings           Settings;                                          // 0x2E8(0x258)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SourceEffectChorusPreset");
		return Clss;
	}

	void SetWetModulators(TSet<class USoundModulatorBase*>& InModulators);
	void SetWetModulator(class USoundModulatorBase* InModulator);
	void SetWet(float InWetAmount);
	void SetSpreadModulators(TSet<class USoundModulatorBase*>& InModulators);
	void SetSpreadModulator(class USoundModulatorBase* InModulator);
	void SetSpread(float InSpread);
	void SetSettings(struct FSourceEffectChorusBaseSettings& InSettings);
	void SetModulationSettings(struct FSourceEffectChorusSettings& InModulationSettings);
	void SetFrequencyModulators(TSet<class USoundModulatorBase*>& InModulators);
	void SetFrequencyModulator(class USoundModulatorBase* InModulator);
	void SetFrequency(float InFrequency);
	void SetFeedbackModulators(TSet<class USoundModulatorBase*>& InModulators);
	void SetFeedbackModulator(class USoundModulatorBase* InModulator);
	void SetFeedback(float InFeedback);
	void SetDryModulators(TSet<class USoundModulatorBase*>& InModulators);
	void SetDryModulator(class USoundModulatorBase* InModulator);
	void SetDry(float InDryAmount);
	void SetDepthModulators(TSet<class USoundModulatorBase*>& InModulators);
	void SetDepthModulator(class USoundModulatorBase* InModulator);
	void SetDepth(float InDepth);
};

// 0x58 (0xC0 - 0x68)
// Class Synthesis.SourceEffectConvolutionReverbPreset
class USourceEffectConvolutionReverbPreset : public USoundEffectSourcePreset
{
public:
	class UAudioImpulseResponse*                 ImpulseResponse;                                   // 0x68(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSourceEffectConvolutionReverbSettings Settings;                                          // 0x70(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	enum class ESubmixEffectConvolutionReverbBlockSize BlockSize;                                         // 0x80(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableHardwareAcceleration;                       // 0x81(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2217[0x3E];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SourceEffectConvolutionReverbPreset");
		return Clss;
	}

	void SetSettings(struct FSourceEffectConvolutionReverbSettings& InInSettings);
	void SetImpulseResponse(class UAudioImpulseResponse* InInImpulseResponse);
};

// 0x78 (0xE0 - 0x68)
// Class Synthesis.SourceEffectDynamicsProcessorPreset
class USourceEffectDynamicsProcessorPreset : public USoundEffectSourcePreset
{
public:
	uint8                                        Pad_221B[0x50];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSourceEffectDynamicsProcessorSettings Settings;                                          // 0xB8(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SourceEffectDynamicsProcessorPreset");
		return Clss;
	}

	void SetSettings(struct FSourceEffectDynamicsProcessorSettings& InInSettings);
};

// 0x20 (0xC0 - 0xA0)
// Class Synthesis.EnvelopeFollowerListener
class UEnvelopeFollowerListener : public UActorComponent
{
public:
	FMulticastInlineDelegateProperty_            OnEnvelopeFollowerUpdate;                          // 0xA0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_221C[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("EnvelopeFollowerListener");
		return Clss;
	}

};

// 0x40 (0xA8 - 0x68)
// Class Synthesis.SourceEffectEnvelopeFollowerPreset
class USourceEffectEnvelopeFollowerPreset : public USoundEffectSourcePreset
{
public:
	uint8                                        Pad_2227[0x34];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSourceEffectEnvelopeFollowerSettings Settings;                                          // 0x9C(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SourceEffectEnvelopeFollowerPreset");
		return Clss;
	}

	void UnregisterEnvelopeFollowerListener(class UEnvelopeFollowerListener* InEnvelopeFollowerListener);
	void SetSettings(struct FSourceEffectEnvelopeFollowerSettings& InInSettings);
	void RegisterEnvelopeFollowerListener(class UEnvelopeFollowerListener* InEnvelopeFollowerListener);
};

// 0x48 (0xB0 - 0x68)
// Class Synthesis.SourceEffectEQPreset
class USourceEffectEQPreset : public USoundEffectSourcePreset
{
public:
	uint8                                        Pad_222F[0x38];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSourceEffectEQSettings               Settings;                                          // 0xA0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SourceEffectEQPreset");
		return Clss;
	}

	void SetSettings(struct FSourceEffectEQSettings& InInSettings);
};

// 0x68 (0xD0 - 0x68)
// Class Synthesis.SourceEffectFilterPreset
class USourceEffectFilterPreset : public USoundEffectSourcePreset
{
public:
	uint8                                        Pad_2236[0x48];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSourceEffectFilterSettings           Settings;                                          // 0xB0(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SourceEffectFilterPreset");
		return Clss;
	}

	void SetSettings(struct FSourceEffectFilterSettings& InInSettings);
};

// 0x40 (0xA8 - 0x68)
// Class Synthesis.SourceEffectFoldbackDistortionPreset
class USourceEffectFoldbackDistortionPreset : public USoundEffectSourcePreset
{
public:
	uint8                                        Pad_223E[0x34];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSourceEffectFoldbackDistortionSettings Settings;                                          // 0x9C(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SourceEffectFoldbackDistortionPreset");
		return Clss;
	}

	void SetSettings(struct FSourceEffectFoldbackDistortionSettings& InInSettings);
};

// 0x38 (0xA0 - 0x68)
// Class Synthesis.SourceEffectMidSideSpreaderPreset
class USourceEffectMidSideSpreaderPreset : public USoundEffectSourcePreset
{
public:
	uint8                                        Pad_2241[0x30];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSourceEffectMidSideSpreaderSettings  Settings;                                          // 0x98(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SourceEffectMidSideSpreaderPreset");
		return Clss;
	}

	void SetSettings(struct FSourceEffectMidSideSpreaderSettings& InInSettings);
};

// 0x118 (0x180 - 0x68)
// Class Synthesis.SourceEffectMotionFilterPreset
class USourceEffectMotionFilterPreset : public USoundEffectSourcePreset
{
public:
	uint8                                        Pad_2242[0xA0];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSourceEffectMotionFilterSettings     Settings;                                          // 0x108(0x78)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SourceEffectMotionFilterPreset");
		return Clss;
	}

	void SetSettings(struct FSourceEffectMotionFilterSettings& InInSettings);
};

// 0x38 (0xA0 - 0x68)
// Class Synthesis.SourceEffectPannerPreset
class USourceEffectPannerPreset : public USoundEffectSourcePreset
{
public:
	uint8                                        Pad_2248[0x30];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSourceEffectPannerSettings           Settings;                                          // 0x98(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SourceEffectPannerPreset");
		return Clss;
	}

	void SetSettings(struct FSourceEffectPannerSettings& InInSettings);
};

// 0x48 (0xB0 - 0x68)
// Class Synthesis.SourceEffectPhaserPreset
class USourceEffectPhaserPreset : public USoundEffectSourcePreset
{
public:
	uint8                                        Pad_224D[0x38];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSourceEffectPhaserSettings           Settings;                                          // 0xA0(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SourceEffectPhaserPreset");
		return Clss;
	}

	void SetSettings(struct FSourceEffectPhaserSettings& InInSettings);
};

// 0x68 (0xD0 - 0x68)
// Class Synthesis.SourceEffectRingModulationPreset
class USourceEffectRingModulationPreset : public USoundEffectSourcePreset
{
public:
	uint8                                        Pad_2256[0x48];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSourceEffectRingModulationSettings   Settings;                                          // 0xB0(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SourceEffectRingModulationPreset");
		return Clss;
	}

	void SetSettings(struct FSourceEffectRingModulationSettings& InInSettings);
};

// 0x58 (0xC0 - 0x68)
// Class Synthesis.SourceEffectSimpleDelayPreset
class USourceEffectSimpleDelayPreset : public USoundEffectSourcePreset
{
public:
	uint8                                        Pad_225B[0x40];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSourceEffectSimpleDelaySettings      Settings;                                          // 0xA8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SourceEffectSimpleDelayPreset");
		return Clss;
	}

	void SetSettings(struct FSourceEffectSimpleDelaySettings& InInSettings);
};

// 0x70 (0xD8 - 0x68)
// Class Synthesis.SourceEffectStereoDelayPreset
class USourceEffectStereoDelayPreset : public USoundEffectSourcePreset
{
public:
	uint8                                        Pad_225F[0x4C];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSourceEffectStereoDelaySettings      Settings;                                          // 0xB4(0x24)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SourceEffectStereoDelayPreset");
		return Clss;
	}

	void SetSettings(struct FSourceEffectStereoDelaySettings& InInSettings);
};

// 0x38 (0xA0 - 0x68)
// Class Synthesis.SourceEffectWaveShaperPreset
class USourceEffectWaveShaperPreset : public USoundEffectSourcePreset
{
public:
	uint8                                        Pad_2264[0x30];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSourceEffectWaveShaperSettings       Settings;                                          // 0x98(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SourceEffectWaveShaperPreset");
		return Clss;
	}

	void SetSettings(struct FSourceEffectWaveShaperSettings& InInSettings);
};

// 0x98 (0x100 - 0x68)
// Class Synthesis.SubmixEffectConvolutionReverbPreset
class USubmixEffectConvolutionReverbPreset : public USoundEffectSubmixPreset
{
public:
	class UAudioImpulseResponse*                 ImpulseResponse;                                   // 0x68(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSubmixEffectConvolutionReverbSettings Settings;                                          // 0x70(0x30)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	enum class ESubmixEffectConvolutionReverbBlockSize BlockSize;                                         // 0xA0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableHardwareAcceleration;                       // 0xA1(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_226C[0x5E];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SubmixEffectConvolutionReverbPreset");
		return Clss;
	}

	void SetSettings(struct FSubmixEffectConvolutionReverbSettings& InInSettings);
	void SetImpulseResponse(class UAudioImpulseResponse* InInImpulseResponse);
};

// 0x0 (0x28 - 0x28)
// Class Synthesis.SubmixEffectDelayStatics
class USubmixEffectDelayStatics : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SubmixEffectDelayStatics");
		return Clss;
	}

	struct FSubmixEffectDelaySettings SetMaximumDelayLength(struct FSubmixEffectDelaySettings& InDelaySettings, float InMaximumDelayLength);
	struct FSubmixEffectDelaySettings SetInterpolationTime(struct FSubmixEffectDelaySettings& InDelaySettings, float InInterpolationTime);
	struct FSubmixEffectDelaySettings SetDelayLength(struct FSubmixEffectDelaySettings& InDelaySettings, float InDelayLength);
};

// 0x50 (0xB8 - 0x68)
// Class Synthesis.SubmixEffectDelayPreset
class USubmixEffectDelayPreset : public USoundEffectSubmixPreset
{
public:
	uint8                                        Pad_2294[0x34];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSubmixEffectDelaySettings            Settings;                                          // 0x9C(0xC)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FSubmixEffectDelaySettings            DynamicSettings;                                   // 0xA8(0xC)(Transient, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_2296[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SubmixEffectDelayPreset");
		return Clss;
	}

	void SetSettings(struct FSubmixEffectDelaySettings& InInSettings);
	void SetInterpolationTime(float InTime);
	void SetDelay(float InLength);
	void SetDefaultSettings(struct FSubmixEffectDelaySettings& InInSettings);
	float GetMaxDelayInMilliseconds();
};

// 0x40 (0xA8 - 0x68)
// Class Synthesis.SubmixEffectFilterPreset
class USubmixEffectFilterPreset : public USoundEffectSubmixPreset
{
public:
	uint8                                        Pad_22B5[0x34];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSubmixEffectFilterSettings           Settings;                                          // 0x9C(0xC)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SubmixEffectFilterPreset");
		return Clss;
	}

	void SetSettings(struct FSubmixEffectFilterSettings& InInSettings);
	void SetFilterType(enum class ESubmixFilterType InInType);
	void SetFilterQMod(float InInQ);
	void SetFilterQ(float InInQ);
	void SetFilterCutoffFrequencyMod(float InInFrequency);
	void SetFilterCutoffFrequency(float InInFrequency);
	void SetFilterAlgorithm(enum class ESubmixFilterAlgorithm InInAlgorithm);
};

// 0x48 (0xB0 - 0x68)
// Class Synthesis.SubmixEffectFlexiverbPreset
class USubmixEffectFlexiverbPreset : public USoundEffectSubmixPreset
{
public:
	uint8                                        Pad_22BA[0x38];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSubmixEffectFlexiverbSettings        Settings;                                          // 0xA0(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SubmixEffectFlexiverbPreset");
		return Clss;
	}

	void SetSettings(struct FSubmixEffectFlexiverbSettings& InInSettings);
};

// 0x98 (0x100 - 0x68)
// Class Synthesis.SubmixEffectMultibandCompressorPreset
class USubmixEffectMultibandCompressorPreset : public USoundEffectSubmixPreset
{
public:
	uint8                                        Pad_22CB[0x60];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSubmixEffectMultibandCompressorSettings Settings;                                          // 0xC8(0x38)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SubmixEffectMultibandCompressorPreset");
		return Clss;
	}

	void SetSettings(struct FSubmixEffectMultibandCompressorSettings& InInSettings);
	void SetExternalSubmix(class USoundSubmix* InSubmix);
	void SetAudioBus(class UAudioBus* InAudioBus);
	void ResetKey();
};

// 0x70 (0xD8 - 0x68)
// Class Synthesis.SubmixEffectStereoDelayPreset
class USubmixEffectStereoDelayPreset : public USoundEffectSubmixPreset
{
public:
	uint8                                        Pad_22D1[0x4C];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSubmixEffectStereoDelaySettings      Settings;                                          // 0xB4(0x24)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SubmixEffectStereoDelayPreset");
		return Clss;
	}

	void SetSettings(struct FSubmixEffectStereoDelaySettings& InInSettings);
};

// 0x70 (0xD8 - 0x68)
// Class Synthesis.SubmixEffectTapDelayPreset
class USubmixEffectTapDelayPreset : public USoundEffectSubmixPreset
{
public:
	uint8                                        Pad_22E6[0x40];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSubmixEffectTapDelaySettings         Settings;                                          // 0xA8(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	uint8                                        Pad_22E7[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SubmixEffectTapDelayPreset");
		return Clss;
	}

	void SetTap(int32 InTapId, struct FTapDelayInfo& InTapInfo);
	void SetSettings(struct FSubmixEffectTapDelaySettings& InInSettings);
	void SetInterpolationTime(float InTime);
	void RemoveTap(int32 InTapId);
	void GetTapIds(TArray<int32>* InTapIds);
	void GetTap(int32 InTapId, struct FTapDelayInfo* InTapInfo);
	float GetMaxDelayInMilliseconds();
	void AddTap(int32* InTapId);
};

// 0x3E0 (0xB70 - 0x790)
// Class Synthesis.GranularSynth
class UGranularSynth : public USynthComponent
{
public:
	class USoundWave*                            GranulatedSoundWave;                               // 0x790(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2365[0x3D8];                                   // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GranularSynth");
		return Clss;
	}

	void SetSustainGain(float InSustainGain);
	void SetSoundWave(class USoundWave* InInSoundWave);
	void SetScrubMode(bool InbScrubMode);
	void SetReleaseTimeMsec(float InReleaseTimeMsec);
	void SetPlayheadTime(float InInPositionSec, float InLerpTimeSec, enum class EGranularSynthSeekType InSeekType);
	void SetPlaybackSpeed(float InInPlayheadRate);
	void SetGrainVolume(float InBaseVolume, const struct FVector2D& InVolumeRange);
	void SetGrainsPerSecond(float InInGrainsPerSecond);
	void SetGrainProbability(float InInGrainProbability);
	void SetGrainPitch(float InBasePitch, const struct FVector2D& InPitchRange);
	void SetGrainPan(float InBasePan, const struct FVector2D& InPanRange);
	void SetGrainEnvelopeType(enum class EGranularSynthEnvelopeType InEnvelopeType);
	void SetGrainDuration(float InBaseDurationMsec, const struct FVector2D& InDurationRange);
	void SetDecayTime(float InDecayTimeMsec);
	void SetAttackTime(float InAttackTimeMsec);
	void NoteOn(float InNote, int32 InVelocity, float InDuration);
	void NoteOff(float InNote, bool InbKill);
	bool IsLoaded();
	float GetSampleDuration();
	float GetCurrentPlayheadTime();
};

// 0x148 (0x170 - 0x28)
// Class Synthesis.MonoWaveTableSynthPreset
class UMonoWaveTableSynthPreset : public UObject
{
public:
	class FString                                PresetName;                                        // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bLockKeyframesToGridBool : 1;                      // Mask: 0x1, PropSize: 0x10x38(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_16F : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_2372[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        LockKeyframesToGrid;                               // 0x3C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        WaveTableResolution;                               // 0x40(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2374[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FRuntimeFloatCurve>            WaveTable;                                         // 0x48(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NonTransactional, NativeAccessSpecifierPublic)
	uint8                                        bNormalizeWaveTables : 1;                          // Mask: 0x1, PropSize: 0x10x58(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2375[0x117];                                   // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MonoWaveTableSynthPreset");
		return Clss;
	}

};

// 0x750 (0xEE0 - 0x790)
// Class Synthesis.SynthComponentMonoWaveTable
class USynthComponentMonoWaveTable : public USynthComponent
{
public:
	FMulticastInlineDelegateProperty_            OnTableAltered;                                    // 0x790(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnNumTablesChanged;                                // 0x7A0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UMonoWaveTableSynthPreset*             CurrentPreset;                                     // 0x7B0(0x8)(Edit, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_246E[0x728];                                   // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SynthComponentMonoWaveTable");
		return Clss;
	}

	void SetWaveTablePosition(float InInPosition);
	void SetSustainPedalState(bool InInSustainPedalState);
	void SetPosLfoType(enum class ESynthLFOType InInLfoType);
	void SetPosLfoFrequency(float InInLfoFrequency);
	void SetPosLfoDepth(float InInLfoDepth);
	void SetPositionEnvelopeSustainGain(float InInSustainGain);
	void SetPositionEnvelopeReleaseTime(float InInReleaseTimeMsec);
	void SetPositionEnvelopeInvert(bool InbInInvert);
	void SetPositionEnvelopeDepth(float InInDepth);
	void SetPositionEnvelopeDecayTime(float InInDecayTimeMsec);
	void SetPositionEnvelopeBiasInvert(bool InbInBiasInvert);
	void SetPositionEnvelopeBiasDepth(float InInDepth);
	void SetPositionEnvelopeAttackTime(float InInAttackTimeMsec);
	void SetLowPassFilterResonance(float InInNewQ);
	void SetFrequencyWithMidiNote(float InInMidiNote);
	void SetFrequencyPitchBend(float InFrequencyOffsetCents);
	void SetFrequency(float InFrequencyHz);
	void SetFilterEnvelopeSustainGain(float InInSustainGain);
	void SetFilterEnvelopeReleaseTime(float InInReleaseTimeMsec);
	void SetFilterEnvelopenDecayTime(float InInDecayTimeMsec);
	void SetFilterEnvelopeInvert(bool InbInInvert);
	void SetFilterEnvelopeDepth(float InInDepth);
	void SetFilterEnvelopeBiasInvert(bool InbInBiasInvert);
	void SetFilterEnvelopeBiasDepth(float InInDepth);
	void SetFilterEnvelopeAttackTime(float InInAttackTimeMsec);
	bool SetCurveValue(int32 InTableIndex, int32 InKeyframeIndex, float InNewValue);
	bool SetCurveTangent(int32 InTableIndex, float InInNewTangent);
	bool SetCurveInterpolationType(enum class ECurveInterpolationType InInterpolationType, int32 InTableIndex);
	void SetAmpEnvelopeSustainGain(float InInSustainGain);
	void SetAmpEnvelopeReleaseTime(float InInReleaseTimeMsec);
	void SetAmpEnvelopeInvert(bool InbInInvert);
	void SetAmpEnvelopeDepth(float InInDepth);
	void SetAmpEnvelopeDecayTime(float InInDecayTimeMsec);
	void SetAmpEnvelopeBiasInvert(bool InbInBiasInvert);
	void SetAmpEnvelopeBiasDepth(float InInDepth);
	void SetAmpEnvelopeAttackTime(float InInAttackTimeMsec);
	void RefreshWaveTable(int32 InIndex);
	void RefreshAllWaveTables();
	void NoteOn(float InInMidiNote, float InInVelocity);
	void NoteOff(float InInMidiNote);
	int32 GetNumTableEntries();
	int32 GetMaxTableIndex();
	TArray<float> GetKeyFrameValuesForTable(float InTableIndex);
	float GetCurveTangent(int32 InTableIndex);
};

// 0xF0 (0x880 - 0x790)
// Class Synthesis.SynthComponentToneGenerator
class USynthComponentToneGenerator : public USynthComponent
{
public:
	float                                        Frequency;                                         // 0x790(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Volume;                                            // 0x794(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRuntimeFloatCurve                    DistanceAttenuationCurve;                          // 0x798(0x88)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FVector2D                             DistanceRange;                                     // 0x820(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AttenuationDbAtMaxRange;                           // 0x830(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_24A1[0x4C];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SynthComponentToneGenerator");
		return Clss;
	}

	void SetVolume(float InInVolume);
	void SetFrequency(float InInFrequency);
};

// 0x130 (0x8C0 - 0x790)
// Class Synthesis.SynthSamplePlayer
class USynthSamplePlayer : public USynthComponent
{
public:
	class USoundWave*                            SoundWave;                                         // 0x790(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnSampleLoaded;                                    // 0x798(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnSamplePlaybackProgress;                          // 0x7A8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_24C6[0x108];                                   // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SynthSamplePlayer");
		return Clss;
	}

	void SetSoundWave(class USoundWave* InInSoundWave);
	void SetScrubTimeWidth(float InInScrubTimeWidthSec);
	void SetScrubMode(bool InbScrubMode);
	void SetPitch(float InInPitch, float InTimeSec);
	void SeekToTime(float InTimeSec, enum class ESamplePlayerSeekType InSeekType, bool InbWrap);
	bool IsLoaded();
	float GetSampleDuration();
	float GetCurrentPlaybackProgressTime();
	float GetCurrentPlaybackProgressPercent();
};

// 0x0 (0x28 - 0x28)
// Class Synthesis.SynthesisUtilitiesBlueprintFunctionLibrary
class USynthesisUtilitiesBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SynthesisUtilitiesBlueprintFunctionLibrary");
		return Clss;
	}

	float GetLogFrequency(float InInLinearValue, float InInDomainMin, float InInDomainMax, float InInRangeMin, float InInRangeMax);
	float GetLinearFrequency(float InInLogFrequencyValue, float InInDomainMin, float InInDomainMax, float InInRangeMin, float InInRangeMax);
};

// 0x4F0 (0x640 - 0x150)
// Class Synthesis.Synth2DSlider
class USynth2DSlider : public UWidget
{
public:
	float                                        ValueX;                                            // 0x150(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ValueY;                                            // 0x154(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           ValueXDelegate;                                    // 0x158(0x10)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           ValueYDelegate;                                    // 0x168(0x10)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2506[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSynth2DSliderStyle                   WidgetStyle;                                       // 0x180(0x430)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FLinearColor                          SliderHandleColor;                                 // 0x5B0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IndentHandle;                                      // 0x5C0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Locked;                                            // 0x5C1(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2509[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        StepSize;                                          // 0x5C4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsFocusable;                                       // 0x5C8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_250B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnMouseCaptureBegin;                               // 0x5D0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnMouseCaptureEnd;                                 // 0x5E0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnControllerCaptureBegin;                          // 0x5F0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnControllerCaptureEnd;                            // 0x600(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnValueChangedX;                                   // 0x610(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnValueChangedY;                                   // 0x620(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_250E[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Synth2DSlider");
		return Clss;
	}

	void SetValue(const struct FVector2D& InInValue);
	void SetStepSize(float InInValue);
	void SetSliderHandleColor(const struct FLinearColor& InInValue);
	void SetLocked(bool InInValue);
	void SetIndentHandle(bool InInValue);
	struct FVector2D GetValue();
};

// 0x430 (0x580 - 0x150)
// Class Synthesis.SynthKnob
class USynthKnob : public UWidget
{
public:
	float                                        Value;                                             // 0x150(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StepSize;                                          // 0x154(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MouseSpeed;                                        // 0x158(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MouseFineTuneSpeed;                                // 0x15C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        ShowTooltipInfo : 1;                               // Mask: 0x1, PropSize: 0x10x160(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_182 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_251D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  ParameterName;                                     // 0x168(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  ParameterUnits;                                    // 0x180(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	FDelegateProperty_                           ValueDelegate;                                     // 0x198(0x10)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_251F[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSynthKnobStyle                       WidgetStyle;                                       // 0x1B0(0x360)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                         Locked;                                            // 0x510(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsFocusable;                                       // 0x511(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2521[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnMouseCaptureBegin;                               // 0x518(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnMouseCaptureEnd;                                 // 0x528(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnControllerCaptureBegin;                          // 0x538(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnControllerCaptureEnd;                            // 0x548(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnValueChanged;                                    // 0x558(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_2523[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SynthKnob");
		return Clss;
	}

	void SetValue(float InInValue);
	void SetStepSize(float InInValue);
	void SetLocked(bool InInValue);
	float GetValue();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
