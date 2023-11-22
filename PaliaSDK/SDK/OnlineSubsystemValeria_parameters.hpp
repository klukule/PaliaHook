#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x20 - 0x0)
// DelegateFunction OnlineSubsystemValeria.OSSVAL_GetCharacterNamesByAccountIdProxy.OnGetCharacterNames_Success__DelegateSignature
struct UOSSVAL_GetCharacterNamesByAccountIdProxy_OnGetCharacterNames_Success__DelegateSignature_Params
{
public:
	struct FGuid                                 AccountId;                                         // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FOSSVAL_CharacterNameAndId>    Names;                                             // 0x10(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// DelegateFunction OnlineSubsystemValeria.OSSVAL_GetCharacterNamesByAccountIdProxy.OnGetCharacterNames_Fail__DelegateSignature
struct UOSSVAL_GetCharacterNamesByAccountIdProxy_OnGetCharacterNames_Fail__DelegateSignature_Params
{
public:
	struct FGuid                                 AccountId;                                         // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function OnlineSubsystemValeria.OSSVAL_GetCharacterNamesByAccountIdProxy.GetCharacterNamesByAccountId
struct UOSSVAL_GetCharacterNamesByAccountIdProxy_GetCharacterNamesByAccountId_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 AccountId;                                         // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UOSSVAL_GetCharacterNamesByAccountIdProxy* ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// DelegateFunction OnlineSubsystemValeria.OSSVAL_GetCharacterNameByAccountIdAndCharacterIdProxy.OnGetCharacterNames_Success__DelegateSignature
struct UOSSVAL_GetCharacterNameByAccountIdAndCharacterIdProxy_OnGetCharacterNames_Success__DelegateSignature_Params
{
public:
	struct FGuid                                 AccountId;                                         // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 CharacterId;                                       // 0x10(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FOSSVAL_CharacterNameAndId            Name;                                              // 0x20(0x30)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// DelegateFunction OnlineSubsystemValeria.OSSVAL_GetCharacterNameByAccountIdAndCharacterIdProxy.OnGetCharacterNames_Fail__DelegateSignature
struct UOSSVAL_GetCharacterNameByAccountIdAndCharacterIdProxy_OnGetCharacterNames_Fail__DelegateSignature_Params
{
public:
	struct FGuid                                 AccountId;                                         // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 CharacterId;                                       // 0x10(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function OnlineSubsystemValeria.OSSVAL_GetCharacterNameByAccountIdAndCharacterIdProxy.GetCharacterNameByAccountIdAndCharacterId
struct UOSSVAL_GetCharacterNameByAccountIdAndCharacterIdProxy_GetCharacterNameByAccountIdAndCharacterId_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 AccountId;                                         // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 CharacterId;                                       // 0x18(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UOSSVAL_GetCharacterNameByAccountIdAndCharacterIdProxy* ReturnValue;                                       // 0x28(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// DelegateFunction OnlineSubsystemValeria.OSSVAL_GetCharacterNameByCharacterIdProxy.OnFetchCharacter_Success__DelegateSignature
struct UOSSVAL_GetCharacterNameByCharacterIdProxy_OnFetchCharacter_Success__DelegateSignature_Params
{
public:
	struct FGuid                                 CharacterId;                                       // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FOSSVAL_CharacterNameAndId            FetchedCharacter;                                  // 0x10(0x30)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// DelegateFunction OnlineSubsystemValeria.OSSVAL_GetCharacterNameByCharacterIdProxy.OnFetchCharacter_Failure__DelegateSignature
struct UOSSVAL_GetCharacterNameByCharacterIdProxy_OnFetchCharacter_Failure__DelegateSignature_Params
{
public:
	struct FGuid                                 CharacterId;                                       // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function OnlineSubsystemValeria.OSSVAL_GetCharacterNameByCharacterIdProxy.GetCharacterNameByCharacterId
struct UOSSVAL_GetCharacterNameByCharacterIdProxy_GetCharacterNameByCharacterId_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 CharacterId;                                       // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UOSSVAL_GetCharacterNameByCharacterIdProxy* ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// DelegateFunction OnlineSubsystemValeria.OSSVAL_GetNetIdByCharacterIdProxy.OnFetchNetId_Success__DelegateSignature
struct UOSSVAL_GetNetIdByCharacterIdProxy_OnFetchNetId_Success__DelegateSignature_Params
{
public:
	struct FGuid                                 CharacterId;                                       // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUniqueNetIdRepl                      FetchedNetId;                                      // 0x10(0x30)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// DelegateFunction OnlineSubsystemValeria.OSSVAL_GetNetIdByCharacterIdProxy.OnFetchNetId_Failure__DelegateSignature
struct UOSSVAL_GetNetIdByCharacterIdProxy_OnFetchNetId_Failure__DelegateSignature_Params
{
public:
	struct FGuid                                 CharacterId;                                       // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function OnlineSubsystemValeria.OSSVAL_GetNetIdByCharacterIdProxy.GetNetIdByCharacterId
struct UOSSVAL_GetNetIdByCharacterIdProxy_GetNetIdByCharacterId_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 CharacterId;                                       // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UOSSVAL_GetNetIdByCharacterIdProxy*    ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// DelegateFunction OnlineSubsystemValeria.OSSVAL_AsyncActionGetCharactersByAccountId.OnGetCharactersObtained__DelegateSignature
struct UOSSVAL_AsyncActionGetCharactersByAccountId_OnGetCharactersObtained__DelegateSignature_Params
{
public:
	TArray<struct FVALDTOS_MetaCharacterFormat>  CharactersFound;                                   // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// DelegateFunction OnlineSubsystemValeria.OSSVAL_AsyncActionGetCharactersByAccountId.OnGetCharactersFailed__DelegateSignature
struct UOSSVAL_AsyncActionGetCharactersByAccountId_OnGetCharactersFailed__DelegateSignature_Params
{
public:
};

// 0x20 (0x20 - 0x0)
// Function OnlineSubsystemValeria.OSSVAL_AsyncActionGetCharactersByAccountId.GetCharactersByAccountId
struct UOSSVAL_AsyncActionGetCharactersByAccountId_GetCharactersByAccountId_Params
{
public:
	class ULocalPlayer*                          LocalPlayer;                                       // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 ID;                                                // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UOSSVAL_AsyncActionGetCharactersByAccountId* ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// DelegateFunction OnlineSubsystemValeria.OSSVAL_AsyncActionProfanityFilterString.OnResultObtained__DelegateSignature
struct UOSSVAL_AsyncActionProfanityFilterString_OnResultObtained__DelegateSignature_Params
{
public:
	struct FOSSVAL_ProfanityFilterResponse       Response;                                          // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function OnlineSubsystemValeria.OSSVAL_AsyncActionProfanityFilterString.FilterString
struct UOSSVAL_AsyncActionProfanityFilterString_FilterString_Params
{
public:
	class ULocalPlayer*                          LocalPlayer;                                       // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Str;                                               // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UOSSVAL_AsyncActionProfanityFilterString* ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB8 (0xB8 - 0x0)
// Function OnlineSubsystemValeria.OSSVAL_BeaconClient.RpcServer_ValidateTicket
struct AOSSVAL_BeaconClient_RpcServer_ValidateTicket_Params
{
public:
	struct FGuid                                 RequestId;                                         // 0x0(0x10)(ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FOSSVAL_MatchmakingTicket             Ticket;                                            // 0x10(0x98)(ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FOSSVAL_MatchmakingTicketContext      Context;                                           // 0xA8(0x10)(ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0xC0 (0xC0 - 0x0)
// Function OnlineSubsystemValeria.OSSVAL_BeaconClient.RpcClient_SendTicketValidationResponse
struct AOSSVAL_BeaconClient_RpcClient_SendTicketValidationResponse_Params
{
public:
	struct FGuid                                 RequestId;                                         // 0x0(0x10)(ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAccepted;                                         // 0x10(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2740[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FOSSVAL_MatchmakingTicket             Ticket;                                            // 0x18(0x98)(ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FOSSVAL_MatchmakingTicketContext      Context;                                           // 0xB0(0x10)(ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x140 (0x140 - 0x0)
// Function OnlineSubsystemValeria.ValeriaOnlineBlueprintFunctions.CreateSessionResult
struct UValeriaOnlineBlueprintFunctions_CreateSessionResult_Params
{
public:
	class FString                                ServerName;                                        // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Addr;                                              // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBlueprintSessionResult               ReturnValue;                                       // 0x20(0x120)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

}
}


