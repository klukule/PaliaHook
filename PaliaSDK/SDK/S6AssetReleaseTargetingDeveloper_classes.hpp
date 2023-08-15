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
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("S6AssetReleaseTargetingLibrary");

		return Clss;
	}

	struct FS6AssetReleaseTargetingInfo GetAssetReleaseTargetingInfo_SoftObject(TSoftObjectPtr<class UObject>& SoftObject);
	struct FS6AssetReleaseTargetingInfo GetAssetReleaseTargetingInfo_PrimaryAssetId(struct FPrimaryAssetId& AssetId);
	struct FS6AssetReleaseTargetingInfo GetAssetReleaseTargetingInfo_ObjectPath(struct FSoftObjectPath& SoftObjectPath);
	struct FS6AssetReleaseTargetingInfo GetAssetReleaseTargetingInfo_Object(class UObject* Object);
	struct FS6AssetReleaseTargetingInfo GetAssetReleaseTargetingInfo_AssetData(struct FAssetData& AssetData);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
