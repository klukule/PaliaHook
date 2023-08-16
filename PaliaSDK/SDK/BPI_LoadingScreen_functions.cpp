#pragma once

// Dumped with Dumper-7!

#include "SDK.hpp"

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function BPI_LoadingScreen.BPI_LoadingScreen_C.AddLoadingExtension
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                 Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void IBPI_LoadingScreen_C::AddLoadingExtension(class UUserWidget* InWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_LoadingScreen_C", "AddLoadingExtension");

	Params::IBPI_LoadingScreen_C_AddLoadingExtension_Params Parms{};

	Parms.Widget = InWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_LoadingScreen.BPI_LoadingScreen_C.DisplayLoadingExtension
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Display                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_LoadingScreen_C::DisplayLoadingExtension(bool InDisplay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_LoadingScreen_C", "DisplayLoadingExtension");

	Params::IBPI_LoadingScreen_C_DisplayLoadingExtension_Params Parms{};

	Parms.Display = InDisplay;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
