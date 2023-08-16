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
// BlueprintGeneratedClass CreatureAudioSet.CreatureAudioSet_C
class UCreatureAudioSet_C : public UPrimaryDataAsset
{
public:
	TMap<enum class E_CreatureAudioEvents, class UAkAudioEvent*> CreatureAudioMap;                                  // 0x30(0x50)(Edit, BlueprintVisible)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CreatureAudioSet_C");
		return Clss;
	}

	void Get_Creature_Audio_Event(enum class E_CreatureAudioEvents InEvent, class UAkAudioEvent** InAkEvent, bool* InFound, class UAkAudioEvent* InCallFunc_Map_Find_Value, bool InCallFunc_Map_Find_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
