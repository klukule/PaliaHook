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

enum class EOSSVAL_ChatChannelType : uint8
{
	EOSSVAL_ChatChannelType__Invalid = 0,
	EOSSVAL_ChatChannelType__Global = 1,
	EOSSVAL_ChatChannelType__Server = 2,
	EOSSVAL_ChatChannelType__Party = 3,
	EOSSVAL_ChatChannelType__PlayerGuild = 4,
	EOSSVAL_ChatChannelType__EOSSVAL_MAX = 5,
};

enum class EOSSVAL_MatchmakingFailErrorType : uint8
{
	EOSSVAL_MatchmakingFailErrorType__Unknown = 0,
	EOSSVAL_MatchmakingFailErrorType__AlreadyMatchmaking = 1,
	EOSSVAL_MatchmakingFailErrorType__InvalidPlayer = 2,
	EOSSVAL_MatchmakingFailErrorType__RequestCreationFailed = 3,
	EOSSVAL_MatchmakingFailErrorType__MatchmakingTicketCreationFailed = 4,
	EOSSVAL_MatchmakingFailErrorType__MatchmakingTicketCreationTimedOut = 5,
	EOSSVAL_MatchmakingFailErrorType__ServerRPCSendFail = 6,
	EOSSVAL_MatchmakingFailErrorType__BeaconClientFailedToSpawn = 7,
	EOSSVAL_MatchmakingFailErrorType__BeaconClientFailedToConnect = 8,
	EOSSVAL_MatchmakingFailErrorType__TicketValidationTimedOut = 9,
	EOSSVAL_MatchmakingFailErrorType__TicketRejected = 10,
	EOSSVAL_MatchmakingFailErrorType__PlayerControllerNotFound = 11,
	EOSSVAL_MatchmakingFailErrorType__LoginQueueGenericError = 12,
	EOSSVAL_MatchmakingFailErrorType__ExitLoginQueueGenericError = 13,
	EOSSVAL_MatchmakingFailErrorType__ExitLoginQueueTimeOut = 14,
	EOSSVAL_MatchmakingFailErrorType__EOSSVAL_MAX = 15,
};

enum class EOSSVAL_MatchmakingRequestType : uint8
{
	EOSSVAL_MatchmakingRequestType__ServerType = 0,
	EOSSVAL_MatchmakingRequestType__Space = 1,
	EOSSVAL_MatchmakingRequestType__ServerSync = 2,
	EOSSVAL_MatchmakingRequestType__EOSSVAL_MAX = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x30 - 0x0)
// ScriptStruct OnlineSubsystemValeria.OSSVAL_CharacterNameAndId
struct FOSSVAL_CharacterNameAndId
{
public:
	struct FGuid                                 CharacterId;                                       // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PreferredName;                                     // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                FullName;                                          // 0x20(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct OnlineSubsystemValeria.OSSVAL_ChatChannelCreationSettings
struct FOSSVAL_ChatChannelCreationSettings
{
public:
	struct FGuid                                 OwnerId;                                           // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EOSSVAL_ChatChannelType           Type;                                              // 0x10(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2710[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Abbreviation;                                      // 0x18(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bVoiceEnabled;                                     // 0x28(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2711[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          Color;                                             // 0x2C(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2712[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x58 - 0x0)
// ScriptStruct OnlineSubsystemValeria.OSSVAL_ChatChannel
struct FOSSVAL_ChatChannel
{
public:
	struct FGuid                                 OwnerId;                                           // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 ID;                                                // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Name;                                              // 0x20(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EOSSVAL_ChatChannelType           Kind;                                              // 0x30(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsVoiceEnabled;                                    // 0x31(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2715[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Color;                                             // 0x38(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Abbreviation;                                      // 0x48(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct OnlineSubsystemValeria.OSSVAL_MatchmakingRequestPlayer
struct FOSSVAL_MatchmakingRequestPlayer
{
public:
	struct FGuid                                 AccountId;                                         // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 CharacterId;                                       // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x98 (0x98 - 0x0)
// ScriptStruct OnlineSubsystemValeria.OSSVAL_MatchmakingTicket
struct FOSSVAL_MatchmakingTicket
{
public:
	class FString                                Signature;                                         // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 TicketId;                                          // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                        Expiry;                                            // 0x20(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FOSSVAL_MatchmakingRequestPlayer      Player;                                            // 0x28(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	class FString                                ServerId;                                          // 0x48(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ServerType;                                        // 0x58(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ServerVersion;                                     // 0x68(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        ServerStatus;                                      // 0x78(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_271A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ServerAddr;                                        // 0x80(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ServerPort;                                        // 0x90(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ServerBeaconPort;                                  // 0x94(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct OnlineSubsystemValeria.OSSVAL_MatchmakingErrorResult
struct FOSSVAL_MatchmakingErrorResult
{
public:
	enum class EOSSVAL_MatchmakingFailErrorType  ErrorType;                                         // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_271B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ErrorCode;                                         // 0x4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  ErrorText;                                         // 0x8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NativeAccessSpecifierPublic)
};

// 0xC0 (0xC0 - 0x0)
// ScriptStruct OnlineSubsystemValeria.OSSVAL_MatchmakingResult
struct FOSSVAL_MatchmakingResult
{
public:
	bool                                         bSuccess;                                          // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_271E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FOSSVAL_MatchmakingTicket             Ticket;                                            // 0x8(0x98)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NativeAccessSpecifierPublic)
	struct FOSSVAL_MatchmakingErrorResult        ErrorResult;                                       // 0xA0(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NativeAccessSpecifierPublic)
};

// 0xC8 (0xC8 - 0x0)
// ScriptStruct OnlineSubsystemValeria.OSSVAL_MatchmakingJoinStatusResult
struct FOSSVAL_MatchmakingJoinStatusResult
{
public:
	int32                                        JoinNumber;                                        // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2724[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FOSSVAL_MatchmakingResult             MatchmakingResult;                                 // 0x8(0xC0)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NativeAccessSpecifierPublic)
};

// 0x88 (0x88 - 0x0)
// ScriptStruct OnlineSubsystemValeria.OSSVAL_MatchmakingRequestContext
struct FOSSVAL_MatchmakingRequestContext
{
public:
	bool                                         bInternalRequest;                                  // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bJoinAfterGettingTicket;                           // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EOSSVAL_MatchmakingRequestType    Type;                                              // 0x2(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2725[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ServerType;                                        // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 SpaceId;                                           // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FOSSVAL_MatchmakingRequestPlayer      ServerSyncTargetPlayer;                            // 0x28(0x20)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	class FString                                CurrentNetWorkVersion;                             // 0x48(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FOSSVAL_MatchmakingRequestPlayer      CurrentPlayer;                                     // 0x58(0x20)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FOSSVAL_MatchmakingRequestPlayer> PartyMembers;                                      // 0x78(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// ScriptStruct OnlineSubsystemValeria.ValeriaUserDTO
struct FValeriaUserDTO
{
public:
	class FString                                UserName;                                          // 0x0(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Password;                                          // 0x10(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Email;                                             // 0x20(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                FirstName;                                         // 0x30(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                LastName;                                          // 0x40(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Region;                                            // 0x50(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                             Birthday;                                          // 0x60(0x8)(BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct OnlineSubsystemValeria.OSSVAL_SelectedCharacter
struct FOSSVAL_SelectedCharacter
{
public:
	struct FGuid                                 AccountId;                                         // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGuid                                 CharacterId;                                       // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FString                                CharacterName;                                     // 0x20(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FString                                PreferredName;                                     // 0x30(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct OnlineSubsystemValeria.OSSVAL_MatchmakingTicketContext
struct FOSSVAL_MatchmakingTicketContext
{
public:
	struct FGuid                                 SpaceId;                                           // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x738 (0x738 - 0x0)
// ScriptStruct OnlineSubsystemValeria.OSSVAL_RegisterCharacterResponse
struct FOSSVAL_RegisterCharacterResponse
{
public:
	struct FVALDTOS_MetaCharacterFormat          CharacterData;                                     // 0x0(0x718)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  ErrorText;                                         // 0x718(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	int32                                        ErrorCode;                                         // 0x730(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2730[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct OnlineSubsystemValeria.DiscoveredServerDTO
struct FDiscoveredServerDTO
{
public:
	class FString                                ServerName;                                        // 0x0(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ServerAddress;                                     // 0x10(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct OnlineSubsystemValeria.ValeriaOnlineAchievement
struct FValeriaOnlineAchievement
{
public:
	class FString                                AchievementID;                                     // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDateTime                             UnlockTime;                                        // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDateTime                             ClaimTime;                                         // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0xA8 (0xA8 - 0x0)
// ScriptStruct OnlineSubsystemValeria.ValeriaOnlineAchievementDefinition
struct FValeriaOnlineAchievementDefinition
{
public:
	class FString                                AchievementID;                                     // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FText                                  Title;                                             // 0x10(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPrivate)
	class FString                                GroupID;                                           // 0x28(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                Category;                                          // 0x38(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        Tier;                                              // 0x48(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_273C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  LockedDesc;                                        // 0x50(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPrivate)
	class FText                                  UnlockedDesc;                                      // 0x68(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPrivate)
	bool                                         bIsHidden;                                         // 0x80(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_273D[0x27];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// ScriptStruct OnlineSubsystemValeria.ServerStatusUpdate
struct FServerStatusUpdate
{
public:
	class FString                                ServerId;                                          // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ServerType;                                        // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Ip;                                                // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Port;                                              // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        BeaconPort;                                        // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        AvailableSlots;                                    // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_273F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        PlayerIds;                                         // 0x40(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct OnlineSubsystemValeria.MatchmakingResult
struct FMatchmakingResult
{
public:
	TArray<struct FServerStatusUpdate>           Servers;                                           // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct OnlineSubsystemValeria.MatchmakingNetId
struct FMatchmakingNetId
{
public:
	struct FGuid                                 Account_id;                                        // 0x0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 Character_id;                                      // 0x10(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct OnlineSubsystemValeria.MatchmakingSearchCriteria
struct FMatchmakingSearchCriteria
{
public:
	TArray<struct FMatchmakingNetId>             Characters;                                        // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct OnlineSubsystemValeria.OSSVAL_OnlineProfile
struct FOSSVAL_OnlineProfile
{
public:
	class FString                                UserName;                                          // 0x0(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Password;                                          // 0x10(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct OnlineSubsystemValeria.OSSVAL_MatchmakingCustomErrorContainer
struct FOSSVAL_MatchmakingCustomErrorContainer
{
public:
	TMap<int32, class FText>                     ErrorCodeTextTable;                                // 0x0(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct OnlineSubsystemValeria.ValeriaPresenceData
struct FValeriaPresenceData
{
public:
	class FString                                ServerId;                                          // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ServerMap;                                         // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                UserId;                                            // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                GameStatus;                                        // 0x30(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
