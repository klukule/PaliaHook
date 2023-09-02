#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Seq_CharSelect_Outro_010.Seq_CharSelect_Outro_010 (Director BP)_C
// (None)

class UClass* USeq_CharSelect_Outro_010__Director_BP__C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Seq_CharSelect_Outro_010 (Director BP)_C");

	return Clss;
}


// Seq_CharSelect_Outro_010 (Director BP)_C Seq_CharSelect_Outro_010.Default__Seq_CharSelect_Outro_010 (Director BP)_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USeq_CharSelect_Outro_010__Director_BP__C* USeq_CharSelect_Outro_010__Director_BP__C::GetDefaultObj()
{
	static class USeq_CharSelect_Outro_010__Director_BP__C* Default = nullptr;

	if (!Default)
		Default = static_cast<USeq_CharSelect_Outro_010__Director_BP__C*>(USeq_CharSelect_Outro_010__Director_BP__C::StaticClass()->DefaultObject);

	return Default;
}


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


