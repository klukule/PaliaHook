#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class S6AssetReleaseTargetingDeveloper.S6AssetReleaseTargetingLibrary
// (None)

class UClass* US6AssetReleaseTargetingLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("S6AssetReleaseTargetingLibrary");

	return Clss;
}


// S6AssetReleaseTargetingLibrary S6AssetReleaseTargetingDeveloper.Default__S6AssetReleaseTargetingLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class US6AssetReleaseTargetingLibrary* US6AssetReleaseTargetingLibrary::GetDefaultObj()
{
	static class US6AssetReleaseTargetingLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<US6AssetReleaseTargetingLibrary*>(US6AssetReleaseTargetingLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function S6AssetReleaseTargetingDeveloper.S6AssetReleaseTargetingLibrary.GetAssetReleaseTargetingInfo_SoftObject
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// TSoftObjectPtr<class UObject>      SoftObject                                                       (ConstParm, Parm, OutParm, ReferenceParm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FS6AssetReleaseTargetingInfoReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FS6AssetReleaseTargetingInfo US6AssetReleaseTargetingLibrary::GetAssetReleaseTargetingInfo_SoftObject(TSoftObjectPtr<class UObject>& SoftObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6AssetReleaseTargetingLibrary", "GetAssetReleaseTargetingInfo_SoftObject");

	Params::US6AssetReleaseTargetingLibrary_GetAssetReleaseTargetingInfo_SoftObject_Params Parms{};

	Parms.SoftObject = SoftObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function S6AssetReleaseTargetingDeveloper.S6AssetReleaseTargetingLibrary.GetAssetReleaseTargetingInfo_PrimaryAssetId
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FPrimaryAssetId             AssetId                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FS6AssetReleaseTargetingInfoReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FS6AssetReleaseTargetingInfo US6AssetReleaseTargetingLibrary::GetAssetReleaseTargetingInfo_PrimaryAssetId(struct FPrimaryAssetId& AssetId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6AssetReleaseTargetingLibrary", "GetAssetReleaseTargetingInfo_PrimaryAssetId");

	Params::US6AssetReleaseTargetingLibrary_GetAssetReleaseTargetingInfo_PrimaryAssetId_Params Parms{};

	Parms.AssetId = AssetId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function S6AssetReleaseTargetingDeveloper.S6AssetReleaseTargetingLibrary.GetAssetReleaseTargetingInfo_ObjectPath
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSoftObjectPath             SoftObjectPath                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FS6AssetReleaseTargetingInfoReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FS6AssetReleaseTargetingInfo US6AssetReleaseTargetingLibrary::GetAssetReleaseTargetingInfo_ObjectPath(struct FSoftObjectPath& SoftObjectPath)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6AssetReleaseTargetingLibrary", "GetAssetReleaseTargetingInfo_ObjectPath");

	Params::US6AssetReleaseTargetingLibrary_GetAssetReleaseTargetingInfo_ObjectPath_Params Parms{};

	Parms.SoftObjectPath = SoftObjectPath;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function S6AssetReleaseTargetingDeveloper.S6AssetReleaseTargetingLibrary.GetAssetReleaseTargetingInfo_Object
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     Object                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FS6AssetReleaseTargetingInfoReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FS6AssetReleaseTargetingInfo US6AssetReleaseTargetingLibrary::GetAssetReleaseTargetingInfo_Object(class UObject* Object)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6AssetReleaseTargetingLibrary", "GetAssetReleaseTargetingInfo_Object");

	Params::US6AssetReleaseTargetingLibrary_GetAssetReleaseTargetingInfo_Object_Params Parms{};

	Parms.Object = Object;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function S6AssetReleaseTargetingDeveloper.S6AssetReleaseTargetingLibrary.GetAssetReleaseTargetingInfo_AssetData
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAssetData                  AssetData                                                        (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FS6AssetReleaseTargetingInfoReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FS6AssetReleaseTargetingInfo US6AssetReleaseTargetingLibrary::GetAssetReleaseTargetingInfo_AssetData(struct FAssetData& AssetData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6AssetReleaseTargetingLibrary", "GetAssetReleaseTargetingInfo_AssetData");

	Params::US6AssetReleaseTargetingLibrary_GetAssetReleaseTargetingInfo_AssetData_Params Parms{};

	Parms.AssetData = AssetData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


