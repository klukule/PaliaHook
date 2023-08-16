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


// Function Comp_RtpcTracker.Comp_RtpcTracker_C.DrawDebug
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      BuiltString                                                      (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// TArray<class UAkRtpc*>             Keys                                                             (Edit, BlueprintVisible)
// TArray<double>                     Values                                                           (Edit, BlueprintVisible)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Set_Length_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// double                             CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<class UAkRtpc*, double>       CallFunc_GetRtpcs_RTPC_Map                                       ()
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// TArray<class UAkRtpc*>             CallFunc_Map_Keys_Keys                                           (ReferenceParm)
// class UAkRtpc*                     CallFunc_Array_Get_Item_1                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (ZeroConstructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<class UAkRtpc*, double>       CallFunc_GetRtpcs_RTPC_Map_1                                     ()
// TArray<double>                     CallFunc_Map_Values_Values                                       (ReferenceParm)

void UComp_RtpcTracker_C::DrawDebug(const class FString& BuiltString, const TArray<class UAkRtpc*>& Keys, const TArray<double>& Values, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Set_Length_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, double CallFunc_Array_Get_Item, TMap<class UAkRtpc*, double> CallFunc_GetRtpcs_RTPC_Map, const class FString& CallFunc_Conv_DoubleToString_ReturnValue, TArray<class UAkRtpc*>& CallFunc_Map_Keys_Keys, class UAkRtpc* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, class AActor* CallFunc_GetOwner_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, TMap<class UAkRtpc*, double> CallFunc_GetRtpcs_RTPC_Map_1, TArray<double>& CallFunc_Map_Values_Values)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Comp_RtpcTracker_C", "DrawDebug");

	Params::UComp_RtpcTracker_C_DrawDebug_Params Parms{};

	Parms.BuiltString = BuiltString;
	Parms.Keys = Keys;
	Parms.Values = Values;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Set_Length_ReturnValue = CallFunc_Set_Length_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetRtpcs_RTPC_Map = CallFunc_GetRtpcs_RTPC_Map;
	Parms.CallFunc_Conv_DoubleToString_ReturnValue = CallFunc_Conv_DoubleToString_ReturnValue;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = CallFunc_Concat_StrStr_ReturnValue_4;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_GetRtpcs_RTPC_Map_1 = CallFunc_GetRtpcs_RTPC_Map_1;
	Parms.CallFunc_Map_Values_Values = CallFunc_Map_Values_Values;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Comp_RtpcTracker.Comp_RtpcTracker_C.PropagateRtpcs
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAkComponent*                AkComponent                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<double>                     Values                                                           (Edit, BlueprintVisible)
// TArray<class UAkRtpc*>             Keys                                                             (Edit, BlueprintVisible)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkRtpc*                     CallFunc_Array_Get_Item_1                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<class UAkRtpc*, double>       CallFunc_GetRtpcs_RTPC_Map                                       ()
// TArray<double>                     CallFunc_Map_Values_Values                                       (ReferenceParm)
// TMap<class UAkRtpc*, double>       CallFunc_GetRtpcs_RTPC_Map_1                                     ()
// TArray<class UAkRtpc*>             CallFunc_Map_Keys_Keys                                           (ReferenceParm)
// float                              CallFunc_SetRTPCValue_Value_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UComp_RtpcTracker_C::PropagateRtpcs(class UAkComponent* AkComponent, const TArray<double>& Values, const TArray<class UAkRtpc*>& Keys, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, double CallFunc_Array_Get_Item, class UAkRtpc* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TMap<class UAkRtpc*, double> CallFunc_GetRtpcs_RTPC_Map, TArray<double>& CallFunc_Map_Values_Values, TMap<class UAkRtpc*, double> CallFunc_GetRtpcs_RTPC_Map_1, TArray<class UAkRtpc*>& CallFunc_Map_Keys_Keys, float CallFunc_SetRTPCValue_Value_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Comp_RtpcTracker_C", "PropagateRtpcs");

	Params::UComp_RtpcTracker_C_PropagateRtpcs_Params Parms{};

	Parms.AkComponent = AkComponent;
	Parms.Values = Values;
	Parms.Keys = Keys;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetRtpcs_RTPC_Map = CallFunc_GetRtpcs_RTPC_Map;
	Parms.CallFunc_Map_Values_Values = CallFunc_Map_Values_Values;
	Parms.CallFunc_GetRtpcs_RTPC_Map_1 = CallFunc_GetRtpcs_RTPC_Map_1;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_SetRTPCValue_Value_ImplicitCast = CallFunc_SetRTPCValue_Value_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Comp_RtpcTracker.Comp_RtpcTracker_C.GetRtpcs
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TMap<class UAkRtpc*, double>       RTPC_Map                                                         (Parm, OutParm)

void UComp_RtpcTracker_C::GetRtpcs(TMap<class UAkRtpc*, double>* RTPC_Map)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Comp_RtpcTracker_C", "GetRtpcs");

	Params::UComp_RtpcTracker_C_GetRtpcs_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (RTPC_Map != nullptr)
		*RTPC_Map = Parms.RTPC_Map;

}


// Function Comp_RtpcTracker.Comp_RtpcTracker_C.UpdateRtpcValue
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAkRtpc*                     RTPC                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// double                             Value                                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Interpolation                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UAkComponent*>        CallFunc_Set_ToArray_Result                                      (ReferenceParm, ContainsInstancedReference)
// class UAkComponent*                CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Set_Remove_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetRTPCValue_Value_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UComp_RtpcTracker_C::UpdateRtpcValue(class UAkRtpc*& RTPC, double& Value, int32 Interpolation, int32 Temp_int_Array_Index_Variable, TArray<class UAkComponent*>& CallFunc_Set_ToArray_Result, class UAkComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Set_Remove_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_SetRTPCValue_Value_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Comp_RtpcTracker_C", "UpdateRtpcValue");

	Params::UComp_RtpcTracker_C_UpdateRtpcValue_Params Parms{};

	Parms.RTPC = RTPC;
	Parms.Value = Value;
	Parms.Interpolation = Interpolation;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Set_ToArray_Result = CallFunc_Set_ToArray_Result;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Set_Remove_ReturnValue = CallFunc_Set_Remove_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_SetRTPCValue_Value_ImplicitCast = CallFunc_SetRTPCValue_Value_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Comp_RtpcTracker.Comp_RtpcTracker_C.GetRTPCValue
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UAkRtpc*                     RTPC                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// double                             Value                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Found                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UComp_RtpcTracker_C::GetRTPCValue(class UAkRtpc*& RTPC, double* Value, bool* Found, double CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Comp_RtpcTracker_C", "GetRTPCValue");

	Params::UComp_RtpcTracker_C_GetRTPCValue_Params Parms{};

	Parms.RTPC = RTPC;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = Parms.Value;

	if (Found != nullptr)
		*Found = Parms.Found;

}


// Function Comp_RtpcTracker.Comp_RtpcTracker_C.AudioDebugRtpc
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               On                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UComp_RtpcTracker_C::AudioDebugRtpc(bool On)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Comp_RtpcTracker_C", "AudioDebugRtpc");

	Params::UComp_RtpcTracker_C_AudioDebugRtpc_Params Parms{};

	Parms.On = On;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Comp_RtpcTracker.Comp_RtpcTracker_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EEndPlayReason          EndPlayReason                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UComp_RtpcTracker_C::ReceiveEndPlay(enum class EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Comp_RtpcTracker_C", "ReceiveEndPlay");

	Params::UComp_RtpcTracker_C_ReceiveEndPlay_Params Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Comp_RtpcTracker.Comp_RtpcTracker_C.ExecuteUbergraph_Comp_RtpcTracker
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEndPlayReason          K2Node_Event_EndPlayReason                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BuildIsShipping_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_On                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UComp_RtpcTracker_C::ExecuteUbergraph_Comp_RtpcTracker(int32 EntryPoint, enum class EEndPlayReason K2Node_Event_EndPlayReason, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_BuildIsShipping_ReturnValue, bool K2Node_CustomEvent_On)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Comp_RtpcTracker_C", "ExecuteUbergraph_Comp_RtpcTracker");

	Params::UComp_RtpcTracker_C_ExecuteUbergraph_Comp_RtpcTracker_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_EndPlayReason = K2Node_Event_EndPlayReason;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_BuildIsShipping_ReturnValue = CallFunc_BuildIsShipping_ReturnValue;
	Parms.K2Node_CustomEvent_On = K2Node_CustomEvent_On;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Comp_RtpcTracker.Comp_RtpcTracker_C.OnRtpcChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UComp_RtpcTracker_C*         RtpcTrackerComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UAkRtpc*                     RTPC                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Interpolation_ms_                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UComp_RtpcTracker_C::OnRtpcChanged__DelegateSignature(class UComp_RtpcTracker_C* RtpcTrackerComp, class UAkRtpc* RTPC, double Value, int32 Interpolation_ms_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Comp_RtpcTracker_C", "OnRtpcChanged__DelegateSignature");

	Params::UComp_RtpcTracker_C_OnRtpcChanged__DelegateSignature_Params Parms{};

	Parms.RtpcTrackerComp = RtpcTrackerComp;
	Parms.RTPC = RTPC;
	Parms.Value = Value;
	Parms.Interpolation_ms_ = Interpolation_ms_;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
