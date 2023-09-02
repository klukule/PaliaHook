#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_LoadingScreen.BPI_LoadingScreen_C
// (None)

class UClass* IBPI_LoadingScreen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_LoadingScreen_C");

	return Clss;
}


// BPI_LoadingScreen_C BPI_LoadingScreen.Default__BPI_LoadingScreen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_LoadingScreen_C* IBPI_LoadingScreen_C::GetDefaultObj()
{
	static class IBPI_LoadingScreen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_LoadingScreen_C*>(IBPI_LoadingScreen_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_LoadingScreen.BPI_LoadingScreen_C.AddLoadingExtension
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                 Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void IBPI_LoadingScreen_C::AddLoadingExtension(class UUserWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_LoadingScreen_C", "AddLoadingExtension");

	Params::IBPI_LoadingScreen_C_AddLoadingExtension_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_LoadingScreen.BPI_LoadingScreen_C.DisplayLoadingExtension
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Display                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_LoadingScreen_C::DisplayLoadingExtension(bool Display)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_LoadingScreen_C", "DisplayLoadingExtension");

	Params::IBPI_LoadingScreen_C_DisplayLoadingExtension_Params Parms{};

	Parms.Display = Display;

	UObject::ProcessEvent(Func, &Parms);

}

}


