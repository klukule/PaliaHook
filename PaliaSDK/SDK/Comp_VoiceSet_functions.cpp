#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Comp_VoiceSet.Comp_VoiceSet_C
// (None)

class UClass* UComp_VoiceSet_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Comp_VoiceSet_C");

	return Clss;
}


// Comp_VoiceSet_C Comp_VoiceSet.Default__Comp_VoiceSet_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UComp_VoiceSet_C* UComp_VoiceSet_C::GetDefaultObj()
{
	static class UComp_VoiceSet_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UComp_VoiceSet_C*>(UComp_VoiceSet_C::StaticClass()->DefaultObject);

	return Default;
}


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


