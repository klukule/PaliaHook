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


// Function Comp_CreatureAudio.Comp_CreatureAudio_C.FindInCreatureSurfaceMap
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        Key                                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  Value                                                            (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Found                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  CallFunc_Map_Find_Value                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UComp_CreatureAudio_C::FindInCreatureSurfaceMap(class FName& InKey, class UDataTable** InValue, bool* InFound, class UDataTable* InCallFunc_Map_Find_Value, bool InCallFunc_Map_Find_ReturnValue, bool InCallFunc_IsValid_ReturnValue, bool InCallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Comp_CreatureAudio_C", "FindInCreatureSurfaceMap");

	Params::UComp_CreatureAudio_C_FindInCreatureSurfaceMap_Params Parms{};

	Parms.Key = InKey;
	Parms.CallFunc_Map_Find_Value = InCallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = InCallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = InCallFunc_IsValid_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = InCallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (InValue != nullptr)
		*InValue = Parms.Value;

	if (InFound != nullptr)
		*InFound = Parms.Found;

}


// Function Comp_CreatureAudio.Comp_CreatureAudio_C.GetCreatureAudioEvent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class E_CreatureAudioEvents   Event                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkAudioEvent*               AkEvent                                                          (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Found                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkAudioEvent*               CallFunc_Get_Creature_Audio_Event_AkEvent                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Get_Creature_Audio_Event_Found                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UComp_CreatureAudio_C::GetCreatureAudioEvent(enum class E_CreatureAudioEvents InEvent, class UAkAudioEvent** InAkEvent, bool* InFound, class UAkAudioEvent* InCallFunc_Get_Creature_Audio_Event_AkEvent, bool InCallFunc_Get_Creature_Audio_Event_Found)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Comp_CreatureAudio_C", "GetCreatureAudioEvent");

	Params::UComp_CreatureAudio_C_GetCreatureAudioEvent_Params Parms{};

	Parms.Event = InEvent;
	Parms.CallFunc_Get_Creature_Audio_Event_AkEvent = InCallFunc_Get_Creature_Audio_Event_AkEvent;
	Parms.CallFunc_Get_Creature_Audio_Event_Found = InCallFunc_Get_Creature_Audio_Event_Found;

	UObject::ProcessEvent(Func, &Parms);

	if (InAkEvent != nullptr)
		*InAkEvent = Parms.AkEvent;

	if (InFound != nullptr)
		*InFound = Parms.Found;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
