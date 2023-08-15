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


// Function MobilePatchingUtils.MobileInstalledContent.Mount
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              PakOrder                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      MountPoint                                                       (Parm, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMobileInstalledContent::Mount(int32 PakOrder, const class FString& MountPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MobileInstalledContent", "Mount");

	Params::UMobileInstalledContent_Mount_Params Parms{};

	Parms.PakOrder = PakOrder;
	Parms.MountPoint = MountPoint;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MobilePatchingUtils.MobileInstalledContent.GetInstalledContentSize
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UMobileInstalledContent::GetInstalledContentSize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MobileInstalledContent", "GetInstalledContentSize");

	Params::UMobileInstalledContent_GetInstalledContentSize_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MobilePatchingUtils.MobileInstalledContent.GetDiskFreeSpace
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UMobileInstalledContent::GetDiskFreeSpace()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MobileInstalledContent", "GetDiskFreeSpace");

	Params::UMobileInstalledContent_GetDiskFreeSpace_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MobilePatchingUtils.MobilePendingContent.StartInstall
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// FDelegateProperty_                 OnSucceeded                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnFailed                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMobilePendingContent::StartInstall(FDelegateProperty_ OnSucceeded, FDelegateProperty_ OnFailed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MobilePendingContent", "StartInstall");

	Params::UMobilePendingContent_StartInstall_Params Parms{};

	Parms.OnSucceeded = OnSucceeded;
	Parms.OnFailed = OnFailed;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MobilePatchingUtils.MobilePendingContent.GetTotalDownloadedSize
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UMobilePendingContent::GetTotalDownloadedSize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MobilePendingContent", "GetTotalDownloadedSize");

	Params::UMobilePendingContent_GetTotalDownloadedSize_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MobilePatchingUtils.MobilePendingContent.GetRequiredDiskSpace
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UMobilePendingContent::GetRequiredDiskSpace()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MobilePendingContent", "GetRequiredDiskSpace");

	Params::UMobilePendingContent_GetRequiredDiskSpace_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MobilePatchingUtils.MobilePendingContent.GetInstallProgress
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UMobilePendingContent::GetInstallProgress()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MobilePendingContent", "GetInstallProgress");

	Params::UMobilePendingContent_GetInstallProgress_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MobilePatchingUtils.MobilePendingContent.GetDownloadStatusText
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText UMobilePendingContent::GetDownloadStatusText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MobilePendingContent", "GetDownloadStatusText");

	Params::UMobilePendingContent_GetDownloadStatusText_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MobilePatchingUtils.MobilePendingContent.GetDownloadSpeed
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UMobilePendingContent::GetDownloadSpeed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MobilePendingContent", "GetDownloadSpeed");

	Params::UMobilePendingContent_GetDownloadSpeed_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MobilePatchingUtils.MobilePendingContent.GetDownloadSize
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UMobilePendingContent::GetDownloadSize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MobilePendingContent", "GetDownloadSize");

	Params::UMobilePendingContent_GetDownloadSize_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MobilePatchingUtils.MobilePatchingLibrary.RequestContent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      RemoteManifestURL                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      CloudURL                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      InstallDirectory                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnSucceeded                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 OnFailed                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMobilePatchingLibrary::RequestContent(const class FString& RemoteManifestURL, const class FString& CloudURL, const class FString& InstallDirectory, FDelegateProperty_ OnSucceeded, FDelegateProperty_ OnFailed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MobilePatchingLibrary", "RequestContent");

	Params::UMobilePatchingLibrary_RequestContent_Params Parms{};

	Parms.RemoteManifestURL = RemoteManifestURL;
	Parms.CloudURL = CloudURL;
	Parms.InstallDirectory = InstallDirectory;
	Parms.OnSucceeded = OnSucceeded;
	Parms.OnFailed = OnFailed;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MobilePatchingUtils.MobilePatchingLibrary.HasActiveWiFiConnection
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMobilePatchingLibrary::HasActiveWiFiConnection()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MobilePatchingLibrary", "HasActiveWiFiConnection");

	Params::UMobilePatchingLibrary_HasActiveWiFiConnection_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MobilePatchingUtils.MobilePatchingLibrary.GetSupportedPlatformNames
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<class FString>              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class FString> UMobilePatchingLibrary::GetSupportedPlatformNames()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MobilePatchingLibrary", "GetSupportedPlatformNames");

	Params::UMobilePatchingLibrary_GetSupportedPlatformNames_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MobilePatchingUtils.MobilePatchingLibrary.GetInstalledContent
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      InstallDirectory                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMobileInstalledContent*     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMobileInstalledContent* UMobilePatchingLibrary::GetInstalledContent(const class FString& InstallDirectory)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MobilePatchingLibrary", "GetInstalledContent");

	Params::UMobilePatchingLibrary_GetInstalledContent_Params Parms{};

	Parms.InstallDirectory = InstallDirectory;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MobilePatchingUtils.MobilePatchingLibrary.GetActiveDeviceProfileName
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UMobilePatchingLibrary::GetActiveDeviceProfileName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MobilePatchingLibrary", "GetActiveDeviceProfileName");

	Params::UMobilePatchingLibrary_GetActiveDeviceProfileName_Params Parms{};


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
