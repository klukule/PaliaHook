#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ISMFunctionLibrary.ISMFunctionLibrary_C
// (None)

class UClass* UISMFunctionLibrary_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ISMFunctionLibrary_C");

	return Clss;
}


// ISMFunctionLibrary_C ISMFunctionLibrary.Default__ISMFunctionLibrary_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UISMFunctionLibrary_C* UISMFunctionLibrary_C::GetDefaultObj()
{
	static class UISMFunctionLibrary_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UISMFunctionLibrary_C*>(UISMFunctionLibrary_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ISMFunctionLibrary.ISMFunctionLibrary_C.GetGridXYForLocation
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                     Location                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              GridX                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              GridY                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             GridSize                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UISMFunctionLibrary_C::GetGridXYForLocation(const struct FVector& Location, class UObject* __WorldContext, int32* GridX, int32* GridY, double GridSize, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, double CallFunc_Divide_DoubleDouble_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue_1, int32 CallFunc_FTrunc_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ISMFunctionLibrary_C", "GetGridXYForLocation");

	Params::UISMFunctionLibrary_C_GetGridXYForLocation_Params Parms{};

	Parms.Location = Location;
	Parms.__WorldContext = __WorldContext;
	Parms.GridSize = GridSize;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue_1 = CallFunc_Divide_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_FTrunc_ReturnValue_1 = CallFunc_FTrunc_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (GridX != nullptr)
		*GridX = Parms.GridX;

	if (GridY != nullptr)
		*GridY = Parms.GridY;

}


// Function ISMFunctionLibrary.ISMFunctionLibrary_C.FindISMActor
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      ISMActor                                                         (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class AActor>       CallFunc_GetRuntimeISMActor_ReturnValue                          (UObjectWrapper, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_DynamicCast_AsActor                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UISMFunctionLibrary_C::FindISMActor(class UObject* __WorldContext, class AActor** ISMActor, TSoftObjectPtr<class AActor> CallFunc_GetRuntimeISMActor_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ISMFunctionLibrary_C", "FindISMActor");

	Params::UISMFunctionLibrary_C_FindISMActor_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetRuntimeISMActor_ReturnValue = CallFunc_GetRuntimeISMActor_ReturnValue;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsActor = K2Node_DynamicCast_AsActor;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (ISMActor != nullptr)
		*ISMActor = Parms.ISMActor;

}


// Function ISMFunctionLibrary.ISMFunctionLibrary_C.RemoveInstanceOfStaticMeshFromISM
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStaticMesh*                 StaticMesh                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Location                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      ISMActor                                                         (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// class UHierarchicalInstancedStaticMeshComponent*ISMComponent                                                     (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_FindISMActor_ISMActor                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UHierarchicalInstancedStaticMeshComponent*CallFunc_Find_ISMComponent_ISMComponent                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UISMFunctionLibrary_C::RemoveInstanceOfStaticMeshFromISM(class UStaticMesh* StaticMesh, const struct FVector& Location, class UObject* __WorldContext, class AActor* ISMActor, class UHierarchicalInstancedStaticMeshComponent* ISMComponent, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_FindISMActor_ISMActor, class UHierarchicalInstancedStaticMeshComponent* CallFunc_Find_ISMComponent_ISMComponent, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ISMFunctionLibrary_C", "RemoveInstanceOfStaticMeshFromISM");

	Params::UISMFunctionLibrary_C_RemoveInstanceOfStaticMeshFromISM_Params Parms{};

	Parms.StaticMesh = StaticMesh;
	Parms.Location = Location;
	Parms.__WorldContext = __WorldContext;
	Parms.ISMActor = ISMActor;
	Parms.ISMComponent = ISMComponent;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_FindISMActor_ISMActor = CallFunc_FindISMActor_ISMActor;
	Parms.CallFunc_Find_ISMComponent_ISMComponent = CallFunc_Find_ISMComponent_ISMComponent;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ISMFunctionLibrary.ISMFunctionLibrary_C.AddInstanceOfStaticMeshToISM
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStaticMesh*                 StaticMesh                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     TransformLocation                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    TransformRotation                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     TransformScale                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      ISMActor                                                         (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// class UHierarchicalInstancedStaticMeshComponent*ISMComponent                                                     (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_FindISMActor_ISMActor                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHierarchicalInstancedStaticMeshComponent*CallFunc_Find_or_Create_ISMComponent_ISMComponent                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UISMFunctionLibrary_C::AddInstanceOfStaticMeshToISM(class UStaticMesh* StaticMesh, const struct FVector& TransformLocation, const struct FRotator& TransformRotation, const struct FVector& TransformScale, class UObject* __WorldContext, bool* Success, class AActor* ISMActor, class UHierarchicalInstancedStaticMeshComponent* ISMComponent, class AActor* CallFunc_FindISMActor_ISMActor, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UHierarchicalInstancedStaticMeshComponent* CallFunc_Find_or_Create_ISMComponent_ISMComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ISMFunctionLibrary_C", "AddInstanceOfStaticMeshToISM");

	Params::UISMFunctionLibrary_C_AddInstanceOfStaticMeshToISM_Params Parms{};

	Parms.StaticMesh = StaticMesh;
	Parms.TransformLocation = TransformLocation;
	Parms.TransformRotation = TransformRotation;
	Parms.TransformScale = TransformScale;
	Parms.__WorldContext = __WorldContext;
	Parms.ISMActor = ISMActor;
	Parms.ISMComponent = ISMComponent;
	Parms.CallFunc_FindISMActor_ISMActor = CallFunc_FindISMActor_ISMActor;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Find_or_Create_ISMComponent_ISMComponent = CallFunc_Find_or_Create_ISMComponent_ISMComponent;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function ISMFunctionLibrary.ISMFunctionLibrary_C.RemoveInstanceFromISM
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UHierarchicalInstancedStaticMeshComponent*ISMComponent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Location                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBox                        CallFunc_MakeBox_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<int32>                      CallFunc_GetInstancesOverlappingBox_ReturnValue                  (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RemoveInstance_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UISMFunctionLibrary_C::RemoveInstanceFromISM(class UHierarchicalInstancedStaticMeshComponent* ISMComponent, const struct FVector& Location, class UObject* __WorldContext, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, int32 Temp_int_Array_Index_Variable, const struct FBox& CallFunc_MakeBox_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<int32>& CallFunc_GetInstancesOverlappingBox_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_RemoveInstance_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ISMFunctionLibrary_C", "RemoveInstanceFromISM");

	Params::UISMFunctionLibrary_C_RemoveInstanceFromISM_Params Parms{};

	Parms.ISMComponent = ISMComponent;
	Parms.Location = Location;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_MakeBox_ReturnValue = CallFunc_MakeBox_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetInstancesOverlappingBox_ReturnValue = CallFunc_GetInstancesOverlappingBox_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_RemoveInstance_ReturnValue = CallFunc_RemoveInstance_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ISMFunctionLibrary.ISMFunctionLibrary_C.AddInstanceToISM
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UHierarchicalInstancedStaticMeshComponent*ISMComponent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FVector                     TransformLocation                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    TransformRotation                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     TransformScale                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_AddInstance_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UISMFunctionLibrary_C::AddInstanceToISM(class UHierarchicalInstancedStaticMeshComponent* ISMComponent, const struct FVector& TransformLocation, const struct FRotator& TransformRotation, const struct FVector& TransformScale, class UObject* __WorldContext, const struct FTransform& CallFunc_MakeTransform_ReturnValue, int32 CallFunc_AddInstance_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ISMFunctionLibrary_C", "AddInstanceToISM");

	Params::UISMFunctionLibrary_C_AddInstanceToISM_Params Parms{};

	Parms.ISMComponent = ISMComponent;
	Parms.TransformLocation = TransformLocation;
	Parms.TransformRotation = TransformRotation;
	Parms.TransformScale = TransformScale;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_AddInstance_ReturnValue = CallFunc_AddInstance_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ISMFunctionLibrary.ISMFunctionLibrary_C.Create ISMComponent
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      ISMActor                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UStaticMesh*                 StaticMesh                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UHierarchicalInstancedStaticMeshComponent*ISMComponent                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UHierarchicalInstancedStaticMeshComponent*NewISMComponent                                                  (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UHierarchicalInstancedStaticMeshComponent*CallFunc_AddComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             CallFunc_K2_GetRootComponent_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UISMFunctionLibrary_C::Create_ISMComponent(class AActor* ISMActor, class UStaticMesh* StaticMesh, class UObject* __WorldContext, class UHierarchicalInstancedStaticMeshComponent** ISMComponent, class UHierarchicalInstancedStaticMeshComponent* NewISMComponent, class UHierarchicalInstancedStaticMeshComponent* CallFunc_AddComponentByClass_ReturnValue, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ISMFunctionLibrary_C", "Create ISMComponent");

	Params::UISMFunctionLibrary_C_Create_ISMComponent_Params Parms{};

	Parms.ISMActor = ISMActor;
	Parms.StaticMesh = StaticMesh;
	Parms.__WorldContext = __WorldContext;
	Parms.NewISMComponent = NewISMComponent;
	Parms.CallFunc_AddComponentByClass_ReturnValue = CallFunc_AddComponentByClass_ReturnValue;
	Parms.CallFunc_K2_GetRootComponent_ReturnValue = CallFunc_K2_GetRootComponent_ReturnValue;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue = CallFunc_K2_AttachToComponent_ReturnValue;
	Parms.CallFunc_SetStaticMesh_ReturnValue = CallFunc_SetStaticMesh_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ISMComponent != nullptr)
		*ISMComponent = Parms.ISMComponent;

}


// Function ISMFunctionLibrary.ISMFunctionLibrary_C.Find ISMComponent
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      ISMActor                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UStaticMesh*                 StaticMesh                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Location                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UHierarchicalInstancedStaticMeshComponent*ISMComponent                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CurrentComponentLocation                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHierarchicalInstancedStaticMeshComponent*CurrentISMComponent                                              (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             CallFunc_K2_GetRootComponent_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class USceneComponent*>     CallFunc_GetChildrenComponents_Children                          (ReferenceParm, ContainsInstancedReference)
// class USceneComponent*             CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHierarchicalInstancedStaticMeshComponent*K2Node_DynamicCast_AsHierarchical_Instanced_Static_Mesh_Component(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetGridXYForLocation_GridX                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetGridXYForLocation_GridY                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetInstanceTransform_OutInstanceTransform               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetInstanceTransform_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetGridXYForLocation_GridX_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetGridXYForLocation_GridY_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetInstanceCount_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UISMFunctionLibrary_C::Find_ISMComponent(class AActor* ISMActor, class UStaticMesh* StaticMesh, const struct FVector& Location, class UObject* __WorldContext, class UHierarchicalInstancedStaticMeshComponent** ISMComponent, const struct FVector& CurrentComponentLocation, class UHierarchicalInstancedStaticMeshComponent* CurrentISMComponent, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, int32 Temp_int_Array_Index_Variable, TArray<class USceneComponent*>& CallFunc_GetChildrenComponents_Children, class USceneComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UHierarchicalInstancedStaticMeshComponent* K2Node_DynamicCast_AsHierarchical_Instanced_Static_Mesh_Component, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetGridXYForLocation_GridX, int32 CallFunc_GetGridXYForLocation_GridY, int32 Temp_int_Loop_Counter_Variable, const struct FTransform& CallFunc_GetInstanceTransform_OutInstanceTransform, bool CallFunc_GetInstanceTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_GetGridXYForLocation_GridX_1, int32 CallFunc_GetGridXYForLocation_GridY_1, int32 CallFunc_GetInstanceCount_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ISMFunctionLibrary_C", "Find ISMComponent");

	Params::UISMFunctionLibrary_C_Find_ISMComponent_Params Parms{};

	Parms.ISMActor = ISMActor;
	Parms.StaticMesh = StaticMesh;
	Parms.Location = Location;
	Parms.__WorldContext = __WorldContext;
	Parms.CurrentComponentLocation = CurrentComponentLocation;
	Parms.CurrentISMComponent = CurrentISMComponent;
	Parms.CallFunc_K2_GetRootComponent_ReturnValue = CallFunc_K2_GetRootComponent_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetChildrenComponents_Children = CallFunc_GetChildrenComponents_Children;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_DynamicCast_AsHierarchical_Instanced_Static_Mesh_Component = K2Node_DynamicCast_AsHierarchical_Instanced_Static_Mesh_Component;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetGridXYForLocation_GridX = CallFunc_GetGridXYForLocation_GridX;
	Parms.CallFunc_GetGridXYForLocation_GridY = CallFunc_GetGridXYForLocation_GridY;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_GetInstanceTransform_OutInstanceTransform = CallFunc_GetInstanceTransform_OutInstanceTransform;
	Parms.CallFunc_GetInstanceTransform_ReturnValue = CallFunc_GetInstanceTransform_ReturnValue;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetGridXYForLocation_GridX_1 = CallFunc_GetGridXYForLocation_GridX_1;
	Parms.CallFunc_GetGridXYForLocation_GridY_1 = CallFunc_GetGridXYForLocation_GridY_1;
	Parms.CallFunc_GetInstanceCount_ReturnValue = CallFunc_GetInstanceCount_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_2 = CallFunc_EqualEqual_IntInt_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ISMComponent != nullptr)
		*ISMComponent = Parms.ISMComponent;

}


// Function ISMFunctionLibrary.ISMFunctionLibrary_C.Find or Create ISMComponent
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      ISMActor                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UStaticMesh*                 StaticMesh                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Location                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UHierarchicalInstancedStaticMeshComponent*ISMComponent                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UHierarchicalInstancedStaticMeshComponent*FoundISMComponent                                                (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UHierarchicalInstancedStaticMeshComponent*CallFunc_Find_ISMComponent_ISMComponent                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UHierarchicalInstancedStaticMeshComponent*CallFunc_Create_ISMComponent_ISMComponent                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UISMFunctionLibrary_C::Find_or_Create_ISMComponent(class AActor* ISMActor, class UStaticMesh* StaticMesh, const struct FVector& Location, class UObject* __WorldContext, class UHierarchicalInstancedStaticMeshComponent** ISMComponent, class UHierarchicalInstancedStaticMeshComponent* FoundISMComponent, class UHierarchicalInstancedStaticMeshComponent* CallFunc_Find_ISMComponent_ISMComponent, class UHierarchicalInstancedStaticMeshComponent* CallFunc_Create_ISMComponent_ISMComponent, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ISMFunctionLibrary_C", "Find or Create ISMComponent");

	Params::UISMFunctionLibrary_C_Find_or_Create_ISMComponent_Params Parms{};

	Parms.ISMActor = ISMActor;
	Parms.StaticMesh = StaticMesh;
	Parms.Location = Location;
	Parms.__WorldContext = __WorldContext;
	Parms.FoundISMComponent = FoundISMComponent;
	Parms.CallFunc_Find_ISMComponent_ISMComponent = CallFunc_Find_ISMComponent_ISMComponent;
	Parms.CallFunc_Create_ISMComponent_ISMComponent = CallFunc_Create_ISMComponent_ISMComponent;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ISMComponent != nullptr)
		*ISMComponent = Parms.ISMComponent;

}

}


