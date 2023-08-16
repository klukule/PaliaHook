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


// Function VoiceSet.VoiceSet_C.GetRandomVoiceEvent
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UAkAudioEvent*               Value                                                            (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class UAkAudioEvent*>       NonNullAudioEvents                                               (Edit, BlueprintVisible)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkAudioEvent*               CallFunc_Array_Random_OutItem                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Random_OutIndex                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UAkAudioEvent*>       CallFunc_Map_Values_Values                                       (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkAudioEvent*               CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UVoiceSet_C::GetRandomVoiceEvent(class UAkAudioEvent** InValue, const TArray<class UAkAudioEvent*>& InNonNullAudioEvents, int32 InTemp_int_Array_Index_Variable, class UAkAudioEvent* InCallFunc_Array_Random_OutItem, int32 InCallFunc_Array_Random_OutIndex, int32 InTemp_int_Loop_Counter_Variable, int32 InCallFunc_Add_IntInt_ReturnValue, TArray<class UAkAudioEvent*>& InCallFunc_Map_Values_Values, int32 InCallFunc_Array_Length_ReturnValue, class UAkAudioEvent* InCallFunc_Array_Get_Item, bool InCallFunc_Less_IntInt_ReturnValue, int32 InCallFunc_Array_Add_ReturnValue, bool InCallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VoiceSet_C", "GetRandomVoiceEvent");

	Params::UVoiceSet_C_GetRandomVoiceEvent_Params Parms{};

	Parms.NonNullAudioEvents = InNonNullAudioEvents;
	Parms.Temp_int_Array_Index_Variable = InTemp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Random_OutItem = InCallFunc_Array_Random_OutItem;
	Parms.CallFunc_Array_Random_OutIndex = InCallFunc_Array_Random_OutIndex;
	Parms.Temp_int_Loop_Counter_Variable = InTemp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = InCallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Map_Values_Values = InCallFunc_Map_Values_Values;
	Parms.CallFunc_Array_Length_ReturnValue = InCallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = InCallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = InCallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = InCallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = InCallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (InValue != nullptr)
		*InValue = Parms.Value;

}


// Function VoiceSet.VoiceSet_C.GetVoiceEvent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class E_VoiceEffortEvent      Effort                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkAudioEvent*               Value                                                            (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAkAudioEvent*               CallFunc_Map_Find_Value                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UVoiceSet_C::GetVoiceEvent(enum class E_VoiceEffortEvent InEffort, class UAkAudioEvent** InValue, class UAkAudioEvent* InCallFunc_Map_Find_Value, bool InCallFunc_Map_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VoiceSet_C", "GetVoiceEvent");

	Params::UVoiceSet_C_GetVoiceEvent_Params Parms{};

	Parms.Effort = InEffort;
	Parms.CallFunc_Map_Find_Value = InCallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = InCallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (InValue != nullptr)
		*InValue = Parms.Value;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
