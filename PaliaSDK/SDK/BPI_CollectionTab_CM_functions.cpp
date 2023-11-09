#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_CollectionTab_CM.BPI_CollectionTab_CM_C
// (None)

class UClass* IBPI_CollectionTab_CM_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_CollectionTab_CM_C");

	return Clss;
}


// BPI_CollectionTab_CM_C BPI_CollectionTab_CM.Default__BPI_CollectionTab_CM_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_CollectionTab_CM_C* IBPI_CollectionTab_CM_C::GetDefaultObj()
{
	static class IBPI_CollectionTab_CM_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_CollectionTab_CM_C*>(IBPI_CollectionTab_CM_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_CollectionTab_CM.BPI_CollectionTab_CM_C.Deactivate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_CollectionTab_CM_C::Deactivate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_CollectionTab_CM_C", "Deactivate");

	Params::IBPI_CollectionTab_CM_C_Deactivate_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_CollectionTab_CM.BPI_CollectionTab_CM_C.SetCollectionTabDefaultFocusAndActivate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBPI_CollectionTab_CM_C::SetCollectionTabDefaultFocusAndActivate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_CollectionTab_CM_C", "SetCollectionTabDefaultFocusAndActivate");

	Params::IBPI_CollectionTab_CM_C_SetCollectionTabDefaultFocusAndActivate_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}

}


