#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CreatureAudioSet.CreatureAudioSet_C
// (None)

class UClass* UCreatureAudioSet_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CreatureAudioSet_C");

	return Clss;
}


// CreatureAudioSet_C CreatureAudioSet.Default__CreatureAudioSet_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCreatureAudioSet_C* UCreatureAudioSet_C::GetDefaultObj()
{
	static class UCreatureAudioSet_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCreatureAudioSet_C*>(UCreatureAudioSet_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CreatureAudioSet.CreatureAudioSet_C.Get Creature Audio Event
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class E_CreatureAudioEvents   Event                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkAudioEvent*               AkEvent                                                          (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Found                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkAudioEvent*               CallFunc_Map_Find_Value                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCreatureAudioSet_C::Get_Creature_Audio_Event(enum class E_CreatureAudioEvents Event, class UAkAudioEvent** AkEvent, bool* Found, class UAkAudioEvent* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreatureAudioSet_C", "Get Creature Audio Event");

	Params::UCreatureAudioSet_C_Get_Creature_Audio_Event_Params Parms{};

	Parms.Event = Event;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (AkEvent != nullptr)
		*AkEvent = Parms.AkEvent;

	if (Found != nullptr)
		*Found = Parms.Found;

}

}


