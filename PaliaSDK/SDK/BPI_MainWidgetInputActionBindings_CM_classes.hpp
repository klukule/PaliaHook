#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPI_MainWidgetInputActionBindings_CM.BPI_MainWidgetInputActionBindings_CM_C
class IBPI_MainWidgetInputActionBindings_CM_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBPI_MainWidgetInputActionBindings_CM_C* GetDefaultObj();

	void OnToggleMenuHub(bool IsPressed);
	void OnToggleSocialRequests();
	void OnPmenuToggleEmotesTab();
	void OnPmenuToggleAccomplishmentsTab();
	void OnPmenuToggleNeighborhoodTab();
	void OnPmenuToggleRelationships();
	void OnPmenuToggleMap();
	void OnPmenuToggleQuestsTab();
	void OnPmenuToggleInventoryTab();
	void OnToggleCamera();
	void OnTogglePMenu();
	void OnToggleEmoteWheelReleased();
	void OnToggleEmoteWheelPressed();
	void OnToggleChat();
	void OnToggleHMenu();
	void OnToolWheelReleased();
	void OnToolWheelPressed();
	void OnToggleSocialFeed();
	void OnToggleSocialPanel();
};

}


