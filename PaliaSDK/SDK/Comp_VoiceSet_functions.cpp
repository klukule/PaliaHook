#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function Comp_VoiceSet.Comp_VoiceSet_C.GetVoiceEvent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class E_VoiceEffortEvent      Effort                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkAudioEvent*               Value                                                            (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAkAudioEvent*               CallFunc_GetVoiceEvent_Value                                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UComp_VoiceSet_C::GetVoiceEvent(enum class E_VoiceEffortEvent Effort, class UAkAudioEvent** Value, class UAkAudioEvent* CallFunc_GetVoiceEvent_Value, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Comp_VoiceSet_C", "GetVoiceEvent");

	Params::UComp_VoiceSet_C_GetVoiceEvent_Params Parms{};

	Parms.Effort = Effort;
	Parms.CallFunc_GetVoiceEvent_Value = CallFunc_GetVoiceEvent_Value;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = Parms.Value;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
