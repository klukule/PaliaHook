#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EComputeNTBsOptions : uint8
{
	EComputeNTBsOptions__None      = 0,
	EComputeNTBsOptions__Normals   = 1,
	EComputeNTBsOptions__Tangents  = 2,
	EComputeNTBsOptions__WeightedNTBs = 4,
	EComputeNTBsOptions__EComputeNTBsOptions_MAX = 5,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x4 (0x4 - 0x0)
// ScriptStruct MeshDescription.ElementID
struct FElementID
{
public:
	int32                                        IDValue;                                           // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
};

// 0x0 (0x4 - 0x4)
// ScriptStruct MeshDescription.VertexID
struct FVertexID : public FElementID
{
public:
};

// 0x0 (0x4 - 0x4)
// ScriptStruct MeshDescription.VertexInstanceID
struct FVertexInstanceID : public FElementID
{
public:
};

// 0x0 (0x4 - 0x4)
// ScriptStruct MeshDescription.EdgeID
struct FEdgeID : public FElementID
{
public:
};

// 0x0 (0x4 - 0x4)
// ScriptStruct MeshDescription.UVID
struct FUVID : public FElementID
{
public:
};

// 0x0 (0x4 - 0x4)
// ScriptStruct MeshDescription.TriangleID
struct FTriangleID : public FElementID
{
public:
};

// 0x0 (0x4 - 0x4)
// ScriptStruct MeshDescription.PolygonGroupID
struct FPolygonGroupID : public FElementID
{
public:
};

// 0x0 (0x4 - 0x4)
// ScriptStruct MeshDescription.PolygonID
struct FPolygonID : public FElementID
{
public:
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
