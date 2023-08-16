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


// Function S6Persist.S6PersistSubsystem.ProcessPersistQueue
// (Final, Native, Private)
// Parameters:

void US6PersistSubsystem::ProcessPersistQueue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6PersistSubsystem", "ProcessPersistQueue");

	Params::US6PersistSubsystem_ProcessPersistQueue_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function S6Persist.S6PersistSubsystem.HandlePendingOpSetComplete
// (Final, Native, Private)
// Parameters:
// bool                               bSuccess                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void US6PersistSubsystem::HandlePendingOpSetComplete(bool bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6PersistSubsystem", "HandlePendingOpSetComplete");

	Params::US6PersistSubsystem_HandlePendingOpSetComplete_Params Parms{};

	Parms.bSuccess = bSuccess;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
