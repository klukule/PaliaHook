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


// Function AudioAnalyzer.AudioAnalyzer.StopAnalyzing
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAudioAnalyzer::StopAnalyzing(class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioAnalyzer", "StopAnalyzing");

	Params::UAudioAnalyzer_StopAnalyzing_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function AudioAnalyzer.AudioAnalyzer.StartAnalyzing
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAudioBus*                   AudioBusToAnalyze                                                (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAudioAnalyzer::StartAnalyzing(class UObject* WorldContextObject, class UAudioBus* AudioBusToAnalyze)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioAnalyzer", "StartAnalyzing");

	Params::UAudioAnalyzer_StartAnalyzing_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.AudioBusToAnalyze = AudioBusToAnalyze;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
