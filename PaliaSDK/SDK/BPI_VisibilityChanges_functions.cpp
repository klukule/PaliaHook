#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


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

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
