#pragma once

// Dumped with Dumper-7!

#include "SDK.hpp"

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function Synthesis.ModularSynthLibrary.AddModularSynthPresetToBankAsset
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable)
// Parameters:
// class UModularSynthPresetBank*     InBank                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FModularSynthPreset         Preset                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      PresetName                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModularSynthLibrary::AddModularSynthPresetToBankAsset(class UModularSynthPresetBank* InInBank, struct FModularSynthPreset& InPreset, const class FString& InPresetName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthLibrary", "AddModularSynthPresetToBankAsset");

	Params::UModularSynthLibrary_AddModularSynthPresetToBankAsset_Params Parms{};

	Parms.InBank = InInBank;
	Parms.Preset = InPreset;
	Parms.PresetName = InPresetName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.ModularSynthComponent.SetSynthPreset
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FModularSynthPreset         SynthPreset                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UModularSynthComponent::SetSynthPreset(struct FModularSynthPreset& InSynthPreset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetSynthPreset");

	Params::UModularSynthComponent_SetSynthPreset_Params Parms{};

	Parms.SynthPreset = InSynthPreset;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.ModularSynthComponent.SetSustainGain
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              SustainGain                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModularSynthComponent::SetSustainGain(float InSustainGain)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetSustainGain");

	Params::UModularSynthComponent_SetSustainGain_Params Parms{};

	Parms.SustainGain = InSustainGain;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.ModularSynthComponent.SetStereoDelayWetlevel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              DelayWetlevel                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModularSynthComponent::SetStereoDelayWetlevel(float InDelayWetlevel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetStereoDelayWetlevel");

	Params::UModularSynthComponent_SetStereoDelayWetlevel_Params Parms{};

	Parms.DelayWetlevel = InDelayWetlevel;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.ModularSynthComponent.SetStereoDelayTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              DelayTimeMsec                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModularSynthComponent::SetStereoDelayTime(float InDelayTimeMsec)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetStereoDelayTime");

	Params::UModularSynthComponent_SetStereoDelayTime_Params Parms{};

	Parms.DelayTimeMsec = InDelayTimeMsec;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.ModularSynthComponent.SetStereoDelayRatio
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              DelayRatio                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModularSynthComponent::SetStereoDelayRatio(float InDelayRatio)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetStereoDelayRatio");

	Params::UModularSynthComponent_SetStereoDelayRatio_Params Parms{};

	Parms.DelayRatio = InDelayRatio;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.ModularSynthComponent.SetStereoDelayMode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ESynthStereoDelayMode   StereoDelayMode                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModularSynthComponent::SetStereoDelayMode(enum class ESynthStereoDelayMode InStereoDelayMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetStereoDelayMode");

	Params::UModularSynthComponent_SetStereoDelayMode_Params Parms{};

	Parms.StereoDelayMode = InStereoDelayMode;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.ModularSynthComponent.SetStereoDelayIsEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               StereoDelayEnabled                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModularSynthComponent::SetStereoDelayIsEnabled(bool InStereoDelayEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetStereoDelayIsEnabled");

	Params::UModularSynthComponent_SetStereoDelayIsEnabled_Params Parms{};

	Parms.StereoDelayEnabled = InStereoDelayEnabled;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.ModularSynthComponent.SetStereoDelayFeedback
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              DelayFeedback                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModularSynthComponent::SetStereoDelayFeedback(float InDelayFeedback)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetStereoDelayFeedback");

	Params::UModularSynthComponent_SetStereoDelayFeedback_Params Parms{};

	Parms.DelayFeedback = InDelayFeedback;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.ModularSynthComponent.SetSpread
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Spread                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModularSynthComponent::SetSpread(float InSpread)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetSpread");

	Params::UModularSynthComponent_SetSpread_Params Parms{};

	Parms.Spread = InSpread;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.ModularSynthComponent.SetReleaseTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              ReleaseTimeMsec                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModularSynthComponent::SetReleaseTime(float InReleaseTimeMsec)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetReleaseTime");

	Params::UModularSynthComponent_SetReleaseTime_Params Parms{};

	Parms.ReleaseTimeMsec = InReleaseTimeMsec;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.ModularSynthComponent.SetPortamento
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Portamento                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModularSynthComponent::SetPortamento(float InPortamento)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetPortamento");

	Params::UModularSynthComponent_SetPortamento_Params Parms{};

	Parms.Portamento = InPortamento;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.ModularSynthComponent.SetPitchBend
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              PitchBend                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModularSynthComponent::SetPitchBend(float InPitchBend)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetPitchBend");

	Params::UModularSynthComponent_SetPitchBend_Params Parms{};

	Parms.PitchBend = InPitchBend;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.ModularSynthComponent.SetPan
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Pan                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModularSynthComponent::SetPan(float InPan)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetPan");

	Params::UModularSynthComponent_SetPan_Params Parms{};

	Parms.Pan = InPan;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.ModularSynthComponent.SetOscType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              OscIndex                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ESynth1OscType          OscType                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModularSynthComponent::SetOscType(int32 InOscIndex, enum class ESynth1OscType InOscType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetOscType");

	Params::UModularSynthComponent_SetOscType_Params Parms{};

	Parms.OscIndex = InOscIndex;
	Parms.OscType = InOscType;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.ModularSynthComponent.SetOscSync
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bIsSynced                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModularSynthComponent::SetOscSync(bool InbIsSynced)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetOscSync");

	Params::UModularSynthComponent_SetOscSync_Params Parms{};

	Parms.bIsSynced = InbIsSynced;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.ModularSynthComponent.SetOscSemitones
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              OscIndex                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Semitones                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModularSynthComponent::SetOscSemitones(int32 InOscIndex, float InSemitones)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetOscSemitones");

	Params::UModularSynthComponent_SetOscSemitones_Params Parms{};

	Parms.OscIndex = InOscIndex;
	Parms.Semitones = InSemitones;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.ModularSynthComponent.SetOscPulsewidth
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              OscIndex                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Pulsewidth                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModularSynthComponent::SetOscPulsewidth(int32 InOscIndex, float InPulsewidth)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetOscPulsewidth");

	Params::UModularSynthComponent_SetOscPulsewidth_Params Parms{};

	Parms.OscIndex = InOscIndex;
	Parms.Pulsewidth = InPulsewidth;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.ModularSynthComponent.SetOscOctave
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              OscIndex                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Octave                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModularSynthComponent::SetOscOctave(int32 InOscIndex, float InOctave)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetOscOctave");

	Params::UModularSynthComponent_SetOscOctave_Params Parms{};

	Parms.OscIndex = InOscIndex;
	Parms.Octave = InOctave;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.ModularSynthComponent.SetOscGainMod
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              OscIndex                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              OscGainMod                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModularSynthComponent::SetOscGainMod(int32 InOscIndex, float InOscGainMod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetOscGainMod");

	Params::UModularSynthComponent_SetOscGainMod_Params Parms{};

	Parms.OscIndex = InOscIndex;
	Parms.OscGainMod = InOscGainMod;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.ModularSynthComponent.SetOscGain
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              OscIndex                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              OscGain                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModularSynthComponent::SetOscGain(int32 InOscIndex, float InOscGain)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetOscGain");

	Params::UModularSynthComponent_SetOscGain_Params Parms{};

	Parms.OscIndex = InOscIndex;
	Parms.OscGain = InOscGain;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.ModularSynthComponent.SetOscFrequencyMod
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              OscIndex                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              OscFreqMod                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModularSynthComponent::SetOscFrequencyMod(int32 InOscIndex, float InOscFreqMod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetOscFrequencyMod");

	Params::UModularSynthComponent_SetOscFrequencyMod_Params Parms{};

	Parms.OscIndex = InOscIndex;
	Parms.OscFreqMod = InOscFreqMod;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.ModularSynthComponent.SetOscCents
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              OscIndex                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Cents                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModularSynthComponent::SetOscCents(int32 InOscIndex, float InCents)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetOscCents");

	Params::UModularSynthComponent_SetOscCents_Params Parms{};

	Parms.OscIndex = InOscIndex;
	Parms.Cents = InCents;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.ModularSynthComponent.SetModEnvSustainGain
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              SustainGain                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModularSynthComponent::SetModEnvSustainGain(float InSustainGain)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetModEnvSustainGain");

	Params::UModularSynthComponent_SetModEnvSustainGain_Params Parms{};

	Parms.SustainGain = InSustainGain;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.ModularSynthComponent.SetModEnvReleaseTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Release                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModularSynthComponent::SetModEnvReleaseTime(float InRelease)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetModEnvReleaseTime");

	Params::UModularSynthComponent_SetModEnvReleaseTime_Params Parms{};

	Parms.Release = InRelease;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.ModularSynthComponent.SetModEnvPatch
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ESynthModEnvPatch       InPatchType                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModularSynthComponent::SetModEnvPatch(enum class ESynthModEnvPatch InInPatchType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetModEnvPatch");

	Params::UModularSynthComponent_SetModEnvPatch_Params Parms{};

	Parms.InPatchType = InInPatchType;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.ModularSynthComponent.SetModEnvInvert
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInvert                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModularSynthComponent::SetModEnvInvert(bool InbInvert)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetModEnvInvert");

	Params::UModularSynthComponent_SetModEnvInvert_Params Parms{};

	Parms.bInvert = InbInvert;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.ModularSynthComponent.SetModEnvDepth
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Depth                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModularSynthComponent::SetModEnvDepth(float InDepth)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetModEnvDepth");

	Params::UModularSynthComponent_SetModEnvDepth_Params Parms{};

	Parms.Depth = InDepth;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.ModularSynthComponent.SetModEnvDecayTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              DecayTimeMsec                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModularSynthComponent::SetModEnvDecayTime(float InDecayTimeMsec)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetModEnvDecayTime");

	Params::UModularSynthComponent_SetModEnvDecayTime_Params Parms{};

	Parms.DecayTimeMsec = InDecayTimeMsec;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.ModularSynthComponent.SetModEnvBiasPatch
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ESynthModEnvBiasPatch   InPatchType                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModularSynthComponent::SetModEnvBiasPatch(enum class ESynthModEnvBiasPatch InInPatchType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetModEnvBiasPatch");

	Params::UModularSynthComponent_SetModEnvBiasPatch_Params Parms{};

	Parms.InPatchType = InInPatchType;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.ModularSynthComponent.SetModEnvBiasInvert
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInvert                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModularSynthComponent::SetModEnvBiasInvert(bool InbInvert)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetModEnvBiasInvert");

	Params::UModularSynthComponent_SetModEnvBiasInvert_Params Parms{};

	Parms.bInvert = InbInvert;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.ModularSynthComponent.SetModEnvAttackTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              AttackTimeMsec                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModularSynthComponent::SetModEnvAttackTime(float InAttackTimeMsec)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetModEnvAttackTime");

	Params::UModularSynthComponent_SetModEnvAttackTime_Params Parms{};

	Parms.AttackTimeMsec = InAttackTimeMsec;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.ModularSynthComponent.SetLFOType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              LFOIndex                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ESynthLFOType           LFOType                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModularSynthComponent::SetLFOType(int32 InLFOIndex, enum class ESynthLFOType InLFOType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetLFOType");

	Params::UModularSynthComponent_SetLFOType_Params Parms{};

	Parms.LFOIndex = InLFOIndex;
	Parms.LFOType = InLFOType;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.ModularSynthComponent.SetLFOPatch
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              LFOIndex                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ESynthLFOPatchType      LFOPatchType                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModularSynthComponent::SetLFOPatch(int32 InLFOIndex, enum class ESynthLFOPatchType InLFOPatchType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetLFOPatch");

	Params::UModularSynthComponent_SetLFOPatch_Params Parms{};

	Parms.LFOIndex = InLFOIndex;
	Parms.LFOPatchType = InLFOPatchType;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.ModularSynthComponent.SetLFOMode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              LFOIndex                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ESynthLFOMode           LFOMode                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModularSynthComponent::SetLFOMode(int32 InLFOIndex, enum class ESynthLFOMode InLFOMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetLFOMode");

	Params::UModularSynthComponent_SetLFOMode_Params Parms{};

	Parms.LFOIndex = InLFOIndex;
	Parms.LFOMode = InLFOMode;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.ModularSynthComponent.SetLFOGainMod
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              LFOIndex                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              GainMod                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModularSynthComponent::SetLFOGainMod(int32 InLFOIndex, float InGainMod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetLFOGainMod");

	Params::UModularSynthComponent_SetLFOGainMod_Params Parms{};

	Parms.LFOIndex = InLFOIndex;
	Parms.GainMod = InGainMod;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.ModularSynthComponent.SetLFOGain
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              LFOIndex                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Gain                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModularSynthComponent::SetLFOGain(int32 InLFOIndex, float InGain)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetLFOGain");

	Params::UModularSynthComponent_SetLFOGain_Params Parms{};

	Parms.LFOIndex = InLFOIndex;
	Parms.Gain = InGain;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.ModularSynthComponent.SetLFOFrequencyMod
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              LFOIndex                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              FrequencyModHz                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModularSynthComponent::SetLFOFrequencyMod(int32 InLFOIndex, float InFrequencyModHz)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetLFOFrequencyMod");

	Params::UModularSynthComponent_SetLFOFrequencyMod_Params Parms{};

	Parms.LFOIndex = InLFOIndex;
	Parms.FrequencyModHz = InFrequencyModHz;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.ModularSynthComponent.SetLFOFrequency
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              LFOIndex                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              FrequencyHz                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModularSynthComponent::SetLFOFrequency(int32 InLFOIndex, float InFrequencyHz)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetLFOFrequency");

	Params::UModularSynthComponent_SetLFOFrequency_Params Parms{};

	Parms.LFOIndex = InLFOIndex;
	Parms.FrequencyHz = InFrequencyHz;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.ModularSynthComponent.SetGainDb
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              GainDb                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModularSynthComponent::SetGainDb(float InGainDb)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetGainDb");

	Params::UModularSynthComponent_SetGainDb_Params Parms{};

	Parms.GainDb = InGainDb;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.ModularSynthComponent.SetFilterType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ESynthFilterType        FilterType                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModularSynthComponent::SetFilterType(enum class ESynthFilterType InFilterType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetFilterType");

	Params::UModularSynthComponent_SetFilterType_Params Parms{};

	Parms.FilterType = InFilterType;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.ModularSynthComponent.SetFilterQMod
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              FilterQ                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModularSynthComponent::SetFilterQMod(float InFilterQ)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetFilterQMod");

	Params::UModularSynthComponent_SetFilterQMod_Params Parms{};

	Parms.FilterQ = InFilterQ;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.ModularSynthComponent.SetFilterQ
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              FilterQ                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModularSynthComponent::SetFilterQ(float InFilterQ)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetFilterQ");

	Params::UModularSynthComponent_SetFilterQ_Params Parms{};

	Parms.FilterQ = InFilterQ;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.ModularSynthComponent.SetFilterFrequencyMod
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              FilterFrequencyHz                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModularSynthComponent::SetFilterFrequencyMod(float InFilterFrequencyHz)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetFilterFrequencyMod");

	Params::UModularSynthComponent_SetFilterFrequencyMod_Params Parms{};

	Parms.FilterFrequencyHz = InFilterFrequencyHz;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.ModularSynthComponent.SetFilterFrequency
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              FilterFrequencyHz                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModularSynthComponent::SetFilterFrequency(float InFilterFrequencyHz)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetFilterFrequency");

	Params::UModularSynthComponent_SetFilterFrequency_Params Parms{};

	Parms.FilterFrequencyHz = InFilterFrequencyHz;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.ModularSynthComponent.SetFilterAlgorithm
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ESynthFilterAlgorithm   FilterAlgorithm                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModularSynthComponent::SetFilterAlgorithm(enum class ESynthFilterAlgorithm InFilterAlgorithm)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetFilterAlgorithm");

	Params::UModularSynthComponent_SetFilterAlgorithm_Params Parms{};

	Parms.FilterAlgorithm = InFilterAlgorithm;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.ModularSynthComponent.SetEnableUnison
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               EnableUnison                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModularSynthComponent::SetEnableUnison(bool InEnableUnison)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetEnableUnison");

	Params::UModularSynthComponent_SetEnableUnison_Params Parms{};

	Parms.EnableUnison = InEnableUnison;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.ModularSynthComponent.SetEnableRetrigger
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               RetriggerEnabled                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModularSynthComponent::SetEnableRetrigger(bool InRetriggerEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetEnableRetrigger");

	Params::UModularSynthComponent_SetEnableRetrigger_Params Parms{};

	Parms.RetriggerEnabled = InRetriggerEnabled;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.ModularSynthComponent.SetEnablePolyphony
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bEnablePolyphony                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModularSynthComponent::SetEnablePolyphony(bool InbEnablePolyphony)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetEnablePolyphony");

	Params::UModularSynthComponent_SetEnablePolyphony_Params Parms{};

	Parms.bEnablePolyphony = InbEnablePolyphony;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.ModularSynthComponent.SetEnablePatch
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FPatchId                    PatchId                                                          (ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               bIsEnabled                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UModularSynthComponent::SetEnablePatch(const struct FPatchId& InPatchId, bool InbIsEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetEnablePatch");

	Params::UModularSynthComponent_SetEnablePatch_Params Parms{};

	Parms.PatchId = InPatchId;
	Parms.bIsEnabled = InbIsEnabled;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Synthesis.ModularSynthComponent.SetEnableLegato
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               LegatoEnabled                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModularSynthComponent::SetEnableLegato(bool InLegatoEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetEnableLegato");

	Params::UModularSynthComponent_SetEnableLegato_Params Parms{};

	Parms.LegatoEnabled = InLegatoEnabled;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.ModularSynthComponent.SetDecayTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              DecayTimeMsec                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModularSynthComponent::SetDecayTime(float InDecayTimeMsec)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetDecayTime");

	Params::UModularSynthComponent_SetDecayTime_Params Parms{};

	Parms.DecayTimeMsec = InDecayTimeMsec;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.ModularSynthComponent.SetChorusFrequency
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Frequency                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModularSynthComponent::SetChorusFrequency(float InFrequency)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetChorusFrequency");

	Params::UModularSynthComponent_SetChorusFrequency_Params Parms{};

	Parms.Frequency = InFrequency;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.ModularSynthComponent.SetChorusFeedback
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Feedback                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModularSynthComponent::SetChorusFeedback(float InFeedback)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetChorusFeedback");

	Params::UModularSynthComponent_SetChorusFeedback_Params Parms{};

	Parms.Feedback = InFeedback;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.ModularSynthComponent.SetChorusEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               EnableChorus                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModularSynthComponent::SetChorusEnabled(bool InEnableChorus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetChorusEnabled");

	Params::UModularSynthComponent_SetChorusEnabled_Params Parms{};

	Parms.EnableChorus = InEnableChorus;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.ModularSynthComponent.SetChorusDepth
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Depth                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModularSynthComponent::SetChorusDepth(float InDepth)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetChorusDepth");

	Params::UModularSynthComponent_SetChorusDepth_Params Parms{};

	Parms.Depth = InDepth;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.ModularSynthComponent.SetAttackTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              AttackTimeMsec                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModularSynthComponent::SetAttackTime(float InAttackTimeMsec)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "SetAttackTime");

	Params::UModularSynthComponent_SetAttackTime_Params Parms{};

	Parms.AttackTimeMsec = InAttackTimeMsec;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.ModularSynthComponent.NoteOn
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Note                                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Velocity                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Duration                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModularSynthComponent::NoteOn(float InNote, int32 InVelocity, float InDuration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "NoteOn");

	Params::UModularSynthComponent_NoteOn_Params Parms{};

	Parms.Note = InNote;
	Parms.Velocity = InVelocity;
	Parms.Duration = InDuration;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.ModularSynthComponent.NoteOff
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Note                                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAllNotesOff                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bKillAllNotes                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModularSynthComponent::NoteOff(float InNote, bool InbAllNotesOff, bool InbKillAllNotes)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "NoteOff");

	Params::UModularSynthComponent_NoteOff_Params Parms{};

	Parms.Note = InNote;
	Parms.bAllNotesOff = InbAllNotesOff;
	Parms.bKillAllNotes = InbKillAllNotes;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.ModularSynthComponent.CreatePatch
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// enum class ESynth1PatchSource      PatchSource                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FSynth1PatchCable>   PatchCables                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               bEnableByDefault                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPatchId                    ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FPatchId UModularSynthComponent::CreatePatch(enum class ESynth1PatchSource InPatchSource, TArray<struct FSynth1PatchCable>& InPatchCables, bool InbEnableByDefault)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ModularSynthComponent", "CreatePatch");

	Params::UModularSynthComponent_CreatePatch_Params Parms{};

	Parms.PatchSource = InPatchSource;
	Parms.PatchCables = InPatchCables;
	Parms.bEnableByDefault = InbEnableByDefault;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Synthesis.SourceEffectBitCrusherPreset.SetSettings
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSourceEffectBitCrusherBaseSettingsSettings                                                         (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void USourceEffectBitCrusherPreset::SetSettings(struct FSourceEffectBitCrusherBaseSettings& InSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SourceEffectBitCrusherPreset", "SetSettings");

	Params::USourceEffectBitCrusherPreset_SetSettings_Params Parms{};

	Parms.Settings = InSettings;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SourceEffectBitCrusherPreset.SetSampleRateModulators
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TSet<class USoundModulatorBase*>   InModulators                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void USourceEffectBitCrusherPreset::SetSampleRateModulators(TSet<class USoundModulatorBase*>& InInModulators)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SourceEffectBitCrusherPreset", "SetSampleRateModulators");

	Params::USourceEffectBitCrusherPreset_SetSampleRateModulators_Params Parms{};

	Parms.InModulators = InInModulators;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SourceEffectBitCrusherPreset.SetSampleRateModulator
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USoundModulatorBase*         Modulator                                                        (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USourceEffectBitCrusherPreset::SetSampleRateModulator(class USoundModulatorBase* InModulator)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SourceEffectBitCrusherPreset", "SetSampleRateModulator");

	Params::USourceEffectBitCrusherPreset_SetSampleRateModulator_Params Parms{};

	Parms.Modulator = InModulator;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SourceEffectBitCrusherPreset.SetSampleRate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              SampleRate                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USourceEffectBitCrusherPreset::SetSampleRate(float InSampleRate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SourceEffectBitCrusherPreset", "SetSampleRate");

	Params::USourceEffectBitCrusherPreset_SetSampleRate_Params Parms{};

	Parms.SampleRate = InSampleRate;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SourceEffectBitCrusherPreset.SetModulationSettings
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSourceEffectBitCrusherSettingsModulationSettings                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void USourceEffectBitCrusherPreset::SetModulationSettings(struct FSourceEffectBitCrusherSettings& InModulationSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SourceEffectBitCrusherPreset", "SetModulationSettings");

	Params::USourceEffectBitCrusherPreset_SetModulationSettings_Params Parms{};

	Parms.ModulationSettings = InModulationSettings;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SourceEffectBitCrusherPreset.SetBits
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Bits                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USourceEffectBitCrusherPreset::SetBits(float InBits)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SourceEffectBitCrusherPreset", "SetBits");

	Params::USourceEffectBitCrusherPreset_SetBits_Params Parms{};

	Parms.Bits = InBits;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SourceEffectBitCrusherPreset.SetBitModulators
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TSet<class USoundModulatorBase*>   InModulators                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void USourceEffectBitCrusherPreset::SetBitModulators(TSet<class USoundModulatorBase*>& InInModulators)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SourceEffectBitCrusherPreset", "SetBitModulators");

	Params::USourceEffectBitCrusherPreset_SetBitModulators_Params Parms{};

	Parms.InModulators = InInModulators;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SourceEffectBitCrusherPreset.SetBitModulator
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USoundModulatorBase*         Modulator                                                        (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USourceEffectBitCrusherPreset::SetBitModulator(class USoundModulatorBase* InModulator)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SourceEffectBitCrusherPreset", "SetBitModulator");

	Params::USourceEffectBitCrusherPreset_SetBitModulator_Params Parms{};

	Parms.Modulator = InModulator;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SourceEffectChorusPreset.SetWetModulators
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TSet<class USoundModulatorBase*>   Modulators                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void USourceEffectChorusPreset::SetWetModulators(TSet<class USoundModulatorBase*>& InModulators)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SourceEffectChorusPreset", "SetWetModulators");

	Params::USourceEffectChorusPreset_SetWetModulators_Params Parms{};

	Parms.Modulators = InModulators;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SourceEffectChorusPreset.SetWetModulator
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USoundModulatorBase*         Modulator                                                        (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USourceEffectChorusPreset::SetWetModulator(class USoundModulatorBase* InModulator)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SourceEffectChorusPreset", "SetWetModulator");

	Params::USourceEffectChorusPreset_SetWetModulator_Params Parms{};

	Parms.Modulator = InModulator;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SourceEffectChorusPreset.SetWet
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              WetAmount                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USourceEffectChorusPreset::SetWet(float InWetAmount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SourceEffectChorusPreset", "SetWet");

	Params::USourceEffectChorusPreset_SetWet_Params Parms{};

	Parms.WetAmount = InWetAmount;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SourceEffectChorusPreset.SetSpreadModulators
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TSet<class USoundModulatorBase*>   Modulators                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void USourceEffectChorusPreset::SetSpreadModulators(TSet<class USoundModulatorBase*>& InModulators)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SourceEffectChorusPreset", "SetSpreadModulators");

	Params::USourceEffectChorusPreset_SetSpreadModulators_Params Parms{};

	Parms.Modulators = InModulators;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SourceEffectChorusPreset.SetSpreadModulator
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USoundModulatorBase*         Modulator                                                        (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USourceEffectChorusPreset::SetSpreadModulator(class USoundModulatorBase* InModulator)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SourceEffectChorusPreset", "SetSpreadModulator");

	Params::USourceEffectChorusPreset_SetSpreadModulator_Params Parms{};

	Parms.Modulator = InModulator;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SourceEffectChorusPreset.SetSpread
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Spread                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USourceEffectChorusPreset::SetSpread(float InSpread)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SourceEffectChorusPreset", "SetSpread");

	Params::USourceEffectChorusPreset_SetSpread_Params Parms{};

	Parms.Spread = InSpread;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SourceEffectChorusPreset.SetSettings
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSourceEffectChorusBaseSettingsSettings                                                         (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void USourceEffectChorusPreset::SetSettings(struct FSourceEffectChorusBaseSettings& InSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SourceEffectChorusPreset", "SetSettings");

	Params::USourceEffectChorusPreset_SetSettings_Params Parms{};

	Parms.Settings = InSettings;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SourceEffectChorusPreset.SetModulationSettings
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSourceEffectChorusSettings ModulationSettings                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void USourceEffectChorusPreset::SetModulationSettings(struct FSourceEffectChorusSettings& InModulationSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SourceEffectChorusPreset", "SetModulationSettings");

	Params::USourceEffectChorusPreset_SetModulationSettings_Params Parms{};

	Parms.ModulationSettings = InModulationSettings;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SourceEffectChorusPreset.SetFrequencyModulators
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TSet<class USoundModulatorBase*>   Modulators                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void USourceEffectChorusPreset::SetFrequencyModulators(TSet<class USoundModulatorBase*>& InModulators)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SourceEffectChorusPreset", "SetFrequencyModulators");

	Params::USourceEffectChorusPreset_SetFrequencyModulators_Params Parms{};

	Parms.Modulators = InModulators;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SourceEffectChorusPreset.SetFrequencyModulator
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USoundModulatorBase*         Modulator                                                        (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USourceEffectChorusPreset::SetFrequencyModulator(class USoundModulatorBase* InModulator)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SourceEffectChorusPreset", "SetFrequencyModulator");

	Params::USourceEffectChorusPreset_SetFrequencyModulator_Params Parms{};

	Parms.Modulator = InModulator;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SourceEffectChorusPreset.SetFrequency
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Frequency                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USourceEffectChorusPreset::SetFrequency(float InFrequency)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SourceEffectChorusPreset", "SetFrequency");

	Params::USourceEffectChorusPreset_SetFrequency_Params Parms{};

	Parms.Frequency = InFrequency;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SourceEffectChorusPreset.SetFeedbackModulators
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TSet<class USoundModulatorBase*>   Modulators                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void USourceEffectChorusPreset::SetFeedbackModulators(TSet<class USoundModulatorBase*>& InModulators)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SourceEffectChorusPreset", "SetFeedbackModulators");

	Params::USourceEffectChorusPreset_SetFeedbackModulators_Params Parms{};

	Parms.Modulators = InModulators;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SourceEffectChorusPreset.SetFeedbackModulator
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USoundModulatorBase*         Modulator                                                        (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USourceEffectChorusPreset::SetFeedbackModulator(class USoundModulatorBase* InModulator)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SourceEffectChorusPreset", "SetFeedbackModulator");

	Params::USourceEffectChorusPreset_SetFeedbackModulator_Params Parms{};

	Parms.Modulator = InModulator;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SourceEffectChorusPreset.SetFeedback
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Feedback                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USourceEffectChorusPreset::SetFeedback(float InFeedback)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SourceEffectChorusPreset", "SetFeedback");

	Params::USourceEffectChorusPreset_SetFeedback_Params Parms{};

	Parms.Feedback = InFeedback;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SourceEffectChorusPreset.SetDryModulators
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TSet<class USoundModulatorBase*>   Modulators                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void USourceEffectChorusPreset::SetDryModulators(TSet<class USoundModulatorBase*>& InModulators)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SourceEffectChorusPreset", "SetDryModulators");

	Params::USourceEffectChorusPreset_SetDryModulators_Params Parms{};

	Parms.Modulators = InModulators;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SourceEffectChorusPreset.SetDryModulator
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USoundModulatorBase*         Modulator                                                        (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USourceEffectChorusPreset::SetDryModulator(class USoundModulatorBase* InModulator)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SourceEffectChorusPreset", "SetDryModulator");

	Params::USourceEffectChorusPreset_SetDryModulator_Params Parms{};

	Parms.Modulator = InModulator;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SourceEffectChorusPreset.SetDry
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              DryAmount                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USourceEffectChorusPreset::SetDry(float InDryAmount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SourceEffectChorusPreset", "SetDry");

	Params::USourceEffectChorusPreset_SetDry_Params Parms{};

	Parms.DryAmount = InDryAmount;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SourceEffectChorusPreset.SetDepthModulators
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TSet<class USoundModulatorBase*>   Modulators                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void USourceEffectChorusPreset::SetDepthModulators(TSet<class USoundModulatorBase*>& InModulators)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SourceEffectChorusPreset", "SetDepthModulators");

	Params::USourceEffectChorusPreset_SetDepthModulators_Params Parms{};

	Parms.Modulators = InModulators;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SourceEffectChorusPreset.SetDepthModulator
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USoundModulatorBase*         Modulator                                                        (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USourceEffectChorusPreset::SetDepthModulator(class USoundModulatorBase* InModulator)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SourceEffectChorusPreset", "SetDepthModulator");

	Params::USourceEffectChorusPreset_SetDepthModulator_Params Parms{};

	Parms.Modulator = InModulator;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SourceEffectChorusPreset.SetDepth
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Depth                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USourceEffectChorusPreset::SetDepth(float InDepth)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SourceEffectChorusPreset", "SetDepth");

	Params::USourceEffectChorusPreset_SetDepth_Params Parms{};

	Parms.Depth = InDepth;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SourceEffectConvolutionReverbPreset.SetSettings
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSourceEffectConvolutionReverbSettingsInSettings                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void USourceEffectConvolutionReverbPreset::SetSettings(struct FSourceEffectConvolutionReverbSettings& InInSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SourceEffectConvolutionReverbPreset", "SetSettings");

	Params::USourceEffectConvolutionReverbPreset_SetSettings_Params Parms{};

	Parms.InSettings = InInSettings;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SourceEffectConvolutionReverbPreset.SetImpulseResponse
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UAudioImpulseResponse*       InImpulseResponse                                                (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USourceEffectConvolutionReverbPreset::SetImpulseResponse(class UAudioImpulseResponse* InInImpulseResponse)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SourceEffectConvolutionReverbPreset", "SetImpulseResponse");

	Params::USourceEffectConvolutionReverbPreset_SetImpulseResponse_Params Parms{};

	Parms.InImpulseResponse = InInImpulseResponse;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SourceEffectDynamicsProcessorPreset.SetSettings
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSourceEffectDynamicsProcessorSettingsInSettings                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void USourceEffectDynamicsProcessorPreset::SetSettings(struct FSourceEffectDynamicsProcessorSettings& InInSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SourceEffectDynamicsProcessorPreset", "SetSettings");

	Params::USourceEffectDynamicsProcessorPreset_SetSettings_Params Parms{};

	Parms.InSettings = InInSettings;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SourceEffectEnvelopeFollowerPreset.UnregisterEnvelopeFollowerListener
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UEnvelopeFollowerListener*   EnvelopeFollowerListener                                         (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USourceEffectEnvelopeFollowerPreset::UnregisterEnvelopeFollowerListener(class UEnvelopeFollowerListener* InEnvelopeFollowerListener)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SourceEffectEnvelopeFollowerPreset", "UnregisterEnvelopeFollowerListener");

	Params::USourceEffectEnvelopeFollowerPreset_UnregisterEnvelopeFollowerListener_Params Parms{};

	Parms.EnvelopeFollowerListener = InEnvelopeFollowerListener;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SourceEffectEnvelopeFollowerPreset.SetSettings
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSourceEffectEnvelopeFollowerSettingsInSettings                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void USourceEffectEnvelopeFollowerPreset::SetSettings(struct FSourceEffectEnvelopeFollowerSettings& InInSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SourceEffectEnvelopeFollowerPreset", "SetSettings");

	Params::USourceEffectEnvelopeFollowerPreset_SetSettings_Params Parms{};

	Parms.InSettings = InInSettings;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SourceEffectEnvelopeFollowerPreset.RegisterEnvelopeFollowerListener
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UEnvelopeFollowerListener*   EnvelopeFollowerListener                                         (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USourceEffectEnvelopeFollowerPreset::RegisterEnvelopeFollowerListener(class UEnvelopeFollowerListener* InEnvelopeFollowerListener)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SourceEffectEnvelopeFollowerPreset", "RegisterEnvelopeFollowerListener");

	Params::USourceEffectEnvelopeFollowerPreset_RegisterEnvelopeFollowerListener_Params Parms{};

	Parms.EnvelopeFollowerListener = InEnvelopeFollowerListener;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SourceEffectEQPreset.SetSettings
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSourceEffectEQSettings     InSettings                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void USourceEffectEQPreset::SetSettings(struct FSourceEffectEQSettings& InInSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SourceEffectEQPreset", "SetSettings");

	Params::USourceEffectEQPreset_SetSettings_Params Parms{};

	Parms.InSettings = InInSettings;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SourceEffectFilterPreset.SetSettings
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSourceEffectFilterSettings InSettings                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void USourceEffectFilterPreset::SetSettings(struct FSourceEffectFilterSettings& InInSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SourceEffectFilterPreset", "SetSettings");

	Params::USourceEffectFilterPreset_SetSettings_Params Parms{};

	Parms.InSettings = InInSettings;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SourceEffectFoldbackDistortionPreset.SetSettings
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSourceEffectFoldbackDistortionSettingsInSettings                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void USourceEffectFoldbackDistortionPreset::SetSettings(struct FSourceEffectFoldbackDistortionSettings& InInSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SourceEffectFoldbackDistortionPreset", "SetSettings");

	Params::USourceEffectFoldbackDistortionPreset_SetSettings_Params Parms{};

	Parms.InSettings = InInSettings;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SourceEffectMidSideSpreaderPreset.SetSettings
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSourceEffectMidSideSpreaderSettingsInSettings                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void USourceEffectMidSideSpreaderPreset::SetSettings(struct FSourceEffectMidSideSpreaderSettings& InInSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SourceEffectMidSideSpreaderPreset", "SetSettings");

	Params::USourceEffectMidSideSpreaderPreset_SetSettings_Params Parms{};

	Parms.InSettings = InInSettings;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SourceEffectMotionFilterPreset.SetSettings
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSourceEffectMotionFilterSettingsInSettings                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void USourceEffectMotionFilterPreset::SetSettings(struct FSourceEffectMotionFilterSettings& InInSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SourceEffectMotionFilterPreset", "SetSettings");

	Params::USourceEffectMotionFilterPreset_SetSettings_Params Parms{};

	Parms.InSettings = InInSettings;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SourceEffectPannerPreset.SetSettings
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSourceEffectPannerSettings InSettings                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void USourceEffectPannerPreset::SetSettings(struct FSourceEffectPannerSettings& InInSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SourceEffectPannerPreset", "SetSettings");

	Params::USourceEffectPannerPreset_SetSettings_Params Parms{};

	Parms.InSettings = InInSettings;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SourceEffectPhaserPreset.SetSettings
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSourceEffectPhaserSettings InSettings                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void USourceEffectPhaserPreset::SetSettings(struct FSourceEffectPhaserSettings& InInSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SourceEffectPhaserPreset", "SetSettings");

	Params::USourceEffectPhaserPreset_SetSettings_Params Parms{};

	Parms.InSettings = InInSettings;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SourceEffectRingModulationPreset.SetSettings
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSourceEffectRingModulationSettingsInSettings                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void USourceEffectRingModulationPreset::SetSettings(struct FSourceEffectRingModulationSettings& InInSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SourceEffectRingModulationPreset", "SetSettings");

	Params::USourceEffectRingModulationPreset_SetSettings_Params Parms{};

	Parms.InSettings = InInSettings;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SourceEffectSimpleDelayPreset.SetSettings
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSourceEffectSimpleDelaySettingsInSettings                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void USourceEffectSimpleDelayPreset::SetSettings(struct FSourceEffectSimpleDelaySettings& InInSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SourceEffectSimpleDelayPreset", "SetSettings");

	Params::USourceEffectSimpleDelayPreset_SetSettings_Params Parms{};

	Parms.InSettings = InInSettings;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SourceEffectStereoDelayPreset.SetSettings
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSourceEffectStereoDelaySettingsInSettings                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void USourceEffectStereoDelayPreset::SetSettings(struct FSourceEffectStereoDelaySettings& InInSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SourceEffectStereoDelayPreset", "SetSettings");

	Params::USourceEffectStereoDelayPreset_SetSettings_Params Parms{};

	Parms.InSettings = InInSettings;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SourceEffectWaveShaperPreset.SetSettings
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSourceEffectWaveShaperSettingsInSettings                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void USourceEffectWaveShaperPreset::SetSettings(struct FSourceEffectWaveShaperSettings& InInSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SourceEffectWaveShaperPreset", "SetSettings");

	Params::USourceEffectWaveShaperPreset_SetSettings_Params Parms{};

	Parms.InSettings = InInSettings;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SubmixEffectConvolutionReverbPreset.SetSettings
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSubmixEffectConvolutionReverbSettingsInSettings                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void USubmixEffectConvolutionReverbPreset::SetSettings(struct FSubmixEffectConvolutionReverbSettings& InInSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubmixEffectConvolutionReverbPreset", "SetSettings");

	Params::USubmixEffectConvolutionReverbPreset_SetSettings_Params Parms{};

	Parms.InSettings = InInSettings;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SubmixEffectConvolutionReverbPreset.SetImpulseResponse
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UAudioImpulseResponse*       InImpulseResponse                                                (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USubmixEffectConvolutionReverbPreset::SetImpulseResponse(class UAudioImpulseResponse* InInImpulseResponse)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubmixEffectConvolutionReverbPreset", "SetImpulseResponse");

	Params::USubmixEffectConvolutionReverbPreset_SetImpulseResponse_Params Parms{};

	Parms.InImpulseResponse = InInImpulseResponse;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SubmixEffectDelayStatics.SetMaximumDelayLength
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSubmixEffectDelaySettings  DelaySettings                                                    (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// float                              MaximumDelayLength                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSubmixEffectDelaySettings  ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FSubmixEffectDelaySettings USubmixEffectDelayStatics::SetMaximumDelayLength(struct FSubmixEffectDelaySettings& InDelaySettings, float InMaximumDelayLength)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubmixEffectDelayStatics", "SetMaximumDelayLength");

	Params::USubmixEffectDelayStatics_SetMaximumDelayLength_Params Parms{};

	Parms.DelaySettings = InDelaySettings;
	Parms.MaximumDelayLength = InMaximumDelayLength;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Synthesis.SubmixEffectDelayStatics.SetInterpolationTime
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSubmixEffectDelaySettings  DelaySettings                                                    (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// float                              InterpolationTime                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSubmixEffectDelaySettings  ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FSubmixEffectDelaySettings USubmixEffectDelayStatics::SetInterpolationTime(struct FSubmixEffectDelaySettings& InDelaySettings, float InInterpolationTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubmixEffectDelayStatics", "SetInterpolationTime");

	Params::USubmixEffectDelayStatics_SetInterpolationTime_Params Parms{};

	Parms.DelaySettings = InDelaySettings;
	Parms.InterpolationTime = InInterpolationTime;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Synthesis.SubmixEffectDelayStatics.SetDelayLength
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSubmixEffectDelaySettings  DelaySettings                                                    (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// float                              DelayLength                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FSubmixEffectDelaySettings  ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FSubmixEffectDelaySettings USubmixEffectDelayStatics::SetDelayLength(struct FSubmixEffectDelaySettings& InDelaySettings, float InDelayLength)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubmixEffectDelayStatics", "SetDelayLength");

	Params::USubmixEffectDelayStatics_SetDelayLength_Params Parms{};

	Parms.DelaySettings = InDelaySettings;
	Parms.DelayLength = InDelayLength;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Synthesis.SubmixEffectDelayPreset.SetSettings
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSubmixEffectDelaySettings  InSettings                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void USubmixEffectDelayPreset::SetSettings(struct FSubmixEffectDelaySettings& InInSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubmixEffectDelayPreset", "SetSettings");

	Params::USubmixEffectDelayPreset_SetSettings_Params Parms{};

	Parms.InSettings = InInSettings;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SubmixEffectDelayPreset.SetInterpolationTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Time                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USubmixEffectDelayPreset::SetInterpolationTime(float InTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubmixEffectDelayPreset", "SetInterpolationTime");

	Params::USubmixEffectDelayPreset_SetInterpolationTime_Params Parms{};

	Parms.Time = InTime;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SubmixEffectDelayPreset.SetDelay
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Length                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USubmixEffectDelayPreset::SetDelay(float InLength)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubmixEffectDelayPreset", "SetDelay");

	Params::USubmixEffectDelayPreset_SetDelay_Params Parms{};

	Parms.Length = InLength;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SubmixEffectDelayPreset.SetDefaultSettings
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSubmixEffectDelaySettings  InSettings                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void USubmixEffectDelayPreset::SetDefaultSettings(struct FSubmixEffectDelaySettings& InInSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubmixEffectDelayPreset", "SetDefaultSettings");

	Params::USubmixEffectDelayPreset_SetDefaultSettings_Params Parms{};

	Parms.InSettings = InInSettings;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SubmixEffectDelayPreset.GetMaxDelayInMilliseconds
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float USubmixEffectDelayPreset::GetMaxDelayInMilliseconds()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubmixEffectDelayPreset", "GetMaxDelayInMilliseconds");

	Params::USubmixEffectDelayPreset_GetMaxDelayInMilliseconds_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Synthesis.SubmixEffectFilterPreset.SetSettings
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSubmixEffectFilterSettings InSettings                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void USubmixEffectFilterPreset::SetSettings(struct FSubmixEffectFilterSettings& InInSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubmixEffectFilterPreset", "SetSettings");

	Params::USubmixEffectFilterPreset_SetSettings_Params Parms{};

	Parms.InSettings = InInSettings;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SubmixEffectFilterPreset.SetFilterType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ESubmixFilterType       InType                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USubmixEffectFilterPreset::SetFilterType(enum class ESubmixFilterType InInType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubmixEffectFilterPreset", "SetFilterType");

	Params::USubmixEffectFilterPreset_SetFilterType_Params Parms{};

	Parms.InType = InInType;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SubmixEffectFilterPreset.SetFilterQMod
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InQ                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USubmixEffectFilterPreset::SetFilterQMod(float InInQ)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubmixEffectFilterPreset", "SetFilterQMod");

	Params::USubmixEffectFilterPreset_SetFilterQMod_Params Parms{};

	Parms.InQ = InInQ;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SubmixEffectFilterPreset.SetFilterQ
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InQ                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USubmixEffectFilterPreset::SetFilterQ(float InInQ)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubmixEffectFilterPreset", "SetFilterQ");

	Params::USubmixEffectFilterPreset_SetFilterQ_Params Parms{};

	Parms.InQ = InInQ;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SubmixEffectFilterPreset.SetFilterCutoffFrequencyMod
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InFrequency                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USubmixEffectFilterPreset::SetFilterCutoffFrequencyMod(float InInFrequency)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubmixEffectFilterPreset", "SetFilterCutoffFrequencyMod");

	Params::USubmixEffectFilterPreset_SetFilterCutoffFrequencyMod_Params Parms{};

	Parms.InFrequency = InInFrequency;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SubmixEffectFilterPreset.SetFilterCutoffFrequency
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InFrequency                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USubmixEffectFilterPreset::SetFilterCutoffFrequency(float InInFrequency)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubmixEffectFilterPreset", "SetFilterCutoffFrequency");

	Params::USubmixEffectFilterPreset_SetFilterCutoffFrequency_Params Parms{};

	Parms.InFrequency = InInFrequency;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SubmixEffectFilterPreset.SetFilterAlgorithm
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ESubmixFilterAlgorithm  InAlgorithm                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USubmixEffectFilterPreset::SetFilterAlgorithm(enum class ESubmixFilterAlgorithm InInAlgorithm)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubmixEffectFilterPreset", "SetFilterAlgorithm");

	Params::USubmixEffectFilterPreset_SetFilterAlgorithm_Params Parms{};

	Parms.InAlgorithm = InInAlgorithm;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SubmixEffectFlexiverbPreset.SetSettings
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSubmixEffectFlexiverbSettingsInSettings                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void USubmixEffectFlexiverbPreset::SetSettings(struct FSubmixEffectFlexiverbSettings& InInSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubmixEffectFlexiverbPreset", "SetSettings");

	Params::USubmixEffectFlexiverbPreset_SetSettings_Params Parms{};

	Parms.InSettings = InInSettings;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SubmixEffectMultibandCompressorPreset.SetSettings
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSubmixEffectMultibandCompressorSettingsInSettings                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void USubmixEffectMultibandCompressorPreset::SetSettings(struct FSubmixEffectMultibandCompressorSettings& InInSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubmixEffectMultibandCompressorPreset", "SetSettings");

	Params::USubmixEffectMultibandCompressorPreset_SetSettings_Params Parms{};

	Parms.InSettings = InInSettings;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SubmixEffectMultibandCompressorPreset.SetExternalSubmix
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USoundSubmix*                Submix                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USubmixEffectMultibandCompressorPreset::SetExternalSubmix(class USoundSubmix* InSubmix)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubmixEffectMultibandCompressorPreset", "SetExternalSubmix");

	Params::USubmixEffectMultibandCompressorPreset_SetExternalSubmix_Params Parms{};

	Parms.Submix = InSubmix;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SubmixEffectMultibandCompressorPreset.SetAudioBus
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UAudioBus*                   AudioBus                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USubmixEffectMultibandCompressorPreset::SetAudioBus(class UAudioBus* InAudioBus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubmixEffectMultibandCompressorPreset", "SetAudioBus");

	Params::USubmixEffectMultibandCompressorPreset_SetAudioBus_Params Parms{};

	Parms.AudioBus = InAudioBus;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SubmixEffectMultibandCompressorPreset.ResetKey
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USubmixEffectMultibandCompressorPreset::ResetKey()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubmixEffectMultibandCompressorPreset", "ResetKey");

	Params::USubmixEffectMultibandCompressorPreset_ResetKey_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SubmixEffectStereoDelayPreset.SetSettings
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSubmixEffectStereoDelaySettingsInSettings                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void USubmixEffectStereoDelayPreset::SetSettings(struct FSubmixEffectStereoDelaySettings& InInSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubmixEffectStereoDelayPreset", "SetSettings");

	Params::USubmixEffectStereoDelayPreset_SetSettings_Params Parms{};

	Parms.InSettings = InInSettings;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SubmixEffectTapDelayPreset.SetTap
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              TapId                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTapDelayInfo               TapInfo                                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void USubmixEffectTapDelayPreset::SetTap(int32 InTapId, struct FTapDelayInfo& InTapInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubmixEffectTapDelayPreset", "SetTap");

	Params::USubmixEffectTapDelayPreset_SetTap_Params Parms{};

	Parms.TapId = InTapId;
	Parms.TapInfo = InTapInfo;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SubmixEffectTapDelayPreset.SetSettings
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSubmixEffectTapDelaySettingsInSettings                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void USubmixEffectTapDelayPreset::SetSettings(struct FSubmixEffectTapDelaySettings& InInSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubmixEffectTapDelayPreset", "SetSettings");

	Params::USubmixEffectTapDelayPreset_SetSettings_Params Parms{};

	Parms.InSettings = InInSettings;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SubmixEffectTapDelayPreset.SetInterpolationTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Time                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USubmixEffectTapDelayPreset::SetInterpolationTime(float InTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubmixEffectTapDelayPreset", "SetInterpolationTime");

	Params::USubmixEffectTapDelayPreset_SetInterpolationTime_Params Parms{};

	Parms.Time = InTime;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SubmixEffectTapDelayPreset.RemoveTap
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              TapId                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USubmixEffectTapDelayPreset::RemoveTap(int32 InTapId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubmixEffectTapDelayPreset", "RemoveTap");

	Params::USubmixEffectTapDelayPreset_RemoveTap_Params Parms{};

	Parms.TapId = InTapId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SubmixEffectTapDelayPreset.GetTapIds
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<int32>                      TapIds                                                           (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void USubmixEffectTapDelayPreset::GetTapIds(TArray<int32>* InTapIds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubmixEffectTapDelayPreset", "GetTapIds");

	Params::USubmixEffectTapDelayPreset_GetTapIds_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (InTapIds != nullptr)
		*InTapIds = Parms.TapIds;

}


// Function Synthesis.SubmixEffectTapDelayPreset.GetTap
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              TapId                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTapDelayInfo               TapInfo                                                          (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)

void USubmixEffectTapDelayPreset::GetTap(int32 InTapId, struct FTapDelayInfo* InTapInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubmixEffectTapDelayPreset", "GetTap");

	Params::USubmixEffectTapDelayPreset_GetTap_Params Parms{};

	Parms.TapId = InTapId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (InTapInfo != nullptr)
		*InTapInfo = Parms.TapInfo;

}


// Function Synthesis.SubmixEffectTapDelayPreset.GetMaxDelayInMilliseconds
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float USubmixEffectTapDelayPreset::GetMaxDelayInMilliseconds()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubmixEffectTapDelayPreset", "GetMaxDelayInMilliseconds");

	Params::USubmixEffectTapDelayPreset_GetMaxDelayInMilliseconds_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Synthesis.SubmixEffectTapDelayPreset.AddTap
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              TapId                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USubmixEffectTapDelayPreset::AddTap(int32* InTapId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubmixEffectTapDelayPreset", "AddTap");

	Params::USubmixEffectTapDelayPreset_AddTap_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (InTapId != nullptr)
		*InTapId = Parms.TapId;

}


// Function Synthesis.GranularSynth.SetSustainGain
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              SustainGain                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGranularSynth::SetSustainGain(float InSustainGain)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GranularSynth", "SetSustainGain");

	Params::UGranularSynth_SetSustainGain_Params Parms{};

	Parms.SustainGain = InSustainGain;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.GranularSynth.SetSoundWave
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USoundWave*                  InSoundWave                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGranularSynth::SetSoundWave(class USoundWave* InInSoundWave)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GranularSynth", "SetSoundWave");

	Params::UGranularSynth_SetSoundWave_Params Parms{};

	Parms.InSoundWave = InInSoundWave;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.GranularSynth.SetScrubMode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bScrubMode                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGranularSynth::SetScrubMode(bool InbScrubMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GranularSynth", "SetScrubMode");

	Params::UGranularSynth_SetScrubMode_Params Parms{};

	Parms.bScrubMode = InbScrubMode;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.GranularSynth.SetReleaseTimeMsec
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              ReleaseTimeMsec                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGranularSynth::SetReleaseTimeMsec(float InReleaseTimeMsec)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GranularSynth", "SetReleaseTimeMsec");

	Params::UGranularSynth_SetReleaseTimeMsec_Params Parms{};

	Parms.ReleaseTimeMsec = InReleaseTimeMsec;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.GranularSynth.SetPlayheadTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InPositionSec                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              LerpTimeSec                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EGranularSynthSeekType  SeekType                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGranularSynth::SetPlayheadTime(float InInPositionSec, float InLerpTimeSec, enum class EGranularSynthSeekType InSeekType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GranularSynth", "SetPlayheadTime");

	Params::UGranularSynth_SetPlayheadTime_Params Parms{};

	Parms.InPositionSec = InInPositionSec;
	Parms.LerpTimeSec = InLerpTimeSec;
	Parms.SeekType = InSeekType;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.GranularSynth.SetPlaybackSpeed
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InPlayheadRate                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGranularSynth::SetPlaybackSpeed(float InInPlayheadRate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GranularSynth", "SetPlaybackSpeed");

	Params::UGranularSynth_SetPlaybackSpeed_Params Parms{};

	Parms.InPlayheadRate = InInPlayheadRate;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.GranularSynth.SetGrainVolume
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// float                              BaseVolume                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   VolumeRange                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGranularSynth::SetGrainVolume(float InBaseVolume, const struct FVector2D& InVolumeRange)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GranularSynth", "SetGrainVolume");

	Params::UGranularSynth_SetGrainVolume_Params Parms{};

	Parms.BaseVolume = InBaseVolume;
	Parms.VolumeRange = InVolumeRange;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.GranularSynth.SetGrainsPerSecond
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InGrainsPerSecond                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGranularSynth::SetGrainsPerSecond(float InInGrainsPerSecond)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GranularSynth", "SetGrainsPerSecond");

	Params::UGranularSynth_SetGrainsPerSecond_Params Parms{};

	Parms.InGrainsPerSecond = InInGrainsPerSecond;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.GranularSynth.SetGrainProbability
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InGrainProbability                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGranularSynth::SetGrainProbability(float InInGrainProbability)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GranularSynth", "SetGrainProbability");

	Params::UGranularSynth_SetGrainProbability_Params Parms{};

	Parms.InGrainProbability = InInGrainProbability;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.GranularSynth.SetGrainPitch
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// float                              BasePitch                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   PitchRange                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGranularSynth::SetGrainPitch(float InBasePitch, const struct FVector2D& InPitchRange)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GranularSynth", "SetGrainPitch");

	Params::UGranularSynth_SetGrainPitch_Params Parms{};

	Parms.BasePitch = InBasePitch;
	Parms.PitchRange = InPitchRange;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.GranularSynth.SetGrainPan
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// float                              BasePan                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   PanRange                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGranularSynth::SetGrainPan(float InBasePan, const struct FVector2D& InPanRange)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GranularSynth", "SetGrainPan");

	Params::UGranularSynth_SetGrainPan_Params Parms{};

	Parms.BasePan = InBasePan;
	Parms.PanRange = InPanRange;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.GranularSynth.SetGrainEnvelopeType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EGranularSynthEnvelopeTypeEnvelopeType                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGranularSynth::SetGrainEnvelopeType(enum class EGranularSynthEnvelopeType InEnvelopeType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GranularSynth", "SetGrainEnvelopeType");

	Params::UGranularSynth_SetGrainEnvelopeType_Params Parms{};

	Parms.EnvelopeType = InEnvelopeType;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.GranularSynth.SetGrainDuration
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// float                              BaseDurationMsec                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   DurationRange                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGranularSynth::SetGrainDuration(float InBaseDurationMsec, const struct FVector2D& InDurationRange)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GranularSynth", "SetGrainDuration");

	Params::UGranularSynth_SetGrainDuration_Params Parms{};

	Parms.BaseDurationMsec = InBaseDurationMsec;
	Parms.DurationRange = InDurationRange;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.GranularSynth.SetDecayTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              DecayTimeMsec                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGranularSynth::SetDecayTime(float InDecayTimeMsec)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GranularSynth", "SetDecayTime");

	Params::UGranularSynth_SetDecayTime_Params Parms{};

	Parms.DecayTimeMsec = InDecayTimeMsec;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.GranularSynth.SetAttackTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              AttackTimeMsec                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGranularSynth::SetAttackTime(float InAttackTimeMsec)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GranularSynth", "SetAttackTime");

	Params::UGranularSynth_SetAttackTime_Params Parms{};

	Parms.AttackTimeMsec = InAttackTimeMsec;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.GranularSynth.NoteOn
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Note                                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Velocity                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Duration                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGranularSynth::NoteOn(float InNote, int32 InVelocity, float InDuration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GranularSynth", "NoteOn");

	Params::UGranularSynth_NoteOn_Params Parms{};

	Parms.Note = InNote;
	Parms.Velocity = InVelocity;
	Parms.Duration = InDuration;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.GranularSynth.NoteOff
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Note                                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bKill                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGranularSynth::NoteOff(float InNote, bool InbKill)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GranularSynth", "NoteOff");

	Params::UGranularSynth_NoteOff_Params Parms{};

	Parms.Note = InNote;
	Parms.bKill = InbKill;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.GranularSynth.IsLoaded
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGranularSynth::IsLoaded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GranularSynth", "IsLoaded");

	Params::UGranularSynth_IsLoaded_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Synthesis.GranularSynth.GetSampleDuration
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UGranularSynth::GetSampleDuration()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GranularSynth", "GetSampleDuration");

	Params::UGranularSynth_GetSampleDuration_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Synthesis.GranularSynth.GetCurrentPlayheadTime
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UGranularSynth::GetCurrentPlayheadTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GranularSynth", "GetCurrentPlayheadTime");

	Params::UGranularSynth_GetCurrentPlayheadTime_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetWaveTablePosition
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InPosition                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USynthComponentMonoWaveTable::SetWaveTablePosition(float InInPosition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetWaveTablePosition");

	Params::USynthComponentMonoWaveTable_SetWaveTablePosition_Params Parms{};

	Parms.InPosition = InInPosition;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetSustainPedalState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               InSustainPedalState                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USynthComponentMonoWaveTable::SetSustainPedalState(bool InInSustainPedalState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetSustainPedalState");

	Params::USynthComponentMonoWaveTable_SetSustainPedalState_Params Parms{};

	Parms.InSustainPedalState = InInSustainPedalState;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetPosLfoType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ESynthLFOType           InLfoType                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USynthComponentMonoWaveTable::SetPosLfoType(enum class ESynthLFOType InInLfoType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetPosLfoType");

	Params::USynthComponentMonoWaveTable_SetPosLfoType_Params Parms{};

	Parms.InLfoType = InInLfoType;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetPosLfoFrequency
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InLfoFrequency                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USynthComponentMonoWaveTable::SetPosLfoFrequency(float InInLfoFrequency)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetPosLfoFrequency");

	Params::USynthComponentMonoWaveTable_SetPosLfoFrequency_Params Parms{};

	Parms.InLfoFrequency = InInLfoFrequency;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetPosLfoDepth
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InLfoDepth                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USynthComponentMonoWaveTable::SetPosLfoDepth(float InInLfoDepth)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetPosLfoDepth");

	Params::USynthComponentMonoWaveTable_SetPosLfoDepth_Params Parms{};

	Parms.InLfoDepth = InInLfoDepth;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeSustainGain
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InSustainGain                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USynthComponentMonoWaveTable::SetPositionEnvelopeSustainGain(float InInSustainGain)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetPositionEnvelopeSustainGain");

	Params::USynthComponentMonoWaveTable_SetPositionEnvelopeSustainGain_Params Parms{};

	Parms.InSustainGain = InInSustainGain;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeReleaseTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InReleaseTimeMsec                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USynthComponentMonoWaveTable::SetPositionEnvelopeReleaseTime(float InInReleaseTimeMsec)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetPositionEnvelopeReleaseTime");

	Params::USynthComponentMonoWaveTable_SetPositionEnvelopeReleaseTime_Params Parms{};

	Parms.InReleaseTimeMsec = InInReleaseTimeMsec;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeInvert
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInInvert                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USynthComponentMonoWaveTable::SetPositionEnvelopeInvert(bool InbInInvert)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetPositionEnvelopeInvert");

	Params::USynthComponentMonoWaveTable_SetPositionEnvelopeInvert_Params Parms{};

	Parms.bInInvert = InbInInvert;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeDepth
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InDepth                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USynthComponentMonoWaveTable::SetPositionEnvelopeDepth(float InInDepth)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetPositionEnvelopeDepth");

	Params::USynthComponentMonoWaveTable_SetPositionEnvelopeDepth_Params Parms{};

	Parms.InDepth = InInDepth;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeDecayTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InDecayTimeMsec                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USynthComponentMonoWaveTable::SetPositionEnvelopeDecayTime(float InInDecayTimeMsec)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetPositionEnvelopeDecayTime");

	Params::USynthComponentMonoWaveTable_SetPositionEnvelopeDecayTime_Params Parms{};

	Parms.InDecayTimeMsec = InInDecayTimeMsec;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeBiasInvert
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInBiasInvert                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USynthComponentMonoWaveTable::SetPositionEnvelopeBiasInvert(bool InbInBiasInvert)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetPositionEnvelopeBiasInvert");

	Params::USynthComponentMonoWaveTable_SetPositionEnvelopeBiasInvert_Params Parms{};

	Parms.bInBiasInvert = InbInBiasInvert;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeBiasDepth
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InDepth                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USynthComponentMonoWaveTable::SetPositionEnvelopeBiasDepth(float InInDepth)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetPositionEnvelopeBiasDepth");

	Params::USynthComponentMonoWaveTable_SetPositionEnvelopeBiasDepth_Params Parms{};

	Parms.InDepth = InInDepth;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeAttackTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InAttackTimeMsec                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USynthComponentMonoWaveTable::SetPositionEnvelopeAttackTime(float InInAttackTimeMsec)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetPositionEnvelopeAttackTime");

	Params::USynthComponentMonoWaveTable_SetPositionEnvelopeAttackTime_Params Parms{};

	Parms.InAttackTimeMsec = InInAttackTimeMsec;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetLowPassFilterResonance
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InNewQ                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USynthComponentMonoWaveTable::SetLowPassFilterResonance(float InInNewQ)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetLowPassFilterResonance");

	Params::USynthComponentMonoWaveTable_SetLowPassFilterResonance_Params Parms{};

	Parms.InNewQ = InInNewQ;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetFrequencyWithMidiNote
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InMidiNote                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USynthComponentMonoWaveTable::SetFrequencyWithMidiNote(float InInMidiNote)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetFrequencyWithMidiNote");

	Params::USynthComponentMonoWaveTable_SetFrequencyWithMidiNote_Params Parms{};

	Parms.InMidiNote = InInMidiNote;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetFrequencyPitchBend
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              FrequencyOffsetCents                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USynthComponentMonoWaveTable::SetFrequencyPitchBend(float InFrequencyOffsetCents)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetFrequencyPitchBend");

	Params::USynthComponentMonoWaveTable_SetFrequencyPitchBend_Params Parms{};

	Parms.FrequencyOffsetCents = InFrequencyOffsetCents;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetFrequency
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              FrequencyHz                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USynthComponentMonoWaveTable::SetFrequency(float InFrequencyHz)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetFrequency");

	Params::USynthComponentMonoWaveTable_SetFrequency_Params Parms{};

	Parms.FrequencyHz = InFrequencyHz;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeSustainGain
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InSustainGain                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USynthComponentMonoWaveTable::SetFilterEnvelopeSustainGain(float InInSustainGain)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetFilterEnvelopeSustainGain");

	Params::USynthComponentMonoWaveTable_SetFilterEnvelopeSustainGain_Params Parms{};

	Parms.InSustainGain = InInSustainGain;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeReleaseTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InReleaseTimeMsec                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USynthComponentMonoWaveTable::SetFilterEnvelopeReleaseTime(float InInReleaseTimeMsec)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetFilterEnvelopeReleaseTime");

	Params::USynthComponentMonoWaveTable_SetFilterEnvelopeReleaseTime_Params Parms{};

	Parms.InReleaseTimeMsec = InInReleaseTimeMsec;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopenDecayTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InDecayTimeMsec                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USynthComponentMonoWaveTable::SetFilterEnvelopenDecayTime(float InInDecayTimeMsec)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetFilterEnvelopenDecayTime");

	Params::USynthComponentMonoWaveTable_SetFilterEnvelopenDecayTime_Params Parms{};

	Parms.InDecayTimeMsec = InInDecayTimeMsec;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeInvert
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInInvert                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USynthComponentMonoWaveTable::SetFilterEnvelopeInvert(bool InbInInvert)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetFilterEnvelopeInvert");

	Params::USynthComponentMonoWaveTable_SetFilterEnvelopeInvert_Params Parms{};

	Parms.bInInvert = InbInInvert;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeDepth
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InDepth                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USynthComponentMonoWaveTable::SetFilterEnvelopeDepth(float InInDepth)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetFilterEnvelopeDepth");

	Params::USynthComponentMonoWaveTable_SetFilterEnvelopeDepth_Params Parms{};

	Parms.InDepth = InInDepth;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeBiasInvert
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInBiasInvert                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USynthComponentMonoWaveTable::SetFilterEnvelopeBiasInvert(bool InbInBiasInvert)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetFilterEnvelopeBiasInvert");

	Params::USynthComponentMonoWaveTable_SetFilterEnvelopeBiasInvert_Params Parms{};

	Parms.bInBiasInvert = InbInBiasInvert;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeBiasDepth
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InDepth                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USynthComponentMonoWaveTable::SetFilterEnvelopeBiasDepth(float InInDepth)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetFilterEnvelopeBiasDepth");

	Params::USynthComponentMonoWaveTable_SetFilterEnvelopeBiasDepth_Params Parms{};

	Parms.InDepth = InInDepth;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeAttackTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InAttackTimeMsec                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USynthComponentMonoWaveTable::SetFilterEnvelopeAttackTime(float InInAttackTimeMsec)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetFilterEnvelopeAttackTime");

	Params::USynthComponentMonoWaveTable_SetFilterEnvelopeAttackTime_Params Parms{};

	Parms.InAttackTimeMsec = InInAttackTimeMsec;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetCurveValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              TableIndex                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              KeyframeIndex                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              NewValue                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USynthComponentMonoWaveTable::SetCurveValue(int32 InTableIndex, int32 InKeyframeIndex, float InNewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetCurveValue");

	Params::USynthComponentMonoWaveTable_SetCurveValue_Params Parms{};

	Parms.TableIndex = InTableIndex;
	Parms.KeyframeIndex = InKeyframeIndex;
	Parms.NewValue = InNewValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetCurveTangent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              TableIndex                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InNewTangent                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USynthComponentMonoWaveTable::SetCurveTangent(int32 InTableIndex, float InInNewTangent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetCurveTangent");

	Params::USynthComponentMonoWaveTable_SetCurveTangent_Params Parms{};

	Parms.TableIndex = InTableIndex;
	Parms.InNewTangent = InInNewTangent;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetCurveInterpolationType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ECurveInterpolationType InterpolationType                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              TableIndex                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USynthComponentMonoWaveTable::SetCurveInterpolationType(enum class ECurveInterpolationType InInterpolationType, int32 InTableIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetCurveInterpolationType");

	Params::USynthComponentMonoWaveTable_SetCurveInterpolationType_Params Parms{};

	Parms.InterpolationType = InInterpolationType;
	Parms.TableIndex = InTableIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeSustainGain
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InSustainGain                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USynthComponentMonoWaveTable::SetAmpEnvelopeSustainGain(float InInSustainGain)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetAmpEnvelopeSustainGain");

	Params::USynthComponentMonoWaveTable_SetAmpEnvelopeSustainGain_Params Parms{};

	Parms.InSustainGain = InInSustainGain;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeReleaseTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InReleaseTimeMsec                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USynthComponentMonoWaveTable::SetAmpEnvelopeReleaseTime(float InInReleaseTimeMsec)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetAmpEnvelopeReleaseTime");

	Params::USynthComponentMonoWaveTable_SetAmpEnvelopeReleaseTime_Params Parms{};

	Parms.InReleaseTimeMsec = InInReleaseTimeMsec;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeInvert
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInInvert                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USynthComponentMonoWaveTable::SetAmpEnvelopeInvert(bool InbInInvert)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetAmpEnvelopeInvert");

	Params::USynthComponentMonoWaveTable_SetAmpEnvelopeInvert_Params Parms{};

	Parms.bInInvert = InbInInvert;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeDepth
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InDepth                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USynthComponentMonoWaveTable::SetAmpEnvelopeDepth(float InInDepth)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetAmpEnvelopeDepth");

	Params::USynthComponentMonoWaveTable_SetAmpEnvelopeDepth_Params Parms{};

	Parms.InDepth = InInDepth;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeDecayTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InDecayTimeMsec                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USynthComponentMonoWaveTable::SetAmpEnvelopeDecayTime(float InInDecayTimeMsec)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetAmpEnvelopeDecayTime");

	Params::USynthComponentMonoWaveTable_SetAmpEnvelopeDecayTime_Params Parms{};

	Parms.InDecayTimeMsec = InInDecayTimeMsec;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeBiasInvert
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInBiasInvert                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USynthComponentMonoWaveTable::SetAmpEnvelopeBiasInvert(bool InbInBiasInvert)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetAmpEnvelopeBiasInvert");

	Params::USynthComponentMonoWaveTable_SetAmpEnvelopeBiasInvert_Params Parms{};

	Parms.bInBiasInvert = InbInBiasInvert;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeBiasDepth
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InDepth                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USynthComponentMonoWaveTable::SetAmpEnvelopeBiasDepth(float InInDepth)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetAmpEnvelopeBiasDepth");

	Params::USynthComponentMonoWaveTable_SetAmpEnvelopeBiasDepth_Params Parms{};

	Parms.InDepth = InInDepth;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeAttackTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InAttackTimeMsec                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USynthComponentMonoWaveTable::SetAmpEnvelopeAttackTime(float InInAttackTimeMsec)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetAmpEnvelopeAttackTime");

	Params::USynthComponentMonoWaveTable_SetAmpEnvelopeAttackTime_Params Parms{};

	Parms.InAttackTimeMsec = InInAttackTimeMsec;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SynthComponentMonoWaveTable.RefreshWaveTable
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USynthComponentMonoWaveTable::RefreshWaveTable(int32 InIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "RefreshWaveTable");

	Params::USynthComponentMonoWaveTable_RefreshWaveTable_Params Parms{};

	Parms.Index = InIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SynthComponentMonoWaveTable.RefreshAllWaveTables
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USynthComponentMonoWaveTable::RefreshAllWaveTables()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "RefreshAllWaveTables");

	Params::USynthComponentMonoWaveTable_RefreshAllWaveTables_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SynthComponentMonoWaveTable.NoteOn
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InMidiNote                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InVelocity                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USynthComponentMonoWaveTable::NoteOn(float InInMidiNote, float InInVelocity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "NoteOn");

	Params::USynthComponentMonoWaveTable_NoteOn_Params Parms{};

	Parms.InMidiNote = InInMidiNote;
	Parms.InVelocity = InInVelocity;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SynthComponentMonoWaveTable.NoteOff
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InMidiNote                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USynthComponentMonoWaveTable::NoteOff(float InInMidiNote)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "NoteOff");

	Params::USynthComponentMonoWaveTable_NoteOff_Params Parms{};

	Parms.InMidiNote = InInMidiNote;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SynthComponentMonoWaveTable.GetNumTableEntries
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 USynthComponentMonoWaveTable::GetNumTableEntries()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "GetNumTableEntries");

	Params::USynthComponentMonoWaveTable_GetNumTableEntries_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Synthesis.SynthComponentMonoWaveTable.GetMaxTableIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 USynthComponentMonoWaveTable::GetMaxTableIndex()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "GetMaxTableIndex");

	Params::USynthComponentMonoWaveTable_GetMaxTableIndex_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Synthesis.SynthComponentMonoWaveTable.GetKeyFrameValuesForTable
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              TableIndex                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<float>                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<float> USynthComponentMonoWaveTable::GetKeyFrameValuesForTable(float InTableIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "GetKeyFrameValuesForTable");

	Params::USynthComponentMonoWaveTable_GetKeyFrameValuesForTable_Params Parms{};

	Parms.TableIndex = InTableIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Synthesis.SynthComponentMonoWaveTable.GetCurveTangent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              TableIndex                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float USynthComponentMonoWaveTable::GetCurveTangent(int32 InTableIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponentMonoWaveTable", "GetCurveTangent");

	Params::USynthComponentMonoWaveTable_GetCurveTangent_Params Parms{};

	Parms.TableIndex = InTableIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Synthesis.SynthComponentToneGenerator.SetVolume
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InVolume                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USynthComponentToneGenerator::SetVolume(float InInVolume)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponentToneGenerator", "SetVolume");

	Params::USynthComponentToneGenerator_SetVolume_Params Parms{};

	Parms.InVolume = InInVolume;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SynthComponentToneGenerator.SetFrequency
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InFrequency                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USynthComponentToneGenerator::SetFrequency(float InInFrequency)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthComponentToneGenerator", "SetFrequency");

	Params::USynthComponentToneGenerator_SetFrequency_Params Parms{};

	Parms.InFrequency = InInFrequency;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SynthSamplePlayer.SetSoundWave
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USoundWave*                  InSoundWave                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USynthSamplePlayer::SetSoundWave(class USoundWave* InInSoundWave)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthSamplePlayer", "SetSoundWave");

	Params::USynthSamplePlayer_SetSoundWave_Params Parms{};

	Parms.InSoundWave = InInSoundWave;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SynthSamplePlayer.SetScrubTimeWidth
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InScrubTimeWidthSec                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USynthSamplePlayer::SetScrubTimeWidth(float InInScrubTimeWidthSec)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthSamplePlayer", "SetScrubTimeWidth");

	Params::USynthSamplePlayer_SetScrubTimeWidth_Params Parms{};

	Parms.InScrubTimeWidthSec = InInScrubTimeWidthSec;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SynthSamplePlayer.SetScrubMode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bScrubMode                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USynthSamplePlayer::SetScrubMode(bool InbScrubMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthSamplePlayer", "SetScrubMode");

	Params::USynthSamplePlayer_SetScrubMode_Params Parms{};

	Parms.bScrubMode = InbScrubMode;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SynthSamplePlayer.SetPitch
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InPitch                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              TimeSec                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USynthSamplePlayer::SetPitch(float InInPitch, float InTimeSec)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthSamplePlayer", "SetPitch");

	Params::USynthSamplePlayer_SetPitch_Params Parms{};

	Parms.InPitch = InInPitch;
	Parms.TimeSec = InTimeSec;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SynthSamplePlayer.SeekToTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              TimeSec                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ESamplePlayerSeekType   SeekType                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bWrap                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USynthSamplePlayer::SeekToTime(float InTimeSec, enum class ESamplePlayerSeekType InSeekType, bool InbWrap)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthSamplePlayer", "SeekToTime");

	Params::USynthSamplePlayer_SeekToTime_Params Parms{};

	Parms.TimeSec = InTimeSec;
	Parms.SeekType = InSeekType;
	Parms.bWrap = InbWrap;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SynthSamplePlayer.IsLoaded
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USynthSamplePlayer::IsLoaded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthSamplePlayer", "IsLoaded");

	Params::USynthSamplePlayer_IsLoaded_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Synthesis.SynthSamplePlayer.GetSampleDuration
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float USynthSamplePlayer::GetSampleDuration()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthSamplePlayer", "GetSampleDuration");

	Params::USynthSamplePlayer_GetSampleDuration_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Synthesis.SynthSamplePlayer.GetCurrentPlaybackProgressTime
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float USynthSamplePlayer::GetCurrentPlaybackProgressTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthSamplePlayer", "GetCurrentPlaybackProgressTime");

	Params::USynthSamplePlayer_GetCurrentPlaybackProgressTime_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Synthesis.SynthSamplePlayer.GetCurrentPlaybackProgressPercent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float USynthSamplePlayer::GetCurrentPlaybackProgressPercent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthSamplePlayer", "GetCurrentPlaybackProgressPercent");

	Params::USynthSamplePlayer_GetCurrentPlaybackProgressPercent_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Synthesis.SynthesisUtilitiesBlueprintFunctionLibrary.GetLogFrequency
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// float                              InLinearValue                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InDomainMin                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InDomainMax                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InRangeMin                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InRangeMax                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float USynthesisUtilitiesBlueprintFunctionLibrary::GetLogFrequency(float InInLinearValue, float InInDomainMin, float InInDomainMax, float InInRangeMin, float InInRangeMax)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthesisUtilitiesBlueprintFunctionLibrary", "GetLogFrequency");

	Params::USynthesisUtilitiesBlueprintFunctionLibrary_GetLogFrequency_Params Parms{};

	Parms.InLinearValue = InInLinearValue;
	Parms.InDomainMin = InInDomainMin;
	Parms.InDomainMax = InInDomainMax;
	Parms.InRangeMin = InInRangeMin;
	Parms.InRangeMax = InInRangeMax;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Synthesis.SynthesisUtilitiesBlueprintFunctionLibrary.GetLinearFrequency
// (Final, Native, Static, Private, BlueprintCallable)
// Parameters:
// float                              InLogFrequencyValue                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InDomainMin                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InDomainMax                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InRangeMin                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InRangeMax                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float USynthesisUtilitiesBlueprintFunctionLibrary::GetLinearFrequency(float InInLogFrequencyValue, float InInDomainMin, float InInDomainMax, float InInRangeMin, float InInRangeMax)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthesisUtilitiesBlueprintFunctionLibrary", "GetLinearFrequency");

	Params::USynthesisUtilitiesBlueprintFunctionLibrary_GetLinearFrequency_Params Parms{};

	Parms.InLogFrequencyValue = InInLogFrequencyValue;
	Parms.InDomainMin = InInDomainMin;
	Parms.InDomainMax = InInDomainMax;
	Parms.InRangeMin = InInRangeMin;
	Parms.InRangeMax = InInRangeMax;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Synthesis.Synth2DSlider.SetValue
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D                   InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USynth2DSlider::SetValue(const struct FVector2D& InInValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Synth2DSlider", "SetValue");

	Params::USynth2DSlider_SetValue_Params Parms{};

	Parms.InValue = InInValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.Synth2DSlider.SetStepSize
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USynth2DSlider::SetStepSize(float InInValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Synth2DSlider", "SetStepSize");

	Params::USynth2DSlider_SetStepSize_Params Parms{};

	Parms.InValue = InInValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.Synth2DSlider.SetSliderHandleColor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor                InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USynth2DSlider::SetSliderHandleColor(const struct FLinearColor& InInValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Synth2DSlider", "SetSliderHandleColor");

	Params::USynth2DSlider_SetSliderHandleColor_Params Parms{};

	Parms.InValue = InInValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.Synth2DSlider.SetLocked
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USynth2DSlider::SetLocked(bool InInValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Synth2DSlider", "SetLocked");

	Params::USynth2DSlider_SetLocked_Params Parms{};

	Parms.InValue = InInValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.Synth2DSlider.SetIndentHandle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USynth2DSlider::SetIndentHandle(bool InInValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Synth2DSlider", "SetIndentHandle");

	Params::USynth2DSlider_SetIndentHandle_Params Parms{};

	Parms.InValue = InInValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.Synth2DSlider.GetValue
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector2D                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector2D USynth2DSlider::GetValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Synth2DSlider", "GetValue");

	Params::USynth2DSlider_GetValue_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Synthesis.SynthKnob.SetValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USynthKnob::SetValue(float InInValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthKnob", "SetValue");

	Params::USynthKnob_SetValue_Params Parms{};

	Parms.InValue = InInValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SynthKnob.SetStepSize
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USynthKnob::SetStepSize(float InInValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthKnob", "SetStepSize");

	Params::USynthKnob_SetStepSize_Params Parms{};

	Parms.InValue = InInValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SynthKnob.SetLocked
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USynthKnob::SetLocked(bool InInValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthKnob", "SetLocked");

	Params::USynthKnob_SetLocked_Params Parms{};

	Parms.InValue = InInValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SynthKnob.GetValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float USynthKnob::GetValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynthKnob", "GetValue");

	Params::USynthKnob_GetValue_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
