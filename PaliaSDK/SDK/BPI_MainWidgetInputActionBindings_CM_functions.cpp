#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_MainWidgetInputActionBindings_CM.BPI_MainWidgetInputActionBindings_CM_C
// (None)

class UClass* IBPI_MainWidgetInputActionBindings_CM_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_MainWidgetInputActionBindings_CM_C");

	return Clss;
}


// BPI_MainWidgetInputActionBindings_CM_C BPI_MainWidgetInputActionBindings_CM.Default__BPI_MainWidgetInputActionBindings_CM_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_MainWidgetInputActionBindings_CM_C* IBPI_MainWidgetInputActionBindings_CM_C::GetDefaultObj()
{
	static class IBPI_MainWidgetInputActionBindings_CM_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_MainWidgetInputActionBindings_CM_C*>(IBPI_MainWidgetInputActionBindings_CM_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_MainWidgetInputActionBindings_CM.BPI_MainWidgetInputActionBindings_CM_C.OnToggleSocialRequests
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_MainWidgetInputActionBindings_CM_C::OnToggleSocialRequests()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_MainWidgetInputActionBindings_CM_C", "OnToggleSocialRequests");

	Params::IBPI_MainWidgetInputActionBindings_CM_C_OnToggleSocialRequests_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_MainWidgetInputActionBindings_CM.BPI_MainWidgetInputActionBindings_CM_C.OnPmenuToggleEmotesTab
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_MainWidgetInputActionBindings_CM_C::OnPmenuToggleEmotesTab()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_MainWidgetInputActionBindings_CM_C", "OnPmenuToggleEmotesTab");

	Params::IBPI_MainWidgetInputActionBindings_CM_C_OnPmenuToggleEmotesTab_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_MainWidgetInputActionBindings_CM.BPI_MainWidgetInputActionBindings_CM_C.OnPmenuToggleAccomplishmentsTab
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_MainWidgetInputActionBindings_CM_C::OnPmenuToggleAccomplishmentsTab()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_MainWidgetInputActionBindings_CM_C", "OnPmenuToggleAccomplishmentsTab");

	Params::IBPI_MainWidgetInputActionBindings_CM_C_OnPmenuToggleAccomplishmentsTab_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_MainWidgetInputActionBindings_CM.BPI_MainWidgetInputActionBindings_CM_C.OnPmenuToggleNeighborhoodTab
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_MainWidgetInputActionBindings_CM_C::OnPmenuToggleNeighborhoodTab()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_MainWidgetInputActionBindings_CM_C", "OnPmenuToggleNeighborhoodTab");

	Params::IBPI_MainWidgetInputActionBindings_CM_C_OnPmenuToggleNeighborhoodTab_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_MainWidgetInputActionBindings_CM.BPI_MainWidgetInputActionBindings_CM_C.OnPmenuToggleRelationships
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_MainWidgetInputActionBindings_CM_C::OnPmenuToggleRelationships()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_MainWidgetInputActionBindings_CM_C", "OnPmenuToggleRelationships");

	Params::IBPI_MainWidgetInputActionBindings_CM_C_OnPmenuToggleRelationships_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_MainWidgetInputActionBindings_CM.BPI_MainWidgetInputActionBindings_CM_C.OnPmenuToggleMap
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_MainWidgetInputActionBindings_CM_C::OnPmenuToggleMap()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_MainWidgetInputActionBindings_CM_C", "OnPmenuToggleMap");

	Params::IBPI_MainWidgetInputActionBindings_CM_C_OnPmenuToggleMap_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_MainWidgetInputActionBindings_CM.BPI_MainWidgetInputActionBindings_CM_C.OnPmenuToggleQuestsTab
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_MainWidgetInputActionBindings_CM_C::OnPmenuToggleQuestsTab()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_MainWidgetInputActionBindings_CM_C", "OnPmenuToggleQuestsTab");

	Params::IBPI_MainWidgetInputActionBindings_CM_C_OnPmenuToggleQuestsTab_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_MainWidgetInputActionBindings_CM.BPI_MainWidgetInputActionBindings_CM_C.OnPmenuToggleInventoryTab
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_MainWidgetInputActionBindings_CM_C::OnPmenuToggleInventoryTab()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_MainWidgetInputActionBindings_CM_C", "OnPmenuToggleInventoryTab");

	Params::IBPI_MainWidgetInputActionBindings_CM_C_OnPmenuToggleInventoryTab_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_MainWidgetInputActionBindings_CM.BPI_MainWidgetInputActionBindings_CM_C.OnToggleCamera
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_MainWidgetInputActionBindings_CM_C::OnToggleCamera()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_MainWidgetInputActionBindings_CM_C", "OnToggleCamera");

	Params::IBPI_MainWidgetInputActionBindings_CM_C_OnToggleCamera_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_MainWidgetInputActionBindings_CM.BPI_MainWidgetInputActionBindings_CM_C.OnTogglePMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_MainWidgetInputActionBindings_CM_C::OnTogglePMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_MainWidgetInputActionBindings_CM_C", "OnTogglePMenu");

	Params::IBPI_MainWidgetInputActionBindings_CM_C_OnTogglePMenu_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_MainWidgetInputActionBindings_CM.BPI_MainWidgetInputActionBindings_CM_C.OnToggleEmoteWheelReleased
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_MainWidgetInputActionBindings_CM_C::OnToggleEmoteWheelReleased()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_MainWidgetInputActionBindings_CM_C", "OnToggleEmoteWheelReleased");

	Params::IBPI_MainWidgetInputActionBindings_CM_C_OnToggleEmoteWheelReleased_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_MainWidgetInputActionBindings_CM.BPI_MainWidgetInputActionBindings_CM_C.OnToggleEmoteWheelPressed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_MainWidgetInputActionBindings_CM_C::OnToggleEmoteWheelPressed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_MainWidgetInputActionBindings_CM_C", "OnToggleEmoteWheelPressed");

	Params::IBPI_MainWidgetInputActionBindings_CM_C_OnToggleEmoteWheelPressed_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_MainWidgetInputActionBindings_CM.BPI_MainWidgetInputActionBindings_CM_C.OnToggleChat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_MainWidgetInputActionBindings_CM_C::OnToggleChat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_MainWidgetInputActionBindings_CM_C", "OnToggleChat");

	Params::IBPI_MainWidgetInputActionBindings_CM_C_OnToggleChat_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_MainWidgetInputActionBindings_CM.BPI_MainWidgetInputActionBindings_CM_C.OnToggleHMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_MainWidgetInputActionBindings_CM_C::OnToggleHMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_MainWidgetInputActionBindings_CM_C", "OnToggleHMenu");

	Params::IBPI_MainWidgetInputActionBindings_CM_C_OnToggleHMenu_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_MainWidgetInputActionBindings_CM.BPI_MainWidgetInputActionBindings_CM_C.OnToolWheelReleased
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_MainWidgetInputActionBindings_CM_C::OnToolWheelReleased()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_MainWidgetInputActionBindings_CM_C", "OnToolWheelReleased");

	Params::IBPI_MainWidgetInputActionBindings_CM_C_OnToolWheelReleased_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_MainWidgetInputActionBindings_CM.BPI_MainWidgetInputActionBindings_CM_C.OnToolWheelPressed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_MainWidgetInputActionBindings_CM_C::OnToolWheelPressed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_MainWidgetInputActionBindings_CM_C", "OnToolWheelPressed");

	Params::IBPI_MainWidgetInputActionBindings_CM_C_OnToolWheelPressed_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_MainWidgetInputActionBindings_CM.BPI_MainWidgetInputActionBindings_CM_C.OnToggleSocialFeed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_MainWidgetInputActionBindings_CM_C::OnToggleSocialFeed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_MainWidgetInputActionBindings_CM_C", "OnToggleSocialFeed");

	Params::IBPI_MainWidgetInputActionBindings_CM_C_OnToggleSocialFeed_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_MainWidgetInputActionBindings_CM.BPI_MainWidgetInputActionBindings_CM_C.OnToggleSocialPanel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_MainWidgetInputActionBindings_CM_C::OnToggleSocialPanel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_MainWidgetInputActionBindings_CM_C", "OnToggleSocialPanel");

	Params::IBPI_MainWidgetInputActionBindings_CM_C_OnToggleSocialPanel_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}

}


