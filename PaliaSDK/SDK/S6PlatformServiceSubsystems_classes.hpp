#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x78 (0xA8 - 0x30)
// Class S6PlatformServiceSubsystems.S6PLAT_PlayerBehaviorSubsystem
class US6PLAT_PlayerBehaviorSubsystem : public ULocalPlayerSubsystem
{
public:
	FMulticastInlineDelegateProperty_            OnReportSubmited;                                  // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_137F[0x68];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class US6PLAT_PlayerBehaviorSubsystem* GetDefaultObj();

	bool ValidateReportForm(struct FS6PLAT_PlayerBehaviorReportForm& ReportForm);
	void ReportSubmitedDelegate__DelegateSignature(class US6PLAT_PlayerBehaviorSubsystem* PlayerBehaviorSubsystem, const struct FS6PLAT_PlayerBehaviorReportForm& ReportForm, bool bDidSucceed);
	void ReportPlayerBehavior(struct FS6PLAT_PlayerBehaviorReportForm& ReportForm);
	bool IsReady();
	TMap<class FName, struct FS6PLAT_PlayerBehaviorReportCategoryInfo> GetValidReportCategoriesByType(enum class ES6PLAT_PlayerBehaviorReportType ReportType);
	TMap<class FName, struct FS6PLAT_PlayerBehaviorReportCategoryInfo> GetValidReportCategories();
};

}


