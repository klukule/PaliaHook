#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function BPI_MatchmakingQueue.BPI_MatchmakingQueue_C.ResetQueue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_MatchmakingQueue_C::ResetQueue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_MatchmakingQueue_C", "ResetQueue");

	Params::IBPI_MatchmakingQueue_C_ResetQueue_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_MatchmakingQueue.BPI_MatchmakingQueue_C.UpdateNumber
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Number                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_MatchmakingQueue_C::UpdateNumber(int32 Number)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_MatchmakingQueue_C", "UpdateNumber");

	Params::IBPI_MatchmakingQueue_C_UpdateNumber_Params Parms{};

	Parms.Number = Number;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
