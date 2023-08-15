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

// 0x0 (0x28 - 0x28)
// Class Libsodium.LibSd_CryptoLibrary
class ULibSd_CryptoLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("LibSd_CryptoLibrary");

		return Clss;
	}

	bool VerifyMessageWithPublicKey_Detached(TArray<uint8>& Signature, TArray<uint8>& Message, TArray<uint8>& PublicKey);
	bool VerifyMessageWithPublicKey(TArray<uint8>& SignedMessage, TArray<uint8>& PublicKey, TArray<uint8>* Message);
	bool SignMessageWithSecretKey_Detached(TArray<uint8>& Message, TArray<uint8>& SecretKey, TArray<uint8>* Signature);
	bool SignMessageWithSecretKey(TArray<uint8>& Message, TArray<uint8>& SecretKey, TArray<uint8>* SignedMessage);
	bool InitSodium();
	bool GenerateKeyPair(TArray<uint8>* OutPublicKey, TArray<uint8>* OutSecretKey);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
