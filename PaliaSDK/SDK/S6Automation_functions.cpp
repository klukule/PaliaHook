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


// Function S6Automation.S6Auto_SuiteSubsystem.RunSuites
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<class US6Auto_Suite*>       Suites                                                           (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)

void US6Auto_SuiteSubsystem::RunSuites(const TArray<class US6Auto_Suite*>& InSuites)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6Auto_SuiteSubsystem", "RunSuites");

	Params::US6Auto_SuiteSubsystem_RunSuites_Params Parms{};

	Parms.Suites = InSuites;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function S6Automation.S6Auto_SuiteStepScript.StartStep
// (Event, Public, BlueprintEvent)
// Parameters:

void US6Auto_SuiteStepScript::StartStep()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6Auto_SuiteStepScript", "StartStep");

	Params::US6Auto_SuiteStepScript_StartStep_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function S6Automation.S6Auto_SuiteStepScript.MarkStepFailed
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      ErrorMessage                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void US6Auto_SuiteStepScript::MarkStepFailed(const class FString& InErrorMessage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6Auto_SuiteStepScript", "MarkStepFailed");

	Params::US6Auto_SuiteStepScript_MarkStepFailed_Params Parms{};

	Parms.ErrorMessage = InErrorMessage;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function S6Automation.S6Auto_SuiteStepScript.MarkStepCompleted
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void US6Auto_SuiteStepScript::MarkStepCompleted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6Auto_SuiteStepScript", "MarkStepCompleted");

	Params::US6Auto_SuiteStepScript_MarkStepCompleted_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function S6Automation.S6Auto_SuiteStepScript.GetScriptDisplayName
// (Event, Public, BlueprintEvent, Const)
// Parameters:
// class US6Auto_SuiteStepPayload*    ScriptPayload                                                    (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString US6Auto_SuiteStepScript::GetScriptDisplayName(class US6Auto_SuiteStepPayload* InScriptPayload)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6Auto_SuiteStepScript", "GetScriptDisplayName");

	Params::US6Auto_SuiteStepScript_GetScriptDisplayName_Params Parms{};

	Parms.ScriptPayload = InScriptPayload;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function S6Automation.S6AutoStatics.GetSuitesFromId
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      SuiteId                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<TSoftObjectPtr<class US6Auto_Suite>>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, UObjectWrapper, NativeAccessSpecifierPublic)

TArray<TSoftObjectPtr<class US6Auto_Suite>> US6AutoStatics::GetSuitesFromId(const class FString& InSuiteId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6AutoStatics", "GetSuitesFromId");

	Params::US6AutoStatics_GetSuitesFromId_Params Parms{};

	Parms.SuiteId = InSuiteId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function S6Automation.S6AutoStatics.GetSuitesFromAssetName
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        SuiteAssetName                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<TSoftObjectPtr<class US6Auto_Suite>>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, UObjectWrapper, NativeAccessSpecifierPublic)

TArray<TSoftObjectPtr<class US6Auto_Suite>> US6AutoStatics::GetSuitesFromAssetName(class FName& InSuiteAssetName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6AutoStatics", "GetSuitesFromAssetName");

	Params::US6AutoStatics_GetSuitesFromAssetName_Params Parms{};

	Parms.SuiteAssetName = InSuiteAssetName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function S6Automation.S6AutoStatics.GetAllSuites
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<TSoftObjectPtr<class US6Auto_Suite>>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, UObjectWrapper, NativeAccessSpecifierPublic)

TArray<TSoftObjectPtr<class US6Auto_Suite>> US6AutoStatics::GetAllSuites()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6AutoStatics", "GetAllSuites");

	Params::US6AutoStatics_GetAllSuites_Params Parms{};


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
