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


// Function EngineSettings.GameMapsSettings.SetSkipAssigningGamepadToPlayer1
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bSkipFirstPlayer                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameMapsSettings::SetSkipAssigningGamepadToPlayer1(bool bSkipFirstPlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameMapsSettings", "SetSkipAssigningGamepadToPlayer1");

	Params::UGameMapsSettings_SetSkipAssigningGamepadToPlayer1_Params Parms{};

	Parms.bSkipFirstPlayer = bSkipFirstPlayer;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function EngineSettings.GameMapsSettings.GetSkipAssigningGamepadToPlayer1
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGameMapsSettings::GetSkipAssigningGamepadToPlayer1()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameMapsSettings", "GetSkipAssigningGamepadToPlayer1");

	Params::UGameMapsSettings_GetSkipAssigningGamepadToPlayer1_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function EngineSettings.GameMapsSettings.GetGameMapsSettings
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UGameMapsSettings*           ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UGameMapsSettings* UGameMapsSettings::GetGameMapsSettings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GameMapsSettings", "GetGameMapsSettings");

	Params::UGameMapsSettings_GetGameMapsSettings_Params Parms{};


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
