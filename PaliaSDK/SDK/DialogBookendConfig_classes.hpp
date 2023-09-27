#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x50 - 0x30)
// BlueprintGeneratedClass DialogBookendConfig.DialogBookendConfig_C
class UDialogBookendConfig_C : public UPrimaryDataAsset
{
public:
	TArray<struct FStruct_DialogBookendConfig>   Intros;                                            // 0x30(0x10)(Edit, BlueprintVisible)
	TArray<struct FStruct_DialogBookendConfig>   Outros;                                            // 0x40(0x10)(Edit, BlueprintVisible)

	static class UClass* StaticClass();
	static class UDialogBookendConfig_C* GetDefaultObj();

};

}


