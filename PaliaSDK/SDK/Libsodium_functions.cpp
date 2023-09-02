#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class Libsodium.LibSd_CryptoLibrary
// (None)

class UClass* ULibSd_CryptoLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LibSd_CryptoLibrary");

	return Clss;
}


// LibSd_CryptoLibrary Libsodium.Default__LibSd_CryptoLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class ULibSd_CryptoLibrary* ULibSd_CryptoLibrary::GetDefaultObj()
{
	static class ULibSd_CryptoLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<ULibSd_CryptoLibrary*>(ULibSd_CryptoLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function Libsodium.LibSd_CryptoLibrary.VerifyMessageWithPublicKey_Detached
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<uint8>                      Signature                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<uint8>                      Message                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<uint8>                      PublicKey                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULibSd_CryptoLibrary::VerifyMessageWithPublicKey_Detached(TArray<uint8>& Signature, TArray<uint8>& Message, TArray<uint8>& PublicKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LibSd_CryptoLibrary", "VerifyMessageWithPublicKey_Detached");

	Params::ULibSd_CryptoLibrary_VerifyMessageWithPublicKey_Detached_Params Parms{};

	Parms.Signature = Signature;
	Parms.Message = Message;
	Parms.PublicKey = PublicKey;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Libsodium.LibSd_CryptoLibrary.VerifyMessageWithPublicKey
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<uint8>                      SignedMessage                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<uint8>                      PublicKey                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<uint8>                      Message                                                          (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULibSd_CryptoLibrary::VerifyMessageWithPublicKey(TArray<uint8>& SignedMessage, TArray<uint8>& PublicKey, TArray<uint8>* Message)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LibSd_CryptoLibrary", "VerifyMessageWithPublicKey");

	Params::ULibSd_CryptoLibrary_VerifyMessageWithPublicKey_Params Parms{};

	Parms.SignedMessage = SignedMessage;
	Parms.PublicKey = PublicKey;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Message != nullptr)
		*Message = std::move(Parms.Message);

	return Parms.ReturnValue;

}


// Function Libsodium.LibSd_CryptoLibrary.SignMessageWithSecretKey_Detached
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<uint8>                      Message                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<uint8>                      SecretKey                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<uint8>                      Signature                                                        (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULibSd_CryptoLibrary::SignMessageWithSecretKey_Detached(TArray<uint8>& Message, TArray<uint8>& SecretKey, TArray<uint8>* Signature)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LibSd_CryptoLibrary", "SignMessageWithSecretKey_Detached");

	Params::ULibSd_CryptoLibrary_SignMessageWithSecretKey_Detached_Params Parms{};

	Parms.Message = Message;
	Parms.SecretKey = SecretKey;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Signature != nullptr)
		*Signature = std::move(Parms.Signature);

	return Parms.ReturnValue;

}


// Function Libsodium.LibSd_CryptoLibrary.SignMessageWithSecretKey
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<uint8>                      Message                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<uint8>                      SecretKey                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<uint8>                      SignedMessage                                                    (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULibSd_CryptoLibrary::SignMessageWithSecretKey(TArray<uint8>& Message, TArray<uint8>& SecretKey, TArray<uint8>* SignedMessage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LibSd_CryptoLibrary", "SignMessageWithSecretKey");

	Params::ULibSd_CryptoLibrary_SignMessageWithSecretKey_Params Parms{};

	Parms.Message = Message;
	Parms.SecretKey = SecretKey;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (SignedMessage != nullptr)
		*SignedMessage = std::move(Parms.SignedMessage);

	return Parms.ReturnValue;

}


// Function Libsodium.LibSd_CryptoLibrary.InitSodium
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULibSd_CryptoLibrary::InitSodium()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LibSd_CryptoLibrary", "InitSodium");

	Params::ULibSd_CryptoLibrary_InitSodium_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Libsodium.LibSd_CryptoLibrary.GenerateKeyPair
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<uint8>                      OutPublicKey                                                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<uint8>                      OutSecretKey                                                     (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULibSd_CryptoLibrary::GenerateKeyPair(TArray<uint8>* OutPublicKey, TArray<uint8>* OutSecretKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LibSd_CryptoLibrary", "GenerateKeyPair");

	Params::ULibSd_CryptoLibrary_GenerateKeyPair_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutPublicKey != nullptr)
		*OutPublicKey = std::move(Parms.OutPublicKey);

	if (OutSecretKey != nullptr)
		*OutSecretKey = std::move(Parms.OutSecretKey);

	return Parms.ReturnValue;

}

}


