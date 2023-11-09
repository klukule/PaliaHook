#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_SubWidgetFocusable.BPI_SubWidgetFocusable_C
// (None)

class UClass* IBPI_SubWidgetFocusable_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_SubWidgetFocusable_C");

	return Clss;
}


// BPI_SubWidgetFocusable_C BPI_SubWidgetFocusable.Default__BPI_SubWidgetFocusable_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_SubWidgetFocusable_C* IBPI_SubWidgetFocusable_C::GetDefaultObj()
{
	static class IBPI_SubWidgetFocusable_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_SubWidgetFocusable_C*>(IBPI_SubWidgetFocusable_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_SubWidgetFocusable.BPI_SubWidgetFocusable_C.OnWidgetCreated
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     ParentWidget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     ParentFocusedWidget                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void IBPI_SubWidgetFocusable_C::OnWidgetCreated(class UWidget* ParentWidget, class UWidget* ParentFocusedWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_SubWidgetFocusable_C", "OnWidgetCreated");

	Params::IBPI_SubWidgetFocusable_C_OnWidgetCreated_Params Parms{};

	Parms.ParentWidget = ParentWidget;
	Parms.ParentFocusedWidget = ParentFocusedWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPI_SubWidgetFocusable.BPI_SubWidgetFocusable_C.OnSubWidgetClosed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               FocusedParentWidget                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               NewWidgetCreated                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_SubWidgetFocusable_C::OnSubWidgetClosed(bool FocusedParentWidget, bool NewWidgetCreated)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_SubWidgetFocusable_C", "OnSubWidgetClosed");

	Params::IBPI_SubWidgetFocusable_C_OnSubWidgetClosed_Params Parms{};

	Parms.FocusedParentWidget = FocusedParentWidget;
	Parms.NewWidgetCreated = NewWidgetCreated;

	UObject::ProcessEvent(Func, &Parms);

}

}


