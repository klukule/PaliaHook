#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_VisibilityChanges.BPI_VisibilityChanges_C
// (None)

class UClass* IBPI_VisibilityChanges_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_VisibilityChanges_C");

	return Clss;
}


// BPI_VisibilityChanges_C BPI_VisibilityChanges.Default__BPI_VisibilityChanges_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_VisibilityChanges_C* IBPI_VisibilityChanges_C::GetDefaultObj()
{
	static class IBPI_VisibilityChanges_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_VisibilityChanges_C*>(IBPI_VisibilityChanges_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_VisibilityChanges.BPI_VisibilityChanges_C.S6OnVisibilityChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsVisible                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_VisibilityChanges_C::S6OnVisibilityChanged(bool IsVisible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_VisibilityChanges_C", "S6OnVisibilityChanged");

	Params::IBPI_VisibilityChanges_C_S6OnVisibilityChanged_Params Parms{};

	Parms.IsVisible = IsVisible;

	UObject::ProcessEvent(Func, &Parms);

}

}


