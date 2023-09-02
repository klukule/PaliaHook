#pragma once

// Dumped with Dumper-7!


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

	static class UClass* StaticClass();
	static class IBPI_LoadingScreen_C* GetDefaultObj();

	void AddLoadingExtension(class UUserWidget* Widget);
	void DisplayLoadingExtension(bool Display);
};

}


