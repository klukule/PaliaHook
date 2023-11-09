#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_MainWidgetCharacterActionHandle_CM.BPI_MainWidgetCharacterActionHandle_CM_C
// (None)

class UClass* IBPI_MainWidgetCharacterActionHandle_CM_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_MainWidgetCharacterActionHandle_CM_C");

	return Clss;
}


// BPI_MainWidgetCharacterActionHandle_CM_C BPI_MainWidgetCharacterActionHandle_CM.Default__BPI_MainWidgetCharacterActionHandle_CM_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_MainWidgetCharacterActionHandle_CM_C* IBPI_MainWidgetCharacterActionHandle_CM_C::GetDefaultObj()
{
	static class IBPI_MainWidgetCharacterActionHandle_CM_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_MainWidgetCharacterActionHandle_CM_C*>(IBPI_MainWidgetCharacterActionHandle_CM_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_MainWidgetCharacterActionHandle_CM.BPI_MainWidgetCharacterActionHandle_CM_C.HandleEmoteWheelReleased
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_MainWidgetCharacterActionHandle_CM_C::HandleEmoteWheelReleased()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_MainWidgetCharacterActionHandle_CM_C", "HandleEmoteWheelReleased");

	Params::IBPI_MainWidgetCharacterActionHandle_CM_C_HandleEmoteWheelReleased_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}

}


