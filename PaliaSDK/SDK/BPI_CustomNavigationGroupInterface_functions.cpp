#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_CustomNavigationGroupInterface.BPI_CustomNavigationGroupInterface_C
// (None)

class UClass* IBPI_CustomNavigationGroupInterface_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_CustomNavigationGroupInterface_C");

	return Clss;
}


// BPI_CustomNavigationGroupInterface_C BPI_CustomNavigationGroupInterface.Default__BPI_CustomNavigationGroupInterface_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_CustomNavigationGroupInterface_C* IBPI_CustomNavigationGroupInterface_C::GetDefaultObj()
{
	static class IBPI_CustomNavigationGroupInterface_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_CustomNavigationGroupInterface_C*>(IBPI_CustomNavigationGroupInterface_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_CustomNavigationGroupInterface.BPI_CustomNavigationGroupInterface_C.GetCustomNavigationGroup
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class US6UI_CustomNavigationGroup* NavigationGroup                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void IBPI_CustomNavigationGroupInterface_C::GetCustomNavigationGroup(class US6UI_CustomNavigationGroup** NavigationGroup)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_CustomNavigationGroupInterface_C", "GetCustomNavigationGroup");

	Params::IBPI_CustomNavigationGroupInterface_C_GetCustomNavigationGroup_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (NavigationGroup != nullptr)
		*NavigationGroup = Parms.NavigationGroup;

}

}


