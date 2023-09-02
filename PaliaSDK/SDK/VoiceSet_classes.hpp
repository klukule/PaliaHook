#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x80 - 0x30)
// BlueprintGeneratedClass VoiceSet.VoiceSet_C
class UVoiceSet_C : public UVAL_VoiceSet
{
public:
	TMap<enum class E_VoiceEffortEvent, class UAkAudioEvent*> VoiceEvents;                                       // 0x30(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UVoiceSet_C* GetDefaultObj();

	void GetRandomVoiceEvent(class UAkAudioEvent** Value, const TArray<class UAkAudioEvent*>& NonNullAudioEvents, int32 Temp_int_Array_Index_Variable, class UAkAudioEvent* CallFunc_Array_Random_OutItem, int32 CallFunc_Array_Random_OutIndex, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UAkAudioEvent*>& CallFunc_Map_Values_Values, int32 CallFunc_Array_Length_ReturnValue, class UAkAudioEvent* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void GetVoiceEvent(enum class E_VoiceEffortEvent Effort, class UAkAudioEvent** Value, class UAkAudioEvent* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
};

}


