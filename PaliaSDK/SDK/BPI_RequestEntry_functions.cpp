#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_RequestEntry.BPI_RequestEntry_C
// (None)

class UClass* IBPI_RequestEntry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_RequestEntry_C");

	return Clss;
}


// BPI_RequestEntry_C BPI_RequestEntry.Default__BPI_RequestEntry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_RequestEntry_C* IBPI_RequestEntry_C::GetDefaultObj()
{
	static class IBPI_RequestEntry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_RequestEntry_C*>(IBPI_RequestEntry_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_RequestEntry.BPI_RequestEntry_C.SetupBinds
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_RequestsPanel_C*        RequestPanel                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void IBPI_RequestEntry_C::SetupBinds(class UWBP_RequestsPanel_C* RequestPanel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_RequestEntry_C", "SetupBinds");

	Params::IBPI_RequestEntry_C_SetupBinds_Params Parms{};

	Parms.RequestPanel = RequestPanel;

	UObject::ProcessEvent(Func, &Parms);

}

}


