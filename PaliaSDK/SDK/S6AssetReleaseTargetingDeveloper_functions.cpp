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


// Function S6AssetReleaseTargetingDeveloper.S6AssetReleaseTargetingLibrary.GetAssetReleaseTargetingInfo_SoftObject
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// TSoftObjectPtr<class UObject>      SoftObject                                                       (ConstParm, Parm, OutParm, ReferenceParm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FS6AssetReleaseTargetingInfoReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FS6AssetReleaseTargetingInfo US6AssetReleaseTargetingLibrary::GetAssetReleaseTargetingInfo_SoftObject(TSoftObjectPtr<class UObject>& InSoftObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6AssetReleaseTargetingLibrary", "GetAssetReleaseTargetingInfo_SoftObject");

	Params::US6AssetReleaseTargetingLibrary_GetAssetReleaseTargetingInfo_SoftObject_Params Parms{};

	Parms.SoftObject = InSoftObject;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function S6AssetReleaseTargetingDeveloper.S6AssetReleaseTargetingLibrary.GetAssetReleaseTargetingInfo_PrimaryAssetId
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FPrimaryAssetId             AssetId                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FS6AssetReleaseTargetingInfoReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FS6AssetReleaseTargetingInfo US6AssetReleaseTargetingLibrary::GetAssetReleaseTargetingInfo_PrimaryAssetId(struct FPrimaryAssetId& InAssetId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6AssetReleaseTargetingLibrary", "GetAssetReleaseTargetingInfo_PrimaryAssetId");

	Params::US6AssetReleaseTargetingLibrary_GetAssetReleaseTargetingInfo_PrimaryAssetId_Params Parms{};

	Parms.AssetId = InAssetId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function S6AssetReleaseTargetingDeveloper.S6AssetReleaseTargetingLibrary.GetAssetReleaseTargetingInfo_ObjectPath
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FSoftObjectPath             SoftObjectPath                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FS6AssetReleaseTargetingInfoReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FS6AssetReleaseTargetingInfo US6AssetReleaseTargetingLibrary::GetAssetReleaseTargetingInfo_ObjectPath(struct FSoftObjectPath& InSoftObjectPath)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6AssetReleaseTargetingLibrary", "GetAssetReleaseTargetingInfo_ObjectPath");

	Params::US6AssetReleaseTargetingLibrary_GetAssetReleaseTargetingInfo_ObjectPath_Params Parms{};

	Parms.SoftObjectPath = InSoftObjectPath;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function S6AssetReleaseTargetingDeveloper.S6AssetReleaseTargetingLibrary.GetAssetReleaseTargetingInfo_Object
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     Object                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FS6AssetReleaseTargetingInfoReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FS6AssetReleaseTargetingInfo US6AssetReleaseTargetingLibrary::GetAssetReleaseTargetingInfo_Object(class UObject* InObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6AssetReleaseTargetingLibrary", "GetAssetReleaseTargetingInfo_Object");

	Params::US6AssetReleaseTargetingLibrary_GetAssetReleaseTargetingInfo_Object_Params Parms{};

	Parms.Object = InObject;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function S6AssetReleaseTargetingDeveloper.S6AssetReleaseTargetingLibrary.GetAssetReleaseTargetingInfo_AssetData
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FAssetData                  AssetData                                                        (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FS6AssetReleaseTargetingInfoReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FS6AssetReleaseTargetingInfo US6AssetReleaseTargetingLibrary::GetAssetReleaseTargetingInfo_AssetData(struct FAssetData& InAssetData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6AssetReleaseTargetingLibrary", "GetAssetReleaseTargetingInfo_AssetData");

	Params::US6AssetReleaseTargetingLibrary_GetAssetReleaseTargetingInfo_AssetData_Params Parms{};

	Parms.AssetData = InAssetData;

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
