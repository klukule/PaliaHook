#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPI_SubWidgetFocusable.BPI_SubWidgetFocusable_C
class IBPI_SubWidgetFocusable_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBPI_SubWidgetFocusable_C* GetDefaultObj();

	void OnWidgetCreated(class UWidget* ParentWidget, class UWidget* ParentFocusedWidget);
	void OnSubWidgetClosed(bool FocusedParentWidget, bool NewWidgetCreated);
};

}


