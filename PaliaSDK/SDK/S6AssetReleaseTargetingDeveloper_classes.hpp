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
// Class S6AssetReleaseTargetingDeveloper.S6AssetReleaseTargetingLibrary
class US6AssetReleaseTargetingLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("S6AssetReleaseTargetingLibrary");
		return Clss;
	}

	struct FS6AssetReleaseTargetingInfo GetAssetReleaseTargetingInfo_SoftObject(TSoftObjectPtr<class UObject>& InSoftObject);
	struct FS6AssetReleaseTargetingInfo GetAssetReleaseTargetingInfo_PrimaryAssetId(struct FPrimaryAssetId& InAssetId);
	struct FS6AssetReleaseTargetingInfo GetAssetReleaseTargetingInfo_ObjectPath(struct FSoftObjectPath& InSoftObjectPath);
	struct FS6AssetReleaseTargetingInfo GetAssetReleaseTargetingInfo_Object(class UObject* InObject);
	struct FS6AssetReleaseTargetingInfo GetAssetReleaseTargetingInfo_AssetData(struct FAssetData& InAssetData);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
