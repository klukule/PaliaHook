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

// 0x0 (0x28 - 0x28)
// Class GooglePAD.GooglePADFunctionLibrary
class UGooglePADFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GooglePADFunctionLibrary");
		return Clss;
	}

	enum class EGooglePADErrorCode ShowCellularDataConfirmation();
	enum class EGooglePADErrorCode RequestRemoval(const class FString& InName);
	enum class EGooglePADErrorCode RequestInfo(const TArray<class FString>& InAssetPacks);
	enum class EGooglePADErrorCode RequestDownload(const TArray<class FString>& InAssetPacks);
	void ReleaseDownloadState(int32 InState);
	void ReleaseAssetPackLocation(int32 InLocation);
	int32 GetTotalBytesToDownload(int32 InState);
	enum class EGooglePADStorageMethod GetStorageMethod(int32 InLocation);
	enum class EGooglePADErrorCode GetShowCellularDataConfirmationStatus(enum class EGooglePADCellularDataConfirmStatus* InStatus);
	enum class EGooglePADDownloadStatus GetDownloadStatus(int32 InState);
	enum class EGooglePADErrorCode GetDownloadState(const class FString& InName, int32* InState);
	int32 GetBytesDownloaded(int32 InState);
	class FString GetAssetsPath(int32 InLocation);
	enum class EGooglePADErrorCode GetAssetPackLocation(const class FString& InName, int32* InLocation);
	enum class EGooglePADErrorCode CancelDownload(const TArray<class FString>& InAssetPacks);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
