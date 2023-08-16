#pragma once

// Dumped with Dumper-7!

#include "SDK.hpp"

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


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

void UComp_CV_Local_RTPC_C::ExecuteUbergraph_Comp_CV_Local_RTPC(int32 InEntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Comp_CV_Local_RTPC_C", "ExecuteUbergraph_Comp_CV_Local_RTPC");

	Params::UComp_CV_Local_RTPC_C_ExecuteUbergraph_Comp_CV_Local_RTPC_Params Parms{};

	Parms.EntryPoint = InEntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
