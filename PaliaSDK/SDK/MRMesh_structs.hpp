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

enum class EMeshTrackerVertexColorMode : uint8
{
	EMeshTrackerVertexColorMode__None = 0,
	EMeshTrackerVertexColorMode__Confidence = 1,
	EMeshTrackerVertexColorMode__Block = 2,
	EMeshTrackerVertexColorMode__EMeshTrackerVertexColorMode_MAX = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x1 (0x1 - 0x0)
// ScriptStruct MRMesh.MRMeshConfiguration
struct FMRMeshConfiguration
{
public:
	uint8                                        Pad_1E23[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
