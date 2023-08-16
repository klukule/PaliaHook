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


// Function Ak_SurfaceEffect.Ak_SurfaceEffect_C.GetTraceParams
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class USceneComponent*             Mesh                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// double                             TraceStartOffset                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             TraceEndOffset                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Start                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     End                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     AttachLocation                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorForwardVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_3                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAk_SurfaceEffect_C::GetTraceParams(class USceneComponent* InMesh, double InTraceStartOffset, double InTraceEndOffset, struct FVector* InStart, struct FVector* InEnd, const struct FVector& InAttachLocation, const struct FVector& InCallFunc_MakeVector_ReturnValue, const struct FVector& InCallFunc_MakeVector_ReturnValue_1, class AActor* InCallFunc_GetOwner_ReturnValue, const struct FVector& InCallFunc_GetActorForwardVector_ReturnValue, const struct FVector& InCallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& InCallFunc_Add_VectorVector_ReturnValue, const struct FVector& InCallFunc_Add_VectorVector_ReturnValue_1, const struct FVector& InCallFunc_Multiply_VectorFloat_ReturnValue_1, const struct FVector& InCallFunc_Add_VectorVector_ReturnValue_2, const struct FVector& InCallFunc_Add_VectorVector_ReturnValue_3, const struct FVector& InCallFunc_GetSocketLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ak_SurfaceEffect_C", "GetTraceParams");

	Params::UAk_SurfaceEffect_C_GetTraceParams_Params Parms{};

	Parms.Mesh = InMesh;
	Parms.TraceStartOffset = InTraceStartOffset;
	Parms.TraceEndOffset = InTraceEndOffset;
	Parms.AttachLocation = InAttachLocation;
	Parms.CallFunc_MakeVector_ReturnValue = InCallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue_1 = InCallFunc_MakeVector_ReturnValue_1;
	Parms.CallFunc_GetOwner_ReturnValue = InCallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetActorForwardVector_ReturnValue = InCallFunc_GetActorForwardVector_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = InCallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = InCallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue_1 = InCallFunc_Add_VectorVector_ReturnValue_1;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue_1 = InCallFunc_Multiply_VectorFloat_ReturnValue_1;
	Parms.CallFunc_Add_VectorVector_ReturnValue_2 = InCallFunc_Add_VectorVector_ReturnValue_2;
	Parms.CallFunc_Add_VectorVector_ReturnValue_3 = InCallFunc_Add_VectorVector_ReturnValue_3;
	Parms.CallFunc_GetSocketLocation_ReturnValue = InCallFunc_GetSocketLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (InStart != nullptr)
		*InStart = Parms.Start;

	if (InEnd != nullptr)
		*InEnd = Parms.End;

}


// Function Ak_SurfaceEffect.Ak_SurfaceEffect_C.SetStoredPhysmat
// (Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UPhysicalMaterial*           PM                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UComp_Actor_Audio_Data_C*    AudioData                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAk_SurfaceEffect_C::SetStoredPhysmat(class UPhysicalMaterial* InPM, class UComp_Actor_Audio_Data_C* InAudioData, bool InCallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ak_SurfaceEffect_C", "SetStoredPhysmat");

	Params::UAk_SurfaceEffect_C_SetStoredPhysmat_Params Parms{};

	Parms.PM = InPM;
	Parms.AudioData = InAudioData;
	Parms.CallFunc_IsValid_ReturnValue = InCallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ak_SurfaceEffect.Ak_SurfaceEffect_C.PlayerTraceForMaterial
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*      Mesh                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           Material                                                         (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Loc                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Location                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           PM                                                               (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorForwardVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_1                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_SelectVector_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_SphereTraceSingle_OutHit                                (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_SphereTraceSingle_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakHitResult_bBlockingHit                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakHitResult_bInitialOverlap                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Time                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Distance                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Normal                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakHitResult_HitActor                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_BoneName                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_ElementIndex                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetTraceParams_Start                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetTraceParams_End                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_2                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              K2Node_MakeArray_Array_1                                         (ConstParm, ReferenceParm)
// struct FHitResult                  CallFunc_LineTraceSingle_OutHit                                  (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_LineTraceSingle_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakHitResult_bBlockingHit_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakHitResult_bInitialOverlap_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Time_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Distance_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Location_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Normal_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat_1                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakHitResult_HitActor_1                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent_1                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_BoneName_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_ElementIndex_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAk_SurfaceEffect_C::PlayerTraceForMaterial(class USkeletalMeshComponent* InMesh, class UPhysicalMaterial** InMaterial, struct FVector* InLoc, const struct FVector& InLocation, class UPhysicalMaterial* InPM, const struct FVector& InCallFunc_GetSocketLocation_ReturnValue, class AActor* InCallFunc_GetOwner_ReturnValue, const struct FVector& InCallFunc_GetActorForwardVector_ReturnValue, const struct FVector& InCallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& InCallFunc_Add_VectorVector_ReturnValue, const struct FVector& InCallFunc_GetSocketLocation_ReturnValue_1, class AActor* InCallFunc_GetOwner_ReturnValue_1, const struct FVector& InCallFunc_Subtract_VectorVector_ReturnValue, TArray<class AActor*>& InK2Node_MakeArray_Array, const struct FVector& InCallFunc_GetSocketLocation_ReturnValue_2, const struct FVector& InCallFunc_SelectVector_ReturnValue, const struct FHitResult& InCallFunc_SphereTraceSingle_OutHit, bool InCallFunc_SphereTraceSingle_ReturnValue, bool InCallFunc_BreakHitResult_bBlockingHit, bool InCallFunc_BreakHitResult_bInitialOverlap, float InCallFunc_BreakHitResult_Time, float InCallFunc_BreakHitResult_Distance, const struct FVector& InCallFunc_BreakHitResult_Location, const struct FVector& InCallFunc_BreakHitResult_ImpactPoint, const struct FVector& InCallFunc_BreakHitResult_Normal, const struct FVector& InCallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* InCallFunc_BreakHitResult_PhysMat, class AActor* InCallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* InCallFunc_BreakHitResult_HitComponent, class FName InCallFunc_BreakHitResult_HitBoneName, class FName InCallFunc_BreakHitResult_BoneName, int32 InCallFunc_BreakHitResult_HitItem, int32 InCallFunc_BreakHitResult_ElementIndex, int32 InCallFunc_BreakHitResult_FaceIndex, const struct FVector& InCallFunc_BreakHitResult_TraceStart, const struct FVector& InCallFunc_BreakHitResult_TraceEnd, const struct FVector& InCallFunc_GetSocketLocation_ReturnValue_3, const struct FVector& InCallFunc_GetTraceParams_Start, const struct FVector& InCallFunc_GetTraceParams_End, class AActor* InCallFunc_GetOwner_ReturnValue_2, TArray<class AActor*>& InK2Node_MakeArray_Array_1, const struct FHitResult& InCallFunc_LineTraceSingle_OutHit, bool InCallFunc_LineTraceSingle_ReturnValue, bool InCallFunc_BreakHitResult_bBlockingHit_1, bool InCallFunc_BreakHitResult_bInitialOverlap_1, float InCallFunc_BreakHitResult_Time_1, float InCallFunc_BreakHitResult_Distance_1, const struct FVector& InCallFunc_BreakHitResult_Location_1, const struct FVector& InCallFunc_BreakHitResult_ImpactPoint_1, const struct FVector& InCallFunc_BreakHitResult_Normal_1, const struct FVector& InCallFunc_BreakHitResult_ImpactNormal_1, class UPhysicalMaterial* InCallFunc_BreakHitResult_PhysMat_1, class AActor* InCallFunc_BreakHitResult_HitActor_1, class UPrimitiveComponent* InCallFunc_BreakHitResult_HitComponent_1, class FName InCallFunc_BreakHitResult_HitBoneName_1, class FName InCallFunc_BreakHitResult_BoneName_1, int32 InCallFunc_BreakHitResult_HitItem_1, int32 InCallFunc_BreakHitResult_ElementIndex_1, int32 InCallFunc_BreakHitResult_FaceIndex_1, const struct FVector& InCallFunc_BreakHitResult_TraceStart_1, const struct FVector& InCallFunc_BreakHitResult_TraceEnd_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ak_SurfaceEffect_C", "PlayerTraceForMaterial");

	Params::UAk_SurfaceEffect_C_PlayerTraceForMaterial_Params Parms{};

	Parms.Mesh = InMesh;
	Parms.Location = InLocation;
	Parms.PM = InPM;
	Parms.CallFunc_GetSocketLocation_ReturnValue = InCallFunc_GetSocketLocation_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = InCallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetActorForwardVector_ReturnValue = InCallFunc_GetActorForwardVector_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = InCallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = InCallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_GetSocketLocation_ReturnValue_1 = InCallFunc_GetSocketLocation_ReturnValue_1;
	Parms.CallFunc_GetOwner_ReturnValue_1 = InCallFunc_GetOwner_ReturnValue_1;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = InCallFunc_Subtract_VectorVector_ReturnValue;
	Parms.K2Node_MakeArray_Array = InK2Node_MakeArray_Array;
	Parms.CallFunc_GetSocketLocation_ReturnValue_2 = InCallFunc_GetSocketLocation_ReturnValue_2;
	Parms.CallFunc_SelectVector_ReturnValue = InCallFunc_SelectVector_ReturnValue;
	Parms.CallFunc_SphereTraceSingle_OutHit = InCallFunc_SphereTraceSingle_OutHit;
	Parms.CallFunc_SphereTraceSingle_ReturnValue = InCallFunc_SphereTraceSingle_ReturnValue;
	Parms.CallFunc_BreakHitResult_bBlockingHit = InCallFunc_BreakHitResult_bBlockingHit;
	Parms.CallFunc_BreakHitResult_bInitialOverlap = InCallFunc_BreakHitResult_bInitialOverlap;
	Parms.CallFunc_BreakHitResult_Time = InCallFunc_BreakHitResult_Time;
	Parms.CallFunc_BreakHitResult_Distance = InCallFunc_BreakHitResult_Distance;
	Parms.CallFunc_BreakHitResult_Location = InCallFunc_BreakHitResult_Location;
	Parms.CallFunc_BreakHitResult_ImpactPoint = InCallFunc_BreakHitResult_ImpactPoint;
	Parms.CallFunc_BreakHitResult_Normal = InCallFunc_BreakHitResult_Normal;
	Parms.CallFunc_BreakHitResult_ImpactNormal = InCallFunc_BreakHitResult_ImpactNormal;
	Parms.CallFunc_BreakHitResult_PhysMat = InCallFunc_BreakHitResult_PhysMat;
	Parms.CallFunc_BreakHitResult_HitActor = InCallFunc_BreakHitResult_HitActor;
	Parms.CallFunc_BreakHitResult_HitComponent = InCallFunc_BreakHitResult_HitComponent;
	Parms.CallFunc_BreakHitResult_HitBoneName = InCallFunc_BreakHitResult_HitBoneName;
	Parms.CallFunc_BreakHitResult_BoneName = InCallFunc_BreakHitResult_BoneName;
	Parms.CallFunc_BreakHitResult_HitItem = InCallFunc_BreakHitResult_HitItem;
	Parms.CallFunc_BreakHitResult_ElementIndex = InCallFunc_BreakHitResult_ElementIndex;
	Parms.CallFunc_BreakHitResult_FaceIndex = InCallFunc_BreakHitResult_FaceIndex;
	Parms.CallFunc_BreakHitResult_TraceStart = InCallFunc_BreakHitResult_TraceStart;
	Parms.CallFunc_BreakHitResult_TraceEnd = InCallFunc_BreakHitResult_TraceEnd;
	Parms.CallFunc_GetSocketLocation_ReturnValue_3 = InCallFunc_GetSocketLocation_ReturnValue_3;
	Parms.CallFunc_GetTraceParams_Start = InCallFunc_GetTraceParams_Start;
	Parms.CallFunc_GetTraceParams_End = InCallFunc_GetTraceParams_End;
	Parms.CallFunc_GetOwner_ReturnValue_2 = InCallFunc_GetOwner_ReturnValue_2;
	Parms.K2Node_MakeArray_Array_1 = InK2Node_MakeArray_Array_1;
	Parms.CallFunc_LineTraceSingle_OutHit = InCallFunc_LineTraceSingle_OutHit;
	Parms.CallFunc_LineTraceSingle_ReturnValue = InCallFunc_LineTraceSingle_ReturnValue;
	Parms.CallFunc_BreakHitResult_bBlockingHit_1 = InCallFunc_BreakHitResult_bBlockingHit_1;
	Parms.CallFunc_BreakHitResult_bInitialOverlap_1 = InCallFunc_BreakHitResult_bInitialOverlap_1;
	Parms.CallFunc_BreakHitResult_Time_1 = InCallFunc_BreakHitResult_Time_1;
	Parms.CallFunc_BreakHitResult_Distance_1 = InCallFunc_BreakHitResult_Distance_1;
	Parms.CallFunc_BreakHitResult_Location_1 = InCallFunc_BreakHitResult_Location_1;
	Parms.CallFunc_BreakHitResult_ImpactPoint_1 = InCallFunc_BreakHitResult_ImpactPoint_1;
	Parms.CallFunc_BreakHitResult_Normal_1 = InCallFunc_BreakHitResult_Normal_1;
	Parms.CallFunc_BreakHitResult_ImpactNormal_1 = InCallFunc_BreakHitResult_ImpactNormal_1;
	Parms.CallFunc_BreakHitResult_PhysMat_1 = InCallFunc_BreakHitResult_PhysMat_1;
	Parms.CallFunc_BreakHitResult_HitActor_1 = InCallFunc_BreakHitResult_HitActor_1;
	Parms.CallFunc_BreakHitResult_HitComponent_1 = InCallFunc_BreakHitResult_HitComponent_1;
	Parms.CallFunc_BreakHitResult_HitBoneName_1 = InCallFunc_BreakHitResult_HitBoneName_1;
	Parms.CallFunc_BreakHitResult_BoneName_1 = InCallFunc_BreakHitResult_BoneName_1;
	Parms.CallFunc_BreakHitResult_HitItem_1 = InCallFunc_BreakHitResult_HitItem_1;
	Parms.CallFunc_BreakHitResult_ElementIndex_1 = InCallFunc_BreakHitResult_ElementIndex_1;
	Parms.CallFunc_BreakHitResult_FaceIndex_1 = InCallFunc_BreakHitResult_FaceIndex_1;
	Parms.CallFunc_BreakHitResult_TraceStart_1 = InCallFunc_BreakHitResult_TraceStart_1;
	Parms.CallFunc_BreakHitResult_TraceEnd_1 = InCallFunc_BreakHitResult_TraceEnd_1;

	UObject::ProcessEvent(Func, &Parms);

	if (InMaterial != nullptr)
		*InMaterial = Parms.Material;

	if (InLoc != nullptr)
		*InLoc = Parms.Loc;

}


// Function Ak_SurfaceEffect.Ak_SurfaceEffect_C.GetDataTable
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  DataTable                                                        (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UComp_CreatureAudio_C*       CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  CallFunc_FindInCreatureSurfaceMap_Value                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_FindInCreatureSurfaceMap_Found                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAk_SurfaceEffect_C::GetDataTable(class AActor* InActor, class UDataTable** InDataTable, bool InCallFunc_NotEqual_NameName_ReturnValue, class UComp_CreatureAudio_C* InCallFunc_GetComponentByClass_ReturnValue, class UDataTable* InCallFunc_FindInCreatureSurfaceMap_Value, bool InCallFunc_FindInCreatureSurfaceMap_Found, bool InCallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ak_SurfaceEffect_C", "GetDataTable");

	Params::UAk_SurfaceEffect_C_GetDataTable_Params Parms{};

	Parms.Actor = InActor;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = InCallFunc_NotEqual_NameName_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = InCallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_FindInCreatureSurfaceMap_Value = InCallFunc_FindInCreatureSurfaceMap_Value;
	Parms.CallFunc_FindInCreatureSurfaceMap_Found = InCallFunc_FindInCreatureSurfaceMap_Found;
	Parms.CallFunc_IsValid_ReturnValue = InCallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (InDataTable != nullptr)
		*InDataTable = Parms.DataTable;

}


// Function Ak_SurfaceEffect.Ak_SurfaceEffect_C.SetLastPhysmat
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UComp_Actor_Audio_Data_C*    AudioData                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           PmIn                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           PmOut                                                            (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           PMLocal                                                          (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAk_SurfaceEffect_C::SetLastPhysmat(class UComp_Actor_Audio_Data_C* InAudioData, class UPhysicalMaterial* InPmIn, class UPhysicalMaterial** InPmOut, class UPhysicalMaterial* InPMLocal, bool InCallFunc_NotEqual_ObjectObject_ReturnValue, bool InCallFunc_IsValid_ReturnValue, bool InCallFunc_IsValid_ReturnValue_1, bool InCallFunc_IsValid_ReturnValue_2, bool InCallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ak_SurfaceEffect_C", "SetLastPhysmat");

	Params::UAk_SurfaceEffect_C_SetLastPhysmat_Params Parms{};

	Parms.AudioData = InAudioData;
	Parms.PmIn = InPmIn;
	Parms.PMLocal = InPMLocal;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = InCallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = InCallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = InCallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = InCallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue = InCallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (InPmOut != nullptr)
		*InPmOut = Parms.PmOut;

}


// Function Ak_SurfaceEffect.Ak_SurfaceEffect_C.CheckForWater
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*      Mesh                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValeriaMoveablePawn*        K2Node_DynamicCast_AsValeria_Moveable_Pawn                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              Temp_object_Variable                                             (ConstParm, ReferenceParm)
// TArray<class AActor*>              Temp_object_Variable_1                                           (ConstParm, ReferenceParm)
// TArray<class AActor*>              Temp_object_Variable_2                                           (ConstParm, ReferenceParm)
// TArray<enum class EObjectTypeQuery>K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm)
// TArray<class AActor*>              CallFunc_CapsuleOverlapActors_OutActors                          (ReferenceParm)
// bool                               CallFunc_CapsuleOverlapActors_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              CallFunc_CapsuleOverlapActors_OutActors_1                        (ReferenceParm)
// bool                               CallFunc_CapsuleOverlapActors_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AStaticMeshActor*            K2Node_DynamicCast_AsStatic_Mesh_Actor                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              CallFunc_CapsuleOverlapActors_OutActors_2                        (ReferenceParm)
// bool                               CallFunc_CapsuleOverlapActors_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UAk_SurfaceEffect_C::CheckForWater(class USkeletalMeshComponent* InMesh, class AActor* InCallFunc_GetOwner_ReturnValue, int32 InTemp_int_Array_Index_Variable, class AValeriaMoveablePawn* InK2Node_DynamicCast_AsValeria_Moveable_Pawn, bool InK2Node_DynamicCast_bSuccess, int32 InTemp_int_Loop_Counter_Variable, const struct FVector& InCallFunc_K2_GetComponentLocation_ReturnValue, int32 InCallFunc_Add_IntInt_ReturnValue, TArray<class AActor*>& InTemp_object_Variable, TArray<class AActor*>& InTemp_object_Variable_1, TArray<class AActor*>& InTemp_object_Variable_2, TArray<enum class EObjectTypeQuery>& InK2Node_MakeArray_Array, TArray<class AActor*>& InCallFunc_CapsuleOverlapActors_OutActors, bool InCallFunc_CapsuleOverlapActors_ReturnValue, TArray<class AActor*>& InCallFunc_CapsuleOverlapActors_OutActors_1, bool InCallFunc_CapsuleOverlapActors_ReturnValue_1, class AActor* InCallFunc_Array_Get_Item, int32 InCallFunc_Array_Length_ReturnValue, class AStaticMeshActor* InK2Node_DynamicCast_AsStatic_Mesh_Actor, bool InK2Node_DynamicCast_bSuccess_1, bool InCallFunc_Less_IntInt_ReturnValue, bool InCallFunc_EqualEqual_ObjectObject_ReturnValue, TArray<class AActor*>& InCallFunc_CapsuleOverlapActors_OutActors_2, bool InCallFunc_CapsuleOverlapActors_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ak_SurfaceEffect_C", "CheckForWater");

	Params::UAk_SurfaceEffect_C_CheckForWater_Params Parms{};

	Parms.Mesh = InMesh;
	Parms.CallFunc_GetOwner_ReturnValue = InCallFunc_GetOwner_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = InTemp_int_Array_Index_Variable;
	Parms.K2Node_DynamicCast_AsValeria_Moveable_Pawn = InK2Node_DynamicCast_AsValeria_Moveable_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = InK2Node_DynamicCast_bSuccess;
	Parms.Temp_int_Loop_Counter_Variable = InTemp_int_Loop_Counter_Variable;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = InCallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = InCallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_object_Variable = InTemp_object_Variable;
	Parms.Temp_object_Variable_1 = InTemp_object_Variable_1;
	Parms.Temp_object_Variable_2 = InTemp_object_Variable_2;
	Parms.K2Node_MakeArray_Array = InK2Node_MakeArray_Array;
	Parms.CallFunc_CapsuleOverlapActors_OutActors = InCallFunc_CapsuleOverlapActors_OutActors;
	Parms.CallFunc_CapsuleOverlapActors_ReturnValue = InCallFunc_CapsuleOverlapActors_ReturnValue;
	Parms.CallFunc_CapsuleOverlapActors_OutActors_1 = InCallFunc_CapsuleOverlapActors_OutActors_1;
	Parms.CallFunc_CapsuleOverlapActors_ReturnValue_1 = InCallFunc_CapsuleOverlapActors_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item = InCallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = InCallFunc_Array_Length_ReturnValue;
	Parms.K2Node_DynamicCast_AsStatic_Mesh_Actor = InK2Node_DynamicCast_AsStatic_Mesh_Actor;
	Parms.K2Node_DynamicCast_bSuccess_1 = InK2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = InCallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = InCallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_CapsuleOverlapActors_OutActors_2 = InCallFunc_CapsuleOverlapActors_OutActors_2;
	Parms.CallFunc_CapsuleOverlapActors_ReturnValue_2 = InCallFunc_CapsuleOverlapActors_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Ak_SurfaceEffect.Ak_SurfaceEffect_C.GetMaxSpeed
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UActorComponent*             Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// double                             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMovementComponent*          CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class ACreatureCharacter*          K2Node_DynamicCast_AsCreature_Character                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UValeriaCharacterMoveComponent*K2Node_DynamicCast_AsValeria_Character_Move_Component            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_CalculateMaxSpeed_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetMaxSpeedAbs_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetMaxSpeed_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_FunctionResult_ReturnValue_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_FunctionResult_ReturnValue_ImplicitCast_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

double UAk_SurfaceEffect_C::GetMaxSpeed(class UActorComponent* InTarget, class AActor* InCallFunc_GetOwner_ReturnValue, class UMovementComponent* InCallFunc_GetComponentByClass_ReturnValue, class ACreatureCharacter* InK2Node_DynamicCast_AsCreature_Character, bool InK2Node_DynamicCast_bSuccess, class UValeriaCharacterMoveComponent* InK2Node_DynamicCast_AsValeria_Character_Move_Component, bool InK2Node_DynamicCast_bSuccess_1, float InCallFunc_CalculateMaxSpeed_ReturnValue, float InCallFunc_GetMaxSpeedAbs_ReturnValue, float InCallFunc_GetMaxSpeed_ReturnValue, bool InCallFunc_IsValid_ReturnValue, double InCallFunc_Multiply_DoubleDouble_ReturnValue, double InK2Node_FunctionResult_ReturnValue_ImplicitCast, double InK2Node_FunctionResult_ReturnValue_ImplicitCast_1, double InCallFunc_Multiply_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ak_SurfaceEffect_C", "GetMaxSpeed");

	Params::UAk_SurfaceEffect_C_GetMaxSpeed_Params Parms{};

	Parms.Target = InTarget;
	Parms.CallFunc_GetOwner_ReturnValue = InCallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = InCallFunc_GetComponentByClass_ReturnValue;
	Parms.K2Node_DynamicCast_AsCreature_Character = InK2Node_DynamicCast_AsCreature_Character;
	Parms.K2Node_DynamicCast_bSuccess = InK2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsValeria_Character_Move_Component = InK2Node_DynamicCast_AsValeria_Character_Move_Component;
	Parms.K2Node_DynamicCast_bSuccess_1 = InK2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_CalculateMaxSpeed_ReturnValue = InCallFunc_CalculateMaxSpeed_ReturnValue;
	Parms.CallFunc_GetMaxSpeedAbs_ReturnValue = InCallFunc_GetMaxSpeedAbs_ReturnValue;
	Parms.CallFunc_GetMaxSpeed_ReturnValue = InCallFunc_GetMaxSpeed_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = InCallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = InCallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.K2Node_FunctionResult_ReturnValue_ImplicitCast = InK2Node_FunctionResult_ReturnValue_ImplicitCast;
	Parms.K2Node_FunctionResult_ReturnValue_ImplicitCast_1 = InK2Node_FunctionResult_ReturnValue_ImplicitCast_1;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast = InCallFunc_Multiply_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Ak_SurfaceEffect.Ak_SurfaceEffect_C.SetPhysmatData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UDataTable*                  DataTable                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     PhysMat                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAkAudioEvent*               Sound                                                            (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstance*           Decal_Left_Foot                                                  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstance*           Decal_Right_Foot                                                 (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UNiagaraSystem*              NiagaraSystem                                                    (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EPhysicalSurface        DefaultPhysmatEditorAudition                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        RowNamePhysmat                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPhysicalSurface        DefaultPhysmatInGame                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_RightChop_ReturnValue                                   (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_Physmat             CallFunc_GetDataTableRowFromName_OutRow                          (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAk_SurfaceEffect_C::SetPhysmatData(class UDataTable* InDataTable, class UObject* InPhysMat, class UAkAudioEvent** InSound, class UMaterialInstance** InDecal_Left_Foot, class UMaterialInstance** InDecal_Right_Foot, class UNiagaraSystem** InNiagaraSystem, enum class EPhysicalSurface InDefaultPhysmatEditorAudition, class FName InRowNamePhysmat, enum class EPhysicalSurface InDefaultPhysmatInGame, const class FString& InCallFunc_GetDisplayName_ReturnValue, const class FString& InCallFunc_GetEnumeratorUserFriendlyName_ReturnValue, bool InCallFunc_EqualEqual_StrStr_ReturnValue, class FName InCallFunc_Conv_StringToName_ReturnValue, const class FString& InCallFunc_RightChop_ReturnValue, class FName InCallFunc_Conv_StringToName_ReturnValue_1, const class FString& InCallFunc_Conv_NameToString_ReturnValue, const class FString& InCallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1, bool InCallFunc_EqualEqual_ByteByte_ReturnValue, class FName InCallFunc_Conv_StringToName_ReturnValue_2, class UGameInstance* InCallFunc_GetGameInstance_ReturnValue, bool InCallFunc_IsValid_ReturnValue, const struct FStruct_Physmat& InCallFunc_GetDataTableRowFromName_OutRow, bool InCallFunc_GetDataTableRowFromName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ak_SurfaceEffect_C", "SetPhysmatData");

	Params::UAk_SurfaceEffect_C_SetPhysmatData_Params Parms{};

	Parms.DataTable = InDataTable;
	Parms.PhysMat = InPhysMat;
	Parms.DefaultPhysmatEditorAudition = InDefaultPhysmatEditorAudition;
	Parms.RowNamePhysmat = InRowNamePhysmat;
	Parms.DefaultPhysmatInGame = InDefaultPhysmatInGame;
	Parms.CallFunc_GetDisplayName_ReturnValue = InCallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = InCallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = InCallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = InCallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_RightChop_ReturnValue = InCallFunc_RightChop_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue_1 = InCallFunc_Conv_StringToName_ReturnValue_1;
	Parms.CallFunc_Conv_NameToString_ReturnValue = InCallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1 = InCallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = InCallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue_2 = InCallFunc_Conv_StringToName_ReturnValue_2;
	Parms.CallFunc_GetGameInstance_ReturnValue = InCallFunc_GetGameInstance_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = InCallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = InCallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = InCallFunc_GetDataTableRowFromName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (InSound != nullptr)
		*InSound = Parms.Sound;

	if (InDecal_Left_Foot != nullptr)
		*InDecal_Left_Foot = Parms.Decal_Left_Foot;

	if (InDecal_Right_Foot != nullptr)
		*InDecal_Right_Foot = Parms.Decal_Right_Foot;

	if (InNiagaraSystem != nullptr)
		*InNiagaraSystem = Parms.NiagaraSystem;

}


// Function Ak_SurfaceEffect.Ak_SurfaceEffect_C.Received_Notify
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class USkeletalMeshComponent*      MeshComp                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UAnimSequenceBase*           Animation                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FAnimNotifyEventReference   EventReference                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraSystem*              NiagaraSystem                                                    (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               WaterOverride                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             MinSpeed                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UComp_Actor_Audio_Data_C*    CompActorAudio                                                   (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FVector                     SoundOffset                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Speed                                                            (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             MaxSpeed                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstance*           DecalMatRight                                                    (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstance*           DecalMatLeft                                                     (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        RowNamePhysmat                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDecalComponent*             DecalComp                                                        (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// double                             DecalFadeOutDuration                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             DecalFadeOutStartDelay                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             DecalFadeInDuration                                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             DecalFadeInStartDelay                                            (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     DecalOffset                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             DecalRandomRotationMax                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             DecalRandomSizeMax                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             DecalSize                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstance*           DecalMat                                                         (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAkComponent*                SpawnedAkComponent                                               (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UAkAudioEvent*               Sound                                                            (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UValeriaCharacterMoveComponent*CharacterMovementComponent                                       (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FVector                     SocketLocation                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           PM                                                               (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      Mesh                                                             (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetRightVector_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_Conv_VectorToRotator_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_ComposeRotators_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_SpawnSystemAtLocation_ReturnValue                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_PlayerTraceForMaterial_Material                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_PlayerTraceForMaterial_Loc                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetTraceParams_Start                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetTraceParams_End                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_1                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// class APawn*                       K2Node_DynamicCast_AsPawn                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocallyControlled_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_2                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm)
// struct FHitResult                  CallFunc_LineTraceSingle_OutHit                                  (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_LineTraceSingle_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakHitResult_bBlockingHit                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakHitResult_bInitialOverlap                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Time                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Distance                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Normal                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakHitResult_HitActor                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_BoneName                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_ElementIndex                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_3                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  CallFunc_GetDataTable_DataTable                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckForWater_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkAudioEvent*               CallFunc_Surface_DT_Sound                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstance*           CallFunc_Surface_DT_Decal_Left_Foot                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstance*           CallFunc_Surface_DT_Decal_Right_Foot                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UNiagaraSystem*              CallFunc_Surface_DT_NiagaraSystem                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetMaxSpeed_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_4                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetAutoDestroy_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsWithinAttenuation_Within                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_5                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Try_to_Propagate_Rtpcs_Success                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMovementComponent*          CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_PostEventAtLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_VSize_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_6                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             CallFunc_K2_GetRootComponent_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetUpVector_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotFromXZ_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakRotator_Roll                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue_7                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AValeriaCharacter*           K2Node_DynamicCast_AsValeria_Character                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocallyControlled_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 Temp_delegate_Variable                                           (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_8                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UComp_Actor_Audio_Data_C*    CallFunc_GetComponentByClass_ReturnValue_1                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue_1                            (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FAkExternalSourceInfo>Temp_struct_Variable                                             (ConstParm, ReferenceParm)
// int32                              CallFunc_PostAkEvent_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_8                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Contains_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Contains_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_9                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDecalComponent*             CallFunc_SpawnDecalAtLocation_ReturnValue                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_SpawnSystemAttached_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_10                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkComponent*                CallFunc_AkSpawnAtLocation_ReturnValue                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_11                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetRTPCValue_Value_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_A_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_A_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MakeRotator_Yaw_ImplicitCast                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MakeRotator_Pitch_ImplicitCast                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetRTPCValue_Value_ImplicitCast_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetFadeOut_Duration_ImplicitCast                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetFadeOut_StartDelay_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetFadeIn_Duaration_ImplicitCast                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetFadeIn_StartDelay_ImplicitCast                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UAk_SurfaceEffect_C::Received_Notify(class USkeletalMeshComponent* InMeshComp, class UAnimSequenceBase* InAnimation, struct FAnimNotifyEventReference& InEventReference, class UNiagaraSystem* InNiagaraSystem, bool InWaterOverride, double InMinSpeed, class UComp_Actor_Audio_Data_C* InCompActorAudio, const struct FVector& InSoundOffset, double InSpeed, double InMaxSpeed, class UMaterialInstance* InDecalMatRight, class UMaterialInstance* InDecalMatLeft, class FName InRowNamePhysmat, class UDecalComponent* InDecalComp, double InDecalFadeOutDuration, double InDecalFadeOutStartDelay, double InDecalFadeInDuration, double InDecalFadeInStartDelay, const struct FVector& InDecalOffset, double InDecalRandomRotationMax, double InDecalRandomSizeMax, double InDecalSize, class UMaterialInstance* InDecalMat, class UAkComponent* InSpawnedAkComponent, class UAkAudioEvent* InSound, class UValeriaCharacterMoveComponent* InCharacterMovementComponent, const struct FVector& InSocketLocation, class UPhysicalMaterial* InPM, class USkeletalMeshComponent* InMesh, const struct FVector& InCallFunc_GetSocketLocation_ReturnValue, const struct FVector& InCallFunc_Add_VectorVector_ReturnValue, const struct FVector& InCallFunc_GetRightVector_ReturnValue, const struct FRotator& InCallFunc_Conv_VectorToRotator_ReturnValue, const struct FRotator& InCallFunc_ComposeRotators_ReturnValue, int32 InCallFunc_Conv_ByteToInt_ReturnValue, class UNiagaraComponent* InCallFunc_SpawnSystemAtLocation_ReturnValue, bool InCallFunc_IsValid_ReturnValue, bool InCallFunc_IsValid_ReturnValue_1, class AActor* InCallFunc_GetOwner_ReturnValue, int32 InCallFunc_Conv_ByteToInt_ReturnValue_1, class UPhysicalMaterial* InCallFunc_PlayerTraceForMaterial_Material, const struct FVector& InCallFunc_PlayerTraceForMaterial_Loc, bool InCallFunc_IsValid_ReturnValue_2, const struct FVector& InCallFunc_GetTraceParams_Start, const struct FVector& InCallFunc_GetTraceParams_End, class AActor* InCallFunc_GetOwner_ReturnValue_1, const class FString& InCallFunc_GetDisplayName_ReturnValue, class APawn* InK2Node_DynamicCast_AsPawn, bool InK2Node_DynamicCast_bSuccess, bool InCallFunc_IsLocallyControlled_ReturnValue, const struct FVector& InCallFunc_GetSocketLocation_ReturnValue_1, class AActor* InCallFunc_GetOwner_ReturnValue_2, TArray<class AActor*>& InK2Node_MakeArray_Array, const struct FHitResult& InCallFunc_LineTraceSingle_OutHit, bool InCallFunc_LineTraceSingle_ReturnValue, bool InCallFunc_IsValid_ReturnValue_3, bool InCallFunc_BreakHitResult_bBlockingHit, bool InCallFunc_BreakHitResult_bInitialOverlap, float InCallFunc_BreakHitResult_Time, float InCallFunc_BreakHitResult_Distance, const struct FVector& InCallFunc_BreakHitResult_Location, const struct FVector& InCallFunc_BreakHitResult_ImpactPoint, const struct FVector& InCallFunc_BreakHitResult_Normal, const struct FVector& InCallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* InCallFunc_BreakHitResult_PhysMat, class AActor* InCallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* InCallFunc_BreakHitResult_HitComponent, class FName InCallFunc_BreakHitResult_HitBoneName, class FName InCallFunc_BreakHitResult_BoneName, int32 InCallFunc_BreakHitResult_HitItem, int32 InCallFunc_BreakHitResult_ElementIndex, int32 InCallFunc_BreakHitResult_FaceIndex, const struct FVector& InCallFunc_BreakHitResult_TraceStart, const struct FVector& InCallFunc_BreakHitResult_TraceEnd, class AActor* InCallFunc_GetOwner_ReturnValue_3, class UDataTable* InCallFunc_GetDataTable_DataTable, bool InCallFunc_CheckForWater_ReturnValue, class UAkAudioEvent* InCallFunc_Surface_DT_Sound, class UMaterialInstance* InCallFunc_Surface_DT_Decal_Left_Foot, class UMaterialInstance* InCallFunc_Surface_DT_Decal_Right_Foot, class UNiagaraSystem* InCallFunc_Surface_DT_NiagaraSystem, double InCallFunc_GetMaxSpeed_ReturnValue, class AActor* InCallFunc_GetOwner_ReturnValue_4, bool InCallFunc_GetAutoDestroy_ReturnValue, const struct FVector& InCallFunc_K2_GetComponentLocation_ReturnValue, bool InCallFunc_IsWithinAttenuation_Within, const struct FVector& InCallFunc_K2_GetComponentLocation_ReturnValue_1, bool InCallFunc_IsValid_ReturnValue_4, class AActor* InCallFunc_GetOwner_ReturnValue_5, bool InCallFunc_Try_to_Propagate_Rtpcs_Success, class UMovementComponent* InCallFunc_GetComponentByClass_ReturnValue, bool InCallFunc_IsValid_ReturnValue_5, int32 InCallFunc_PostEventAtLocation_ReturnValue, class UGameInstance* InCallFunc_GetGameInstance_ReturnValue, double InCallFunc_BreakVector_X, double InCallFunc_BreakVector_Y, double InCallFunc_BreakVector_Z, bool InCallFunc_IsValid_ReturnValue_6, const struct FVector& InCallFunc_MakeVector_ReturnValue, double InCallFunc_VSize_ReturnValue, class AActor* InCallFunc_GetOwner_ReturnValue_6, class USceneComponent* InCallFunc_K2_GetRootComponent_ReturnValue, double InCallFunc_RandomFloatInRange_ReturnValue, const struct FVector& InCallFunc_GetForwardVector_ReturnValue, const struct FVector& InCallFunc_GetUpVector_ReturnValue, const struct FRotator& InCallFunc_MakeRotFromXZ_ReturnValue, float InCallFunc_BreakRotator_Roll, float InCallFunc_BreakRotator_Pitch, float InCallFunc_BreakRotator_Yaw, double InCallFunc_Add_DoubleDouble_ReturnValue, double InCallFunc_Add_DoubleDouble_ReturnValue_1, double InCallFunc_Subtract_DoubleDouble_ReturnValue, const struct FRotator& InCallFunc_MakeRotator_ReturnValue, class AActor* InCallFunc_GetOwner_ReturnValue_7, class AValeriaCharacter* InK2Node_DynamicCast_AsValeria_Character, bool InK2Node_DynamicCast_bSuccess_1, bool InCallFunc_IsLocallyControlled_ReturnValue_1, FDelegateProperty_ InTemp_delegate_Variable, class AActor* InCallFunc_GetOwner_ReturnValue_8, class UComp_Actor_Audio_Data_C* InCallFunc_GetComponentByClass_ReturnValue_1, const class FString& InCallFunc_GetDisplayName_ReturnValue_1, bool InCallFunc_IsValid_ReturnValue_7, const class FString& InCallFunc_Concat_StrStr_ReturnValue, const class FString& InCallFunc_Concat_StrStr_ReturnValue_1, const class FString& InCallFunc_Concat_StrStr_ReturnValue_2, const class FString& InCallFunc_Concat_StrStr_ReturnValue_3, bool InCallFunc_IsDedicatedServer_ReturnValue, TArray<struct FAkExternalSourceInfo>& InTemp_struct_Variable, int32 InCallFunc_PostAkEvent_ReturnValue, double InCallFunc_MapRangeClamped_ReturnValue, double InCallFunc_RandomFloatInRange_ReturnValue_1, double InCallFunc_Add_DoubleDouble_ReturnValue_2, bool InCallFunc_IsValid_ReturnValue_8, const class FString& InCallFunc_Conv_NameToString_ReturnValue, bool InCallFunc_Contains_ReturnValue, const class FString& InCallFunc_Conv_NameToString_ReturnValue_1, bool InCallFunc_Contains_ReturnValue_1, bool InCallFunc_BooleanOR_ReturnValue, double InCallFunc_Divide_DoubleDouble_ReturnValue, const struct FVector& InCallFunc_MakeVector_ReturnValue_1, bool InCallFunc_IsValid_ReturnValue_9, const struct FVector& InCallFunc_Add_VectorVector_ReturnValue_1, class UDecalComponent* InCallFunc_SpawnDecalAtLocation_ReturnValue, class UNiagaraComponent* InCallFunc_SpawnSystemAttached_ReturnValue, const struct FVector& InCallFunc_Add_VectorVector_ReturnValue_2, bool InCallFunc_IsValid_ReturnValue_10, class UAkComponent* InCallFunc_AkSpawnAtLocation_ReturnValue, bool InCallFunc_IsValid_ReturnValue_11, float InCallFunc_SetRTPCValue_Value_ImplicitCast, double InCallFunc_Subtract_DoubleDouble_A_ImplicitCast, double InCallFunc_Add_DoubleDouble_A_ImplicitCast, float InCallFunc_MakeRotator_Yaw_ImplicitCast, float InCallFunc_MakeRotator_Pitch_ImplicitCast, float InCallFunc_SetRTPCValue_Value_ImplicitCast_1, float InCallFunc_SetFadeOut_Duration_ImplicitCast, float InCallFunc_SetFadeOut_StartDelay_ImplicitCast, float InCallFunc_SetFadeIn_Duaration_ImplicitCast, float InCallFunc_SetFadeIn_StartDelay_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ak_SurfaceEffect_C", "Received_Notify");

	Params::UAk_SurfaceEffect_C_Received_Notify_Params Parms{};

	Parms.MeshComp = InMeshComp;
	Parms.Animation = InAnimation;
	Parms.EventReference = InEventReference;
	Parms.NiagaraSystem = InNiagaraSystem;
	Parms.WaterOverride = InWaterOverride;
	Parms.MinSpeed = InMinSpeed;
	Parms.CompActorAudio = InCompActorAudio;
	Parms.SoundOffset = InSoundOffset;
	Parms.Speed = InSpeed;
	Parms.MaxSpeed = InMaxSpeed;
	Parms.DecalMatRight = InDecalMatRight;
	Parms.DecalMatLeft = InDecalMatLeft;
	Parms.RowNamePhysmat = InRowNamePhysmat;
	Parms.DecalComp = InDecalComp;
	Parms.DecalFadeOutDuration = InDecalFadeOutDuration;
	Parms.DecalFadeOutStartDelay = InDecalFadeOutStartDelay;
	Parms.DecalFadeInDuration = InDecalFadeInDuration;
	Parms.DecalFadeInStartDelay = InDecalFadeInStartDelay;
	Parms.DecalOffset = InDecalOffset;
	Parms.DecalRandomRotationMax = InDecalRandomRotationMax;
	Parms.DecalRandomSizeMax = InDecalRandomSizeMax;
	Parms.DecalSize = InDecalSize;
	Parms.DecalMat = InDecalMat;
	Parms.SpawnedAkComponent = InSpawnedAkComponent;
	Parms.Sound = InSound;
	Parms.CharacterMovementComponent = InCharacterMovementComponent;
	Parms.SocketLocation = InSocketLocation;
	Parms.PM = InPM;
	Parms.Mesh = InMesh;
	Parms.CallFunc_GetSocketLocation_ReturnValue = InCallFunc_GetSocketLocation_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = InCallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_GetRightVector_ReturnValue = InCallFunc_GetRightVector_ReturnValue;
	Parms.CallFunc_Conv_VectorToRotator_ReturnValue = InCallFunc_Conv_VectorToRotator_ReturnValue;
	Parms.CallFunc_ComposeRotators_ReturnValue = InCallFunc_ComposeRotators_ReturnValue;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = InCallFunc_Conv_ByteToInt_ReturnValue;
	Parms.CallFunc_SpawnSystemAtLocation_ReturnValue = InCallFunc_SpawnSystemAtLocation_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = InCallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = InCallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetOwner_ReturnValue = InCallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue_1 = InCallFunc_Conv_ByteToInt_ReturnValue_1;
	Parms.CallFunc_PlayerTraceForMaterial_Material = InCallFunc_PlayerTraceForMaterial_Material;
	Parms.CallFunc_PlayerTraceForMaterial_Loc = InCallFunc_PlayerTraceForMaterial_Loc;
	Parms.CallFunc_IsValid_ReturnValue_2 = InCallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetTraceParams_Start = InCallFunc_GetTraceParams_Start;
	Parms.CallFunc_GetTraceParams_End = InCallFunc_GetTraceParams_End;
	Parms.CallFunc_GetOwner_ReturnValue_1 = InCallFunc_GetOwner_ReturnValue_1;
	Parms.CallFunc_GetDisplayName_ReturnValue = InCallFunc_GetDisplayName_ReturnValue;
	Parms.K2Node_DynamicCast_AsPawn = InK2Node_DynamicCast_AsPawn;
	Parms.K2Node_DynamicCast_bSuccess = InK2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsLocallyControlled_ReturnValue = InCallFunc_IsLocallyControlled_ReturnValue;
	Parms.CallFunc_GetSocketLocation_ReturnValue_1 = InCallFunc_GetSocketLocation_ReturnValue_1;
	Parms.CallFunc_GetOwner_ReturnValue_2 = InCallFunc_GetOwner_ReturnValue_2;
	Parms.K2Node_MakeArray_Array = InK2Node_MakeArray_Array;
	Parms.CallFunc_LineTraceSingle_OutHit = InCallFunc_LineTraceSingle_OutHit;
	Parms.CallFunc_LineTraceSingle_ReturnValue = InCallFunc_LineTraceSingle_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_3 = InCallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_BreakHitResult_bBlockingHit = InCallFunc_BreakHitResult_bBlockingHit;
	Parms.CallFunc_BreakHitResult_bInitialOverlap = InCallFunc_BreakHitResult_bInitialOverlap;
	Parms.CallFunc_BreakHitResult_Time = InCallFunc_BreakHitResult_Time;
	Parms.CallFunc_BreakHitResult_Distance = InCallFunc_BreakHitResult_Distance;
	Parms.CallFunc_BreakHitResult_Location = InCallFunc_BreakHitResult_Location;
	Parms.CallFunc_BreakHitResult_ImpactPoint = InCallFunc_BreakHitResult_ImpactPoint;
	Parms.CallFunc_BreakHitResult_Normal = InCallFunc_BreakHitResult_Normal;
	Parms.CallFunc_BreakHitResult_ImpactNormal = InCallFunc_BreakHitResult_ImpactNormal;
	Parms.CallFunc_BreakHitResult_PhysMat = InCallFunc_BreakHitResult_PhysMat;
	Parms.CallFunc_BreakHitResult_HitActor = InCallFunc_BreakHitResult_HitActor;
	Parms.CallFunc_BreakHitResult_HitComponent = InCallFunc_BreakHitResult_HitComponent;
	Parms.CallFunc_BreakHitResult_HitBoneName = InCallFunc_BreakHitResult_HitBoneName;
	Parms.CallFunc_BreakHitResult_BoneName = InCallFunc_BreakHitResult_BoneName;
	Parms.CallFunc_BreakHitResult_HitItem = InCallFunc_BreakHitResult_HitItem;
	Parms.CallFunc_BreakHitResult_ElementIndex = InCallFunc_BreakHitResult_ElementIndex;
	Parms.CallFunc_BreakHitResult_FaceIndex = InCallFunc_BreakHitResult_FaceIndex;
	Parms.CallFunc_BreakHitResult_TraceStart = InCallFunc_BreakHitResult_TraceStart;
	Parms.CallFunc_BreakHitResult_TraceEnd = InCallFunc_BreakHitResult_TraceEnd;
	Parms.CallFunc_GetOwner_ReturnValue_3 = InCallFunc_GetOwner_ReturnValue_3;
	Parms.CallFunc_GetDataTable_DataTable = InCallFunc_GetDataTable_DataTable;
	Parms.CallFunc_CheckForWater_ReturnValue = InCallFunc_CheckForWater_ReturnValue;
	Parms.CallFunc_Surface_DT_Sound = InCallFunc_Surface_DT_Sound;
	Parms.CallFunc_Surface_DT_Decal_Left_Foot = InCallFunc_Surface_DT_Decal_Left_Foot;
	Parms.CallFunc_Surface_DT_Decal_Right_Foot = InCallFunc_Surface_DT_Decal_Right_Foot;
	Parms.CallFunc_Surface_DT_NiagaraSystem = InCallFunc_Surface_DT_NiagaraSystem;
	Parms.CallFunc_GetMaxSpeed_ReturnValue = InCallFunc_GetMaxSpeed_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue_4 = InCallFunc_GetOwner_ReturnValue_4;
	Parms.CallFunc_GetAutoDestroy_ReturnValue = InCallFunc_GetAutoDestroy_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = InCallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_IsWithinAttenuation_Within = InCallFunc_IsWithinAttenuation_Within;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue_1 = InCallFunc_K2_GetComponentLocation_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_4 = InCallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_GetOwner_ReturnValue_5 = InCallFunc_GetOwner_ReturnValue_5;
	Parms.CallFunc_Try_to_Propagate_Rtpcs_Success = InCallFunc_Try_to_Propagate_Rtpcs_Success;
	Parms.CallFunc_GetComponentByClass_ReturnValue = InCallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_5 = InCallFunc_IsValid_ReturnValue_5;
	Parms.CallFunc_PostEventAtLocation_ReturnValue = InCallFunc_PostEventAtLocation_ReturnValue;
	Parms.CallFunc_GetGameInstance_ReturnValue = InCallFunc_GetGameInstance_ReturnValue;
	Parms.CallFunc_BreakVector_X = InCallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = InCallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = InCallFunc_BreakVector_Z;
	Parms.CallFunc_IsValid_ReturnValue_6 = InCallFunc_IsValid_ReturnValue_6;
	Parms.CallFunc_MakeVector_ReturnValue = InCallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_VSize_ReturnValue = InCallFunc_VSize_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue_6 = InCallFunc_GetOwner_ReturnValue_6;
	Parms.CallFunc_K2_GetRootComponent_ReturnValue = InCallFunc_K2_GetRootComponent_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = InCallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_GetForwardVector_ReturnValue = InCallFunc_GetForwardVector_ReturnValue;
	Parms.CallFunc_GetUpVector_ReturnValue = InCallFunc_GetUpVector_ReturnValue;
	Parms.CallFunc_MakeRotFromXZ_ReturnValue = InCallFunc_MakeRotFromXZ_ReturnValue;
	Parms.CallFunc_BreakRotator_Roll = InCallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = InCallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = InCallFunc_BreakRotator_Yaw;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = InCallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue_1 = InCallFunc_Add_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = InCallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_MakeRotator_ReturnValue = InCallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue_7 = InCallFunc_GetOwner_ReturnValue_7;
	Parms.K2Node_DynamicCast_AsValeria_Character = InK2Node_DynamicCast_AsValeria_Character;
	Parms.K2Node_DynamicCast_bSuccess_1 = InK2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsLocallyControlled_ReturnValue_1 = InCallFunc_IsLocallyControlled_ReturnValue_1;
	Parms.Temp_delegate_Variable = InTemp_delegate_Variable;
	Parms.CallFunc_GetOwner_ReturnValue_8 = InCallFunc_GetOwner_ReturnValue_8;
	Parms.CallFunc_GetComponentByClass_ReturnValue_1 = InCallFunc_GetComponentByClass_ReturnValue_1;
	Parms.CallFunc_GetDisplayName_ReturnValue_1 = InCallFunc_GetDisplayName_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_7 = InCallFunc_IsValid_ReturnValue_7;
	Parms.CallFunc_Concat_StrStr_ReturnValue = InCallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = InCallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = InCallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = InCallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = InCallFunc_IsDedicatedServer_ReturnValue;
	Parms.Temp_struct_Variable = InTemp_struct_Variable;
	Parms.CallFunc_PostAkEvent_ReturnValue = InCallFunc_PostAkEvent_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue = InCallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_1 = InCallFunc_RandomFloatInRange_ReturnValue_1;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue_2 = InCallFunc_Add_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_8 = InCallFunc_IsValid_ReturnValue_8;
	Parms.CallFunc_Conv_NameToString_ReturnValue = InCallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_Contains_ReturnValue = InCallFunc_Contains_ReturnValue;
	Parms.CallFunc_Conv_NameToString_ReturnValue_1 = InCallFunc_Conv_NameToString_ReturnValue_1;
	Parms.CallFunc_Contains_ReturnValue_1 = InCallFunc_Contains_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = InCallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = InCallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue_1 = InCallFunc_MakeVector_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_9 = InCallFunc_IsValid_ReturnValue_9;
	Parms.CallFunc_Add_VectorVector_ReturnValue_1 = InCallFunc_Add_VectorVector_ReturnValue_1;
	Parms.CallFunc_SpawnDecalAtLocation_ReturnValue = InCallFunc_SpawnDecalAtLocation_ReturnValue;
	Parms.CallFunc_SpawnSystemAttached_ReturnValue = InCallFunc_SpawnSystemAttached_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue_2 = InCallFunc_Add_VectorVector_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_10 = InCallFunc_IsValid_ReturnValue_10;
	Parms.CallFunc_AkSpawnAtLocation_ReturnValue = InCallFunc_AkSpawnAtLocation_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_11 = InCallFunc_IsValid_ReturnValue_11;
	Parms.CallFunc_SetRTPCValue_Value_ImplicitCast = InCallFunc_SetRTPCValue_Value_ImplicitCast;
	Parms.CallFunc_Subtract_DoubleDouble_A_ImplicitCast = InCallFunc_Subtract_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_Add_DoubleDouble_A_ImplicitCast = InCallFunc_Add_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_MakeRotator_Yaw_ImplicitCast = InCallFunc_MakeRotator_Yaw_ImplicitCast;
	Parms.CallFunc_MakeRotator_Pitch_ImplicitCast = InCallFunc_MakeRotator_Pitch_ImplicitCast;
	Parms.CallFunc_SetRTPCValue_Value_ImplicitCast_1 = InCallFunc_SetRTPCValue_Value_ImplicitCast_1;
	Parms.CallFunc_SetFadeOut_Duration_ImplicitCast = InCallFunc_SetFadeOut_Duration_ImplicitCast;
	Parms.CallFunc_SetFadeOut_StartDelay_ImplicitCast = InCallFunc_SetFadeOut_StartDelay_ImplicitCast;
	Parms.CallFunc_SetFadeIn_Duaration_ImplicitCast = InCallFunc_SetFadeIn_Duaration_ImplicitCast;
	Parms.CallFunc_SetFadeIn_StartDelay_ImplicitCast = InCallFunc_SetFadeIn_StartDelay_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
