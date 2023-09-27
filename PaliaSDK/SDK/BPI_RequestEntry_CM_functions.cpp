#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_RequestEntry_CM.BPI_RequestEntry_CM_C
// (None)

class UClass* IBPI_RequestEntry_CM_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_RequestEntry_CM_C");

	return Clss;
}


// BPI_RequestEntry_CM_C BPI_RequestEntry_CM.Default__BPI_RequestEntry_CM_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_RequestEntry_CM_C* IBPI_RequestEntry_CM_C::GetDefaultObj()
{
	static class IBPI_RequestEntry_CM_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_RequestEntry_CM_C*>(IBPI_RequestEntry_CM_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_RequestEntry_CM.BPI_RequestEntry_CM_C.SetupBinds
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_RequestsPanel_CM_C*     RequestPanel                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void IBPI_RequestEntry_CM_C::SetupBinds(class UWBP_RequestsPanel_CM_C* RequestPanel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_RequestEntry_CM_C", "SetupBinds");

	Params::IBPI_RequestEntry_CM_C_SetupBinds_Params Parms{};

	Parms.RequestPanel = RequestPanel;

	UObject::ProcessEvent(Func, &Parms);

}

}


