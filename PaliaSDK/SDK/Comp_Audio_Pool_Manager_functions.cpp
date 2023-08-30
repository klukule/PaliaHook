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


// Function Comp_Audio_Pool_Manager.Comp_Audio_Pool_Manager_C.StaticLoopStopped
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_AudioPool_StaticLoop_C*  PoolObject                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UComp_Audio_Pool_Manager_C::StaticLoopStopped(class ABP_AudioPool_StaticLoop_C* InPoolObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Comp_Audio_Pool_Manager_C", "StaticLoopStopped");

	Params::UComp_Audio_Pool_Manager_C_StaticLoopStopped_Params Parms{};

	Parms.PoolObject = InPoolObject;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Comp_Audio_Pool_Manager.Comp_Audio_Pool_Manager_C.GetCritterValidFoliage
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class ABP_Env_Audio_Pool_Base_C*>CritterValidFoliage                                              (Parm, OutParm)
// TArray<class ABP_Env_Audio_Pool_Base_C*>LocalCritterValidFoliage                                         (Edit, BlueprintVisible, DisableEditOnTemplate)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABP_Env_Audio_Pool_Base_C*>CallFunc_Set_ToArray_Result                                      (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Env_Audio_Pool_Base_C*   CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UComp_Audio_Pool_Manager_C::GetCritterValidFoliage(TArray<class ABP_Env_Audio_Pool_Base_C*>* InCritterValidFoliage, const TArray<class ABP_Env_Audio_Pool_Base_C*>& InLocalCritterValidFoliage, int32 InTemp_int_Array_Index_Variable, int32 InTemp_int_Loop_Counter_Variable, int32 InCallFunc_Add_IntInt_ReturnValue, TArray<class ABP_Env_Audio_Pool_Base_C*>& InCallFunc_Set_ToArray_Result, int32 InCallFunc_Array_Length_ReturnValue, class ABP_Env_Audio_Pool_Base_C* InCallFunc_Array_Get_Item, bool InCallFunc_Less_IntInt_ReturnValue, int32 InCallFunc_Array_Add_ReturnValue, bool InCallFunc_IsValid_ReturnValue, bool InCallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Comp_Audio_Pool_Manager_C", "GetCritterValidFoliage");

	Params::UComp_Audio_Pool_Manager_C_GetCritterValidFoliage_Params Parms{};

	Parms.LocalCritterValidFoliage = InLocalCritterValidFoliage;
	Parms.Temp_int_Array_Index_Variable = InTemp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = InTemp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = InCallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Set_ToArray_Result = InCallFunc_Set_ToArray_Result;
	Parms.CallFunc_Array_Length_ReturnValue = InCallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = InCallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = InCallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = InCallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = InCallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = InCallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (InCritterValidFoliage != nullptr)
		*InCritterValidFoliage = Parms.CritterValidFoliage;

}


// Function Comp_Audio_Pool_Manager.Comp_Audio_Pool_Manager_C.GetAvailableInsectEmitter
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_AudioPool_RandomLoop_C*  Emitter                                                          (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Found                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<struct FVector, class UObject*>InsectLocations                                                  (Edit, BlueprintVisible)
// bool                               EmitterFound                                                     (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_AudioPool_RandomLoop_C*  EmitterLocal                                                     (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABP_AudioPool_RandomLoop_C*>CallFunc_Set_ToArray_Result                                      (ReferenceParm)
// TArray<class ABP_AudioPool_RandomLoop_C*>CallFunc_Set_ToArray_Result_1                                    (ReferenceParm)
// TArray<class AActor*>              CallFunc_SortActorsByClosest_ReturnValue                         (ReferenceParm)
// class ABP_AudioPool_RandomLoop_C*  CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_Array_Get_Item_1                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_AudioPool_RandomLoop_C*  K2Node_DynamicCast_AsBP_Audio_Pool_Random_Loop                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UComp_Audio_Pool_Manager_C::GetAvailableInsectEmitter(class ABP_AudioPool_RandomLoop_C** InEmitter, bool* InFound, TMap<struct FVector, class UObject*> InInsectLocations, bool InEmitterFound, class ABP_AudioPool_RandomLoop_C* InEmitterLocal, bool InTemp_bool_True_if_break_was_hit_Variable, int32 InTemp_int_Array_Index_Variable, bool InCallFunc_Not_PreBool_ReturnValue, int32 InTemp_int_Loop_Counter_Variable, int32 InCallFunc_Add_IntInt_ReturnValue, TArray<class ABP_AudioPool_RandomLoop_C*>& InCallFunc_Set_ToArray_Result, TArray<class ABP_AudioPool_RandomLoop_C*>& InCallFunc_Set_ToArray_Result_1, TArray<class AActor*>& InCallFunc_SortActorsByClosest_ReturnValue, class ABP_AudioPool_RandomLoop_C* InCallFunc_Array_Get_Item, int32 InCallFunc_Array_LastIndex_ReturnValue, class AActor* InCallFunc_Array_Get_Item_1, class ABP_AudioPool_RandomLoop_C* InK2Node_DynamicCast_AsBP_Audio_Pool_Random_Loop, bool InK2Node_DynamicCast_bSuccess, int32 InCallFunc_Array_Length_ReturnValue, bool InCallFunc_Less_IntInt_ReturnValue, bool InCallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Comp_Audio_Pool_Manager_C", "GetAvailableInsectEmitter");

	Params::UComp_Audio_Pool_Manager_C_GetAvailableInsectEmitter_Params Parms{};

	Parms.InsectLocations = InInsectLocations;
	Parms.EmitterFound = InEmitterFound;
	Parms.EmitterLocal = InEmitterLocal;
	Parms.Temp_bool_True_if_break_was_hit_Variable = InTemp_bool_True_if_break_was_hit_Variable;
	Parms.Temp_int_Array_Index_Variable = InTemp_int_Array_Index_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = InCallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = InTemp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = InCallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Set_ToArray_Result = InCallFunc_Set_ToArray_Result;
	Parms.CallFunc_Set_ToArray_Result_1 = InCallFunc_Set_ToArray_Result_1;
	Parms.CallFunc_SortActorsByClosest_ReturnValue = InCallFunc_SortActorsByClosest_ReturnValue;
	Parms.CallFunc_Array_Get_Item = InCallFunc_Array_Get_Item;
	Parms.CallFunc_Array_LastIndex_ReturnValue = InCallFunc_Array_LastIndex_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = InCallFunc_Array_Get_Item_1;
	Parms.K2Node_DynamicCast_AsBP_Audio_Pool_Random_Loop = InK2Node_DynamicCast_AsBP_Audio_Pool_Random_Loop;
	Parms.K2Node_DynamicCast_bSuccess = InK2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_Length_ReturnValue = InCallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = InCallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = InCallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (InEmitter != nullptr)
		*InEmitter = Parms.Emitter;

	if (InFound != nullptr)
		*InFound = Parms.Found;

}


// Function Comp_Audio_Pool_Manager.Comp_Audio_Pool_Manager_C.GetAvailableStaticLoopEmitter
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_AudioPool_StaticLoop_C*  Output                                                           (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Available                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Break                                                            (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_AudioPool_StaticLoop_C*  FoliageActor                                                     (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// double                             LDistance                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABP_AudioPool_StaticLoop_C*>CallFunc_Set_ToArray_Result                                      (ReferenceParm)
// class ABP_AudioPool_StaticLoop_C*  CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Set_Length_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetValeriaAudioListenerPosition_OutLocation             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetValeriaAudioListenerPosition_OutFrontDir             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetValeriaAudioListenerPosition_OutRightDir             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABP_AudioPool_StaticLoop_C*>CallFunc_Set_ToArray_Result_1                                    (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_AudioPool_StaticLoop_C*  CallFunc_Array_Get_Item_1                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetMaxAttenuationRadius_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Vector_Distance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SafeDivide_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SafeDivide_B_ImplicitCast                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UComp_Audio_Pool_Manager_C::GetAvailableStaticLoopEmitter(class ABP_AudioPool_StaticLoop_C** InOutput, bool* InAvailable, bool InBreak, class ABP_AudioPool_StaticLoop_C* InFoliageActor, double InLDistance, int32 InTemp_int_Array_Index_Variable, bool InCallFunc_Greater_DoubleDouble_ReturnValue, TArray<class ABP_AudioPool_StaticLoop_C*>& InCallFunc_Set_ToArray_Result, class ABP_AudioPool_StaticLoop_C* InCallFunc_Array_Get_Item, int32 InCallFunc_Set_Length_ReturnValue, const struct FVector& InCallFunc_GetValeriaAudioListenerPosition_OutLocation, const struct FVector& InCallFunc_GetValeriaAudioListenerPosition_OutFrontDir, const struct FVector& InCallFunc_GetValeriaAudioListenerPosition_OutRightDir, bool InCallFunc_Greater_IntInt_ReturnValue, int32 InTemp_int_Loop_Counter_Variable, int32 InCallFunc_Add_IntInt_ReturnValue, bool InCallFunc_IsValid_ReturnValue, TArray<class ABP_AudioPool_StaticLoop_C*>& InCallFunc_Set_ToArray_Result_1, int32 InCallFunc_Array_Length_ReturnValue, class ABP_AudioPool_StaticLoop_C* InCallFunc_Array_Get_Item_1, bool InCallFunc_Less_IntInt_ReturnValue, float InCallFunc_GetMaxAttenuationRadius_ReturnValue, const struct FVector& InCallFunc_K2_GetActorLocation_ReturnValue, double InCallFunc_Vector_Distance_ReturnValue, double InCallFunc_SafeDivide_ReturnValue, bool InCallFunc_Greater_DoubleDouble_ReturnValue_1, double InCallFunc_SafeDivide_B_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Comp_Audio_Pool_Manager_C", "GetAvailableStaticLoopEmitter");

	Params::UComp_Audio_Pool_Manager_C_GetAvailableStaticLoopEmitter_Params Parms{};

	Parms.Break = InBreak;
	Parms.FoliageActor = InFoliageActor;
	Parms.LDistance = InLDistance;
	Parms.Temp_int_Array_Index_Variable = InTemp_int_Array_Index_Variable;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = InCallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_Set_ToArray_Result = InCallFunc_Set_ToArray_Result;
	Parms.CallFunc_Array_Get_Item = InCallFunc_Array_Get_Item;
	Parms.CallFunc_Set_Length_ReturnValue = InCallFunc_Set_Length_ReturnValue;
	Parms.CallFunc_GetValeriaAudioListenerPosition_OutLocation = InCallFunc_GetValeriaAudioListenerPosition_OutLocation;
	Parms.CallFunc_GetValeriaAudioListenerPosition_OutFrontDir = InCallFunc_GetValeriaAudioListenerPosition_OutFrontDir;
	Parms.CallFunc_GetValeriaAudioListenerPosition_OutRightDir = InCallFunc_GetValeriaAudioListenerPosition_OutRightDir;
	Parms.CallFunc_Greater_IntInt_ReturnValue = InCallFunc_Greater_IntInt_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = InTemp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = InCallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = InCallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Set_ToArray_Result_1 = InCallFunc_Set_ToArray_Result_1;
	Parms.CallFunc_Array_Length_ReturnValue = InCallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = InCallFunc_Array_Get_Item_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = InCallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetMaxAttenuationRadius_ReturnValue = InCallFunc_GetMaxAttenuationRadius_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = InCallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_Vector_Distance_ReturnValue = InCallFunc_Vector_Distance_ReturnValue;
	Parms.CallFunc_SafeDivide_ReturnValue = InCallFunc_SafeDivide_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue_1 = InCallFunc_Greater_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_SafeDivide_B_ImplicitCast = InCallFunc_SafeDivide_B_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (InOutput != nullptr)
		*InOutput = Parms.Output;

	if (InAvailable != nullptr)
		*InAvailable = Parms.Available;

}


// Function Comp_Audio_Pool_Manager.Comp_Audio_Pool_Manager_C.GetClosestInsectObjects
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class ABP_Env_Audio_Pool_Base_C*>ClosestInsectObjects                                             (Parm, OutParm)
// TArray<class ABP_Env_Audio_Pool_Base_C*>LClosestInsectObjects                                            (Edit, BlueprintVisible, DisableEditOnTemplate)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Env_Audio_Pool_Base_C*   CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UComp_Audio_Pool_Manager_C::GetClosestInsectObjects(TArray<class ABP_Env_Audio_Pool_Base_C*>* InClosestInsectObjects, const TArray<class ABP_Env_Audio_Pool_Base_C*>& InLClosestInsectObjects, bool InTemp_bool_True_if_break_was_hit_Variable, int32 InTemp_int_Array_Index_Variable, bool InCallFunc_Not_PreBool_ReturnValue, int32 InTemp_int_Loop_Counter_Variable, int32 InCallFunc_Add_IntInt_ReturnValue, int32 InCallFunc_Array_Length_ReturnValue, class ABP_Env_Audio_Pool_Base_C* InCallFunc_Array_Get_Item, bool InCallFunc_Less_IntInt_ReturnValue, int32 InCallFunc_Array_Add_ReturnValue, bool InCallFunc_BooleanAND_ReturnValue, int32 InCallFunc_Add_IntInt_ReturnValue_1, bool InCallFunc_GreaterEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Comp_Audio_Pool_Manager_C", "GetClosestInsectObjects");

	Params::UComp_Audio_Pool_Manager_C_GetClosestInsectObjects_Params Parms{};

	Parms.LClosestInsectObjects = InLClosestInsectObjects;
	Parms.Temp_bool_True_if_break_was_hit_Variable = InTemp_bool_True_if_break_was_hit_Variable;
	Parms.Temp_int_Array_Index_Variable = InTemp_int_Array_Index_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = InCallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = InTemp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = InCallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = InCallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = InCallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = InCallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = InCallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = InCallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = InCallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = InCallFunc_GreaterEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (InClosestInsectObjects != nullptr)
		*InClosestInsectObjects = Parms.ClosestInsectObjects;

}


// Function Comp_Audio_Pool_Manager.Comp_Audio_Pool_Manager_C.GetClosestStaticLoopObjects
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class ABP_Env_Audio_Pool_Base_C*>ClosestStaticLoopObjects                                         (Parm, OutParm)
// TArray<class ABP_Env_Audio_Pool_Base_C*>LClosestWindObjects                                              (Edit, BlueprintVisible, DisableEditOnTemplate)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Env_Audio_Pool_Base_C*   CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SelectInt_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UComp_Audio_Pool_Manager_C::GetClosestStaticLoopObjects(TArray<class ABP_Env_Audio_Pool_Base_C*>* InClosestStaticLoopObjects, const TArray<class ABP_Env_Audio_Pool_Base_C*>& InLClosestWindObjects, int32 InCallFunc_Array_Length_ReturnValue, int32 InTemp_int_Variable, class ABP_Env_Audio_Pool_Base_C* InCallFunc_Array_Get_Item, int32 InCallFunc_Add_IntInt_ReturnValue, int32 InCallFunc_Array_Add_ReturnValue, bool InCallFunc_Less_IntInt_ReturnValue, int32 InCallFunc_SelectInt_ReturnValue, int32 InCallFunc_Subtract_IntInt_ReturnValue, bool InCallFunc_LessEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Comp_Audio_Pool_Manager_C", "GetClosestStaticLoopObjects");

	Params::UComp_Audio_Pool_Manager_C_GetClosestStaticLoopObjects_Params Parms{};

	Parms.LClosestWindObjects = InLClosestWindObjects;
	Parms.CallFunc_Array_Length_ReturnValue = InCallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Variable = InTemp_int_Variable;
	Parms.CallFunc_Array_Get_Item = InCallFunc_Array_Get_Item;
	Parms.CallFunc_Add_IntInt_ReturnValue = InCallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = InCallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = InCallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_SelectInt_ReturnValue = InCallFunc_SelectInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = InCallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = InCallFunc_LessEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (InClosestStaticLoopObjects != nullptr)
		*InClosestStaticLoopObjects = Parms.ClosestStaticLoopObjects;

}


// Function Comp_Audio_Pool_Manager.Comp_Audio_Pool_Manager_C.GetClosestObjects
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class ABP_Env_Audio_Pool_Base_C*>ClosestFoliage                                                   (Parm, OutParm)
// TArray<class ABP_Env_Audio_Pool_Base_C*>SortedObjectsNear                                                (Edit, BlueprintVisible, DisableEditOnTemplate)
// TSet<class ABP_Env_Audio_Pool_Base_C*>LocalAllObjectsNear                                              (Edit, BlueprintVisible, DisableEditOnTemplate)
// TArray<struct FVector>             Closest                                                          (Edit, BlueprintVisible)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABP_Env_Audio_Pool_Base_C*>CallFunc_Set_ToArray_Result                                      (ReferenceParm)
// struct FVector                     CallFunc_GetValeriaAudioListenerPosition_OutLocation             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetValeriaAudioListenerPosition_OutFrontDir             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetValeriaAudioListenerPosition_OutRightDir             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              CallFunc_SortActorsByClosest_ReturnValue                         (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Env_Audio_Pool_Base_C*   K2Node_DynamicCast_AsBP_Env_Audio_Pool_Base                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UComp_Audio_Pool_Manager_C::GetClosestObjects(TArray<class ABP_Env_Audio_Pool_Base_C*>* InClosestFoliage, const TArray<class ABP_Env_Audio_Pool_Base_C*>& InSortedObjectsNear, TSet<class ABP_Env_Audio_Pool_Base_C*> InLocalAllObjectsNear, const TArray<struct FVector>& InClosest, int32 InTemp_int_Array_Index_Variable, int32 InTemp_int_Loop_Counter_Variable, int32 InCallFunc_Add_IntInt_ReturnValue, TArray<class ABP_Env_Audio_Pool_Base_C*>& InCallFunc_Set_ToArray_Result, const struct FVector& InCallFunc_GetValeriaAudioListenerPosition_OutLocation, const struct FVector& InCallFunc_GetValeriaAudioListenerPosition_OutFrontDir, const struct FVector& InCallFunc_GetValeriaAudioListenerPosition_OutRightDir, TArray<class AActor*>& InCallFunc_SortActorsByClosest_ReturnValue, int32 InCallFunc_Array_Length_ReturnValue, class AActor* InCallFunc_Array_Get_Item, bool InCallFunc_Less_IntInt_ReturnValue, class ABP_Env_Audio_Pool_Base_C* InK2Node_DynamicCast_AsBP_Env_Audio_Pool_Base, bool InK2Node_DynamicCast_bSuccess, int32 InCallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Comp_Audio_Pool_Manager_C", "GetClosestObjects");

	Params::UComp_Audio_Pool_Manager_C_GetClosestObjects_Params Parms{};

	Parms.SortedObjectsNear = InSortedObjectsNear;
	Parms.LocalAllObjectsNear = InLocalAllObjectsNear;
	Parms.Closest = InClosest;
	Parms.Temp_int_Array_Index_Variable = InTemp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = InTemp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = InCallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Set_ToArray_Result = InCallFunc_Set_ToArray_Result;
	Parms.CallFunc_GetValeriaAudioListenerPosition_OutLocation = InCallFunc_GetValeriaAudioListenerPosition_OutLocation;
	Parms.CallFunc_GetValeriaAudioListenerPosition_OutFrontDir = InCallFunc_GetValeriaAudioListenerPosition_OutFrontDir;
	Parms.CallFunc_GetValeriaAudioListenerPosition_OutRightDir = InCallFunc_GetValeriaAudioListenerPosition_OutRightDir;
	Parms.CallFunc_SortActorsByClosest_ReturnValue = InCallFunc_SortActorsByClosest_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = InCallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = InCallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = InCallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Env_Audio_Pool_Base = InK2Node_DynamicCast_AsBP_Env_Audio_Pool_Base;
	Parms.K2Node_DynamicCast_bSuccess = InK2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_Add_ReturnValue = InCallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (InClosestFoliage != nullptr)
		*InClosestFoliage = Parms.ClosestFoliage;

}


// Function Comp_Audio_Pool_Manager.Comp_Audio_Pool_Manager_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void UComp_Audio_Pool_Manager_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Comp_Audio_Pool_Manager_C", "ReceiveBeginPlay");

	Params::UComp_Audio_Pool_Manager_C_ReceiveBeginPlay_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function Comp_Audio_Pool_Manager.Comp_Audio_Pool_Manager_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UComp_Audio_Pool_Manager_C::ReceiveTick(float InDeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Comp_Audio_Pool_Manager_C", "ReceiveTick");

	Params::UComp_Audio_Pool_Manager_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = InDeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Comp_Audio_Pool_Manager.Comp_Audio_Pool_Manager_C.DrawDebugText
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UComp_Audio_Pool_Manager_C::DrawDebugText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Comp_Audio_Pool_Manager_C", "DrawDebugText");

	Params::UComp_Audio_Pool_Manager_C_DrawDebugText_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function Comp_Audio_Pool_Manager.Comp_Audio_Pool_Manager_C.AudioDebugFoliage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               On                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UComp_Audio_Pool_Manager_C::AudioDebugFoliage(bool InOn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Comp_Audio_Pool_Manager_C", "AudioDebugFoliage");

	Params::UComp_Audio_Pool_Manager_C_AudioDebugFoliage_Params Parms{};

	Parms.On = InOn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Comp_Audio_Pool_Manager.Comp_Audio_Pool_Manager_C.ExecuteUbergraph_Comp_Audio_Pool_Manager
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              Temp_object_Variable                                             (ConstParm, ReferenceParm)
// class ABP_AudioPool_StaticLoop_C*  CallFunc_GetAvailableStaticLoopEmitter_Output                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetAvailableStaticLoopEmitter_Available                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Set_Remove_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABP_Env_Audio_Pool_Base_C*>CallFunc_GetClosestObjects_ClosestFoliage                        (ReferenceParm)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABP_Env_Audio_Pool_Base_C*>CallFunc_GetClosestStaticLoopObjects_ClosestStaticLoopObjects    (ReferenceParm)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetValeriaAudioListenerPosition_OutLocation             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetValeriaAudioListenerPosition_OutFrontDir             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetValeriaAudioListenerPosition_OutRightDir             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EObjectTypeQuery>K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm)
// TArray<class AActor*>              CallFunc_SphereOverlapActors_OutActors                           (ReferenceParm)
// bool                               CallFunc_SphereOverlapActors_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_Env_Audio_Pool_Base_C*   K2Node_DynamicCast_AsBP_Env_Audio_Pool_Base                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_DynamicCast_AsPawn                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocallyControlled_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_AudioPool_OneShot_C*     CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Multiply_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_5                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_6                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_1                             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_Env_Audio_Pool_Base_C*   CallFunc_Array_Get_Item_1                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_AudioPool_RandomLoop_C*  CallFunc_FinishSpawningActor_ReturnValue_1                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_2                             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Set_Length_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_1                          (ZeroConstructor, HasGetValueTypeHash)
// class ABP_AudioPool_StaticLoop_C*  CallFunc_FinishSpawningActor_ReturnValue_2                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class ABP_Env_Audio_Pool_Base_C*>CallFunc_Set_ToArray_Result                                      (ReferenceParm)
// class ABP_Env_Audio_Pool_Base_C*   CallFunc_Array_Get_Item_2                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Set_Length_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class ABP_AudioPool_RandomLoop_C*>CallFunc_Set_ToArray_Result_1                                    (ReferenceParm)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_2                          (ZeroConstructor, HasGetValueTypeHash)
// class ABP_AudioPool_RandomLoop_C*  CallFunc_Array_Get_Item_3                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_5                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_6                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_On                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetComponentTickInterval_TickInterval_ImplicitCast      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_DrawDebugSphere_Duration_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_SetTimer_Time_ImplicitCast                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_DrawDebugSphere_Duration_ImplicitCast_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UComp_Audio_Pool_Manager_C::ExecuteUbergraph_Comp_Audio_Pool_Manager(int32 InEntryPoint, TArray<class AActor*>& InTemp_object_Variable, class ABP_AudioPool_StaticLoop_C* InCallFunc_GetAvailableStaticLoopEmitter_Output, bool InCallFunc_GetAvailableStaticLoopEmitter_Available, bool InCallFunc_Set_Remove_ReturnValue, TArray<class ABP_Env_Audio_Pool_Base_C*>& InCallFunc_GetClosestObjects_ClosestFoliage, int32 InTemp_int_Variable, int32 InCallFunc_Add_IntInt_ReturnValue, int32 InTemp_int_Loop_Counter_Variable, TArray<class ABP_Env_Audio_Pool_Base_C*>& InCallFunc_GetClosestStaticLoopObjects_ClosestStaticLoopObjects, int32 InCallFunc_Add_IntInt_ReturnValue_1, int32 InCallFunc_Array_Length_ReturnValue, bool InCallFunc_Less_IntInt_ReturnValue, const struct FTransform& InCallFunc_MakeTransform_ReturnValue, const struct FVector& InCallFunc_GetValeriaAudioListenerPosition_OutLocation, const struct FVector& InCallFunc_GetValeriaAudioListenerPosition_OutFrontDir, const struct FVector& InCallFunc_GetValeriaAudioListenerPosition_OutRightDir, TArray<enum class EObjectTypeQuery>& InK2Node_MakeArray_Array, TArray<class AActor*>& InCallFunc_SphereOverlapActors_OutActors, bool InCallFunc_SphereOverlapActors_ReturnValue, int32 InTemp_int_Array_Index_Variable, int32 InCallFunc_Array_Length_ReturnValue_1, class AActor* InCallFunc_Array_Get_Item, class ABP_Env_Audio_Pool_Base_C* InK2Node_DynamicCast_AsBP_Env_Audio_Pool_Base, bool InK2Node_DynamicCast_bSuccess, int32 InTemp_int_Loop_Counter_Variable_1, int32 InCallFunc_Add_IntInt_ReturnValue_2, int32 InTemp_int_Array_Index_Variable_1, int32 InTemp_int_Variable_1, int32 InCallFunc_Add_IntInt_ReturnValue_3, int32 InTemp_int_Loop_Counter_Variable_2, int32 InCallFunc_Add_IntInt_ReturnValue_4, int32 InTemp_int_Array_Index_Variable_2, float InK2Node_Event_DeltaSeconds, class AActor* InCallFunc_GetOwner_ReturnValue, class APawn* InK2Node_DynamicCast_AsPawn, bool InK2Node_DynamicCast_bSuccess_1, bool InCallFunc_IsLocallyControlled_ReturnValue, int32 InCallFunc_Subtract_IntInt_ReturnValue, class AActor* InCallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_AudioPool_OneShot_C* InCallFunc_FinishSpawningActor_ReturnValue, bool InCallFunc_IsServer_ReturnValue, bool InCallFunc_Not_PreBool_ReturnValue, bool InCallFunc_BooleanAND_ReturnValue, int32 InTemp_int_Variable_2, int32 InCallFunc_Multiply_IntInt_ReturnValue, bool InCallFunc_LessEqual_IntInt_ReturnValue, int32 InCallFunc_Add_IntInt_ReturnValue_5, bool InCallFunc_LessEqual_IntInt_ReturnValue_1, int32 InTemp_int_Loop_Counter_Variable_3, bool InCallFunc_Less_IntInt_ReturnValue_1, int32 InCallFunc_Add_IntInt_ReturnValue_6, bool InCallFunc_LessEqual_IntInt_ReturnValue_2, const struct FTransform& InCallFunc_MakeTransform_ReturnValue_1, int32 InTemp_int_Array_Index_Variable_3, class AActor* InCallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1, class ABP_Env_Audio_Pool_Base_C* InCallFunc_Array_Get_Item_1, bool InCallFunc_IsValid_ReturnValue, class ABP_AudioPool_RandomLoop_C* InCallFunc_FinishSpawningActor_ReturnValue_1, FDelegateProperty_ InK2Node_CreateDelegate_OutputDelegate, const class FString& InCallFunc_Conv_IntToString_ReturnValue, const struct FTransform& InCallFunc_MakeTransform_ReturnValue_2, class AActor* InCallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2, int32 InCallFunc_Set_Length_ReturnValue, const class FString& InCallFunc_Conv_IntToString_ReturnValue_1, class ABP_AudioPool_StaticLoop_C* InCallFunc_FinishSpawningActor_ReturnValue_2, TArray<class ABP_Env_Audio_Pool_Base_C*>& InCallFunc_Set_ToArray_Result, class ABP_Env_Audio_Pool_Base_C* InCallFunc_Array_Get_Item_2, int32 InCallFunc_Array_Length_ReturnValue_2, const struct FVector& InCallFunc_K2_GetActorLocation_ReturnValue, bool InCallFunc_Less_IntInt_ReturnValue_2, bool InCallFunc_IsValid_ReturnValue_1, int32 InCallFunc_Set_Length_ReturnValue_1, TArray<class ABP_AudioPool_RandomLoop_C*>& InCallFunc_Set_ToArray_Result_1, const class FString& InCallFunc_Conv_IntToString_ReturnValue_2, class ABP_AudioPool_RandomLoop_C* InCallFunc_Array_Get_Item_3, const class FString& InCallFunc_Concat_StrStr_ReturnValue, const struct FVector& InCallFunc_K2_GetActorLocation_ReturnValue_1, const class FString& InCallFunc_Concat_StrStr_ReturnValue_1, bool InCallFunc_IsValid_ReturnValue_2, const class FString& InCallFunc_Concat_StrStr_ReturnValue_2, const class FString& InCallFunc_Concat_StrStr_ReturnValue_3, int32 InCallFunc_Array_Length_ReturnValue_3, const class FString& InCallFunc_Concat_StrStr_ReturnValue_4, bool InCallFunc_Less_IntInt_ReturnValue_3, const class FString& InCallFunc_Concat_StrStr_ReturnValue_5, const class FString& InCallFunc_Concat_StrStr_ReturnValue_6, bool InK2Node_CustomEvent_On, double InCallFunc_SelectFloat_ReturnValue, const struct FTimerHandle& InCallFunc_K2_SetTimer_ReturnValue, const struct FVector& InCallFunc_K2_GetActorLocation_ReturnValue_2, float InCallFunc_SetComponentTickInterval_TickInterval_ImplicitCast, float InCallFunc_DrawDebugSphere_Duration_ImplicitCast, float InCallFunc_K2_SetTimer_Time_ImplicitCast, float InCallFunc_DrawDebugSphere_Duration_ImplicitCast_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Comp_Audio_Pool_Manager_C", "ExecuteUbergraph_Comp_Audio_Pool_Manager");

	Params::UComp_Audio_Pool_Manager_C_ExecuteUbergraph_Comp_Audio_Pool_Manager_Params Parms{};

	Parms.EntryPoint = InEntryPoint;
	Parms.Temp_object_Variable = InTemp_object_Variable;
	Parms.CallFunc_GetAvailableStaticLoopEmitter_Output = InCallFunc_GetAvailableStaticLoopEmitter_Output;
	Parms.CallFunc_GetAvailableStaticLoopEmitter_Available = InCallFunc_GetAvailableStaticLoopEmitter_Available;
	Parms.CallFunc_Set_Remove_ReturnValue = InCallFunc_Set_Remove_ReturnValue;
	Parms.CallFunc_GetClosestObjects_ClosestFoliage = InCallFunc_GetClosestObjects_ClosestFoliage;
	Parms.Temp_int_Variable = InTemp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = InCallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = InTemp_int_Loop_Counter_Variable;
	Parms.CallFunc_GetClosestStaticLoopObjects_ClosestStaticLoopObjects = InCallFunc_GetClosestStaticLoopObjects_ClosestStaticLoopObjects;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = InCallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue = InCallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = InCallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = InCallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_GetValeriaAudioListenerPosition_OutLocation = InCallFunc_GetValeriaAudioListenerPosition_OutLocation;
	Parms.CallFunc_GetValeriaAudioListenerPosition_OutFrontDir = InCallFunc_GetValeriaAudioListenerPosition_OutFrontDir;
	Parms.CallFunc_GetValeriaAudioListenerPosition_OutRightDir = InCallFunc_GetValeriaAudioListenerPosition_OutRightDir;
	Parms.K2Node_MakeArray_Array = InK2Node_MakeArray_Array;
	Parms.CallFunc_SphereOverlapActors_OutActors = InCallFunc_SphereOverlapActors_OutActors;
	Parms.CallFunc_SphereOverlapActors_ReturnValue = InCallFunc_SphereOverlapActors_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = InTemp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Length_ReturnValue_1 = InCallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item = InCallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsBP_Env_Audio_Pool_Base = InK2Node_DynamicCast_AsBP_Env_Audio_Pool_Base;
	Parms.K2Node_DynamicCast_bSuccess = InK2Node_DynamicCast_bSuccess;
	Parms.Temp_int_Loop_Counter_Variable_1 = InTemp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = InCallFunc_Add_IntInt_ReturnValue_2;
	Parms.Temp_int_Array_Index_Variable_1 = InTemp_int_Array_Index_Variable_1;
	Parms.Temp_int_Variable_1 = InTemp_int_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = InCallFunc_Add_IntInt_ReturnValue_3;
	Parms.Temp_int_Loop_Counter_Variable_2 = InTemp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_4 = InCallFunc_Add_IntInt_ReturnValue_4;
	Parms.Temp_int_Array_Index_Variable_2 = InTemp_int_Array_Index_Variable_2;
	Parms.K2Node_Event_DeltaSeconds = InK2Node_Event_DeltaSeconds;
	Parms.CallFunc_GetOwner_ReturnValue = InCallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsPawn = InK2Node_DynamicCast_AsPawn;
	Parms.K2Node_DynamicCast_bSuccess_1 = InK2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsLocallyControlled_ReturnValue = InCallFunc_IsLocallyControlled_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = InCallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = InCallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = InCallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = InCallFunc_IsServer_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = InCallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = InCallFunc_BooleanAND_ReturnValue;
	Parms.Temp_int_Variable_2 = InTemp_int_Variable_2;
	Parms.CallFunc_Multiply_IntInt_ReturnValue = InCallFunc_Multiply_IntInt_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = InCallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_5 = InCallFunc_Add_IntInt_ReturnValue_5;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue_1 = InCallFunc_LessEqual_IntInt_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable_3 = InTemp_int_Loop_Counter_Variable_3;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = InCallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_6 = InCallFunc_Add_IntInt_ReturnValue_6;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue_2 = InCallFunc_LessEqual_IntInt_ReturnValue_2;
	Parms.CallFunc_MakeTransform_ReturnValue_1 = InCallFunc_MakeTransform_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable_3 = InTemp_int_Array_Index_Variable_3;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1 = InCallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_1 = InCallFunc_Array_Get_Item_1;
	Parms.CallFunc_IsValid_ReturnValue = InCallFunc_IsValid_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue_1 = InCallFunc_FinishSpawningActor_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = InK2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Conv_IntToString_ReturnValue = InCallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue_2 = InCallFunc_MakeTransform_ReturnValue_2;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2 = InCallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2;
	Parms.CallFunc_Set_Length_ReturnValue = InCallFunc_Set_Length_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue_1 = InCallFunc_Conv_IntToString_ReturnValue_1;
	Parms.CallFunc_FinishSpawningActor_ReturnValue_2 = InCallFunc_FinishSpawningActor_ReturnValue_2;
	Parms.CallFunc_Set_ToArray_Result = InCallFunc_Set_ToArray_Result;
	Parms.CallFunc_Array_Get_Item_2 = InCallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Length_ReturnValue_2 = InCallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = InCallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = InCallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_1 = InCallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Set_Length_ReturnValue_1 = InCallFunc_Set_Length_ReturnValue_1;
	Parms.CallFunc_Set_ToArray_Result_1 = InCallFunc_Set_ToArray_Result_1;
	Parms.CallFunc_Conv_IntToString_ReturnValue_2 = InCallFunc_Conv_IntToString_ReturnValue_2;
	Parms.CallFunc_Array_Get_Item_3 = InCallFunc_Array_Get_Item_3;
	Parms.CallFunc_Concat_StrStr_ReturnValue = InCallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = InCallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = InCallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = InCallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = InCallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = InCallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_Array_Length_ReturnValue_3 = InCallFunc_Array_Length_ReturnValue_3;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = InCallFunc_Concat_StrStr_ReturnValue_4;
	Parms.CallFunc_Less_IntInt_ReturnValue_3 = InCallFunc_Less_IntInt_ReturnValue_3;
	Parms.CallFunc_Concat_StrStr_ReturnValue_5 = InCallFunc_Concat_StrStr_ReturnValue_5;
	Parms.CallFunc_Concat_StrStr_ReturnValue_6 = InCallFunc_Concat_StrStr_ReturnValue_6;
	Parms.K2Node_CustomEvent_On = InK2Node_CustomEvent_On;
	Parms.CallFunc_SelectFloat_ReturnValue = InCallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_K2_SetTimer_ReturnValue = InCallFunc_K2_SetTimer_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_2 = InCallFunc_K2_GetActorLocation_ReturnValue_2;
	Parms.CallFunc_SetComponentTickInterval_TickInterval_ImplicitCast = InCallFunc_SetComponentTickInterval_TickInterval_ImplicitCast;
	Parms.CallFunc_DrawDebugSphere_Duration_ImplicitCast = InCallFunc_DrawDebugSphere_Duration_ImplicitCast;
	Parms.CallFunc_K2_SetTimer_Time_ImplicitCast = InCallFunc_K2_SetTimer_Time_ImplicitCast;
	Parms.CallFunc_DrawDebugSphere_Duration_ImplicitCast_1 = InCallFunc_DrawDebugSphere_Duration_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
