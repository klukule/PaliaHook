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


// Function Seq_CharSelect_Outro_010.Seq_CharSelect_Outro_010 (Director BP)_C.SequenceEvent__ENTRYPOINTSeq_CharSelect_Outro_010 (Director BP)
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void USeq_CharSelect_Outro_010__Director_BP__C::SequenceEvent__ENTRYPOINTSeq_CharSelect_Outro_010__Director_BP_()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Seq_CharSelect_Outro_010 (Director BP)_C", "SequenceEvent__ENTRYPOINTSeq_CharSelect_Outro_010 (Director BP)");

	Params::USeq_CharSelect_Outro_010__Director_BP__C_SequenceEvent__ENTRYPOINTSeq_CharSelect_Outro_010__Director_BP__Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function Seq_CharSelect_Outro_010.Seq_CharSelect_Outro_010 (Director BP)_C.StopFlowAudio
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void USeq_CharSelect_Outro_010__Director_BP__C::StopFlowAudio()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Seq_CharSelect_Outro_010 (Director BP)_C", "StopFlowAudio");

	Params::USeq_CharSelect_Outro_010__Director_BP__C_StopFlowAudio_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function Seq_CharSelect_Outro_010.Seq_CharSelect_Outro_010 (Director BP)_C.ExecuteUbergraph_Seq_CharSelect_Outro_010 (Director BP)
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_AkEventGlobal_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USeq_CharSelect_Outro_010__Director_BP__C::ExecuteUbergraph_Seq_CharSelect_Outro_010__Director_BP_(int32 EntryPoint, int32 CallFunc_AkEventGlobal_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Seq_CharSelect_Outro_010 (Director BP)_C", "ExecuteUbergraph_Seq_CharSelect_Outro_010 (Director BP)");

	Params::USeq_CharSelect_Outro_010__Director_BP__C_ExecuteUbergraph_Seq_CharSelect_Outro_010__Director_BP__Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_AkEventGlobal_ReturnValue = CallFunc_AkEventGlobal_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
