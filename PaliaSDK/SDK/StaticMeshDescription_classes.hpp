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

// 0x0 (0x2F0 - 0x2F0)
// Class StaticMeshDescription.StaticMeshDescription
class UStaticMeshDescription : public UMeshDescriptionBase
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("StaticMeshDescription");
		return Clss;
	}

	void SetVertexInstanceUV(const struct FVertexInstanceID& InVertexInstanceID, const struct FVector2D& InUV, int32 InUVIndex);
	void SetPolygonGroupMaterialSlotName(const struct FPolygonGroupID& InPolygonGroupID, class FName& InSlotName);
	struct FVector2D GetVertexInstanceUV(const struct FVertexInstanceID& InVertexInstanceID, int32 InUVIndex);
	void CreateCube(const struct FVector& InCenter, const struct FVector& InHalfExtents, const struct FPolygonGroupID& InPolygonGroup, struct FPolygonID* InPolygonID_PlusX, struct FPolygonID* InPolygonID_MinusX, struct FPolygonID* InPolygonID_PlusY, struct FPolygonID* InPolygonID_MinusY, struct FPolygonID* InPolygonID_PlusZ, struct FPolygonID* InPolygonID_MinusZ);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
