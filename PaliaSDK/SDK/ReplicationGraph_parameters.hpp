#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x0 - 0x0)
// Function ReplicationGraph.ReplicationGraphDebugActor.ServerStopDebugging
struct AReplicationGraphDebugActor_ServerStopDebugging_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ReplicationGraph.ReplicationGraphDebugActor.ServerStartDebugging
struct AReplicationGraphDebugActor_ServerStartDebugging_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function ReplicationGraph.ReplicationGraphDebugActor.ServerSetPeriodFrameForClass
struct AReplicationGraphDebugActor_ServerSetPeriodFrameForClass_Params
{
public:
	class UClass*                                Class;                                             // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PeriodFrame;                                       // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6ED[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function ReplicationGraph.ReplicationGraphDebugActor.ServerSetCullDistanceForClass
struct AReplicationGraphDebugActor_ServerSetCullDistanceForClass_Params
{
public:
	class UClass*                                Class;                                             // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CullDistance;                                      // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6F1[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function ReplicationGraph.ReplicationGraphDebugActor.ServerSetConditionalActorBreakpoint
struct AReplicationGraphDebugActor_ServerSetConditionalActorBreakpoint_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function ReplicationGraph.ReplicationGraphDebugActor.ServerPrintCullDistances
struct AReplicationGraphDebugActor_ServerPrintCullDistances_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function ReplicationGraph.ReplicationGraphDebugActor.ServerPrintAllActorInfo
struct AReplicationGraphDebugActor_ServerPrintAllActorInfo_Params
{
public:
	class FString                                Str;                                               // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function ReplicationGraph.ReplicationGraphDebugActor.ServerCellInfo
struct AReplicationGraphDebugActor_ServerCellInfo_Params
{
public:
};

// 0x40 (0x40 - 0x0)
// Function ReplicationGraph.ReplicationGraphDebugActor.ClientCellInfo
struct AReplicationGraphDebugActor_ClientCellInfo_Params
{
public:
	struct FVector                               CellLocation;                                      // 0x0(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               CellExtent;                                        // 0x18(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AActor*>                        Actors;                                            // 0x30(0x10)(ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
