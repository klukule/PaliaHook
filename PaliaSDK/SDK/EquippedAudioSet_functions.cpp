#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function EquippedAudioSet.EquippedAudioSet_C.Get Audio Event
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class E_EquippedEvents        Event                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkAudioEvent*               AudioEvent                                                       (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Found                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkAudioEvent*               CallFunc_Map_Find_Value                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEquippedAudioSet_C::Get_Audio_Event(enum class E_EquippedEvents Event, class UAkAudioEvent** AudioEvent, bool* Found, class UAkAudioEvent* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EquippedAudioSet_C", "Get Audio Event");

	Params::UEquippedAudioSet_C_Get_Audio_Event_Params Parms{};

	Parms.Event = Event;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (AudioEvent != nullptr)
		*AudioEvent = Parms.AudioEvent;

	if (Found != nullptr)
		*Found = Parms.Found;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
