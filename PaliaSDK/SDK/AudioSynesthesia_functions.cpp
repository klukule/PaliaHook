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

void USynesthesiaSpectrumAnalyzer::GetCenterFrequencies(float InInSampleRate, TArray<float>* InOutCenterFrequencies)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SynesthesiaSpectrumAnalyzer", "GetCenterFrequencies");

	Params::USynesthesiaSpectrumAnalyzer_GetCenterFrequencies_Params Parms{};

	Parms.InSampleRate = InInSampleRate;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (InOutCenterFrequencies != nullptr)
		*InOutCenterFrequencies = Parms.OutCenterFrequencies;

}


// Function AudioSynesthesia.ConstantQNRT.GetNormalizedChannelConstantQAtTime
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              InSeconds                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              InChannel                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<float>                      OutConstantQ                                                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UConstantQNRT::GetNormalizedChannelConstantQAtTime(float InInSeconds, int32 InInChannel, TArray<float>* InOutConstantQ)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConstantQNRT", "GetNormalizedChannelConstantQAtTime");

	Params::UConstantQNRT_GetNormalizedChannelConstantQAtTime_Params Parms{};

	Parms.InSeconds = InInSeconds;
	Parms.InChannel = InInChannel;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (InOutConstantQ != nullptr)
		*InOutConstantQ = Parms.OutConstantQ;

}


// Function AudioSynesthesia.ConstantQNRT.GetChannelConstantQAtTime
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              InSeconds                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              InChannel                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<float>                      OutConstantQ                                                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UConstantQNRT::GetChannelConstantQAtTime(float InInSeconds, int32 InInChannel, TArray<float>* InOutConstantQ)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ConstantQNRT", "GetChannelConstantQAtTime");

	Params::UConstantQNRT_GetChannelConstantQAtTime_Params Parms{};

	Parms.InSeconds = InInSeconds;
	Parms.InChannel = InInChannel;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (InOutConstantQ != nullptr)
		*InOutConstantQ = Parms.OutConstantQ;

}


// Function AudioSynesthesia.LoudnessNRT.GetNormalizedLoudnessAtTime
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              InSeconds                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              OutLoudness                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULoudnessNRT::GetNormalizedLoudnessAtTime(float InInSeconds, float* InOutLoudness)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoudnessNRT", "GetNormalizedLoudnessAtTime");

	Params::ULoudnessNRT_GetNormalizedLoudnessAtTime_Params Parms{};

	Parms.InSeconds = InInSeconds;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (InOutLoudness != nullptr)
		*InOutLoudness = Parms.OutLoudness;

}


// Function AudioSynesthesia.LoudnessNRT.GetNormalizedChannelLoudnessAtTime
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              InSeconds                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              InChannel                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              OutLoudness                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULoudnessNRT::GetNormalizedChannelLoudnessAtTime(float InInSeconds, int32 InInChannel, float* InOutLoudness)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoudnessNRT", "GetNormalizedChannelLoudnessAtTime");

	Params::ULoudnessNRT_GetNormalizedChannelLoudnessAtTime_Params Parms{};

	Parms.InSeconds = InInSeconds;
	Parms.InChannel = InInChannel;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (InOutLoudness != nullptr)
		*InOutLoudness = Parms.OutLoudness;

}


// Function AudioSynesthesia.LoudnessNRT.GetLoudnessAtTime
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              InSeconds                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              OutLoudness                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULoudnessNRT::GetLoudnessAtTime(float InInSeconds, float* InOutLoudness)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoudnessNRT", "GetLoudnessAtTime");

	Params::ULoudnessNRT_GetLoudnessAtTime_Params Parms{};

	Parms.InSeconds = InInSeconds;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (InOutLoudness != nullptr)
		*InOutLoudness = Parms.OutLoudness;

}


// Function AudioSynesthesia.LoudnessNRT.GetChannelLoudnessAtTime
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              InSeconds                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              InChannel                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              OutLoudness                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULoudnessNRT::GetChannelLoudnessAtTime(float InInSeconds, int32 InInChannel, float* InOutLoudness)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LoudnessNRT", "GetChannelLoudnessAtTime");

	Params::ULoudnessNRT_GetChannelLoudnessAtTime_Params Parms{};

	Parms.InSeconds = InInSeconds;
	Parms.InChannel = InInChannel;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (InOutLoudness != nullptr)
		*InOutLoudness = Parms.OutLoudness;

}


// Function AudioSynesthesia.OnsetNRT.GetNormalizedChannelOnsetsBetweenTimes
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              InStartSeconds                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InEndSeconds                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              InChannel                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<float>                      OutOnsetTimestamps                                               (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<float>                      OutOnsetStrengths                                                (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UOnsetNRT::GetNormalizedChannelOnsetsBetweenTimes(float InInStartSeconds, float InInEndSeconds, int32 InInChannel, TArray<float>* InOutOnsetTimestamps, TArray<float>* InOutOnsetStrengths)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OnsetNRT", "GetNormalizedChannelOnsetsBetweenTimes");

	Params::UOnsetNRT_GetNormalizedChannelOnsetsBetweenTimes_Params Parms{};

	Parms.InStartSeconds = InInStartSeconds;
	Parms.InEndSeconds = InInEndSeconds;
	Parms.InChannel = InInChannel;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (InOutOnsetTimestamps != nullptr)
		*InOutOnsetTimestamps = Parms.OutOnsetTimestamps;

	if (InOutOnsetStrengths != nullptr)
		*InOutOnsetStrengths = Parms.OutOnsetStrengths;

}


// Function AudioSynesthesia.OnsetNRT.GetChannelOnsetsBetweenTimes
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              InStartSeconds                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InEndSeconds                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              InChannel                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<float>                      OutOnsetTimestamps                                               (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<float>                      OutOnsetStrengths                                                (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UOnsetNRT::GetChannelOnsetsBetweenTimes(float InInStartSeconds, float InInEndSeconds, int32 InInChannel, TArray<float>* InOutOnsetTimestamps, TArray<float>* InOutOnsetStrengths)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OnsetNRT", "GetChannelOnsetsBetweenTimes");

	Params::UOnsetNRT_GetChannelOnsetsBetweenTimes_Params Parms{};

	Parms.InStartSeconds = InInStartSeconds;
	Parms.InEndSeconds = InInEndSeconds;
	Parms.InChannel = InInChannel;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (InOutOnsetTimestamps != nullptr)
		*InOutOnsetTimestamps = Parms.OutOnsetTimestamps;

	if (InOutOnsetStrengths != nullptr)
		*InOutOnsetStrengths = Parms.OutOnsetStrengths;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
