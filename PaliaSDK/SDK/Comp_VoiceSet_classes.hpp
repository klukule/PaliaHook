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

// 0x8 (0xA8 - 0xA0)
// BlueprintGeneratedClass Comp_VoiceSet.Comp_VoiceSet_C
class UComp_VoiceSet_C : public UActorComponent
{
public:
	class UVoiceSet_C*                           VoiceSet;                                          // 0xA0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Comp_VoiceSet_C");
		return Clss;
	}

	void GetVoiceEvent(enum class E_VoiceEffortEvent InEffort, class UAkAudioEvent** InValue, class UAkAudioEvent* InCallFunc_GetVoiceEvent_Value, bool InCallFunc_IsValid_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
