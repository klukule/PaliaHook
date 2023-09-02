#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x60 (0x60 - 0x0)
// UserDefinedStruct PerfLocationTable.PerfLocationTable
struct FPerfLocationTable
{
public:
	TArray<class FString>                        LocName_13_C14D88ED4DC70E82E2CC389355D91F8F;       // 0x0(0x10)(Edit, BlueprintVisible)
	TArray<struct FVector>                       Location_6_D31DA94743A440FDFC3FE3A420AC6255;       // 0x10(0x10)(Edit, BlueprintVisible)
	TArray<struct FVector>                       LookAtPoint_8_B0491BCD43FA9C8F8A2B05A757868AA5;    // 0x20(0x10)(Edit, BlueprintVisible)
	TArray<bool>                                 bGetInsightsFile_22_3440B9C4404820297CFB4597649692A2; // 0x30(0x10)(Edit, BlueprintVisible)
	TArray<bool>                                 bGetUEStatsFile_23_B46126974E1A73A5FCA8BC8F09045F12; // 0x40(0x10)(Edit, BlueprintVisible)
	TArray<bool>                                 bSwitchScalability_26_9BBF95384BDDE63A736D1A8472B5C0E3; // 0x50(0x10)(Edit, BlueprintVisible)
};

}


