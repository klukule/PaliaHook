#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPI_SocialWindowBaseHandle.BPI_SocialWindowBaseHandle_C
class IBPI_SocialWindowBaseHandle_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBPI_SocialWindowBaseHandle_C* GetDefaultObj();

	void GetWidget(class UVALUI_SocialPanelBase** Widget);
	void OpenHandle();
	void CloseHandle();
};

}


