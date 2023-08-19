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

enum class EVALUI_CharCustomization_UpdateLoadoutContext : uint8
{
	EVALUI_CharCustomization_UpdateLoadoutContext__InitialLoadout = 0,
	EVALUI_CharCustomization_UpdateLoadoutContext__TileSelected = 1,
	EVALUI_CharCustomization_UpdateLoadoutContext__BodyTypeChanged = 2,
	EVALUI_CharCustomization_UpdateLoadoutContext__VariantChanged = 3,
	EVALUI_CharCustomization_UpdateLoadoutContext__BodyDataChanged = 4,
	EVALUI_CharCustomization_UpdateLoadoutContext__EVALUI_CharCustomization_MAX = 5,
};

enum class EVAL_CharacterNameType : uint8
{
	EVAL_CharacterNameType__Full   = 0,
	EVAL_CharacterNameType__Preferred = 1,
	EVAL_CharacterNameType__EVAL_MAX = 2,
};

enum class EVALUI_ChatInputBarState : uint8
{
	EVALUI_ChatInputBarState__Inactive = 0,
	EVALUI_ChatInputBarState__TypingCommand = 1,
	EVALUI_ChatInputBarState__TypingMessage = 2,
	EVALUI_ChatInputBarState__TypingEmoji = 3,
	EVALUI_ChatInputBarState__EVALUI_MAX = 4,
};

enum class EVALUI_PregameState : uint8
{
	EVALUI_PregameState__Login     = 0,
	EVALUI_PregameState__Lobby     = 1,
	EVALUI_PregameState__CharacterCreation = 2,
	EVALUI_PregameState__EVALUI_MAX = 3,
};

enum class EVALUI_CharacterCreationState : uint8
{
	EVALUI_CharacterCreationState__LoadingRenderStudio = 0,
	EVALUI_CharacterCreationState__OpeningCinematic = 1,
	EVALUI_CharacterCreationState__BodyTypeSelection = 2,
	EVALUI_CharacterCreationState__BodyTypeTransition = 3,
	EVALUI_CharacterCreationState__CharacterCustomization = 4,
	EVALUI_CharacterCreationState__ClosingCinematic = 5,
	EVALUI_CharacterCreationState__EVALUI_MAX = 6,
};

enum class EVALUI_LobbyState : uint8
{
	EVALUI_LobbyState__LoadingRenderStudio = 0,
	EVALUI_LobbyState__CharacterSelect = 1,
	EVALUI_LobbyState__ServerQueue = 2,
	EVALUI_LobbyState__EVALUI_MAX  = 3,
};

enum class EVALUI_LoginState : uint8
{
	EVALUI_LoginState__Idle        = 0,
	EVALUI_LoginState__Publishing  = 1,
	EVALUI_LoginState__RetrievingCharacterList = 2,
	EVALUI_LoginState__CodeOfConduct = 3,
	EVALUI_LoginState__EVALUI_MAX  = 4,
};

enum class EVALUI_PremiumStoreState : uint8
{
	EVALUI_PremiumStoreState__Storefront = 0,
	EVALUI_PremiumStoreState__CurrencyPurchase = 1,
	EVALUI_PremiumStoreState__ItemSelection = 2,
	EVALUI_PremiumStoreState__ItemPurchase = 3,
	EVALUI_PremiumStoreState__EVALUI_MAX = 4,
};

enum class EVALUI_ChatPanelState : uint8
{
	EVALUI_ChatPanelState__Inactive = 0,
	EVALUI_ChatPanelState__Active  = 1,
	EVALUI_ChatPanelState__Unavailable = 2,
	EVALUI_ChatPanelState__RetryingLogin = 3,
	EVALUI_ChatPanelState__InvalidJWT = 4,
	EVALUI_ChatPanelState__EVALUI_MAX = 5,
};

enum class EVALUI_LoadingScreenFlags : uint8
{
	EVALUI_LoadingScreenFlags__None = 0,
	EVALUI_LoadingScreenFlags__QueuedToDisplay = 1,
	EVALUI_LoadingScreenFlags__DisplayedDirectViewport = 2,
	EVALUI_LoadingScreenFlags__EVALUI_MAX = 3,
};

enum class EMailboxViewerFilter : uint8
{
	EMailboxViewerFilter__NewMail  = 0,
	EMailboxViewerFilter__ReadMail = 1,
	EMailboxViewerFilter__EMailboxViewerFilter_MAX = 2,
};

enum class EFocusDirection : uint8
{
	EFocusDirection__UpperLeftCorner = 0,
	EFocusDirection__Left          = 1,
	EFocusDirection__LowerLeftCorner = 2,
	EFocusDirection__UpperRightCorner = 3,
	EFocusDirection__Right         = 4,
	EFocusDirection__LowerRightCorner = 5,
	EFocusDirection__EFocusDirection_MAX = 6,
};

enum class ECursorState : uint8
{
	ECursorState__Disable          = 0,
	ECursorState__FocusOnBackground = 1,
	ECursorState__FocusOnButton    = 2,
	ECursorState__ECursorState_MAX = 3,
};

enum class EButtonStyledWithBGState : uint8
{
	EButtonStyledWithBGState__Normal = 0,
	EButtonStyledWithBGState__Hovered = 1,
	EButtonStyledWithBGState__Pressed = 2,
	EButtonStyledWithBGState__Disabled = 3,
	EButtonStyledWithBGState__EButtonStyledWithBGState_MAX = 4,
};

enum class EGamepadKeyHintLocation : uint8
{
	EGamepadKeyHintLocation__BottomLeft = 0,
	EGamepadKeyHintLocation__BottomRight = 1,
	EGamepadKeyHintLocation__EGamepadKeyHintLocation_MAX = 2,
};

enum class EItemAmountDisplayType : uint8
{
	EItemAmountDisplayType__None   = 0,
	EItemAmountDisplayType__ShowAlways = 1,
	EItemAmountDisplayType__ShowIfMoreThanOne = 2,
	EItemAmountDisplayType__ShowAvailableVsAmount = 3,
	EItemAmountDisplayType__ShowAmountVsTotal = 4,
	EItemAmountDisplayType__EItemAmountDisplayType_MAX = 5,
};

enum class EItemEmptyDisplayType : uint8
{
	EItemEmptyDisplayType__Hide    = 0,
	EItemEmptyDisplayType__Show    = 1,
	EItemEmptyDisplayType__Dim     = 2,
	EItemEmptyDisplayType__EItemEmptyDisplayType_MAX = 3,
};

enum class EVALUI_PhotoCameraScreenLookMode : uint8
{
	EVALUI_PhotoCameraScreenLookMode__None = 0,
	EVALUI_PhotoCameraScreenLookMode__PanRotate = 1,
	EVALUI_PhotoCameraScreenLookMode__MouseLook = 2,
	EVALUI_PhotoCameraScreenLookMode__EVALUI_MAX = 3,
};

enum class EVALUI_PremiumCurrencyPurchaseState : uint8
{
	EVALUI_PremiumCurrencyPurchaseState__None = 0,
	EVALUI_PremiumCurrencyPurchaseState__InProgress = 1,
	EVALUI_PremiumCurrencyPurchaseState__Cancelled = 2,
	EVALUI_PremiumCurrencyPurchaseState__Paid = 3,
	EVALUI_PremiumCurrencyPurchaseState__Fulfilled = 4,
	EVALUI_PremiumCurrencyPurchaseState__EVALUI_MAX = 5,
};

enum class EVALUI_PremiumCurrencyWidgetState : uint8
{
	EVALUI_PremiumCurrencyWidgetState__BundleSelection = 0,
	EVALUI_PremiumCurrencyWidgetState__ErrorMessaging = 1,
	EVALUI_PremiumCurrencyWidgetState__CheckoutSession = 2,
	EVALUI_PremiumCurrencyWidgetState__ValidationMessaging = 3,
	EVALUI_PremiumCurrencyWidgetState__FinishMessaging = 4,
	EVALUI_PremiumCurrencyWidgetState__EVALUI_MAX = 5,
};

enum class EVALUI_TooltipType : uint8
{
	EVALUI_TooltipType__General    = 0,
	EVALUI_TooltipType__Store      = 1,
	EVALUI_TooltipType__EVALUI_MAX = 2,
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
	uint8                                        Pad_278D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
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
	uint8                                        Pad_278F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                AssetURL;                                          // 0x30(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FVALUI_PremiumStorefrontVariant> Variants;                                          // 0x40(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0xA8 (0xA8 - 0x0)
// ScriptStruct ValeriaUI.VALUI_PurchaseReward
struct FVALUI_PurchaseReward
{
public:
	int32                                        CoinAmount;                                        // 0x0(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2790[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
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
	uint8                                        Pad_2791[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSet<class FName>                            LoadoutSlotsModified;                              // 0x8(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class UObject*                               TileItemSelected;                                  // 0x58(0x8)(Edit, BlueprintVisible, ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EVAL_ApplyCustomizationToActorContext ApplyCustomizationContext;                         // 0x60(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2792[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ValeriaUI.VALUI_CharacterNameValidityResponse
struct FVALUI_CharacterNameValidityResponse
{
public:
	enum class EVAL_CharacterNameType            CharacterNameType;                                 // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2793[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
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
	uint8                                        Pad_2795[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
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
	uint8                                        Pad_2797[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
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
	uint8                                        Pad_27A3[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
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
	uint8                                        Pad_27A4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CustomHeader;                                      // 0xB8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	class FText                                  MessageBody;                                       // 0xD0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, NativeAccessSpecifierPublic)
	int64                                        Timestamp;                                         // 0xE8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsVillagerMail;                                   // 0xF0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27A6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        VillagerMailId;                                    // 0xF4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PlayerMailId;                                      // 0xF8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMailboxViewerFilter              MailStatus;                                        // 0x108(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27A8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FSingleQuestReward>            Rewards;                                           // 0x110(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<bool>                                 WasRewardCollected;                                // 0x120(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FMailGrantedQuest>             Quests;                                            // 0x130(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	bool                                         bIsHidden;                                         // 0x140(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_27AA[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
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
	uint8                                        Pad_27AF[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
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
	uint8                                        Pad_27B9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
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
	uint8                                        Pad_27BC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CurrencyCode;                                      // 0x20(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
