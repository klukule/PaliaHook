#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPI_ShowKeyRebindResultTips.BPI_ShowKeyRebindResultTips_C
class IBPI_ShowKeyRebindResultTips_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBPI_ShowKeyRebindResultTips_C* GetDefaultObj();

	void UpdateKeyRebindTips(class FText ConflictActionNameDesc, class FText RebindActionNameDesc, TArray<class UTexture2D*>& InputKeyIcons);
};

}


