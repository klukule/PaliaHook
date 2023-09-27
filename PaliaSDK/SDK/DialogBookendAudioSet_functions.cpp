#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DialogBookendAudioSet.DialogBookendAudioSet_C
// (None)

class UClass* UDialogBookendAudioSet_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DialogBookendAudioSet_C");

	return Clss;
}


// DialogBookendAudioSet_C DialogBookendAudioSet.Default__DialogBookendAudioSet_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDialogBookendAudioSet_C* UDialogBookendAudioSet_C::GetDefaultObj()
{
	static class UDialogBookendAudioSet_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDialogBookendAudioSet_C*>(UDialogBookendAudioSet_C::StaticClass()->DefaultObject);

	return Default;
}


// Function DialogBookendAudioSet.DialogBookendAudioSet_C.GetRandomDialogEvent
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UAkAudioEvent*               DialogEvent                                                      (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class UAkAudioEvent*>       CallFunc_Set_ToArray_Result                                      (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkAudioEvent*               CallFunc_Array_Random_OutItem                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Random_OutIndex                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDialogBookendAudioSet_C::GetRandomDialogEvent(class UAkAudioEvent** DialogEvent, TArray<class UAkAudioEvent*>& CallFunc_Set_ToArray_Result, int32 CallFunc_Array_Length_ReturnValue, class UAkAudioEvent* CallFunc_Array_Random_OutItem, int32 CallFunc_Array_Random_OutIndex, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DialogBookendAudioSet_C", "GetRandomDialogEvent");

	Params::UDialogBookendAudioSet_C_GetRandomDialogEvent_Params Parms{};

	Parms.CallFunc_Set_ToArray_Result = CallFunc_Set_ToArray_Result;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Random_OutItem = CallFunc_Array_Random_OutItem;
	Parms.CallFunc_Array_Random_OutIndex = CallFunc_Array_Random_OutIndex;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (DialogEvent != nullptr)
		*DialogEvent = Parms.DialogEvent;

}

}


