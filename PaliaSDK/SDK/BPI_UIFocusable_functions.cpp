#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_UIFocusable.BPI_UIFocusable_C
// (None)

class UClass* IBPI_UIFocusable_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_UIFocusable_C");

	return Clss;
}


// BPI_UIFocusable_C BPI_UIFocusable.Default__BPI_UIFocusable_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_UIFocusable_C* IBPI_UIFocusable_C::GetDefaultObj()
{
	static class IBPI_UIFocusable_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_UIFocusable_C*>(IBPI_UIFocusable_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_UIFocusable.BPI_UIFocusable_C.HandleAccept
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_UIFocusable_C::HandleAccept()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_UIFocusable_C", "HandleAccept");

	Params::IBPI_UIFocusable_C_HandleAccept_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_UIFocusable.BPI_UIFocusable_C.ShowFocusTip
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bIsShow                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_UIFocusable_C::ShowFocusTip(bool bIsShow)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_UIFocusable_C", "ShowFocusTip");

	Params::IBPI_UIFocusable_C_ShowFocusTip_Params Parms{};

	Parms.bIsShow = bIsShow;

	UObject::ProcessEvent(Func, &Parms);

}

}


