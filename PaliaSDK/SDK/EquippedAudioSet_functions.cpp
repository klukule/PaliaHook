#pragma once

// Dumped with Dumper-7!

#include "SDK.hpp"

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

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

void UEquippedAudioSet_C::Get_Audio_Event(enum class E_EquippedEvents InEvent, class UAkAudioEvent** InAudioEvent, bool* InFound, class UAkAudioEvent* InCallFunc_Map_Find_Value, bool InCallFunc_Map_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EquippedAudioSet_C", "Get Audio Event");

	Params::UEquippedAudioSet_C_Get_Audio_Event_Params Parms{};

	Parms.Event = InEvent;
	Parms.CallFunc_Map_Find_Value = InCallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = InCallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (InAudioEvent != nullptr)
		*InAudioEvent = Parms.AudioEvent;

	if (InFound != nullptr)
		*InFound = Parms.Found;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
