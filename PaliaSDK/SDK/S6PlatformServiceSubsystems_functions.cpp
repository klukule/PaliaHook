#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class S6PlatformServiceSubsystems.S6PLAT_PlayerBehaviorSubsystem
// (None)

class UClass* US6PLAT_PlayerBehaviorSubsystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("S6PLAT_PlayerBehaviorSubsystem");

	return Clss;
}


// S6PLAT_PlayerBehaviorSubsystem S6PlatformServiceSubsystems.Default__S6PLAT_PlayerBehaviorSubsystem
// (Public, ClassDefaultObject, ArchetypeObject)

class US6PLAT_PlayerBehaviorSubsystem* US6PLAT_PlayerBehaviorSubsystem::GetDefaultObj()
{
	static class US6PLAT_PlayerBehaviorSubsystem* Default = nullptr;

	if (!Default)
		Default = static_cast<US6PLAT_PlayerBehaviorSubsystem*>(US6PLAT_PlayerBehaviorSubsystem::StaticClass()->DefaultObject);

	return Default;
}


// Function S6PlatformServiceSubsystems.S6PLAT_PlayerBehaviorSubsystem.ValidateReportForm
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FS6PLAT_PlayerBehaviorReportFormReportForm                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool US6PLAT_PlayerBehaviorSubsystem::ValidateReportForm(struct FS6PLAT_PlayerBehaviorReportForm& ReportForm)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6PLAT_PlayerBehaviorSubsystem", "ValidateReportForm");

	Params::US6PLAT_PlayerBehaviorSubsystem_ValidateReportForm_Params Parms{};

	Parms.ReportForm = ReportForm;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// DelegateFunction S6PlatformServiceSubsystems.S6PLAT_PlayerBehaviorSubsystem.ReportSubmitedDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class US6PLAT_PlayerBehaviorSubsystem*PlayerBehaviorSubsystem                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FS6PLAT_PlayerBehaviorReportFormReportForm                                                       (ConstParm, Parm, NativeAccessSpecifierPublic)
// bool                               bDidSucceed                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void US6PLAT_PlayerBehaviorSubsystem::ReportSubmitedDelegate__DelegateSignature(class US6PLAT_PlayerBehaviorSubsystem* PlayerBehaviorSubsystem, const struct FS6PLAT_PlayerBehaviorReportForm& ReportForm, bool bDidSucceed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6PLAT_PlayerBehaviorSubsystem", "ReportSubmitedDelegate__DelegateSignature");

	Params::US6PLAT_PlayerBehaviorSubsystem_ReportSubmitedDelegate__DelegateSignature_Params Parms{};

	Parms.PlayerBehaviorSubsystem = PlayerBehaviorSubsystem;
	Parms.ReportForm = ReportForm;
	Parms.bDidSucceed = bDidSucceed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function S6PlatformServiceSubsystems.S6PLAT_PlayerBehaviorSubsystem.ReportPlayerBehavior
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FS6PLAT_PlayerBehaviorReportFormReportForm                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void US6PLAT_PlayerBehaviorSubsystem::ReportPlayerBehavior(struct FS6PLAT_PlayerBehaviorReportForm& ReportForm)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6PLAT_PlayerBehaviorSubsystem", "ReportPlayerBehavior");

	Params::US6PLAT_PlayerBehaviorSubsystem_ReportPlayerBehavior_Params Parms{};

	Parms.ReportForm = ReportForm;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function S6PlatformServiceSubsystems.S6PLAT_PlayerBehaviorSubsystem.IsReady
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool US6PLAT_PlayerBehaviorSubsystem::IsReady()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6PLAT_PlayerBehaviorSubsystem", "IsReady");

	Params::US6PLAT_PlayerBehaviorSubsystem_IsReady_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function S6PlatformServiceSubsystems.S6PLAT_PlayerBehaviorSubsystem.GetValidReportCategoriesByType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ES6PLAT_PlayerBehaviorReportTypeReportType                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TMap<class FName, struct FS6PLAT_PlayerBehaviorReportCategoryInfo>ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

TMap<class FName, struct FS6PLAT_PlayerBehaviorReportCategoryInfo> US6PLAT_PlayerBehaviorSubsystem::GetValidReportCategoriesByType(enum class ES6PLAT_PlayerBehaviorReportType ReportType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6PLAT_PlayerBehaviorSubsystem", "GetValidReportCategoriesByType");

	Params::US6PLAT_PlayerBehaviorSubsystem_GetValidReportCategoriesByType_Params Parms{};

	Parms.ReportType = ReportType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function S6PlatformServiceSubsystems.S6PLAT_PlayerBehaviorSubsystem.GetValidReportCategories
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TMap<class FName, struct FS6PLAT_PlayerBehaviorReportCategoryInfo>ReturnValue                                                      (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

TMap<class FName, struct FS6PLAT_PlayerBehaviorReportCategoryInfo> US6PLAT_PlayerBehaviorSubsystem::GetValidReportCategories()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6PLAT_PlayerBehaviorSubsystem", "GetValidReportCategories");

	Params::US6PLAT_PlayerBehaviorSubsystem_GetValidReportCategories_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


