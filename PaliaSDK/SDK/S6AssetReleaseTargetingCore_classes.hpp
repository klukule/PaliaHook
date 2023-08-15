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

// 0x50 (0x88 - 0x38)
// Class S6AssetReleaseTargetingCore.S6ReleaseVersioningSettings
class US6ReleaseVersioningSettings : public UDeveloperSettings
{
public:
	TSet<struct FS6ReleaseVersionSpecification>  KnownReleaseVersions;                              // 0x38(0x50)(Edit, Config, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("S6ReleaseVersioningSettings");

		return Clss;
	}

	void SanitizeReleaseVersions();
};

// 0x0 (0x28 - 0x28)
// Class S6AssetReleaseTargetingCore.S6ReleaseVersioningLibrary
class US6ReleaseVersioningLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("S6ReleaseVersioningLibrary");

		return Clss;
	}

	bool TryParse(const class FString& VersionString, struct FS6ReleaseVersionSpecification* OutReleaseVersion);
	class FString ToString(struct FS6ReleaseVersionSpecification& Value);
	bool NotEqual(const struct FS6ReleaseVersionSpecification& A, const struct FS6ReleaseVersionSpecification& B);
	struct FS6ReleaseVersionSpecification Min(const struct FS6ReleaseVersionSpecification& A, const struct FS6ReleaseVersionSpecification& B);
	struct FS6ReleaseVersionSpecification Max(const struct FS6ReleaseVersionSpecification& A, const struct FS6ReleaseVersionSpecification& B);
	bool LessEqual(const struct FS6ReleaseVersionSpecification& A, const struct FS6ReleaseVersionSpecification& B);
	bool Less(const struct FS6ReleaseVersionSpecification& A, const struct FS6ReleaseVersionSpecification& B);
	bool IsValid(struct FS6ReleaseVersionSpecification& Value);
	bool GreaterEqual(const struct FS6ReleaseVersionSpecification& A, const struct FS6ReleaseVersionSpecification& B);
	bool Greater(const struct FS6ReleaseVersionSpecification& A, const struct FS6ReleaseVersionSpecification& B);
	struct FS6ReleaseVersionSpecification GetUnspecifiedReleaseVersionSpec();
	struct FS6ReleaseVersionSpecification GetFutureReleaseVersionSpec();
	struct FS6ReleaseVersionSpecification GetCurrentReleaseVersionSpec();
	bool EqualEqual(const struct FS6ReleaseVersionSpecification& A, const struct FS6ReleaseVersionSpecification& B);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
