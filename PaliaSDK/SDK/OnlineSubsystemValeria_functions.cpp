#pragma once

// Dumped with Dumper-7!

#include "SDK.hpp"

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// DelegateFunction OnlineSubsystemValeria.OSSVAL_GetCharacterNamesByAccountIdProxy.OnGetCharacterNames_Success__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams, HasDefaults)
// Parameters:
// struct FGuid                       AccountId                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FOSSVAL_CharacterNameAndId>Names                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UOSSVAL_GetCharacterNamesByAccountIdProxy::OnGetCharacterNames_Success__DelegateSignature(struct FGuid& InAccountId, TArray<struct FOSSVAL_CharacterNameAndId>& InNames)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OSSVAL_GetCharacterNamesByAccountIdProxy", "OnGetCharacterNames_Success__DelegateSignature");

	Params::UOSSVAL_GetCharacterNamesByAccountIdProxy_OnGetCharacterNames_Success__DelegateSignature_Params Parms{};

	Parms.AccountId = InAccountId;
	Parms.Names = InNames;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction OnlineSubsystemValeria.OSSVAL_GetCharacterNamesByAccountIdProxy.OnGetCharacterNames_Fail__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams, HasDefaults)
// Parameters:
// struct FGuid                       AccountId                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UOSSVAL_GetCharacterNamesByAccountIdProxy::OnGetCharacterNames_Fail__DelegateSignature(struct FGuid& InAccountId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OSSVAL_GetCharacterNamesByAccountIdProxy", "OnGetCharacterNames_Fail__DelegateSignature");

	Params::UOSSVAL_GetCharacterNamesByAccountIdProxy_OnGetCharacterNames_Fail__DelegateSignature_Params Parms{};

	Parms.AccountId = InAccountId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OnlineSubsystemValeria.OSSVAL_GetCharacterNamesByAccountIdProxy.GetCharacterNamesByAccountId
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGuid                       AccountId                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOSSVAL_GetCharacterNamesByAccountIdProxy*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOSSVAL_GetCharacterNamesByAccountIdProxy* UOSSVAL_GetCharacterNamesByAccountIdProxy::GetCharacterNamesByAccountId(class UObject* InWorldContextObject, struct FGuid& InAccountId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OSSVAL_GetCharacterNamesByAccountIdProxy", "GetCharacterNamesByAccountId");

	Params::UOSSVAL_GetCharacterNamesByAccountIdProxy_GetCharacterNamesByAccountId_Params Parms{};

	Parms.WorldContextObject = InWorldContextObject;
	Parms.AccountId = InAccountId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// DelegateFunction OnlineSubsystemValeria.OSSVAL_GetCharacterNameByAccountIdAndCharacterIdProxy.OnGetCharacterNames_Success__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams, HasDefaults)
// Parameters:
// struct FGuid                       AccountId                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGuid                       CharacterId                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FOSSVAL_CharacterNameAndId  Name                                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UOSSVAL_GetCharacterNameByAccountIdAndCharacterIdProxy::OnGetCharacterNames_Success__DelegateSignature(struct FGuid& InAccountId, struct FGuid& InCharacterId, struct FOSSVAL_CharacterNameAndId& InName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OSSVAL_GetCharacterNameByAccountIdAndCharacterIdProxy", "OnGetCharacterNames_Success__DelegateSignature");

	Params::UOSSVAL_GetCharacterNameByAccountIdAndCharacterIdProxy_OnGetCharacterNames_Success__DelegateSignature_Params Parms{};

	Parms.AccountId = InAccountId;
	Parms.CharacterId = InCharacterId;
	Parms.Name = InName;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction OnlineSubsystemValeria.OSSVAL_GetCharacterNameByAccountIdAndCharacterIdProxy.OnGetCharacterNames_Fail__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams, HasDefaults)
// Parameters:
// struct FGuid                       AccountId                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGuid                       CharacterId                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UOSSVAL_GetCharacterNameByAccountIdAndCharacterIdProxy::OnGetCharacterNames_Fail__DelegateSignature(struct FGuid& InAccountId, struct FGuid& InCharacterId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OSSVAL_GetCharacterNameByAccountIdAndCharacterIdProxy", "OnGetCharacterNames_Fail__DelegateSignature");

	Params::UOSSVAL_GetCharacterNameByAccountIdAndCharacterIdProxy_OnGetCharacterNames_Fail__DelegateSignature_Params Parms{};

	Parms.AccountId = InAccountId;
	Parms.CharacterId = InCharacterId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OnlineSubsystemValeria.OSSVAL_GetCharacterNameByAccountIdAndCharacterIdProxy.GetCharacterNameByAccountIdAndCharacterId
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGuid                       AccountId                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGuid                       CharacterId                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOSSVAL_GetCharacterNameByAccountIdAndCharacterIdProxy*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOSSVAL_GetCharacterNameByAccountIdAndCharacterIdProxy* UOSSVAL_GetCharacterNameByAccountIdAndCharacterIdProxy::GetCharacterNameByAccountIdAndCharacterId(class UObject* InWorldContextObject, struct FGuid& InAccountId, struct FGuid& InCharacterId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OSSVAL_GetCharacterNameByAccountIdAndCharacterIdProxy", "GetCharacterNameByAccountIdAndCharacterId");

	Params::UOSSVAL_GetCharacterNameByAccountIdAndCharacterIdProxy_GetCharacterNameByAccountIdAndCharacterId_Params Parms{};

	Parms.WorldContextObject = InWorldContextObject;
	Parms.AccountId = InAccountId;
	Parms.CharacterId = InCharacterId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// DelegateFunction OnlineSubsystemValeria.OSSVAL_GetCharacterNameByCharacterIdProxy.OnFetchCharacter_Success__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams, HasDefaults)
// Parameters:
// struct FGuid                       CharacterId                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FOSSVAL_CharacterNameAndId  FetchedCharacter                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UOSSVAL_GetCharacterNameByCharacterIdProxy::OnFetchCharacter_Success__DelegateSignature(struct FGuid& InCharacterId, struct FOSSVAL_CharacterNameAndId& InFetchedCharacter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OSSVAL_GetCharacterNameByCharacterIdProxy", "OnFetchCharacter_Success__DelegateSignature");

	Params::UOSSVAL_GetCharacterNameByCharacterIdProxy_OnFetchCharacter_Success__DelegateSignature_Params Parms{};

	Parms.CharacterId = InCharacterId;
	Parms.FetchedCharacter = InFetchedCharacter;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction OnlineSubsystemValeria.OSSVAL_GetCharacterNameByCharacterIdProxy.OnFetchCharacter_Failure__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams, HasDefaults)
// Parameters:
// struct FGuid                       CharacterId                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UOSSVAL_GetCharacterNameByCharacterIdProxy::OnFetchCharacter_Failure__DelegateSignature(struct FGuid& InCharacterId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OSSVAL_GetCharacterNameByCharacterIdProxy", "OnFetchCharacter_Failure__DelegateSignature");

	Params::UOSSVAL_GetCharacterNameByCharacterIdProxy_OnFetchCharacter_Failure__DelegateSignature_Params Parms{};

	Parms.CharacterId = InCharacterId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OnlineSubsystemValeria.OSSVAL_GetCharacterNameByCharacterIdProxy.GetCharacterNameByCharacterId
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGuid                       CharacterId                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOSSVAL_GetCharacterNameByCharacterIdProxy*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOSSVAL_GetCharacterNameByCharacterIdProxy* UOSSVAL_GetCharacterNameByCharacterIdProxy::GetCharacterNameByCharacterId(class UObject* InWorldContextObject, struct FGuid& InCharacterId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OSSVAL_GetCharacterNameByCharacterIdProxy", "GetCharacterNameByCharacterId");

	Params::UOSSVAL_GetCharacterNameByCharacterIdProxy_GetCharacterNameByCharacterId_Params Parms{};

	Parms.WorldContextObject = InWorldContextObject;
	Parms.CharacterId = InCharacterId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// DelegateFunction OnlineSubsystemValeria.OSSVAL_GetNetIdByCharacterIdProxy.OnFetchNetId_Success__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams, HasDefaults)
// Parameters:
// struct FGuid                       CharacterId                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUniqueNetIdRepl            FetchedNetId                                                     (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UOSSVAL_GetNetIdByCharacterIdProxy::OnFetchNetId_Success__DelegateSignature(struct FGuid& InCharacterId, struct FUniqueNetIdRepl& InFetchedNetId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OSSVAL_GetNetIdByCharacterIdProxy", "OnFetchNetId_Success__DelegateSignature");

	Params::UOSSVAL_GetNetIdByCharacterIdProxy_OnFetchNetId_Success__DelegateSignature_Params Parms{};

	Parms.CharacterId = InCharacterId;
	Parms.FetchedNetId = InFetchedNetId;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction OnlineSubsystemValeria.OSSVAL_GetNetIdByCharacterIdProxy.OnFetchNetId_Failure__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams, HasDefaults)
// Parameters:
// struct FGuid                       CharacterId                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UOSSVAL_GetNetIdByCharacterIdProxy::OnFetchNetId_Failure__DelegateSignature(struct FGuid& InCharacterId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OSSVAL_GetNetIdByCharacterIdProxy", "OnFetchNetId_Failure__DelegateSignature");

	Params::UOSSVAL_GetNetIdByCharacterIdProxy_OnFetchNetId_Failure__DelegateSignature_Params Parms{};

	Parms.CharacterId = InCharacterId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OnlineSubsystemValeria.OSSVAL_GetNetIdByCharacterIdProxy.GetNetIdByCharacterId
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGuid                       CharacterId                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOSSVAL_GetNetIdByCharacterIdProxy*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOSSVAL_GetNetIdByCharacterIdProxy* UOSSVAL_GetNetIdByCharacterIdProxy::GetNetIdByCharacterId(class UObject* InWorldContextObject, struct FGuid& InCharacterId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OSSVAL_GetNetIdByCharacterIdProxy", "GetNetIdByCharacterId");

	Params::UOSSVAL_GetNetIdByCharacterIdProxy_GetNetIdByCharacterId_Params Parms{};

	Parms.WorldContextObject = InWorldContextObject;
	Parms.CharacterId = InCharacterId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// DelegateFunction OnlineSubsystemValeria.OSSVAL_AsyncActionGetCharactersByAccountId.OnGetCharactersObtained__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams)
// Parameters:
// TArray<struct FVALDTOS_MetaCharacterFormat>CharactersFound                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UOSSVAL_AsyncActionGetCharactersByAccountId::OnGetCharactersObtained__DelegateSignature(TArray<struct FVALDTOS_MetaCharacterFormat>& InCharactersFound)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OSSVAL_AsyncActionGetCharactersByAccountId", "OnGetCharactersObtained__DelegateSignature");

	Params::UOSSVAL_AsyncActionGetCharactersByAccountId_OnGetCharactersObtained__DelegateSignature_Params Parms{};

	Parms.CharactersFound = InCharactersFound;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction OnlineSubsystemValeria.OSSVAL_AsyncActionGetCharactersByAccountId.OnGetCharactersFailed__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:

void UOSSVAL_AsyncActionGetCharactersByAccountId::OnGetCharactersFailed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OSSVAL_AsyncActionGetCharactersByAccountId", "OnGetCharactersFailed__DelegateSignature");

	Params::UOSSVAL_AsyncActionGetCharactersByAccountId_OnGetCharactersFailed__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function OnlineSubsystemValeria.OSSVAL_AsyncActionGetCharactersByAccountId.GetCharactersByAccountId
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class ULocalPlayer*                LocalPlayer                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGuid                       ID                                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOSSVAL_AsyncActionGetCharactersByAccountId*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOSSVAL_AsyncActionGetCharactersByAccountId* UOSSVAL_AsyncActionGetCharactersByAccountId::GetCharactersByAccountId(class ULocalPlayer* InLocalPlayer, struct FGuid& InID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OSSVAL_AsyncActionGetCharactersByAccountId", "GetCharactersByAccountId");

	Params::UOSSVAL_AsyncActionGetCharactersByAccountId_GetCharactersByAccountId_Params Parms{};

	Parms.LocalPlayer = InLocalPlayer;
	Parms.ID = InID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OnlineSubsystemValeria.OSSVAL_BeaconClient.RpcServer_ValidateTicket
// (Net, NetReliable, Native, Event, Public, NetServer, HasDefaults)
// Parameters:
// struct FGuid                       RequestId                                                        (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FOSSVAL_MatchmakingTicket   Ticket                                                           (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FOSSVAL_MatchmakingTicketContextContext                                                          (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void AOSSVAL_BeaconClient::RpcServer_ValidateTicket(struct FGuid& InRequestId, struct FOSSVAL_MatchmakingTicket& InTicket, struct FOSSVAL_MatchmakingTicketContext& InContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OSSVAL_BeaconClient", "RpcServer_ValidateTicket");

	Params::AOSSVAL_BeaconClient_RpcServer_ValidateTicket_Params Parms{};

	Parms.RequestId = InRequestId;
	Parms.Ticket = InTicket;
	Parms.Context = InContext;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function OnlineSubsystemValeria.OSSVAL_BeaconClient.RpcClient_SendTicketValidationResponse
// (Net, NetReliable, Native, Event, Public, HasDefaults, NetClient)
// Parameters:
// struct FGuid                       RequestId                                                        (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAccepted                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FOSSVAL_MatchmakingTicket   Ticket                                                           (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FOSSVAL_MatchmakingTicketContextContext                                                          (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void AOSSVAL_BeaconClient::RpcClient_SendTicketValidationResponse(struct FGuid& InRequestId, bool InbAccepted, struct FOSSVAL_MatchmakingTicket& InTicket, struct FOSSVAL_MatchmakingTicketContext& InContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OSSVAL_BeaconClient", "RpcClient_SendTicketValidationResponse");

	Params::AOSSVAL_BeaconClient_RpcClient_SendTicketValidationResponse_Params Parms{};

	Parms.RequestId = InRequestId;
	Parms.bAccepted = InbAccepted;
	Parms.Ticket = InTicket;
	Parms.Context = InContext;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function OnlineSubsystemValeria.ValeriaOnlineBlueprintFunctions.CreateSessionResult
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      ServerName                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Addr                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlueprintSessionResult     ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FBlueprintSessionResult UValeriaOnlineBlueprintFunctions::CreateSessionResult(const class FString& InServerName, const class FString& InAddr)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ValeriaOnlineBlueprintFunctions", "CreateSessionResult");

	Params::UValeriaOnlineBlueprintFunctions_CreateSessionResult_Params Parms{};

	Parms.ServerName = InServerName;
	Parms.Addr = InAddr;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
