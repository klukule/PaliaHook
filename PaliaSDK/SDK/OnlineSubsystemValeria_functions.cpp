#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class OnlineSubsystemValeria.OSSVAL_IdentitySettings
// (None)

class UClass* UOSSVAL_IdentitySettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OSSVAL_IdentitySettings");

	return Clss;
}


// OSSVAL_IdentitySettings OnlineSubsystemValeria.Default__OSSVAL_IdentitySettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UOSSVAL_IdentitySettings* UOSSVAL_IdentitySettings::GetDefaultObj()
{
	static class UOSSVAL_IdentitySettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UOSSVAL_IdentitySettings*>(UOSSVAL_IdentitySettings::StaticClass()->DefaultObject);

	return Default;
}


// Class OnlineSubsystemValeria.OSSVAL_PresenceSettings
// (None)

class UClass* UOSSVAL_PresenceSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OSSVAL_PresenceSettings");

	return Clss;
}


// OSSVAL_PresenceSettings OnlineSubsystemValeria.Default__OSSVAL_PresenceSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UOSSVAL_PresenceSettings* UOSSVAL_PresenceSettings::GetDefaultObj()
{
	static class UOSSVAL_PresenceSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UOSSVAL_PresenceSettings*>(UOSSVAL_PresenceSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class OnlineSubsystemValeria.OSSVAL_GetCharacterNamesByAccountIdProxy
// (None)

class UClass* UOSSVAL_GetCharacterNamesByAccountIdProxy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OSSVAL_GetCharacterNamesByAccountIdProxy");

	return Clss;
}


// OSSVAL_GetCharacterNamesByAccountIdProxy OnlineSubsystemValeria.Default__OSSVAL_GetCharacterNamesByAccountIdProxy
// (Public, ClassDefaultObject, ArchetypeObject)

class UOSSVAL_GetCharacterNamesByAccountIdProxy* UOSSVAL_GetCharacterNamesByAccountIdProxy::GetDefaultObj()
{
	static class UOSSVAL_GetCharacterNamesByAccountIdProxy* Default = nullptr;

	if (!Default)
		Default = static_cast<UOSSVAL_GetCharacterNamesByAccountIdProxy*>(UOSSVAL_GetCharacterNamesByAccountIdProxy::StaticClass()->DefaultObject);

	return Default;
}


// DelegateFunction OnlineSubsystemValeria.OSSVAL_GetCharacterNamesByAccountIdProxy.OnGetCharacterNames_Success__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams, HasDefaults)
// Parameters:
// struct FGuid                       AccountId                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FOSSVAL_CharacterNameAndId>Names                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UOSSVAL_GetCharacterNamesByAccountIdProxy::OnGetCharacterNames_Success__DelegateSignature(struct FGuid& AccountId, TArray<struct FOSSVAL_CharacterNameAndId>& Names)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OSSVAL_GetCharacterNamesByAccountIdProxy", "OnGetCharacterNames_Success__DelegateSignature");

	Params::UOSSVAL_GetCharacterNamesByAccountIdProxy_OnGetCharacterNames_Success__DelegateSignature_Params Parms{};

	Parms.AccountId = AccountId;
	Parms.Names = Names;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction OnlineSubsystemValeria.OSSVAL_GetCharacterNamesByAccountIdProxy.OnGetCharacterNames_Fail__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams, HasDefaults)
// Parameters:
// struct FGuid                       AccountId                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UOSSVAL_GetCharacterNamesByAccountIdProxy::OnGetCharacterNames_Fail__DelegateSignature(struct FGuid& AccountId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OSSVAL_GetCharacterNamesByAccountIdProxy", "OnGetCharacterNames_Fail__DelegateSignature");

	Params::UOSSVAL_GetCharacterNamesByAccountIdProxy_OnGetCharacterNames_Fail__DelegateSignature_Params Parms{};

	Parms.AccountId = AccountId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OnlineSubsystemValeria.OSSVAL_GetCharacterNamesByAccountIdProxy.GetCharacterNamesByAccountId
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGuid                       AccountId                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOSSVAL_GetCharacterNamesByAccountIdProxy*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOSSVAL_GetCharacterNamesByAccountIdProxy* UOSSVAL_GetCharacterNamesByAccountIdProxy::GetCharacterNamesByAccountId(class UObject* WorldContextObject, struct FGuid& AccountId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OSSVAL_GetCharacterNamesByAccountIdProxy", "GetCharacterNamesByAccountId");

	Params::UOSSVAL_GetCharacterNamesByAccountIdProxy_GetCharacterNamesByAccountId_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.AccountId = AccountId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class OnlineSubsystemValeria.OSSVAL_GetCharacterNameByAccountIdAndCharacterIdProxy
// (None)

class UClass* UOSSVAL_GetCharacterNameByAccountIdAndCharacterIdProxy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OSSVAL_GetCharacterNameByAccountIdAndCharacterIdProxy");

	return Clss;
}


// OSSVAL_GetCharacterNameByAccountIdAndCharacterIdProxy OnlineSubsystemValeria.Default__OSSVAL_GetCharacterNameByAccountIdAndCharacterIdProxy
// (Public, ClassDefaultObject, ArchetypeObject)

class UOSSVAL_GetCharacterNameByAccountIdAndCharacterIdProxy* UOSSVAL_GetCharacterNameByAccountIdAndCharacterIdProxy::GetDefaultObj()
{
	static class UOSSVAL_GetCharacterNameByAccountIdAndCharacterIdProxy* Default = nullptr;

	if (!Default)
		Default = static_cast<UOSSVAL_GetCharacterNameByAccountIdAndCharacterIdProxy*>(UOSSVAL_GetCharacterNameByAccountIdAndCharacterIdProxy::StaticClass()->DefaultObject);

	return Default;
}


// DelegateFunction OnlineSubsystemValeria.OSSVAL_GetCharacterNameByAccountIdAndCharacterIdProxy.OnGetCharacterNames_Success__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams, HasDefaults)
// Parameters:
// struct FGuid                       AccountId                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGuid                       CharacterId                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FOSSVAL_CharacterNameAndId  Name                                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UOSSVAL_GetCharacterNameByAccountIdAndCharacterIdProxy::OnGetCharacterNames_Success__DelegateSignature(struct FGuid& AccountId, struct FGuid& CharacterId, struct FOSSVAL_CharacterNameAndId& Name)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OSSVAL_GetCharacterNameByAccountIdAndCharacterIdProxy", "OnGetCharacterNames_Success__DelegateSignature");

	Params::UOSSVAL_GetCharacterNameByAccountIdAndCharacterIdProxy_OnGetCharacterNames_Success__DelegateSignature_Params Parms{};

	Parms.AccountId = AccountId;
	Parms.CharacterId = CharacterId;
	Parms.Name = Name;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction OnlineSubsystemValeria.OSSVAL_GetCharacterNameByAccountIdAndCharacterIdProxy.OnGetCharacterNames_Fail__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams, HasDefaults)
// Parameters:
// struct FGuid                       AccountId                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGuid                       CharacterId                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UOSSVAL_GetCharacterNameByAccountIdAndCharacterIdProxy::OnGetCharacterNames_Fail__DelegateSignature(struct FGuid& AccountId, struct FGuid& CharacterId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OSSVAL_GetCharacterNameByAccountIdAndCharacterIdProxy", "OnGetCharacterNames_Fail__DelegateSignature");

	Params::UOSSVAL_GetCharacterNameByAccountIdAndCharacterIdProxy_OnGetCharacterNames_Fail__DelegateSignature_Params Parms{};

	Parms.AccountId = AccountId;
	Parms.CharacterId = CharacterId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OnlineSubsystemValeria.OSSVAL_GetCharacterNameByAccountIdAndCharacterIdProxy.GetCharacterNameByAccountIdAndCharacterId
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGuid                       AccountId                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGuid                       CharacterId                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOSSVAL_GetCharacterNameByAccountIdAndCharacterIdProxy*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOSSVAL_GetCharacterNameByAccountIdAndCharacterIdProxy* UOSSVAL_GetCharacterNameByAccountIdAndCharacterIdProxy::GetCharacterNameByAccountIdAndCharacterId(class UObject* WorldContextObject, struct FGuid& AccountId, struct FGuid& CharacterId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OSSVAL_GetCharacterNameByAccountIdAndCharacterIdProxy", "GetCharacterNameByAccountIdAndCharacterId");

	Params::UOSSVAL_GetCharacterNameByAccountIdAndCharacterIdProxy_GetCharacterNameByAccountIdAndCharacterId_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.AccountId = AccountId;
	Parms.CharacterId = CharacterId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class OnlineSubsystemValeria.OSSVAL_GetCharacterNameByCharacterIdProxy
// (None)

class UClass* UOSSVAL_GetCharacterNameByCharacterIdProxy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OSSVAL_GetCharacterNameByCharacterIdProxy");

	return Clss;
}


// OSSVAL_GetCharacterNameByCharacterIdProxy OnlineSubsystemValeria.Default__OSSVAL_GetCharacterNameByCharacterIdProxy
// (Public, ClassDefaultObject, ArchetypeObject)

class UOSSVAL_GetCharacterNameByCharacterIdProxy* UOSSVAL_GetCharacterNameByCharacterIdProxy::GetDefaultObj()
{
	static class UOSSVAL_GetCharacterNameByCharacterIdProxy* Default = nullptr;

	if (!Default)
		Default = static_cast<UOSSVAL_GetCharacterNameByCharacterIdProxy*>(UOSSVAL_GetCharacterNameByCharacterIdProxy::StaticClass()->DefaultObject);

	return Default;
}


// DelegateFunction OnlineSubsystemValeria.OSSVAL_GetCharacterNameByCharacterIdProxy.OnFetchCharacter_Success__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams, HasDefaults)
// Parameters:
// struct FGuid                       CharacterId                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FOSSVAL_CharacterNameAndId  FetchedCharacter                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UOSSVAL_GetCharacterNameByCharacterIdProxy::OnFetchCharacter_Success__DelegateSignature(struct FGuid& CharacterId, struct FOSSVAL_CharacterNameAndId& FetchedCharacter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OSSVAL_GetCharacterNameByCharacterIdProxy", "OnFetchCharacter_Success__DelegateSignature");

	Params::UOSSVAL_GetCharacterNameByCharacterIdProxy_OnFetchCharacter_Success__DelegateSignature_Params Parms{};

	Parms.CharacterId = CharacterId;
	Parms.FetchedCharacter = FetchedCharacter;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction OnlineSubsystemValeria.OSSVAL_GetCharacterNameByCharacterIdProxy.OnFetchCharacter_Failure__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams, HasDefaults)
// Parameters:
// struct FGuid                       CharacterId                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UOSSVAL_GetCharacterNameByCharacterIdProxy::OnFetchCharacter_Failure__DelegateSignature(struct FGuid& CharacterId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OSSVAL_GetCharacterNameByCharacterIdProxy", "OnFetchCharacter_Failure__DelegateSignature");

	Params::UOSSVAL_GetCharacterNameByCharacterIdProxy_OnFetchCharacter_Failure__DelegateSignature_Params Parms{};

	Parms.CharacterId = CharacterId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OnlineSubsystemValeria.OSSVAL_GetCharacterNameByCharacterIdProxy.GetCharacterNameByCharacterId
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGuid                       CharacterId                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOSSVAL_GetCharacterNameByCharacterIdProxy*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOSSVAL_GetCharacterNameByCharacterIdProxy* UOSSVAL_GetCharacterNameByCharacterIdProxy::GetCharacterNameByCharacterId(class UObject* WorldContextObject, struct FGuid& CharacterId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OSSVAL_GetCharacterNameByCharacterIdProxy", "GetCharacterNameByCharacterId");

	Params::UOSSVAL_GetCharacterNameByCharacterIdProxy_GetCharacterNameByCharacterId_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.CharacterId = CharacterId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class OnlineSubsystemValeria.OSSVAL_GetNetIdByCharacterIdProxy
// (None)

class UClass* UOSSVAL_GetNetIdByCharacterIdProxy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OSSVAL_GetNetIdByCharacterIdProxy");

	return Clss;
}


// OSSVAL_GetNetIdByCharacterIdProxy OnlineSubsystemValeria.Default__OSSVAL_GetNetIdByCharacterIdProxy
// (Public, ClassDefaultObject, ArchetypeObject)

class UOSSVAL_GetNetIdByCharacterIdProxy* UOSSVAL_GetNetIdByCharacterIdProxy::GetDefaultObj()
{
	static class UOSSVAL_GetNetIdByCharacterIdProxy* Default = nullptr;

	if (!Default)
		Default = static_cast<UOSSVAL_GetNetIdByCharacterIdProxy*>(UOSSVAL_GetNetIdByCharacterIdProxy::StaticClass()->DefaultObject);

	return Default;
}


// DelegateFunction OnlineSubsystemValeria.OSSVAL_GetNetIdByCharacterIdProxy.OnFetchNetId_Success__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams, HasDefaults)
// Parameters:
// struct FGuid                       CharacterId                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FUniqueNetIdRepl            FetchedNetId                                                     (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UOSSVAL_GetNetIdByCharacterIdProxy::OnFetchNetId_Success__DelegateSignature(struct FGuid& CharacterId, struct FUniqueNetIdRepl& FetchedNetId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OSSVAL_GetNetIdByCharacterIdProxy", "OnFetchNetId_Success__DelegateSignature");

	Params::UOSSVAL_GetNetIdByCharacterIdProxy_OnFetchNetId_Success__DelegateSignature_Params Parms{};

	Parms.CharacterId = CharacterId;
	Parms.FetchedNetId = FetchedNetId;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction OnlineSubsystemValeria.OSSVAL_GetNetIdByCharacterIdProxy.OnFetchNetId_Failure__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams, HasDefaults)
// Parameters:
// struct FGuid                       CharacterId                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UOSSVAL_GetNetIdByCharacterIdProxy::OnFetchNetId_Failure__DelegateSignature(struct FGuid& CharacterId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OSSVAL_GetNetIdByCharacterIdProxy", "OnFetchNetId_Failure__DelegateSignature");

	Params::UOSSVAL_GetNetIdByCharacterIdProxy_OnFetchNetId_Failure__DelegateSignature_Params Parms{};

	Parms.CharacterId = CharacterId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OnlineSubsystemValeria.OSSVAL_GetNetIdByCharacterIdProxy.GetNetIdByCharacterId
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGuid                       CharacterId                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOSSVAL_GetNetIdByCharacterIdProxy*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOSSVAL_GetNetIdByCharacterIdProxy* UOSSVAL_GetNetIdByCharacterIdProxy::GetNetIdByCharacterId(class UObject* WorldContextObject, struct FGuid& CharacterId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OSSVAL_GetNetIdByCharacterIdProxy", "GetNetIdByCharacterId");

	Params::UOSSVAL_GetNetIdByCharacterIdProxy_GetNetIdByCharacterId_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.CharacterId = CharacterId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class OnlineSubsystemValeria.OSSVAL_OnlineEngineInterfaceImpl
// (None)

class UClass* UOSSVAL_OnlineEngineInterfaceImpl::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OSSVAL_OnlineEngineInterfaceImpl");

	return Clss;
}


// OSSVAL_OnlineEngineInterfaceImpl OnlineSubsystemValeria.Default__OSSVAL_OnlineEngineInterfaceImpl
// (Public, ClassDefaultObject, ArchetypeObject)

class UOSSVAL_OnlineEngineInterfaceImpl* UOSSVAL_OnlineEngineInterfaceImpl::GetDefaultObj()
{
	static class UOSSVAL_OnlineEngineInterfaceImpl* Default = nullptr;

	if (!Default)
		Default = static_cast<UOSSVAL_OnlineEngineInterfaceImpl*>(UOSSVAL_OnlineEngineInterfaceImpl::StaticClass()->DefaultObject);

	return Default;
}


// Class OnlineSubsystemValeria.OSSVAL_AsyncActionGetCharactersByAccountId
// (None)

class UClass* UOSSVAL_AsyncActionGetCharactersByAccountId::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OSSVAL_AsyncActionGetCharactersByAccountId");

	return Clss;
}


// OSSVAL_AsyncActionGetCharactersByAccountId OnlineSubsystemValeria.Default__OSSVAL_AsyncActionGetCharactersByAccountId
// (Public, ClassDefaultObject, ArchetypeObject)

class UOSSVAL_AsyncActionGetCharactersByAccountId* UOSSVAL_AsyncActionGetCharactersByAccountId::GetDefaultObj()
{
	static class UOSSVAL_AsyncActionGetCharactersByAccountId* Default = nullptr;

	if (!Default)
		Default = static_cast<UOSSVAL_AsyncActionGetCharactersByAccountId*>(UOSSVAL_AsyncActionGetCharactersByAccountId::StaticClass()->DefaultObject);

	return Default;
}


// DelegateFunction OnlineSubsystemValeria.OSSVAL_AsyncActionGetCharactersByAccountId.OnGetCharactersObtained__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams)
// Parameters:
// TArray<struct FVALDTOS_MetaCharacterFormat>CharactersFound                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UOSSVAL_AsyncActionGetCharactersByAccountId::OnGetCharactersObtained__DelegateSignature(TArray<struct FVALDTOS_MetaCharacterFormat>& CharactersFound)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OSSVAL_AsyncActionGetCharactersByAccountId", "OnGetCharactersObtained__DelegateSignature");

	Params::UOSSVAL_AsyncActionGetCharactersByAccountId_OnGetCharactersObtained__DelegateSignature_Params Parms{};

	Parms.CharactersFound = CharactersFound;

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

class UOSSVAL_AsyncActionGetCharactersByAccountId* UOSSVAL_AsyncActionGetCharactersByAccountId::GetCharactersByAccountId(class ULocalPlayer* LocalPlayer, struct FGuid& ID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OSSVAL_AsyncActionGetCharactersByAccountId", "GetCharactersByAccountId");

	Params::UOSSVAL_AsyncActionGetCharactersByAccountId_GetCharactersByAccountId_Params Parms{};

	Parms.LocalPlayer = LocalPlayer;
	Parms.ID = ID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class OnlineSubsystemValeria.OSSVAL_AsyncActionProfanityFilterString
// (None)

class UClass* UOSSVAL_AsyncActionProfanityFilterString::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OSSVAL_AsyncActionProfanityFilterString");

	return Clss;
}


// OSSVAL_AsyncActionProfanityFilterString OnlineSubsystemValeria.Default__OSSVAL_AsyncActionProfanityFilterString
// (Public, ClassDefaultObject, ArchetypeObject)

class UOSSVAL_AsyncActionProfanityFilterString* UOSSVAL_AsyncActionProfanityFilterString::GetDefaultObj()
{
	static class UOSSVAL_AsyncActionProfanityFilterString* Default = nullptr;

	if (!Default)
		Default = static_cast<UOSSVAL_AsyncActionProfanityFilterString*>(UOSSVAL_AsyncActionProfanityFilterString::StaticClass()->DefaultObject);

	return Default;
}


// DelegateFunction OnlineSubsystemValeria.OSSVAL_AsyncActionProfanityFilterString.OnResultObtained__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams)
// Parameters:
// struct FOSSVAL_ProfanityFilterResponseResponse                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UOSSVAL_AsyncActionProfanityFilterString::OnResultObtained__DelegateSignature(struct FOSSVAL_ProfanityFilterResponse& Response)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OSSVAL_AsyncActionProfanityFilterString", "OnResultObtained__DelegateSignature");

	Params::UOSSVAL_AsyncActionProfanityFilterString_OnResultObtained__DelegateSignature_Params Parms{};

	Parms.Response = Response;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OnlineSubsystemValeria.OSSVAL_AsyncActionProfanityFilterString.FilterString
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class ULocalPlayer*                LocalPlayer                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Str                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOSSVAL_AsyncActionProfanityFilterString*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOSSVAL_AsyncActionProfanityFilterString* UOSSVAL_AsyncActionProfanityFilterString::FilterString(class ULocalPlayer* LocalPlayer, const class FString& Str)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OSSVAL_AsyncActionProfanityFilterString", "FilterString");

	Params::UOSSVAL_AsyncActionProfanityFilterString_FilterString_Params Parms{};

	Parms.LocalPlayer = LocalPlayer;
	Parms.Str = Str;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class OnlineSubsystemValeria.OSSVAL_BeaconClient
// (Actor)

class UClass* AOSSVAL_BeaconClient::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OSSVAL_BeaconClient");

	return Clss;
}


// OSSVAL_BeaconClient OnlineSubsystemValeria.Default__OSSVAL_BeaconClient
// (Public, ClassDefaultObject, ArchetypeObject)

class AOSSVAL_BeaconClient* AOSSVAL_BeaconClient::GetDefaultObj()
{
	static class AOSSVAL_BeaconClient* Default = nullptr;

	if (!Default)
		Default = static_cast<AOSSVAL_BeaconClient*>(AOSSVAL_BeaconClient::StaticClass()->DefaultObject);

	return Default;
}


// Function OnlineSubsystemValeria.OSSVAL_BeaconClient.RpcServer_ValidateTicket
// (Net, NetReliable, Native, Event, Public, NetServer, HasDefaults)
// Parameters:
// struct FGuid                       RequestId                                                        (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FOSSVAL_MatchmakingTicket   Ticket                                                           (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FOSSVAL_MatchmakingTicketContextContext                                                          (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void AOSSVAL_BeaconClient::RpcServer_ValidateTicket(struct FGuid& RequestId, struct FOSSVAL_MatchmakingTicket& Ticket, struct FOSSVAL_MatchmakingTicketContext& Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OSSVAL_BeaconClient", "RpcServer_ValidateTicket");

	Params::AOSSVAL_BeaconClient_RpcServer_ValidateTicket_Params Parms{};

	Parms.RequestId = RequestId;
	Parms.Ticket = Ticket;
	Parms.Context = Context;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function OnlineSubsystemValeria.OSSVAL_BeaconClient.RpcClient_SendTicketValidationResponse
// (Net, NetReliable, Native, Event, Public, HasDefaults, NetClient)
// Parameters:
// struct FGuid                       RequestId                                                        (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAccepted                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FOSSVAL_MatchmakingTicket   Ticket                                                           (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FOSSVAL_MatchmakingTicketContextContext                                                          (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void AOSSVAL_BeaconClient::RpcClient_SendTicketValidationResponse(struct FGuid& RequestId, bool bAccepted, struct FOSSVAL_MatchmakingTicket& Ticket, struct FOSSVAL_MatchmakingTicketContext& Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OSSVAL_BeaconClient", "RpcClient_SendTicketValidationResponse");

	Params::AOSSVAL_BeaconClient_RpcClient_SendTicketValidationResponse_Params Parms{};

	Parms.RequestId = RequestId;
	Parms.bAccepted = bAccepted;
	Parms.Ticket = Ticket;
	Parms.Context = Context;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class OnlineSubsystemValeria.OSSVAL_BeaconHost
// (Actor)

class UClass* AOSSVAL_BeaconHost::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OSSVAL_BeaconHost");

	return Clss;
}


// OSSVAL_BeaconHost OnlineSubsystemValeria.Default__OSSVAL_BeaconHost
// (Public, ClassDefaultObject, ArchetypeObject)

class AOSSVAL_BeaconHost* AOSSVAL_BeaconHost::GetDefaultObj()
{
	static class AOSSVAL_BeaconHost* Default = nullptr;

	if (!Default)
		Default = static_cast<AOSSVAL_BeaconHost*>(AOSSVAL_BeaconHost::StaticClass()->DefaultObject);

	return Default;
}


// Class OnlineSubsystemValeria.OSSVAL_BeaconHostObject
// (Actor)

class UClass* AOSSVAL_BeaconHostObject::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OSSVAL_BeaconHostObject");

	return Clss;
}


// OSSVAL_BeaconHostObject OnlineSubsystemValeria.Default__OSSVAL_BeaconHostObject
// (Public, ClassDefaultObject, ArchetypeObject)

class AOSSVAL_BeaconHostObject* AOSSVAL_BeaconHostObject::GetDefaultObj()
{
	static class AOSSVAL_BeaconHostObject* Default = nullptr;

	if (!Default)
		Default = static_cast<AOSSVAL_BeaconHostObject*>(AOSSVAL_BeaconHostObject::StaticClass()->DefaultObject);

	return Default;
}


// Class OnlineSubsystemValeria.ValeriaOnlineBlueprintFunctions
// (None)

class UClass* UValeriaOnlineBlueprintFunctions::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ValeriaOnlineBlueprintFunctions");

	return Clss;
}


// ValeriaOnlineBlueprintFunctions OnlineSubsystemValeria.Default__ValeriaOnlineBlueprintFunctions
// (Public, ClassDefaultObject, ArchetypeObject)

class UValeriaOnlineBlueprintFunctions* UValeriaOnlineBlueprintFunctions::GetDefaultObj()
{
	static class UValeriaOnlineBlueprintFunctions* Default = nullptr;

	if (!Default)
		Default = static_cast<UValeriaOnlineBlueprintFunctions*>(UValeriaOnlineBlueprintFunctions::StaticClass()->DefaultObject);

	return Default;
}


// Function OnlineSubsystemValeria.ValeriaOnlineBlueprintFunctions.CreateSessionResult
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      ServerName                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Addr                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBlueprintSessionResult     ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FBlueprintSessionResult UValeriaOnlineBlueprintFunctions::CreateSessionResult(const class FString& ServerName, const class FString& Addr)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ValeriaOnlineBlueprintFunctions", "CreateSessionResult");

	Params::UValeriaOnlineBlueprintFunctions_CreateSessionResult_Params Parms{};

	Parms.ServerName = ServerName;
	Parms.Addr = Addr;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class OnlineSubsystemValeria.ValeriaPartyBeaconState
// (None)

class UClass* UValeriaPartyBeaconState::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ValeriaPartyBeaconState");

	return Clss;
}


// ValeriaPartyBeaconState OnlineSubsystemValeria.Default__ValeriaPartyBeaconState
// (Public, ClassDefaultObject, ArchetypeObject)

class UValeriaPartyBeaconState* UValeriaPartyBeaconState::GetDefaultObj()
{
	static class UValeriaPartyBeaconState* Default = nullptr;

	if (!Default)
		Default = static_cast<UValeriaPartyBeaconState*>(UValeriaPartyBeaconState::StaticClass()->DefaultObject);

	return Default;
}

}


