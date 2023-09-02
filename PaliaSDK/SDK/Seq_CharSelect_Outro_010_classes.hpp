#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x40 - 0x38)
// BlueprintGeneratedClass Seq_CharSelect_Outro_010.Seq_CharSelect_Outro_010 (Director BP)_C
class USeq_CharSelect_Outro_010__Director_BP__C : public ULevelSequenceDirector
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x38(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class USeq_CharSelect_Outro_010__Director_BP__C* GetDefaultObj();

	void SequenceEvent__ENTRYPOINTSeq_CharSelect_Outro_010__Director_BP_();
	void StopFlowAudio();
	void ExecuteUbergraph_Seq_CharSelect_Outro_010__Director_BP_(int32 EntryPoint, int32 CallFunc_AkEventGlobal_ReturnValue);
};

}


