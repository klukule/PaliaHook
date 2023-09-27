#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x80 - 0x30)
// BlueprintGeneratedClass DialogBookendAudioSet.DialogBookendAudioSet_C
class UDialogBookendAudioSet_C : public UPrimaryDataAsset
{
public:
	TSet<class UAkAudioEvent*>                   DialogEvents;                                      // 0x30(0x50)(Edit, BlueprintVisible)

	static class UClass* StaticClass();
	static class UDialogBookendAudioSet_C* GetDefaultObj();

	void GetRandomDialogEvent(class UAkAudioEvent** DialogEvent, TArray<class UAkAudioEvent*>& CallFunc_Set_ToArray_Result, int32 CallFunc_Array_Length_ReturnValue, class UAkAudioEvent* CallFunc_Array_Random_OutItem, int32 CallFunc_Array_Random_OutIndex, bool CallFunc_Greater_IntInt_ReturnValue);
};

}


