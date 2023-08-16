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

enum class ENetworkFailure : uint8
{
	ENetworkFailure__NetDriverAlreadyExists = 0,
	ENetworkFailure__NetDriverCreateFailure = 1,
	ENetworkFailure__NetDriverListenFailure = 2,
	ENetworkFailure__ConnectionLost = 3,
	ENetworkFailure__ConnectionTimeout = 4,
	ENetworkFailure__FailureReceived = 5,
	ENetworkFailure__OutdatedClient = 6,
	ENetworkFailure__OutdatedServer = 7,
	ENetworkFailure__PendingConnectionFailure = 8,
	ENetworkFailure__NetGuidMismatch = 9,
	ENetworkFailure__NetChecksumMismatch = 10,
	ENetworkFailure__ENetworkFailure_MAX = 11,
};

enum class EFastArraySerializerDeltaFlags : uint8
{
	EFastArraySerializerDeltaFlags__None = 0,
	EFastArraySerializerDeltaFlags__HasBeenSerialized = 1,
	EFastArraySerializerDeltaFlags__HasDeltaBeenRequested = 2,
	EFastArraySerializerDeltaFlags__IsUsingDeltaSerialization = 4,
	EFastArraySerializerDeltaFlags__EFastArraySerializerDeltaFlags_MAX = 5,
};

enum class ENetCloseResult : uint8
{
	ENetCloseResult__NetDriverAlreadyExists = 0,
	ENetCloseResult__NetDriverCreateFailure = 1,
	ENetCloseResult__NetDriverListenFailure = 2,
	ENetCloseResult__ConnectionLost = 3,
	ENetCloseResult__ConnectionTimeout = 4,
	ENetCloseResult__FailureReceived = 5,
	ENetCloseResult__OutdatedClient = 6,
	ENetCloseResult__OutdatedServer = 7,
	ENetCloseResult__PendingConnectionFailure = 8,
	ENetCloseResult__NetGuidMismatch = 9,
	ENetCloseResult__NetChecksumMismatch = 10,
	ENetCloseResult__SecurityMalformedPacket = 11,
	ENetCloseResult__SecurityInvalidData = 12,
	ENetCloseResult__SecurityClosed = 13,
	ENetCloseResult__Unknown       = 14,
	ENetCloseResult__Success       = 15,
	ENetCloseResult__Extended      = 16,
	ENetCloseResult__HostClosedConnection = 17,
	ENetCloseResult__Disconnect    = 18,
	ENetCloseResult__Upgrade       = 19,
	ENetCloseResult__PreLoginFailure = 20,
	ENetCloseResult__JoinFailure   = 21,
	ENetCloseResult__JoinSplitFailure = 22,
	ENetCloseResult__AddressResolutionFailed = 23,
	ENetCloseResult__RPCDoS        = 24,
	ENetCloseResult__Cleanup       = 25,
	ENetCloseResult__MissingLevelPackage = 26,
	ENetCloseResult__PacketHandlerIncomingError = 27,
	ENetCloseResult__ZeroLastByte  = 28,
	ENetCloseResult__ZeroSize      = 29,
	ENetCloseResult__ReadHeaderFail = 30,
	ENetCloseResult__ReadHeaderExtraFail = 31,
	ENetCloseResult__AckSequenceMismatch = 32,
	ENetCloseResult__BunchBadChannelIndex = 33,
	ENetCloseResult__BunchChannelNameFail = 34,
	ENetCloseResult__BunchWrongChannelType = 35,
	ENetCloseResult__BunchHeaderOverflow = 36,
	ENetCloseResult__BunchDataOverflow = 37,
	ENetCloseResult__BunchServerPackageMapExports = 38,
	ENetCloseResult__BunchPrematureControlChannel = 39,
	ENetCloseResult__BunchPrematureChannel = 40,
	ENetCloseResult__BunchPrematureControlClose = 41,
	ENetCloseResult__UnknownChannelType = 42,
	ENetCloseResult__PrematureSend = 43,
	ENetCloseResult__CorruptData   = 44,
	ENetCloseResult__SocketSendFailure = 45,
	ENetCloseResult__BadChildConnectionIndex = 46,
	ENetCloseResult__LogLimitInstant = 47,
	ENetCloseResult__LogLimitSustained = 48,
	ENetCloseResult__EncryptionFailure = 49,
	ENetCloseResult__EncryptionTokenMissing = 50,
	ENetCloseResult__ReceivedNetGUIDBunchFail = 51,
	ENetCloseResult__MaxReliableExceeded = 52,
	ENetCloseResult__ReceivedNextBunchFail = 53,
	ENetCloseResult__ReceivedNextBunchQueueFail = 54,
	ENetCloseResult__PartialInitialReliableDestroy = 55,
	ENetCloseResult__PartialMergeReliableDestroy = 56,
	ENetCloseResult__PartialInitialNonByteAligned = 57,
	ENetCloseResult__PartialNonByteAligned = 58,
	ENetCloseResult__PartialFinalPackageMapExports = 59,
	ENetCloseResult__PartialTooLarge = 60,
	ENetCloseResult__AlreadyOpen   = 61,
	ENetCloseResult__ReliableBeforeOpen = 62,
	ENetCloseResult__ReliableBufferOverflow = 63,
	ENetCloseResult__RPCReliableBufferOverflow = 64,
	ENetCloseResult__ControlChannelClose = 65,
	ENetCloseResult__ControlChannelEndianCheck = 66,
	ENetCloseResult__ControlChannelPlayerChannelFail = 67,
	ENetCloseResult__ControlChannelMessageUnknown = 68,
	ENetCloseResult__ControlChannelMessageFail = 69,
	ENetCloseResult__ControlChannelMessagePayloadFail = 70,
	ENetCloseResult__ControlChannelBunchOverflowed = 71,
	ENetCloseResult__ControlChannelQueueBunchOverflowed = 72,
	ENetCloseResult__ClientHasMustBeMappedGUIDs = 73,
	ENetCloseResult__ClientSentDestructionInfo = 74,
	ENetCloseResult__UnregisteredMustBeMappedGUID = 75,
	ENetCloseResult__ObjectReplicatorReceivedBunchFail = 76,
	ENetCloseResult__ContentBlockFail = 77,
	ENetCloseResult__ContentBlockHeaderRepLayoutFail = 78,
	ENetCloseResult__ContentBlockHeaderIsActorFail = 79,
	ENetCloseResult__ContentBlockHeaderObjFail = 80,
	ENetCloseResult__ContentBlockHeaderPrematureEnd = 81,
	ENetCloseResult__ContentBlockHeaderSubObjectActor = 82,
	ENetCloseResult__ContentBlockHeaderBadParent = 83,
	ENetCloseResult__ContentBlockHeaderInvalidCreate = 84,
	ENetCloseResult__ContentBlockHeaderStablyNamedFail = 85,
	ENetCloseResult__ContentBlockHeaderNoSubObjectClass = 86,
	ENetCloseResult__ContentBlockHeaderUObjectSubObject = 87,
	ENetCloseResult__ContentBlockHeaderAActorSubObject = 88,
	ENetCloseResult__ContentBlockHeaderFail = 89,
	ENetCloseResult__ContentBlockPayloadBitsFail = 90,
	ENetCloseResult__FieldHeaderRepIndex = 91,
	ENetCloseResult__FieldHeaderBadRepIndex = 92,
	ENetCloseResult__FieldHeaderPayloadBitsFail = 93,
	ENetCloseResult__FieldPayloadFail = 94,
	ENetCloseResult__BeaconControlFlowError = 95,
	ENetCloseResult__BeaconUnableToParsePacket = 96,
	ENetCloseResult__BeaconAuthenticationFailure = 97,
	ENetCloseResult__BeaconLoginInvalidIdError = 98,
	ENetCloseResult__BeaconLoginInvalidAuthHandlerError = 99,
	ENetCloseResult__BeaconAuthError = 100,
	ENetCloseResult__BeaconSpawnClientWorldPackageNameError = 101,
	ENetCloseResult__BeaconSpawnExistingActorError = 102,
	ENetCloseResult__BeaconSpawnFailureError = 103,
	ENetCloseResult__BeaconSpawnNetGUIDAckNoActor = 104,
	ENetCloseResult__BeaconSpawnNetGUIDAckNoHost = 105,
	ENetCloseResult__BeaconSpawnUnexpectedError = 106,
	ENetCloseResult__FaultDisconnect = 107,
	ENetCloseResult__NotRecoverable = 108,
	ENetCloseResult__ENetCloseResult_MAX = 109,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0xC - 0x0)
// ScriptStruct NetCore.FastArraySerializerItem
struct FFastArraySerializerItem
{
public:
	int32                                        ReplicationID;                                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReplicationKey;                                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MostRecentArrayReplicationKey;                     // 0x8(0x4)(ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x108 (0x108 - 0x0)
// ScriptStruct NetCore.FastArraySerializer
struct FFastArraySerializer
{
public:
	uint8                                        Pad_2537[0x54];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ArrayReplicationKey;                               // 0x54(0x4)(ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2539[0xA8];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EFastArraySerializerDeltaFlags    DeltaFlags;                                        // 0x100(0x1)(ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_253B[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// ScriptStruct NetCore.NetAnalyticsDataConfig
struct FNetAnalyticsDataConfig
{
public:
	class FName                                  DataName;                                          // 0x0(0x8)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0x8(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2548[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct NetCore.StateStruct
struct FStateStruct
{
public:
	uint8                                        Pad_2549[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                StateName;                                         // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x18 (0x30 - 0x18)
// ScriptStruct NetCore.EscalationState
struct FEscalationState : public FStateStruct
{
public:
	bool                                         bLogEscalate;                                      // 0x18(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDormant;                                          // 0x19(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int16                                        CooloffTime;                                       // 0x1A(0x2)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int16                                        AutoEscalateTime;                                  // 0x1C(0x2)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int8                                         HighestTimePeriod;                                 // 0x1E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2550[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int8>                                 AllTimePeriods;                                    // 0x20(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
};

// 0x10 (0x40 - 0x30)
// ScriptStruct NetCore.NetFaultState
struct FNetFaultState : public FEscalationState
{
public:
	bool                                         bCloseConnection;                                  // 0x30(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2554[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int16                                        EscalateQuotaFaultsPerPeriod;                      // 0x32(0x2)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int8                                         EscalateQuotaFaultPercentPerPeriod;                // 0x34(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2555[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int16                                        DescalateQuotaFaultsPerPeriod;                     // 0x36(0x2)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int8                                         DescalateQuotaFaultPercentPerPeriod;               // 0x38(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int8                                         EscalateQuotaTimePeriod;                           // 0x39(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2557[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
