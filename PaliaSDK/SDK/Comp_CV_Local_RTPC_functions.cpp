#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Comp_CV_Local_RTPC.Comp_CV_Local_RTPC_C
// (SceneComponent)

class UClass* UComp_CV_Local_RTPC_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Comp_CV_Local_RTPC_C");

	return Clss;
}


// Comp_CV_Local_RTPC_C Comp_CV_Local_RTPC.Default__Comp_CV_Local_RTPC_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UComp_CV_Local_RTPC_C* UComp_CV_Local_RTPC_C::GetDefaultObj()
{
	static class UComp_CV_Local_RTPC_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UComp_CV_Local_RTPC_C*>(UComp_CV_Local_RTPC_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Comp_CV_Local_RTPC.Comp_CV_Local_RTPC_C.SetParameters
// (Event, Public, BlueprintEvent)
// Parameters:

void UComp_CV_Local_RTPC_C::SetParameters()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Comp_CV_Local_RTPC_C", "SetParameters");

	Params::UComp_CV_Local_RTPC_C_SetParameters_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function Comp_CV_Local_RTPC.Comp_CV_Local_RTPC_C.ExecuteUbergraph_Comp_CV_Local_RTPC
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UComp_CV_Local_RTPC_C::ExecuteUbergraph_Comp_CV_Local_RTPC(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Comp_CV_Local_RTPC_C", "ExecuteUbergraph_Comp_CV_Local_RTPC");

	Params::UComp_CV_Local_RTPC_C_ExecuteUbergraph_Comp_CV_Local_RTPC_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


