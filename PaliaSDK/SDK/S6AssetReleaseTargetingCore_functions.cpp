#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class S6AssetReleaseTargetingCore.S6ReleaseVersioningSettings
// (None)

class UClass* US6ReleaseVersioningSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("S6ReleaseVersioningSettings");

	return Clss;
}


// S6ReleaseVersioningSettings S6AssetReleaseTargetingCore.Default__S6ReleaseVersioningSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class US6ReleaseVersioningSettings* US6ReleaseVersioningSettings::GetDefaultObj()
{
	static class US6ReleaseVersioningSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<US6ReleaseVersioningSettings*>(US6ReleaseVersioningSettings::StaticClass()->DefaultObject);

	return Default;
}


// Function S6AssetReleaseTargetingCore.S6ReleaseVersioningSettings.SanitizeReleaseVersions
// (Final, Native, Public)
// Parameters:

void US6ReleaseVersioningSettings::SanitizeReleaseVersions()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6ReleaseVersioningSettings", "SanitizeReleaseVersions");

	Params::US6ReleaseVersioningSettings_SanitizeReleaseVersions_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class S6AssetReleaseTargetingCore.S6ReleaseVersioningLibrary
// (None)

class UClass* US6ReleaseVersioningLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("S6ReleaseVersioningLibrary");

	return Clss;
}


// S6ReleaseVersioningLibrary S6AssetReleaseTargetingCore.Default__S6ReleaseVersioningLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class US6ReleaseVersioningLibrary* US6ReleaseVersioningLibrary::GetDefaultObj()
{
	static class US6ReleaseVersioningLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<US6ReleaseVersioningLibrary*>(US6ReleaseVersioningLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function S6AssetReleaseTargetingCore.S6ReleaseVersioningLibrary.TryParse
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      VersionString                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FS6ReleaseVersionSpecificationOutReleaseVersion                                                (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool US6ReleaseVersioningLibrary::TryParse(const class FString& VersionString, struct FS6ReleaseVersionSpecification* OutReleaseVersion)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6ReleaseVersioningLibrary", "TryParse");

	Params::US6ReleaseVersioningLibrary_TryParse_Params Parms{};

	Parms.VersionString = VersionString;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutReleaseVersion != nullptr)
		*OutReleaseVersion = std::move(Parms.OutReleaseVersion);

	return Parms.ReturnValue;

}


// Function S6AssetReleaseTargetingCore.S6ReleaseVersioningLibrary.ToString
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FS6ReleaseVersionSpecificationValue                                                            (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString US6ReleaseVersioningLibrary::ToString(struct FS6ReleaseVersionSpecification& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6ReleaseVersioningLibrary", "ToString");

	Params::US6ReleaseVersioningLibrary_ToString_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function S6AssetReleaseTargetingCore.S6ReleaseVersioningLibrary.NotEqual
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FS6ReleaseVersionSpecificationA                                                                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FS6ReleaseVersionSpecificationB                                                                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool US6ReleaseVersioningLibrary::NotEqual(const struct FS6ReleaseVersionSpecification& A, const struct FS6ReleaseVersionSpecification& B)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6ReleaseVersioningLibrary", "NotEqual");

	Params::US6ReleaseVersioningLibrary_NotEqual_Params Parms{};

	Parms.A = A;
	Parms.B = B;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function S6AssetReleaseTargetingCore.S6ReleaseVersioningLibrary.Min
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FS6ReleaseVersionSpecificationA                                                                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FS6ReleaseVersionSpecificationB                                                                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FS6ReleaseVersionSpecificationReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FS6ReleaseVersionSpecification US6ReleaseVersioningLibrary::Min(const struct FS6ReleaseVersionSpecification& A, const struct FS6ReleaseVersionSpecification& B)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6ReleaseVersioningLibrary", "Min");

	Params::US6ReleaseVersioningLibrary_Min_Params Parms{};

	Parms.A = A;
	Parms.B = B;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function S6AssetReleaseTargetingCore.S6ReleaseVersioningLibrary.Max
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FS6ReleaseVersionSpecificationA                                                                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FS6ReleaseVersionSpecificationB                                                                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FS6ReleaseVersionSpecificationReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FS6ReleaseVersionSpecification US6ReleaseVersioningLibrary::Max(const struct FS6ReleaseVersionSpecification& A, const struct FS6ReleaseVersionSpecification& B)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6ReleaseVersioningLibrary", "Max");

	Params::US6ReleaseVersioningLibrary_Max_Params Parms{};

	Parms.A = A;
	Parms.B = B;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function S6AssetReleaseTargetingCore.S6ReleaseVersioningLibrary.LessEqual
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FS6ReleaseVersionSpecificationA                                                                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FS6ReleaseVersionSpecificationB                                                                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool US6ReleaseVersioningLibrary::LessEqual(const struct FS6ReleaseVersionSpecification& A, const struct FS6ReleaseVersionSpecification& B)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6ReleaseVersioningLibrary", "LessEqual");

	Params::US6ReleaseVersioningLibrary_LessEqual_Params Parms{};

	Parms.A = A;
	Parms.B = B;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function S6AssetReleaseTargetingCore.S6ReleaseVersioningLibrary.Less
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FS6ReleaseVersionSpecificationA                                                                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FS6ReleaseVersionSpecificationB                                                                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool US6ReleaseVersioningLibrary::Less(const struct FS6ReleaseVersionSpecification& A, const struct FS6ReleaseVersionSpecification& B)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6ReleaseVersioningLibrary", "Less");

	Params::US6ReleaseVersioningLibrary_Less_Params Parms{};

	Parms.A = A;
	Parms.B = B;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function S6AssetReleaseTargetingCore.S6ReleaseVersioningLibrary.IsValid
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FS6ReleaseVersionSpecificationValue                                                            (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool US6ReleaseVersioningLibrary::IsValid(struct FS6ReleaseVersionSpecification& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6ReleaseVersioningLibrary", "IsValid");

	Params::US6ReleaseVersioningLibrary_IsValid_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function S6AssetReleaseTargetingCore.S6ReleaseVersioningLibrary.GreaterEqual
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FS6ReleaseVersionSpecificationA                                                                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FS6ReleaseVersionSpecificationB                                                                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool US6ReleaseVersioningLibrary::GreaterEqual(const struct FS6ReleaseVersionSpecification& A, const struct FS6ReleaseVersionSpecification& B)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6ReleaseVersioningLibrary", "GreaterEqual");

	Params::US6ReleaseVersioningLibrary_GreaterEqual_Params Parms{};

	Parms.A = A;
	Parms.B = B;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function S6AssetReleaseTargetingCore.S6ReleaseVersioningLibrary.Greater
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FS6ReleaseVersionSpecificationA                                                                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FS6ReleaseVersionSpecificationB                                                                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool US6ReleaseVersioningLibrary::Greater(const struct FS6ReleaseVersionSpecification& A, const struct FS6ReleaseVersionSpecification& B)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6ReleaseVersioningLibrary", "Greater");

	Params::US6ReleaseVersioningLibrary_Greater_Params Parms{};

	Parms.A = A;
	Parms.B = B;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function S6AssetReleaseTargetingCore.S6ReleaseVersioningLibrary.GetUnspecifiedReleaseVersionSpec
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FS6ReleaseVersionSpecificationReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FS6ReleaseVersionSpecification US6ReleaseVersioningLibrary::GetUnspecifiedReleaseVersionSpec()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6ReleaseVersioningLibrary", "GetUnspecifiedReleaseVersionSpec");

	Params::US6ReleaseVersioningLibrary_GetUnspecifiedReleaseVersionSpec_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function S6AssetReleaseTargetingCore.S6ReleaseVersioningLibrary.GetFutureReleaseVersionSpec
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FS6ReleaseVersionSpecificationReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FS6ReleaseVersionSpecification US6ReleaseVersioningLibrary::GetFutureReleaseVersionSpec()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6ReleaseVersioningLibrary", "GetFutureReleaseVersionSpec");

	Params::US6ReleaseVersioningLibrary_GetFutureReleaseVersionSpec_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function S6AssetReleaseTargetingCore.S6ReleaseVersioningLibrary.GetCurrentReleaseVersionSpec
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FS6ReleaseVersionSpecificationReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FS6ReleaseVersionSpecification US6ReleaseVersioningLibrary::GetCurrentReleaseVersionSpec()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6ReleaseVersioningLibrary", "GetCurrentReleaseVersionSpec");

	Params::US6ReleaseVersioningLibrary_GetCurrentReleaseVersionSpec_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function S6AssetReleaseTargetingCore.S6ReleaseVersioningLibrary.EqualEqual
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FS6ReleaseVersionSpecificationA                                                                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FS6ReleaseVersionSpecificationB                                                                (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool US6ReleaseVersioningLibrary::EqualEqual(const struct FS6ReleaseVersionSpecification& A, const struct FS6ReleaseVersionSpecification& B)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6ReleaseVersioningLibrary", "EqualEqual");

	Params::US6ReleaseVersioningLibrary_EqualEqual_Params Parms{};

	Parms.A = A;
	Parms.B = B;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


