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
// Class AssetRegistry.AssetRegistryHelpers
class UAssetRegistryHelpers : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AssetRegistryHelpers");
		return Clss;
	}

	struct FSoftObjectPath ToSoftObjectPath(struct FAssetData& InInAssetData);
	struct FARFilter SetFilterTagsAndValues(struct FARFilter& InInFilter, TArray<struct FTagAndValue>& InInTagsAndValues);
	bool IsValid(struct FAssetData& InInAssetData);
	bool IsUAsset(struct FAssetData& InInAssetData);
	bool IsRedirector(struct FAssetData& InInAssetData);
	bool IsAssetLoaded(struct FAssetData& InInAssetData);
	bool GetTagValue(struct FAssetData& InInAssetData, class FName& InInTagName, class FString* InOutTagValue);
	class FString GetFullName(struct FAssetData& InInAssetData);
	class FString GetExportTextName(struct FAssetData& InInAssetData);
	class UClass* GetClass(struct FAssetData& InInAssetData);
	void GetBlueprintAssets(struct FARFilter& InInFilter, TArray<struct FAssetData>* InOutAssetData);
	TScriptInterface<class IAssetRegistry> GetAssetRegistry();
	class UObject* GetAsset(struct FAssetData& InInAssetData);
	struct FAssetData CreateAssetData(class UObject* InInAsset, bool InbAllowBlueprintClass);
};

// 0x0 (0x28 - 0x28)
// Class AssetRegistry.AssetRegistry
class IAssetRegistry : public IInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AssetRegistry");
		return Clss;
	}

	void WaitForPackage(const class FString& InPackageName);
	void WaitForCompletion();
	void UseFilterToExcludeAssets(TArray<struct FAssetData>& InAssetDataList, struct FARFilter& InFilter);
	void SearchAllAssets(bool InbSynchronousSearch);
	void ScanPathsSynchronous(TArray<class FString>& InInPaths, bool InbForceRescan, bool InbIgnoreDenyListScanFilters);
	void ScanModifiedAssetFiles(TArray<class FString>& InInFilePaths);
	void ScanFilesSynchronous(TArray<class FString>& InInFilePaths, bool InbForceRescan);
	void RunAssetsThroughFilter(TArray<struct FAssetData>& InAssetDataList, struct FARFilter& InFilter);
	void PrioritizeSearchPath(const class FString& InPathToPrioritize);
	bool K2_GetReferencers(class FName InPackageName, struct FAssetRegistryDependencyOptions& InReferenceOptions, TArray<class FName>* InOutReferencers);
	bool K2_GetDependencies(class FName InPackageName, struct FAssetRegistryDependencyOptions& InDependencyOptions, TArray<class FName>* InOutDependencies);
	struct FAssetData K2_GetAssetByObjectPath(struct FSoftObjectPath& InObjectPath, bool InbIncludeOnlyOnDiskAssets);
	bool IsSearchAsync();
	bool IsSearchAllAssets();
	bool IsLoadingAssets();
	bool HasAssets(class FName InPackagePath, bool InbRecursive);
	void GetSubPaths(const class FString& InInBasePath, TArray<class FString>* InOutPathList, bool InbInRecurse);
	void GetDerivedClassNames(TArray<struct FTopLevelAssetPath>& InClassNames, TSet<struct FTopLevelAssetPath>& InExcludedClassNames, TSet<struct FTopLevelAssetPath>* InOutDerivedClassNames);
	bool GetAssetsByPaths(const TArray<class FName>& InPackagePaths, TArray<struct FAssetData>* InOutAssetData, bool InbRecursive, bool InbIncludeOnlyOnDiskAssets);
	bool GetAssetsByPath(class FName InPackagePath, TArray<struct FAssetData>* InOutAssetData, bool InbRecursive, bool InbIncludeOnlyOnDiskAssets);
	bool GetAssetsByPackageName(class FName InPackageName, TArray<struct FAssetData>* InOutAssetData, bool InbIncludeOnlyOnDiskAssets, bool InbSkipARFilteredAssets);
	bool GetAssetsByClass(const struct FTopLevelAssetPath& InClassPathName, TArray<struct FAssetData>* InOutAssetData, bool InbSearchSubClasses);
	bool GetAssets(struct FARFilter& InFilter, TArray<struct FAssetData>* InOutAssetData, bool InbSkipARFilteredAssets);
	struct FAssetData GetAssetByObjectPath(class FName InObjectPath, bool InbIncludeOnlyOnDiskAssets);
	bool GetAncestorClassNames(const struct FTopLevelAssetPath& InClassPathName, TArray<struct FTopLevelAssetPath>* InOutAncestorClassNames);
	void GetAllCachedPaths(TArray<class FString>* InOutPathList);
	bool GetAllAssets(TArray<struct FAssetData>* InOutAssetData, bool InbIncludeOnlyOnDiskAssets);
};

// 0x998 (0x9C0 - 0x28)
// Class AssetRegistry.AssetRegistryImpl
class UAssetRegistryImpl : public UObject
{
public:
	uint8                                        Pad_257C[0x998];                                   // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AssetRegistryImpl");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
