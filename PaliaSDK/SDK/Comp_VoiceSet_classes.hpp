#pragma once

// Dumped with Dumper-7!


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

	static class UClass* StaticClass();
	static class UComp_VoiceSet_C* GetDefaultObj();

	void GetVoiceEvent(enum class E_VoiceEffortEvent Effort, class UAkAudioEvent** Value, class UAkAudioEvent* CallFunc_GetVoiceEvent_Value, bool CallFunc_IsValid_ReturnValue);
};

}


