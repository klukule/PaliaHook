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


// Function Comp_Listener_Padding.Comp_Listener_Padding_C.DoesEncompassPaddingBox
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         Primitive                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               EncompassesPoints                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FVector>             Points                                                           (Edit, BlueprintVisible)
// int32                              Int                                                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Encompasses                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_3                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_4                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_5                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_5                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FVector>             K2Node_MakeArray_Array                                           (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetClosestPointOnCollision_OutPointOnBody               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetClosestPointOnCollision_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_LessEqual_DoubleDouble_A_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UComp_Listener_Padding_C::DoesEncompassPaddingBox(class UPrimitiveComponent* InPrimitive, bool* InEncompassesPoints, const TArray<struct FVector>& InPoints, int32 InInt, bool InEncompasses, bool InTemp_bool_True_if_break_was_hit_Variable, int32 InTemp_int_Array_Index_Variable, bool InCallFunc_Not_PreBool_ReturnValue, int32 InTemp_int_Loop_Counter_Variable, int32 InCallFunc_Add_IntInt_ReturnValue, double InCallFunc_Multiply_DoubleDouble_ReturnValue, const struct FVector& InCallFunc_MakeVector_ReturnValue, const struct FVector& InCallFunc_MakeVector_ReturnValue_1, double InCallFunc_Multiply_DoubleDouble_ReturnValue_1, const struct FVector& InCallFunc_MakeVector_ReturnValue_2, const struct FVector& InCallFunc_MakeVector_ReturnValue_3, double InCallFunc_Multiply_DoubleDouble_ReturnValue_2, const struct FVector& InCallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& InCallFunc_MakeVector_ReturnValue_4, const struct FVector& InCallFunc_Add_VectorVector_ReturnValue, const struct FVector& InCallFunc_Add_VectorVector_ReturnValue_1, const struct FVector& InCallFunc_Add_VectorVector_ReturnValue_2, const struct FVector& InCallFunc_Add_VectorVector_ReturnValue_3, const struct FVector& InCallFunc_Add_VectorVector_ReturnValue_4, const struct FVector& InCallFunc_MakeVector_ReturnValue_5, const struct FVector& InCallFunc_Add_VectorVector_ReturnValue_5, TArray<struct FVector>& InK2Node_MakeArray_Array, int32 InCallFunc_Array_Length_ReturnValue, const struct FVector& InCallFunc_Array_Get_Item, bool InCallFunc_Less_IntInt_ReturnValue, const struct FVector& InCallFunc_GetClosestPointOnCollision_OutPointOnBody, float InCallFunc_GetClosestPointOnCollision_ReturnValue, bool InCallFunc_BooleanAND_ReturnValue, bool InCallFunc_LessEqual_DoubleDouble_ReturnValue, double InCallFunc_LessEqual_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Comp_Listener_Padding_C", "DoesEncompassPaddingBox");

	Params::UComp_Listener_Padding_C_DoesEncompassPaddingBox_Params Parms{};

	Parms.Primitive = InPrimitive;
	Parms.Points = InPoints;
	Parms.Int = InInt;
	Parms.Encompasses = InEncompasses;
	Parms.Temp_bool_True_if_break_was_hit_Variable = InTemp_bool_True_if_break_was_hit_Variable;
	Parms.Temp_int_Array_Index_Variable = InTemp_int_Array_Index_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = InCallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = InTemp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = InCallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = InCallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue = InCallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue_1 = InCallFunc_MakeVector_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = InCallFunc_Multiply_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_MakeVector_ReturnValue_2 = InCallFunc_MakeVector_ReturnValue_2;
	Parms.CallFunc_MakeVector_ReturnValue_3 = InCallFunc_MakeVector_ReturnValue_3;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_2 = InCallFunc_Multiply_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = InCallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue_4 = InCallFunc_MakeVector_ReturnValue_4;
	Parms.CallFunc_Add_VectorVector_ReturnValue = InCallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue_1 = InCallFunc_Add_VectorVector_ReturnValue_1;
	Parms.CallFunc_Add_VectorVector_ReturnValue_2 = InCallFunc_Add_VectorVector_ReturnValue_2;
	Parms.CallFunc_Add_VectorVector_ReturnValue_3 = InCallFunc_Add_VectorVector_ReturnValue_3;
	Parms.CallFunc_Add_VectorVector_ReturnValue_4 = InCallFunc_Add_VectorVector_ReturnValue_4;
	Parms.CallFunc_MakeVector_ReturnValue_5 = InCallFunc_MakeVector_ReturnValue_5;
	Parms.CallFunc_Add_VectorVector_ReturnValue_5 = InCallFunc_Add_VectorVector_ReturnValue_5;
	Parms.K2Node_MakeArray_Array = InK2Node_MakeArray_Array;
	Parms.CallFunc_Array_Length_ReturnValue = InCallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = InCallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = InCallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetClosestPointOnCollision_OutPointOnBody = InCallFunc_GetClosestPointOnCollision_OutPointOnBody;
	Parms.CallFunc_GetClosestPointOnCollision_ReturnValue = InCallFunc_GetClosestPointOnCollision_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = InCallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_LessEqual_DoubleDouble_ReturnValue = InCallFunc_LessEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_LessEqual_DoubleDouble_A_ImplicitCast = InCallFunc_LessEqual_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (InEncompassesPoints != nullptr)
		*InEncompassesPoints = Parms.EncompassesPoints;

}


// Function Comp_Listener_Padding.Comp_Listener_Padding_C.DoesEncompassPaddingVolume
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AValeriaSpatialAudioVolume*  ValSpat                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               EncompassesPoints                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FVector>             Points                                                           (Edit, BlueprintVisible)
// int32                              Int                                                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Encompasses                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_3                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_4                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_5                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_5                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FVector>             K2Node_MakeArray_Array                                           (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesEncompassPoint_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UComp_Listener_Padding_C::DoesEncompassPaddingVolume(class AValeriaSpatialAudioVolume* InValSpat, bool* InEncompassesPoints, const TArray<struct FVector>& InPoints, int32 InInt, bool InEncompasses, bool InTemp_bool_True_if_break_was_hit_Variable, int32 InTemp_int_Array_Index_Variable, bool InCallFunc_Not_PreBool_ReturnValue, int32 InTemp_int_Loop_Counter_Variable, int32 InCallFunc_Add_IntInt_ReturnValue, double InCallFunc_Multiply_DoubleDouble_ReturnValue, const struct FVector& InCallFunc_MakeVector_ReturnValue, const struct FVector& InCallFunc_MakeVector_ReturnValue_1, double InCallFunc_Multiply_DoubleDouble_ReturnValue_1, const struct FVector& InCallFunc_MakeVector_ReturnValue_2, const struct FVector& InCallFunc_MakeVector_ReturnValue_3, double InCallFunc_Multiply_DoubleDouble_ReturnValue_2, const struct FVector& InCallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& InCallFunc_MakeVector_ReturnValue_4, const struct FVector& InCallFunc_Add_VectorVector_ReturnValue, const struct FVector& InCallFunc_Add_VectorVector_ReturnValue_1, const struct FVector& InCallFunc_Add_VectorVector_ReturnValue_2, const struct FVector& InCallFunc_Add_VectorVector_ReturnValue_3, const struct FVector& InCallFunc_Add_VectorVector_ReturnValue_4, const struct FVector& InCallFunc_MakeVector_ReturnValue_5, const struct FVector& InCallFunc_Add_VectorVector_ReturnValue_5, TArray<struct FVector>& InK2Node_MakeArray_Array, int32 InCallFunc_Array_Length_ReturnValue, const struct FVector& InCallFunc_Array_Get_Item, bool InCallFunc_Less_IntInt_ReturnValue, bool InCallFunc_DoesEncompassPoint_ReturnValue, bool InCallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Comp_Listener_Padding_C", "DoesEncompassPaddingVolume");

	Params::UComp_Listener_Padding_C_DoesEncompassPaddingVolume_Params Parms{};

	Parms.ValSpat = InValSpat;
	Parms.Points = InPoints;
	Parms.Int = InInt;
	Parms.Encompasses = InEncompasses;
	Parms.Temp_bool_True_if_break_was_hit_Variable = InTemp_bool_True_if_break_was_hit_Variable;
	Parms.Temp_int_Array_Index_Variable = InTemp_int_Array_Index_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = InCallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = InTemp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = InCallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = InCallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue = InCallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue_1 = InCallFunc_MakeVector_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = InCallFunc_Multiply_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_MakeVector_ReturnValue_2 = InCallFunc_MakeVector_ReturnValue_2;
	Parms.CallFunc_MakeVector_ReturnValue_3 = InCallFunc_MakeVector_ReturnValue_3;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_2 = InCallFunc_Multiply_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = InCallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue_4 = InCallFunc_MakeVector_ReturnValue_4;
	Parms.CallFunc_Add_VectorVector_ReturnValue = InCallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue_1 = InCallFunc_Add_VectorVector_ReturnValue_1;
	Parms.CallFunc_Add_VectorVector_ReturnValue_2 = InCallFunc_Add_VectorVector_ReturnValue_2;
	Parms.CallFunc_Add_VectorVector_ReturnValue_3 = InCallFunc_Add_VectorVector_ReturnValue_3;
	Parms.CallFunc_Add_VectorVector_ReturnValue_4 = InCallFunc_Add_VectorVector_ReturnValue_4;
	Parms.CallFunc_MakeVector_ReturnValue_5 = InCallFunc_MakeVector_ReturnValue_5;
	Parms.CallFunc_Add_VectorVector_ReturnValue_5 = InCallFunc_Add_VectorVector_ReturnValue_5;
	Parms.K2Node_MakeArray_Array = InK2Node_MakeArray_Array;
	Parms.CallFunc_Array_Length_ReturnValue = InCallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = InCallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = InCallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_DoesEncompassPoint_ReturnValue = InCallFunc_DoesEncompassPoint_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = InCallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (InEncompassesPoints != nullptr)
		*InEncompassesPoints = Parms.EncompassesPoints;

}


// Function Comp_Listener_Padding.Comp_Listener_Padding_C.ShouldPushFunc
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UAkRoomComponent*            Room                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               Should                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UComp_Listener_Padding_C::ShouldPushFunc(class UAkRoomComponent* InRoom, bool* InShould, bool InCallFunc_Greater_DoubleDouble_ReturnValue, double InCallFunc_Greater_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Comp_Listener_Padding_C", "ShouldPushFunc");

	Params::UComp_Listener_Padding_C_ShouldPushFunc_Params Parms{};

	Parms.Room = InRoom;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = InCallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_A_ImplicitCast = InCallFunc_Greater_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (InShould != nullptr)
		*InShould = Parms.Should;

}


// Function Comp_Listener_Padding.Comp_Listener_Padding_C.GatherHitResults
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult                  HitRes                                                           (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class UPrimitiveComponent*         HitComponent                                                     (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                      HitActor                                                         (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  HitResult                                                        (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AValeriaSpatialAudioVolume*  K2Node_DynamicCast_AsValeria_Spatial_Audio_Volume                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAkAcousticPortal*           K2Node_DynamicCast_AsAk_Acoustic_Portal                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ShouldPushFunc_Should                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EAkAcousticPortalState  CallFunc_GetCurrentState_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
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
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBoxComponent*               K2Node_DynamicCast_AsBox_Collision                               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             CallFunc_GetChildComponent_ReturnValue                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UAkPortalComponent*          K2Node_DynamicCast_AsAk_Portal_Component                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAkRoomComponent*            K2Node_DynamicCast_AsAk_Room_Component                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EAkAcousticPortalState  CallFunc_GetCurrentState_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ShouldPushFunc_Should_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UComp_Listener_Padding_C::GatherHitResults(const struct FHitResult& InHitRes, class UPrimitiveComponent* InHitComponent, class AActor* InHitActor, const struct FHitResult& InHitResult, class AValeriaSpatialAudioVolume* InK2Node_DynamicCast_AsValeria_Spatial_Audio_Volume, bool InK2Node_DynamicCast_bSuccess, class AAkAcousticPortal* InK2Node_DynamicCast_AsAk_Acoustic_Portal, bool InK2Node_DynamicCast_bSuccess_1, bool InCallFunc_ShouldPushFunc_Should, enum class EAkAcousticPortalState InCallFunc_GetCurrentState_ReturnValue, bool InK2Node_SwitchEnum_CmpSuccess, bool InCallFunc_BreakHitResult_bBlockingHit, bool InCallFunc_BreakHitResult_bInitialOverlap, float InCallFunc_BreakHitResult_Time, float InCallFunc_BreakHitResult_Distance, const struct FVector& InCallFunc_BreakHitResult_Location, const struct FVector& InCallFunc_BreakHitResult_ImpactPoint, const struct FVector& InCallFunc_BreakHitResult_Normal, const struct FVector& InCallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* InCallFunc_BreakHitResult_PhysMat, class AActor* InCallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* InCallFunc_BreakHitResult_HitComponent, class FName InCallFunc_BreakHitResult_HitBoneName, class FName InCallFunc_BreakHitResult_BoneName, int32 InCallFunc_BreakHitResult_HitItem, int32 InCallFunc_BreakHitResult_ElementIndex, int32 InCallFunc_BreakHitResult_FaceIndex, const struct FVector& InCallFunc_BreakHitResult_TraceStart, const struct FVector& InCallFunc_BreakHitResult_TraceEnd, int32 InCallFunc_Array_Add_ReturnValue, class UBoxComponent* InK2Node_DynamicCast_AsBox_Collision, bool InK2Node_DynamicCast_bSuccess_2, class USceneComponent* InCallFunc_GetChildComponent_ReturnValue, class UAkPortalComponent* InK2Node_DynamicCast_AsAk_Portal_Component, bool InK2Node_DynamicCast_bSuccess_3, class UAkRoomComponent* InK2Node_DynamicCast_AsAk_Room_Component, bool InK2Node_DynamicCast_bSuccess_4, enum class EAkAcousticPortalState InCallFunc_GetCurrentState_ReturnValue_1, bool InCallFunc_ShouldPushFunc_Should_1, bool InK2Node_SwitchEnum_CmpSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Comp_Listener_Padding_C", "GatherHitResults");

	Params::UComp_Listener_Padding_C_GatherHitResults_Params Parms{};

	Parms.HitRes = InHitRes;
	Parms.HitComponent = InHitComponent;
	Parms.HitActor = InHitActor;
	Parms.HitResult = InHitResult;
	Parms.K2Node_DynamicCast_AsValeria_Spatial_Audio_Volume = InK2Node_DynamicCast_AsValeria_Spatial_Audio_Volume;
	Parms.K2Node_DynamicCast_bSuccess = InK2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsAk_Acoustic_Portal = InK2Node_DynamicCast_AsAk_Acoustic_Portal;
	Parms.K2Node_DynamicCast_bSuccess_1 = InK2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_ShouldPushFunc_Should = InCallFunc_ShouldPushFunc_Should;
	Parms.CallFunc_GetCurrentState_ReturnValue = InCallFunc_GetCurrentState_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = InK2Node_SwitchEnum_CmpSuccess;
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
	Parms.CallFunc_Array_Add_ReturnValue = InCallFunc_Array_Add_ReturnValue;
	Parms.K2Node_DynamicCast_AsBox_Collision = InK2Node_DynamicCast_AsBox_Collision;
	Parms.K2Node_DynamicCast_bSuccess_2 = InK2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetChildComponent_ReturnValue = InCallFunc_GetChildComponent_ReturnValue;
	Parms.K2Node_DynamicCast_AsAk_Portal_Component = InK2Node_DynamicCast_AsAk_Portal_Component;
	Parms.K2Node_DynamicCast_bSuccess_3 = InK2Node_DynamicCast_bSuccess_3;
	Parms.K2Node_DynamicCast_AsAk_Room_Component = InK2Node_DynamicCast_AsAk_Room_Component;
	Parms.K2Node_DynamicCast_bSuccess_4 = InK2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_GetCurrentState_ReturnValue_1 = InCallFunc_GetCurrentState_ReturnValue_1;
	Parms.CallFunc_ShouldPushFunc_Should_1 = InCallFunc_ShouldPushFunc_Should_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = InK2Node_SwitchEnum_CmpSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Comp_Listener_Padding.Comp_Listener_Padding_C.GetListenerPosition
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                     Position                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UComp_Listener_Padding_C::GetListenerPosition(struct FVector* InPosition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Comp_Listener_Padding_C", "GetListenerPosition");

	Params::UComp_Listener_Padding_C_GetListenerPosition_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (InPosition != nullptr)
		*InPosition = Parms.Position;

}


// Function Comp_Listener_Padding.Comp_Listener_Padding_C.FindNewPosition
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FHitResult>          Hit                                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// struct FVector                     NewLocation                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsOverlapping                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         HitComponent                                                     (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                      HitActor                                                         (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// struct FVector                     ImpactNormal                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     ImpactPoint                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CurrentLoc                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValeriaSpatialAudioVolume*  HitVolume                                                        (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               ResetLocal                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Loc                                                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Prio                                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesEncompassPaddingBox_EncompassesPoints               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Vector_GetAbs_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetMaxElement_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Subtract_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Abs_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_FindLookAtRotation_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_Array_Get_Item                                          (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
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
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesEncompassPaddingVolume_EncompassesPoints            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetClosestPointOnCollision_OutPointOnBody               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetClosestPointOnCollision_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_DoubleDouble_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetClosestPointOnCollision_OutPointOnBody_1             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetClosestPointOnCollision_ReturnValue_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_DoubleDouble_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_ListenerPushDirection Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesEncompassPoint_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue_2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue_3                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable                                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_1                                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_2                                           (ZeroConstructor, HasGetValueTypeHash)
// enum class E_ListenerPushDirection Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_Select_Default                                            (ZeroConstructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Vector_GetAbs_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_FindLookAtRotation_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// double                             CallFunc_GetMaxElement_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValeriaSpatialAudioVolume*  K2Node_DynamicCast_AsValeria_Spatial_Audio_Volume                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_3                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UComp_Listener_Padding_C::FindNewPosition(TArray<struct FHitResult>& InHit, struct FVector* InNewLocation, bool InIsOverlapping, class UPrimitiveComponent* InHitComponent, class AActor* InHitActor, const struct FVector& InImpactNormal, const struct FVector& InImpactPoint, const struct FVector& InCurrentLoc, class AValeriaSpatialAudioVolume* InHitVolume, bool InResetLocal, const struct FVector& InLoc, int32 InPrio, int32 InTemp_int_Array_Index_Variable, bool InTemp_bool_True_if_break_was_hit_Variable, bool InCallFunc_Not_PreBool_ReturnValue, bool InCallFunc_DoesEncompassPaddingBox_EncompassesPoints, double InCallFunc_Multiply_DoubleDouble_ReturnValue, const struct FVector& InCallFunc_Vector_GetAbs_ReturnValue, double InCallFunc_GetMaxElement_ReturnValue, double InCallFunc_Subtract_DoubleDouble_ReturnValue, const struct FVector& InCallFunc_Add_VectorVector_ReturnValue, double InCallFunc_Abs_ReturnValue, const struct FRotator& InCallFunc_FindLookAtRotation_ReturnValue, double InCallFunc_Multiply_DoubleDouble_ReturnValue_1, const struct FVector& InCallFunc_GetForwardVector_ReturnValue, const struct FVector& InCallFunc_Multiply_VectorFloat_ReturnValue, int32 InTemp_int_Loop_Counter_Variable, const struct FVector& InCallFunc_Add_VectorVector_ReturnValue_1, int32 InCallFunc_Add_IntInt_ReturnValue, const struct FHitResult& InCallFunc_Array_Get_Item, int32 InCallFunc_Array_Length_ReturnValue, bool InCallFunc_BreakHitResult_bBlockingHit, bool InCallFunc_BreakHitResult_bInitialOverlap, float InCallFunc_BreakHitResult_Time, float InCallFunc_BreakHitResult_Distance, const struct FVector& InCallFunc_BreakHitResult_Location, const struct FVector& InCallFunc_BreakHitResult_ImpactPoint, const struct FVector& InCallFunc_BreakHitResult_Normal, const struct FVector& InCallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* InCallFunc_BreakHitResult_PhysMat, class AActor* InCallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* InCallFunc_BreakHitResult_HitComponent, class FName InCallFunc_BreakHitResult_HitBoneName, class FName InCallFunc_BreakHitResult_BoneName, int32 InCallFunc_BreakHitResult_HitItem, int32 InCallFunc_BreakHitResult_ElementIndex, int32 InCallFunc_BreakHitResult_FaceIndex, const struct FVector& InCallFunc_BreakHitResult_TraceStart, const struct FVector& InCallFunc_BreakHitResult_TraceEnd, bool InCallFunc_Less_IntInt_ReturnValue, bool InCallFunc_BooleanAND_ReturnValue, const struct FVector& InCallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& InCallFunc_K2_GetComponentLocation_ReturnValue_1, const struct FLinearColor& InTemp_struct_Variable, const class FString& InCallFunc_GetDisplayName_ReturnValue, const class FString& InCallFunc_Concat_StrStr_ReturnValue, bool InCallFunc_DoesEncompassPaddingVolume_EncompassesPoints, const struct FVector& InCallFunc_GetClosestPointOnCollision_OutPointOnBody, float InCallFunc_GetClosestPointOnCollision_ReturnValue, bool InCallFunc_EqualEqual_DoubleDouble_ReturnValue, const struct FVector& InCallFunc_GetClosestPointOnCollision_OutPointOnBody_1, float InCallFunc_GetClosestPointOnCollision_ReturnValue_1, bool InCallFunc_EqualEqual_DoubleDouble_ReturnValue_1, const struct FLinearColor& InTemp_struct_Variable_1, const struct FLinearColor& InTemp_struct_Variable_2, enum class E_ListenerPushDirection InTemp_byte_Variable, bool InCallFunc_DoesEncompassPoint_ReturnValue, const struct FVector& InCallFunc_K2_GetComponentLocation_ReturnValue_2, const struct FVector& InCallFunc_K2_GetComponentLocation_ReturnValue_3, const class FString& InTemp_string_Variable, const class FString& InTemp_string_Variable_1, const class FString& InTemp_string_Variable_2, enum class E_ListenerPushDirection InTemp_byte_Variable_1, const class FString& InK2Node_Select_Default, const struct FLinearColor& InK2Node_Select_Default_1, const struct FVector& InCallFunc_Add_VectorVector_ReturnValue_2, const struct FVector& InCallFunc_Vector_GetAbs_ReturnValue_1, const struct FRotator& InCallFunc_FindLookAtRotation_ReturnValue_1, double InCallFunc_GetMaxElement_ReturnValue_1, const struct FVector& InCallFunc_GetForwardVector_ReturnValue_1, double InCallFunc_Multiply_DoubleDouble_ReturnValue_2, const struct FVector& InCallFunc_Multiply_VectorFloat_ReturnValue_1, class AValeriaSpatialAudioVolume* InK2Node_DynamicCast_AsValeria_Spatial_Audio_Volume, bool InK2Node_DynamicCast_bSuccess, const struct FVector& InCallFunc_Add_VectorVector_ReturnValue_3, bool InK2Node_SwitchEnum_CmpSuccess, bool InK2Node_SwitchEnum_CmpSuccess_1, double InCallFunc_EqualEqual_DoubleDouble_A_ImplicitCast, double InCallFunc_EqualEqual_DoubleDouble_A_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Comp_Listener_Padding_C", "FindNewPosition");

	Params::UComp_Listener_Padding_C_FindNewPosition_Params Parms{};

	Parms.Hit = InHit;
	Parms.IsOverlapping = InIsOverlapping;
	Parms.HitComponent = InHitComponent;
	Parms.HitActor = InHitActor;
	Parms.ImpactNormal = InImpactNormal;
	Parms.ImpactPoint = InImpactPoint;
	Parms.CurrentLoc = InCurrentLoc;
	Parms.HitVolume = InHitVolume;
	Parms.ResetLocal = InResetLocal;
	Parms.Loc = InLoc;
	Parms.Prio = InPrio;
	Parms.Temp_int_Array_Index_Variable = InTemp_int_Array_Index_Variable;
	Parms.Temp_bool_True_if_break_was_hit_Variable = InTemp_bool_True_if_break_was_hit_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = InCallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_DoesEncompassPaddingBox_EncompassesPoints = InCallFunc_DoesEncompassPaddingBox_EncompassesPoints;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = InCallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Vector_GetAbs_ReturnValue = InCallFunc_Vector_GetAbs_ReturnValue;
	Parms.CallFunc_GetMaxElement_ReturnValue = InCallFunc_GetMaxElement_ReturnValue;
	Parms.CallFunc_Subtract_DoubleDouble_ReturnValue = InCallFunc_Subtract_DoubleDouble_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = InCallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_Abs_ReturnValue = InCallFunc_Abs_ReturnValue;
	Parms.CallFunc_FindLookAtRotation_ReturnValue = InCallFunc_FindLookAtRotation_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = InCallFunc_Multiply_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_GetForwardVector_ReturnValue = InCallFunc_GetForwardVector_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = InCallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = InTemp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_VectorVector_ReturnValue_1 = InCallFunc_Add_VectorVector_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue = InCallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = InCallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = InCallFunc_Array_Length_ReturnValue;
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
	Parms.CallFunc_Less_IntInt_ReturnValue = InCallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = InCallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = InCallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue_1 = InCallFunc_K2_GetComponentLocation_ReturnValue_1;
	Parms.Temp_struct_Variable = InTemp_struct_Variable;
	Parms.CallFunc_GetDisplayName_ReturnValue = InCallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = InCallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_DoesEncompassPaddingVolume_EncompassesPoints = InCallFunc_DoesEncompassPaddingVolume_EncompassesPoints;
	Parms.CallFunc_GetClosestPointOnCollision_OutPointOnBody = InCallFunc_GetClosestPointOnCollision_OutPointOnBody;
	Parms.CallFunc_GetClosestPointOnCollision_ReturnValue = InCallFunc_GetClosestPointOnCollision_ReturnValue;
	Parms.CallFunc_EqualEqual_DoubleDouble_ReturnValue = InCallFunc_EqualEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_GetClosestPointOnCollision_OutPointOnBody_1 = InCallFunc_GetClosestPointOnCollision_OutPointOnBody_1;
	Parms.CallFunc_GetClosestPointOnCollision_ReturnValue_1 = InCallFunc_GetClosestPointOnCollision_ReturnValue_1;
	Parms.CallFunc_EqualEqual_DoubleDouble_ReturnValue_1 = InCallFunc_EqualEqual_DoubleDouble_ReturnValue_1;
	Parms.Temp_struct_Variable_1 = InTemp_struct_Variable_1;
	Parms.Temp_struct_Variable_2 = InTemp_struct_Variable_2;
	Parms.Temp_byte_Variable = InTemp_byte_Variable;
	Parms.CallFunc_DoesEncompassPoint_ReturnValue = InCallFunc_DoesEncompassPoint_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue_2 = InCallFunc_K2_GetComponentLocation_ReturnValue_2;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue_3 = InCallFunc_K2_GetComponentLocation_ReturnValue_3;
	Parms.Temp_string_Variable = InTemp_string_Variable;
	Parms.Temp_string_Variable_1 = InTemp_string_Variable_1;
	Parms.Temp_string_Variable_2 = InTemp_string_Variable_2;
	Parms.Temp_byte_Variable_1 = InTemp_byte_Variable_1;
	Parms.K2Node_Select_Default = InK2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = InK2Node_Select_Default_1;
	Parms.CallFunc_Add_VectorVector_ReturnValue_2 = InCallFunc_Add_VectorVector_ReturnValue_2;
	Parms.CallFunc_Vector_GetAbs_ReturnValue_1 = InCallFunc_Vector_GetAbs_ReturnValue_1;
	Parms.CallFunc_FindLookAtRotation_ReturnValue_1 = InCallFunc_FindLookAtRotation_ReturnValue_1;
	Parms.CallFunc_GetMaxElement_ReturnValue_1 = InCallFunc_GetMaxElement_ReturnValue_1;
	Parms.CallFunc_GetForwardVector_ReturnValue_1 = InCallFunc_GetForwardVector_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_2 = InCallFunc_Multiply_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue_1 = InCallFunc_Multiply_VectorFloat_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsValeria_Spatial_Audio_Volume = InK2Node_DynamicCast_AsValeria_Spatial_Audio_Volume;
	Parms.K2Node_DynamicCast_bSuccess = InK2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Add_VectorVector_ReturnValue_3 = InCallFunc_Add_VectorVector_ReturnValue_3;
	Parms.K2Node_SwitchEnum_CmpSuccess = InK2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = InK2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast = InCallFunc_EqualEqual_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast_1 = InCallFunc_EqualEqual_DoubleDouble_A_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

	if (InNewLocation != nullptr)
		*InNewLocation = Parms.NewLocation;

}


// Function Comp_Listener_Padding.Comp_Listener_Padding_C.UpdateListenerPosition
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetViewTarget_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AValeriaVillagerCharacter*   K2Node_DynamicCast_AsValeria_Villager_Character                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue                      (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCameraComponent*            CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue_1                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             CallFunc_GetAttachParent_ReturnValue                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetComponentRotation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ASubgameCutawayScene*        CallFunc_GetPlayingSubgameCutawayScene_ReturnValue               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_FindNewPosition_NewLocation                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue_2                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_DoubleDouble_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_FindNewPosition_NewLocation_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UComp_Listener_Padding_C::UpdateListenerPosition(bool InCallFunc_IsValid_ReturnValue, class AActor* InCallFunc_GetViewTarget_ReturnValue, class AValeriaVillagerCharacter* InK2Node_DynamicCast_AsValeria_Villager_Character, bool InK2Node_DynamicCast_bSuccess, const struct FTransform& InCallFunc_K2_GetComponentToWorld_ReturnValue, class UCameraComponent* InCallFunc_GetComponentByClass_ReturnValue, const struct FVector& InCallFunc_BreakTransform_Location, const struct FRotator& InCallFunc_BreakTransform_Rotation, const struct FVector& InCallFunc_BreakTransform_Scale, const struct FTransform& InCallFunc_K2_GetComponentToWorld_ReturnValue_1, const struct FVector& InCallFunc_BreakTransform_Location_1, const struct FRotator& InCallFunc_BreakTransform_Rotation_1, const struct FVector& InCallFunc_BreakTransform_Scale_1, bool InCallFunc_IsValid_ReturnValue_1, class USceneComponent* InCallFunc_GetAttachParent_ReturnValue, bool InCallFunc_BooleanAND_ReturnValue, const struct FRotator& InCallFunc_K2_GetComponentRotation_ReturnValue, class ASubgameCutawayScene* InCallFunc_GetPlayingSubgameCutawayScene_ReturnValue, const struct FVector& InCallFunc_FindNewPosition_NewLocation, const struct FRotator& InCallFunc_K2_GetActorRotation_ReturnValue, const struct FTransform& InCallFunc_MakeTransform_ReturnValue, const struct FVector& InCallFunc_K2_GetActorLocation_ReturnValue, bool InCallFunc_IsValid_ReturnValue_2, const struct FTransform& InCallFunc_K2_GetComponentToWorld_ReturnValue_2, bool InCallFunc_EqualEqual_DoubleDouble_ReturnValue, bool InCallFunc_Not_PreBool_ReturnValue, bool InCallFunc_IsValid_ReturnValue_3, const struct FVector& InCallFunc_FindNewPosition_NewLocation_1, bool InCallFunc_BooleanAND_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Comp_Listener_Padding_C", "UpdateListenerPosition");

	Params::UComp_Listener_Padding_C_UpdateListenerPosition_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = InCallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetViewTarget_ReturnValue = InCallFunc_GetViewTarget_ReturnValue;
	Parms.K2Node_DynamicCast_AsValeria_Villager_Character = InK2Node_DynamicCast_AsValeria_Villager_Character;
	Parms.K2Node_DynamicCast_bSuccess = InK2Node_DynamicCast_bSuccess;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue = InCallFunc_K2_GetComponentToWorld_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = InCallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_BreakTransform_Location = InCallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = InCallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = InCallFunc_BreakTransform_Scale;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue_1 = InCallFunc_K2_GetComponentToWorld_ReturnValue_1;
	Parms.CallFunc_BreakTransform_Location_1 = InCallFunc_BreakTransform_Location_1;
	Parms.CallFunc_BreakTransform_Rotation_1 = InCallFunc_BreakTransform_Rotation_1;
	Parms.CallFunc_BreakTransform_Scale_1 = InCallFunc_BreakTransform_Scale_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = InCallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetAttachParent_ReturnValue = InCallFunc_GetAttachParent_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = InCallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_K2_GetComponentRotation_ReturnValue = InCallFunc_K2_GetComponentRotation_ReturnValue;
	Parms.CallFunc_GetPlayingSubgameCutawayScene_ReturnValue = InCallFunc_GetPlayingSubgameCutawayScene_ReturnValue;
	Parms.CallFunc_FindNewPosition_NewLocation = InCallFunc_FindNewPosition_NewLocation;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue = InCallFunc_K2_GetActorRotation_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = InCallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = InCallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = InCallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue_2 = InCallFunc_K2_GetComponentToWorld_ReturnValue_2;
	Parms.CallFunc_EqualEqual_DoubleDouble_ReturnValue = InCallFunc_EqualEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = InCallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_3 = InCallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_FindNewPosition_NewLocation_1 = InCallFunc_FindNewPosition_NewLocation_1;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = InCallFunc_BooleanAND_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Comp_Listener_Padding.Comp_Listener_Padding_C.TransitionPosition
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                  From                                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  To                                                               (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             Speed                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_TLerp_ReturnValue                                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_TLerp_Alpha_ImplicitCast                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UComp_Listener_Padding_C::TransitionPosition(const struct FTransform& InFrom, const struct FTransform& InTo, double InSpeed, const struct FTransform& InCallFunc_TLerp_ReturnValue, const struct FVector& InCallFunc_BreakTransform_Location, const struct FRotator& InCallFunc_BreakTransform_Rotation, const struct FVector& InCallFunc_BreakTransform_Scale, float InCallFunc_TLerp_Alpha_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Comp_Listener_Padding_C", "TransitionPosition");

	Params::UComp_Listener_Padding_C_TransitionPosition_Params Parms{};

	Parms.From = InFrom;
	Parms.To = InTo;
	Parms.Speed = InSpeed;
	Parms.CallFunc_TLerp_ReturnValue = InCallFunc_TLerp_ReturnValue;
	Parms.CallFunc_BreakTransform_Location = InCallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = InCallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = InCallFunc_BreakTransform_Scale;
	Parms.CallFunc_TLerp_Alpha_ImplicitCast = InCallFunc_TLerp_Alpha_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Comp_Listener_Padding.Comp_Listener_Padding_C.SetPosition
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     NewPosition                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    NewRotation                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               UsePlayerCameraRot                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetComponentRotation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UComp_Listener_Padding_C::SetPosition(const struct FVector& InNewPosition, const struct FRotator& InNewRotation, bool InUsePlayerCameraRot, const struct FRotator& InCallFunc_K2_GetComponentRotation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Comp_Listener_Padding_C", "SetPosition");

	Params::UComp_Listener_Padding_C_SetPosition_Params Parms{};

	Parms.NewPosition = InNewPosition;
	Parms.NewRotation = InNewRotation;
	Parms.UsePlayerCameraRot = InUsePlayerCameraRot;
	Parms.CallFunc_K2_GetComponentRotation_ReturnValue = InCallFunc_K2_GetComponentRotation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Comp_Listener_Padding.Comp_Listener_Padding_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UComp_Listener_Padding_C::ReceiveTick(float InDeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Comp_Listener_Padding_C", "ReceiveTick");

	Params::UComp_Listener_Padding_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = InDeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Comp_Listener_Padding.Comp_Listener_Padding_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void UComp_Listener_Padding_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Comp_Listener_Padding_C", "ReceiveBeginPlay");

	Params::UComp_Listener_Padding_C_ReceiveBeginPlay_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function Comp_Listener_Padding.Comp_Listener_Padding_C.Break
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UComp_Listener_Padding_C::Break()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Comp_Listener_Padding_C", "Break");

	Params::UComp_Listener_Padding_C_Break_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function Comp_Listener_Padding.Comp_Listener_Padding_C.AudioDebugListener
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               On                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UComp_Listener_Padding_C::AudioDebugListener(bool InOn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Comp_Listener_Padding_C", "AudioDebugListener");

	Params::UComp_Listener_Padding_C_AudioDebugListener_Params Parms{};

	Parms.On = InOn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Comp_Listener_Padding.Comp_Listener_Padding_C.IsReelingFish
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsReeling                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UComp_Listener_Padding_C::IsReelingFish(bool InIsReeling)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Comp_Listener_Padding_C", "IsReelingFish");

	Params::UComp_Listener_Padding_C_IsReelingFish_Params Parms{};

	Parms.IsReeling = InIsReeling;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Comp_Listener_Padding.Comp_Listener_Padding_C.OnCharacterStateChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCharacterStateMachineComponent*Csm                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FCharacterStateChangeParams Params                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)

void UComp_Listener_Padding_C::OnCharacterStateChange(class UCharacterStateMachineComponent* InCsm, const struct FCharacterStateChangeParams& InParams)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Comp_Listener_Padding_C", "OnCharacterStateChange");

	Params::UComp_Listener_Padding_C_OnCharacterStateChange_Params Parms{};

	Parms.Csm = InCsm;
	Parms.Params = InParams;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Comp_Listener_Padding.Comp_Listener_Padding_C.FishingViewWasUpdated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFishingViewComponent*       FishingView                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FFishingMiniGameViewState   ViewState                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// class UFishingComponent*           Source                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UComp_Listener_Padding_C::FishingViewWasUpdated(class UFishingViewComponent* InFishingView, const struct FFishingMiniGameViewState& InViewState, class UFishingComponent* InSource)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Comp_Listener_Padding_C", "FishingViewWasUpdated");

	Params::UComp_Listener_Padding_C_FishingViewWasUpdated_Params Parms{};

	Parms.FishingView = InFishingView;
	Parms.ViewState = InViewState;
	Parms.Source = InSource;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Comp_Listener_Padding.Comp_Listener_Padding_C.OnPossessionChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UComp_Listener_Padding_C::OnPossessionChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Comp_Listener_Padding_C", "OnPossessionChanged");

	Params::UComp_Listener_Padding_C_OnPossessionChanged_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function Comp_Listener_Padding.Comp_Listener_Padding_C.ExecuteUbergraph_Comp_Listener_Padding
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              Temp_object_Variable                                             (ConstParm, ReferenceParm)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EDrawDebugTrace         Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetViewTarget_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCameraComponent*            CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetViewTarget_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AHousingPlotActor*           K2Node_DynamicCast_AsHousing_Plot_Actor                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCameraComponent*            CallFunc_GetComponentByClass_ReturnValue_1                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetWorldDeltaSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EDrawDebugTrace         Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AValeriaCharacter*           K2Node_DynamicCast_AsValeria_Character                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EDrawDebugTrace         K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetComponentTickInterval_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EObjectTypeQuery>K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm)
// TArray<struct FHitResult>          CallFunc_SphereTraceMultiForObjects_OutHits                      (ReferenceParm, ContainsInstancedReference)
// bool                               CallFunc_SphereTraceMultiForObjects_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_On                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_Array_Get_Item                                          (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_IsReeling                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue                      (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             CallFunc_GetAttachParent_ReturnValue                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UFishingViewComponent*       CallFunc_GetComponentByClass_ReturnValue_2                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetComponentRotation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCharacterStateMachineComponent*CallFunc_GetCSM_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCharacterStateMachineComponent*K2Node_CustomEvent_csm                                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FCharacterStateChangeParams K2Node_CustomEvent_params                                        (ContainsInstancedReference)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_1                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AValeriaCharacter*           K2Node_DynamicCast_AsValeria_Character_1                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInHousingEditMode_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocallyControlled_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           K2Node_DynamicCast_AsPlayer_Controller                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFishingViewComponent*       K2Node_CustomEvent_FishingView                                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FFishingMiniGameViewState   K2Node_CustomEvent_ViewState                                     ()
// class UFishingComponent*           K2Node_CustomEvent_Source                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetValeriaAudioListenerPosition_OutLocation             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetValeriaAudioListenerPosition_OutFrontDir             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetValeriaAudioListenerPosition_OutRightDir             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UAkRoomComponent*>    CallFunc_GetAudioRoomComponents_ReturnValue                      (ReferenceParm, ContainsInstancedReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAkRoomComponent*            CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// float                              CallFunc_SphereTraceMultiForObjects_Radius_ImplicitCast          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UComp_Listener_Padding_C::ExecuteUbergraph_Comp_Listener_Padding(int32 InEntryPoint, TArray<class AActor*>& InTemp_object_Variable, int32 InTemp_int_Loop_Counter_Variable, bool InCallFunc_IsDedicatedServer_ReturnValue, int32 InCallFunc_Add_IntInt_ReturnValue, enum class EDrawDebugTrace InTemp_byte_Variable, class AActor* InCallFunc_GetViewTarget_ReturnValue, class UCameraComponent* InCallFunc_GetComponentByClass_ReturnValue, class AActor* InCallFunc_GetViewTarget_ReturnValue_1, class AHousingPlotActor* InK2Node_DynamicCast_AsHousing_Plot_Actor, bool InK2Node_DynamicCast_bSuccess, bool InCallFunc_IsValid_ReturnValue, class UCameraComponent* InCallFunc_GetComponentByClass_ReturnValue_1, bool InCallFunc_IsValid_ReturnValue_1, bool InCallFunc_IsValid_ReturnValue_2, bool InCallFunc_Not_PreBool_ReturnValue, double InCallFunc_GetWorldDeltaSeconds_ReturnValue, bool InCallFunc_BooleanAND_ReturnValue, double InCallFunc_Multiply_DoubleDouble_ReturnValue, int32 InTemp_int_Array_Index_Variable, bool InTemp_bool_IsClosed_Variable, bool InTemp_bool_Has_Been_Initd_Variable, enum class EDrawDebugTrace InTemp_byte_Variable_1, bool InTemp_bool_IsClosed_Variable_1, bool InTemp_bool_Has_Been_Initd_Variable_1, bool InCallFunc_IsDedicatedServer_ReturnValue_1, float InK2Node_Event_DeltaSeconds, const struct FVector& InCallFunc_K2_GetComponentLocation_ReturnValue, class AActor* InCallFunc_GetOwner_ReturnValue, class AValeriaCharacter* InK2Node_DynamicCast_AsValeria_Character, bool InK2Node_DynamicCast_bSuccess_1, bool InTemp_bool_Variable, bool InTemp_bool_True_if_break_was_hit_Variable, enum class EDrawDebugTrace InK2Node_Select_Default, bool InCallFunc_Not_PreBool_ReturnValue_1, float InCallFunc_GetComponentTickInterval_ReturnValue, TArray<enum class EObjectTypeQuery>& InK2Node_MakeArray_Array, TArray<struct FHitResult>& InCallFunc_SphereTraceMultiForObjects_OutHits, bool InCallFunc_SphereTraceMultiForObjects_ReturnValue, bool InK2Node_CustomEvent_On, const struct FHitResult& InCallFunc_Array_Get_Item, int32 InCallFunc_Array_Length_ReturnValue, bool InK2Node_CustomEvent_IsReeling, bool InCallFunc_Less_IntInt_ReturnValue, bool InCallFunc_BooleanAND_ReturnValue_1, const struct FTransform& InCallFunc_K2_GetComponentToWorld_ReturnValue, double InCallFunc_Add_DoubleDouble_ReturnValue, double InCallFunc_FClamp_ReturnValue, class USceneComponent* InCallFunc_GetAttachParent_ReturnValue, class UFishingViewComponent* InCallFunc_GetComponentByClass_ReturnValue_2, const struct FRotator& InCallFunc_K2_GetComponentRotation_ReturnValue, const struct FTransform& InCallFunc_MakeTransform_ReturnValue, class UCharacterStateMachineComponent* InCallFunc_GetCSM_ReturnValue, class UCharacterStateMachineComponent* InK2Node_CustomEvent_csm, const struct FCharacterStateChangeParams& InK2Node_CustomEvent_params, bool InCallFunc_IsValid_ReturnValue_3, class AActor* InCallFunc_GetOwner_ReturnValue_1, bool InCallFunc_Not_PreBool_ReturnValue_2, class AValeriaCharacter* InK2Node_DynamicCast_AsValeria_Character_1, bool InK2Node_DynamicCast_bSuccess_2, bool InCallFunc_BooleanAND_ReturnValue_2, bool InCallFunc_IsInHousingEditMode_ReturnValue, bool InCallFunc_IsLocallyControlled_ReturnValue, class AController* InCallFunc_GetController_ReturnValue, class APlayerController* InK2Node_DynamicCast_AsPlayer_Controller, bool InK2Node_DynamicCast_bSuccess_3, class UFishingViewComponent* InK2Node_CustomEvent_FishingView, const struct FFishingMiniGameViewState& InK2Node_CustomEvent_ViewState, class UFishingComponent* InK2Node_CustomEvent_Source, bool InCallFunc_EqualEqual_ByteByte_ReturnValue, FDelegateProperty_ InK2Node_CreateDelegate_OutputDelegate, const struct FVector& InCallFunc_GetValeriaAudioListenerPosition_OutLocation, const struct FVector& InCallFunc_GetValeriaAudioListenerPosition_OutFrontDir, const struct FVector& InCallFunc_GetValeriaAudioListenerPosition_OutRightDir, const struct FVector& InCallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& InCallFunc_Add_VectorVector_ReturnValue, TArray<class UAkRoomComponent*>& InCallFunc_GetAudioRoomComponents_ReturnValue, FDelegateProperty_ InK2Node_CreateDelegate_OutputDelegate_1, class UAkRoomComponent* InCallFunc_Array_Get_Item_1, const class FString& InCallFunc_GetDisplayName_ReturnValue, float InCallFunc_SphereTraceMultiForObjects_Radius_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Comp_Listener_Padding_C", "ExecuteUbergraph_Comp_Listener_Padding");

	Params::UComp_Listener_Padding_C_ExecuteUbergraph_Comp_Listener_Padding_Params Parms{};

	Parms.EntryPoint = InEntryPoint;
	Parms.Temp_object_Variable = InTemp_object_Variable;
	Parms.Temp_int_Loop_Counter_Variable = InTemp_int_Loop_Counter_Variable;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = InCallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = InCallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_byte_Variable = InTemp_byte_Variable;
	Parms.CallFunc_GetViewTarget_ReturnValue = InCallFunc_GetViewTarget_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = InCallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_GetViewTarget_ReturnValue_1 = InCallFunc_GetViewTarget_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsHousing_Plot_Actor = InK2Node_DynamicCast_AsHousing_Plot_Actor;
	Parms.K2Node_DynamicCast_bSuccess = InK2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = InCallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue_1 = InCallFunc_GetComponentByClass_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = InCallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = InCallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_Not_PreBool_ReturnValue = InCallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue = InCallFunc_GetWorldDeltaSeconds_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = InCallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = InCallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = InTemp_int_Array_Index_Variable;
	Parms.Temp_bool_IsClosed_Variable = InTemp_bool_IsClosed_Variable;
	Parms.Temp_bool_Has_Been_Initd_Variable = InTemp_bool_Has_Been_Initd_Variable;
	Parms.Temp_byte_Variable_1 = InTemp_byte_Variable_1;
	Parms.Temp_bool_IsClosed_Variable_1 = InTemp_bool_IsClosed_Variable_1;
	Parms.Temp_bool_Has_Been_Initd_Variable_1 = InTemp_bool_Has_Been_Initd_Variable_1;
	Parms.CallFunc_IsDedicatedServer_ReturnValue_1 = InCallFunc_IsDedicatedServer_ReturnValue_1;
	Parms.K2Node_Event_DeltaSeconds = InK2Node_Event_DeltaSeconds;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = InCallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = InCallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsValeria_Character = InK2Node_DynamicCast_AsValeria_Character;
	Parms.K2Node_DynamicCast_bSuccess_1 = InK2Node_DynamicCast_bSuccess_1;
	Parms.Temp_bool_Variable = InTemp_bool_Variable;
	Parms.Temp_bool_True_if_break_was_hit_Variable = InTemp_bool_True_if_break_was_hit_Variable;
	Parms.K2Node_Select_Default = InK2Node_Select_Default;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = InCallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_GetComponentTickInterval_ReturnValue = InCallFunc_GetComponentTickInterval_ReturnValue;
	Parms.K2Node_MakeArray_Array = InK2Node_MakeArray_Array;
	Parms.CallFunc_SphereTraceMultiForObjects_OutHits = InCallFunc_SphereTraceMultiForObjects_OutHits;
	Parms.CallFunc_SphereTraceMultiForObjects_ReturnValue = InCallFunc_SphereTraceMultiForObjects_ReturnValue;
	Parms.K2Node_CustomEvent_On = InK2Node_CustomEvent_On;
	Parms.CallFunc_Array_Get_Item = InCallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = InCallFunc_Array_Length_ReturnValue;
	Parms.K2Node_CustomEvent_IsReeling = InK2Node_CustomEvent_IsReeling;
	Parms.CallFunc_Less_IntInt_ReturnValue = InCallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = InCallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue = InCallFunc_K2_GetComponentToWorld_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = InCallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue = InCallFunc_FClamp_ReturnValue;
	Parms.CallFunc_GetAttachParent_ReturnValue = InCallFunc_GetAttachParent_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue_2 = InCallFunc_GetComponentByClass_ReturnValue_2;
	Parms.CallFunc_K2_GetComponentRotation_ReturnValue = InCallFunc_K2_GetComponentRotation_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = InCallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_GetCSM_ReturnValue = InCallFunc_GetCSM_ReturnValue;
	Parms.K2Node_CustomEvent_csm = InK2Node_CustomEvent_csm;
	Parms.K2Node_CustomEvent_params = InK2Node_CustomEvent_params;
	Parms.CallFunc_IsValid_ReturnValue_3 = InCallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_GetOwner_ReturnValue_1 = InCallFunc_GetOwner_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = InCallFunc_Not_PreBool_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsValeria_Character_1 = InK2Node_DynamicCast_AsValeria_Character_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = InK2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = InCallFunc_BooleanAND_ReturnValue_2;
	Parms.CallFunc_IsInHousingEditMode_ReturnValue = InCallFunc_IsInHousingEditMode_ReturnValue;
	Parms.CallFunc_IsLocallyControlled_ReturnValue = InCallFunc_IsLocallyControlled_ReturnValue;
	Parms.CallFunc_GetController_ReturnValue = InCallFunc_GetController_ReturnValue;
	Parms.K2Node_DynamicCast_AsPlayer_Controller = InK2Node_DynamicCast_AsPlayer_Controller;
	Parms.K2Node_DynamicCast_bSuccess_3 = InK2Node_DynamicCast_bSuccess_3;
	Parms.K2Node_CustomEvent_FishingView = InK2Node_CustomEvent_FishingView;
	Parms.K2Node_CustomEvent_ViewState = InK2Node_CustomEvent_ViewState;
	Parms.K2Node_CustomEvent_Source = InK2Node_CustomEvent_Source;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = InCallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = InK2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetValeriaAudioListenerPosition_OutLocation = InCallFunc_GetValeriaAudioListenerPosition_OutLocation;
	Parms.CallFunc_GetValeriaAudioListenerPosition_OutFrontDir = InCallFunc_GetValeriaAudioListenerPosition_OutFrontDir;
	Parms.CallFunc_GetValeriaAudioListenerPosition_OutRightDir = InCallFunc_GetValeriaAudioListenerPosition_OutRightDir;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = InCallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = InCallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_GetAudioRoomComponents_ReturnValue = InCallFunc_GetAudioRoomComponents_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = InK2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_Array_Get_Item_1 = InCallFunc_Array_Get_Item_1;
	Parms.CallFunc_GetDisplayName_ReturnValue = InCallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_SphereTraceMultiForObjects_Radius_ImplicitCast = InCallFunc_SphereTraceMultiForObjects_Radius_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
