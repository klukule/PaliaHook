#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


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

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
