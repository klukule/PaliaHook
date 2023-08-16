#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

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

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VoiceSet_C");
		return Clss;
	}

	void GetRandomVoiceEvent(class UAkAudioEvent** InValue, const TArray<class UAkAudioEvent*>& InNonNullAudioEvents, int32 InTemp_int_Array_Index_Variable, class UAkAudioEvent* InCallFunc_Array_Random_OutItem, int32 InCallFunc_Array_Random_OutIndex, int32 InTemp_int_Loop_Counter_Variable, int32 InCallFunc_Add_IntInt_ReturnValue, TArray<class UAkAudioEvent*>& InCallFunc_Map_Values_Values, int32 InCallFunc_Array_Length_ReturnValue, class UAkAudioEvent* InCallFunc_Array_Get_Item, bool InCallFunc_Less_IntInt_ReturnValue, int32 InCallFunc_Array_Add_ReturnValue, bool InCallFunc_IsValid_ReturnValue);
	void GetVoiceEvent(enum class E_VoiceEffortEvent InEffort, class UAkAudioEvent** InValue, class UAkAudioEvent* InCallFunc_Map_Find_Value, bool InCallFunc_Map_Find_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
