#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Seq_CharSelect_Outro_Master.Seq_CharSelect_Outro_Master (Director BP)_C
// (None)

class UClass* USeq_CharSelect_Outro_Master__Director_BP__C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Seq_CharSelect_Outro_Master (Director BP)_C");

	return Clss;
}


// Seq_CharSelect_Outro_Master (Director BP)_C Seq_CharSelect_Outro_Master.Default__Seq_CharSelect_Outro_Master (Director BP)_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USeq_CharSelect_Outro_Master__Director_BP__C* USeq_CharSelect_Outro_Master__Director_BP__C::GetDefaultObj()
{
	static class USeq_CharSelect_Outro_Master__Director_BP__C* Default = nullptr;

	if (!Default)
		Default = static_cast<USeq_CharSelect_Outro_Master__Director_BP__C*>(USeq_CharSelect_Outro_Master__Director_BP__C::StaticClass()->DefaultObject);

	return Default;
}

}


