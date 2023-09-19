#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EVALUI_CharCustomization_UpdateLoadoutContext : uint8
{
	InitialLoadout                 = 0,
	TileSelected                   = 1,
	BodyTypeChanged                = 2,
	VariantChanged                 = 3,
	BodyDataChanged                = 4,
	EVALUI_CharCustomization_MAX   = 5,
};

enum class EVAL_CharacterNameType : uint8
{
	Full                           = 0,
	Preferred                      = 1,
	EVAL_MAX                       = 2,
};

enum class EVALUI_ChatInputBarState : uint8
{
	Inactive                       = 0,
	TypingCommand                  = 1,
	TypingMessage                  = 2,
	TypingEmoji                    = 3,
	EVALUI_MAX                     = 4,
};

enum class EVALUI_PregameState : uint8
{
	Login                          = 0,
	Lobby                          = 1,
	CharacterCreation              = 2,
	EVALUI_MAX                     = 3,
};

enum class EVALUI_CharacterCreationState : uint8
{
	LoadingRenderStudio            = 0,
	OpeningCinematic               = 1,
	BodyTypeSelection              = 2,
	BodyTypeTransition             = 3,
	CharacterCustomization         = 4,
	ClosingCinematic               = 5,
	EVALUI_MAX                     = 6,
};

enum class EVALUI_LobbyState : uint8
{
	LoadingRenderStudio            = 0,
	CharacterSelect                = 1,
	ServerQueue                    = 2,
	EVALUI_MAX                     = 3,
};

enum class EVALUI_LoginState : uint8
{
	Idle                           = 0,
	LinkSuccess                    = 1,
	Publishing                     = 2,
	RetrievingCharacterList        = 3,
	CodeOfConduct                  = 4,
	EVALUI_MAX                     = 5,
};

enum class EVALUI_PremiumStoreState : uint8
{
	Storefront                     = 0,
	CurrencyPurchase               = 1,
	ItemSelection                  = 2,
	ItemPurchase                   = 3,
	EVALUI_MAX                     = 4,
};

enum class EVALUI_ChatPanelState : uint8
{
	Inactive                       = 0,
	Active                         = 1,
	Unavailable                    = 2,
	RetryingLogin                  = 3,
	InvalidJWT                     = 4,
	EVALUI_MAX                     = 5,
};

enum class EVALUI_LoadingScreenFlags : uint8
{
	None                           = 0,
	QueuedToDisplay                = 1,
	DisplayedDirectViewport        = 2,
	EVALUI_MAX                     = 3,
};

enum class EMailboxViewerFilter : uint8
{
	NewMail                        = 0,
	ReadMail                       = 1,
	EMailboxViewerFilter_MAX       = 2,
};

enum class EFocusDirection : uint8
{
	UpperLeftCorner                = 0,
	Left                           = 1,
	LowerLeftCorner                = 2,
	UpperRightCorner               = 3,
	Right                          = 4,
	LowerRightCorner               = 5,
	EFocusDirection_MAX            = 6,
};

enum class ECursorState : uint8
{
	Disable                        = 0,
	FocusOnBackground              = 1,
	FocusOnButton                  = 2,
	ECursorState_MAX               = 3,
};

enum class EButtonStyledWithBGState : uint8
{
	Normal                         = 0,
	Hovered                        = 1,
	Pressed                        = 2,
	Disabled                       = 3,
	EButtonStyledWithBGState_MAX   = 4,
};

enum class EGamepadKeyHintLocation : uint8
{
	BottomLeft                     = 0,
	BottomRight                    = 1,
	EGamepadKeyHintLocation_MAX    = 2,
};

enum class EItemAmountDisplayType : uint8
{
	None                           = 0,
	ShowAlways                     = 1,
	ShowIfMoreThanOne              = 2,
	ShowAvailableVsAmount          = 3,
	ShowAmountVsTotal              = 4,
	EItemAmountDisplayType_MAX     = 5,
};

enum class EItemEmptyDisplayType : uint8
{
	Hide                           = 0,
	Show                           = 1,
	Dim                            = 2,
	EItemEmptyDisplayType_MAX      = 3,
};

enum class EVALUI_PhotoCameraScreenLookMode : uint8
{
	None                           = 0,
	PanRotate                      = 1,
	MouseLook                      = 2,
	EVALUI_MAX                     = 3,
};

enum class EVALUI_PremiumCurrencyPurchaseState : uint8
{
	None                           = 0,
	InProgress                     = 1,
	Cancelled                      = 2,
	Paid                           = 3,
	Fulfilled                      = 4,
	EVALUI_MAX                     = 5,
};

enum class EVALUI_PremiumCurrencyProvider : uint8
{
	Stripe                         = 0,
	Paypal                         = 1,
	Count                          = 2,
	EVALUI_MAX                     = 3,
};

enum class EVALUI_PremiumCurrencyWidgetState : uint8
{
	BundleSelection                = 0,
	ErrorMessaging                 = 1,
	CheckoutSession                = 2,
	ValidationMessaging            = 3,
	FinishMessaging                = 4,
	EVALUI_MAX                     = 5,
};

enum class EVALUI_TooltipType : uint8
{
	General                        = 0,
	Store                          = 1,
	EVALUI_MAX                     = 2,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0xD0 (0xD0 - 0x0)
// ScriptStruct ValeriaUI.VALUI_PremiumStorefrontVariant
struct FVALUI_PremiumStorefrontVariant
{
public:
	struct FGuid                                 ID;                                                // 0x0(0x10)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Name;                                              // 0x10(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DiscountedPrice;                                   // 0x20(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        BasePrice;                                         // 0x24(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Owned;                                             // 0x28(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2500[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSet<TSoftObjectPtr<class UVAL_CharacterCustomizationItemBase>> Items;                                             // 0x30(0x50)(BlueprintVisible, UObjectWrapper, NativeAccessSpecifierPublic)
	TSet<struct FGuid>                           ItemIds;                                           // 0x80(0x50)(BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct ValeriaUI.VALUI_PremiumStorefrontWidgetModel
struct FVALUI_PremiumStorefrontWidgetModel
{
public:
	struct FGuid                                 ID;                                                // 0x0(0x10)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Name;                                              // 0x10(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DiscountedPrice;                                   // 0x20(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        BasePrice;                                         // 0x24(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Owned;                                             // 0x28(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2509[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                AssetURL;                                          // 0x30(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FVALUI_PremiumStorefrontVariant> Variants;                                          // 0x40(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0xA8 (0xA8 - 0x0)
// ScriptStruct ValeriaUI.VALUI_PurchaseReward
struct FVALUI_PurchaseReward
{
public:
	int32                                        CoinAmount;                                        // 0x0(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_250B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSet<struct FGuid>                           RewardIds;                                         // 0x8(0x50)(BlueprintVisible, NativeAccessSpecifierPublic)
	TSet<TSoftObjectPtr<class UVAL_CharacterCustomizationItemBase>> RewardItems;                                       // 0x58(0x50)(BlueprintVisible, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ValeriaUI.VALUI_PremiumStorefrontPurchaseRewards
struct FVALUI_PremiumStorefrontPurchaseRewards
{
public:
	TArray<struct FVALUI_PurchaseReward>         PurchaseRewards;                                   // 0x0(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ValeriaUI.VALUI_PremiumStorefrontResponse
struct FVALUI_PremiumStorefrontResponse
{
public:
	TArray<struct FVALUI_PremiumStorefrontWidgetModel> Models;                                            // 0x0(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FVALUI_PremiumStorefrontPurchaseRewards PurchaseRewards;                                   // 0x10(0x10)(BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// ScriptStruct ValeriaUI.VALUI_CharCustomization_UpdateLoadoutContextPayload
struct FVALUI_CharCustomization_UpdateLoadoutContextPayload
{
public:
	enum class EVALUI_CharCustomization_UpdateLoadoutContext UpdateType;                                        // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_250E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSet<class FName>                            LoadoutSlotsModified;                              // 0x8(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class UObject*                               TileItemSelected;                                  // 0x58(0x8)(Edit, BlueprintVisible, ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EVAL_ApplyCustomizationToActorContext ApplyCustomizationContext;                         // 0x60(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2510[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ValeriaUI.VALUI_CharacterNameValidityResponse
struct FVALUI_CharacterNameValidityResponse
{
public:
	enum class EVAL_CharacterNameType            CharacterNameType;                                 // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2517[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FText>                          ErrorMessages;                                     // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
};

// 0x88 (0x88 - 0x0)
// ScriptStruct ValeriaUI.VALUI_ChatChannel
struct FVALUI_ChatChannel
{
public:
	struct FMessageTarget                        MessageTarget;                                     // 0x0(0x28)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          ChannelColor;                                      // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDisabled;                                         // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDisplayed;                                        // 0x39(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_251A[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  ShortName;                                         // 0x40(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  LongName;                                          // 0x58(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class FText                                  MessagePrefix;                                     // 0x70(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ValeriaUI.VALUI_NotificationQueueEntry
struct FVALUI_NotificationQueueEntry
{
public:
	struct FGuid                                 NotificationId;                                    // 0x0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                               NotificationWidget;                                // 0x10(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x98 (0x98 - 0x0)
// ScriptStruct ValeriaUI.VALUI_RadioSliderPaginationSettings
struct FVALUI_RadioSliderPaginationSettings
{
public:
	bool                                         bShouldPaginate;                                   // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2520[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ExtraPreviewPadding;                               // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PageElementCount;                                  // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AnimationTime;                                     // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRuntimeFloatCurve                    AnimationCurve;                                    // 0x10(0x88)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// ScriptStruct ValeriaUI.VALUI_InstantiatedTabButtonInfo
struct FVALUI_InstantiatedTabButtonInfo
{
public:
	class FText                                  DisplayName;                                       // 0x0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class UButton*                               Button;                                            // 0x18(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             IconTexture;                                       // 0x20(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             IconSize;                                          // 0x50(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                               AssociatedContent;                                 // 0x60(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UVALUI_Functor_Button_OnClicked*       Functor_OnClicked;                                 // 0x68(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// ScriptStruct ValeriaUI.VALUI_TabButtonPreregistrationInfo
struct FVALUI_TabButtonPreregistrationInfo
{
public:
	class FName                                  TabName;                                           // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  TabDisplayName;                                    // 0x8(0x18)(Edit, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             IconTexture;                                       // 0x20(0x30)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             IconFixedSize;                                     // 0x50(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UButton*                               TemplateButton;                                    // 0x60(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                               AssociatedContent;                                 // 0x68(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct ValeriaUI.MailGrantedQuest
struct FMailGrantedQuest
{
public:
	class FText                                  QuestName;                                         // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	int32                                        QuestConfigId;                                     // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2528[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x148 (0x148 - 0x0)
// ScriptStruct ValeriaUI.MailMessageWidgetData
struct FMailMessageWidgetData
{
public:
	class FText                                  SenderName;                                        // 0x0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             SenderIcon;                                        // 0x18(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             SealIcon;                                          // 0x48(0x30)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             StampIcon;                                         // 0x78(0x30)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SenderFriendshipLevel;                             // 0xA8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SenderRomanceLevel;                                // 0xAC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseCustomHeader;                                  // 0xB0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2529[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CustomHeader;                                      // 0xB8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class FText                                  MessageBody;                                       // 0xD0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	int64                                        Timestamp;                                         // 0xE8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsVillagerMail;                                   // 0xF0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_252A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        VillagerMailId;                                    // 0xF4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PlayerMailId;                                      // 0xF8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMailboxViewerFilter              MailStatus;                                        // 0x108(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_252B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FSingleQuestReward>            Rewards;                                           // 0x110(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<bool>                                 WasRewardCollected;                                // 0x120(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FMailGrantedQuest>             Quests;                                            // 0x130(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	bool                                         bIsHidden;                                         // 0x140(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_252C[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// ScriptStruct ValeriaUI.VALUI_CharCustomization_LoadoutSlotData
struct FVALUI_CharCustomization_LoadoutSlotData
{
public:
	class UWidget*                               ViewWidget;                                        // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UVAL_CharacterCustomizationItemBase> ItemClass;                                         // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UObject*>                       ItemObjects;                                       // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UVAL_CharacterCustomizationItemBase>> ItemBaseObjects;                                   // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPublic)
	bool                                         bShouldRefreshAllTileViewsWhenVariantChanged;      // 0x30(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_252D[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x60 (0x60 - 0x0)
// ScriptStruct ValeriaUI.VALUI_ChatTab
struct FVALUI_ChatTab
{
public:
	class FText                                  DisplayName;                                       // 0x0(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class UWidget*                               MessagePanelWidget;                                // 0x18(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                               SidePanelWidget;                                   // 0x20(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FVALUI_ChatChannel>            Channels;                                          // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FMessageTarget                        CachedMessageTarget;                               // 0x38(0x28)(Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct ValeriaUI.VALUI_ChatMessageConfig
struct FVALUI_ChatMessageConfig
{
public:
	class FName                                  TabId;                                             // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ChannelIndex;                                      // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct ValeriaUI.VALUI_Crafter
struct FVALUI_Crafter
{
public:
	TMap<class FName, class UWidget*>            Widgets;                                           // 0x0(0x50)(Edit, BlueprintVisible, ExportObject, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ValeriaUI.VALUI_ErrorDisplayPayload
struct FVALUI_ErrorDisplayPayload
{
public:
	class FText                                  MessageText;                                       // 0x0(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct ValeriaUI.VALUI_MainHUDState
struct FVALUI_MainHUDState
{
public:
	bool                                         bChatPanelOpened;                                  // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSocialPanelOpened;                                // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bToolWheelOpened;                                  // 0x2(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEmoteWheelOpened;                                 // 0x3(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDialogueOpened;                                   // 0x4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2533[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        NumRequestingRightElementsBeHidden;                // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct ValeriaUI.VALUI_SocialTrackingData
struct FVALUI_SocialTrackingData
{
public:
	int32                                        FriendRequestCount;                                // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PartyRequestCount;                                 // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ServerSyncRequestCount;                            // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ItemRequestsCount;                                 // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FriendsOnlineCount;                                // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct ValeriaUI.VALUI_PremiumCurrencyBundle
struct FVALUI_PremiumCurrencyBundle
{
public:
	struct FGuid                                 BundleID;                                          // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        BundleAmount;                                      // 0x10(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        BonusAmount;                                       // 0x14(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        BundlePrice;                                       // 0x18(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2538[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CurrencyCode;                                      // 0x20(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}


