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

// 0x4F0 (0x790 - 0x2A0)
// Class AudioMixer.SynthComponent
class USynthComponent : public USceneComponent
{
public:
	uint8                                        bAutoDestroy : 1;                                  // Mask: 0x1, PropSize: 0x10x2A0(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bStopWhenOwnerDestroyed : 1;                       // Mask: 0x2, PropSize: 0x10x2A0(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAllowSpatialization : 1;                          // Mask: 0x4, PropSize: 0x10x2A0(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverrideAttenuation : 1;                          // Mask: 0x8, PropSize: 0x10x2A0(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_0 : 4;                                      // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_39[0x3];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        bEnableBusSends : 1;                               // Mask: 0x1, PropSize: 0x10x2A4(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bEnableBaseSubmix : 1;                             // Mask: 0x2, PropSize: 0x10x2A4(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bEnableSubmixSends : 1;                            // Mask: 0x4, PropSize: 0x10x2A4(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_1 : 5;                                      // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_3B[0x3];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundAttenuation*                     AttenuationSettings;                               // 0x2A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSoundAttenuationSettings             AttenuationOverrides;                              // 0x2B0(0x3C8)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class USoundConcurrency*                     ConcurrencySettings;                               // 0x678(0x8)(ZeroConstructor, Deprecated, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSet<class USoundConcurrency*>               ConcurrencySet;                                    // 0x680(0x50)(Edit, BlueprintVisible, UObjectWrapper, NativeAccessSpecifierPublic)
	class USoundClass*                           SoundClass;                                        // 0x6D0(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundEffectSourcePresetChain*         SourceEffectChain;                                 // 0x6D8(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundSubmixBase*                      SoundSubmix;                                       // 0x6E0(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FSoundSubmixSendInfo>          SoundSubmixSends;                                  // 0x6E8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FSoundSourceBusSendInfo>       BusSends;                                          // 0x6F8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FSoundSourceBusSendInfo>       PreEffectBusSends;                                 // 0x708(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        bIsUISound : 1;                                    // Mask: 0x1, PropSize: 0x10x718(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bIsPreviewSound : 1;                               // Mask: 0x2, PropSize: 0x10x718(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_2 : 6;                                      // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_40[0x3];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        EnvelopeFollowerAttackTime;                        // 0x71C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        EnvelopeFollowerReleaseTime;                       // 0x720(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_42[0x4];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnAudioEnvelopeValue;                              // 0x728(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_44[0x20];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class USynthSound*                           Synth;                                             // 0x758(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UAudioComponent*                       AudioComponent;                                    // 0x760(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_47[0x28];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SynthComponent");
		return Clss;
	}

	void Stop();
	void Start();
	void SetVolumeMultiplier(float InVolumeMultiplier);
	void SetSubmixSend(class USoundSubmixBase* InSubmix, float InSendLevel);
	void SetOutputToBusOnly(bool InbInOutputToBusOnly);
	void SetLowPassFilterFrequency(float InInLowPassFilterFrequency);
	void SetLowPassFilterEnabled(bool InInLowPassFilterEnabled);
	bool IsPlaying();
	void FadeOut(float InFadeOutDuration, float InFadeVolumeLevel, enum class EAudioFaderCurve InFadeCurve);
	void FadeIn(float InFadeInDuration, float InFadeVolumeLevel, float InStartTime, enum class EAudioFaderCurve InFadeCurve);
	void AdjustVolume(float InAdjustVolumeDuration, float InAdjustVolumeLevel, enum class EAudioFaderCurve InFadeCurve);
};

// 0x80 (0xA8 - 0x28)
// Class AudioMixer.AudioGenerator
class UAudioGenerator : public UObject
{
public:
	uint8                                        Pad_4C[0x80];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AudioGenerator");
		return Clss;
	}

};

// 0xF8 (0x128 - 0x30)
// Class AudioMixer.AudioDeviceNotificationSubsystem
class UAudioDeviceNotificationSubsystem : public UEngineSubsystem
{
public:
	uint8                                        Pad_4D[0x8];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            DefaultCaptureDeviceChanged;                       // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_4E[0x18];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            DefaultRenderDeviceChanged;                        // 0x60(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_4F[0x18];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            DeviceAdded;                                       // 0x88(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_50[0x18];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            DeviceRemoved;                                     // 0xB0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_51[0x18];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            DeviceStateChanged;                                // 0xD8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_52[0x18];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            DeviceSwitched;                                    // 0x100(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_53[0x18];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AudioDeviceNotificationSubsystem");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class AudioMixer.AudioMixerBlueprintLibrary
class UAudioMixerBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AudioMixerBlueprintLibrary");
		return Clss;
	}

	float TrimAudioCache(float InInMegabytesToFree);
	void SwapAudioOutputDevice(class UObject* InWorldContextObject, const class FString& InNewDeviceId, FDelegateProperty_& InOnCompletedDeviceSwap);
	class USoundWave* StopRecordingOutput(class UObject* InWorldContextObject, enum class EAudioRecordingExportType InExportType, const class FString& InName, const class FString& InPath, class USoundSubmix* InSubmixToRecord, class USoundWave* InExistingSoundWaveToOverwrite);
	void StopAudioBus(class UObject* InWorldContextObject, class UAudioBus* InAudioBus);
	void StopAnalyzingOutput(class UObject* InWorldContextObject, class USoundSubmix* InSubmixToStopAnalyzing);
	void StartRecordingOutput(class UObject* InWorldContextObject, float InExpectedDuration, class USoundSubmix* InSubmixToRecord);
	void StartAudioBus(class UObject* InWorldContextObject, class UAudioBus* InAudioBus);
	void StartAnalyzingOutput(class UObject* InWorldContextObject, class USoundSubmix* InSubmixToAnalyze, enum class EFFTSize InFFTSize, enum class EFFTPeakInterpolationMethod InInterpolationMethod, enum class EFFTWindowType InWindowType, float InHopSize, enum class EAudioSpectrumType InSpectrumType);
	void SetSubmixEffectChainOverride(class UObject* InWorldContextObject, class USoundSubmix* InSoundSubmix, const TArray<class USoundEffectSubmixPreset*>& InSubmixEffectPresetChain, float InFadeTimeSec);
	void SetBypassSourceEffectChainEntry(class UObject* InWorldContextObject, class USoundEffectSourcePresetChain* InPresetChain, int32 InEntryIndex, bool InbBypassed);
	void ResumeRecordingOutput(class UObject* InWorldContextObject, class USoundSubmix* InSubmixToPause);
	void ReplaceSubmixEffect(class UObject* InWorldContextObject, class USoundSubmix* InInSoundSubmix, int32 InSubmixChainIndex, class USoundEffectSubmixPreset* InSubmixEffectPreset);
	void ReplaceSoundEffectSubmix(class UObject* InWorldContextObject, class USoundSubmix* InInSoundSubmix, int32 InSubmixChainIndex, class USoundEffectSubmixPreset* InSubmixEffectPreset);
	void RemoveSubmixEffectPresetAtIndex(class UObject* InWorldContextObject, class USoundSubmix* InSoundSubmix, int32 InSubmixChainIndex);
	void RemoveSubmixEffectPreset(class UObject* InWorldContextObject, class USoundSubmix* InSoundSubmix, class USoundEffectSubmixPreset* InSubmixEffectPreset);
	void RemoveSubmixEffectAtIndex(class UObject* InWorldContextObject, class USoundSubmix* InSoundSubmix, int32 InSubmixChainIndex);
	void RemoveSubmixEffect(class UObject* InWorldContextObject, class USoundSubmix* InSoundSubmix, class USoundEffectSubmixPreset* InSubmixEffectPreset);
	void RemoveSourceEffectFromPresetChain(class UObject* InWorldContextObject, class USoundEffectSourcePresetChain* InPresetChain, int32 InEntryIndex);
	void RemoveMasterSubmixEffect(class UObject* InWorldContextObject, class USoundEffectSubmixPreset* InSubmixEffectPreset);
	void PrimeSoundForPlayback(class USoundWave* InSoundWave, FDelegateProperty_ InOnLoadCompletion);
	void PrimeSoundCueForPlayback(class USoundCue* InSoundCue);
	void PauseRecordingOutput(class UObject* InWorldContextObject, class USoundSubmix* InSubmixToPause);
	TArray<struct FSoundSubmixSpectralAnalysisBandSettings> MakePresetSpectralAnalysisBandSettings(enum class EAudioSpectrumBandPresetType InInBandPresetType, int32 InInNumBands, int32 InInAttackTimeMsec, int32 InInReleaseTimeMsec);
	TArray<struct FSoundSubmixSpectralAnalysisBandSettings> MakeMusicalSpectralAnalysisBandSettings(int32 InInNumSemitones, enum class EMusicalNoteName InInStartingMusicalNote, int32 InInStartingOctave, int32 InInAttackTimeMsec, int32 InInReleaseTimeMsec);
	TArray<struct FSoundSubmixSpectralAnalysisBandSettings> MakeFullSpectrumSpectralAnalysisBandSettings(int32 InInNumBands, float InInMinimumFrequency, float InInMaximumFrequency, int32 InInAttackTimeMsec, int32 InInReleaseTimeMsec);
	bool IsAudioBusActive(class UObject* InWorldContextObject, class UAudioBus* InAudioBus);
	void GetPhaseForFrequencies(class UObject* InWorldContextObject, TArray<float>& InFrequencies, TArray<float>* InPhases, class USoundSubmix* InSubmixToAnalyze);
	int32 GetNumberOfEntriesInSourceEffectChain(class UObject* InWorldContextObject, class USoundEffectSourcePresetChain* InPresetChain);
	void GetMagnitudeForFrequencies(class UObject* InWorldContextObject, TArray<float>& InFrequencies, TArray<float>* InMagnitudes, class USoundSubmix* InSubmixToAnalyze);
	void GetCurrentAudioOutputDeviceName(class UObject* InWorldContextObject, FDelegateProperty_& InOnObtainCurrentDeviceEvent);
	void GetAvailableAudioOutputDevices(class UObject* InWorldContextObject, FDelegateProperty_& InOnObtainDevicesEvent);
	class FString Conv_AudioOutputDeviceInfoToString(struct FAudioOutputDeviceInfo& InInfo);
	void ClearSubmixEffects(class UObject* InWorldContextObject, class USoundSubmix* InSoundSubmix);
	void ClearSubmixEffectChainOverride(class UObject* InWorldContextObject, class USoundSubmix* InSoundSubmix, float InFadeTimeSec);
	void ClearMasterSubmixEffects(class UObject* InWorldContextObject);
	int32 AddSubmixEffect(class UObject* InWorldContextObject, class USoundSubmix* InSoundSubmix, class USoundEffectSubmixPreset* InSubmixEffectPreset);
	void AddSourceEffectToPresetChain(class UObject* InWorldContextObject, class USoundEffectSourcePresetChain* InPresetChain, const struct FSourceEffectChainEntry& InEntry);
	void AddMasterSubmixEffect(class UObject* InWorldContextObject, class USoundEffectSubmixPreset* InSubmixEffectPreset);
};

// 0x20 (0x4C0 - 0x4A0)
// Class AudioMixer.SynthSound
class USynthSound : public USoundWaveProcedural
{
public:
	TWeakObjectPtr<class USynthComponent>        OwningSynthComponent;                              // 0x4A0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_9E[0x18];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SynthSound");
		return Clss;
	}

};

// 0xE8 (0x150 - 0x68)
// Class AudioMixer.SubmixEffectDynamicsProcessorPreset
class USubmixEffectDynamicsProcessorPreset : public USoundEffectSubmixPreset
{
public:
	uint8                                        Pad_9F[0x88];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSubmixEffectDynamicsProcessorSettings Settings;                                          // 0xF0(0x60)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SubmixEffectDynamicsProcessorPreset");
		return Clss;
	}

	void SetSettings(struct FSubmixEffectDynamicsProcessorSettings& InSettings);
	void SetExternalSubmix(class USoundSubmix* InSubmix);
	void SetAudioBus(class UAudioBus* InAudioBus);
	void ResetKey();
};

// 0x48 (0xB0 - 0x68)
// Class AudioMixer.SubmixEffectSubmixEQPreset
class USubmixEffectSubmixEQPreset : public USoundEffectSubmixPreset
{
public:
	uint8                                        Pad_A0[0x38];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSubmixEffectSubmixEQSettings         Settings;                                          // 0xA0(0x10)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SubmixEffectSubmixEQPreset");
		return Clss;
	}

	void SetSettings(struct FSubmixEffectSubmixEQSettings& InInSettings);
};

// 0xA8 (0x110 - 0x68)
// Class AudioMixer.SubmixEffectReverbPreset
class USubmixEffectReverbPreset : public USoundEffectSubmixPreset
{
public:
	uint8                                        Pad_A1[0x68];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSubmixEffectReverbSettings           Settings;                                          // 0xD0(0x40)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SubmixEffectReverbPreset");
		return Clss;
	}

	void SetSettingsWithReverbEffect(class UReverbEffect* InInReverbEffect, float InWetLevel, float InDryLevel);
	void SetSettings(struct FSubmixEffectReverbSettings& InInSettings);
};

// 0x1C0 (0x1E8 - 0x28)
// Class AudioMixer.QuartzClockHandle
class UQuartzClockHandle : public UObject
{
public:
	uint8                                        Pad_B5[0x1C0];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("QuartzClockHandle");
		return Clss;
	}

	void UnsubscribeFromTimeDivision(class UObject* InWorldContextObject, enum class EQuartzCommandQuantization InInQuantizationBoundary, class UQuartzClockHandle** InClockHandle);
	void UnsubscribeFromAllTimeDivisions(class UObject* InWorldContextObject, class UQuartzClockHandle** InClockHandle);
	void SubscribeToQuantizationEvent(class UObject* InWorldContextObject, enum class EQuartzCommandQuantization InInQuantizationBoundary, FDelegateProperty_& InOnQuantizationEvent, class UQuartzClockHandle** InClockHandle);
	void SubscribeToAllQuantizationEvents(class UObject* InWorldContextObject, FDelegateProperty_& InOnQuantizationEvent, class UQuartzClockHandle** InClockHandle);
	void StopClock(class UObject* InWorldContextObject, bool InCancelPendingEvents, class UQuartzClockHandle** InClockHandle);
	void StartOtherClock(class UObject* InWorldContextObject, class FName InOtherClockName, const struct FQuartzQuantizationBoundary& InInQuantizationBoundary, FDelegateProperty_& InInDelegate);
	void StartClock(class UObject* InWorldContextObject, class UQuartzClockHandle** InClockHandle);
	void SetTicksPerSecond(class UObject* InWorldContextObject, struct FQuartzQuantizationBoundary& InQuantizationBoundary, FDelegateProperty_& InDelegate, class UQuartzClockHandle** InClockHandle, float InTicksPerSecond);
	void SetThirtySecondNotesPerMinute(class UObject* InWorldContextObject, struct FQuartzQuantizationBoundary& InQuantizationBoundary, FDelegateProperty_& InDelegate, class UQuartzClockHandle** InClockHandle, float InThirtySecondsNotesPerMinute);
	void SetSecondsPerTick(class UObject* InWorldContextObject, struct FQuartzQuantizationBoundary& InQuantizationBoundary, FDelegateProperty_& InDelegate, class UQuartzClockHandle** InClockHandle, float InSecondsPerTick);
	void SetMillisecondsPerTick(class UObject* InWorldContextObject, struct FQuartzQuantizationBoundary& InQuantizationBoundary, FDelegateProperty_& InDelegate, class UQuartzClockHandle** InClockHandle, float InMillisecondsPerTick);
	void SetBeatsPerMinute(class UObject* InWorldContextObject, struct FQuartzQuantizationBoundary& InQuantizationBoundary, FDelegateProperty_& InDelegate, class UQuartzClockHandle** InClockHandle, float InBeatsPerMinute);
	void ResumeClock(class UObject* InWorldContextObject, class UQuartzClockHandle** InClockHandle);
	void ResetTransportQuantized(class UObject* InWorldContextObject, const struct FQuartzQuantizationBoundary& InInQuantizationBoundary, FDelegateProperty_& InInDelegate, class UQuartzClockHandle** InClockHandle);
	void ResetTransport(class UObject* InWorldContextObject, FDelegateProperty_& InInDelegate);
	void PauseClock(class UObject* InWorldContextObject, class UQuartzClockHandle** InClockHandle);
	bool IsClockRunning(class UObject* InWorldContextObject);
	float GetTicksPerSecond(class UObject* InWorldContextObject);
	float GetThirtySecondNotesPerMinute(class UObject* InWorldContextObject);
	float GetSecondsPerTick(class UObject* InWorldContextObject);
	float GetMillisecondsPerTick(class UObject* InWorldContextObject);
	float GetEstimatedRunTime(class UObject* InWorldContextObject);
	float GetDurationOfQuantizationTypeInSeconds(class UObject* InWorldContextObject, enum class EQuartzCommandQuantization& InQuantizationType, float InMultiplier);
	struct FQuartzTransportTimeStamp GetCurrentTimestamp(class UObject* InWorldContextObject);
	float GetBeatsPerMinute(class UObject* InWorldContextObject);
};

// 0x20 (0x60 - 0x40)
// Class AudioMixer.QuartzSubsystem
class UQuartzSubsystem : public UTickableWorldSubsystem
{
public:
	uint8                                        Pad_FC[0x20];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("QuartzSubsystem");
		return Clss;
	}

	bool IsQuartzEnabled();
	bool IsClockRunning(class UObject* InWorldContextObject, class FName InClockName);
	float GetRoundTripMinLatency(class UObject* InWorldContextObject);
	float GetRoundTripMaxLatency(class UObject* InWorldContextObject);
	float GetRoundTripAverageLatency(class UObject* InWorldContextObject);
	class UQuartzClockHandle* GetHandleForClock(class UObject* InWorldContextObject, class FName InClockName);
	float GetGameThreadToAudioRenderThreadMinLatency(class UObject* InWorldContextObject);
	float GetGameThreadToAudioRenderThreadMaxLatency(class UObject* InWorldContextObject);
	float GetGameThreadToAudioRenderThreadAverageLatency(class UObject* InWorldContextObject);
	float GetEstimatedClockRunTime(class UObject* InWorldContextObject, class FName& InInClockName);
	float GetDurationOfQuantizationTypeInSeconds(class UObject* InWorldContextObject, class FName InClockName, enum class EQuartzCommandQuantization& InQuantizationType, float InMultiplier);
	struct FQuartzTransportTimeStamp GetCurrentClockTimestamp(class UObject* InWorldContextObject, class FName& InInClockName);
	float GetAudioRenderThreadToGameThreadMinLatency();
	float GetAudioRenderThreadToGameThreadMaxLatency();
	float GetAudioRenderThreadToGameThreadAverageLatency();
	bool DoesClockExist(class UObject* InWorldContextObject, class FName InClockName);
	void DeleteClockByName(class UObject* InWorldContextObject, class FName InClockName);
	void DeleteClockByHandle(class UObject* InWorldContextObject, class UQuartzClockHandle*& InInClockHandle);
	class UQuartzClockHandle* CreateNewClock(class UObject* InWorldContextObject, class FName InClockName, const struct FQuartzClockSettings& InInSettings, bool InbOverrideSettingsIfClockExists, bool InbUseAudioEngineClockManager);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
