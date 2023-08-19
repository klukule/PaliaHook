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

// 0x2C8 (0x2F0 - 0x28)
// Class MeshDescription.MeshDescriptionBase
class UMeshDescriptionBase : public UObject
{
public:
	uint8                                        Pad_252D[0x2C8];                                   // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MeshDescriptionBase");
		return Clss;
	}

	void SetVertexPosition(const struct FVertexID& InVertexID, struct FVector& InPosition);
	void SetPolygonVertexInstances(const struct FPolygonID& InPolygonID, TArray<struct FVertexInstanceID>& InVertexInstanceIDs);
	void SetPolygonPolygonGroup(const struct FPolygonID& InPolygonID, const struct FPolygonGroupID& InPolygonGroupID);
	void ReversePolygonFacing(const struct FPolygonID& InPolygonID);
	void ReserveNewVertices(int32 InNumberOfNewVertices);
	void ReserveNewVertexInstances(int32 InNumberOfNewVertexInstances);
	void ReserveNewTriangles(int32 InNumberOfNewTriangles);
	void ReserveNewPolygons(int32 InNumberOfNewPolygons);
	void ReserveNewPolygonGroups(int32 InNumberOfNewPolygonGroups);
	void ReserveNewEdges(int32 InNumberOfNewEdges);
	bool IsVertexValid(const struct FVertexID& InVertexID);
	bool IsVertexOrphaned(const struct FVertexID& InVertexID);
	bool IsVertexInstanceValid(const struct FVertexInstanceID& InVertexInstanceID);
	bool IsTriangleValid(const struct FTriangleID& InTriangleID);
	bool IsTrianglePartOfNgon(const struct FTriangleID& InTriangleID);
	bool IsPolygonValid(const struct FPolygonID& InPolygonID);
	bool IsPolygonGroupValid(const struct FPolygonGroupID& InPolygonGroupID);
	bool IsEmpty();
	bool IsEdgeValid(const struct FEdgeID& InEdgeID);
	bool IsEdgeInternalToPolygon(const struct FEdgeID& InEdgeID, const struct FPolygonID& InPolygonID);
	bool IsEdgeInternal(const struct FEdgeID& InEdgeID);
	void GetVertexVertexInstances(const struct FVertexID& InVertexID, TArray<struct FVertexInstanceID>* InOutVertexInstanceIDs);
	struct FVector GetVertexPosition(const struct FVertexID& InVertexID);
	struct FEdgeID GetVertexPairEdge(const struct FVertexID& InVertexID0, const struct FVertexID& InVertexID1);
	struct FVertexID GetVertexInstanceVertex(const struct FVertexInstanceID& InVertexInstanceID);
	struct FEdgeID GetVertexInstancePairEdge(const struct FVertexInstanceID& InVertexInstanceID0, const struct FVertexInstanceID& InVertexInstanceID1);
	struct FVertexInstanceID GetVertexInstanceForTriangleVertex(const struct FTriangleID& InTriangleID, const struct FVertexID& InVertexID);
	struct FVertexInstanceID GetVertexInstanceForPolygonVertex(const struct FPolygonID& InPolygonID, const struct FVertexID& InVertexID);
	int32 GetVertexInstanceCount();
	void GetVertexInstanceConnectedTriangles(const struct FVertexInstanceID& InVertexInstanceID, TArray<struct FTriangleID>* InOutConnectedTriangleIDs);
	void GetVertexInstanceConnectedPolygons(const struct FVertexInstanceID& InVertexInstanceID, TArray<struct FPolygonID>* InOutConnectedPolygonIDs);
	int32 GetVertexCount();
	void GetVertexConnectedTriangles(const struct FVertexID& InVertexID, TArray<struct FTriangleID>* InOutConnectedTriangleIDs);
	void GetVertexConnectedPolygons(const struct FVertexID& InVertexID, TArray<struct FPolygonID>* InOutConnectedPolygonIDs);
	void GetVertexConnectedEdges(const struct FVertexID& InVertexID, TArray<struct FEdgeID>* InOutEdgeIDs);
	void GetVertexAdjacentVertices(const struct FVertexID& InVertexID, TArray<struct FVertexID>* InOutAdjacentVertexIDs);
	void GetTriangleVertices(const struct FTriangleID& InTriangleID, TArray<struct FVertexID>* InOutVertexIDs);
	void GetTriangleVertexInstances(const struct FTriangleID& InTriangleID, TArray<struct FVertexInstanceID>* InOutVertexInstanceIDs);
	struct FVertexInstanceID GetTriangleVertexInstance(const struct FTriangleID& InTriangleID, int32 InIndex);
	struct FPolygonGroupID GetTrianglePolygonGroup(const struct FTriangleID& InTriangleID);
	struct FPolygonID GetTrianglePolygon(const struct FTriangleID& InTriangleID);
	void GetTriangleEdges(const struct FTriangleID& InTriangleID, TArray<struct FEdgeID>* InOutEdgeIDs);
	int32 GetTriangleCount();
	void GetTriangleAdjacentTriangles(const struct FTriangleID& InTriangleID, TArray<struct FTriangleID>* InOutTriangleIDs);
	void GetPolygonVertices(const struct FPolygonID& InPolygonID, TArray<struct FVertexID>* InOutVertexIDs);
	void GetPolygonVertexInstances(const struct FPolygonID& InPolygonID, TArray<struct FVertexInstanceID>* InOutVertexInstanceIDs);
	void GetPolygonTriangles(const struct FPolygonID& InPolygonID, TArray<struct FTriangleID>* InOutTriangleIDs);
	struct FPolygonGroupID GetPolygonPolygonGroup(const struct FPolygonID& InPolygonID);
	void GetPolygonPerimeterEdges(const struct FPolygonID& InPolygonID, TArray<struct FEdgeID>* InOutEdgeIDs);
	void GetPolygonInternalEdges(const struct FPolygonID& InPolygonID, TArray<struct FEdgeID>* InOutEdgeIDs);
	void GetPolygonGroupPolygons(const struct FPolygonGroupID& InPolygonGroupID, TArray<struct FPolygonID>* InOutPolygonIDs);
	int32 GetPolygonGroupCount();
	int32 GetPolygonCount();
	void GetPolygonAdjacentPolygons(const struct FPolygonID& InPolygonID, TArray<struct FPolygonID>* InOutPolygonIDs);
	int32 GetNumVertexVertexInstances(const struct FVertexID& InVertexID);
	int32 GetNumVertexInstanceConnectedTriangles(const struct FVertexInstanceID& InVertexInstanceID);
	int32 GetNumVertexInstanceConnectedPolygons(const struct FVertexInstanceID& InVertexInstanceID);
	int32 GetNumVertexConnectedTriangles(const struct FVertexID& InVertexID);
	int32 GetNumVertexConnectedPolygons(const struct FVertexID& InVertexID);
	int32 GetNumVertexConnectedEdges(const struct FVertexID& InVertexID);
	int32 GetNumPolygonVertices(const struct FPolygonID& InPolygonID);
	int32 GetNumPolygonTriangles(const struct FPolygonID& InPolygonID);
	int32 GetNumPolygonInternalEdges(const struct FPolygonID& InPolygonID);
	int32 GetNumPolygonGroupPolygons(const struct FPolygonGroupID& InPolygonGroupID);
	int32 GetNumEdgeConnectedTriangles(const struct FEdgeID& InEdgeID);
	int32 GetNumEdgeConnectedPolygons(const struct FEdgeID& InEdgeID);
	void GetEdgeVertices(const struct FEdgeID& InEdgeID, TArray<struct FVertexID>* InOutVertexIDs);
	struct FVertexID GetEdgeVertex(const struct FEdgeID& InEdgeID, int32 InVertexNumber);
	int32 GetEdgeCount();
	void GetEdgeConnectedTriangles(const struct FEdgeID& InEdgeID, TArray<struct FTriangleID>* InOutConnectedTriangleIDs);
	void GetEdgeConnectedPolygons(const struct FEdgeID& InEdgeID, TArray<struct FPolygonID>* InOutConnectedPolygonIDs);
	void Empty();
	void DeleteVertexInstance(const struct FVertexInstanceID& InVertexInstanceID, TArray<struct FVertexID>* InOrphanedVertices);
	void DeleteVertex(const struct FVertexID& InVertexID);
	void DeleteTriangle(const struct FTriangleID& InTriangleID, TArray<struct FEdgeID>* InOrphanedEdges, TArray<struct FVertexInstanceID>* InOrphanedVertexInstances, TArray<struct FPolygonGroupID>* InOrphanedPolygonGroupsPtr);
	void DeletePolygonGroup(const struct FPolygonGroupID& InPolygonGroupID);
	void DeletePolygon(const struct FPolygonID& InPolygonID, TArray<struct FEdgeID>* InOrphanedEdges, TArray<struct FVertexInstanceID>* InOrphanedVertexInstances, TArray<struct FPolygonGroupID>* InOrphanedPolygonGroups);
	void DeleteEdge(const struct FEdgeID& InEdgeID, TArray<struct FVertexID>* InOrphanedVertices);
	void CreateVertexWithID(const struct FVertexID& InVertexID);
	void CreateVertexInstanceWithID(const struct FVertexInstanceID& InVertexInstanceID, const struct FVertexID& InVertexID);
	struct FVertexInstanceID CreateVertexInstance(const struct FVertexID& InVertexID);
	struct FVertexID CreateVertex();
	void CreateTriangleWithID(const struct FTriangleID& InTriangleID, const struct FPolygonGroupID& InPolygonGroupID, TArray<struct FVertexInstanceID>& InVertexInstanceIDs, TArray<struct FEdgeID>* InNewEdgeIDs);
	struct FTriangleID CreateTriangle(const struct FPolygonGroupID& InPolygonGroupID, TArray<struct FVertexInstanceID>& InVertexInstanceIDs, TArray<struct FEdgeID>* InNewEdgeIDs);
	void CreatePolygonWithID(const struct FPolygonID& InPolygonID, const struct FPolygonGroupID& InPolygonGroupID, TArray<struct FVertexInstanceID>* InVertexInstanceIDs, TArray<struct FEdgeID>* InNewEdgeIDs);
	void CreatePolygonGroupWithID(const struct FPolygonGroupID& InPolygonGroupID);
	struct FPolygonGroupID CreatePolygonGroup();
	struct FPolygonID CreatePolygon(const struct FPolygonGroupID& InPolygonGroupID, TArray<struct FVertexInstanceID>* InVertexInstanceIDs, TArray<struct FEdgeID>* InNewEdgeIDs);
	void CreateEdgeWithID(const struct FEdgeID& InEdgeID, const struct FVertexID& InVertexID0, const struct FVertexID& InVertexID1);
	struct FEdgeID CreateEdge(const struct FVertexID& InVertexID0, const struct FVertexID& InVertexID1);
	void ComputePolygonTriangulation(const struct FPolygonID& InPolygonID);
};

// 0x0 (0x28 - 0x28)
// Class MeshDescription.MeshDescriptionBaseBulkData
class UMeshDescriptionBaseBulkData : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MeshDescriptionBaseBulkData");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
