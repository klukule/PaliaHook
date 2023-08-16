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

// 0x80 (0x120 - 0xA0)
// Class Agones.AgonesComponent
class UAgonesComponent : public UActorComponent
{
public:
	class FString                                HttpPort;                                          // 0xA0(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HealthRateSeconds;                                 // 0xB0(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDisableAutoConnect;                               // 0xB4(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDisableAutoReady;                                 // 0xB5(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDisableAutoHealth;                                // 0xB6(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1883[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            ConnectedDelegate;                                 // 0xB8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            ConnectedFailDelegate;                             // 0xC8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1887[0x48];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AgonesComponent");
		return Clss;
	}

	void WatchGameServer(FDelegateProperty_ InWatchDelegate);
	void Shutdown(FDelegateProperty_ InSuccessDelegate, FDelegateProperty_ InErrorDelegate);
	void SetPlayerCapacity(int64 InCount, FDelegateProperty_ InSuccessDelegate, FDelegateProperty_ InErrorDelegate);
	void SetLabel(const class FString& InKey, const class FString& InValue, FDelegateProperty_ InSuccessDelegate, FDelegateProperty_ InErrorDelegate);
	void SetAnnotation(const class FString& InKey, const class FString& InValue, FDelegateProperty_ InSuccessDelegate, FDelegateProperty_ InErrorDelegate);
	void Reserve(int64 InSeconds, FDelegateProperty_ InSuccessDelegate, FDelegateProperty_ InErrorDelegate);
	void Ready(FDelegateProperty_ InSuccessDelegate, FDelegateProperty_ InErrorDelegate);
	void PlayerDisconnect(const class FString& InPlayerId, FDelegateProperty_ InSuccessDelegate, FDelegateProperty_ InErrorDelegate);
	void PlayerConnect(const class FString& InPlayerId, FDelegateProperty_ InSuccessDelegate, FDelegateProperty_ InErrorDelegate);
	void IsPlayerConnected(const class FString& InPlayerId, FDelegateProperty_ InSuccessDelegate, FDelegateProperty_ InErrorDelegate);
	void HealthPing(float InRateSeconds);
	void Health(FDelegateProperty_ InSuccessDelegate, FDelegateProperty_ InErrorDelegate);
	void GetPlayerCount(FDelegateProperty_ InSuccessDelegate, FDelegateProperty_ InErrorDelegate);
	void GetPlayerCapacity(FDelegateProperty_ InSuccessDelegate, FDelegateProperty_ InErrorDelegate);
	void GetConnectedPlayers(FDelegateProperty_ InSuccessDelegate, FDelegateProperty_ InErrorDelegate);
	void GameServer(FDelegateProperty_ InSuccessDelegate, FDelegateProperty_ InErrorDelegate);
	void ConnectSuccess(const struct FGameServerResponse& InGameServerResponse);
	void ConnectFail(struct FAgonesError& InError);
	void Connect();
	void Allocate(FDelegateProperty_ InSuccessDelegate, FDelegateProperty_ InErrorDelegate);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
