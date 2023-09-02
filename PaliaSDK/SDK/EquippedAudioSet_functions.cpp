#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EquippedAudioSet.EquippedAudioSet_C
// (None)

class UClass* UEquippedAudioSet_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EquippedAudioSet_C");

	return Clss;
}


// EquippedAudioSet_C EquippedAudioSet.Default__EquippedAudioSet_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEquippedAudioSet_C* UEquippedAudioSet_C::GetDefaultObj()
{
	static class UEquippedAudioSet_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEquippedAudioSet_C*>(UEquippedAudioSet_C::StaticClass()->DefaultObject);

	return Default;
}


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


