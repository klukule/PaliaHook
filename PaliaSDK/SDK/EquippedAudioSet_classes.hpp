#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x80 - 0x30)
// BlueprintGeneratedClass EquippedAudioSet.EquippedAudioSet_C
class UEquippedAudioSet_C : public UPrimaryDataAsset
{
public:
	TMap<enum class E_EquippedEvents, class UAkAudioEvent*> EquippedAudioEvents;                               // 0x30(0x50)(Edit, BlueprintVisible)

	static class UClass* StaticClass();
	static class UEquippedAudioSet_C* GetDefaultObj();

	void Get_Audio_Event(enum class E_EquippedEvents Event, class UAkAudioEvent** AudioEvent, bool* Found, class UAkAudioEvent* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
};

}


