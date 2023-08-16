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

enum class EDynamicMeshComponentTangentsMode : uint8
{
	EDynamicMeshComponentTangentsMode__NoTangents = 0,
	EDynamicMeshComponentTangentsMode__AutoCalculated = 1,
	EDynamicMeshComponentTangentsMode__ExternallyProvided = 2,
	EDynamicMeshComponentTangentsMode__EDynamicMeshComponentTangentsMode_MAX = 3,
};

enum class EDynamicMeshComponentColorOverrideMode : uint8
{
	EDynamicMeshComponentColorOverrideMode__None = 0,
	EDynamicMeshComponentColorOverrideMode__VertexColors = 1,
	EDynamicMeshComponentColorOverrideMode__Polygroups = 2,
	EDynamicMeshComponentColorOverrideMode__Constant = 3,
	EDynamicMeshComponentColorOverrideMode__EDynamicMeshComponentColorOverrideMode_MAX = 4,
};

enum class EDynamicMeshComponentRenderUpdateMode : uint8
{
	EDynamicMeshComponentRenderUpdateMode__NoUpdate = 0,
	EDynamicMeshComponentRenderUpdateMode__FullUpdate = 1,
	EDynamicMeshComponentRenderUpdateMode__FastUpdate = 2,
	EDynamicMeshComponentRenderUpdateMode__EDynamicMeshComponentRenderUpdateMode_MAX = 3,
};

enum class EDynamicMeshChangeType : uint8
{
	EDynamicMeshChangeType__GeneralEdit = 0,
	EDynamicMeshChangeType__MeshChange = 1,
	EDynamicMeshChangeType__MeshReplacementChange = 2,
	EDynamicMeshChangeType__MeshVertexChange = 3,
	EDynamicMeshChangeType__DeformationEdit = 4,
	EDynamicMeshChangeType__AttributeEdit = 5,
	EDynamicMeshChangeType__EDynamicMeshChangeType_MAX = 6,
};

enum class EDynamicMeshAttributeChangeFlags : uint8
{
	EDynamicMeshAttributeChangeFlags__Unknown = 0,
	EDynamicMeshAttributeChangeFlags__MeshTopology = 1,
	EDynamicMeshAttributeChangeFlags__VertexPositions = 2,
	EDynamicMeshAttributeChangeFlags__NormalsTangents = 4,
	EDynamicMeshAttributeChangeFlags__VertexColors = 8,
	EDynamicMeshAttributeChangeFlags__UVs = 16,
	EDynamicMeshAttributeChangeFlags__TriangleGroups = 32,
	EDynamicMeshAttributeChangeFlags__EDynamicMeshAttributeChangeFlags_MAX = 33,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x20 - 0x0)
// ScriptStruct GeometryFramework.DynamicMeshChangeInfo
struct FDynamicMeshChangeInfo
{
public:
	enum class EDynamicMeshChangeType            Type;                                              // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDynamicMeshAttributeChangeFlags  Flags;                                             // 0x1(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsRevertChange;                                   // 0x2(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_185C[0x1D];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
