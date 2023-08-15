#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x48 - 0x28)
// Class MobilePatchingUtils.MobileInstalledContent
class UMobileInstalledContent : public UObject
{
public:
	uint8                                        Pad_1F71[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("MobileInstalledContent");

		return Clss;
	}

	bool Mount(int32 PakOrder, const class FString& MountPoint);
	float GetInstalledContentSize();
	float GetDiskFreeSpace();
};

// 0x40 (0x88 - 0x48)
// Class MobilePatchingUtils.MobilePendingContent
class UMobilePendingContent : public UMobileInstalledContent
{
public:
	uint8                                        Pad_1F8C[0x40];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("MobilePendingContent");

		return Clss;
	}

	void StartInstall(FDelegateProperty_ OnSucceeded, FDelegateProperty_ OnFailed);
	float GetTotalDownloadedSize();
	float GetRequiredDiskSpace();
	float GetInstallProgress();
	class FText GetDownloadStatusText();
	float GetDownloadSpeed();
	float GetDownloadSize();
};

// 0x0 (0x28 - 0x28)
// Class MobilePatchingUtils.MobilePatchingLibrary
class UMobilePatchingLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("MobilePatchingLibrary");

		return Clss;
	}

	void RequestContent(const class FString& RemoteManifestURL, const class FString& CloudURL, const class FString& InstallDirectory, FDelegateProperty_ OnSucceeded, FDelegateProperty_ OnFailed);
	bool HasActiveWiFiConnection();
	TArray<class FString> GetSupportedPlatformNames();
	class UMobileInstalledContent* GetInstalledContent(const class FString& InstallDirectory);
	class FString GetActiveDeviceProfileName();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
