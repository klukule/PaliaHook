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


// Function OnlineSubsystem.TurnBasedMatchInterface.OnMatchReceivedTurn
// (Event, Public, BlueprintEvent)
// Parameters:
// class FString                      Match                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bDidBecomeActive                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ITurnBasedMatchInterface::OnMatchReceivedTurn(const class FString& InMatch, bool InbDidBecomeActive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TurnBasedMatchInterface", "OnMatchReceivedTurn");

	Params::ITurnBasedMatchInterface_OnMatchReceivedTurn_Params Parms{};

	Parms.Match = InMatch;
	Parms.bDidBecomeActive = InbDidBecomeActive;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OnlineSubsystem.TurnBasedMatchInterface.OnMatchEnded
// (Event, Public, BlueprintEvent)
// Parameters:
// class FString                      Match                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ITurnBasedMatchInterface::OnMatchEnded(const class FString& InMatch)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TurnBasedMatchInterface", "OnMatchEnded");

	Params::ITurnBasedMatchInterface_OnMatchEnded_Params Parms{};

	Parms.Match = InMatch;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
