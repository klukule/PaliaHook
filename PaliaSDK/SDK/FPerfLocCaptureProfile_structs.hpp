#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x68 (0x68 - 0x0)
// UserDefinedStruct FPerfLocCaptureProfile.FPerfLocCaptureProfile
struct FFPerfLocCaptureProfile
{
public:
	struct FVector                               Location_2_594DC101457A51E90D0D8FA4B276F44D;       // 0x0(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              Rotation_28_B34885404E6FFD445BA8169E747A1F00;      // 0x18(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bGetInsightsfile_11_AEEB421D4C51162084DA39A7FC72CE89; // 0x30(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bGetUEStatsFile_13_0936D2574BC600EBA3DB7093A1DCBBF3; // 0x31(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2C90[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ScalabilityLevel_33_A11A7B7444072001228D04B6F1AADFD7; // 0x34(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                InsightsSaveLocation_20_430FE57D48B537EA9DF5C2A1C33DA233; // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class FString                                UEStatsSaveLocaiton_22_41F3503047CC685C7A1D6E9FBD22A907; // 0x48(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class FString                                ScreenshotsSaveLocaiton_26_3B4804554DDA36EFD4EE7BB15D63EB11; // 0x58(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
