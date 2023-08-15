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
// BlueprintGeneratedClass BPI_ShowKeyRebindResultTips.BPI_ShowKeyRebindResultTips_C
class IBPI_ShowKeyRebindResultTips_C : public IInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("BPI_ShowKeyRebindResultTips_C");

		return Clss;
	}

	void UpdateKeyRebindTips(class FText ConflictActionNameDesc, class FText RebindActionNameDesc, TArray<class UTexture2D*>& InputKeyIcons);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
