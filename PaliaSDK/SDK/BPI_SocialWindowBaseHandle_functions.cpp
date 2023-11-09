#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_SocialWindowBaseHandle.BPI_SocialWindowBaseHandle_C
// (None)

class UClass* IBPI_SocialWindowBaseHandle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_SocialWindowBaseHandle_C");

	return Clss;
}


// BPI_SocialWindowBaseHandle_C BPI_SocialWindowBaseHandle.Default__BPI_SocialWindowBaseHandle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_SocialWindowBaseHandle_C* IBPI_SocialWindowBaseHandle_C::GetDefaultObj()
{
	static class IBPI_SocialWindowBaseHandle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_SocialWindowBaseHandle_C*>(IBPI_SocialWindowBaseHandle_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_SocialWindowBaseHandle.BPI_SocialWindowBaseHandle_C.GetWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UVALUI_SocialPanelBase*      Widget                                                           (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void IBPI_SocialWindowBaseHandle_C::GetWidget(class UVALUI_SocialPanelBase** Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_SocialWindowBaseHandle_C", "GetWidget");

	Params::IBPI_SocialWindowBaseHandle_C_GetWidget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Widget != nullptr)
		*Widget = Parms.Widget;

}


// Function BPI_SocialWindowBaseHandle.BPI_SocialWindowBaseHandle_C.OpenHandle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_SocialWindowBaseHandle_C::OpenHandle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_SocialWindowBaseHandle_C", "OpenHandle");

	Params::IBPI_SocialWindowBaseHandle_C_OpenHandle_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_SocialWindowBaseHandle.BPI_SocialWindowBaseHandle_C.CloseHandle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_SocialWindowBaseHandle_C::CloseHandle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_SocialWindowBaseHandle_C", "CloseHandle");

	Params::IBPI_SocialWindowBaseHandle_C_CloseHandle_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}

}


