#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_RequestEntry_Console.BPI_RequestEntry_Console_C
// (None)

class UClass* IBPI_RequestEntry_Console_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_RequestEntry_Console_C");

	return Clss;
}


// BPI_RequestEntry_Console_C BPI_RequestEntry_Console.Default__BPI_RequestEntry_Console_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_RequestEntry_Console_C* IBPI_RequestEntry_Console_C::GetDefaultObj()
{
	static class IBPI_RequestEntry_Console_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_RequestEntry_Console_C*>(IBPI_RequestEntry_Console_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_RequestEntry_Console.BPI_RequestEntry_Console_C.SetupBinds_Console
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_RequestsPanel_Console_C*RequestPanel                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void IBPI_RequestEntry_Console_C::SetupBinds_Console(class UWBP_RequestsPanel_Console_C* RequestPanel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_RequestEntry_Console_C", "SetupBinds_Console");

	Params::IBPI_RequestEntry_Console_C_SetupBinds_Console_Params Parms{};

	Parms.RequestPanel = RequestPanel;

	UObject::ProcessEvent(Func, &Parms);

}

}


