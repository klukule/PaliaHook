#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class ProceduralMeshComponent.KismetProceduralMeshLibrary
class UKismetProceduralMeshLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("KismetProceduralMeshLibrary");
		return Clss;
	}

	void SliceProceduralMesh(class UProceduralMeshComponent* InInProcMesh, const struct FVector& InPlanePosition, const struct FVector& InPlaneNormal, bool InbCreateOtherHalf, class UProceduralMeshComponent** InOutOtherHalfProcMesh, enum class EProcMeshSliceCapOption InCapOption, class UMaterialInterface* InCapMaterial);
	void GetSectionFromStaticMesh(class UStaticMesh* InInMesh, int32 InLODIndex, int32 InSectionIndex, TArray<struct FVector>* InVertices, TArray<int32>* InTriangles, TArray<struct FVector>* InNormals, TArray<struct FVector2D>* InUVs, TArray<struct FProcMeshTangent>* InTangents);
	void GetSectionFromProceduralMesh(class UProceduralMeshComponent* InInProcMesh, int32 InSectionIndex, TArray<struct FVector>* InVertices, TArray<int32>* InTriangles, TArray<struct FVector>* InNormals, TArray<struct FVector2D>* InUVs, TArray<struct FProcMeshTangent>* InTangents);
	void GenerateBoxMesh(const struct FVector& InBoxRadius, TArray<struct FVector>* InVertices, TArray<int32>* InTriangles, TArray<struct FVector>* InNormals, TArray<struct FVector2D>* InUVs, TArray<struct FProcMeshTangent>* InTangents);
	void CreateGridMeshWelded(int32 InNumX, int32 InNumY, TArray<int32>* InTriangles, TArray<struct FVector>* InVertices, TArray<struct FVector2D>* InUVs, float InGridSpacing);
	void CreateGridMeshTriangles(int32 InNumX, int32 InNumY, bool InbWinding, TArray<int32>* InTriangles);
	void CreateGridMeshSplit(int32 InNumX, int32 InNumY, TArray<int32>* InTriangles, TArray<struct FVector>* InVertices, TArray<struct FVector2D>* InUVs, TArray<struct FVector2D>* InUV1s, float InGridSpacing);
	void CopyProceduralMeshFromStaticMeshComponent(class UStaticMeshComponent* InStaticMeshComponent, int32 InLODIndex, class UProceduralMeshComponent* InProcMeshComponent, bool InbCreateCollision);
	void ConvertQuadToTriangles(TArray<int32>& InTriangles, int32 InVert0, int32 InVert1, int32 InVert2, int32 InVert3);
	void CalculateTangentsForMesh(TArray<struct FVector>& InVertices, TArray<int32>& InTriangles, TArray<struct FVector2D>& InUVs, TArray<struct FVector>* InNormals, TArray<struct FProcMeshTangent>* InTangents);
};

// 0x80 (0x5F0 - 0x570)
// Class ProceduralMeshComponent.ProceduralMeshComponent
class UProceduralMeshComponent : public UMeshComponent
{
public:
	uint8                                        Pad_18D6[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bUseComplexAsSimpleCollision;                      // 0x578(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseAsyncCooking;                                  // 0x579(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18D7[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBodySetup*                            ProcMeshBodySetup;                                 // 0x580(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FProcMeshSection>              ProcMeshSections;                                  // 0x588(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FKConvexElem>                  CollisionConvexElems;                              // 0x598(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	struct FBoxSphereBounds                      LocalBounds;                                       // 0x5A8(0x38)(ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	TArray<class UBodySetup*>                    AsyncBodySetupQueue;                               // 0x5E0(0x10)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ProceduralMeshComponent");
		return Clss;
	}

	void UpdateMeshSection_LinearColor(int32 InSectionIndex, TArray<struct FVector>& InVertices, TArray<struct FVector>& InNormals, TArray<struct FVector2D>& InUV0, TArray<struct FVector2D>& InUV1, TArray<struct FVector2D>& InUV2, TArray<struct FVector2D>& InUV3, TArray<struct FLinearColor>& InVertexColors, TArray<struct FProcMeshTangent>& InTangents, bool InbSRGBConversion);
	void UpdateMeshSection(int32 InSectionIndex, TArray<struct FVector>& InVertices, TArray<struct FVector>& InNormals, TArray<struct FVector2D>& InUV0, TArray<struct FColor>& InVertexColors, TArray<struct FProcMeshTangent>& InTangents);
	void SetMeshSectionVisible(int32 InSectionIndex, bool InbNewVisibility);
	bool IsMeshSectionVisible(int32 InSectionIndex);
	int32 GetNumSections();
	void CreateMeshSection_LinearColor(int32 InSectionIndex, TArray<struct FVector>& InVertices, TArray<int32>& InTriangles, TArray<struct FVector>& InNormals, TArray<struct FVector2D>& InUV0, TArray<struct FVector2D>& InUV1, TArray<struct FVector2D>& InUV2, TArray<struct FVector2D>& InUV3, TArray<struct FLinearColor>& InVertexColors, TArray<struct FProcMeshTangent>& InTangents, bool InbCreateCollision, bool InbSRGBConversion);
	void CreateMeshSection(int32 InSectionIndex, TArray<struct FVector>& InVertices, TArray<int32>& InTriangles, TArray<struct FVector>& InNormals, TArray<struct FVector2D>& InUV0, TArray<struct FColor>& InVertexColors, TArray<struct FProcMeshTangent>& InTangents, bool InbCreateCollision);
	void ClearMeshSection(int32 InSectionIndex);
	void ClearCollisionConvexMeshes();
	void ClearAllMeshSections();
	void AddCollisionConvexMesh(const TArray<struct FVector>& InConvexVerts);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
