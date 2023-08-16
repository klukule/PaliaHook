#pragma once

// Dumped with Dumper-7!

#include "SDK.hpp"

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x10 - 0x0)
// Function Agones.AgonesComponent.WatchGameServer
struct UAgonesComponent_WatchGameServer_Params
{
public:
	FDelegateProperty_                           WatchDelegate;                                     // 0x0(0x10)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function Agones.AgonesComponent.Shutdown
struct UAgonesComponent_Shutdown_Params
{
public:
	FDelegateProperty_                           SuccessDelegate;                                   // 0x0(0x10)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           ErrorDelegate;                                     // 0x10(0x10)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function Agones.AgonesComponent.SetPlayerCapacity
struct UAgonesComponent_SetPlayerCapacity_Params
{
public:
	int64                                        Count;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           SuccessDelegate;                                   // 0x8(0x10)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           ErrorDelegate;                                     // 0x18(0x10)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function Agones.AgonesComponent.SetLabel
struct UAgonesComponent_SetLabel_Params
{
public:
	class FString                                Key;                                               // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Value;                                             // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           SuccessDelegate;                                   // 0x20(0x10)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           ErrorDelegate;                                     // 0x30(0x10)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function Agones.AgonesComponent.SetAnnotation
struct UAgonesComponent_SetAnnotation_Params
{
public:
	class FString                                Key;                                               // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Value;                                             // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           SuccessDelegate;                                   // 0x20(0x10)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           ErrorDelegate;                                     // 0x30(0x10)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function Agones.AgonesComponent.Reserve
struct UAgonesComponent_Reserve_Params
{
public:
	int64                                        Seconds;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           SuccessDelegate;                                   // 0x8(0x10)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           ErrorDelegate;                                     // 0x18(0x10)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function Agones.AgonesComponent.Ready
struct UAgonesComponent_Ready_Params
{
public:
	FDelegateProperty_                           SuccessDelegate;                                   // 0x0(0x10)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           ErrorDelegate;                                     // 0x10(0x10)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function Agones.AgonesComponent.PlayerDisconnect
struct UAgonesComponent_PlayerDisconnect_Params
{
public:
	class FString                                PlayerId;                                          // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           SuccessDelegate;                                   // 0x10(0x10)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           ErrorDelegate;                                     // 0x20(0x10)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function Agones.AgonesComponent.PlayerConnect
struct UAgonesComponent_PlayerConnect_Params
{
public:
	class FString                                PlayerId;                                          // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           SuccessDelegate;                                   // 0x10(0x10)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           ErrorDelegate;                                     // 0x20(0x10)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function Agones.AgonesComponent.IsPlayerConnected
struct UAgonesComponent_IsPlayerConnected_Params
{
public:
	class FString                                PlayerId;                                          // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           SuccessDelegate;                                   // 0x10(0x10)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           ErrorDelegate;                                     // 0x20(0x10)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function Agones.AgonesComponent.HealthPing
struct UAgonesComponent_HealthPing_Params
{
public:
	float                                        RateSeconds;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function Agones.AgonesComponent.Health
struct UAgonesComponent_Health_Params
{
public:
	FDelegateProperty_                           SuccessDelegate;                                   // 0x0(0x10)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           ErrorDelegate;                                     // 0x10(0x10)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function Agones.AgonesComponent.GetPlayerCount
struct UAgonesComponent_GetPlayerCount_Params
{
public:
	FDelegateProperty_                           SuccessDelegate;                                   // 0x0(0x10)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           ErrorDelegate;                                     // 0x10(0x10)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function Agones.AgonesComponent.GetPlayerCapacity
struct UAgonesComponent_GetPlayerCapacity_Params
{
public:
	FDelegateProperty_                           SuccessDelegate;                                   // 0x0(0x10)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           ErrorDelegate;                                     // 0x10(0x10)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function Agones.AgonesComponent.GetConnectedPlayers
struct UAgonesComponent_GetConnectedPlayers_Params
{
public:
	FDelegateProperty_                           SuccessDelegate;                                   // 0x0(0x10)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           ErrorDelegate;                                     // 0x10(0x10)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function Agones.AgonesComponent.GameServer
struct UAgonesComponent_GameServer_Params
{
public:
	FDelegateProperty_                           SuccessDelegate;                                   // 0x0(0x10)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           ErrorDelegate;                                     // 0x10(0x10)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x138 (0x138 - 0x0)
// Function Agones.AgonesComponent.ConnectSuccess
struct UAgonesComponent_ConnectSuccess_Params
{
public:
	struct FGameServerResponse                   GameServerResponse;                                // 0x0(0x138)(Parm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function Agones.AgonesComponent.ConnectFail
struct UAgonesComponent_ConnectFail_Params
{
public:
	struct FAgonesError                          Error;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function Agones.AgonesComponent.Connect
struct UAgonesComponent_Connect_Params
{
public:
};

// 0x20 (0x20 - 0x0)
// Function Agones.AgonesComponent.Allocate
struct UAgonesComponent_Allocate_Params
{
public:
	FDelegateProperty_                           SuccessDelegate;                                   // 0x0(0x10)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           ErrorDelegate;                                     // 0x10(0x10)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
