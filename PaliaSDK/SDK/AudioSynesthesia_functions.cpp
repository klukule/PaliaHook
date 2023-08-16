#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function AudioSynesthesia.SynesthesiaSpectrumAnalyzer.GetNumCenterFrequencies
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 USynesthesiaSpectrumAnalyzer::GetNumCenterFrequencies()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynesthesiaSpectrumAnalyzer", "GetNumCenterFrequencies");

	Params::USynesthesiaSpectrumAnalyzer_GetNumCenterFrequencies_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function AudioSynesthesia.SynesthesiaSpectrumAnalyzer.GetCenterFrequencies
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// float                              InSampleRate                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<float>                      OutCenterFrequencies                                             (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void USynesthesiaSpectrumAnalyzer::GetCenterFrequencies(float InSampleRate, TArray<float>* OutCenterFrequencies)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynesthesiaSpectrumAnalyzer", "GetCenterFrequencies");

	Params::USynesthesiaSpectrumAnalyzer_GetCenterFrequencies_Params Parms{};

	Parms.InSampleRate = InSampleRate;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutCenterFrequencies != nullptr)
		*OutCenterFrequencies = Parms.OutCenterFrequencies;

}


// Function AudioSynesthesia.ConstantQNRT.GetNormalizedChannelConstantQAtTime
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              InSeconds                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              InChannel                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<float>                      OutConstantQ                                                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UConstantQNRT::GetNormalizedChannelConstantQAtTime(float InSeconds, int32 InChannel, TArray<float>* OutConstantQ)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConstantQNRT", "GetNormalizedChannelConstantQAtTime");

	Params::UConstantQNRT_GetNormalizedChannelConstantQAtTime_Params Parms{};

	Parms.InSeconds = InSeconds;
	Parms.InChannel = InChannel;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutConstantQ != nullptr)
		*OutConstantQ = Parms.OutConstantQ;

}


// Function AudioSynesthesia.ConstantQNRT.GetChannelConstantQAtTime
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              InSeconds                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              InChannel                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<float>                      OutConstantQ                                                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UConstantQNRT::GetChannelConstantQAtTime(float InSeconds, int32 InChannel, TArray<float>* OutConstantQ)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConstantQNRT", "GetChannelConstantQAtTime");

	Params::UConstantQNRT_GetChannelConstantQAtTime_Params Parms{};

	Parms.InSeconds = InSeconds;
	Parms.InChannel = InChannel;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutConstantQ != nullptr)
		*OutConstantQ = Parms.OutConstantQ;

}


// Function AudioSynesthesia.LoudnessNRT.GetNormalizedLoudnessAtTime
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              InSeconds                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              OutLoudness                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULoudnessNRT::GetNormalizedLoudnessAtTime(float InSeconds, float* OutLoudness)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoudnessNRT", "GetNormalizedLoudnessAtTime");

	Params::ULoudnessNRT_GetNormalizedLoudnessAtTime_Params Parms{};

	Parms.InSeconds = InSeconds;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutLoudness != nullptr)
		*OutLoudness = Parms.OutLoudness;

}


// Function AudioSynesthesia.LoudnessNRT.GetNormalizedChannelLoudnessAtTime
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              InSeconds                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              InChannel                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              OutLoudness                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULoudnessNRT::GetNormalizedChannelLoudnessAtTime(float InSeconds, int32 InChannel, float* OutLoudness)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoudnessNRT", "GetNormalizedChannelLoudnessAtTime");

	Params::ULoudnessNRT_GetNormalizedChannelLoudnessAtTime_Params Parms{};

	Parms.InSeconds = InSeconds;
	Parms.InChannel = InChannel;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutLoudness != nullptr)
		*OutLoudness = Parms.OutLoudness;

}


// Function AudioSynesthesia.LoudnessNRT.GetLoudnessAtTime
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              InSeconds                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              OutLoudness                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULoudnessNRT::GetLoudnessAtTime(float InSeconds, float* OutLoudness)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoudnessNRT", "GetLoudnessAtTime");

	Params::ULoudnessNRT_GetLoudnessAtTime_Params Parms{};

	Parms.InSeconds = InSeconds;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutLoudness != nullptr)
		*OutLoudness = Parms.OutLoudness;

}


// Function AudioSynesthesia.LoudnessNRT.GetChannelLoudnessAtTime
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              InSeconds                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              InChannel                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              OutLoudness                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULoudnessNRT::GetChannelLoudnessAtTime(float InSeconds, int32 InChannel, float* OutLoudness)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoudnessNRT", "GetChannelLoudnessAtTime");

	Params::ULoudnessNRT_GetChannelLoudnessAtTime_Params Parms{};

	Parms.InSeconds = InSeconds;
	Parms.InChannel = InChannel;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutLoudness != nullptr)
		*OutLoudness = Parms.OutLoudness;

}


// Function AudioSynesthesia.OnsetNRT.GetNormalizedChannelOnsetsBetweenTimes
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              InStartSeconds                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InEndSeconds                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              InChannel                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<float>                      OutOnsetTimestamps                                               (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<float>                      OutOnsetStrengths                                                (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UOnsetNRT::GetNormalizedChannelOnsetsBetweenTimes(float InStartSeconds, float InEndSeconds, int32 InChannel, TArray<float>* OutOnsetTimestamps, TArray<float>* OutOnsetStrengths)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OnsetNRT", "GetNormalizedChannelOnsetsBetweenTimes");

	Params::UOnsetNRT_GetNormalizedChannelOnsetsBetweenTimes_Params Parms{};

	Parms.InStartSeconds = InStartSeconds;
	Parms.InEndSeconds = InEndSeconds;
	Parms.InChannel = InChannel;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutOnsetTimestamps != nullptr)
		*OutOnsetTimestamps = Parms.OutOnsetTimestamps;

	if (OutOnsetStrengths != nullptr)
		*OutOnsetStrengths = Parms.OutOnsetStrengths;

}


// Function AudioSynesthesia.OnsetNRT.GetChannelOnsetsBetweenTimes
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              InStartSeconds                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InEndSeconds                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              InChannel                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<float>                      OutOnsetTimestamps                                               (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<float>                      OutOnsetStrengths                                                (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UOnsetNRT::GetChannelOnsetsBetweenTimes(float InStartSeconds, float InEndSeconds, int32 InChannel, TArray<float>* OutOnsetTimestamps, TArray<float>* OutOnsetStrengths)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OnsetNRT", "GetChannelOnsetsBetweenTimes");

	Params::UOnsetNRT_GetChannelOnsetsBetweenTimes_Params Parms{};

	Parms.InStartSeconds = InStartSeconds;
	Parms.InEndSeconds = InEndSeconds;
	Parms.InChannel = InChannel;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutOnsetTimestamps != nullptr)
		*OutOnsetTimestamps = Parms.OutOnsetTimestamps;

	if (OutOnsetStrengths != nullptr)
		*OutOnsetStrengths = Parms.OutOnsetStrengths;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
