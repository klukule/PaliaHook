#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_MatchmakingQueue.BPI_MatchmakingQueue_C
// (None)

class UClass* IBPI_MatchmakingQueue_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_MatchmakingQueue_C");

	return Clss;
}


// BPI_MatchmakingQueue_C BPI_MatchmakingQueue.Default__BPI_MatchmakingQueue_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_MatchmakingQueue_C* IBPI_MatchmakingQueue_C::GetDefaultObj()
{
	static class IBPI_MatchmakingQueue_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_MatchmakingQueue_C*>(IBPI_MatchmakingQueue_C::StaticClass()->DefaultObject);

	return Default;
}


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


