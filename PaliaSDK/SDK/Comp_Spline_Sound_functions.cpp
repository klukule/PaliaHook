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


// Function Comp_Spline_Sound.Comp_Spline_Sound_C.InitializeSound
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_AkEventComponent_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkComponent*                CallFunc_SpawnAkComponentAtLocation_ReturnValue                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_VariableSet_OcclusionRefreshInterval_ImplicitCast         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UComp_Spline_Sound_C::InitializeSound(bool InCallFunc_IsValid_ReturnValue, class AActor* InCallFunc_GetOwner_ReturnValue, const struct FVector& InCallFunc_K2_GetActorLocation_ReturnValue, int32 InCallFunc_AkEventComponent_ReturnValue, class UAkComponent* InCallFunc_SpawnAkComponentAtLocation_ReturnValue, bool InCallFunc_IsServer_ReturnValue, float InK2Node_VariableSet_OcclusionRefreshInterval_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Comp_Spline_Sound_C", "InitializeSound");

	Params::UComp_Spline_Sound_C_InitializeSound_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = InCallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = InCallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = InCallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_AkEventComponent_ReturnValue = InCallFunc_AkEventComponent_ReturnValue;
	Parms.CallFunc_SpawnAkComponentAtLocation_ReturnValue = InCallFunc_SpawnAkComponentAtLocation_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = InCallFunc_IsServer_ReturnValue;
	Parms.K2Node_VariableSet_OcclusionRefreshInterval_ImplicitCast = InK2Node_VariableSet_OcclusionRefreshInterval_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Comp_Spline_Sound.Comp_Spline_Sound_C.SetSoundPositionsAlongSpline
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USplineComponent*            Spline                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_Array_Get_Item                                          (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetSplineLength_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSet_SplineLength_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetLocationAtDistanceAlongSpline_Distance_ImplicitCast  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UComp_Spline_Sound_C::SetSoundPositionsAlongSpline(class USplineComponent* InSpline, int32 InTemp_int_Array_Index_Variable, bool InCallFunc_IsValid_ReturnValue, const struct FTransform& InCallFunc_Array_Get_Item, int32 InCallFunc_Array_Length_ReturnValue, const struct FVector& InCallFunc_BreakTransform_Location, const struct FRotator& InCallFunc_BreakTransform_Rotation, const struct FVector& InCallFunc_BreakTransform_Scale, float InCallFunc_GetSplineLength_ReturnValue, bool InCallFunc_Greater_DoubleDouble_ReturnValue, double InCallFunc_Add_DoubleDouble_ReturnValue, int32 InTemp_int_Loop_Counter_Variable, bool InCallFunc_Less_IntInt_ReturnValue, int32 InCallFunc_Add_IntInt_ReturnValue, bool InCallFunc_IsServer_ReturnValue, const struct FVector& InCallFunc_GetLocationAtDistanceAlongSpline_ReturnValue, const struct FTransform& InCallFunc_MakeTransform_ReturnValue, int32 InCallFunc_Array_Add_ReturnValue, double InCallFunc_Add_DoubleDouble_ReturnValue_1, bool InCallFunc_Less_DoubleDouble_ReturnValue, double InK2Node_VariableSet_SplineLength_ImplicitCast, float InCallFunc_GetLocationAtDistanceAlongSpline_Distance_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Comp_Spline_Sound_C", "SetSoundPositionsAlongSpline");

	Params::UComp_Spline_Sound_C_SetSoundPositionsAlongSpline_Params Parms{};

	Parms.Spline = InSpline;
	Parms.Temp_int_Array_Index_Variable = InTemp_int_Array_Index_Variable;
	Parms.CallFunc_IsValid_ReturnValue = InCallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_Get_Item = InCallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = InCallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_BreakTransform_Location = InCallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = InCallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = InCallFunc_BreakTransform_Scale;
	Parms.CallFunc_GetSplineLength_ReturnValue = InCallFunc_GetSplineLength_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = InCallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = InCallFunc_Add_DoubleDouble_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = InTemp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = InCallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = InCallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = InCallFunc_IsServer_ReturnValue;
	Parms.CallFunc_GetLocationAtDistanceAlongSpline_ReturnValue = InCallFunc_GetLocationAtDistanceAlongSpline_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = InCallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = InCallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue_1 = InCallFunc_Add_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = InCallFunc_Less_DoubleDouble_ReturnValue;
	Parms.K2Node_VariableSet_SplineLength_ImplicitCast = InK2Node_VariableSet_SplineLength_ImplicitCast;
	Parms.CallFunc_GetLocationAtDistanceAlongSpline_Distance_ImplicitCast = InCallFunc_GetLocationAtDistanceAlongSpline_Distance_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Comp_Spline_Sound.Comp_Spline_Sound_C.UpdateAudioPosition
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USplineComponent*            Spline                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// double                             DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerCameraManager*        LocalPlayerCam                                                   (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_FindLocationClosestToWorldLocation_ReturnValue          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerCameraManager*        CallFunc_GetPlayerCameraManager_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_VInterpTo_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetWorldLocation_SweepHitResult                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// float                              CallFunc_VInterpTo_DeltaTime_ImplicitCast                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_VInterpTo_InterpSpeed_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UComp_Spline_Sound_C::UpdateAudioPosition(class USplineComponent* InSpline, double InDeltaSeconds, bool* InSuccess, class APlayerCameraManager* InLocalPlayerCam, bool InCallFunc_IsValid_ReturnValue, bool InCallFunc_IsValid_ReturnValue_1, bool InCallFunc_IsValid_ReturnValue_2, bool InCallFunc_Not_PreBool_ReturnValue, bool InCallFunc_IsDedicatedServer_ReturnValue, const struct FVector& InCallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& InCallFunc_FindLocationClosestToWorldLocation_ReturnValue, class APlayerCameraManager* InCallFunc_GetPlayerCameraManager_ReturnValue, bool InCallFunc_BooleanOR_ReturnValue, const struct FVector& InCallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& InCallFunc_VInterpTo_ReturnValue, const struct FHitResult& InCallFunc_K2_SetWorldLocation_SweepHitResult, float InCallFunc_VInterpTo_DeltaTime_ImplicitCast, float InCallFunc_VInterpTo_InterpSpeed_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Comp_Spline_Sound_C", "UpdateAudioPosition");

	Params::UComp_Spline_Sound_C_UpdateAudioPosition_Params Parms{};

	Parms.Spline = InSpline;
	Parms.DeltaSeconds = InDeltaSeconds;
	Parms.LocalPlayerCam = InLocalPlayerCam;
	Parms.CallFunc_IsValid_ReturnValue = InCallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = InCallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = InCallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_Not_PreBool_ReturnValue = InCallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = InCallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = InCallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_FindLocationClosestToWorldLocation_ReturnValue = InCallFunc_FindLocationClosestToWorldLocation_ReturnValue;
	Parms.CallFunc_GetPlayerCameraManager_ReturnValue = InCallFunc_GetPlayerCameraManager_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = InCallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = InCallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_VInterpTo_ReturnValue = InCallFunc_VInterpTo_ReturnValue;
	Parms.CallFunc_K2_SetWorldLocation_SweepHitResult = InCallFunc_K2_SetWorldLocation_SweepHitResult;
	Parms.CallFunc_VInterpTo_DeltaTime_ImplicitCast = InCallFunc_VInterpTo_DeltaTime_ImplicitCast;
	Parms.CallFunc_VInterpTo_InterpSpeed_ImplicitCast = InCallFunc_VInterpTo_InterpSpeed_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (InSuccess != nullptr)
		*InSuccess = Parms.Success;

}


// Function Comp_Spline_Sound.Comp_Spline_Sound_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void UComp_Spline_Sound_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Comp_Spline_Sound_C", "ReceiveBeginPlay");

	Params::UComp_Spline_Sound_C_ReceiveBeginPlay_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function Comp_Spline_Sound.Comp_Spline_Sound_C.ExecuteUbergraph_Comp_Spline_Sound
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UComp_Spline_Sound_C::ExecuteUbergraph_Comp_Spline_Sound(int32 InEntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Comp_Spline_Sound_C", "ExecuteUbergraph_Comp_Spline_Sound");

	Params::UComp_Spline_Sound_C_ExecuteUbergraph_Comp_Spline_Sound_Params Parms{};

	Parms.EntryPoint = InEntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
