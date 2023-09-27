#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPI_UIFocusable.BPI_UIFocusable_C
class IBPI_UIFocusable_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBPI_UIFocusable_C* GetDefaultObj();

	void HandleAccept();
	void ShowFocusTip(bool bIsShow);
};

}


