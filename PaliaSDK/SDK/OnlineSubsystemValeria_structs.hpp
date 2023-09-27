#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EOSSVAL_MatchmakingFailErrorType : uint8
{
	Unknown                        = 0,
	AlreadyMatchmaking             = 1,
	InvalidPlayer                  = 2,
	RequestCreationFailed          = 3,
	MatchmakingTicketCreationFailed = 4,
	MatchmakingTicketCreationTimedOut = 5,
	ServerRPCSendFail              = 6,
	BeaconClientFailedToSpawn      = 7,
	BeaconClientFailedToConnect    = 8,
	TicketValidationTimedOut       = 9,
	TicketRejected                 = 10,
	PlayerControllerNotFound       = 11,
	LoginQueueGenericError         = 12,
	ExitLoginQueueGenericError     = 13,
	ExitLoginQueueTimeOut          = 14,
	PlayerFinalPersistTimedOut     = 15,
	EOSSVAL_MAX                    = 16,
};

enum class EOSSVAL_MatchmakingRequestType : uint8
{
	ServerType                     = 0,
	Space                          = 1,
	ServerSync                     = 2,
	EOSSVAL_MAX                    = 3,
};

enum class EControlMessageType : uint8
{
	Informational                  = 0,
	ServerInvite                   = 1,
	Party                          = 2,
	JoinSession                    = 3,
	PlayerGuild                    = 4,
	Friend                         = 5,
	InventoryRequests              = 6,
	FriendRouterType               = 7,
	EControlMessageType_MAX        = 8,
};

enum class EOSSVAL_ChatChannelType : uint8
{
	Invalid                        = 0,
	Global                         = 1,
	Server                         = 2,
	Party                          = 3,
	PlayerGuild                    = 4,
	EOSSVAL_MAX                    = 5,
};

enum class EOnlineSystemMessageType : uint8
{
	Unknown                        = 0,
	Chat                           = 1,
	Friends                        = 2,
	EOnlineSystemMessageType_MAX   = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x18 - 0x0)
// ScriptStruct OnlineSubsystemValeria.OSSVAL_ProfanityFilterResponse
struct FOSSVAL_ProfanityFilterResponse
{
public:
	bool                                         bSuccess;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_89A[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Result;                                            // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct OnlineSubsystemValeria.OSSVAL_CharacterNameAndId
struct FOSSVAL_CharacterNameAndId
{
public:
	struct FGuid                                 CharacterId;                                       // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PreferredName;                                     // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                FullName;                                          // 0x20(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
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
	uint8                                        Pad_8A6[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
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
	uint8                                        Pad_8AB[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ErrorCode;                                         // 0x4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  ErrorText;                                         // 0x8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NativeAccessSpecifierPublic)
};

// 0xC0 (0xC0 - 0x0)
// ScriptStruct OnlineSubsystemValeria.OSSVAL_MatchmakingResult
struct FOSSVAL_MatchmakingResult
{
public:
	bool                                         bSuccess;                                          // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInternalRequest;                                  // 0x1(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8AF[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FOSSVAL_MatchmakingTicket             Ticket;                                            // 0x8(0x98)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NativeAccessSpecifierPublic)
	struct FOSSVAL_MatchmakingErrorResult        ErrorResult;                                       // 0xA0(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NativeAccessSpecifierPublic)
};

// 0xC8 (0xC8 - 0x0)
// ScriptStruct OnlineSubsystemValeria.OSSVAL_MatchmakingJoinStatusResult
struct FOSSVAL_MatchmakingJoinStatusResult
{
public:
	int32                                        JoinNumber;                                        // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B9[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FOSSVAL_MatchmakingResult             MatchmakingResult;                                 // 0x8(0xC0)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NativeAccessSpecifierPublic)
};

// 0xA8 (0xA8 - 0x0)
// ScriptStruct OnlineSubsystemValeria.OSSVAL_MatchmakingRequestContext
struct FOSSVAL_MatchmakingRequestContext
{
public:
	bool                                         bInternalRequest;                                  // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bJoinAfterGettingTicket;                           // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EOSSVAL_MatchmakingRequestType    Type;                                              // 0x2(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8BE[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ServerType;                                        // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 SpaceId;                                           // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FOSSVAL_MatchmakingRequestPlayer      ServerSyncTargetPlayer;                            // 0x28(0x20)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	class FString                                CurrentNetWorkVersion;                             // 0x48(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FOSSVAL_MatchmakingRequestPlayer      CurrentPlayer;                                     // 0x58(0x20)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FOSSVAL_MatchmakingRequestPlayer      PartyLeader;                                       // 0x78(0x20)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FOSSVAL_MatchmakingRequestPlayer> PartyMembers;                                      // 0x98(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
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
	uint8                                        Pad_8C9[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
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
	uint8                                        Pad_8D3[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  LockedDesc;                                        // 0x50(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPrivate)
	class FText                                  UnlockedDesc;                                      // 0x68(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPrivate)
	bool                                         bIsHidden;                                         // 0x80(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_8D7[0x27];                                     // Fixing Size Of Struct [ Dumper-7 ]
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
	uint8                                        Pad_8D9[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
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

// 0x28 (0x28 - 0x0)
// ScriptStruct OnlineSubsystemValeria.OSSVAL_ChatChannel
struct FOSSVAL_ChatChannel
{
public:
	class FString                                Name;                                              // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Token;                                             // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EOSSVAL_ChatChannelType           Kind;                                              // 0x20(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8DF[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// ScriptStruct OnlineSubsystemValeria.OSSVAL_SignInResponse
struct FOSSVAL_SignInResponse
{
public:
	bool                                         bSuccessful;                                       // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8E1[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Token;                                             // 0x8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Domain;                                            // 0x18(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Issuer;                                            // 0x28(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Endpoint;                                          // 0x38(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct OnlineSubsystemValeria.OSSVAL_GetChannelsResponse
struct FOSSVAL_GetChannelsResponse
{
public:
	bool                                         bSuccessful;                                       // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8E3[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FOSSVAL_ChatChannel>           Channels;                                          // 0x8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct OnlineSubsystemValeria.OSSVAL_ChatCensorResponse
struct FOSSVAL_ChatCensorResponse
{
public:
	bool                                         bSuccessful;                                       // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8E5[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ErrorCode;                                         // 0x4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Message;                                           // 0x8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct OnlineSubsystemValeria.OSSVAL_MatchmakingCustomErrorContainer
struct FOSSVAL_MatchmakingCustomErrorContainer
{
public:
	TMap<int32, class FText>                     ErrorCodeTextTable;                                // 0x0(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct OnlineSubsystemValeria.OSSVAL_ControlMessage
struct FOSSVAL_ControlMessage
{
public:
	enum class EOnlineSystemMessageType          RouterType;                                        // 0x0(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EControlMessageType               ControlMessageType;                                // 0x1(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8EA[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Content;                                           // 0x8(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                FromWorldName;                                     // 0x18(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MessageTargetType;                                 // 0x28(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8EC[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
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


