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

enum class EOnlineProxyStoreOfferDiscountType : uint8
{
	EOnlineProxyStoreOfferDiscountType__NotOnSale = 0,
	EOnlineProxyStoreOfferDiscountType__Percentage = 1,
	EOnlineProxyStoreOfferDiscountType__DiscountAmount = 2,
	EOnlineProxyStoreOfferDiscountType__PayAmount = 3,
	EOnlineProxyStoreOfferDiscountType__EOnlineProxyStoreOfferDiscountType_MAX = 4,
};

enum class EInAppPurchaseStatus : uint8
{
	EInAppPurchaseStatus__Invalid  = 0,
	EInAppPurchaseStatus__Failed   = 1,
	EInAppPurchaseStatus__Deferred = 2,
	EInAppPurchaseStatus__Canceled = 3,
	EInAppPurchaseStatus__Purchased = 4,
	EInAppPurchaseStatus__Restored = 5,
	EInAppPurchaseStatus__EInAppPurchaseStatus_MAX = 6,
};

enum class EBeaconConnectionState : uint8
{
	EBeaconConnectionState__Invalid = 0,
	EBeaconConnectionState__Closed = 1,
	EBeaconConnectionState__Pending = 2,
	EBeaconConnectionState__Open   = 3,
	EBeaconConnectionState__EBeaconConnectionState_MAX = 4,
};

enum class EClientRequestType : uint8
{
	EClientRequestType__NonePending = 0,
	EClientRequestType__ExistingSessionReservation = 1,
	EClientRequestType__ReservationUpdate = 2,
	EClientRequestType__EmptyServerReservation = 3,
	EClientRequestType__Reconnect  = 4,
	EClientRequestType__Abandon    = 5,
	EClientRequestType__ReservationRemoveMembers = 6,
	EClientRequestType__AddOrUpdateReservation = 7,
	EClientRequestType__EClientRequestType_MAX = 8,
};

enum class EPartyReservationResult : uint8
{
	EPartyReservationResult__NoResult = 0,
	EPartyReservationResult__RequestPending = 1,
	EPartyReservationResult__GeneralError = 2,
	EPartyReservationResult__PartyLimitReached = 3,
	EPartyReservationResult__IncorrectPlayerCount = 4,
	EPartyReservationResult__RequestTimedOut = 5,
	EPartyReservationResult__ReservationDuplicate = 6,
	EPartyReservationResult__ReservationNotFound = 7,
	EPartyReservationResult__ReservationAccepted = 8,
	EPartyReservationResult__ReservationDenied = 9,
	EPartyReservationResult__ReservationDenied_CrossPlayRestriction = 10,
	EPartyReservationResult__ReservationDenied_Banned = 11,
	EPartyReservationResult__ReservationRequestCanceled = 12,
	EPartyReservationResult__ReservationInvalid = 13,
	EPartyReservationResult__BadSessionId = 14,
	EPartyReservationResult__ReservationDenied_ContainsExistingPlayers = 15,
	EPartyReservationResult__EPartyReservationResult_MAX = 16,
};

enum class ESpectatorClientRequestType : uint8
{
	ESpectatorClientRequestType__NonePending = 0,
	ESpectatorClientRequestType__ExistingSessionReservation = 1,
	ESpectatorClientRequestType__ReservationUpdate = 2,
	ESpectatorClientRequestType__EmptyServerReservation = 3,
	ESpectatorClientRequestType__Reconnect = 4,
	ESpectatorClientRequestType__Abandon = 5,
	ESpectatorClientRequestType__ESpectatorClientRequestType_MAX = 6,
};

enum class ESpectatorReservationResult : uint8
{
	ESpectatorReservationResult__NoResult = 0,
	ESpectatorReservationResult__RequestPending = 1,
	ESpectatorReservationResult__GeneralError = 2,
	ESpectatorReservationResult__SpectatorLimitReached = 3,
	ESpectatorReservationResult__IncorrectPlayerCount = 4,
	ESpectatorReservationResult__RequestTimedOut = 5,
	ESpectatorReservationResult__ReservationDuplicate = 6,
	ESpectatorReservationResult__ReservationNotFound = 7,
	ESpectatorReservationResult__ReservationAccepted = 8,
	ESpectatorReservationResult__ReservationDenied = 9,
	ESpectatorReservationResult__ReservationDenied_CrossPlayRestriction = 10,
	ESpectatorReservationResult__ReservationDenied_Banned = 11,
	ESpectatorReservationResult__ReservationRequestCanceled = 12,
	ESpectatorReservationResult__ReservationInvalid = 13,
	ESpectatorReservationResult__BadSessionId = 14,
	ESpectatorReservationResult__ReservationDenied_ContainsExistingPlayers = 15,
	ESpectatorReservationResult__ESpectatorReservationResult_MAX = 16,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x120 (0x120 - 0x0)
// ScriptStruct OnlineSubsystemUtils.BlueprintSessionResult
struct FBlueprintSessionResult
{
public:
	uint8                                        Pad_9F9[0x120];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x110 (0x110 - 0x0)
// ScriptStruct OnlineSubsystemUtils.OnlineProxyStoreOffer
struct FOnlineProxyStoreOffer
{
public:
	class FString                                OfferId;                                           // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  Title;                                             // 0x10(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  Description;                                       // 0x28(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  LongDescription;                                   // 0x40(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  RegularPriceText;                                  // 0x58(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	int32                                        RegularPrice;                                      // 0x70(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A1B[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  PriceText;                                         // 0x78(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	int32                                        NumericPrice;                                      // 0x90(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A1D[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CurrencyCode;                                      // 0x98(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                             ReleaseDate;                                       // 0xA8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                             ExpirationDate;                                    // 0xB0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EOnlineProxyStoreOfferDiscountType DiscountType;                                      // 0xB8(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A21[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class FString, class FString>           DynamicFields;                                     // 0xC0(0x50)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct OnlineSubsystemUtils.InAppPurchaseRestoreInfo2
struct FInAppPurchaseRestoreInfo2
{
public:
	class FString                                ItemName;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ItemId;                                            // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ValidationInfo;                                    // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct OnlineSubsystemUtils.InAppPurchaseReceiptInfo2
struct FInAppPurchaseReceiptInfo2
{
public:
	class FString                                ItemName;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ItemId;                                            // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ValidationInfo;                                    // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct OnlineSubsystemUtils.PlayerReservation
struct FPlayerReservation
{
public:
	struct FUniqueNetIdRepl                      UniqueId;                                          // 0x0(0x30)(Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ValidationStr;                                     // 0x30(0x10)(ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Platform;                                          // 0x40(0x10)(ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowCrossplay;                                   // 0x50(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A4A[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ElapsedTime;                                       // 0x54(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct OnlineSubsystemUtils.InAppPurchaseProductRequest2
struct FInAppPurchaseProductRequest2
{
public:
	class FString                                ProductIdentifier;                                 // 0x0(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsConsumable;                                     // 0x10(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A4D[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xF8 (0xF8 - 0x0)
// ScriptStruct OnlineSubsystemUtils.InAppPurchaseProductInfo2
struct FInAppPurchaseProductInfo2
{
public:
	class FString                                Identifier;                                        // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                TransactionIdentifier;                             // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                DisplayName;                                       // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                DisplayDescription;                                // 0x30(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                DisplayPrice;                                      // 0x40(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RawPrice;                                          // 0x50(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A58[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CurrencyCode;                                      // 0x58(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                CurrencySymbol;                                    // 0x68(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                DecimalSeparator;                                  // 0x78(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                GroupingSeparator;                                 // 0x88(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReceiptData;                                       // 0x98(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FString, class FString>           DynamicFields;                                     // 0xA8(0x50)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct OnlineSubsystemUtils.PIELoginSettingsInternal
struct FPIELoginSettingsInternal
{
public:
	class FString                                ID;                                                // 0x0(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Token;                                             // 0x10(0x10)(Edit, ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Type;                                              // 0x20(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<uint8>                                TokenBytes;                                        // 0x30(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct OnlineSubsystemUtils.PartyReservation
struct FPartyReservation
{
public:
	int32                                        TeamNum;                                           // 0x0(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A63[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FUniqueNetIdRepl                      PartyLeader;                                       // 0x8(0x30)(Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FPlayerReservation>            PartyMembers;                                      // 0x38(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	TArray<struct FPlayerReservation>            RemovedPartyMembers;                               // 0x48(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct OnlineSubsystemUtils.PartyBeaconCrossplayPlatformMapping
struct FPartyBeaconCrossplayPlatformMapping
{
public:
	class FString                                PlatformName;                                      // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PlatformType;                                      // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x88 (0x88 - 0x0)
// ScriptStruct OnlineSubsystemUtils.SpectatorReservation
struct FSpectatorReservation
{
public:
	struct FUniqueNetIdRepl                      SpectatorId;                                       // 0x0(0x30)(Transient, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPlayerReservation                    Spectator;                                         // 0x30(0x58)(Transient, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
