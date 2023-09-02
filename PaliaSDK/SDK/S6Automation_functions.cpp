#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class S6Automation.S6Auto_Suite
// (None)

class UClass* US6Auto_Suite::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("S6Auto_Suite");

	return Clss;
}


// S6Auto_Suite S6Automation.Default__S6Auto_Suite
// (Public, ClassDefaultObject, ArchetypeObject)

class US6Auto_Suite* US6Auto_Suite::GetDefaultObj()
{
	static class US6Auto_Suite* Default = nullptr;

	if (!Default)
		Default = static_cast<US6Auto_Suite*>(US6Auto_Suite::StaticClass()->DefaultObject);

	return Default;
}


// Class S6Automation.S6Auto_SuiteSubsystem
// (None)

class UClass* US6Auto_SuiteSubsystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("S6Auto_SuiteSubsystem");

	return Clss;
}


// S6Auto_SuiteSubsystem S6Automation.Default__S6Auto_SuiteSubsystem
// (Public, ClassDefaultObject, ArchetypeObject)

class US6Auto_SuiteSubsystem* US6Auto_SuiteSubsystem::GetDefaultObj()
{
	static class US6Auto_SuiteSubsystem* Default = nullptr;

	if (!Default)
		Default = static_cast<US6Auto_SuiteSubsystem*>(US6Auto_SuiteSubsystem::StaticClass()->DefaultObject);

	return Default;
}


// Function S6Automation.S6Auto_SuiteSubsystem.RunSuites
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<class US6Auto_Suite*>       Suites                                                           (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)

void US6Auto_SuiteSubsystem::RunSuites(const TArray<class US6Auto_Suite*>& Suites)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6Auto_SuiteSubsystem", "RunSuites");

	Params::US6Auto_SuiteSubsystem_RunSuites_Params Parms{};

	Parms.Suites = Suites;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class S6Automation.S6Auto_SuiteBlackboard
// (None)

class UClass* US6Auto_SuiteBlackboard::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("S6Auto_SuiteBlackboard");

	return Clss;
}


// S6Auto_SuiteBlackboard S6Automation.Default__S6Auto_SuiteBlackboard
// (Public, ClassDefaultObject, ArchetypeObject)

class US6Auto_SuiteBlackboard* US6Auto_SuiteBlackboard::GetDefaultObj()
{
	static class US6Auto_SuiteBlackboard* Default = nullptr;

	if (!Default)
		Default = static_cast<US6Auto_SuiteBlackboard*>(US6Auto_SuiteBlackboard::StaticClass()->DefaultObject);

	return Default;
}


// Class S6Automation.S6Auto_SuiteStepPayload
// (None)

class UClass* US6Auto_SuiteStepPayload::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("S6Auto_SuiteStepPayload");

	return Clss;
}


// S6Auto_SuiteStepPayload S6Automation.Default__S6Auto_SuiteStepPayload
// (Public, ClassDefaultObject, ArchetypeObject)

class US6Auto_SuiteStepPayload* US6Auto_SuiteStepPayload::GetDefaultObj()
{
	static class US6Auto_SuiteStepPayload* Default = nullptr;

	if (!Default)
		Default = static_cast<US6Auto_SuiteStepPayload*>(US6Auto_SuiteStepPayload::StaticClass()->DefaultObject);

	return Default;
}


// Class S6Automation.S6Auto_SuiteStepScript
// (None)

class UClass* US6Auto_SuiteStepScript::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("S6Auto_SuiteStepScript");

	return Clss;
}


// S6Auto_SuiteStepScript S6Automation.Default__S6Auto_SuiteStepScript
// (Public, ClassDefaultObject, ArchetypeObject)

class US6Auto_SuiteStepScript* US6Auto_SuiteStepScript::GetDefaultObj()
{
	static class US6Auto_SuiteStepScript* Default = nullptr;

	if (!Default)
		Default = static_cast<US6Auto_SuiteStepScript*>(US6Auto_SuiteStepScript::StaticClass()->DefaultObject);

	return Default;
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

void US6Auto_SuiteStepScript::MarkStepFailed(const class FString& ErrorMessage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6Auto_SuiteStepScript", "MarkStepFailed");

	Params::US6Auto_SuiteStepScript_MarkStepFailed_Params Parms{};

	Parms.ErrorMessage = ErrorMessage;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function S6Automation.S6Auto_SuiteStepScript.GetScriptDisplayName
// (Event, Public, BlueprintEvent, Const)
// Parameters:
// class US6Auto_SuiteStepPayload*    ScriptPayload                                                    (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString US6Auto_SuiteStepScript::GetScriptDisplayName(class US6Auto_SuiteStepPayload* ScriptPayload)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6Auto_SuiteStepScript", "GetScriptDisplayName");

	Params::US6Auto_SuiteStepScript_GetScriptDisplayName_Params Parms{};

	Parms.ScriptPayload = ScriptPayload;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Class S6Automation.S6AutoStatics
// (None)

class UClass* US6AutoStatics::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("S6AutoStatics");

	return Clss;
}


// S6AutoStatics S6Automation.Default__S6AutoStatics
// (Public, ClassDefaultObject, ArchetypeObject)

class US6AutoStatics* US6AutoStatics::GetDefaultObj()
{
	static class US6AutoStatics* Default = nullptr;

	if (!Default)
		Default = static_cast<US6AutoStatics*>(US6AutoStatics::StaticClass()->DefaultObject);

	return Default;
}


// Function S6Automation.S6AutoStatics.GetSuitesFromId
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      SuiteId                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<TSoftObjectPtr<class US6Auto_Suite>>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, UObjectWrapper, NativeAccessSpecifierPublic)

TArray<TSoftObjectPtr<class US6Auto_Suite>> US6AutoStatics::GetSuitesFromId(const class FString& SuiteId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6AutoStatics", "GetSuitesFromId");

	Params::US6AutoStatics_GetSuitesFromId_Params Parms{};

	Parms.SuiteId = SuiteId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function S6Automation.S6AutoStatics.GetSuitesFromAssetName
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        SuiteAssetName                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<TSoftObjectPtr<class US6Auto_Suite>>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, UObjectWrapper, NativeAccessSpecifierPublic)

TArray<TSoftObjectPtr<class US6Auto_Suite>> US6AutoStatics::GetSuitesFromAssetName(class FName& SuiteAssetName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6AutoStatics", "GetSuitesFromAssetName");

	Params::US6AutoStatics_GetSuitesFromAssetName_Params Parms{};

	Parms.SuiteAssetName = SuiteAssetName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


