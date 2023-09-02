#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class S6Persist.S6PersistConfiguration
// (None)

class UClass* US6PersistConfiguration::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("S6PersistConfiguration");

	return Clss;
}


// S6PersistConfiguration S6Persist.Default__S6PersistConfiguration
// (Public, ClassDefaultObject, ArchetypeObject)

class US6PersistConfiguration* US6PersistConfiguration::GetDefaultObj()
{
	static class US6PersistConfiguration* Default = nullptr;

	if (!Default)
		Default = static_cast<US6PersistConfiguration*>(US6PersistConfiguration::StaticClass()->DefaultObject);

	return Default;
}


// Class S6Persist.S6PersistSubsystem
// (None)

class UClass* US6PersistSubsystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("S6PersistSubsystem");

	return Clss;
}


// S6PersistSubsystem S6Persist.Default__S6PersistSubsystem
// (Public, ClassDefaultObject, ArchetypeObject)

class US6PersistSubsystem* US6PersistSubsystem::GetDefaultObj()
{
	static class US6PersistSubsystem* Default = nullptr;

	if (!Default)
		Default = static_cast<US6PersistSubsystem*>(US6PersistSubsystem::StaticClass()->DefaultObject);

	return Default;
}


// Function S6Persist.S6PersistSubsystem.ProcessPersistQueue
// (Final, Native, Private)
// Parameters:

void US6PersistSubsystem::ProcessPersistQueue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6PersistSubsystem", "ProcessPersistQueue");

	Params::US6PersistSubsystem_ProcessPersistQueue_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


