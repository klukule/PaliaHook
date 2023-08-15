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


// Function GooglePAD.GooglePADFunctionLibrary.ShowCellularDataConfirmation
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// enum class EGooglePADErrorCode     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EGooglePADErrorCode UGooglePADFunctionLibrary::ShowCellularDataConfirmation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GooglePADFunctionLibrary", "ShowCellularDataConfirmation");

	Params::UGooglePADFunctionLibrary_ShowCellularDataConfirmation_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GooglePAD.GooglePADFunctionLibrary.RequestRemoval
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      Name                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EGooglePADErrorCode     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EGooglePADErrorCode UGooglePADFunctionLibrary::RequestRemoval(const class FString& Name)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GooglePADFunctionLibrary", "RequestRemoval");

	Params::UGooglePADFunctionLibrary_RequestRemoval_Params Parms{};

	Parms.Name = Name;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GooglePAD.GooglePADFunctionLibrary.RequestInfo
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<class FString>              AssetPacks                                                       (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// enum class EGooglePADErrorCode     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EGooglePADErrorCode UGooglePADFunctionLibrary::RequestInfo(const TArray<class FString>& AssetPacks)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GooglePADFunctionLibrary", "RequestInfo");

	Params::UGooglePADFunctionLibrary_RequestInfo_Params Parms{};

	Parms.AssetPacks = AssetPacks;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GooglePAD.GooglePADFunctionLibrary.RequestDownload
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<class FString>              AssetPacks                                                       (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// enum class EGooglePADErrorCode     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EGooglePADErrorCode UGooglePADFunctionLibrary::RequestDownload(const TArray<class FString>& AssetPacks)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GooglePADFunctionLibrary", "RequestDownload");

	Params::UGooglePADFunctionLibrary_RequestDownload_Params Parms{};

	Parms.AssetPacks = AssetPacks;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GooglePAD.GooglePADFunctionLibrary.ReleaseDownloadState
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              State                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGooglePADFunctionLibrary::ReleaseDownloadState(int32 State)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GooglePADFunctionLibrary", "ReleaseDownloadState");

	Params::UGooglePADFunctionLibrary_ReleaseDownloadState_Params Parms{};

	Parms.State = State;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GooglePAD.GooglePADFunctionLibrary.ReleaseAssetPackLocation
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              Location                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGooglePADFunctionLibrary::ReleaseAssetPackLocation(int32 Location)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GooglePADFunctionLibrary", "ReleaseAssetPackLocation");

	Params::UGooglePADFunctionLibrary_ReleaseAssetPackLocation_Params Parms{};

	Parms.Location = Location;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function GooglePAD.GooglePADFunctionLibrary.GetTotalBytesToDownload
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              State                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UGooglePADFunctionLibrary::GetTotalBytesToDownload(int32 State)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GooglePADFunctionLibrary", "GetTotalBytesToDownload");

	Params::UGooglePADFunctionLibrary_GetTotalBytesToDownload_Params Parms{};

	Parms.State = State;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GooglePAD.GooglePADFunctionLibrary.GetStorageMethod
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              Location                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EGooglePADStorageMethod ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EGooglePADStorageMethod UGooglePADFunctionLibrary::GetStorageMethod(int32 Location)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GooglePADFunctionLibrary", "GetStorageMethod");

	Params::UGooglePADFunctionLibrary_GetStorageMethod_Params Parms{};

	Parms.Location = Location;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GooglePAD.GooglePADFunctionLibrary.GetShowCellularDataConfirmationStatus
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// enum class EGooglePADCellularDataConfirmStatusStatus                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EGooglePADErrorCode     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EGooglePADErrorCode UGooglePADFunctionLibrary::GetShowCellularDataConfirmationStatus(enum class EGooglePADCellularDataConfirmStatus* Status)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GooglePADFunctionLibrary", "GetShowCellularDataConfirmationStatus");

	Params::UGooglePADFunctionLibrary_GetShowCellularDataConfirmationStatus_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (Status != nullptr)
		*Status = Parms.Status;

	return Parms.ReturnValue;

}


// Function GooglePAD.GooglePADFunctionLibrary.GetDownloadStatus
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              State                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EGooglePADDownloadStatusReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EGooglePADDownloadStatus UGooglePADFunctionLibrary::GetDownloadStatus(int32 State)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GooglePADFunctionLibrary", "GetDownloadStatus");

	Params::UGooglePADFunctionLibrary_GetDownloadStatus_Params Parms{};

	Parms.State = State;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GooglePAD.GooglePADFunctionLibrary.GetDownloadState
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      Name                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              State                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EGooglePADErrorCode     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EGooglePADErrorCode UGooglePADFunctionLibrary::GetDownloadState(const class FString& Name, int32* State)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GooglePADFunctionLibrary", "GetDownloadState");

	Params::UGooglePADFunctionLibrary_GetDownloadState_Params Parms{};

	Parms.Name = Name;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (State != nullptr)
		*State = Parms.State;

	return Parms.ReturnValue;

}


// Function GooglePAD.GooglePADFunctionLibrary.GetBytesDownloaded
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              State                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UGooglePADFunctionLibrary::GetBytesDownloaded(int32 State)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GooglePADFunctionLibrary", "GetBytesDownloaded");

	Params::UGooglePADFunctionLibrary_GetBytesDownloaded_Params Parms{};

	Parms.State = State;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GooglePAD.GooglePADFunctionLibrary.GetAssetsPath
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              Location                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UGooglePADFunctionLibrary::GetAssetsPath(int32 Location)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GooglePADFunctionLibrary", "GetAssetsPath");

	Params::UGooglePADFunctionLibrary_GetAssetsPath_Params Parms{};

	Parms.Location = Location;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function GooglePAD.GooglePADFunctionLibrary.GetAssetPackLocation
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      Name                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Location                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EGooglePADErrorCode     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EGooglePADErrorCode UGooglePADFunctionLibrary::GetAssetPackLocation(const class FString& Name, int32* Location)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GooglePADFunctionLibrary", "GetAssetPackLocation");

	Params::UGooglePADFunctionLibrary_GetAssetPackLocation_Params Parms{};

	Parms.Name = Name;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (Location != nullptr)
		*Location = Parms.Location;

	return Parms.ReturnValue;

}


// Function GooglePAD.GooglePADFunctionLibrary.CancelDownload
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<class FString>              AssetPacks                                                       (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// enum class EGooglePADErrorCode     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EGooglePADErrorCode UGooglePADFunctionLibrary::CancelDownload(const TArray<class FString>& AssetPacks)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GooglePADFunctionLibrary", "CancelDownload");

	Params::UGooglePADFunctionLibrary_CancelDownload_Params Parms{};

	Parms.AssetPacks = AssetPacks;

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
