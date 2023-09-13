#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass ISMFunctionLibrary.ISMFunctionLibrary_C
class UISMFunctionLibrary_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UISMFunctionLibrary_C* GetDefaultObj();

	void GetGridXYForLocation(const struct FVector& Location, class UObject* __WorldContext, int32* GridX, int32* GridY, double GridSize, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, double CallFunc_Divide_DoubleDouble_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue_1, int32 CallFunc_FTrunc_ReturnValue_1);
	void FindISMActor(class UObject* __WorldContext, class AActor** ISMActor, TSoftObjectPtr<class AActor> CallFunc_GetRuntimeISMActor_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess);
	void RemoveInstanceOfStaticMeshFromISM(class UStaticMesh* StaticMesh, const struct FVector& Location, class UObject* __WorldContext, class AActor* ISMActor, class UHierarchicalInstancedStaticMeshComponent* ISMComponent, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_FindISMActor_ISMActor, class UHierarchicalInstancedStaticMeshComponent* CallFunc_Find_ISMComponent_ISMComponent, bool CallFunc_IsValid_ReturnValue_1);
	void AddInstanceOfStaticMeshToISM(class UStaticMesh* StaticMesh, const struct FVector& TransformLocation, const struct FRotator& TransformRotation, const struct FVector& TransformScale, class UObject* __WorldContext, bool* Success, class AActor* ISMActor, class UHierarchicalInstancedStaticMeshComponent* ISMComponent, class AActor* CallFunc_FindISMActor_ISMActor, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UHierarchicalInstancedStaticMeshComponent* CallFunc_Find_or_Create_ISMComponent_ISMComponent);
	void RemoveInstanceFromISM(class UHierarchicalInstancedStaticMeshComponent* ISMComponent, const struct FVector& Location, class UObject* __WorldContext, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, int32 Temp_int_Array_Index_Variable, const struct FBox& CallFunc_MakeBox_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<int32>& CallFunc_GetInstancesOverlappingBox_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_RemoveInstance_ReturnValue);
	void AddInstanceToISM(class UHierarchicalInstancedStaticMeshComponent* ISMComponent, const struct FVector& TransformLocation, const struct FRotator& TransformRotation, const struct FVector& TransformScale, class UObject* __WorldContext, const struct FTransform& CallFunc_MakeTransform_ReturnValue, int32 CallFunc_AddInstance_ReturnValue);
	void Create_ISMComponent(class AActor* ISMActor, class UStaticMesh* StaticMesh, class UObject* __WorldContext, class UHierarchicalInstancedStaticMeshComponent** ISMComponent, class UHierarchicalInstancedStaticMeshComponent* NewISMComponent, class UHierarchicalInstancedStaticMeshComponent* CallFunc_AddComponentByClass_ReturnValue, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue);
	void Find_ISMComponent(class AActor* ISMActor, class UStaticMesh* StaticMesh, const struct FVector& Location, class UObject* __WorldContext, class UHierarchicalInstancedStaticMeshComponent** ISMComponent, const struct FVector& CurrentComponentLocation, class UHierarchicalInstancedStaticMeshComponent* CurrentISMComponent, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, int32 Temp_int_Array_Index_Variable, TArray<class USceneComponent*>& CallFunc_GetChildrenComponents_Children, class USceneComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UHierarchicalInstancedStaticMeshComponent* K2Node_DynamicCast_AsHierarchical_Instanced_Static_Mesh_Component, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetGridXYForLocation_GridX, int32 CallFunc_GetGridXYForLocation_GridY, int32 Temp_int_Loop_Counter_Variable, const struct FTransform& CallFunc_GetInstanceTransform_OutInstanceTransform, bool CallFunc_GetInstanceTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_GetGridXYForLocation_GridX_1, int32 CallFunc_GetGridXYForLocation_GridY_1, int32 CallFunc_GetInstanceCount_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
	void Find_or_Create_ISMComponent(class AActor* ISMActor, class UStaticMesh* StaticMesh, const struct FVector& Location, class UObject* __WorldContext, class UHierarchicalInstancedStaticMeshComponent** ISMComponent, class UHierarchicalInstancedStaticMeshComponent* FoundISMComponent, class UHierarchicalInstancedStaticMeshComponent* CallFunc_Find_ISMComponent_ISMComponent, class UHierarchicalInstancedStaticMeshComponent* CallFunc_Create_ISMComponent_ISMComponent, bool CallFunc_IsValid_ReturnValue);
};

}


