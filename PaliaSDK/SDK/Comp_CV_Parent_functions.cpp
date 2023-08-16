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


// Function Comp_CV_Parent.Comp_CV_Parent_C.OverlapBegin
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         OverlappedComponent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         OtherComp                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              OtherBodyIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bFromSweep                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  SweepResult                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void UComp_CV_Parent_C::OverlapBegin(class UPrimitiveComponent* InOverlappedComponent, class AActor* InOtherActor, class UPrimitiveComponent* InOtherComp, int32 InOtherBodyIndex, bool InbFromSweep, struct FHitResult& InSweepResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Comp_CV_Parent_C", "OverlapBegin");

	Params::UComp_CV_Parent_C_OverlapBegin_Params Parms{};

	Parms.OverlappedComponent = InOverlappedComponent;
	Parms.OtherActor = InOtherActor;
	Parms.OtherComp = InOtherComp;
	Parms.OtherBodyIndex = InOtherBodyIndex;
	Parms.bFromSweep = InbFromSweep;
	Parms.SweepResult = InSweepResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Comp_CV_Parent.Comp_CV_Parent_C.OverlapEnd
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         OverlappedComponent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         OtherComp                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              OtherBodyIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UComp_CV_Parent_C::OverlapEnd(class UPrimitiveComponent* InOverlappedComponent, class AActor* InOtherActor, class UPrimitiveComponent* InOtherComp, int32 InOtherBodyIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Comp_CV_Parent_C", "OverlapEnd");

	Params::UComp_CV_Parent_C_OverlapEnd_Params Parms{};

	Parms.OverlappedComponent = InOverlappedComponent;
	Parms.OtherActor = InOtherActor;
	Parms.OtherComp = InOtherComp;
	Parms.OtherBodyIndex = InOtherBodyIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Comp_CV_Parent.Comp_CV_Parent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void UComp_CV_Parent_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Comp_CV_Parent_C", "ReceiveBeginPlay");

	Params::UComp_CV_Parent_C_ReceiveBeginPlay_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function Comp_CV_Parent.Comp_CV_Parent_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EEndPlayReason          EndPlayReason                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UComp_CV_Parent_C::ReceiveEndPlay(enum class EEndPlayReason InEndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Comp_CV_Parent_C", "ReceiveEndPlay");

	Params::UComp_CV_Parent_C_ReceiveEndPlay_Params Parms{};

	Parms.EndPlayReason = InEndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Comp_CV_Parent.Comp_CV_Parent_C.ExecuteUbergraph_Comp_CV_Parent
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             CallFunc_GetAttachParent_ReturnValue                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_CustomEvent_OverlappedComponent_1                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_OtherActor_1                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_CustomEvent_OtherComp_1                                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_OtherBodyIndex_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bFromSweep                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  K2Node_CustomEvent_SweepResult                                   (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class UPrimitiveComponent*         K2Node_DynamicCast_AsPrimitive_Component                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_CustomEvent_OverlappedComponent                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_OtherActor                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_CustomEvent_OtherComp                                     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_OtherBodyIndex                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EEndPlayReason          K2Node_Event_EndPlayReason                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             CallFunc_GetAttachParent_ReturnValue_1                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_DynamicCast_AsPrimitive_Component_1                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UComp_CV_Parent_C::ExecuteUbergraph_Comp_CV_Parent(int32 InEntryPoint, class USceneComponent* InCallFunc_GetAttachParent_ReturnValue, class UPrimitiveComponent* InK2Node_CustomEvent_OverlappedComponent_1, class AActor* InK2Node_CustomEvent_OtherActor_1, class UPrimitiveComponent* InK2Node_CustomEvent_OtherComp_1, int32 InK2Node_CustomEvent_OtherBodyIndex_1, bool InK2Node_CustomEvent_bFromSweep, const struct FHitResult& InK2Node_CustomEvent_SweepResult, class UPrimitiveComponent* InK2Node_DynamicCast_AsPrimitive_Component, bool InK2Node_DynamicCast_bSuccess, class UPrimitiveComponent* InK2Node_CustomEvent_OverlappedComponent, class AActor* InK2Node_CustomEvent_OtherActor, class UPrimitiveComponent* InK2Node_CustomEvent_OtherComp, int32 InK2Node_CustomEvent_OtherBodyIndex, FDelegateProperty_ InK2Node_CreateDelegate_OutputDelegate, enum class EEndPlayReason InK2Node_Event_EndPlayReason, class USceneComponent* InCallFunc_GetAttachParent_ReturnValue_1, class UPrimitiveComponent* InK2Node_DynamicCast_AsPrimitive_Component_1, bool InK2Node_DynamicCast_bSuccess_1, FDelegateProperty_ InK2Node_CreateDelegate_OutputDelegate_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Comp_CV_Parent_C", "ExecuteUbergraph_Comp_CV_Parent");

	Params::UComp_CV_Parent_C_ExecuteUbergraph_Comp_CV_Parent_Params Parms{};

	Parms.EntryPoint = InEntryPoint;
	Parms.CallFunc_GetAttachParent_ReturnValue = InCallFunc_GetAttachParent_ReturnValue;
	Parms.K2Node_CustomEvent_OverlappedComponent_1 = InK2Node_CustomEvent_OverlappedComponent_1;
	Parms.K2Node_CustomEvent_OtherActor_1 = InK2Node_CustomEvent_OtherActor_1;
	Parms.K2Node_CustomEvent_OtherComp_1 = InK2Node_CustomEvent_OtherComp_1;
	Parms.K2Node_CustomEvent_OtherBodyIndex_1 = InK2Node_CustomEvent_OtherBodyIndex_1;
	Parms.K2Node_CustomEvent_bFromSweep = InK2Node_CustomEvent_bFromSweep;
	Parms.K2Node_CustomEvent_SweepResult = InK2Node_CustomEvent_SweepResult;
	Parms.K2Node_DynamicCast_AsPrimitive_Component = InK2Node_DynamicCast_AsPrimitive_Component;
	Parms.K2Node_DynamicCast_bSuccess = InK2Node_DynamicCast_bSuccess;
	Parms.K2Node_CustomEvent_OverlappedComponent = InK2Node_CustomEvent_OverlappedComponent;
	Parms.K2Node_CustomEvent_OtherActor = InK2Node_CustomEvent_OtherActor;
	Parms.K2Node_CustomEvent_OtherComp = InK2Node_CustomEvent_OtherComp;
	Parms.K2Node_CustomEvent_OtherBodyIndex = InK2Node_CustomEvent_OtherBodyIndex;
	Parms.K2Node_CreateDelegate_OutputDelegate = InK2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Event_EndPlayReason = InK2Node_Event_EndPlayReason;
	Parms.CallFunc_GetAttachParent_ReturnValue_1 = InCallFunc_GetAttachParent_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsPrimitive_Component_1 = InK2Node_DynamicCast_AsPrimitive_Component_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = InK2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = InK2Node_CreateDelegate_OutputDelegate_1;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
