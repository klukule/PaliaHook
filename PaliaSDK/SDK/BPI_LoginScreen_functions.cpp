#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_LoginScreen.BPI_LoginScreen_C
// (None)

class UClass* IBPI_LoginScreen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_LoginScreen_C");

	return Clss;
}


// BPI_LoginScreen_C BPI_LoginScreen.Default__BPI_LoginScreen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_LoginScreen_C* IBPI_LoginScreen_C::GetDefaultObj()
{
	static class IBPI_LoginScreen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_LoginScreen_C*>(IBPI_LoginScreen_C::StaticClass()->DefaultObject);

	return Default;
}


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


