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

// 0x10 (0x38 - 0x28)
// Class GeometryScriptingCore.GeometryScriptDebug
class UGeometryScriptDebug : public UObject
{
public:
	TArray<struct FGeometryScriptDebugMessage>   Messages;                                          // 0x28(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GeometryScriptDebug");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionFunctions
class UGeometryScriptLibrary_MeshSelectionFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GeometryScriptLibrary_MeshSelectionFunctions");
		return Clss;
	}

	class UDynamicMesh* SelectMeshElementsWithPlane(class UDynamicMesh* InTargetMesh, struct FGeometryScriptMeshSelection* InSelection, const struct FVector& InPlaneOrigin, const struct FVector& InPlaneNormal, enum class EGeometryScriptMeshSelectionType InSelectionType, bool InbInvert, int32 InMinNumTrianglePoints);
	class UDynamicMesh* SelectMeshElementsInSphere(class UDynamicMesh* InTargetMesh, struct FGeometryScriptMeshSelection* InSelection, const struct FVector& InSphereOrigin, double InSphereRadius, enum class EGeometryScriptMeshSelectionType InSelectionType, bool InbInvert, int32 InMinNumTrianglePoints);
	class UDynamicMesh* SelectMeshElementsInsideMesh(class UDynamicMesh* InTargetMesh, class UDynamicMesh* InSelectionMesh, struct FGeometryScriptMeshSelection* InSelection, const struct FTransform& InSelectionMeshTransform, enum class EGeometryScriptMeshSelectionType InSelectionType, bool InbInvert, double InShellDistance, double InWindingThreshold, int32 InMinNumTrianglePoints);
	class UDynamicMesh* SelectMeshElementsInBox(class UDynamicMesh* InTargetMesh, struct FGeometryScriptMeshSelection* InSelection, const struct FBox& InBox, enum class EGeometryScriptMeshSelectionType InSelectionType, bool InbInvert, int32 InMinNumTrianglePoints);
	class UDynamicMesh* SelectMeshElementsByNormalAngle(class UDynamicMesh* InTargetMesh, struct FGeometryScriptMeshSelection* InSelection, const struct FVector& InNormal, double InMaxAngleDeg, enum class EGeometryScriptMeshSelectionType InSelectionType, bool InbInvert, int32 InMinNumTrianglePoints);
	class UDynamicMesh* InvertMeshSelection(class UDynamicMesh* InTargetMesh, const struct FGeometryScriptMeshSelection& InSelection, struct FGeometryScriptMeshSelection* InNewSelection, bool InbOnlyToConnected);
	void GetMeshSelectionInfo(const struct FGeometryScriptMeshSelection& InSelection, enum class EGeometryScriptMeshSelectionType* InSelectionType, int32* InNumSelected);
	class UDynamicMesh* ExpandMeshSelectionToConnected(class UDynamicMesh* InTargetMesh, const struct FGeometryScriptMeshSelection& InSelection, struct FGeometryScriptMeshSelection* InNewSelection, enum class EGeometryScriptTopologyConnectionType InConnectionType);
	class UDynamicMesh* ExpandContractMeshSelection(class UDynamicMesh* InTargetMesh, const struct FGeometryScriptMeshSelection& InSelection, struct FGeometryScriptMeshSelection* InNewSelection, int32 InIterations, bool InbContract, bool InbOnlyExpandToFaceNeighbours);
	void DebugPrintMeshSelection(const struct FGeometryScriptMeshSelection& InSelection, bool InbDisable);
	class UDynamicMesh* CreateSelectAllMeshSelection(class UDynamicMesh* InTargetMesh, struct FGeometryScriptMeshSelection* InSelection, enum class EGeometryScriptMeshSelectionType InSelectionType);
	class UDynamicMesh* ConvertMeshSelectionToIndexList(class UDynamicMesh* InTargetMesh, const struct FGeometryScriptMeshSelection& InSelection, struct FGeometryScriptIndexList* InIndexList, enum class EGeometryScriptIndexType* InResultListType, enum class EGeometryScriptIndexType InConvertToType);
	class UDynamicMesh* ConvertMeshSelectionToIndexArray(class UDynamicMesh* InTargetMesh, const struct FGeometryScriptMeshSelection& InSelection, TArray<int32>* InIndexArray, enum class EGeometryScriptMeshSelectionType* InSelectionType);
	class UDynamicMesh* ConvertMeshSelection(class UDynamicMesh* InTargetMesh, const struct FGeometryScriptMeshSelection& InFromSelection, struct FGeometryScriptMeshSelection* InToSelection, enum class EGeometryScriptMeshSelectionType InNewType, bool InbAllowPartialInclusion);
	class UDynamicMesh* ConvertIndexSetToMeshSelection(class UDynamicMesh* InTargetMesh, TSet<int32>& InIndexSet, enum class EGeometryScriptMeshSelectionType InSelectionType, struct FGeometryScriptMeshSelection* InSelection);
	class UDynamicMesh* ConvertIndexListToMeshSelection(class UDynamicMesh* InTargetMesh, const struct FGeometryScriptIndexList& InIndexList, enum class EGeometryScriptMeshSelectionType InSelectionType, struct FGeometryScriptMeshSelection* InSelection);
	class UDynamicMesh* ConvertIndexArrayToMeshSelection(class UDynamicMesh* InTargetMesh, TArray<int32>& InIndexArray, enum class EGeometryScriptMeshSelectionType InSelectionType, struct FGeometryScriptMeshSelection* InSelection);
	void CombineMeshSelections(const struct FGeometryScriptMeshSelection& InSelectionA, const struct FGeometryScriptMeshSelection& InSelectionB, struct FGeometryScriptMeshSelection* InResultSelection, enum class EGeometryScriptCombineSelectionMode InCombineMode);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionQueryFunctions
class UGeometryScriptLibrary_MeshSelectionQueryFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GeometryScriptLibrary_MeshSelectionQueryFunctions");
		return Clss;
	}

	class UDynamicMesh* GetMeshSelectionBoundingBox(class UDynamicMesh* InTargetMesh, const struct FGeometryScriptMeshSelection& InSelection, struct FBox* InSelectionBounds, bool* InbIsEmpty, class UGeometryScriptDebug* InDebug);
	class UDynamicMesh* GetMeshSelectionBoundaryLoops(class UDynamicMesh* InTargetMesh, const struct FGeometryScriptMeshSelection& InSelection, TArray<struct FGeometryScriptIndexList>* InIndexLoops, TArray<struct FGeometryScriptPolyPath>* InPathLoops, int32* InNumLoops, bool* InbFoundErrors, class UGeometryScriptDebug* InDebug);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_CollisionFunctions
class UGeometryScriptLibrary_CollisionFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GeometryScriptLibrary_CollisionFunctions");
		return Clss;
	}

	class UDynamicMesh* SetStaticMeshCollisionFromMesh(class UDynamicMesh* InFromDynamicMesh, class UStaticMesh* InToStaticMeshAsset, const struct FGeometryScriptCollisionFromMeshOptions& InOptions, class UGeometryScriptDebug* InDebug);
	void SetStaticMeshCollisionFromComponent(class UStaticMesh* InStaticMeshAsset, class UPrimitiveComponent* InSourceComponent, const struct FGeometryScriptSetSimpleCollisionOptions& InOptions, class UGeometryScriptDebug* InDebug);
	class UDynamicMesh* SetDynamicMeshCollisionFromMesh(class UDynamicMesh* InFromDynamicMesh, class UDynamicMeshComponent* InToDynamicMeshComponent, const struct FGeometryScriptCollisionFromMeshOptions& InOptions, class UGeometryScriptDebug* InDebug);
	void ResetDynamicMeshCollision(class UDynamicMeshComponent* InComponent, bool InbEmitTransaction, class UGeometryScriptDebug* InDebug);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_ContainmentFunctions
class UGeometryScriptLibrary_ContainmentFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GeometryScriptLibrary_ContainmentFunctions");
		return Clss;
	}

	class UDynamicMesh* ComputeMeshSweptHull(class UDynamicMesh* InTargetMesh, class UDynamicMesh*& InCopyToMesh, class UDynamicMesh** InCopyToMeshOut, const struct FTransform& InProjectionFrame, const struct FGeometryScriptSweptHullOptions& InOptions, class UGeometryScriptDebug* InDebug);
	class UDynamicMesh* ComputeMeshConvexHull(class UDynamicMesh* InTargetMesh, class UDynamicMesh*& InCopyToMesh, class UDynamicMesh** InCopyToMeshOut, const struct FGeometryScriptMeshSelection& InSelection, const struct FGeometryScriptConvexHullOptions& InOptions, class UGeometryScriptDebug* InDebug);
	class UDynamicMesh* ComputeMeshConvexDecomposition(class UDynamicMesh* InTargetMesh, class UDynamicMesh*& InCopyToMesh, class UDynamicMesh** InCopyToMeshOut, const struct FGeometryScriptConvexDecompositionOptions& InOptions, class UGeometryScriptDebug* InDebug);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions
class UGeometryScriptLibrary_ListUtilityFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GeometryScriptLibrary_ListUtilityFunctions");
		return Clss;
	}

	void SetVectorListItem(struct FGeometryScriptVectorList& InVectorList, int32 InIndex, const struct FVector& InNewValue, bool* InbIsValidIndex);
	void SetUVListItem(struct FGeometryScriptUVList& InUVList, int32 InIndex, const struct FVector2D& InNewUV, bool* InbIsValidIndex);
	void SetScalarListItem(struct FGeometryScriptScalarList& InScalarList, int32 InIndex, double InNewValue, bool* InbIsValidIndex);
	void SetIndexListItem(struct FGeometryScriptIndexList& InIndexList, int32 InIndex, int32 InNewValue, bool* InbIsValidIndex);
	void SetColorListItem(struct FGeometryScriptColorList& InColorList, int32 InIndex, const struct FLinearColor& InNewColor, bool* InbIsValidIndex);
	int32 GetVectorListLength(const struct FGeometryScriptVectorList& InVectorList);
	int32 GetVectorListLastIndex(const struct FGeometryScriptVectorList& InVectorList);
	struct FVector GetVectorListItem(const struct FGeometryScriptVectorList& InVectorList, int32 InIndex, bool* InbIsValidIndex);
	int32 GetUVListLength(const struct FGeometryScriptUVList& InUVList);
	int32 GetUVListLastIndex(const struct FGeometryScriptUVList& InUVList);
	struct FVector2D GetUVListItem(const struct FGeometryScriptUVList& InUVList, int32 InIndex, bool* InbIsValidIndex);
	int32 GetTriangleListLength(const struct FGeometryScriptTriangleList& InTriangleList);
	int32 GetTriangleListLastTriangle(const struct FGeometryScriptTriangleList& InTriangleList);
	struct FIntVector GetTriangleListItem(const struct FGeometryScriptTriangleList& InTriangleList, int32 InTriangle, bool* InbIsValidTriangle);
	int32 GetScalarListLength(const struct FGeometryScriptScalarList& InScalarList);
	int32 GetScalarListLastIndex(const struct FGeometryScriptScalarList& InScalarList);
	double GetScalarListItem(const struct FGeometryScriptScalarList& InScalarList, int32 InIndex, bool* InbIsValidIndex);
	int32 GetIndexListLength(const struct FGeometryScriptIndexList& InIndexList);
	int32 GetIndexListLastIndex(const struct FGeometryScriptIndexList& InIndexList);
	int32 GetIndexListItem(const struct FGeometryScriptIndexList& InIndexList, int32 InIndex, bool* InbIsValidIndex);
	int32 GetColorListLength(const struct FGeometryScriptColorList& InColorList);
	int32 GetColorListLastIndex(const struct FGeometryScriptColorList& InColorList);
	struct FLinearColor GetColorListItem(const struct FGeometryScriptColorList& InColorList, int32 InIndex, bool* InbIsValidIndex);
	void ExtractColorListChannels(const struct FGeometryScriptColorList& InColorList, struct FGeometryScriptVectorList* InVectorList, int32 InXChannelIndex, int32 InYChannelIndex, int32 InZChannelIndex);
	void ExtractColorListChannel(const struct FGeometryScriptColorList& InColorList, struct FGeometryScriptScalarList* InScalarList, int32 InChannelIndex);
	void DuplicateVectorList(const struct FGeometryScriptVectorList& InVectorList, struct FGeometryScriptVectorList* InDuplicateList);
	void DuplicateUVList(const struct FGeometryScriptUVList& InUVList, struct FGeometryScriptUVList* InDuplicateList);
	void DuplicateScalarList(const struct FGeometryScriptScalarList& InScalarList, struct FGeometryScriptScalarList* InDuplicateList);
	void DuplicateIndexList(const struct FGeometryScriptIndexList& InIndexList, struct FGeometryScriptIndexList* InDuplicateList);
	void DuplicateColorList(const struct FGeometryScriptColorList& InColorList, struct FGeometryScriptColorList* InDuplicateList);
	void ConvertVectorListToArray(const struct FGeometryScriptVectorList& InVectorList, TArray<struct FVector>* InVectorArray);
	void ConvertUVListToArray(const struct FGeometryScriptUVList& InUVList, TArray<struct FVector2D>* InUVArray);
	void ConvertTriangleListToArray(const struct FGeometryScriptTriangleList& InTriangleList, TArray<struct FIntVector>* InTriangleArray);
	void ConvertScalarListToArray(const struct FGeometryScriptScalarList& InScalarList, TArray<double>* InScalarArray);
	void ConvertIndexListToArray(const struct FGeometryScriptIndexList& InIndexList, TArray<int32>* InIndexArray);
	void ConvertColorListToArray(const struct FGeometryScriptColorList& InColorList, TArray<struct FLinearColor>* InColorArray);
	void ConvertArrayToVectorList(TArray<struct FVector>& InVectorArray, struct FGeometryScriptVectorList* InVectorList);
	void ConvertArrayToUVList(TArray<struct FVector2D>& InUVArray, struct FGeometryScriptUVList* InUVList);
	void ConvertArrayToTriangleList(TArray<struct FIntVector>& InTriangleArray, struct FGeometryScriptTriangleList* InTriangleList);
	void ConvertArrayToScalarList(TArray<double>& InVectorArray, struct FGeometryScriptScalarList* InScalarList);
	void ConvertArrayToIndexList(TArray<int32>& InIndexArray, struct FGeometryScriptIndexList* InIndexList, enum class EGeometryScriptIndexType InIndexType);
	void ConvertArrayToColorList(TArray<struct FLinearColor>& InColorArray, struct FGeometryScriptColorList* InColorList);
	void ClearVectorList(struct FGeometryScriptVectorList& InVectorList, const struct FVector& InClearValue);
	void ClearUVList(struct FGeometryScriptUVList& InUVList, const struct FVector2D& InClearUV);
	void ClearScalarList(struct FGeometryScriptScalarList& InScalarList, double InClearValue);
	void ClearIndexList(struct FGeometryScriptIndexList& InIndexList, int32 InClearValue);
	void ClearColorList(struct FGeometryScriptColorList& InColorList, const struct FLinearColor& InClearColor);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_StaticMeshFunctions
class UGeometryScriptLibrary_StaticMeshFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GeometryScriptLibrary_StaticMeshFunctions");
		return Clss;
	}

	void GetSectionMaterialListFromStaticMesh(class UStaticMesh* InFromStaticMeshAsset, const struct FGeometryScriptMeshReadLOD& InRequestedLOD, TArray<class UMaterialInterface*>* InMaterialList, TArray<int32>* InMaterialIndex, enum class EGeometryScriptOutcomePins* InOutcome, class UGeometryScriptDebug* InDebug);
	class UDynamicMesh* CopyMeshToStaticMesh(class UDynamicMesh* InFromDynamicMesh, class UStaticMesh* InToStaticMeshAsset, const struct FGeometryScriptCopyMeshToAssetOptions& InOptions, const struct FGeometryScriptMeshWriteLOD& InTargetLod, enum class EGeometryScriptOutcomePins* InOutcome, class UGeometryScriptDebug* InDebug);
	class UDynamicMesh* CopyMeshToSkeletalMesh(class UDynamicMesh* InFromDynamicMesh, class USkeletalMesh* InToSkeletalMeshAsset, const struct FGeometryScriptCopyMeshToAssetOptions& InOptions, const struct FGeometryScriptMeshWriteLOD& InTargetLod, enum class EGeometryScriptOutcomePins* InOutcome, class UGeometryScriptDebug* InDebug);
	class UDynamicMesh* CopyMeshFromStaticMesh(class UStaticMesh* InFromStaticMeshAsset, class UDynamicMesh* InToDynamicMesh, const struct FGeometryScriptCopyMeshFromAssetOptions& InAssetOptions, const struct FGeometryScriptMeshReadLOD& InRequestedLOD, enum class EGeometryScriptOutcomePins* InOutcome, class UGeometryScriptDebug* InDebug);
	class UDynamicMesh* CopyMeshFromSkeletalMesh(class USkeletalMesh* InFromSkeletalMeshAsset, class UDynamicMesh* InToDynamicMesh, const struct FGeometryScriptCopyMeshFromAssetOptions& InAssetOptions, const struct FGeometryScriptMeshReadLOD& InRequestedLOD, enum class EGeometryScriptOutcomePins* InOutcome, class UGeometryScriptDebug* InDebug);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions
class UGeometryScriptLibrary_MeshBakeFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GeometryScriptLibrary_MeshBakeFunctions");
		return Clss;
	}

	struct FGeometryScriptBakeTypeOptions MakeBakeTypeVertexColor();
	struct FGeometryScriptBakeTypeOptions MakeBakeTypeTexture(class UTexture2D* InSourceTexture, int32 InSourceUVLayer);
	struct FGeometryScriptBakeTypeOptions MakeBakeTypeTangentNormal();
	struct FGeometryScriptBakeTypeOptions MakeBakeTypePosition();
	struct FGeometryScriptBakeTypeOptions MakeBakeTypeObjectNormal();
	struct FGeometryScriptBakeTypeOptions MakeBakeTypeMultiTexture(TArray<class UTexture2D*>& InMaterialIDSourceTextures, int32 InSourceUVLayer);
	struct FGeometryScriptBakeTypeOptions MakeBakeTypeMaterialID();
	struct FGeometryScriptBakeTypeOptions MakeBakeTypeFaceNormal();
	struct FGeometryScriptBakeTypeOptions MakeBakeTypeCurvature(enum class EGeometryScriptBakeCurvatureTypeMode InCurvatureType, enum class EGeometryScriptBakeCurvatureColorMode InColorMapping, float InColorRangeMultiplier, float InMinRangeMultiplier, enum class EGeometryScriptBakeCurvatureClampMode InClamping);
	struct FGeometryScriptBakeTypeOptions MakeBakeTypeBentNormal(int32 InOcclusionRays, float InMaxDistance, float InSpreadAngle);
	struct FGeometryScriptBakeTypeOptions MakeBakeTypeAmbientOcclusion(int32 InOcclusionRays, float InMaxDistance, float InSpreadAngle, float InBiasAngle);
	class UDynamicMesh* BakeVertex(class UDynamicMesh* InTargetMesh, const struct FTransform& InTargetTransform, const struct FGeometryScriptBakeTargetMeshOptions& InTargetOptions, class UDynamicMesh* InSourceMesh, const struct FTransform& InSourceTransform, const struct FGeometryScriptBakeSourceMeshOptions& InSourceOptions, const struct FGeometryScriptBakeOutputType& InBakeTypes, const struct FGeometryScriptBakeVertexOptions& InBakeOptions, class UGeometryScriptDebug* InDebug);
	TArray<class UTexture2D*> BakeTexture(class UDynamicMesh* InTargetMesh, const struct FTransform& InTargetTransform, const struct FGeometryScriptBakeTargetMeshOptions& InTargetOptions, class UDynamicMesh* InSourceMesh, const struct FTransform& InSourceTransform, const struct FGeometryScriptBakeSourceMeshOptions& InSourceOptions, TArray<struct FGeometryScriptBakeTypeOptions>& InBakeTypes, const struct FGeometryScriptBakeTextureOptions& InBakeOptions, class UGeometryScriptDebug* InDebug);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions
class UGeometryScriptLibrary_MeshBasicEditFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GeometryScriptLibrary_MeshBasicEditFunctions");
		return Clss;
	}

	class UDynamicMesh* SetVertexPosition(class UDynamicMesh* InTargetMesh, int32 InVertexID, const struct FVector& InNewPosition, bool* InbIsValidVertex, bool InbDeferChangeNotifications);
	class UDynamicMesh* DiscardMeshAttributes(class UDynamicMesh* InTargetMesh, bool InbDeferChangeNotifications);
	class UDynamicMesh* DeleteVerticesFromMesh(class UDynamicMesh* InTargetMesh, const struct FGeometryScriptIndexList& InVertexList, int32* InNumDeleted, bool InbDeferChangeNotifications);
	class UDynamicMesh* DeleteVertexFromMesh(class UDynamicMesh* InTargetMesh, int32 InVertexID, bool* InbWasVertexDeleted, bool InbDeferChangeNotifications);
	class UDynamicMesh* DeleteTrianglesFromMesh(class UDynamicMesh* InTargetMesh, const struct FGeometryScriptIndexList& InTriangleList, int32* InNumDeleted, bool InbDeferChangeNotifications);
	class UDynamicMesh* DeleteTriangleFromMesh(class UDynamicMesh* InTargetMesh, int32 InTriangleID, bool* InbWasTriangleDeleted, bool InbDeferChangeNotifications);
	class UDynamicMesh* DeleteSelectedTrianglesFromMesh(class UDynamicMesh* InTargetMesh, const struct FGeometryScriptMeshSelection& InSelection, int32* InNumDeleted, bool InbDeferChangeNotifications);
	class UDynamicMesh* AppendMeshTransformed(class UDynamicMesh* InTargetMesh, class UDynamicMesh* InAppendMesh, TArray<struct FTransform>& InAppendTransforms, const struct FTransform& InConstantTransform, bool InbConstantTransformIsRelative, bool InbDeferChangeNotifications, const struct FGeometryScriptAppendMeshOptions& InAppendOptions, class UGeometryScriptDebug* InDebug);
	class UDynamicMesh* AppendMeshRepeated(class UDynamicMesh* InTargetMesh, class UDynamicMesh* InAppendMesh, const struct FTransform& InAppendTransform, int32 InRepeatCount, bool InbApplyTransformToFirstInstance, bool InbDeferChangeNotifications, const struct FGeometryScriptAppendMeshOptions& InAppendOptions, class UGeometryScriptDebug* InDebug);
	class UDynamicMesh* AppendMesh(class UDynamicMesh* InTargetMesh, class UDynamicMesh* InAppendMesh, const struct FTransform& InAppendTransform, bool InbDeferChangeNotifications, const struct FGeometryScriptAppendMeshOptions& InAppendOptions, class UGeometryScriptDebug* InDebug);
	class UDynamicMesh* AppendBuffersToMesh(class UDynamicMesh* InTargetMesh, struct FGeometryScriptSimpleMeshBuffers& InBuffers, struct FGeometryScriptIndexList* InNewTriangleIndicesList, int32 InMaterialID, bool InbDeferChangeNotifications, class UGeometryScriptDebug* InDebug);
	class UDynamicMesh* AddVerticesToMesh(class UDynamicMesh* InTargetMesh, const struct FGeometryScriptVectorList& InNewPositionsList, struct FGeometryScriptIndexList* InNewIndicesList, bool InbDeferChangeNotifications);
	class UDynamicMesh* AddVertexToMesh(class UDynamicMesh* InTargetMesh, const struct FVector& InNewPosition, int32* InNewVertexIndex, bool InbDeferChangeNotifications);
	class UDynamicMesh* AddTriangleToMesh(class UDynamicMesh* InTargetMesh, const struct FIntVector& InNewTriangle, int32* InNewTriangleIndex, int32 InNewTriangleGroupID, bool InbDeferChangeNotifications, class UGeometryScriptDebug* InDebug);
	class UDynamicMesh* AddTrianglesToMesh(class UDynamicMesh* InTargetMesh, const struct FGeometryScriptTriangleList& InNewTrianglesList, struct FGeometryScriptIndexList* InNewIndicesList, int32 InNewTriangleGroupID, bool InbDeferChangeNotifications, class UGeometryScriptDebug* InDebug);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshBooleanFunctions
class UGeometryScriptLibrary_MeshBooleanFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GeometryScriptLibrary_MeshBooleanFunctions");
		return Clss;
	}

	class UDynamicMesh* ApplyMeshSelfUnion(class UDynamicMesh* InTargetMesh, const struct FGeometryScriptMeshSelfUnionOptions& InOptions, class UGeometryScriptDebug* InDebug);
	class UDynamicMesh* ApplyMeshPlaneSlice(class UDynamicMesh* InTargetMesh, const struct FTransform& InCutFrame, const struct FGeometryScriptMeshPlaneSliceOptions& InOptions, class UGeometryScriptDebug* InDebug);
	class UDynamicMesh* ApplyMeshPlaneCut(class UDynamicMesh* InTargetMesh, const struct FTransform& InCutFrame, const struct FGeometryScriptMeshPlaneCutOptions& InOptions, class UGeometryScriptDebug* InDebug);
	class UDynamicMesh* ApplyMeshMirror(class UDynamicMesh* InTargetMesh, const struct FTransform& InMirrorFrame, const struct FGeometryScriptMeshMirrorOptions& InOptions, class UGeometryScriptDebug* InDebug);
	class UDynamicMesh* ApplyMeshBoolean(class UDynamicMesh* InTargetMesh, const struct FTransform& InTargetTransform, class UDynamicMesh* InToolMesh, const struct FTransform& InToolTransform, enum class EGeometryScriptBooleanOperation InOperation, const struct FGeometryScriptMeshBooleanOptions& InOptions, class UGeometryScriptDebug* InDebug);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshComparisonFunctions
class UGeometryScriptLibrary_MeshComparisonFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GeometryScriptLibrary_MeshComparisonFunctions");
		return Clss;
	}

	class UDynamicMesh* MeasureDistancesBetweenMeshes(class UDynamicMesh* InTargetMesh, class UDynamicMesh* InOtherMesh, const struct FGeometryScriptMeasureMeshDistanceOptions& InOptions, double* InMaxDistance, double* InMinDistance, double* InAverageDistance, double* InRootMeanSqrDeviation, class UGeometryScriptDebug* InDebug);
	class UDynamicMesh* IsSameMeshAs(class UDynamicMesh* InTargetMesh, class UDynamicMesh* InOtherMesh, const struct FGeometryScriptIsSameMeshOptions& InOptions, bool* InbIsSameMesh, class UGeometryScriptDebug* InDebug);
	class UDynamicMesh* IsIntersectingMesh(class UDynamicMesh* InTargetMesh, const struct FTransform& InTargetTransform, class UDynamicMesh* InOtherMesh, const struct FTransform& InOtherTransform, bool* InbIsIntersecting, class UGeometryScriptDebug* InDebug);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshDecompositionFunctions
class UGeometryScriptLibrary_MeshDecompositionFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GeometryScriptLibrary_MeshDecompositionFunctions");
		return Clss;
	}

	class UDynamicMesh* SplitMeshByPolygroups(class UDynamicMesh* InTargetMesh, const struct FGeometryScriptGroupLayer& InGroupLayer, TArray<class UDynamicMesh*>* InComponentMeshes, TArray<int32>* InComponentPolygroups, class UDynamicMeshPool* InMeshPool, class UGeometryScriptDebug* InDebug);
	class UDynamicMesh* SplitMeshByMaterialIDs(class UDynamicMesh* InTargetMesh, TArray<class UDynamicMesh*>* InComponentMeshes, TArray<int32>* InComponentMaterialIDs, class UDynamicMeshPool* InMeshPool, class UGeometryScriptDebug* InDebug);
	class UDynamicMesh* SplitMeshByComponents(class UDynamicMesh* InTargetMesh, TArray<class UDynamicMesh*>* InComponentMeshes, class UDynamicMeshPool* InMeshPool, class UGeometryScriptDebug* InDebug);
	class UDynamicMesh* GetSubMeshFromMesh(class UDynamicMesh* InTargetMesh, class UDynamicMesh*& InStoreToSubmesh, const struct FGeometryScriptIndexList& InTriangleList, class UDynamicMesh** InStoreToSubmeshOut, class UGeometryScriptDebug* InDebug);
	class UDynamicMesh* CopyMeshToMesh(class UDynamicMesh* InCopyFromMesh, class UDynamicMesh*& InCopyToMesh, class UDynamicMesh** InCopyToMeshOut, class UGeometryScriptDebug* InDebug);
	class UDynamicMesh* CopyMeshSelectionToMesh(class UDynamicMesh* InTargetMesh, class UDynamicMesh*& InStoreToSubmesh, const struct FGeometryScriptMeshSelection& InSelection, class UDynamicMesh** InStoreToSubmeshOut, bool InbAppendToExisting, bool InbPreserveGroupIDs, class UGeometryScriptDebug* InDebug);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshDeformFunctions
class UGeometryScriptLibrary_MeshDeformFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GeometryScriptLibrary_MeshDeformFunctions");
		return Clss;
	}

	class UDynamicMesh* ApplyTwistWarpToMesh(class UDynamicMesh* InTargetMesh, const struct FGeometryScriptTwistWarpOptions& InOptions, const struct FTransform& InTwistOrientation, float InTwistAngle, float InTwistExtent, class UGeometryScriptDebug* InDebug);
	class UDynamicMesh* ApplyPerlinNoiseToMesh(class UDynamicMesh* InTargetMesh, const struct FGeometryScriptMeshSelection& InSelection, const struct FGeometryScriptPerlinNoiseOptions& InOptions, class UGeometryScriptDebug* InDebug);
	class UDynamicMesh* ApplyMathWarpToMesh(class UDynamicMesh* InTargetMesh, const struct FTransform& InWarpOrientation, enum class EGeometryScriptMathWarpType InWarpType, const struct FGeometryScriptMathWarpOptions& InOptions, class UGeometryScriptDebug* InDebug);
	class UDynamicMesh* ApplyIterativeSmoothingToMesh(class UDynamicMesh* InTargetMesh, const struct FGeometryScriptMeshSelection& InSelection, const struct FGeometryScriptIterativeMeshSmoothingOptions& InOptions, class UGeometryScriptDebug* InDebug);
	class UDynamicMesh* ApplyFlareWarpToMesh(class UDynamicMesh* InTargetMesh, const struct FGeometryScriptFlareWarpOptions& InOptions, const struct FTransform& InFlareOrientation, float InFlarePercentX, float InFlarePercentY, float InFlareExtent, class UGeometryScriptDebug* InDebug);
	class UDynamicMesh* ApplyDisplaceFromTextureMap(class UDynamicMesh* InTargetMesh, class UTexture2D* InTexture, const struct FGeometryScriptMeshSelection& InSelection, const struct FGeometryScriptDisplaceFromTextureOptions& InOptions, int32 InUVLayer, class UGeometryScriptDebug* InDebug);
	class UDynamicMesh* ApplyDisplaceFromPerVertexVectors(class UDynamicMesh* InTargetMesh, const struct FGeometryScriptMeshSelection& InSelection, struct FGeometryScriptVectorList& InVectorList, float InMagnitude, class UGeometryScriptDebug* InDebug);
	class UDynamicMesh* ApplyBendWarpToMesh(class UDynamicMesh* InTargetMesh, const struct FGeometryScriptBendWarpOptions& InOptions, const struct FTransform& InBendOrientation, float InBendAngle, float InBendExtent, class UGeometryScriptDebug* InDebug);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions
class UGeometryScriptLibrary_MeshMaterialFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GeometryScriptLibrary_MeshMaterialFunctions");
		return Clss;
	}

	class UDynamicMesh* SetTriangleMaterialID(class UDynamicMesh* InTargetMesh, int32 InTriangleID, int32 InMaterialID, bool* InbIsValidTriangle, bool InbDeferChangeNotifications);
	class UDynamicMesh* SetPolygroupMaterialID(class UDynamicMesh* InTargetMesh, const struct FGeometryScriptGroupLayer& InGroupLayer, int32 InPolygroupID, int32 InMaterialID, bool* InbIsValidPolygroupID, bool InbDeferChangeNotifications, class UGeometryScriptDebug* InDebug);
	class UDynamicMesh* SetMaterialIDOnTriangles(class UDynamicMesh* InTargetMesh, const struct FGeometryScriptIndexList& InTriangleIDList, int32 InMaterialID, bool InbDeferChangeNotifications, class UGeometryScriptDebug* InDebug);
	class UDynamicMesh* SetMaterialIDForMeshSelection(class UDynamicMesh* InTargetMesh, const struct FGeometryScriptMeshSelection& InSelection, int32 InMaterialID, bool InbDeferChangeNotifications, class UGeometryScriptDebug* InDebug);
	class UDynamicMesh* SetAllTriangleMaterialIDs(class UDynamicMesh* InTargetMesh, const struct FGeometryScriptIndexList& InTriangleMaterialIDList, bool InbDeferChangeNotifications, class UGeometryScriptDebug* InDebug);
	class UDynamicMesh* RemapMaterialIDs(class UDynamicMesh* InTargetMesh, int32 InFromMaterialID, int32 InToMaterialID, class UGeometryScriptDebug* InDebug);
	class UDynamicMesh* GetTrianglesByMaterialID(class UDynamicMesh* InTargetMesh, int32 InMaterialID, struct FGeometryScriptIndexList* InTriangleIDList, class UGeometryScriptDebug* InDebug);
	int32 GetTriangleMaterialID(class UDynamicMesh* InTargetMesh, int32 InTriangleID, bool* InbIsValidTriangle);
	int32 GetMaxMaterialID(class UDynamicMesh* InTargetMesh, bool* InbHasMaterialIDs);
	class UDynamicMesh* GetMaterialIDsOfTriangles(class UDynamicMesh* InTargetMesh, const struct FGeometryScriptIndexList& InTriangleIDList, struct FGeometryScriptIndexList* InMaterialIDList, class UGeometryScriptDebug* InDebug);
	class UDynamicMesh* GetAllTriangleMaterialIDs(class UDynamicMesh* InTargetMesh, struct FGeometryScriptIndexList* InMaterialIDList, bool* InbHasMaterialIDs);
	class UDynamicMesh* EnableMaterialIDs(class UDynamicMesh* InTargetMesh, class UGeometryScriptDebug* InDebug);
	class UDynamicMesh* DeleteTrianglesByMaterialID(class UDynamicMesh* InTargetMesh, int32 InMaterialID, int32* InNumDeleted, bool InbDeferChangeNotifications, class UGeometryScriptDebug* InDebug);
	class UDynamicMesh* CompactMaterialIDs(class UDynamicMesh* InTargetMesh, const TArray<class UMaterialInterface*>& InSourceMaterialList, TArray<class UMaterialInterface*>* InCompactedMaterialList, class UGeometryScriptDebug* InDebug);
	class UDynamicMesh* ClearMaterialIDs(class UDynamicMesh* InTargetMesh, int32 InClearValue, class UGeometryScriptDebug* InDebug);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshModelingFunctions
class UGeometryScriptLibrary_MeshModelingFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GeometryScriptLibrary_MeshModelingFunctions");
		return Clss;
	}

	class UDynamicMesh* ApplyMeshShell(class UDynamicMesh* InTargetMesh, const struct FGeometryScriptMeshOffsetOptions& InOptions, class UGeometryScriptDebug* InDebug);
	class UDynamicMesh* ApplyMeshPolygroupBevel(class UDynamicMesh* InTargetMesh, const struct FGeometryScriptMeshBevelOptions& InOptions, class UGeometryScriptDebug* InDebug);
	class UDynamicMesh* ApplyMeshOffsetFaces(class UDynamicMesh* InTargetMesh, const struct FGeometryScriptMeshOffsetFacesOptions& InOptions, const struct FGeometryScriptMeshSelection& InSelection, class UGeometryScriptDebug* InDebug);
	class UDynamicMesh* ApplyMeshOffset(class UDynamicMesh* InTargetMesh, const struct FGeometryScriptMeshOffsetOptions& InOptions, class UGeometryScriptDebug* InDebug);
	class UDynamicMesh* ApplyMeshLinearExtrudeFaces(class UDynamicMesh* InTargetMesh, const struct FGeometryScriptMeshLinearExtrudeOptions& InOptions, const struct FGeometryScriptMeshSelection& InSelection, class UGeometryScriptDebug* InDebug);
	class UDynamicMesh* ApplyMeshInsetOutsetFaces(class UDynamicMesh* InTargetMesh, const struct FGeometryScriptMeshInsetOutsetFacesOptions& InOptions, const struct FGeometryScriptMeshSelection& InSelection, class UGeometryScriptDebug* InDebug);
	class UDynamicMesh* ApplyMeshExtrude_Compatibility_5p0(class UDynamicMesh* InTargetMesh, const struct FGeometryScriptMeshExtrudeOptions& InOptions, class UGeometryScriptDebug* InDebug);
	class UDynamicMesh* ApplyMeshDuplicateFaces(class UDynamicMesh* InTargetMesh, const struct FGeometryScriptMeshSelection& InSelection, struct FGeometryScriptMeshSelection* InNewTriangles, const struct FGeometryScriptMeshEditPolygroupOptions& InGroupOptions, class UGeometryScriptDebug* InDebug);
	class UDynamicMesh* ApplyMeshDisconnectFaces(class UDynamicMesh* InTargetMesh, const struct FGeometryScriptMeshSelection& InSelection, bool InbAllowBowtiesInOutput, class UGeometryScriptDebug* InDebug);
	class UDynamicMesh* ApplyMeshBevelSelection(class UDynamicMesh* InTargetMesh, const struct FGeometryScriptMeshSelection& InSelection, enum class EGeometryScriptMeshBevelSelectionMode InBevelMode, const struct FGeometryScriptMeshBevelSelectionOptions& InBevelOptions, class UGeometryScriptDebug* InDebug);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions
class UGeometryScriptLibrary_MeshNormalsFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GeometryScriptLibrary_MeshNormalsFunctions");
		return Clss;
	}

	class UDynamicMesh* SetPerVertexNormals(class UDynamicMesh* InTargetMesh, class UGeometryScriptDebug* InDebug);
	class UDynamicMesh* SetPerFaceNormals(class UDynamicMesh* InTargetMesh, class UGeometryScriptDebug* InDebug);
	class UDynamicMesh* SetMeshTriangleNormals(class UDynamicMesh* InTargetMesh, int32 InTriangleID, const struct FGeometryScriptTriangle& InNormals, bool* InbIsValidTriangle, bool InbDeferChangeNotifications);
	class UDynamicMesh* RecomputeNormals(class UDynamicMesh* InTargetMesh, const struct FGeometryScriptCalculateNormalsOptions& InCalculateOptions, class UGeometryScriptDebug* InDebug);
	class UDynamicMesh* GetMeshPerVertexNormals(class UDynamicMesh* InTargetMesh, struct FGeometryScriptVectorList* InNormalList, bool* InbIsValidNormalSet, bool* InbHasVertexIDGaps, bool InbAverageSplitVertexValues);
	class UDynamicMesh* FlipNormals(class UDynamicMesh* InTargetMesh, class UGeometryScriptDebug* InDebug);
	class UDynamicMesh* ComputeTangents(class UDynamicMesh* InTargetMesh, const struct FGeometryScriptTangentsOptions& InOptions, class UGeometryScriptDebug* InDebug);
	class UDynamicMesh* ComputeSplitNormals(class UDynamicMesh* InTargetMesh, const struct FGeometryScriptSplitNormalsOptions& InSplitOptions, const struct FGeometryScriptCalculateNormalsOptions& InCalculateOptions, class UGeometryScriptDebug* InDebug);
	class UDynamicMesh* AutoRepairNormals(class UDynamicMesh* InTargetMesh, class UGeometryScriptDebug* InDebug);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshPolygroupFunctions
class UGeometryScriptLibrary_MeshPolygroupFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GeometryScriptLibrary_MeshPolygroupFunctions");
		return Clss;
	}

	class UDynamicMesh* SetPolygroupForMeshSelection(class UDynamicMesh* InTargetMesh, const struct FGeometryScriptGroupLayer& InGroupLayer, const struct FGeometryScriptMeshSelection& InSelection, int32* InSetPolygroupIDOut, int32 InSetPolygroupID, bool InbGenerateNewPolygroup, bool InbDeferChangeNotifications);
	class UDynamicMesh* SetNumExtendedPolygroupLayers(class UDynamicMesh* InTargetMesh, int32 InNumLayers, class UGeometryScriptDebug* InDebug);
	class UDynamicMesh* GetTrianglesInPolygroup(class UDynamicMesh* InTargetMesh, const struct FGeometryScriptGroupLayer& InGroupLayer, int32 InPolygroupID, struct FGeometryScriptIndexList& InTriangleIDsOut);
	int32 GetTrianglePolygroupID(class UDynamicMesh* InTargetMesh, const struct FGeometryScriptGroupLayer& InGroupLayer, int32 InTriangleID, bool* InbIsValidTriangle);
	class UDynamicMesh* GetPolygroupIDsInMesh(class UDynamicMesh* InTargetMesh, const struct FGeometryScriptGroupLayer& InGroupLayer, struct FGeometryScriptIndexList& InPolygroupIDsOut);
	class UDynamicMesh* GetAllTrianglePolygroupIDs(class UDynamicMesh* InTargetMesh, const struct FGeometryScriptGroupLayer& InGroupLayer, struct FGeometryScriptIndexList& InPolygroupIDsOut);
	class UDynamicMesh* EnablePolygroups(class UDynamicMesh* InTargetMesh, class UGeometryScriptDebug* InDebug);
	class UDynamicMesh* DeleteTrianglesInPolygroup(class UDynamicMesh* InTargetMesh, const struct FGeometryScriptGroupLayer& InGroupLayer, int32 InPolygroupID, int32* InNumDeleted, bool InbDeferChangeNotifications, class UGeometryScriptDebug* InDebug);
	class UDynamicMesh* CopyPolygroupsLayer(class UDynamicMesh* InTargetMesh, const struct FGeometryScriptGroupLayer& InFromGroupLayer, const struct FGeometryScriptGroupLayer& InToGroupLayer, class UGeometryScriptDebug* InDebug);
	class UDynamicMesh* ConvertUVIslandsToPolygroups(class UDynamicMesh* InTargetMesh, const struct FGeometryScriptGroupLayer& InGroupLayer, int32 InUVLayer, class UGeometryScriptDebug* InDebug);
	class UDynamicMesh* ConvertComponentsToPolygroups(class UDynamicMesh* InTargetMesh, const struct FGeometryScriptGroupLayer& InGroupLayer, class UGeometryScriptDebug* InDebug);
	class UDynamicMesh* ComputePolygroupsFromPolygonDetection(class UDynamicMesh* InTargetMesh, const struct FGeometryScriptGroupLayer& InGroupLayer, bool InbRespectUVSeams, bool InbRespectHardNormals, double InQuadAdjacencyWeight, double InQuadMetricClamp, int32 InMaxSearchRounds, class UGeometryScriptDebug* InDebug);
	class UDynamicMesh* ComputePolygroupsFromAngleThreshold(class UDynamicMesh* InTargetMesh, const struct FGeometryScriptGroupLayer& InGroupLayer, float InCreaseAngle, int32 InMinGroupSize, class UGeometryScriptDebug* InDebug);
	class UDynamicMesh* ClearPolygroups(class UDynamicMesh* InTargetMesh, const struct FGeometryScriptGroupLayer& InGroupLayer, int32 InClearValue, class UGeometryScriptDebug* InDebug);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions
class UGeometryScriptLibrary_MeshPrimitiveFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GeometryScriptLibrary_MeshPrimitiveFunctions");
		return Clss;
	}

	class UDynamicMesh* AppendVoronoiDiagram2D(class UDynamicMesh* InTargetMesh, const struct FGeometryScriptPrimitiveOptions& InPrimitiveOptions, const struct FTransform& InTransform, TArray<struct FVector2D>& InVoronoiSites, const struct FGeometryScriptVoronoiOptions& InVoronoiOptions, class UGeometryScriptDebug* InDebug);
	class UDynamicMesh* AppendTriangulatedPolygon(class UDynamicMesh* InTargetMesh, const struct FGeometryScriptPrimitiveOptions& InPrimitiveOptions, const struct FTransform& InTransform, TArray<struct FVector2D>& InPolygonVertices, bool InbAllowSelfIntersections, class UGeometryScriptDebug* InDebug);
	class UDynamicMesh* AppendTorus(class UDynamicMesh* InTargetMesh, const struct FGeometryScriptPrimitiveOptions& InPrimitiveOptions, const struct FTransform& InTransform, const struct FGeometryScriptRevolveOptions& InRevolveOptions, float InMajorRadius, float InMinorRadius, int32 InMajorSteps, int32 InMinorSteps, enum class EGeometryScriptPrimitiveOriginMode InOrigin, class UGeometryScriptDebug* InDebug);
	class UDynamicMesh* AppendSweepPolyline(class UDynamicMesh* InTargetMesh, const struct FGeometryScriptPrimitiveOptions& InPrimitiveOptions, const struct FTransform& InTransform, TArray<struct FVector2D>& InPolylineVertices, TArray<struct FTransform>& InSweepPath, TArray<float>& InPolylineTexParamU, TArray<float>& InSweepPathTexParamV, bool InbLoop, float InStartScale, float InEndScale, float InRotationAngleDeg, class UGeometryScriptDebug* InDebug);
	class UDynamicMesh* AppendSweepPolygon(class UDynamicMesh* InTargetMesh, const struct FGeometryScriptPrimitiveOptions& InPrimitiveOptions, const struct FTransform& InTransform, TArray<struct FVector2D>& InPolygonVertices, TArray<struct FTransform>& InSweepPath, bool InbLoop, bool InbCapped, float InStartScale, float InEndScale, float InRotationAngleDeg, class UGeometryScriptDebug* InDebug);
	class UDynamicMesh* AppendSpiralRevolvePolygon(class UDynamicMesh* InTargetMesh, const struct FGeometryScriptPrimitiveOptions& InPrimitiveOptions, const struct FTransform& InTransform, TArray<struct FVector2D>& InPolygonVertices, const struct FGeometryScriptRevolveOptions& InRevolveOptions, float InRadius, int32 InSteps, float InRisePerRevolution, class UGeometryScriptDebug* InDebug);
	class UDynamicMesh* AppendSphereLatLong(class UDynamicMesh* InTargetMesh, const struct FGeometryScriptPrimitiveOptions& InPrimitiveOptions, const struct FTransform& InTransform, float InRadius, int32 InStepsPhi, int32 InStepsTheta, enum class EGeometryScriptPrimitiveOriginMode InOrigin, class UGeometryScriptDebug* InDebug);
	class UDynamicMesh* AppendSphereBox(class UDynamicMesh* InTargetMesh, const struct FGeometryScriptPrimitiveOptions& InPrimitiveOptions, const struct FTransform& InTransform, float InRadius, int32 InStepsX, int32 InStepsY, int32 InStepsZ, enum class EGeometryScriptPrimitiveOriginMode InOrigin, class UGeometryScriptDebug* InDebug);
	class UDynamicMesh* AppendSimpleSweptPolygon(class UDynamicMesh* InTargetMesh, const struct FGeometryScriptPrimitiveOptions& InPrimitiveOptions, const struct FTransform& InTransform, TArray<struct FVector2D>& InPolygonVertices, TArray<struct FVector>& InSweepPath, bool InbLoop, bool InbCapped, float InStartScale, float InEndScale, class UGeometryScriptDebug* InDebug);
	class UDynamicMesh* AppendSimpleExtrudePolygon(class UDynamicMesh* InTargetMesh, const struct FGeometryScriptPrimitiveOptions& InPrimitiveOptions, const struct FTransform& InTransform, TArray<struct FVector2D>& InPolygonVertices, float InHeight, int32 InHeightSteps, bool InbCapped, enum class EGeometryScriptPrimitiveOriginMode InOrigin, class UGeometryScriptDebug* InDebug);
	class UDynamicMesh* AppendRoundRectangleXY(class UDynamicMesh* InTargetMesh, const struct FGeometryScriptPrimitiveOptions& InPrimitiveOptions, const struct FTransform& InTransform, float InDimensionX, float InDimensionY, float InCornerRadius, int32 InStepsWidth, int32 InStepsHeight, int32 InStepsRound, class UGeometryScriptDebug* InDebug);
	class UDynamicMesh* AppendRoundRectangle_Compatibility_5_0(class UDynamicMesh* InTargetMesh, const struct FGeometryScriptPrimitiveOptions& InPrimitiveOptions, const struct FTransform& InTransform, float InDimensionX, float InDimensionY, float InCornerRadius, int32 InStepsWidth, int32 InStepsHeight, int32 InStepsRound, class UGeometryScriptDebug* InDebug);
	class UDynamicMesh* AppendRevolvePolygon(class UDynamicMesh* InTargetMesh, const struct FGeometryScriptPrimitiveOptions& InPrimitiveOptions, const struct FTransform& InTransform, TArray<struct FVector2D>& InPolygonVertices, const struct FGeometryScriptRevolveOptions& InRevolveOptions, float InRadius, int32 InSteps, class UGeometryScriptDebug* InDebug);
	class UDynamicMesh* AppendRevolvePath(class UDynamicMesh* InTargetMesh, const struct FGeometryScriptPrimitiveOptions& InPrimitiveOptions, const struct FTransform& InTransform, TArray<struct FVector2D>& InPathVertices, const struct FGeometryScriptRevolveOptions& InRevolveOptions, int32 InSteps, bool InbCapped, class UGeometryScriptDebug* InDebug);
	class UDynamicMesh* AppendRectangleXY(class UDynamicMesh* InTargetMesh, const struct FGeometryScriptPrimitiveOptions& InPrimitiveOptions, const struct FTransform& InTransform, float InDimensionX, float InDimensionY, int32 InStepsWidth, int32 InStepsHeight, class UGeometryScriptDebug* InDebug);
	class UDynamicMesh* AppendRectangle_Compatibility_5_0(class UDynamicMesh* InTargetMesh, const struct FGeometryScriptPrimitiveOptions& InPrimitiveOptions, const struct FTransform& InTransform, float InDimensionX, float InDimensionY, int32 InStepsWidth, int32 InStepsHeight, class UGeometryScriptDebug* InDebug);
	class UDynamicMesh* AppendLinearStairs(class UDynamicMesh* InTargetMesh, const struct FGeometryScriptPrimitiveOptions& InPrimitiveOptions, const struct FTransform& InTransform, float InStepWidth, float InStepHeight, float InStepDepth, int32 InNumSteps, bool InbFloating, class UGeometryScriptDebug* InDebug);
	class UDynamicMesh* AppendDisc(class UDynamicMesh* InTargetMesh, const struct FGeometryScriptPrimitiveOptions& InPrimitiveOptions, const struct FTransform& InTransform, float InRadius, int32 InAngleSteps, int32 InSpokeSteps, float InStartAngle, float InEndAngle, float InHoleRadius, class UGeometryScriptDebug* InDebug);
	class UDynamicMesh* AppendCylinder(class UDynamicMesh* InTargetMesh, const struct FGeometryScriptPrimitiveOptions& InPrimitiveOptions, const struct FTransform& InTransform, float InRadius, float InHeight, int32 InRadialSteps, int32 InHeightSteps, bool InbCapped, enum class EGeometryScriptPrimitiveOriginMode InOrigin, class UGeometryScriptDebug* InDebug);
	class UDynamicMesh* AppendCurvedStairs(class UDynamicMesh* InTargetMesh, const struct FGeometryScriptPrimitiveOptions& InPrimitiveOptions, const struct FTransform& InTransform, float InStepWidth, float InStepHeight, float InInnerRadius, float InCurveAngle, int32 InNumSteps, bool InbFloating, class UGeometryScriptDebug* InDebug);
	class UDynamicMesh* AppendCone(class UDynamicMesh* InTargetMesh, const struct FGeometryScriptPrimitiveOptions& InPrimitiveOptions, const struct FTransform& InTransform, float InBaseRadius, float InTopRadius, float InHeight, int32 InRadialSteps, int32 InHeightSteps, bool InbCapped, enum class EGeometryScriptPrimitiveOriginMode InOrigin, class UGeometryScriptDebug* InDebug);
	class UDynamicMesh* AppendCapsule(class UDynamicMesh* InTargetMesh, const struct FGeometryScriptPrimitiveOptions& InPrimitiveOptions, const struct FTransform& InTransform, float InRadius, float InLineLength, int32 InHemisphereSteps, int32 InCircleSteps, enum class EGeometryScriptPrimitiveOriginMode InOrigin, class UGeometryScriptDebug* InDebug);
	class UDynamicMesh* AppendBox(class UDynamicMesh* InTargetMesh, const struct FGeometryScriptPrimitiveOptions& InPrimitiveOptions, const struct FTransform& InTransform, float InDimensionX, float InDimensionY, float InDimensionZ, int32 InStepsX, int32 InStepsY, int32 InStepsZ, enum class EGeometryScriptPrimitiveOriginMode InOrigin, class UGeometryScriptDebug* InDebug);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions
class UGeometryScriptLibrary_MeshQueryFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GeometryScriptLibrary_MeshQueryFunctions");
		return Clss;
	}

	bool IsValidVertexID(class UDynamicMesh* InTargetMesh, int32 InVertexID);
	bool IsValidTriangleID(class UDynamicMesh* InTargetMesh, int32 InTriangleID);
	struct FVector GetVertexPosition(class UDynamicMesh* InTargetMesh, int32 InVertexID, bool* InbIsValidVertex);
	int32 GetVertexCount(class UDynamicMesh* InTargetMesh);
	struct FBox2D GetUVSetBoundingBox(class UDynamicMesh* InTargetMesh, int32 InUvSetIndex, bool* InbIsValidUVSet, bool* InbUVSetIsEmpty);
	void GetTriangleUVs(class UDynamicMesh* InTargetMesh, int32 InUvSetIndex, int32 InTriangleID, struct FVector2D* InUV1, struct FVector2D* InUV2, struct FVector2D* InUV3, bool* InbHaveValidUVs);
	void GetTrianglePositions(class UDynamicMesh* InTargetMesh, int32 InTriangleID, bool* InbIsValidTriangle, struct FVector* InVertex1, struct FVector* InVertex2, struct FVector* InVertex3);
	struct FIntVector GetTriangleIndices(class UDynamicMesh* InTargetMesh, int32 InTriangleID, bool* InbIsValidTriangle);
	struct FVector GetTriangleFaceNormal(class UDynamicMesh* InTargetMesh, int32 InTriangleID, bool* InbIsValidTriangle);
	int32 GetNumVertexIDs(class UDynamicMesh* InTargetMesh);
	int32 GetNumUVSets(class UDynamicMesh* InTargetMesh);
	int32 GetNumTriangleIDs(class UDynamicMesh* InTargetMesh);
	int32 GetNumOpenBorderLoops(class UDynamicMesh* InTargetMesh, bool* InbAmbiguousTopologyFound);
	int32 GetNumOpenBorderEdges(class UDynamicMesh* InTargetMesh);
	int32 GetNumExtendedPolygroupLayers(class UDynamicMesh* InTargetMesh);
	int32 GetNumConnectedComponents(class UDynamicMesh* InTargetMesh);
	void GetMeshVolumeArea(class UDynamicMesh* InTargetMesh, float* InSurfaceArea, float* InVolume);
	class FString GetMeshInfoString(class UDynamicMesh* InTargetMesh);
	bool GetMeshHasAttributeSet(class UDynamicMesh* InTargetMesh);
	struct FBox GetMeshBoundingBox(class UDynamicMesh* InTargetMesh);
	bool GetIsDenseMesh(class UDynamicMesh* InTargetMesh);
	bool GetIsClosedMesh(class UDynamicMesh* InTargetMesh);
	bool GetHasVertexIDGaps(class UDynamicMesh* InTargetMesh);
	bool GetHasTriangleIDGaps(class UDynamicMesh* InTargetMesh);
	bool GetHasPolygroups(class UDynamicMesh* InTargetMesh);
	bool GetHasMaterialIDs(class UDynamicMesh* InTargetMesh);
	class UDynamicMesh* GetAllVertexPositions(class UDynamicMesh* InTargetMesh, struct FGeometryScriptVectorList* InPositionList, bool InbSkipGaps, bool* InbHasVertexIDGaps);
	class UDynamicMesh* GetAllVertexIDs(class UDynamicMesh* InTargetMesh, struct FGeometryScriptIndexList* InVertexIDList, bool* InbHasVertexIDGaps);
	class UDynamicMesh* GetAllTriangleIndices(class UDynamicMesh* InTargetMesh, struct FGeometryScriptTriangleList* InTriangleList, bool InbSkipGaps, bool* InbHasTriangleIDGaps);
	class UDynamicMesh* GetAllTriangleIDs(class UDynamicMesh* InTargetMesh, struct FGeometryScriptIndexList* InTriangleIDList, bool* InbHasTriangleIDGaps);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_RemeshingFunctions
class UGeometryScriptLibrary_RemeshingFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GeometryScriptLibrary_RemeshingFunctions");
		return Clss;
	}

	class UDynamicMesh* ApplyUniformRemesh(class UDynamicMesh* InTargetMesh, const struct FGeometryScriptRemeshOptions& InRemeshOptions, const struct FGeometryScriptUniformRemeshOptions& InUniformOptions, class UGeometryScriptDebug* InDebug);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshRepairFunctions
class UGeometryScriptLibrary_MeshRepairFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GeometryScriptLibrary_MeshRepairFunctions");
		return Clss;
	}

	class UDynamicMesh* WeldMeshEdges(class UDynamicMesh* InTargetMesh, const struct FGeometryScriptWeldEdgesOptions& InWeldOptions, class UGeometryScriptDebug* InDebug);
	class UDynamicMesh* SplitMeshBowties(class UDynamicMesh* InTargetMesh, bool InbMeshBowties, bool InbAttributeBowties, class UGeometryScriptDebug* InDebug);
	class UDynamicMesh* ResolveMeshTJunctions(class UDynamicMesh* InTargetMesh, const struct FGeometryScriptResolveTJunctionOptions& InResolveOptions, class UGeometryScriptDebug* InDebug);
	class UDynamicMesh* RepairMeshDegenerateGeometry(class UDynamicMesh* InTargetMesh, const struct FGeometryScriptDegenerateTriangleOptions& InOptions, class UGeometryScriptDebug* InDebug);
	class UDynamicMesh* RemoveSmallComponents(class UDynamicMesh* InTargetMesh, const struct FGeometryScriptRemoveSmallComponentOptions& InOptions, class UGeometryScriptDebug* InDebug);
	class UDynamicMesh* RemoveHiddenTriangles(class UDynamicMesh* InTargetMesh, const struct FGeometryScriptRemoveHiddenTrianglesOptions& InOptions, class UGeometryScriptDebug* InDebug);
	class UDynamicMesh* FillAllMeshHoles(class UDynamicMesh* InTargetMesh, const struct FGeometryScriptFillHolesOptions& InFillOptions, int32* InNumFilledHoles, int32* InNumFailedHoleFills, class UGeometryScriptDebug* InDebug);
	class UDynamicMesh* CompactMesh(class UDynamicMesh* InTargetMesh, class UGeometryScriptDebug* InDebug);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshSimplifyFunctions
class UGeometryScriptLibrary_MeshSimplifyFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GeometryScriptLibrary_MeshSimplifyFunctions");
		return Clss;
	}

	class UDynamicMesh* ApplySimplifyToVertexCount(class UDynamicMesh* InTargetMesh, int32 InVertexCount, const struct FGeometryScriptSimplifyMeshOptions& InOptions, class UGeometryScriptDebug* InDebug);
	class UDynamicMesh* ApplySimplifyToTriangleCount(class UDynamicMesh* InTargetMesh, int32 InTriangleCount, const struct FGeometryScriptSimplifyMeshOptions& InOptions, class UGeometryScriptDebug* InDebug);
	class UDynamicMesh* ApplySimplifyToTolerance(class UDynamicMesh* InTargetMesh, float InTolerance, const struct FGeometryScriptSimplifyMeshOptions& InOptions, class UGeometryScriptDebug* InDebug);
	class UDynamicMesh* ApplySimplifyToPolygroupTopology(class UDynamicMesh* InTargetMesh, const struct FGeometryScriptPolygroupSimplifyOptions& InOptions, const struct FGeometryScriptGroupLayer& InGroupLayer, class UGeometryScriptDebug* InDebug);
	class UDynamicMesh* ApplySimplifyToPlanar(class UDynamicMesh* InTargetMesh, const struct FGeometryScriptPlanarSimplifyOptions& InOptions, class UGeometryScriptDebug* InDebug);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshSpatial
class UGeometryScriptLibrary_MeshSpatial : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GeometryScriptLibrary_MeshSpatial");
		return Clss;
	}

	void ResetBVH(struct FGeometryScriptDynamicMeshBVH& InResetBVH);
	class UDynamicMesh* RebuildBVHForMesh(class UDynamicMesh* InTargetMesh, struct FGeometryScriptDynamicMeshBVH& InUpdateBVH, bool InbOnlyIfInvalid, class UGeometryScriptDebug* InDebug);
	class UDynamicMesh* IsPointInsideMesh(class UDynamicMesh* InTargetMesh, struct FGeometryScriptDynamicMeshBVH& InQueryBVH, const struct FVector& InQueryPoint, const struct FGeometryScriptSpatialQueryOptions& InOptions, bool* InbIsInside, enum class EGeometryScriptContainmentOutcomePins* InOutcome, class UGeometryScriptDebug* InDebug);
	class UDynamicMesh* IsBVHValidForMesh(class UDynamicMesh* InTargetMesh, struct FGeometryScriptDynamicMeshBVH& InTestBVH, bool* InbIsValid, class UGeometryScriptDebug* InDebug);
	class UDynamicMesh* FindNearestRayIntersectionWithMesh(class UDynamicMesh* InTargetMesh, struct FGeometryScriptDynamicMeshBVH& InQueryBVH, const struct FVector& InRayOrigin, const struct FVector& InRayDirection, const struct FGeometryScriptSpatialQueryOptions& InOptions, struct FGeometryScriptRayHitResult* InHitResult, enum class EGeometryScriptSearchOutcomePins* InOutcome, class UGeometryScriptDebug* InDebug);
	class UDynamicMesh* FindNearestPointOnMesh(class UDynamicMesh* InTargetMesh, struct FGeometryScriptDynamicMeshBVH& InQueryBVH, const struct FVector& InQueryPoint, const struct FGeometryScriptSpatialQueryOptions& InOptions, struct FGeometryScriptTrianglePoint* InNearestResult, enum class EGeometryScriptSearchOutcomePins* InOutcome, class UGeometryScriptDebug* InDebug);
	class UDynamicMesh* BuildBVHForMesh(class UDynamicMesh* InTargetMesh, struct FGeometryScriptDynamicMeshBVH* InOutputBVH, class UGeometryScriptDebug* InDebug);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshSubdivideFunctions
class UGeometryScriptLibrary_MeshSubdivideFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GeometryScriptLibrary_MeshSubdivideFunctions");
		return Clss;
	}

	class UDynamicMesh* ApplyUniformTessellation(class UDynamicMesh* InTargetMesh, int32 InTessellationLevel, class UGeometryScriptDebug* InDebug);
	class UDynamicMesh* ApplySelectiveTessellation(class UDynamicMesh* InTargetMesh, const struct FGeometryScriptMeshSelection& InSelection, const struct FGeometryScriptSelectiveTessellateOptions& InOptions, int32 InTessellationLevel, enum class ESelectiveTessellatePatternType InPatternType, class UGeometryScriptDebug* InDebug);
	class UDynamicMesh* ApplyRecursivePNTessellation(class UDynamicMesh* InTargetMesh, const struct FGeometryScriptPNTessellateOptions& InOptions, int32 InNumIterations, class UGeometryScriptDebug* InDebug);
	class UDynamicMesh* ApplyPNTessellation(class UDynamicMesh* InTargetMesh, const struct FGeometryScriptPNTessellateOptions& InOptions, int32 InTessellationLevel, class UGeometryScriptDebug* InDebug);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshTransformFunctions
class UGeometryScriptLibrary_MeshTransformFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GeometryScriptLibrary_MeshTransformFunctions");
		return Clss;
	}

	class UDynamicMesh* TranslateMeshSelection(class UDynamicMesh* InTargetMesh, const struct FGeometryScriptMeshSelection& InSelection, const struct FVector& InTranslation, class UGeometryScriptDebug* InDebug);
	class UDynamicMesh* TranslateMesh(class UDynamicMesh* InTargetMesh, const struct FVector& InTranslation, class UGeometryScriptDebug* InDebug);
	class UDynamicMesh* TransformMeshSelection(class UDynamicMesh* InTargetMesh, const struct FGeometryScriptMeshSelection& InSelection, const struct FTransform& InTransform, class UGeometryScriptDebug* InDebug);
	class UDynamicMesh* TransformMesh(class UDynamicMesh* InTargetMesh, const struct FTransform& InTransform, bool InbFixOrientationForNegativeScale, class UGeometryScriptDebug* InDebug);
	class UDynamicMesh* ScaleMeshSelection(class UDynamicMesh* InTargetMesh, const struct FGeometryScriptMeshSelection& InSelection, const struct FVector& InScale, const struct FVector& InScaleOrigin, class UGeometryScriptDebug* InDebug);
	class UDynamicMesh* ScaleMesh(class UDynamicMesh* InTargetMesh, const struct FVector& InScale, const struct FVector& InScaleOrigin, bool InbFixOrientationForNegativeScale, class UGeometryScriptDebug* InDebug);
	class UDynamicMesh* RotateMeshSelection(class UDynamicMesh* InTargetMesh, const struct FGeometryScriptMeshSelection& InSelection, const struct FRotator& InRotation, const struct FVector& InRotationOrigin, class UGeometryScriptDebug* InDebug);
	class UDynamicMesh* RotateMesh(class UDynamicMesh* InTargetMesh, const struct FRotator& InRotation, const struct FVector& InRotationOrigin, class UGeometryScriptDebug* InDebug);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions
class UGeometryScriptLibrary_MeshUVFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GeometryScriptLibrary_MeshUVFunctions");
		return Clss;
	}

	class UDynamicMesh* TranslateMeshUVs(class UDynamicMesh* InTargetMesh, int32 InUvSetIndex, const struct FVector2D& InTranslation, const struct FGeometryScriptMeshSelection& InSelection, class UGeometryScriptDebug* InDebug);
	class UDynamicMesh* SetNumUVSets(class UDynamicMesh* InTargetMesh, int32 InNumUVSets, class UGeometryScriptDebug* InDebug);
	class UDynamicMesh* SetMeshUVsFromPlanarProjection(class UDynamicMesh* InTargetMesh, int32 InUvSetIndex, const struct FTransform& InPlaneTransform, const struct FGeometryScriptMeshSelection& InSelection, class UGeometryScriptDebug* InDebug);
	class UDynamicMesh* SetMeshUVsFromCylinderProjection(class UDynamicMesh* InTargetMesh, int32 InUvSetIndex, const struct FTransform& InCylinderTransform, const struct FGeometryScriptMeshSelection& InSelection, float InSplitAngle, class UGeometryScriptDebug* InDebug);
	class UDynamicMesh* SetMeshUVsFromBoxProjection(class UDynamicMesh* InTargetMesh, int32 InUvSetIndex, const struct FTransform& InBoxTransform, const struct FGeometryScriptMeshSelection& InSelection, int32 InMinIslandTriCount, class UGeometryScriptDebug* InDebug);
	class UDynamicMesh* SetMeshTriangleUVs(class UDynamicMesh* InTargetMesh, int32 InUvSetIndex, int32 InTriangleID, const struct FGeometryScriptUVTriangle& InUVs, bool* InbIsValidTriangle, bool InbDeferChangeNotifications);
	class UDynamicMesh* ScaleMeshUVs(class UDynamicMesh* InTargetMesh, int32 InUvSetIndex, const struct FVector2D& InScale, const struct FVector2D& InScaleOrigin, const struct FGeometryScriptMeshSelection& InSelection, class UGeometryScriptDebug* InDebug);
	class UDynamicMesh* RotateMeshUVs(class UDynamicMesh* InTargetMesh, int32 InUvSetIndex, float InRotationAngle, const struct FVector2D& InRotationOrigin, const struct FGeometryScriptMeshSelection& InSelection, class UGeometryScriptDebug* InDebug);
	class UDynamicMesh* RepackMeshUVs(class UDynamicMesh* InTargetMesh, int32 InUvSetIndex, const struct FGeometryScriptRepackUVsOptions& InRepackOptions, class UGeometryScriptDebug* InDebug);
	class UDynamicMesh* RecomputeMeshUVs(class UDynamicMesh* InTargetMesh, int32 InUvSetIndex, const struct FGeometryScriptRecomputeUVsOptions& InOptions, const struct FGeometryScriptMeshSelection& InSelection, class UGeometryScriptDebug* InDebug);
	class UDynamicMesh* GetMeshUVSizeInfo(class UDynamicMesh* InTargetMesh, int32 InUvSetIndex, const struct FGeometryScriptMeshSelection& InSelection, double* InMeshArea, double* InUVArea, struct FBox* InMeshBounds, struct FBox2D* InUVBounds, bool* InbIsValidUVSet, bool* InbFoundUnsetUVs, bool InbOnlyIncludeValidUVTris, class UGeometryScriptDebug* InDebug);
	class UDynamicMesh* GetMeshPerVertexUVs(class UDynamicMesh* InTargetMesh, int32 InUvSetIndex, struct FGeometryScriptUVList* InUVList, bool* InbIsValidUVSet, bool* InbHasVertexIDGaps, bool* InbHasSplitUVs, class UGeometryScriptDebug* InDebug);
	class UDynamicMesh* CopyUVSet(class UDynamicMesh* InTargetMesh, int32 InFromUVSet, int32 InToUVSet, class UGeometryScriptDebug* InDebug);
	class UDynamicMesh* CopyMeshUVLayerToMesh(class UDynamicMesh* InCopyFromMesh, int32 InUvSetIndex, class UDynamicMesh*& InCopyToUVMesh, class UDynamicMesh** InCopyToUVMeshOut, bool* InbInvalidTopology, bool* InbIsValidUVSet, class UGeometryScriptDebug* InDebug);
	class UDynamicMesh* CopyMeshToMeshUVLayer(class UDynamicMesh* InCopyFromUVMesh, int32 InToUVSetIndex, class UDynamicMesh*& InCopyToMesh, class UDynamicMesh** InCopyToMeshOut, bool* InbFoundTopologyErrors, bool* InbIsValidUVSet, bool InbOnlyUVPositions, class UGeometryScriptDebug* InDebug);
	class UDynamicMesh* AutoGenerateXAtlasMeshUVs(class UDynamicMesh* InTargetMesh, int32 InUvSetIndex, const struct FGeometryScriptXAtlasOptions& InOptions, class UGeometryScriptDebug* InDebug);
	class UDynamicMesh* AutoGeneratePatchBuilderMeshUVs(class UDynamicMesh* InTargetMesh, int32 InUvSetIndex, const struct FGeometryScriptPatchBuilderOptions& InOptions, class UGeometryScriptDebug* InDebug);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshVertexColorFunctions
class UGeometryScriptLibrary_MeshVertexColorFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GeometryScriptLibrary_MeshVertexColorFunctions");
		return Clss;
	}

	class UDynamicMesh* SetMeshSelectionVertexColor(class UDynamicMesh* InTargetMesh, const struct FGeometryScriptMeshSelection& InSelection, const struct FLinearColor& InColor, const struct FGeometryScriptColorFlags& InFlags, bool InbCreateColorSeam, class UGeometryScriptDebug* InDebug);
	class UDynamicMesh* SetMeshPerVertexColors(class UDynamicMesh* InTargetMesh, const struct FGeometryScriptColorList& InVertexColorList, class UGeometryScriptDebug* InDebug);
	class UDynamicMesh* SetMeshConstantVertexColor(class UDynamicMesh* InTargetMesh, const struct FLinearColor& InColor, const struct FGeometryScriptColorFlags& InFlags, bool InbClearExisting, class UGeometryScriptDebug* InDebug);
	class UDynamicMesh* GetMeshPerVertexColors(class UDynamicMesh* InTargetMesh, struct FGeometryScriptColorList* InColorList, bool* InbIsValidColorSet, bool* InbHasVertexIDGaps, bool InbBlendSplitVertexValues);
	class UDynamicMesh* ConvertMeshVertexColorsSRGBToLinear(class UDynamicMesh* InTargetMesh, class UGeometryScriptDebug* InDebug);
	class UDynamicMesh* ConvertMeshVertexColorsLinearToSRGB(class UDynamicMesh* InTargetMesh, class UGeometryScriptDebug* InDebug);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshVoxelFunctions
class UGeometryScriptLibrary_MeshVoxelFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GeometryScriptLibrary_MeshVoxelFunctions");
		return Clss;
	}

	class UDynamicMesh* ApplyMeshSolidify(class UDynamicMesh* InTargetMesh, const struct FGeometryScriptSolidifyOptions& InOptions, class UGeometryScriptDebug* InDebug);
	class UDynamicMesh* ApplyMeshMorphology(class UDynamicMesh* InTargetMesh, const struct FGeometryScriptMorphologyOptions& InOptions, class UGeometryScriptDebug* InDebug);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions
class UGeometryScriptLibrary_PolyPathFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GeometryScriptLibrary_PolyPathFunctions");
		return Clss;
	}

	void SampleSplineToTransforms(class USplineComponent* InSpline, TArray<struct FTransform>* InFrames, TArray<double>* InFrameTimes, const struct FGeometryScriptSplineSamplingOptions& InSamplingOptions, const struct FTransform& InRelativeTransform, bool InbIncludeScale);
	struct FVector GetPolyPathVertex(const struct FGeometryScriptPolyPath& InPolyPath, int32 InIndex, bool* InbIsValidIndex);
	struct FVector GetPolyPathTangent(const struct FGeometryScriptPolyPath& InPolyPath, int32 InIndex, bool* InbIsValidIndex);
	int32 GetPolyPathNumVertices(const struct FGeometryScriptPolyPath& InPolyPath);
	int32 GetPolyPathLastIndex(const struct FGeometryScriptPolyPath& InPolyPath);
	double GetPolyPathArcLength(const struct FGeometryScriptPolyPath& InPolyPath);
	int32 GetNearestVertexIndex(const struct FGeometryScriptPolyPath& InPolyPath, const struct FVector& InPoint);
	struct FGeometryScriptPolyPath FlattenTo2DOnAxis(const struct FGeometryScriptPolyPath& InPolyPath, enum class EGeometryScriptAxis InDropAxis);
	struct FGeometryScriptPolyPath CreateCirclePath3D(const struct FTransform& InTransform, float InRadius, int32 InNumPoints);
	struct FGeometryScriptPolyPath CreateCirclePath2D(const struct FVector2D& InCenter, float InRadius, int32 InNumPoints);
	struct FGeometryScriptPolyPath CreateArcPath3D(const struct FTransform& InTransform, float InRadius, int32 InNumPoints, float InStartAngle, float InEndAngle);
	struct FGeometryScriptPolyPath CreateArcPath2D(const struct FVector2D& InCenter, float InRadius, int32 InNumPoints, float InStartAngle, float InEndAngle);
	void ConvertSplineToPolyPath(class USplineComponent* InSpline, struct FGeometryScriptPolyPath* InPolyPath, const struct FGeometryScriptSplineSamplingOptions& InSamplingOptions);
	void ConvertPolyPathToArrayOfVector2D(const struct FGeometryScriptPolyPath& InPolyPath, TArray<struct FVector2D>* InVertexArray);
	void ConvertPolyPathToArray(const struct FGeometryScriptPolyPath& InPolyPath, TArray<struct FVector>* InVertexArray);
	void ConvertArrayToPolyPath(TArray<struct FVector>& InVertexArray, struct FGeometryScriptPolyPath* InPolyPath);
	void ConvertArrayOfVector2DToPolyPath(TArray<struct FVector2D>& InVertexArray, struct FGeometryScriptPolyPath* InPolyPath);
	TArray<struct FVector2D> Conv_GeometryScriptPolyPathToArrayOfVector2D(const struct FGeometryScriptPolyPath& InPolyPath);
	TArray<struct FVector> Conv_GeometryScriptPolyPathToArray(const struct FGeometryScriptPolyPath& InPolyPath);
	struct FGeometryScriptPolyPath Conv_ArrayToGeometryScriptPolyPath(TArray<struct FVector>& InPathVertices);
	struct FGeometryScriptPolyPath Conv_ArrayOfVector2DToGeometryScriptPolyPath(TArray<struct FVector2D>& InPathVertices);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_SceneUtilityFunctions
class UGeometryScriptLibrary_SceneUtilityFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GeometryScriptLibrary_SceneUtilityFunctions");
		return Clss;
	}

	void SetComponentMaterialList(class UPrimitiveComponent* InComponent, TArray<class UMaterialInterface*>& InMaterialList, class UGeometryScriptDebug* InDebug);
	class UDynamicMeshPool* CreateDynamicMeshPool();
	class UDynamicMesh* CopyMeshFromComponent(class USceneComponent* InComponent, class UDynamicMesh* InToDynamicMesh, const struct FGeometryScriptCopyMeshFromComponentOptions& InOptions, bool InbTransformToWorld, struct FTransform* InLocalToWorld, enum class EGeometryScriptOutcomePins* InOutcome, class UGeometryScriptDebug* InDebug);
	class UDynamicMesh* CopyCollisionMeshesFromObject(class UObject* InFromObject, class UDynamicMesh* InToDynamicMesh, bool InbTransformToWorld, struct FTransform* InLocalToWorld, enum class EGeometryScriptOutcomePins* InOutcome, bool InbUseComplexCollision, int32 InSphereResolution, class UGeometryScriptDebug* InDebug);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_TextureMapFunctions
class UGeometryScriptLibrary_TextureMapFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GeometryScriptLibrary_TextureMapFunctions");
		return Clss;
	}

	void SampleTexture2DAtUVPositions(const struct FGeometryScriptUVList& InUVList, class UTexture2D* InTexture, const struct FGeometryScriptSampleTextureOptions& InSampleOptions, struct FGeometryScriptColorList* InColorList, class UGeometryScriptDebug* InDebug);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions
class UGeometryScriptLibrary_VectorMathFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GeometryScriptLibrary_VectorMathFunctions");
		return Clss;
	}

	struct FGeometryScriptScalarList VectorToScalar(const struct FGeometryScriptVectorList& InVectorList, double InConstantX, double InConstantY, double InConstantZ);
	void VectorNormalizeInPlace(struct FGeometryScriptVectorList& InVectorList, const struct FVector& InSetOnFailure);
	struct FGeometryScriptScalarList VectorLength(const struct FGeometryScriptVectorList& InVectorList);
	struct FGeometryScriptScalarList VectorDot(const struct FGeometryScriptVectorList& InVectorListA, const struct FGeometryScriptVectorList& InVectorListB);
	struct FGeometryScriptVectorList VectorCross(const struct FGeometryScriptVectorList& InVectorListA, const struct FGeometryScriptVectorList& InVectorListB);
	void VectorBlendInPlace(const struct FGeometryScriptVectorList& InVectorListA, struct FGeometryScriptVectorList& InVectorListB, double InConstantA, double InConstantB);
	struct FGeometryScriptVectorList VectorBlend(const struct FGeometryScriptVectorList& InVectorListA, const struct FGeometryScriptVectorList& InVectorListB, double InConstantA, double InConstantB);
	void ScalarVectorMultiplyInPlace(const struct FGeometryScriptScalarList& InScalarList, struct FGeometryScriptVectorList& InVectorList, double InScalarMultiplier);
	struct FGeometryScriptVectorList ScalarVectorMultiply(const struct FGeometryScriptScalarList& InScalarList, const struct FGeometryScriptVectorList& InVectorList, double InScalarMultiplier);
	void ScalarMultiplyInPlace(const struct FGeometryScriptScalarList& InScalarListA, struct FGeometryScriptScalarList& InScalarListB, double InConstantMultiplier);
	struct FGeometryScriptScalarList ScalarMultiply(const struct FGeometryScriptScalarList& InScalarListA, const struct FGeometryScriptScalarList& InScalarListB, double InConstantMultiplier);
	void ScalarInvertInPlace(struct FGeometryScriptScalarList& InScalarList, double InNumerator, double InSetOnFailure, double InEpsilon);
	struct FGeometryScriptScalarList ScalarInvert(const struct FGeometryScriptScalarList& InScalarList, double InNumerator, double InSetOnFailure, double InEpsilon);
	void ScalarBlendInPlace(const struct FGeometryScriptScalarList& InScalarListA, struct FGeometryScriptScalarList& InScalarListB, double InConstantA, double InConstantB);
	struct FGeometryScriptScalarList ScalarBlend(const struct FGeometryScriptScalarList& InScalarListA, const struct FGeometryScriptScalarList& InScalarListB, double InConstantA, double InConstantB);
	void ConstantVectorMultiplyInPlace(double InConstant, struct FGeometryScriptVectorList& InVectorList);
	struct FGeometryScriptVectorList ConstantVectorMultiply(double InConstant, const struct FGeometryScriptVectorList& InVectorList);
	void ConstantScalarMultiplyInPlace(double InConstant, struct FGeometryScriptScalarList& InScalarList);
	struct FGeometryScriptScalarList ConstantScalarMultiply(double InConstant, const struct FGeometryScriptScalarList& InScalarList);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
