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


// Function Comp_CV_Overlaps.Comp_CV_Overlaps_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void UComp_CV_Overlaps_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Comp_CV_Overlaps_C", "ReceiveBeginPlay");

	Params::UComp_CV_Overlaps_C_ReceiveBeginPlay_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function Comp_CV_Overlaps.Comp_CV_Overlaps_C.BeginOverlap
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      OverlappedActor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UComp_CV_Overlaps_C::BeginOverlap(class AActor* InOverlappedActor, class AActor* InOtherActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Comp_CV_Overlaps_C", "BeginOverlap");

	Params::UComp_CV_Overlaps_C_BeginOverlap_Params Parms{};

	Parms.OverlappedActor = InOverlappedActor;
	Parms.OtherActor = InOtherActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Comp_CV_Overlaps.Comp_CV_Overlaps_C.EndOverlap
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      OverlappedActor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UComp_CV_Overlaps_C::EndOverlap(class AActor* InOverlappedActor, class AActor* InOtherActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Comp_CV_Overlaps_C", "EndOverlap");

	Params::UComp_CV_Overlaps_C_EndOverlap_Params Parms{};

	Parms.OverlappedActor = InOverlappedActor;
	Parms.OtherActor = InOtherActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Comp_CV_Overlaps.Comp_CV_Overlaps_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EEndPlayReason          EndPlayReason                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UComp_CV_Overlaps_C::ReceiveEndPlay(enum class EEndPlayReason InEndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Comp_CV_Overlaps_C", "ReceiveEndPlay");

	Params::UComp_CV_Overlaps_C_ReceiveEndPlay_Params Parms{};

	Parms.EndPlayReason = InEndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Comp_CV_Overlaps.Comp_CV_Overlaps_C.ExecuteUbergraph_Comp_CV_Overlaps
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_OverlappedActor_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_OtherActor_1                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_OverlappedActor                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_OtherActor                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EEndPlayReason          K2Node_Event_EndPlayReason                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              CallFunc_GetOverlappingActors_OverlappingActors                  (ReferenceParm)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UComp_CV_Overlaps_C::ExecuteUbergraph_Comp_CV_Overlaps(int32 InEntryPoint, FDelegateProperty_ InK2Node_CreateDelegate_OutputDelegate, int32 InTemp_int_Array_Index_Variable, FDelegateProperty_ InK2Node_CreateDelegate_OutputDelegate_1, class AActor* InCallFunc_GetOwner_ReturnValue, class AActor* InK2Node_CustomEvent_OverlappedActor_1, class AActor* InK2Node_CustomEvent_OtherActor_1, class AActor* InK2Node_CustomEvent_OverlappedActor, class AActor* InK2Node_CustomEvent_OtherActor, enum class EEndPlayReason InK2Node_Event_EndPlayReason, int32 InTemp_int_Loop_Counter_Variable, TArray<class AActor*>& InCallFunc_GetOverlappingActors_OverlappingActors, class AActor* InCallFunc_Array_Get_Item, int32 InCallFunc_Array_Length_ReturnValue, bool InCallFunc_Less_IntInt_ReturnValue, int32 InCallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Comp_CV_Overlaps_C", "ExecuteUbergraph_Comp_CV_Overlaps");

	Params::UComp_CV_Overlaps_C_ExecuteUbergraph_Comp_CV_Overlaps_Params Parms{};

	Parms.EntryPoint = InEntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = InK2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_int_Array_Index_Variable = InTemp_int_Array_Index_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = InK2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetOwner_ReturnValue = InCallFunc_GetOwner_ReturnValue;
	Parms.K2Node_CustomEvent_OverlappedActor_1 = InK2Node_CustomEvent_OverlappedActor_1;
	Parms.K2Node_CustomEvent_OtherActor_1 = InK2Node_CustomEvent_OtherActor_1;
	Parms.K2Node_CustomEvent_OverlappedActor = InK2Node_CustomEvent_OverlappedActor;
	Parms.K2Node_CustomEvent_OtherActor = InK2Node_CustomEvent_OtherActor;
	Parms.K2Node_Event_EndPlayReason = InK2Node_Event_EndPlayReason;
	Parms.Temp_int_Loop_Counter_Variable = InTemp_int_Loop_Counter_Variable;
	Parms.CallFunc_GetOverlappingActors_OverlappingActors = InCallFunc_GetOverlappingActors_OverlappingActors;
	Parms.CallFunc_Array_Get_Item = InCallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = InCallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = InCallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = InCallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
