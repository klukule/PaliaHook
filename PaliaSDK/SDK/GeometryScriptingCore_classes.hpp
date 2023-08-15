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
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("GeometryScriptDebug");

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
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("GeometryScriptLibrary_MeshSelectionFunctions");

		return Clss;
	}

	class UDynamicMesh* SelectMeshElementsWithPlane(class UDynamicMesh* TargetMesh, struct FGeometryScriptMeshSelection* Selection, const struct FVector& PlaneOrigin, const struct FVector& PlaneNormal, enum class EGeometryScriptMeshSelectionType SelectionType, bool bInvert, int32 MinNumTrianglePoints);
	class UDynamicMesh* SelectMeshElementsInSphere(class UDynamicMesh* TargetMesh, struct FGeometryScriptMeshSelection* Selection, const struct FVector& SphereOrigin, double SphereRadius, enum class EGeometryScriptMeshSelectionType SelectionType, bool bInvert, int32 MinNumTrianglePoints);
	class UDynamicMesh* SelectMeshElementsInsideMesh(class UDynamicMesh* TargetMesh, class UDynamicMesh* SelectionMesh, struct FGeometryScriptMeshSelection* Selection, const struct FTransform& SelectionMeshTransform, enum class EGeometryScriptMeshSelectionType SelectionType, bool bInvert, double ShellDistance, double WindingThreshold, int32 MinNumTrianglePoints);
	class UDynamicMesh* SelectMeshElementsInBox(class UDynamicMesh* TargetMesh, struct FGeometryScriptMeshSelection* Selection, const struct FBox& Box, enum class EGeometryScriptMeshSelectionType SelectionType, bool bInvert, int32 MinNumTrianglePoints);
	class UDynamicMesh* SelectMeshElementsByNormalAngle(class UDynamicMesh* TargetMesh, struct FGeometryScriptMeshSelection* Selection, const struct FVector& Normal, double MaxAngleDeg, enum class EGeometryScriptMeshSelectionType SelectionType, bool bInvert, int32 MinNumTrianglePoints);
	class UDynamicMesh* InvertMeshSelection(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, struct FGeometryScriptMeshSelection* NewSelection, bool bOnlyToConnected);
	void GetMeshSelectionInfo(const struct FGeometryScriptMeshSelection& Selection, enum class EGeometryScriptMeshSelectionType* SelectionType, int32* NumSelected);
	class UDynamicMesh* ExpandMeshSelectionToConnected(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, struct FGeometryScriptMeshSelection* NewSelection, enum class EGeometryScriptTopologyConnectionType ConnectionType);
	class UDynamicMesh* ExpandContractMeshSelection(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, struct FGeometryScriptMeshSelection* NewSelection, int32 Iterations, bool bContract, bool bOnlyExpandToFaceNeighbours);
	void DebugPrintMeshSelection(const struct FGeometryScriptMeshSelection& Selection, bool bDisable);
	class UDynamicMesh* CreateSelectAllMeshSelection(class UDynamicMesh* TargetMesh, struct FGeometryScriptMeshSelection* Selection, enum class EGeometryScriptMeshSelectionType SelectionType);
	class UDynamicMesh* ConvertMeshSelectionToIndexList(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, struct FGeometryScriptIndexList* IndexList, enum class EGeometryScriptIndexType* ResultListType, enum class EGeometryScriptIndexType ConvertToType);
	class UDynamicMesh* ConvertMeshSelectionToIndexArray(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, TArray<int32>* IndexArray, enum class EGeometryScriptMeshSelectionType* SelectionType);
	class UDynamicMesh* ConvertMeshSelection(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& FromSelection, struct FGeometryScriptMeshSelection* ToSelection, enum class EGeometryScriptMeshSelectionType NewType, bool bAllowPartialInclusion);
	class UDynamicMesh* ConvertIndexSetToMeshSelection(class UDynamicMesh* TargetMesh, TSet<int32>& IndexSet, enum class EGeometryScriptMeshSelectionType SelectionType, struct FGeometryScriptMeshSelection* Selection);
	class UDynamicMesh* ConvertIndexListToMeshSelection(class UDynamicMesh* TargetMesh, const struct FGeometryScriptIndexList& IndexList, enum class EGeometryScriptMeshSelectionType SelectionType, struct FGeometryScriptMeshSelection* Selection);
	class UDynamicMesh* ConvertIndexArrayToMeshSelection(class UDynamicMesh* TargetMesh, TArray<int32>& IndexArray, enum class EGeometryScriptMeshSelectionType SelectionType, struct FGeometryScriptMeshSelection* Selection);
	void CombineMeshSelections(const struct FGeometryScriptMeshSelection& SelectionA, const struct FGeometryScriptMeshSelection& SelectionB, struct FGeometryScriptMeshSelection* ResultSelection, enum class EGeometryScriptCombineSelectionMode CombineMode);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshSelectionQueryFunctions
class UGeometryScriptLibrary_MeshSelectionQueryFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("GeometryScriptLibrary_MeshSelectionQueryFunctions");

		return Clss;
	}

	class UDynamicMesh* GetMeshSelectionBoundingBox(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, struct FBox* SelectionBounds, bool* bIsEmpty, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* GetMeshSelectionBoundaryLoops(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, TArray<struct FGeometryScriptIndexList>* IndexLoops, TArray<struct FGeometryScriptPolyPath>* PathLoops, int32* NumLoops, bool* bFoundErrors, class UGeometryScriptDebug* Debug);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_CollisionFunctions
class UGeometryScriptLibrary_CollisionFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("GeometryScriptLibrary_CollisionFunctions");

		return Clss;
	}

	class UDynamicMesh* SetStaticMeshCollisionFromMesh(class UDynamicMesh* FromDynamicMesh, class UStaticMesh* ToStaticMeshAsset, const struct FGeometryScriptCollisionFromMeshOptions& Options, class UGeometryScriptDebug* Debug);
	void SetStaticMeshCollisionFromComponent(class UStaticMesh* StaticMeshAsset, class UPrimitiveComponent* SourceComponent, const struct FGeometryScriptSetSimpleCollisionOptions& Options, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* SetDynamicMeshCollisionFromMesh(class UDynamicMesh* FromDynamicMesh, class UDynamicMeshComponent* ToDynamicMeshComponent, const struct FGeometryScriptCollisionFromMeshOptions& Options, class UGeometryScriptDebug* Debug);
	void ResetDynamicMeshCollision(class UDynamicMeshComponent* Component, bool bEmitTransaction, class UGeometryScriptDebug* Debug);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_ContainmentFunctions
class UGeometryScriptLibrary_ContainmentFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("GeometryScriptLibrary_ContainmentFunctions");

		return Clss;
	}

	class UDynamicMesh* ComputeMeshSweptHull(class UDynamicMesh* TargetMesh, class UDynamicMesh*& CopyToMesh, class UDynamicMesh** CopyToMeshOut, const struct FTransform& ProjectionFrame, const struct FGeometryScriptSweptHullOptions& Options, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* ComputeMeshConvexHull(class UDynamicMesh* TargetMesh, class UDynamicMesh*& CopyToMesh, class UDynamicMesh** CopyToMeshOut, const struct FGeometryScriptMeshSelection& Selection, const struct FGeometryScriptConvexHullOptions& Options, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* ComputeMeshConvexDecomposition(class UDynamicMesh* TargetMesh, class UDynamicMesh*& CopyToMesh, class UDynamicMesh** CopyToMeshOut, const struct FGeometryScriptConvexDecompositionOptions& Options, class UGeometryScriptDebug* Debug);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_ListUtilityFunctions
class UGeometryScriptLibrary_ListUtilityFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("GeometryScriptLibrary_ListUtilityFunctions");

		return Clss;
	}

	void SetVectorListItem(struct FGeometryScriptVectorList& VectorList, int32 Index, const struct FVector& NewValue, bool* bIsValidIndex);
	void SetUVListItem(struct FGeometryScriptUVList& UVList, int32 Index, const struct FVector2D& NewUV, bool* bIsValidIndex);
	void SetScalarListItem(struct FGeometryScriptScalarList& ScalarList, int32 Index, double NewValue, bool* bIsValidIndex);
	void SetIndexListItem(struct FGeometryScriptIndexList& IndexList, int32 Index, int32 NewValue, bool* bIsValidIndex);
	void SetColorListItem(struct FGeometryScriptColorList& ColorList, int32 Index, const struct FLinearColor& NewColor, bool* bIsValidIndex);
	int32 GetVectorListLength(const struct FGeometryScriptVectorList& VectorList);
	int32 GetVectorListLastIndex(const struct FGeometryScriptVectorList& VectorList);
	struct FVector GetVectorListItem(const struct FGeometryScriptVectorList& VectorList, int32 Index, bool* bIsValidIndex);
	int32 GetUVListLength(const struct FGeometryScriptUVList& UVList);
	int32 GetUVListLastIndex(const struct FGeometryScriptUVList& UVList);
	struct FVector2D GetUVListItem(const struct FGeometryScriptUVList& UVList, int32 Index, bool* bIsValidIndex);
	int32 GetTriangleListLength(const struct FGeometryScriptTriangleList& TriangleList);
	int32 GetTriangleListLastTriangle(const struct FGeometryScriptTriangleList& TriangleList);
	struct FIntVector GetTriangleListItem(const struct FGeometryScriptTriangleList& TriangleList, int32 Triangle, bool* bIsValidTriangle);
	int32 GetScalarListLength(const struct FGeometryScriptScalarList& ScalarList);
	int32 GetScalarListLastIndex(const struct FGeometryScriptScalarList& ScalarList);
	double GetScalarListItem(const struct FGeometryScriptScalarList& ScalarList, int32 Index, bool* bIsValidIndex);
	int32 GetIndexListLength(const struct FGeometryScriptIndexList& IndexList);
	int32 GetIndexListLastIndex(const struct FGeometryScriptIndexList& IndexList);
	int32 GetIndexListItem(const struct FGeometryScriptIndexList& IndexList, int32 Index, bool* bIsValidIndex);
	int32 GetColorListLength(const struct FGeometryScriptColorList& ColorList);
	int32 GetColorListLastIndex(const struct FGeometryScriptColorList& ColorList);
	struct FLinearColor GetColorListItem(const struct FGeometryScriptColorList& ColorList, int32 Index, bool* bIsValidIndex);
	void ExtractColorListChannels(const struct FGeometryScriptColorList& ColorList, struct FGeometryScriptVectorList* VectorList, int32 XChannelIndex, int32 YChannelIndex, int32 ZChannelIndex);
	void ExtractColorListChannel(const struct FGeometryScriptColorList& ColorList, struct FGeometryScriptScalarList* ScalarList, int32 ChannelIndex);
	void DuplicateVectorList(const struct FGeometryScriptVectorList& VectorList, struct FGeometryScriptVectorList* DuplicateList);
	void DuplicateUVList(const struct FGeometryScriptUVList& UVList, struct FGeometryScriptUVList* DuplicateList);
	void DuplicateScalarList(const struct FGeometryScriptScalarList& ScalarList, struct FGeometryScriptScalarList* DuplicateList);
	void DuplicateIndexList(const struct FGeometryScriptIndexList& IndexList, struct FGeometryScriptIndexList* DuplicateList);
	void DuplicateColorList(const struct FGeometryScriptColorList& ColorList, struct FGeometryScriptColorList* DuplicateList);
	void ConvertVectorListToArray(const struct FGeometryScriptVectorList& VectorList, TArray<struct FVector>* VectorArray);
	void ConvertUVListToArray(const struct FGeometryScriptUVList& UVList, TArray<struct FVector2D>* UVArray);
	void ConvertTriangleListToArray(const struct FGeometryScriptTriangleList& TriangleList, TArray<struct FIntVector>* TriangleArray);
	void ConvertScalarListToArray(const struct FGeometryScriptScalarList& ScalarList, TArray<double>* ScalarArray);
	void ConvertIndexListToArray(const struct FGeometryScriptIndexList& IndexList, TArray<int32>* IndexArray);
	void ConvertColorListToArray(const struct FGeometryScriptColorList& ColorList, TArray<struct FLinearColor>* ColorArray);
	void ConvertArrayToVectorList(TArray<struct FVector>& VectorArray, struct FGeometryScriptVectorList* VectorList);
	void ConvertArrayToUVList(TArray<struct FVector2D>& UVArray, struct FGeometryScriptUVList* UVList);
	void ConvertArrayToTriangleList(TArray<struct FIntVector>& TriangleArray, struct FGeometryScriptTriangleList* TriangleList);
	void ConvertArrayToScalarList(TArray<double>& VectorArray, struct FGeometryScriptScalarList* ScalarList);
	void ConvertArrayToIndexList(TArray<int32>& IndexArray, struct FGeometryScriptIndexList* IndexList, enum class EGeometryScriptIndexType IndexType);
	void ConvertArrayToColorList(TArray<struct FLinearColor>& ColorArray, struct FGeometryScriptColorList* ColorList);
	void ClearVectorList(struct FGeometryScriptVectorList& VectorList, const struct FVector& ClearValue);
	void ClearUVList(struct FGeometryScriptUVList& UVList, const struct FVector2D& ClearUV);
	void ClearScalarList(struct FGeometryScriptScalarList& ScalarList, double ClearValue);
	void ClearIndexList(struct FGeometryScriptIndexList& IndexList, int32 ClearValue);
	void ClearColorList(struct FGeometryScriptColorList& ColorList, const struct FLinearColor& ClearColor);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_StaticMeshFunctions
class UGeometryScriptLibrary_StaticMeshFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("GeometryScriptLibrary_StaticMeshFunctions");

		return Clss;
	}

	void GetSectionMaterialListFromStaticMesh(class UStaticMesh* FromStaticMeshAsset, const struct FGeometryScriptMeshReadLOD& RequestedLOD, TArray<class UMaterialInterface*>* MaterialList, TArray<int32>* MaterialIndex, enum class EGeometryScriptOutcomePins* Outcome, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* CopyMeshToStaticMesh(class UDynamicMesh* FromDynamicMesh, class UStaticMesh* ToStaticMeshAsset, const struct FGeometryScriptCopyMeshToAssetOptions& Options, const struct FGeometryScriptMeshWriteLOD& TargetLod, enum class EGeometryScriptOutcomePins* Outcome, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* CopyMeshToSkeletalMesh(class UDynamicMesh* FromDynamicMesh, class USkeletalMesh* ToSkeletalMeshAsset, const struct FGeometryScriptCopyMeshToAssetOptions& Options, const struct FGeometryScriptMeshWriteLOD& TargetLod, enum class EGeometryScriptOutcomePins* Outcome, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* CopyMeshFromStaticMesh(class UStaticMesh* FromStaticMeshAsset, class UDynamicMesh* ToDynamicMesh, const struct FGeometryScriptCopyMeshFromAssetOptions& AssetOptions, const struct FGeometryScriptMeshReadLOD& RequestedLOD, enum class EGeometryScriptOutcomePins* Outcome, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* CopyMeshFromSkeletalMesh(class USkeletalMesh* FromSkeletalMeshAsset, class UDynamicMesh* ToDynamicMesh, const struct FGeometryScriptCopyMeshFromAssetOptions& AssetOptions, const struct FGeometryScriptMeshReadLOD& RequestedLOD, enum class EGeometryScriptOutcomePins* Outcome, class UGeometryScriptDebug* Debug);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshBakeFunctions
class UGeometryScriptLibrary_MeshBakeFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("GeometryScriptLibrary_MeshBakeFunctions");

		return Clss;
	}

	struct FGeometryScriptBakeTypeOptions MakeBakeTypeVertexColor();
	struct FGeometryScriptBakeTypeOptions MakeBakeTypeTexture(class UTexture2D* SourceTexture, int32 SourceUVLayer);
	struct FGeometryScriptBakeTypeOptions MakeBakeTypeTangentNormal();
	struct FGeometryScriptBakeTypeOptions MakeBakeTypePosition();
	struct FGeometryScriptBakeTypeOptions MakeBakeTypeObjectNormal();
	struct FGeometryScriptBakeTypeOptions MakeBakeTypeMultiTexture(TArray<class UTexture2D*>& MaterialIDSourceTextures, int32 SourceUVLayer);
	struct FGeometryScriptBakeTypeOptions MakeBakeTypeMaterialID();
	struct FGeometryScriptBakeTypeOptions MakeBakeTypeFaceNormal();
	struct FGeometryScriptBakeTypeOptions MakeBakeTypeCurvature(enum class EGeometryScriptBakeCurvatureTypeMode CurvatureType, enum class EGeometryScriptBakeCurvatureColorMode ColorMapping, float ColorRangeMultiplier, float MinRangeMultiplier, enum class EGeometryScriptBakeCurvatureClampMode Clamping);
	struct FGeometryScriptBakeTypeOptions MakeBakeTypeBentNormal(int32 OcclusionRays, float MaxDistance, float SpreadAngle);
	struct FGeometryScriptBakeTypeOptions MakeBakeTypeAmbientOcclusion(int32 OcclusionRays, float MaxDistance, float SpreadAngle, float BiasAngle);
	class UDynamicMesh* BakeVertex(class UDynamicMesh* TargetMesh, const struct FTransform& TargetTransform, const struct FGeometryScriptBakeTargetMeshOptions& TargetOptions, class UDynamicMesh* SourceMesh, const struct FTransform& SourceTransform, const struct FGeometryScriptBakeSourceMeshOptions& SourceOptions, const struct FGeometryScriptBakeOutputType& BakeTypes, const struct FGeometryScriptBakeVertexOptions& BakeOptions, class UGeometryScriptDebug* Debug);
	TArray<class UTexture2D*> BakeTexture(class UDynamicMesh* TargetMesh, const struct FTransform& TargetTransform, const struct FGeometryScriptBakeTargetMeshOptions& TargetOptions, class UDynamicMesh* SourceMesh, const struct FTransform& SourceTransform, const struct FGeometryScriptBakeSourceMeshOptions& SourceOptions, TArray<struct FGeometryScriptBakeTypeOptions>& BakeTypes, const struct FGeometryScriptBakeTextureOptions& BakeOptions, class UGeometryScriptDebug* Debug);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshBasicEditFunctions
class UGeometryScriptLibrary_MeshBasicEditFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("GeometryScriptLibrary_MeshBasicEditFunctions");

		return Clss;
	}

	class UDynamicMesh* SetVertexPosition(class UDynamicMesh* TargetMesh, int32 VertexID, const struct FVector& NewPosition, bool* bIsValidVertex, bool bDeferChangeNotifications);
	class UDynamicMesh* DiscardMeshAttributes(class UDynamicMesh* TargetMesh, bool bDeferChangeNotifications);
	class UDynamicMesh* DeleteVerticesFromMesh(class UDynamicMesh* TargetMesh, const struct FGeometryScriptIndexList& VertexList, int32* NumDeleted, bool bDeferChangeNotifications);
	class UDynamicMesh* DeleteVertexFromMesh(class UDynamicMesh* TargetMesh, int32 VertexID, bool* bWasVertexDeleted, bool bDeferChangeNotifications);
	class UDynamicMesh* DeleteTrianglesFromMesh(class UDynamicMesh* TargetMesh, const struct FGeometryScriptIndexList& TriangleList, int32* NumDeleted, bool bDeferChangeNotifications);
	class UDynamicMesh* DeleteTriangleFromMesh(class UDynamicMesh* TargetMesh, int32 TriangleID, bool* bWasTriangleDeleted, bool bDeferChangeNotifications);
	class UDynamicMesh* DeleteSelectedTrianglesFromMesh(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, int32* NumDeleted, bool bDeferChangeNotifications);
	class UDynamicMesh* AppendMeshTransformed(class UDynamicMesh* TargetMesh, class UDynamicMesh* AppendMesh, TArray<struct FTransform>& AppendTransforms, const struct FTransform& ConstantTransform, bool bConstantTransformIsRelative, bool bDeferChangeNotifications, const struct FGeometryScriptAppendMeshOptions& AppendOptions, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* AppendMeshRepeated(class UDynamicMesh* TargetMesh, class UDynamicMesh* AppendMesh, const struct FTransform& AppendTransform, int32 RepeatCount, bool bApplyTransformToFirstInstance, bool bDeferChangeNotifications, const struct FGeometryScriptAppendMeshOptions& AppendOptions, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* AppendMesh(class UDynamicMesh* TargetMesh, class UDynamicMesh* AppendMesh, const struct FTransform& AppendTransform, bool bDeferChangeNotifications, const struct FGeometryScriptAppendMeshOptions& AppendOptions, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* AppendBuffersToMesh(class UDynamicMesh* TargetMesh, struct FGeometryScriptSimpleMeshBuffers& Buffers, struct FGeometryScriptIndexList* NewTriangleIndicesList, int32 MaterialID, bool bDeferChangeNotifications, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* AddVerticesToMesh(class UDynamicMesh* TargetMesh, const struct FGeometryScriptVectorList& NewPositionsList, struct FGeometryScriptIndexList* NewIndicesList, bool bDeferChangeNotifications);
	class UDynamicMesh* AddVertexToMesh(class UDynamicMesh* TargetMesh, const struct FVector& NewPosition, int32* NewVertexIndex, bool bDeferChangeNotifications);
	class UDynamicMesh* AddTriangleToMesh(class UDynamicMesh* TargetMesh, const struct FIntVector& NewTriangle, int32* NewTriangleIndex, int32 NewTriangleGroupID, bool bDeferChangeNotifications, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* AddTrianglesToMesh(class UDynamicMesh* TargetMesh, const struct FGeometryScriptTriangleList& NewTrianglesList, struct FGeometryScriptIndexList* NewIndicesList, int32 NewTriangleGroupID, bool bDeferChangeNotifications, class UGeometryScriptDebug* Debug);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshBooleanFunctions
class UGeometryScriptLibrary_MeshBooleanFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("GeometryScriptLibrary_MeshBooleanFunctions");

		return Clss;
	}

	class UDynamicMesh* ApplyMeshSelfUnion(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelfUnionOptions& Options, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* ApplyMeshPlaneSlice(class UDynamicMesh* TargetMesh, const struct FTransform& CutFrame, const struct FGeometryScriptMeshPlaneSliceOptions& Options, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* ApplyMeshPlaneCut(class UDynamicMesh* TargetMesh, const struct FTransform& CutFrame, const struct FGeometryScriptMeshPlaneCutOptions& Options, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* ApplyMeshMirror(class UDynamicMesh* TargetMesh, const struct FTransform& MirrorFrame, const struct FGeometryScriptMeshMirrorOptions& Options, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* ApplyMeshBoolean(class UDynamicMesh* TargetMesh, const struct FTransform& TargetTransform, class UDynamicMesh* ToolMesh, const struct FTransform& ToolTransform, enum class EGeometryScriptBooleanOperation Operation, const struct FGeometryScriptMeshBooleanOptions& Options, class UGeometryScriptDebug* Debug);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshComparisonFunctions
class UGeometryScriptLibrary_MeshComparisonFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("GeometryScriptLibrary_MeshComparisonFunctions");

		return Clss;
	}

	class UDynamicMesh* MeasureDistancesBetweenMeshes(class UDynamicMesh* TargetMesh, class UDynamicMesh* OtherMesh, const struct FGeometryScriptMeasureMeshDistanceOptions& Options, double* MaxDistance, double* MinDistance, double* AverageDistance, double* RootMeanSqrDeviation, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* IsSameMeshAs(class UDynamicMesh* TargetMesh, class UDynamicMesh* OtherMesh, const struct FGeometryScriptIsSameMeshOptions& Options, bool* bIsSameMesh, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* IsIntersectingMesh(class UDynamicMesh* TargetMesh, const struct FTransform& TargetTransform, class UDynamicMesh* OtherMesh, const struct FTransform& OtherTransform, bool* bIsIntersecting, class UGeometryScriptDebug* Debug);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshDecompositionFunctions
class UGeometryScriptLibrary_MeshDecompositionFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("GeometryScriptLibrary_MeshDecompositionFunctions");

		return Clss;
	}

	class UDynamicMesh* SplitMeshByPolygroups(class UDynamicMesh* TargetMesh, const struct FGeometryScriptGroupLayer& GroupLayer, TArray<class UDynamicMesh*>* ComponentMeshes, TArray<int32>* ComponentPolygroups, class UDynamicMeshPool* MeshPool, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* SplitMeshByMaterialIDs(class UDynamicMesh* TargetMesh, TArray<class UDynamicMesh*>* ComponentMeshes, TArray<int32>* ComponentMaterialIDs, class UDynamicMeshPool* MeshPool, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* SplitMeshByComponents(class UDynamicMesh* TargetMesh, TArray<class UDynamicMesh*>* ComponentMeshes, class UDynamicMeshPool* MeshPool, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* GetSubMeshFromMesh(class UDynamicMesh* TargetMesh, class UDynamicMesh*& StoreToSubmesh, const struct FGeometryScriptIndexList& TriangleList, class UDynamicMesh** StoreToSubmeshOut, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* CopyMeshToMesh(class UDynamicMesh* CopyFromMesh, class UDynamicMesh*& CopyToMesh, class UDynamicMesh** CopyToMeshOut, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* CopyMeshSelectionToMesh(class UDynamicMesh* TargetMesh, class UDynamicMesh*& StoreToSubmesh, const struct FGeometryScriptMeshSelection& Selection, class UDynamicMesh** StoreToSubmeshOut, bool bAppendToExisting, bool bPreserveGroupIDs, class UGeometryScriptDebug* Debug);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshDeformFunctions
class UGeometryScriptLibrary_MeshDeformFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("GeometryScriptLibrary_MeshDeformFunctions");

		return Clss;
	}

	class UDynamicMesh* ApplyTwistWarpToMesh(class UDynamicMesh* TargetMesh, const struct FGeometryScriptTwistWarpOptions& Options, const struct FTransform& TwistOrientation, float TwistAngle, float TwistExtent, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* ApplyPerlinNoiseToMesh(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, const struct FGeometryScriptPerlinNoiseOptions& Options, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* ApplyMathWarpToMesh(class UDynamicMesh* TargetMesh, const struct FTransform& WarpOrientation, enum class EGeometryScriptMathWarpType WarpType, const struct FGeometryScriptMathWarpOptions& Options, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* ApplyIterativeSmoothingToMesh(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, const struct FGeometryScriptIterativeMeshSmoothingOptions& Options, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* ApplyFlareWarpToMesh(class UDynamicMesh* TargetMesh, const struct FGeometryScriptFlareWarpOptions& Options, const struct FTransform& FlareOrientation, float FlarePercentX, float FlarePercentY, float FlareExtent, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* ApplyDisplaceFromTextureMap(class UDynamicMesh* TargetMesh, class UTexture2D* Texture, const struct FGeometryScriptMeshSelection& Selection, const struct FGeometryScriptDisplaceFromTextureOptions& Options, int32 UVLayer, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* ApplyDisplaceFromPerVertexVectors(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, struct FGeometryScriptVectorList& VectorList, float Magnitude, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* ApplyBendWarpToMesh(class UDynamicMesh* TargetMesh, const struct FGeometryScriptBendWarpOptions& Options, const struct FTransform& BendOrientation, float BendAngle, float BendExtent, class UGeometryScriptDebug* Debug);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshMaterialFunctions
class UGeometryScriptLibrary_MeshMaterialFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("GeometryScriptLibrary_MeshMaterialFunctions");

		return Clss;
	}

	class UDynamicMesh* SetTriangleMaterialID(class UDynamicMesh* TargetMesh, int32 TriangleID, int32 MaterialID, bool* bIsValidTriangle, bool bDeferChangeNotifications);
	class UDynamicMesh* SetPolygroupMaterialID(class UDynamicMesh* TargetMesh, const struct FGeometryScriptGroupLayer& GroupLayer, int32 PolygroupID, int32 MaterialID, bool* bIsValidPolygroupID, bool bDeferChangeNotifications, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* SetMaterialIDOnTriangles(class UDynamicMesh* TargetMesh, const struct FGeometryScriptIndexList& TriangleIDList, int32 MaterialID, bool bDeferChangeNotifications, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* SetMaterialIDForMeshSelection(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, int32 MaterialID, bool bDeferChangeNotifications, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* SetAllTriangleMaterialIDs(class UDynamicMesh* TargetMesh, const struct FGeometryScriptIndexList& TriangleMaterialIDList, bool bDeferChangeNotifications, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* RemapMaterialIDs(class UDynamicMesh* TargetMesh, int32 FromMaterialID, int32 ToMaterialID, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* GetTrianglesByMaterialID(class UDynamicMesh* TargetMesh, int32 MaterialID, struct FGeometryScriptIndexList* TriangleIDList, class UGeometryScriptDebug* Debug);
	int32 GetTriangleMaterialID(class UDynamicMesh* TargetMesh, int32 TriangleID, bool* bIsValidTriangle);
	int32 GetMaxMaterialID(class UDynamicMesh* TargetMesh, bool* bHasMaterialIDs);
	class UDynamicMesh* GetMaterialIDsOfTriangles(class UDynamicMesh* TargetMesh, const struct FGeometryScriptIndexList& TriangleIDList, struct FGeometryScriptIndexList* MaterialIDList, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* GetAllTriangleMaterialIDs(class UDynamicMesh* TargetMesh, struct FGeometryScriptIndexList* MaterialIDList, bool* bHasMaterialIDs);
	class UDynamicMesh* EnableMaterialIDs(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* DeleteTrianglesByMaterialID(class UDynamicMesh* TargetMesh, int32 MaterialID, int32* NumDeleted, bool bDeferChangeNotifications, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* CompactMaterialIDs(class UDynamicMesh* TargetMesh, const TArray<class UMaterialInterface*>& SourceMaterialList, TArray<class UMaterialInterface*>* CompactedMaterialList, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* ClearMaterialIDs(class UDynamicMesh* TargetMesh, int32 ClearValue, class UGeometryScriptDebug* Debug);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshModelingFunctions
class UGeometryScriptLibrary_MeshModelingFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("GeometryScriptLibrary_MeshModelingFunctions");

		return Clss;
	}

	class UDynamicMesh* ApplyMeshShell(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshOffsetOptions& Options, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* ApplyMeshPolygroupBevel(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshBevelOptions& Options, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* ApplyMeshOffsetFaces(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshOffsetFacesOptions& Options, const struct FGeometryScriptMeshSelection& Selection, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* ApplyMeshOffset(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshOffsetOptions& Options, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* ApplyMeshLinearExtrudeFaces(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshLinearExtrudeOptions& Options, const struct FGeometryScriptMeshSelection& Selection, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* ApplyMeshInsetOutsetFaces(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshInsetOutsetFacesOptions& Options, const struct FGeometryScriptMeshSelection& Selection, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* ApplyMeshExtrude_Compatibility_5p0(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshExtrudeOptions& Options, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* ApplyMeshDuplicateFaces(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, struct FGeometryScriptMeshSelection* NewTriangles, const struct FGeometryScriptMeshEditPolygroupOptions& GroupOptions, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* ApplyMeshDisconnectFaces(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, bool bAllowBowtiesInOutput, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* ApplyMeshBevelSelection(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, enum class EGeometryScriptMeshBevelSelectionMode BevelMode, const struct FGeometryScriptMeshBevelSelectionOptions& BevelOptions, class UGeometryScriptDebug* Debug);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshNormalsFunctions
class UGeometryScriptLibrary_MeshNormalsFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("GeometryScriptLibrary_MeshNormalsFunctions");

		return Clss;
	}

	class UDynamicMesh* SetPerVertexNormals(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* SetPerFaceNormals(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* SetMeshTriangleNormals(class UDynamicMesh* TargetMesh, int32 TriangleID, const struct FGeometryScriptTriangle& Normals, bool* bIsValidTriangle, bool bDeferChangeNotifications);
	class UDynamicMesh* RecomputeNormals(class UDynamicMesh* TargetMesh, const struct FGeometryScriptCalculateNormalsOptions& CalculateOptions, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* GetMeshPerVertexNormals(class UDynamicMesh* TargetMesh, struct FGeometryScriptVectorList* NormalList, bool* bIsValidNormalSet, bool* bHasVertexIDGaps, bool bAverageSplitVertexValues);
	class UDynamicMesh* FlipNormals(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* ComputeTangents(class UDynamicMesh* TargetMesh, const struct FGeometryScriptTangentsOptions& Options, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* ComputeSplitNormals(class UDynamicMesh* TargetMesh, const struct FGeometryScriptSplitNormalsOptions& SplitOptions, const struct FGeometryScriptCalculateNormalsOptions& CalculateOptions, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* AutoRepairNormals(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug* Debug);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshPolygroupFunctions
class UGeometryScriptLibrary_MeshPolygroupFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("GeometryScriptLibrary_MeshPolygroupFunctions");

		return Clss;
	}

	class UDynamicMesh* SetPolygroupForMeshSelection(class UDynamicMesh* TargetMesh, const struct FGeometryScriptGroupLayer& GroupLayer, const struct FGeometryScriptMeshSelection& Selection, int32* SetPolygroupIDOut, int32 SetPolygroupID, bool bGenerateNewPolygroup, bool bDeferChangeNotifications);
	class UDynamicMesh* SetNumExtendedPolygroupLayers(class UDynamicMesh* TargetMesh, int32 NumLayers, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* GetTrianglesInPolygroup(class UDynamicMesh* TargetMesh, const struct FGeometryScriptGroupLayer& GroupLayer, int32 PolygroupID, struct FGeometryScriptIndexList& TriangleIDsOut);
	int32 GetTrianglePolygroupID(class UDynamicMesh* TargetMesh, const struct FGeometryScriptGroupLayer& GroupLayer, int32 TriangleID, bool* bIsValidTriangle);
	class UDynamicMesh* GetPolygroupIDsInMesh(class UDynamicMesh* TargetMesh, const struct FGeometryScriptGroupLayer& GroupLayer, struct FGeometryScriptIndexList& PolygroupIDsOut);
	class UDynamicMesh* GetAllTrianglePolygroupIDs(class UDynamicMesh* TargetMesh, const struct FGeometryScriptGroupLayer& GroupLayer, struct FGeometryScriptIndexList& PolygroupIDsOut);
	class UDynamicMesh* EnablePolygroups(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* DeleteTrianglesInPolygroup(class UDynamicMesh* TargetMesh, const struct FGeometryScriptGroupLayer& GroupLayer, int32 PolygroupID, int32* NumDeleted, bool bDeferChangeNotifications, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* CopyPolygroupsLayer(class UDynamicMesh* TargetMesh, const struct FGeometryScriptGroupLayer& FromGroupLayer, const struct FGeometryScriptGroupLayer& ToGroupLayer, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* ConvertUVIslandsToPolygroups(class UDynamicMesh* TargetMesh, const struct FGeometryScriptGroupLayer& GroupLayer, int32 UVLayer, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* ConvertComponentsToPolygroups(class UDynamicMesh* TargetMesh, const struct FGeometryScriptGroupLayer& GroupLayer, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* ComputePolygroupsFromPolygonDetection(class UDynamicMesh* TargetMesh, const struct FGeometryScriptGroupLayer& GroupLayer, bool bRespectUVSeams, bool bRespectHardNormals, double QuadAdjacencyWeight, double QuadMetricClamp, int32 MaxSearchRounds, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* ComputePolygroupsFromAngleThreshold(class UDynamicMesh* TargetMesh, const struct FGeometryScriptGroupLayer& GroupLayer, float CreaseAngle, int32 MinGroupSize, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* ClearPolygroups(class UDynamicMesh* TargetMesh, const struct FGeometryScriptGroupLayer& GroupLayer, int32 ClearValue, class UGeometryScriptDebug* Debug);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshPrimitiveFunctions
class UGeometryScriptLibrary_MeshPrimitiveFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("GeometryScriptLibrary_MeshPrimitiveFunctions");

		return Clss;
	}

	class UDynamicMesh* AppendVoronoiDiagram2D(class UDynamicMesh* TargetMesh, const struct FGeometryScriptPrimitiveOptions& PrimitiveOptions, const struct FTransform& Transform, TArray<struct FVector2D>& VoronoiSites, const struct FGeometryScriptVoronoiOptions& VoronoiOptions, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* AppendTriangulatedPolygon(class UDynamicMesh* TargetMesh, const struct FGeometryScriptPrimitiveOptions& PrimitiveOptions, const struct FTransform& Transform, TArray<struct FVector2D>& PolygonVertices, bool bAllowSelfIntersections, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* AppendTorus(class UDynamicMesh* TargetMesh, const struct FGeometryScriptPrimitiveOptions& PrimitiveOptions, const struct FTransform& Transform, const struct FGeometryScriptRevolveOptions& RevolveOptions, float MajorRadius, float MinorRadius, int32 MajorSteps, int32 MinorSteps, enum class EGeometryScriptPrimitiveOriginMode Origin, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* AppendSweepPolyline(class UDynamicMesh* TargetMesh, const struct FGeometryScriptPrimitiveOptions& PrimitiveOptions, const struct FTransform& Transform, TArray<struct FVector2D>& PolylineVertices, TArray<struct FTransform>& SweepPath, TArray<float>& PolylineTexParamU, TArray<float>& SweepPathTexParamV, bool bLoop, float StartScale, float EndScale, float RotationAngleDeg, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* AppendSweepPolygon(class UDynamicMesh* TargetMesh, const struct FGeometryScriptPrimitiveOptions& PrimitiveOptions, const struct FTransform& Transform, TArray<struct FVector2D>& PolygonVertices, TArray<struct FTransform>& SweepPath, bool bLoop, bool bCapped, float StartScale, float EndScale, float RotationAngleDeg, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* AppendSpiralRevolvePolygon(class UDynamicMesh* TargetMesh, const struct FGeometryScriptPrimitiveOptions& PrimitiveOptions, const struct FTransform& Transform, TArray<struct FVector2D>& PolygonVertices, const struct FGeometryScriptRevolveOptions& RevolveOptions, float Radius, int32 Steps, float RisePerRevolution, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* AppendSphereLatLong(class UDynamicMesh* TargetMesh, const struct FGeometryScriptPrimitiveOptions& PrimitiveOptions, const struct FTransform& Transform, float Radius, int32 StepsPhi, int32 StepsTheta, enum class EGeometryScriptPrimitiveOriginMode Origin, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* AppendSphereBox(class UDynamicMesh* TargetMesh, const struct FGeometryScriptPrimitiveOptions& PrimitiveOptions, const struct FTransform& Transform, float Radius, int32 StepsX, int32 StepsY, int32 StepsZ, enum class EGeometryScriptPrimitiveOriginMode Origin, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* AppendSimpleSweptPolygon(class UDynamicMesh* TargetMesh, const struct FGeometryScriptPrimitiveOptions& PrimitiveOptions, const struct FTransform& Transform, TArray<struct FVector2D>& PolygonVertices, TArray<struct FVector>& SweepPath, bool bLoop, bool bCapped, float StartScale, float EndScale, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* AppendSimpleExtrudePolygon(class UDynamicMesh* TargetMesh, const struct FGeometryScriptPrimitiveOptions& PrimitiveOptions, const struct FTransform& Transform, TArray<struct FVector2D>& PolygonVertices, float Height, int32 HeightSteps, bool bCapped, enum class EGeometryScriptPrimitiveOriginMode Origin, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* AppendRoundRectangleXY(class UDynamicMesh* TargetMesh, const struct FGeometryScriptPrimitiveOptions& PrimitiveOptions, const struct FTransform& Transform, float DimensionX, float DimensionY, float CornerRadius, int32 StepsWidth, int32 StepsHeight, int32 StepsRound, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* AppendRoundRectangle_Compatibility_5_0(class UDynamicMesh* TargetMesh, const struct FGeometryScriptPrimitiveOptions& PrimitiveOptions, const struct FTransform& Transform, float DimensionX, float DimensionY, float CornerRadius, int32 StepsWidth, int32 StepsHeight, int32 StepsRound, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* AppendRevolvePolygon(class UDynamicMesh* TargetMesh, const struct FGeometryScriptPrimitiveOptions& PrimitiveOptions, const struct FTransform& Transform, TArray<struct FVector2D>& PolygonVertices, const struct FGeometryScriptRevolveOptions& RevolveOptions, float Radius, int32 Steps, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* AppendRevolvePath(class UDynamicMesh* TargetMesh, const struct FGeometryScriptPrimitiveOptions& PrimitiveOptions, const struct FTransform& Transform, TArray<struct FVector2D>& PathVertices, const struct FGeometryScriptRevolveOptions& RevolveOptions, int32 Steps, bool bCapped, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* AppendRectangleXY(class UDynamicMesh* TargetMesh, const struct FGeometryScriptPrimitiveOptions& PrimitiveOptions, const struct FTransform& Transform, float DimensionX, float DimensionY, int32 StepsWidth, int32 StepsHeight, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* AppendRectangle_Compatibility_5_0(class UDynamicMesh* TargetMesh, const struct FGeometryScriptPrimitiveOptions& PrimitiveOptions, const struct FTransform& Transform, float DimensionX, float DimensionY, int32 StepsWidth, int32 StepsHeight, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* AppendLinearStairs(class UDynamicMesh* TargetMesh, const struct FGeometryScriptPrimitiveOptions& PrimitiveOptions, const struct FTransform& Transform, float StepWidth, float StepHeight, float StepDepth, int32 NumSteps, bool bFloating, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* AppendDisc(class UDynamicMesh* TargetMesh, const struct FGeometryScriptPrimitiveOptions& PrimitiveOptions, const struct FTransform& Transform, float Radius, int32 AngleSteps, int32 SpokeSteps, float StartAngle, float EndAngle, float HoleRadius, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* AppendCylinder(class UDynamicMesh* TargetMesh, const struct FGeometryScriptPrimitiveOptions& PrimitiveOptions, const struct FTransform& Transform, float Radius, float Height, int32 RadialSteps, int32 HeightSteps, bool bCapped, enum class EGeometryScriptPrimitiveOriginMode Origin, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* AppendCurvedStairs(class UDynamicMesh* TargetMesh, const struct FGeometryScriptPrimitiveOptions& PrimitiveOptions, const struct FTransform& Transform, float StepWidth, float StepHeight, float InnerRadius, float CurveAngle, int32 NumSteps, bool bFloating, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* AppendCone(class UDynamicMesh* TargetMesh, const struct FGeometryScriptPrimitiveOptions& PrimitiveOptions, const struct FTransform& Transform, float BaseRadius, float TopRadius, float Height, int32 RadialSteps, int32 HeightSteps, bool bCapped, enum class EGeometryScriptPrimitiveOriginMode Origin, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* AppendCapsule(class UDynamicMesh* TargetMesh, const struct FGeometryScriptPrimitiveOptions& PrimitiveOptions, const struct FTransform& Transform, float Radius, float LineLength, int32 HemisphereSteps, int32 CircleSteps, enum class EGeometryScriptPrimitiveOriginMode Origin, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* AppendBox(class UDynamicMesh* TargetMesh, const struct FGeometryScriptPrimitiveOptions& PrimitiveOptions, const struct FTransform& Transform, float DimensionX, float DimensionY, float DimensionZ, int32 StepsX, int32 StepsY, int32 StepsZ, enum class EGeometryScriptPrimitiveOriginMode Origin, class UGeometryScriptDebug* Debug);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshQueryFunctions
class UGeometryScriptLibrary_MeshQueryFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("GeometryScriptLibrary_MeshQueryFunctions");

		return Clss;
	}

	bool IsValidVertexID(class UDynamicMesh* TargetMesh, int32 VertexID);
	bool IsValidTriangleID(class UDynamicMesh* TargetMesh, int32 TriangleID);
	struct FVector GetVertexPosition(class UDynamicMesh* TargetMesh, int32 VertexID, bool* bIsValidVertex);
	int32 GetVertexCount(class UDynamicMesh* TargetMesh);
	struct FBox2D GetUVSetBoundingBox(class UDynamicMesh* TargetMesh, int32 UvSetIndex, bool* bIsValidUVSet, bool* bUVSetIsEmpty);
	void GetTriangleUVs(class UDynamicMesh* TargetMesh, int32 UvSetIndex, int32 TriangleID, struct FVector2D* UV1, struct FVector2D* UV2, struct FVector2D* UV3, bool* bHaveValidUVs);
	void GetTrianglePositions(class UDynamicMesh* TargetMesh, int32 TriangleID, bool* bIsValidTriangle, struct FVector* Vertex1, struct FVector* Vertex2, struct FVector* Vertex3);
	struct FIntVector GetTriangleIndices(class UDynamicMesh* TargetMesh, int32 TriangleID, bool* bIsValidTriangle);
	struct FVector GetTriangleFaceNormal(class UDynamicMesh* TargetMesh, int32 TriangleID, bool* bIsValidTriangle);
	int32 GetNumVertexIDs(class UDynamicMesh* TargetMesh);
	int32 GetNumUVSets(class UDynamicMesh* TargetMesh);
	int32 GetNumTriangleIDs(class UDynamicMesh* TargetMesh);
	int32 GetNumOpenBorderLoops(class UDynamicMesh* TargetMesh, bool* bAmbiguousTopologyFound);
	int32 GetNumOpenBorderEdges(class UDynamicMesh* TargetMesh);
	int32 GetNumExtendedPolygroupLayers(class UDynamicMesh* TargetMesh);
	int32 GetNumConnectedComponents(class UDynamicMesh* TargetMesh);
	void GetMeshVolumeArea(class UDynamicMesh* TargetMesh, float* SurfaceArea, float* Volume);
	class FString GetMeshInfoString(class UDynamicMesh* TargetMesh);
	bool GetMeshHasAttributeSet(class UDynamicMesh* TargetMesh);
	struct FBox GetMeshBoundingBox(class UDynamicMesh* TargetMesh);
	bool GetIsDenseMesh(class UDynamicMesh* TargetMesh);
	bool GetIsClosedMesh(class UDynamicMesh* TargetMesh);
	bool GetHasVertexIDGaps(class UDynamicMesh* TargetMesh);
	bool GetHasTriangleIDGaps(class UDynamicMesh* TargetMesh);
	bool GetHasPolygroups(class UDynamicMesh* TargetMesh);
	bool GetHasMaterialIDs(class UDynamicMesh* TargetMesh);
	class UDynamicMesh* GetAllVertexPositions(class UDynamicMesh* TargetMesh, struct FGeometryScriptVectorList* PositionList, bool bSkipGaps, bool* bHasVertexIDGaps);
	class UDynamicMesh* GetAllVertexIDs(class UDynamicMesh* TargetMesh, struct FGeometryScriptIndexList* VertexIDList, bool* bHasVertexIDGaps);
	class UDynamicMesh* GetAllTriangleIndices(class UDynamicMesh* TargetMesh, struct FGeometryScriptTriangleList* TriangleList, bool bSkipGaps, bool* bHasTriangleIDGaps);
	class UDynamicMesh* GetAllTriangleIDs(class UDynamicMesh* TargetMesh, struct FGeometryScriptIndexList* TriangleIDList, bool* bHasTriangleIDGaps);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_RemeshingFunctions
class UGeometryScriptLibrary_RemeshingFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("GeometryScriptLibrary_RemeshingFunctions");

		return Clss;
	}

	class UDynamicMesh* ApplyUniformRemesh(class UDynamicMesh* TargetMesh, const struct FGeometryScriptRemeshOptions& RemeshOptions, const struct FGeometryScriptUniformRemeshOptions& UniformOptions, class UGeometryScriptDebug* Debug);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshRepairFunctions
class UGeometryScriptLibrary_MeshRepairFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("GeometryScriptLibrary_MeshRepairFunctions");

		return Clss;
	}

	class UDynamicMesh* WeldMeshEdges(class UDynamicMesh* TargetMesh, const struct FGeometryScriptWeldEdgesOptions& WeldOptions, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* SplitMeshBowties(class UDynamicMesh* TargetMesh, bool bMeshBowties, bool bAttributeBowties, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* ResolveMeshTJunctions(class UDynamicMesh* TargetMesh, const struct FGeometryScriptResolveTJunctionOptions& ResolveOptions, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* RepairMeshDegenerateGeometry(class UDynamicMesh* TargetMesh, const struct FGeometryScriptDegenerateTriangleOptions& Options, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* RemoveSmallComponents(class UDynamicMesh* TargetMesh, const struct FGeometryScriptRemoveSmallComponentOptions& Options, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* RemoveHiddenTriangles(class UDynamicMesh* TargetMesh, const struct FGeometryScriptRemoveHiddenTrianglesOptions& Options, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* FillAllMeshHoles(class UDynamicMesh* TargetMesh, const struct FGeometryScriptFillHolesOptions& FillOptions, int32* NumFilledHoles, int32* NumFailedHoleFills, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* CompactMesh(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug* Debug);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshSimplifyFunctions
class UGeometryScriptLibrary_MeshSimplifyFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("GeometryScriptLibrary_MeshSimplifyFunctions");

		return Clss;
	}

	class UDynamicMesh* ApplySimplifyToVertexCount(class UDynamicMesh* TargetMesh, int32 VertexCount, const struct FGeometryScriptSimplifyMeshOptions& Options, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* ApplySimplifyToTriangleCount(class UDynamicMesh* TargetMesh, int32 TriangleCount, const struct FGeometryScriptSimplifyMeshOptions& Options, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* ApplySimplifyToTolerance(class UDynamicMesh* TargetMesh, float Tolerance, const struct FGeometryScriptSimplifyMeshOptions& Options, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* ApplySimplifyToPolygroupTopology(class UDynamicMesh* TargetMesh, const struct FGeometryScriptPolygroupSimplifyOptions& Options, const struct FGeometryScriptGroupLayer& GroupLayer, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* ApplySimplifyToPlanar(class UDynamicMesh* TargetMesh, const struct FGeometryScriptPlanarSimplifyOptions& Options, class UGeometryScriptDebug* Debug);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshSpatial
class UGeometryScriptLibrary_MeshSpatial : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("GeometryScriptLibrary_MeshSpatial");

		return Clss;
	}

	void ResetBVH(struct FGeometryScriptDynamicMeshBVH& ResetBVH);
	class UDynamicMesh* RebuildBVHForMesh(class UDynamicMesh* TargetMesh, struct FGeometryScriptDynamicMeshBVH& UpdateBVH, bool bOnlyIfInvalid, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* IsPointInsideMesh(class UDynamicMesh* TargetMesh, struct FGeometryScriptDynamicMeshBVH& QueryBVH, const struct FVector& QueryPoint, const struct FGeometryScriptSpatialQueryOptions& Options, bool* bIsInside, enum class EGeometryScriptContainmentOutcomePins* Outcome, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* IsBVHValidForMesh(class UDynamicMesh* TargetMesh, struct FGeometryScriptDynamicMeshBVH& TestBVH, bool* bIsValid, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* FindNearestRayIntersectionWithMesh(class UDynamicMesh* TargetMesh, struct FGeometryScriptDynamicMeshBVH& QueryBVH, const struct FVector& RayOrigin, const struct FVector& RayDirection, const struct FGeometryScriptSpatialQueryOptions& Options, struct FGeometryScriptRayHitResult* HitResult, enum class EGeometryScriptSearchOutcomePins* Outcome, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* FindNearestPointOnMesh(class UDynamicMesh* TargetMesh, struct FGeometryScriptDynamicMeshBVH& QueryBVH, const struct FVector& QueryPoint, const struct FGeometryScriptSpatialQueryOptions& Options, struct FGeometryScriptTrianglePoint* NearestResult, enum class EGeometryScriptSearchOutcomePins* Outcome, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* BuildBVHForMesh(class UDynamicMesh* TargetMesh, struct FGeometryScriptDynamicMeshBVH* OutputBVH, class UGeometryScriptDebug* Debug);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshSubdivideFunctions
class UGeometryScriptLibrary_MeshSubdivideFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("GeometryScriptLibrary_MeshSubdivideFunctions");

		return Clss;
	}

	class UDynamicMesh* ApplyUniformTessellation(class UDynamicMesh* TargetMesh, int32 TessellationLevel, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* ApplySelectiveTessellation(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, const struct FGeometryScriptSelectiveTessellateOptions& Options, int32 TessellationLevel, enum class ESelectiveTessellatePatternType PatternType, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* ApplyRecursivePNTessellation(class UDynamicMesh* TargetMesh, const struct FGeometryScriptPNTessellateOptions& Options, int32 NumIterations, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* ApplyPNTessellation(class UDynamicMesh* TargetMesh, const struct FGeometryScriptPNTessellateOptions& Options, int32 TessellationLevel, class UGeometryScriptDebug* Debug);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshTransformFunctions
class UGeometryScriptLibrary_MeshTransformFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("GeometryScriptLibrary_MeshTransformFunctions");

		return Clss;
	}

	class UDynamicMesh* TranslateMeshSelection(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, const struct FVector& Translation, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* TranslateMesh(class UDynamicMesh* TargetMesh, const struct FVector& Translation, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* TransformMeshSelection(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, const struct FTransform& Transform, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* TransformMesh(class UDynamicMesh* TargetMesh, const struct FTransform& Transform, bool bFixOrientationForNegativeScale, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* ScaleMeshSelection(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, const struct FVector& Scale, const struct FVector& ScaleOrigin, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* ScaleMesh(class UDynamicMesh* TargetMesh, const struct FVector& Scale, const struct FVector& ScaleOrigin, bool bFixOrientationForNegativeScale, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* RotateMeshSelection(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, const struct FRotator& Rotation, const struct FVector& RotationOrigin, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* RotateMesh(class UDynamicMesh* TargetMesh, const struct FRotator& Rotation, const struct FVector& RotationOrigin, class UGeometryScriptDebug* Debug);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshUVFunctions
class UGeometryScriptLibrary_MeshUVFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("GeometryScriptLibrary_MeshUVFunctions");

		return Clss;
	}

	class UDynamicMesh* TranslateMeshUVs(class UDynamicMesh* TargetMesh, int32 UvSetIndex, const struct FVector2D& Translation, const struct FGeometryScriptMeshSelection& Selection, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* SetNumUVSets(class UDynamicMesh* TargetMesh, int32 NumUVSets, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* SetMeshUVsFromPlanarProjection(class UDynamicMesh* TargetMesh, int32 UvSetIndex, const struct FTransform& PlaneTransform, const struct FGeometryScriptMeshSelection& Selection, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* SetMeshUVsFromCylinderProjection(class UDynamicMesh* TargetMesh, int32 UvSetIndex, const struct FTransform& CylinderTransform, const struct FGeometryScriptMeshSelection& Selection, float SplitAngle, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* SetMeshUVsFromBoxProjection(class UDynamicMesh* TargetMesh, int32 UvSetIndex, const struct FTransform& BoxTransform, const struct FGeometryScriptMeshSelection& Selection, int32 MinIslandTriCount, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* SetMeshTriangleUVs(class UDynamicMesh* TargetMesh, int32 UvSetIndex, int32 TriangleID, const struct FGeometryScriptUVTriangle& UVs, bool* bIsValidTriangle, bool bDeferChangeNotifications);
	class UDynamicMesh* ScaleMeshUVs(class UDynamicMesh* TargetMesh, int32 UvSetIndex, const struct FVector2D& Scale, const struct FVector2D& ScaleOrigin, const struct FGeometryScriptMeshSelection& Selection, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* RotateMeshUVs(class UDynamicMesh* TargetMesh, int32 UvSetIndex, float RotationAngle, const struct FVector2D& RotationOrigin, const struct FGeometryScriptMeshSelection& Selection, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* RepackMeshUVs(class UDynamicMesh* TargetMesh, int32 UvSetIndex, const struct FGeometryScriptRepackUVsOptions& RepackOptions, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* RecomputeMeshUVs(class UDynamicMesh* TargetMesh, int32 UvSetIndex, const struct FGeometryScriptRecomputeUVsOptions& Options, const struct FGeometryScriptMeshSelection& Selection, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* GetMeshUVSizeInfo(class UDynamicMesh* TargetMesh, int32 UvSetIndex, const struct FGeometryScriptMeshSelection& Selection, double* MeshArea, double* UVArea, struct FBox* MeshBounds, struct FBox2D* UVBounds, bool* bIsValidUVSet, bool* bFoundUnsetUVs, bool bOnlyIncludeValidUVTris, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* GetMeshPerVertexUVs(class UDynamicMesh* TargetMesh, int32 UvSetIndex, struct FGeometryScriptUVList* UVList, bool* bIsValidUVSet, bool* bHasVertexIDGaps, bool* bHasSplitUVs, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* CopyUVSet(class UDynamicMesh* TargetMesh, int32 FromUVSet, int32 ToUVSet, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* CopyMeshUVLayerToMesh(class UDynamicMesh* CopyFromMesh, int32 UvSetIndex, class UDynamicMesh*& CopyToUVMesh, class UDynamicMesh** CopyToUVMeshOut, bool* bInvalidTopology, bool* bIsValidUVSet, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* CopyMeshToMeshUVLayer(class UDynamicMesh* CopyFromUVMesh, int32 ToUVSetIndex, class UDynamicMesh*& CopyToMesh, class UDynamicMesh** CopyToMeshOut, bool* bFoundTopologyErrors, bool* bIsValidUVSet, bool bOnlyUVPositions, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* AutoGenerateXAtlasMeshUVs(class UDynamicMesh* TargetMesh, int32 UvSetIndex, const struct FGeometryScriptXAtlasOptions& Options, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* AutoGeneratePatchBuilderMeshUVs(class UDynamicMesh* TargetMesh, int32 UvSetIndex, const struct FGeometryScriptPatchBuilderOptions& Options, class UGeometryScriptDebug* Debug);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshVertexColorFunctions
class UGeometryScriptLibrary_MeshVertexColorFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("GeometryScriptLibrary_MeshVertexColorFunctions");

		return Clss;
	}

	class UDynamicMesh* SetMeshSelectionVertexColor(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMeshSelection& Selection, const struct FLinearColor& Color, const struct FGeometryScriptColorFlags& Flags, bool bCreateColorSeam, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* SetMeshPerVertexColors(class UDynamicMesh* TargetMesh, const struct FGeometryScriptColorList& VertexColorList, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* SetMeshConstantVertexColor(class UDynamicMesh* TargetMesh, const struct FLinearColor& Color, const struct FGeometryScriptColorFlags& Flags, bool bClearExisting, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* GetMeshPerVertexColors(class UDynamicMesh* TargetMesh, struct FGeometryScriptColorList* ColorList, bool* bIsValidColorSet, bool* bHasVertexIDGaps, bool bBlendSplitVertexValues);
	class UDynamicMesh* ConvertMeshVertexColorsSRGBToLinear(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* ConvertMeshVertexColorsLinearToSRGB(class UDynamicMesh* TargetMesh, class UGeometryScriptDebug* Debug);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_MeshVoxelFunctions
class UGeometryScriptLibrary_MeshVoxelFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("GeometryScriptLibrary_MeshVoxelFunctions");

		return Clss;
	}

	class UDynamicMesh* ApplyMeshSolidify(class UDynamicMesh* TargetMesh, const struct FGeometryScriptSolidifyOptions& Options, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* ApplyMeshMorphology(class UDynamicMesh* TargetMesh, const struct FGeometryScriptMorphologyOptions& Options, class UGeometryScriptDebug* Debug);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_PolyPathFunctions
class UGeometryScriptLibrary_PolyPathFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("GeometryScriptLibrary_PolyPathFunctions");

		return Clss;
	}

	void SampleSplineToTransforms(class USplineComponent* Spline, TArray<struct FTransform>* Frames, TArray<double>* FrameTimes, const struct FGeometryScriptSplineSamplingOptions& SamplingOptions, const struct FTransform& RelativeTransform, bool bIncludeScale);
	struct FVector GetPolyPathVertex(const struct FGeometryScriptPolyPath& PolyPath, int32 Index, bool* bIsValidIndex);
	struct FVector GetPolyPathTangent(const struct FGeometryScriptPolyPath& PolyPath, int32 Index, bool* bIsValidIndex);
	int32 GetPolyPathNumVertices(const struct FGeometryScriptPolyPath& PolyPath);
	int32 GetPolyPathLastIndex(const struct FGeometryScriptPolyPath& PolyPath);
	double GetPolyPathArcLength(const struct FGeometryScriptPolyPath& PolyPath);
	int32 GetNearestVertexIndex(const struct FGeometryScriptPolyPath& PolyPath, const struct FVector& Point);
	struct FGeometryScriptPolyPath FlattenTo2DOnAxis(const struct FGeometryScriptPolyPath& PolyPath, enum class EGeometryScriptAxis DropAxis);
	struct FGeometryScriptPolyPath CreateCirclePath3D(const struct FTransform& Transform, float Radius, int32 NumPoints);
	struct FGeometryScriptPolyPath CreateCirclePath2D(const struct FVector2D& Center, float Radius, int32 NumPoints);
	struct FGeometryScriptPolyPath CreateArcPath3D(const struct FTransform& Transform, float Radius, int32 NumPoints, float StartAngle, float EndAngle);
	struct FGeometryScriptPolyPath CreateArcPath2D(const struct FVector2D& Center, float Radius, int32 NumPoints, float StartAngle, float EndAngle);
	void ConvertSplineToPolyPath(class USplineComponent* Spline, struct FGeometryScriptPolyPath* PolyPath, const struct FGeometryScriptSplineSamplingOptions& SamplingOptions);
	void ConvertPolyPathToArrayOfVector2D(const struct FGeometryScriptPolyPath& PolyPath, TArray<struct FVector2D>* VertexArray);
	void ConvertPolyPathToArray(const struct FGeometryScriptPolyPath& PolyPath, TArray<struct FVector>* VertexArray);
	void ConvertArrayToPolyPath(TArray<struct FVector>& VertexArray, struct FGeometryScriptPolyPath* PolyPath);
	void ConvertArrayOfVector2DToPolyPath(TArray<struct FVector2D>& VertexArray, struct FGeometryScriptPolyPath* PolyPath);
	TArray<struct FVector2D> Conv_GeometryScriptPolyPathToArrayOfVector2D(const struct FGeometryScriptPolyPath& PolyPath);
	TArray<struct FVector> Conv_GeometryScriptPolyPathToArray(const struct FGeometryScriptPolyPath& PolyPath);
	struct FGeometryScriptPolyPath Conv_ArrayToGeometryScriptPolyPath(TArray<struct FVector>& PathVertices);
	struct FGeometryScriptPolyPath Conv_ArrayOfVector2DToGeometryScriptPolyPath(TArray<struct FVector2D>& PathVertices);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_SceneUtilityFunctions
class UGeometryScriptLibrary_SceneUtilityFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("GeometryScriptLibrary_SceneUtilityFunctions");

		return Clss;
	}

	void SetComponentMaterialList(class UPrimitiveComponent* Component, TArray<class UMaterialInterface*>& MaterialList, class UGeometryScriptDebug* Debug);
	class UDynamicMeshPool* CreateDynamicMeshPool();
	class UDynamicMesh* CopyMeshFromComponent(class USceneComponent* Component, class UDynamicMesh* ToDynamicMesh, const struct FGeometryScriptCopyMeshFromComponentOptions& Options, bool bTransformToWorld, struct FTransform* LocalToWorld, enum class EGeometryScriptOutcomePins* Outcome, class UGeometryScriptDebug* Debug);
	class UDynamicMesh* CopyCollisionMeshesFromObject(class UObject* FromObject, class UDynamicMesh* ToDynamicMesh, bool bTransformToWorld, struct FTransform* LocalToWorld, enum class EGeometryScriptOutcomePins* Outcome, bool bUseComplexCollision, int32 SphereResolution, class UGeometryScriptDebug* Debug);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_TextureMapFunctions
class UGeometryScriptLibrary_TextureMapFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("GeometryScriptLibrary_TextureMapFunctions");

		return Clss;
	}

	void SampleTexture2DAtUVPositions(const struct FGeometryScriptUVList& UVList, class UTexture2D* Texture, const struct FGeometryScriptSampleTextureOptions& SampleOptions, struct FGeometryScriptColorList* ColorList, class UGeometryScriptDebug* Debug);
};

// 0x0 (0x28 - 0x28)
// Class GeometryScriptingCore.GeometryScriptLibrary_VectorMathFunctions
class UGeometryScriptLibrary_VectorMathFunctions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("GeometryScriptLibrary_VectorMathFunctions");

		return Clss;
	}

	struct FGeometryScriptScalarList VectorToScalar(const struct FGeometryScriptVectorList& VectorList, double ConstantX, double ConstantY, double ConstantZ);
	void VectorNormalizeInPlace(struct FGeometryScriptVectorList& VectorList, const struct FVector& SetOnFailure);
	struct FGeometryScriptScalarList VectorLength(const struct FGeometryScriptVectorList& VectorList);
	struct FGeometryScriptScalarList VectorDot(const struct FGeometryScriptVectorList& VectorListA, const struct FGeometryScriptVectorList& VectorListB);
	struct FGeometryScriptVectorList VectorCross(const struct FGeometryScriptVectorList& VectorListA, const struct FGeometryScriptVectorList& VectorListB);
	void VectorBlendInPlace(const struct FGeometryScriptVectorList& VectorListA, struct FGeometryScriptVectorList& VectorListB, double ConstantA, double ConstantB);
	struct FGeometryScriptVectorList VectorBlend(const struct FGeometryScriptVectorList& VectorListA, const struct FGeometryScriptVectorList& VectorListB, double ConstantA, double ConstantB);
	void ScalarVectorMultiplyInPlace(const struct FGeometryScriptScalarList& ScalarList, struct FGeometryScriptVectorList& VectorList, double ScalarMultiplier);
	struct FGeometryScriptVectorList ScalarVectorMultiply(const struct FGeometryScriptScalarList& ScalarList, const struct FGeometryScriptVectorList& VectorList, double ScalarMultiplier);
	void ScalarMultiplyInPlace(const struct FGeometryScriptScalarList& ScalarListA, struct FGeometryScriptScalarList& ScalarListB, double ConstantMultiplier);
	struct FGeometryScriptScalarList ScalarMultiply(const struct FGeometryScriptScalarList& ScalarListA, const struct FGeometryScriptScalarList& ScalarListB, double ConstantMultiplier);
	void ScalarInvertInPlace(struct FGeometryScriptScalarList& ScalarList, double Numerator, double SetOnFailure, double Epsilon);
	struct FGeometryScriptScalarList ScalarInvert(const struct FGeometryScriptScalarList& ScalarList, double Numerator, double SetOnFailure, double Epsilon);
	void ScalarBlendInPlace(const struct FGeometryScriptScalarList& ScalarListA, struct FGeometryScriptScalarList& ScalarListB, double ConstantA, double ConstantB);
	struct FGeometryScriptScalarList ScalarBlend(const struct FGeometryScriptScalarList& ScalarListA, const struct FGeometryScriptScalarList& ScalarListB, double ConstantA, double ConstantB);
	void ConstantVectorMultiplyInPlace(double Constant, struct FGeometryScriptVectorList& VectorList);
	struct FGeometryScriptVectorList ConstantVectorMultiply(double Constant, const struct FGeometryScriptVectorList& VectorList);
	void ConstantScalarMultiplyInPlace(double Constant, struct FGeometryScriptScalarList& ScalarList);
	struct FGeometryScriptScalarList ConstantScalarMultiply(double Constant, const struct FGeometryScriptScalarList& ScalarList);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
