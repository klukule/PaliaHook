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
		static class UClass* Clss = UObject::FindClassFast("LibSd_CryptoLibrary");
		return Clss;
	}

	bool VerifyMessageWithPublicKey_Detached(TArray<uint8>& InSignature, TArray<uint8>& InMessage, TArray<uint8>& InPublicKey);
	bool VerifyMessageWithPublicKey(TArray<uint8>& InSignedMessage, TArray<uint8>& InPublicKey, TArray<uint8>* InMessage);
	bool SignMessageWithSecretKey_Detached(TArray<uint8>& InMessage, TArray<uint8>& InSecretKey, TArray<uint8>* InSignature);
	bool SignMessageWithSecretKey(TArray<uint8>& InMessage, TArray<uint8>& InSecretKey, TArray<uint8>* InSignedMessage);
	bool InitSodium();
	bool GenerateKeyPair(TArray<uint8>* InOutPublicKey, TArray<uint8>* InOutSecretKey);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
