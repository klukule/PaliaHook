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

// 0x0 (0x30 - 0x30)
// Class AssetTags.AssetTagsSubsystem
class UAssetTagsSubsystem : public UEngineSubsystem
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AssetTagsSubsystem");
		return Clss;
	}

	TArray<class FName> K2_GetCollectionsContainingAsset(struct FSoftObjectPath& InAssetPath);
	TArray<class FName> GetCollectionsContainingAssetPtr(class UObject* InAssetPtr);
	TArray<class FName> GetCollectionsContainingAssetData(struct FAssetData& InAssetData);
	TArray<class FName> GetCollectionsContainingAsset(class FName InAssetPathName);
	TArray<class FName> GetCollections();
	TArray<struct FAssetData> GetAssetsInCollection(class FName InName);
	bool CollectionExists(class FName InName);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
