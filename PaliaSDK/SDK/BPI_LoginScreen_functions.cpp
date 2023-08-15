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


// Function BPI_LoginScreen.BPI_LoginScreen_C.HandleOnEnterLoginLobbyState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_LoginScreen_C::HandleOnEnterLoginLobbyState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_LoginScreen_C", "HandleOnEnterLoginLobbyState");

	Params::IBPI_LoginScreen_C_HandleOnEnterLoginLobbyState_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
