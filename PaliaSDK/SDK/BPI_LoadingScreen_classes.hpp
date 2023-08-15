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
// BlueprintGeneratedClass BPI_LoadingScreen.BPI_LoadingScreen_C
class IBPI_LoadingScreen_C : public IInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("BPI_LoadingScreen_C");

		return Clss;
	}

	void AddLoadingExtension(class UUserWidget* Widget);
	void DisplayLoadingExtension(bool Display);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
