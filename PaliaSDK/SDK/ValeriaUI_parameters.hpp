#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x1 (0x1 - 0x0)
// Function ValeriaUI.BaitUserWidget.ShowAmmoType
struct UBaitUserWidget_ShowAmmoType_Params
{
public:
	enum class EAmmoType                         AmmoType;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ValeriaUI.BaitUserWidget.OnShown
struct UBaitUserWidget_OnShown_Params
{
public:
	enum class EAmmoType                         AmmoType;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function ValeriaUI.BaitUserWidget.OnRightMouseReleased
struct UBaitUserWidget_OnRightMouseReleased_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ValeriaUI.BaitUserWidget.OnHidden
struct UBaitUserWidget_OnHidden_Params
{
public:
};

// 0x50 (0x50 - 0x0)
// Function ValeriaUI.BaitUserWidget.OnBaitSelected
struct UBaitUserWidget_OnBaitSelected_Params
{
public:
	struct FValeriaItem                          baitItem;                                          // 0x0(0x50)(Parm, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function ValeriaUI.BaitUserWidget.EndBaitSelection
struct UBaitUserWidget_EndBaitSelection_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function ValeriaUI.BookViewerWidget.MarkPageAsRead
struct UBookViewerWidget_MarkPageAsRead_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ValeriaUI.BookViewerWidget.GetTitle
struct UBookViewerWidget_GetTitle_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ValeriaUI.BookViewerWidget.GetSubTitle
struct UBookViewerWidget_GetSubTitle_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ValeriaUI.BookViewerWidget.GetNumberOfPages
struct UBookViewerWidget_GetNumberOfPages_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ValeriaUI.BookViewerWidget.GetContentForPage
struct UBookViewerWidget_GetContentForPage_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_208F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  ReturnValue;                                       // 0x8(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function ValeriaUI.DetailUserWidget.UpdateDetail
struct UDetailUserWidget_UpdateDetail_Params
{
public:
	TSoftObjectPtr<class UVAL_ItemTypeDefinitionAsset> ItemType;                                          // 0x0(0x30)(ConstParm, Parm, OutParm, ReferenceParm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x30(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2092[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x0 - 0x0)
// Function ValeriaUI.VALUI_LoadingScreenUserWidget.ShowLoadingScreenBackground
struct UVALUI_LoadingScreenUserWidget_ShowLoadingScreenBackground_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ValeriaUI.VALUI_LoadingScreenUserWidget.ShowFadeToBlack
struct UVALUI_LoadingScreenUserWidget_ShowFadeToBlack_Params
{
public:
};

// 0x30 (0x30 - 0x0)
// Function ValeriaUI.VALUI_LoadingScreenUserWidget.HandleSetLoadingScreenTip
struct UVALUI_LoadingScreenUserWidget_HandleSetLoadingScreenTip_Params
{
public:
	struct FPaliaLoadingScreenTip                Tip;                                               // 0x0(0x30)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ValeriaUI.VALUI_LoadingScreenUserWidget.HandleSetBackgroundImage
struct UVALUI_LoadingScreenUserWidget_HandleSetBackgroundImage_Params
{
public:
	class UTexture2D*                            Texture;                                           // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ValeriaUI.VALUI_LoadingScreenUserWidget.HandleOnPawnChanged
struct UVALUI_LoadingScreenUserWidget_HandleOnPawnChanged_Params
{
public:
	class APawn*                                 Pawn;                                              // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ValeriaUI.MailboxViewerUserWidget.UpdateMailFilter
struct UMailboxViewerUserWidget_UpdateMailFilter_Params
{
public:
	enum class EMailboxViewerFilter              Filter;                                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function ValeriaUI.MailboxViewerUserWidget.TryCollectReward
struct UMailboxViewerUserWidget_TryCollectReward_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RewardIndex;                                       // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_20A0[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function ValeriaUI.MailboxViewerUserWidget.RefreshMailMessages
struct UMailboxViewerUserWidget_RefreshMailMessages_Params
{
public:
	bool                                         AllowRemoval;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ValeriaUI.MailboxViewerUserWidget.OnVillagerMailChanged
struct UMailboxViewerUserWidget_OnVillagerMailChanged_Params
{
public:
	class UVillagerMailInboxComponent*           VillagerMail;                                      // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ValeriaUI.MailboxViewerUserWidget.OnPlayerToPlayerMailSuccess
struct UMailboxViewerUserWidget_OnPlayerToPlayerMailSuccess_Params
{
public:
	struct FMailbox                              Mailbox;                                           // 0x0(0x10)(ConstParm, Parm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ValeriaUI.MailboxViewerUserWidget.OnPlayerToPlayerMailFailed
struct UMailboxViewerUserWidget_OnPlayerToPlayerMailFailed_Params
{
public:
	class FString                                Error;                                             // 0x0(0x10)(ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function ValeriaUI.MailboxViewerUserWidget.OnMailLoaded
struct UMailboxViewerUserWidget_OnMailLoaded_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ValeriaUI.MailboxViewerUserWidget.OnMailChanged
struct UMailboxViewerUserWidget_OnMailChanged_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function ValeriaUI.MailboxViewerUserWidget.MarkAsRead
struct UMailboxViewerUserWidget_MarkAsRead_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function ValeriaUI.MailboxViewerUserWidget.LoadMail
struct UMailboxViewerUserWidget_LoadMail_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function ValeriaUI.MailboxViewerUserWidget.HideMessage
struct UMailboxViewerUserWidget_HideMessage_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ValeriaUI.MailboxViewerUserWidget.GetNumberOfNonHiddenMessages
struct UMailboxViewerUserWidget_GetNumberOfNonHiddenMessages_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ValeriaUI.MailboxViewerUserWidget.GetNumberOfMessagesForFilter
struct UMailboxViewerUserWidget_GetNumberOfMessagesForFilter_Params
{
public:
	enum class EMailboxViewerFilter              Filter;                                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_20AA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ReturnValue;                                       // 0x4(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ValeriaUI.MailboxViewerUserWidget.GetNumberOfMessages
struct UMailboxViewerUserWidget_GetNumberOfMessages_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ValeriaUI.MailboxViewerUserWidget.GetNextNonHiddenMessage
struct UMailboxViewerUserWidget_GetNextNonHiddenMessage_Params
{
public:
	int32                                        StartIndex;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x4(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x150 (0x150 - 0x0)
// Function ValeriaUI.MailboxViewerUserWidget.GetMailMessage
struct UMailboxViewerUserWidget_GetMailMessage_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_20B2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMailMessageWidgetData                ReturnValue;                                       // 0x8(0x148)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x150 (0x150 - 0x0)
// Function ValeriaUI.MailboxViewerUserWidget.GetIndexOfMailMessage
struct UMailboxViewerUserWidget_GetIndexOfMailMessage_Params
{
public:
	struct FMailMessageWidgetData                Data;                                              // 0x0(0x148)(Parm, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x148(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_20B4[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function ValeriaUI.MailboxViewerUserWidget.GetCurrentFilter
struct UMailboxViewerUserWidget_GetCurrentFilter_Params
{
public:
	enum class EMailboxViewerFilter              ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function ValeriaUI.ValeriaViewportClient.ReceiveOnFadeOutBlack
struct UValeriaViewportClient_ReceiveOnFadeOutBlack_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function ValeriaUI.ValeriaViewportClient.HandleOnFadeOutBlack
struct UValeriaViewportClient_HandleOnFadeOutBlack_Params
{
public:
	float                                        DurationSeconds;                                   // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ValeriaUI.ValeriaViewportClient.HandleOnFadeInBlack
struct UValeriaViewportClient_HandleOnFadeInBlack_Params
{
public:
	float                                        DurationSeconds;                                   // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ValeriaUI.VALUI_AnnouncementsMessageModalDialog.SetURL
struct UVALUI_AnnouncementsMessageModalDialog_SetURL_Params
{
public:
	class FString                                NewURL;                                            // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function ValeriaUI.VALUI_AnnouncementsMessageModalDialog.RefreshMessageFromWeb
struct UVALUI_AnnouncementsMessageModalDialog_RefreshMessageFromWeb_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// DelegateFunction ValeriaUI.VALUI_AnnouncementsMessageModalDialog.OnConfirmDelegate__DelegateSignature
struct UVALUI_AnnouncementsMessageModalDialog_OnConfirmDelegate__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ValeriaUI.VALUI_AnnouncementsMessageModalDialog.NotifyConfirmComplete
struct UVALUI_AnnouncementsMessageModalDialog_NotifyConfirmComplete_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function ValeriaUI.VALUI_AnnouncementsMessageModalDialog.HandleRefreshedMessageFromWeb
struct UVALUI_AnnouncementsMessageModalDialog_HandleRefreshedMessageFromWeb_Params
{
public:
	class FString                                Message;                                           // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ValeriaUI.VAL_AsyncActionRequestStorefront.RequestStorefront
struct UVAL_AsyncActionRequestStorefront_RequestStorefront_Params
{
public:
	class ULocalPlayer*                          LP;                                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UVAL_AsyncActionRequestStorefront*     ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// DelegateFunction ValeriaUI.VAL_AsyncActionRequestStorefront.OnRequestStorefrontSuccess__DelegateSignature
struct UVAL_AsyncActionRequestStorefront_OnRequestStorefrontSuccess__DelegateSignature_Params
{
public:
	struct FVALUI_PremiumStorefrontResponse      Response;                                          // 0x0(0x20)(Parm, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// DelegateFunction ValeriaUI.VAL_AsyncActionRequestStorefront.OnRequestStorefrontFailure__DelegateSignature
struct UVAL_AsyncActionRequestStorefront_OnRequestStorefrontFailure__DelegateSignature_Params
{
public:
};

// 0x990 (0x990 - 0x0)
// Function ValeriaUI.VALUI_AsyncUpdateLoadout.UpdateLoadout
struct UVALUI_AsyncUpdateLoadout_UpdateLoadout_Params
{
public:
	class UVALUI_CharacterCustomizationPanelBase* CustPanel;                                         // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVAL_CharacterCustomizationLoadout    NewLoadout;                                        // 0x8(0x918)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FVALUI_CharCustomization_UpdateLoadoutContextPayload ContextPayload;                                    // 0x920(0x68)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UVALUI_AsyncUpdateLoadout*             ReturnValue;                                       // 0x988(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// DelegateFunction ValeriaUI.VALUI_AsyncUpdateLoadout.OnUpdateLoadoutFailed__DelegateSignature
struct UVALUI_AsyncUpdateLoadout_OnUpdateLoadoutFailed__DelegateSignature_Params
{
public:
	struct FVALUI_CharCustomization_UpdateLoadoutContextPayload ContextPayload;                                    // 0x0(0x68)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// DelegateFunction ValeriaUI.VALUI_AsyncUpdateLoadout.OnUpdateLoadoutCompleted__DelegateSignature
struct UVALUI_AsyncUpdateLoadout_OnUpdateLoadoutCompleted__DelegateSignature_Params
{
public:
	class UVALUI_CharacterCustomizationPanelBase* CharacterCustomizationPanel;                       // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVALUI_CharCustomization_UpdateLoadoutContextPayload ContextPayload;                                    // 0x8(0x68)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ValeriaUI.VALUI_BorderStyle.Apply
struct UVALUI_BorderStyle_Apply_Params
{
public:
	class UBorder*                               Border;                                            // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ValeriaUI.VALUI_Border_Styled.SetBorderStyle
struct UVALUI_Border_Styled_SetBorderStyle_Params
{
public:
	class UVALUI_BorderStyle*                    NewStyle;                                          // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function ValeriaUI.VALUI_BoundInputActionStateWidget.UpdateInputActionState_Implementation
struct UVALUI_BoundInputActionStateWidget_UpdateInputActionState_Implementation_Params
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETriggerEvent                     LatestTriggerEvent;                                // 0x18(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2148[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        OngoingDuration;                                   // 0x1C(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HoldTimeThreshold;                                 // 0x20(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2149[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function ValeriaUI.VALUI_BoundInputActionStateWidget.SetInputAction
struct UVALUI_BoundInputActionStateWidget_SetInputAction_Params
{
public:
	class UInputAction*                          InInputAction;                                     // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ValeriaUI.VALUI_ButtonStyle.Apply
struct UVALUI_ButtonStyle_Apply_Params
{
public:
	class UVALUI_Button_Styled*                  Button;                                            // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ValeriaUI.VALUI_Button_Styled.ShowCursor
struct UVALUI_Button_Styled_ShowCursor_Params
{
public:
	class UWidget*                               InCursor;                                          // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2180[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function ValeriaUI.VALUI_Button_Styled.SetButtonStyle
struct UVALUI_Button_Styled_SetButtonStyle_Params
{
public:
	class UVALUI_ButtonStyle*                    NewStyle;                                          // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function ValeriaUI.VALUI_Button_Styled.SetButtonFocus
struct UVALUI_Button_Styled_SetButtonFocus_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function ValeriaUI.VALUI_Button_Styled.RemoveCursor
struct UVALUI_Button_Styled_RemoveCursor_Params
{
public:
	class UWidget*                               InCursor;                                          // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ValeriaUI.VALUI_Button_Styled.PreConstruct
struct UVALUI_Button_Styled_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function ValeriaUI.VALUI_Button_Styled.OnInitialized
struct UVALUI_Button_Styled_OnInitialized_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function ValeriaUI.VALUI_Button_Styled.HasFocus
struct UVALUI_Button_Styled_HasFocus_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function ValeriaUI.VALUI_Button_Styled.HandleReleased
struct UVALUI_Button_Styled_HandleReleased_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ValeriaUI.VALUI_Button_Styled.HandlePressed
struct UVALUI_Button_Styled_HandlePressed_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ValeriaUI.VALUI_Button_Styled.Destruct
struct UVALUI_Button_Styled_Destruct_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ValeriaUI.VALUI_Button_Styled.Construct
struct UVALUI_Button_Styled_Construct_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ValeriaUI.VALUI_Button_Styled_WithBG.HandleUnhovered
struct UVALUI_Button_Styled_WithBG_HandleUnhovered_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ValeriaUI.VALUI_Button_Styled_WithBG.HandleHovered
struct UVALUI_Button_Styled_WithBG_HandleHovered_Params
{
public:
};

// 0x18 (0x18 - 0x0)
// Function ValeriaUI.VALUI_NameValidator.IsNameValid
struct UVALUI_NameValidator_IsNameValid_Params
{
public:
	class FString                                InCharacterName;                                   // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_21B5[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function ValeriaUI.VALUI_CharacterCreationScreenBase.SetEnableTurntable
struct UVALUI_CharacterCreationScreenBase_SetEnableTurntable_Params
{
public:
	bool                                         bEnable;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ValeriaUI.VALUI_CharacterCreationScreenBase.SetEnableContinueButton
struct UVALUI_CharacterCreationScreenBase_SetEnableContinueButton_Params
{
public:
	bool                                         bEnable;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ValeriaUI.VALUI_CharacterCreationScreenBase.SetEnableAllButtons
struct UVALUI_CharacterCreationScreenBase_SetEnableAllButtons_Params
{
public:
	bool                                         bEnable;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x718 (0x718 - 0x0)
// DelegateFunction ValeriaUI.VALUI_CharacterCreationScreenBase.OnCommitCharacter__DelegateSignature
struct UVALUI_CharacterCreationScreenBase_OnCommitCharacter__DelegateSignature_Params
{
public:
	struct FVALDTOS_MetaCharacterFormat          CommitedCharacter;                                 // 0x0(0x718)(Parm, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// DelegateFunction ValeriaUI.VALUI_CharacterCreationScreenBase.OnBodyTypeSelectionConfirm__DelegateSignature
struct UVALUI_CharacterCreationScreenBase_OnBodyTypeSelectionConfirm__DelegateSignature_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// DelegateFunction ValeriaUI.VALUI_CharacterCreationScreenBase.OnBodyTypeSelectionChange__DelegateSignature
struct UVALUI_CharacterCreationScreenBase_OnBodyTypeSelectionChange__DelegateSignature_Params
{
public:
	bool                                         bFirstSelection;                                   // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ValeriaUI.VALUI_CharacterCreationScreenBase.HandleCharacterNameValidityResponse
struct UVALUI_CharacterCreationScreenBase_HandleCharacterNameValidityResponse_Params
{
public:
	struct FVALUI_CharacterNameValidityResponse  Response;                                          // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ValeriaUI.VALUI_CharacterCreationScreenBase.HandleCharacterNameChanged
struct UVALUI_CharacterCreationScreenBase_HandleCharacterNameChanged_Params
{
public:
	class FText                                  InCharacterName;                                   // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	enum class EVAL_CharacterNameType            InCharacterNameType;                               // 0x18(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_21DF[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// Function ValeriaUI.VALUI_CharacterCreationScreenBase.GetAllowedCustomizationItems
struct UVALUI_CharacterCreationScreenBase_GetAllowedCustomizationItems_Params
{
public:
	TSet<TSoftObjectPtr<class UVAL_CharacterCustomizationItemBase>> ReturnValue;                                       // 0x0(0x50)(Parm, OutParm, ReturnParm, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ValeriaUI.VALUI_CharacterCreationStatics.IsCharacterNameValidityResponseValid
struct UVALUI_CharacterCreationStatics_IsCharacterNameValidityResponseValid_Params
{
public:
	struct FVALUI_CharacterNameValidityResponse  Response;                                          // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_21E7[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function ValeriaUI.VALUI_CharacterCustomizationPanelBase.SetPreviewCharacterActor
struct UVALUI_CharacterCustomizationPanelBase_SetPreviewCharacterActor_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function ValeriaUI.VALUI_CharacterCustomizationPanelBase.PopulateLoadoutSlotMap
struct UVALUI_CharacterCustomizationPanelBase_PopulateLoadoutSlotMap_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ValeriaUI.VALUI_CharacterCustomizationPanelBase.HandleOnAllLoadoutSlotItemsGenerated
struct UVALUI_CharacterCustomizationPanelBase_HandleOnAllLoadoutSlotItemsGenerated_Params
{
public:
};

// 0x68 (0x68 - 0x0)
// Function ValeriaUI.VALUI_CharacterCustomizationPanelBase.HandleLoadoutUpdated
struct UVALUI_CharacterCustomizationPanelBase_HandleLoadoutUpdated_Params
{
public:
	struct FVALUI_CharCustomization_UpdateLoadoutContextPayload ContextPayload;                                    // 0x0(0x68)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function ValeriaUI.VALUI_CharacterCustomizationPanelBase.HandleLoadoutSlotItemsGenerated
struct UVALUI_CharacterCustomizationPanelBase_HandleLoadoutSlotItemsGenerated_Params
{
public:
	class FName                                  LoadoutSlotName;                                   // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVALUI_CharCustomization_LoadoutSlotData LoadoutSlotData;                                   // 0x8(0x38)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function ValeriaUI.VALUI_CharacterCustomizationPanelBase.GetLoadoutSlotDataFromItemObject
struct UVALUI_CharacterCustomizationPanelBase_GetLoadoutSlotDataFromItemObject_Params
{
public:
	class UObject*                               ItemObject;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  LoadoutSlotName;                                   // 0x8(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVALUI_CharCustomization_LoadoutSlotData LoadoutSlotData;                                   // 0x10(0x38)(Parm, OutParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         bSuccess;                                          // 0x48(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_21F9[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x918 (0x918 - 0x0)
// Function ValeriaUI.VALUI_CharacterCustomizationPanelBase.GetCurrentLoadout
struct UVALUI_CharacterCustomizationPanelBase_GetCurrentLoadout_Params
{
public:
	struct FVAL_CharacterCustomizationLoadout    ReturnValue;                                       // 0x0(0x918)(ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function ValeriaUI.VALUI_CharacterCustomizationPanelBase.GenerateLoadoutSlotItems
struct UVALUI_CharacterCustomizationPanelBase_GenerateLoadoutSlotItems_Params
{
public:
};

// 0x130 (0x130 - 0x0)
// Function ValeriaUI.VALUI_CharacterCustomizationPanelBase.GenerateItemObject
struct UVALUI_CharacterCustomizationPanelBase_GenerateItemObject_Params
{
public:
	struct FVAL_CharCustomization_AssetData      AssetData;                                         // 0x0(0x128)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UObject*                               ReturnValue;                                       // 0x128(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ValeriaUI.VALUI_CharacterMovementStick_Mobile.SetHooker
struct UVALUI_CharacterMovementStick_Mobile_SetHooker_Params
{
public:
	class UVALUI_CameraVirtualMoveHooker_Mobile* VirtualMoveHooker;                                 // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function ValeriaUI.VALUI_CharacterMovementStick_Mobile.OnUpdateMovmentVirtualStick
struct UVALUI_CharacterMovementStick_Mobile_OnUpdateMovmentVirtualStick_Params
{
public:
	bool                                         TouchControlFlag;                                  // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2202[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             Pos;                                               // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             ControlVector;                                     // 0x18(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function ValeriaUI.VALUI_CharacterMovementStick_Mobile.OnFirstTouch
struct UVALUI_CharacterMovementStick_Mobile_OnFirstTouch_Params
{
public:
};

// 0x20 (0x20 - 0x0)
// Function ValeriaUI.VALUI_CharacterMovementStick_Mobile.InitMovementVirtualStack
struct UVALUI_CharacterMovementStick_Mobile_InitMovementVirtualStack_Params
{
public:
	struct FVector2D                             DefaultPosition;                                   // 0x0(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ValidTouchRadius;                                  // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MovementValidDistanceTemp;                         // 0x14(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WalkBoundaryDistanceTemp;                          // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_220A[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x78 (0x78 - 0x0)
// Function ValeriaUI.VAL_ChatBubbleWidgetInterface.DisplayMessage
struct IVAL_ChatBubbleWidgetInterface_DisplayMessage_Params
{
public:
	struct FValeriaChatMessage                   Message;                                           // 0x0(0x78)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// Function ValeriaUI.VALUI_ChatBubbleManager.HandleOnNewChatMessageReceived
struct UVALUI_ChatBubbleManager_HandleOnNewChatMessageReceived_Params
{
public:
	struct FValeriaChatMessage                   Message;                                           // 0x0(0x78)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x88 (0x88 - 0x0)
// Function ValeriaUI.VALUI_ChatEmojiPanel.GetTexture
struct UVALUI_ChatEmojiPanel_GetTexture_Params
{
public:
	struct FS6UI_FRichImageRow_Soft              ImageRow;                                          // 0x0(0x58)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             ReturnValue;                                       // 0x58(0x30)(ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// DelegateFunction ValeriaUI.VALUI_ChatInputBar.VALUIEvent_OnTextChanged__DelegateSignature
struct UVALUI_ChatInputBar_VALUIEvent_OnTextChanged__DelegateSignature_Params
{
public:
	class UVALUI_ChatInputBar*                   InputBar;                                          // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  PreviousText;                                      // 0x8(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FText                                  NewText;                                           // 0x20(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// DelegateFunction ValeriaUI.VALUI_ChatInputBar.VALUIEvent_OnMessageTargetCycled__DelegateSignature
struct UVALUI_ChatInputBar_VALUIEvent_OnMessageTargetCycled__DelegateSignature_Params
{
public:
	class UVALUI_ChatInputBar*                   InputBar;                                          // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMessageTarget                        MessageTarget;                                     // 0x8(0x28)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// DelegateFunction ValeriaUI.VALUI_ChatInputBar.VALUIEvent_OnMessageSubmitted__DelegateSignature
struct UVALUI_ChatInputBar_VALUIEvent_OnMessageSubmitted__DelegateSignature_Params
{
public:
	class UVALUI_ChatInputBar*                   InputBar;                                          // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMessageTarget                        MessageTarget;                                     // 0x8(0x28)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  Message;                                           // 0x30(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// DelegateFunction ValeriaUI.VALUI_ChatInputBar.VALUIEvent_OnCommitBlankText__DelegateSignature
struct UVALUI_ChatInputBar_VALUIEvent_OnCommitBlankText__DelegateSignature_Params
{
public:
	class UVALUI_ChatInputBar*                   InputBar;                                          // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// DelegateFunction ValeriaUI.VALUI_ChatInputBar.VALUIEvent_OnCommandSuggestionsChanged__DelegateSignature
struct UVALUI_ChatInputBar_VALUIEvent_OnCommandSuggestionsChanged__DelegateSignature_Params
{
public:
	class FString                                InString;                                          // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UVAL_ChatCommand_Base*>         CommandObjects;                                    // 0x10(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function ValeriaUI.VALUI_ChatInputBar.TryUpdateChatChannel
struct UVALUI_ChatInputBar_TryUpdateChatChannel_Params
{
public:
};

// 0x18 (0x18 - 0x0)
// Function ValeriaUI.VALUI_ChatInputBar.PushErrorNotification
struct UVALUI_ChatInputBar_PushErrorNotification_Params
{
public:
	class FText                                  InErrorText;                                       // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ValeriaUI.VALUI_ChatInputBar.HandleOnTextCommitted
struct UVALUI_ChatInputBar_HandleOnTextCommitted_Params
{
public:
	class FText                                  InText;                                            // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	enum class ETextCommit                       InCommitMethod;                                    // 0x18(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_224F[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function ValeriaUI.VALUI_ChatInputBar.HandleOnTextChanged
struct UVALUI_ChatInputBar_HandleOnTextChanged_Params
{
public:
	class FText                                  InText;                                            // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ValeriaUI.VALUI_ChatInputBar.HandleOnStateChanged
struct UVALUI_ChatInputBar_HandleOnStateChanged_Params
{
public:
	enum class EVALUI_ChatInputBarState          NewStateId;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function ValeriaUI.VALUI_ChatInputBar.HandleOnHideSuggestions
struct UVALUI_ChatInputBar_HandleOnHideSuggestions_Params
{
public:
};

// 0x18 (0x18 - 0x0)
// Function ValeriaUI.VALUI_ChatInputBar.HandleOnDisplayCharacterNameSuggestions
struct UVALUI_ChatInputBar_HandleOnDisplayCharacterNameSuggestions_Params
{
public:
	class FString                                CharacterNameSubstr;                               // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxSuggestionsNum;                                 // 0x10(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_225F[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x88 (0x88 - 0x0)
// Function ValeriaUI.VALUI_ChatInputBar.HandleOnChatChannelSet
struct UVALUI_ChatInputBar_HandleOnChatChannelSet_Params
{
public:
	struct FVALUI_ChatChannel                    Channel;                                           // 0x0(0x88)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ValeriaUI.VALUI_ChatInputBar.GetCharacterName
struct UVALUI_ChatInputBar_GetCharacterName_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ValeriaUI.VALUI_ChatInputBar.DisplayStringsSuggestions
struct UVALUI_ChatInputBar_DisplayStringsSuggestions_Params
{
public:
	class FString                                InString;                                          // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        Suggestions;                                       // 0x10(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ValeriaUI.VALUI_ChatInputBar.DisplayCommandSuggestions
struct UVALUI_ChatInputBar_DisplayCommandSuggestions_Params
{
public:
	bool                                         bInDisplay;                                        // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ValeriaUI.VALUI_ChatInputBar.DisplayActiveCommandHint
struct UVALUI_ChatInputBar_DisplayActiveCommandHint_Params
{
public:
	class UVAL_ChatCommand_Base*                 Command;                                           // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDisplay;                                          // 0x8(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2274[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x0 - 0x0)
// Function ValeriaUI.VALUI_ChatInputBar.CycleToPrevSuggestion
struct UVALUI_ChatInputBar_CycleToPrevSuggestion_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ValeriaUI.VALUI_ChatInputBar.CycleToNextSuggestion
struct UVALUI_ChatInputBar_CycleToNextSuggestion_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ValeriaUI.VALUI_ChatInputBar.CompleteSuggestion
struct UVALUI_ChatInputBar_CompleteSuggestion_Params
{
public:
};

// 0x30 (0x30 - 0x0)
// Function ValeriaUI.VALUI_ChatInputBar.ChangeMessageTarget
struct UVALUI_ChatInputBar_ChangeMessageTarget_Params
{
public:
	struct FMessageTarget                        MessageTarget;                                     // 0x0(0x28)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x28(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_227D[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xD8 (0xD8 - 0x0)
// DelegateFunction ValeriaUI.VALUI_ChatInputEditableText.VALUI_OnSummonContextMenu__DelegateSignature
struct UVALUI_ChatInputEditableText_VALUI_OnSummonContextMenu__DelegateSignature_Params
{
public:
	struct FGeometry                             Geometry;                                          // 0x0(0x40)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FPointerEvent                         MouseEvent;                                        // 0x40(0x98)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ValeriaUI.VALUI_ChatInputEditableText.StyleSelectedText
struct UVALUI_ChatInputEditableText_StyleSelectedText_Params
{
public:
	class FString                                StyleTagString;                                    // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function ValeriaUI.VALUI_ChatInputEditableText.PasteTextFromClipboardChecked
struct UVALUI_ChatInputEditableText_PasteTextFromClipboardChecked_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ValeriaUI.VALUI_ChatInputEditableText.MakeSelectedTextPlain
struct UVALUI_ChatInputEditableText_MakeSelectedTextPlain_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ValeriaUI.VALUI_ChatInputEditableText.MakeSelectedTextItalic
struct UVALUI_ChatInputEditableText_MakeSelectedTextItalic_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ValeriaUI.VALUI_ChatInputEditableText.MakeSelectedTextBold
struct UVALUI_ChatInputEditableText_MakeSelectedTextBold_Params
{
public:
};

// 0x18 (0x18 - 0x0)
// Function ValeriaUI.VALUI_ChatInputEditableText.InsertTextAtCursorChecked
struct UVALUI_ChatInputEditableText_InsertTextAtCursorChecked_Params
{
public:
	class FText                                  InText;                                            // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ValeriaUI.VALUI_ChatMessage.GetTimeZone
struct UVALUI_ChatMessage_GetTimeZone_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ValeriaUI.VALUI_ChatMessage.ColorToHexString
struct UVALUI_ChatMessage_ColorToHexString_Params
{
public:
	struct FLinearColor                          Color;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x100 (0x100 - 0x0)
// Function ValeriaUI.VALUI_ChatPanelBase.TryGetTabAndChannelFromMessageConfig
struct UVALUI_ChatPanelBase_TryGetTabAndChannelFromMessageConfig_Params
{
public:
	struct FVALUI_ChatMessageConfig              Config;                                            // 0x0(0xC)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_22B7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVALUI_ChatTab                        OutTab;                                            // 0x10(0x60)(Parm, OutParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FVALUI_ChatChannel                    OutChannel;                                        // 0x70(0x88)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xF8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_22B8[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// Function ValeriaUI.VALUI_ChatPanelBase.ToggleChatChannel
struct UVALUI_ChatPanelBase_ToggleChatChannel_Params
{
public:
	struct FVALUI_ChatMessageConfig              MessageConfig;                                     // 0x0(0xC)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function ValeriaUI.VALUI_ChatPanelBase.ToggleChannelsByType
struct UVALUI_ChatPanelBase_ToggleChannelsByType_Params
{
public:
	bool                                         bEnabled;                                          // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMessageTargetType                Type;                                              // 0x1(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ValeriaUI.VALUI_ChatPanelBase.ToggleAllChannels
struct UVALUI_ChatPanelBase_ToggleAllChannels_Params
{
public:
	bool                                         bEnabled;                                          // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ValeriaUI.VALUI_ChatPanelBase.SwitchTab
struct UVALUI_ChatPanelBase_SwitchTab_Params
{
public:
	class FName                                  TabName;                                           // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// Function ValeriaUI.VALUI_ChatPanelBase.RemoveTabChannel
struct UVALUI_ChatPanelBase_RemoveTabChannel_Params
{
public:
	struct FVALUI_ChatTab                        Tab;                                               // 0x0(0x60)(Parm, OutParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	int32                                        ChannelIndex;                                      // 0x60(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_22C6[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x78 (0x78 - 0x0)
// Function ValeriaUI.VALUI_ChatPanelBase.OnNewChatMessageAdded
struct UVALUI_ChatPanelBase_OnNewChatMessageAdded_Params
{
public:
	struct FValeriaChatMessage                   ChatMessage;                                       // 0x0(0x78)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ValeriaUI.VALUI_ChatPanelBase.HandleToggleTabHost
struct UVALUI_ChatPanelBase_HandleToggleTabHost_Params
{
public:
	bool                                         bEnabled;                                          // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xF8 (0xF8 - 0x0)
// Function ValeriaUI.VALUI_ChatPanelBase.HandleTabChannelEnabled
struct UVALUI_ChatPanelBase_HandleTabChannelEnabled_Params
{
public:
	struct FVALUI_ChatTab                        Tab;                                               // 0x0(0x60)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FVALUI_ChatChannel                    Channel;                                           // 0x60(0x88)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FVALUI_ChatMessageConfig              Config;                                            // 0xE8(0xC)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_22D8[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function ValeriaUI.VALUI_ChatPanelBase.HandleRemoveSidePanelChannel
struct UVALUI_ChatPanelBase_HandleRemoveSidePanelChannel_Params
{
public:
	class UWidget*                               SidePanel;                                         // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ChannelIndex;                                      // 0x8(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_22E0[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function ValeriaUI.VALUI_ChatPanelBase.HandleOnStateChanged
struct UVALUI_ChatPanelBase_HandleOnStateChanged_Params
{
public:
	enum class EVALUI_ChatPanelState             State;                                             // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ValeriaUI.VALUI_ChatPanelBase.HandleOnPawnChanged
struct UVALUI_ChatPanelBase_HandleOnPawnChanged_Params
{
public:
	class APawn*                                 Pawn;                                              // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function ValeriaUI.VALUI_ChatPanelBase.HandleNewMessageTarget
struct UVALUI_ChatPanelBase_HandleNewMessageTarget_Params
{
public:
	struct FMessageTarget                        MessageTarget;                                     // 0x0(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// Function ValeriaUI.VALUI_ChatPanelBase.HandleNewControlMessage
struct UVALUI_ChatPanelBase_HandleNewControlMessage_Params
{
public:
	struct FControlMessage                       ControlMessage;                                    // 0x0(0x80)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// Function ValeriaUI.VALUI_ChatPanelBase.HandleNewChatMessage
struct UVALUI_ChatPanelBase_HandleNewChatMessage_Params
{
public:
	struct FValeriaChatMessage                   ChatMessage;                                       // 0x0(0x78)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function ValeriaUI.VALUI_ChatPanelBase.HandleMessageTargetRemoved
struct UVALUI_ChatPanelBase_HandleMessageTargetRemoved_Params
{
public:
	struct FMessageTarget                        MessageTarget;                                     // 0x0(0x28)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ValeriaUI.VALUI_ChatPanelBase.HandleDisplayTab
struct UVALUI_ChatPanelBase_HandleDisplayTab_Params
{
public:
	class FName                                  TabName;                                           // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x98 (0x98 - 0x0)
// Function ValeriaUI.VALUI_ChatPanelBase.HandleDisplayChannelGlow
struct UVALUI_ChatPanelBase_HandleDisplayChannelGlow_Params
{
public:
	class UWidget*                               SidePanel;                                         // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVALUI_ChatChannel                    Channel;                                           // 0x8(0x88)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int32                                        ChannelIndex;                                      // 0x90(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_230B[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x0 - 0x0)
// Function ValeriaUI.VALUI_ChatPanelBase.HandleClearTabHost
struct UVALUI_ChatPanelBase_HandleClearTabHost_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function ValeriaUI.VALUI_ChatPanelBase.HandleClearMessagePanel
struct UVALUI_ChatPanelBase_HandleClearMessagePanel_Params
{
public:
	class UWidget*                               MessagePanel;                                      // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ValeriaUI.VALUI_ChatPanelBase.HandleAddTabToTabHost
struct UVALUI_ChatPanelBase_HandleAddTabToTabHost_Params
{
public:
	class FName                                  TabName;                                           // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  TabDisplayName;                                    // 0x8(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function ValeriaUI.VALUI_ChatPanelBase.HandleAddTabChannel
struct UVALUI_ChatPanelBase_HandleAddTabChannel_Params
{
public:
	struct FVALUI_ChatMessageConfig              MessageConfig;                                     // 0x0(0xC)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x90 (0x90 - 0x0)
// Function ValeriaUI.VALUI_ChatPanelBase.HandleAddMessageToPanel
struct UVALUI_ChatPanelBase_HandleAddMessageToPanel_Params
{
public:
	class UWidget*                               MessagePanel;                                      // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FValeriaChatMessage                   ChatMessage;                                       // 0x8(0x78)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FVALUI_ChatMessageConfig              MessageConfig;                                     // 0x80(0xC)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_232A[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function ValeriaUI.VALUI_ChatPanelBase.GotoChatState
struct UVALUI_ChatPanelBase_GotoChatState_Params
{
public:
	enum class EVALUI_ChatPanelState             State;                                             // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ValeriaUI.VALUI_ChatPanelBase.GetTabWidgetReferences
struct UVALUI_ChatPanelBase_GetTabWidgetReferences_Params
{
public:
	class FName                                  TabName;                                           // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                               OutSidePanelWidget;                                // 0x8(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                               OutMessagePanelWidget;                             // 0x10(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ValeriaUI.VALUI_ChatPanelBase.GetCurrentChatState
struct UVALUI_ChatPanelBase_GetCurrentChatState_Params
{
public:
	enum class EVALUI_ChatPanelState             ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x88 (0x88 - 0x0)
// Function ValeriaUI.VALUI_ChatPanelBase.GetChatMessageConfigs
struct UVALUI_ChatPanelBase_GetChatMessageConfigs_Params
{
public:
	struct FValeriaChatMessage                   Message;                                           // 0x0(0x78)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<struct FVALUI_ChatMessageConfig>      OutMessageConfigs;                                 // 0x78(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ValeriaUI.VALUI_ChatPanelBase.DisplayTab
struct UVALUI_ChatPanelBase_DisplayTab_Params
{
public:
	class FName                                  TabName;                                           // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// Function ValeriaUI.VALUI_ChatPanelBase.ClearTabSidePanel
struct UVALUI_ChatPanelBase_ClearTabSidePanel_Params
{
public:
	struct FVALUI_ChatTab                        Tab;                                               // 0x0(0x60)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0xA0 (0xA0 - 0x0)
// Function ValeriaUI.VALUI_ChatStatics.GetMessageTargetsOfChannel
struct UVALUI_ChatStatics_GetMessageTargetsOfChannel_Params
{
public:
	class UWorld*                                WorldContext;                                      // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVALUI_ChatChannel                    InChannel;                                         // 0x8(0x88)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<struct FMessageTarget>                ReturnValue;                                       // 0x90(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0xB8 (0xB8 - 0x0)
// Function ValeriaUI.VALUI_ChatStatics.DoesChannelMatchMessageTarget
struct UVALUI_ChatStatics_DoesChannelMatchMessageTarget_Params
{
public:
	struct FVALUI_ChatChannel                    InChannel;                                         // 0x0(0x88)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FMessageTarget                        InMessageTarget;                                   // 0x88(0x28)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xB0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_235C[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xB0 (0xB0 - 0x0)
// Function ValeriaUI.VALUI_ChatStatics.ConvertValeriaChatMessageToPlatformChatMessage
struct UVALUI_ChatStatics_ConvertValeriaChatMessageToPlatformChatMessage_Params
{
public:
	struct FValeriaChatMessage                   ChatMessages;                                      // 0x0(0x78)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FS6PLAT_ChatMessage                   ReturnValue;                                       // 0x78(0x38)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ValeriaUI.VALUI_ChatStatics.ConvertValeriaChatMessagesArrayToPlatformChatMessagesArray
struct UVALUI_ChatStatics_ConvertValeriaChatMessagesArrayToPlatformChatMessagesArray_Params
{
public:
	TArray<struct FValeriaChatMessage>           ChatMessages;                                      // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<struct FS6PLAT_ChatMessage>           ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ValeriaUI.VALUI_CheckBoxStyle.Apply
struct UVALUI_CheckBoxStyle_Apply_Params
{
public:
	class UCheckBox*                             CheckBox;                                          // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ValeriaUI.VALUI_CheckBox_Styled.SetCheckBoxStyle
struct UVALUI_CheckBox_Styled_SetCheckBoxStyle_Params
{
public:
	class UVALUI_CheckBoxStyle*                  NewStyle;                                          // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xF0 (0xF0 - 0x0)
// Function ValeriaUI.VALUI_CrafterContentWidget.GetCrafterRowName
struct UVALUI_CrafterContentWidget_GetCrafterRowName_Params
{
public:
	struct FCrafterConfig                        CrafterConfig;                                     // 0x0(0xE8)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ReturnValue;                                       // 0xE8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x140 (0x140 - 0x0)
// Function ValeriaUI.VALUI_CrafterContentWidget.GetCrafterData
struct UVALUI_CrafterContentWidget_GetCrafterData_Params
{
public:
	struct FCrafterConfig                        CrafterConfig;                                     // 0x0(0xE8)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVALUI_Crafter                        CrafterData;                                       // 0xE8(0x50)(Parm, OutParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x138(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2379[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x320 (0x320 - 0x0)
// Function ValeriaUI.VALUI_CrafterStationsViewWidget.DisplayCrafterStations
struct UVALUI_CrafterStationsViewWidget_DisplayCrafterStations_Params
{
public:
	struct FRecipeNeeds                          RecipeNeeds;                                       // 0x0(0x320)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ValeriaUI.VALUI_DepthSortedHorizontalBox.SetForemostWidgetIndex
struct UVALUI_DepthSortedHorizontalBox_SetForemostWidgetIndex_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x98 (0x98 - 0x0)
// Function ValeriaUI.VALUI_DragDropOperation.DragStarted
struct UVALUI_DragDropOperation_DragStarted_Params
{
public:
	struct FPointerEvent                         PointerEvent;                                      // 0x0(0x98)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function ValeriaUI.VALUI_Functor_Button_OnClicked.OnClicked
struct UVALUI_Functor_Button_OnClicked_OnClicked_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ValeriaUI.VALUI_DynamicExtensionBase.AttachedToWidget
struct UVALUI_DynamicExtensionBase_AttachedToWidget_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function ValeriaUI.VALUI_EditableRichTextStyle.ApplyToTextBlock
struct UVALUI_EditableRichTextStyle_ApplyToTextBlock_Params
{
public:
	class US6UI_EditableRichText*                TextWidget;                                        // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ValeriaUI.VALUI_EditableTextBoxStyle.ApplyToTextBox
struct UVALUI_EditableTextBoxStyle_ApplyToTextBox_Params
{
public:
	class UEditableTextBox*                      TextWidget;                                        // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ValeriaUI.VALUI_EditableTextBox_Styled.SetTextStyle
struct UVALUI_EditableTextBox_Styled_SetTextStyle_Params
{
public:
	class UVALUI_EditableTextBoxStyle*           NewStyle;                                          // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ValeriaUI.VALUI_EditableTextStyle.ApplyToTextBlock
struct UVALUI_EditableTextStyle_ApplyToTextBlock_Params
{
public:
	class UEditableText*                         TextWidget;                                        // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// DelegateFunction ValeriaUI.VALUI_EditableText_Styled.VALUIEvent_UMGEditableTextOnCursorMoved__DelegateSignature
struct UVALUI_EditableText_Styled_VALUIEvent_UMGEditableTextOnCursorMoved__DelegateSignature_Params
{
public:
	int32                                        LineIndex;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Offset;                                            // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ValeriaUI.VALUI_EditableText_Styled.SetTextStyle
struct UVALUI_EditableText_Styled_SetTextStyle_Params
{
public:
	class UVALUI_EditableTextStyle*              NewStyle;                                          // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ValeriaUI.VALUI_EditableText_Styled.CaretGoTo
struct UVALUI_EditableText_Styled_CaretGoTo_Params
{
public:
	int32                                        LineIndex;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Offset;                                            // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// DelegateFunction ValeriaUI.VALUI_EmoteButtonContainer.OnEmoteContainerButtonClicked__DelegateSignature
struct UVALUI_EmoteButtonContainer_OnEmoteContainerButtonClicked__DelegateSignature_Params
{
public:
	class UVALUI_EmoteButtonContainer*           Container;                                         // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UVALUI_EmoteButton*                    ButtonClicked;                                     // 0x8(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UEmoteDataAsset*                       EmoteDataAsset;                                    // 0x10(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ValeriaUI.VALUI_EmoteButtonContainer.OnEmoteButtonClicked
struct UVALUI_EmoteButtonContainer_OnEmoteButtonClicked_Params
{
public:
	class UVALUI_EmoteButton*                    InButtonClicked;                                   // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UEmoteDataAsset*                       InEmoteDataAsset;                                  // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function ValeriaUI.VALUI_EmoteButtonContainer.HandleClearContainer
struct UVALUI_EmoteButtonContainer_HandleClearContainer_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function ValeriaUI.VALUI_EmoteButtonContainer.HandleAddButtonToContainer
struct UVALUI_EmoteButtonContainer_HandleAddButtonToContainer_Params
{
public:
	class UVALUI_EmoteButton*                    Button;                                            // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ValeriaUI.VALUI_ErrorDisplayHandlerInterface.HandleErrorDisplay
struct IVALUI_ErrorDisplayHandlerInterface_HandleErrorDisplay_Params
{
public:
	struct FVALUI_ErrorDisplayPayload            ErrorDisplayPayload;                               // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function ValeriaUI.VALUI_ErrorDisplayHandling.TryRaiseErrorForDisplay
struct UVALUI_ErrorDisplayHandling_TryRaiseErrorForDisplay_Params
{
public:
	class UWidget*                               InstigatingWidget;                                 // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVALUI_ErrorDisplayPayload            ErrorDisplayPayload;                               // 0x8(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_23F9[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function ValeriaUI.VALUI_ExpandableAreaStyle.Apply
struct UVALUI_ExpandableAreaStyle_Apply_Params
{
public:
	class UExpandableArea*                       ExpandableArea;                                    // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ValeriaUI.VALUI_ExpandableArea_Styled.SetExpandableAreaStyle
struct UVALUI_ExpandableArea_Styled_SetExpandableAreaStyle_Params
{
public:
	class UVALUI_ExpandableAreaStyle*            NewStyle;                                          // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function ValeriaUI.VALUI_ExtensionPointContainerBase.AddExtensibleWidget
struct UVALUI_ExtensionPointContainerBase_AddExtensibleWidget_Params
{
public:
	TSoftClassPtr<class UUserWidget>             WidgetReference;                                   // 0x0(0x30)(ConstParm, Parm, OutParm, ReferenceParm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function ValeriaUI.VALUI_InputValidationFunctionLibrary.ValidateUserName
struct UVALUI_InputValidationFunctionLibrary_ValidateUserName_Params
{
public:
	class FString                                UserNameInput;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FText>                          OutErrors;                                         // 0x10(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_241B[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// Function ValeriaUI.VALUI_ItemAcquisitionNotificationInterface.SetInitialData
struct IVALUI_ItemAcquisitionNotificationInterface_SetInitialData_Params
{
public:
	struct FValeriaItem                          Item;                                              // 0x0(0x50)(Parm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ValeriaUI.VALUI_ItemAcquisitionNotificationInterface.CanAppendAdditionalData
struct IVALUI_ItemAcquisitionNotificationInterface_CanAppendAdditionalData_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function ValeriaUI.VALUI_ItemAcquisitionNotificationInterface.AppendAdditionalData
struct IVALUI_ItemAcquisitionNotificationInterface_AppendAdditionalData_Params
{
public:
	struct FValeriaItem                          Item;                                              // 0x0(0x50)(Parm, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function ValeriaUI.VALUI_ItemAcquisitionNotifier.Setup
struct UVALUI_ItemAcquisitionNotifier_Setup_Params
{
public:
	class UInventoryComponent*                   SourceInventoryComponent;                          // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UVALUI_NotificationQueue*              TargetNotificationQueue;                           // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftClassPtr<class UUserWidget>             InWidgetClass;                                     // 0x10(0x30)(ConstParm, Parm, OutParm, ReferenceParm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// DelegateFunction ValeriaUI.VALUI_ItemAcquisitionNotifier.OnCreateItemAcquisitionNotification__DelegateSignature
struct UVALUI_ItemAcquisitionNotifier_OnCreateItemAcquisitionNotification__DelegateSignature_Params
{
public:
	class UVALUI_ItemAcquisitionNotifier*        Notifier;                                          // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                               ReturnValue;                                       // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ValeriaUI.VALUI_ItemAcquisitionNotifier.HandleNotificationDismissed
struct UVALUI_ItemAcquisitionNotifier_HandleNotificationDismissed_Params
{
public:
	class UVALUI_NotificationQueue*              NotificationQueue;                                 // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 AffectedNotificationId;                            // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                               NotificationWidget;                                // 0x18(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function ValeriaUI.VALUI_ItemAcquisitionNotifier.HandleItemAcquired
struct UVALUI_ItemAcquisitionNotifier_HandleItemAcquired_Params
{
public:
	struct FValeriaItem                          Item;                                              // 0x0(0x50)(Parm, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function ValeriaUI.VALUI_ItemDragDrop.GetItem
struct UVALUI_ItemDragDrop_GetItem_Params
{
public:
	struct FValeriaItem                          ReturnValue;                                       // 0x0(0x50)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// DelegateFunction ValeriaUI.VALUI_ListView_Styled.VALUI_OnListViewUserScrolled__DelegateSignature
struct UVALUI_ListView_Styled_VALUI_OnListViewUserScrolled__DelegateSignature_Params
{
public:
	float                                        ScrollFraction;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// DelegateFunction ValeriaUI.VALUI_ListView_Styled.VALUI_OnListViewUserMouseWheelScrolled__DelegateSignature
struct UVALUI_ListView_Styled_VALUI_OnListViewUserMouseWheelScrolled__DelegateSignature_Params
{
public:
	float                                        DesiredOffset;                                     // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ValeriaUI.VALUI_ListView_Styled.ShouldScrollBarBeVisible
struct UVALUI_ListView_Styled_ShouldScrollBarBeVisible_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// DelegateFunction ValeriaUI.VALUI_ListView_Styled.OnListItemSelectionChangedWithInputTypeDynamic__DelegateSignature
struct UVALUI_ListView_Styled_OnListItemSelectionChangedWithInputTypeDynamic__DelegateSignature_Params
{
public:
	class UObject*                               Item;                                              // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsSelected;                                       // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESelectInfo                       SelectType;                                        // 0x9(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2471[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// DelegateFunction ValeriaUI.VALUI_ListView_Styled.OnListItemsChanged__DelegateSignature
struct UVALUI_ListView_Styled_OnListItemsChanged__DelegateSignature_Params
{
public:
	TArray<class UObject*>                       AddedItems;                                        // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<class UObject*>                       RemovedItems;                                      // 0x10(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ValeriaUI.VALUI_ListView_Styled.GetScrollbarDistanceFromBottom
struct UVALUI_ListView_Styled_GetScrollbarDistanceFromBottom_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ValeriaUI.VALUI_ListView_Styled.GetItemsWithinRange
struct UVALUI_ListView_Styled_GetItemsWithinRange_Params
{
public:
	int32                                        StartingIndex;                                     // 0x0(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Range;                                             // 0x4(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UObject*>                       ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ValeriaUI.VALUI_LoadingScreenBlackWidget.GetFadeFromBlackAnimation
struct UVALUI_LoadingScreenBlackWidget_GetFadeFromBlackAnimation_Params
{
public:
	class UWidgetAnimation*                      ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ValeriaUI.VALUI_LoadingScreenBlackWidget.FadeFromNoneToBlack
struct UVALUI_LoadingScreenBlackWidget_FadeFromNoneToBlack_Params
{
public:
	float                                        FadeTimeInSeconds;                                 // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ValeriaUI.VALUI_LoadingScreenBlackWidget.FadeFromBlackToNone
struct UVALUI_LoadingScreenBlackWidget_FadeFromBlackToNone_Params
{
public:
	float                                        FadeTimeInSeconds;                                 // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function ValeriaUI.VALUI_MainHUDViewModel.ShowRightHudElements
struct UVALUI_MainHUDViewModel_ShowRightHudElements_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ValeriaUI.VALUI_MainHUDViewModel.HideRightHudElements
struct UVALUI_MainHUDViewModel_HideRightHudElements_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function ValeriaUI.VALUI_MainHUDWidget.HandleOnViewModelSocialTrackingDataChanged
struct UVALUI_MainHUDWidget_HandleOnViewModelSocialTrackingDataChanged_Params
{
public:
	class UObject*                               Object;                                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFieldNotificationId                  Field;                                             // 0x8(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ValeriaUI.VALUI_MainHUDWidget.HandleOnViewModelHUDStateChanged
struct UVALUI_MainHUDWidget_HandleOnViewModelHUDStateChanged_Params
{
public:
	class UObject*                               Object;                                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFieldNotificationId                  Field;                                             // 0x8(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// Function ValeriaUI.VALUI_MainHUDWidget.HandleOnSocialTrackingDataChanged
struct UVALUI_MainHUDWidget_HandleOnSocialTrackingDataChanged_Params
{
public:
	struct FVALUI_SocialTrackingData             SocialData;                                        // 0x0(0x14)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function ValeriaUI.VALUI_MainHUDWidget.HandleOnHUDStateChanged
struct UVALUI_MainHUDWidget_HandleOnHUDStateChanged_Params
{
public:
	struct FVALUI_MainHUDState                   State;                                             // 0x0(0xC)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ValeriaUI.VALUI_MultiLineEditableTextBoxStyle.ApplyToTextBox
struct UVALUI_MultiLineEditableTextBoxStyle_ApplyToTextBox_Params
{
public:
	class UMultiLineEditableTextBox*             TextWidget;                                        // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ValeriaUI.VALUI_MultiLineEditableTextBox_Styled.SetTextBoxStyle
struct UVALUI_MultiLineEditableTextBox_Styled_SetTextBoxStyle_Params
{
public:
	class UVALUI_MultiLineEditableTextBoxStyle*  NewStyle;                                          // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ValeriaUI.VALUI_MultiLineEditableTextStyle.ApplyToTextBlock
struct UVALUI_MultiLineEditableTextStyle_ApplyToTextBlock_Params
{
public:
	class UMultiLineEditableText*                TextWidget;                                        // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ValeriaUI.VALUI_MultiLineEditableText_Styled.SetTextStyle
struct UVALUI_MultiLineEditableText_Styled_SetTextStyle_Params
{
public:
	class UVALUI_MultiLineEditableTextStyle*     NewStyle;                                          // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function ValeriaUI.VALUI_NewsInbox_Widget.OnLoadSuccess
struct UVALUI_NewsInbox_Widget_OnLoadSuccess_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ValeriaUI.VALUI_NewsInbox_Widget.LoadNewsInboxMessageDefinitions
struct UVALUI_NewsInbox_Widget_LoadNewsInboxMessageDefinitions_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function ValeriaUI.VALUI_NewsInbox_Widget.GetValeriaPlayer
struct UVALUI_NewsInbox_Widget_GetValeriaPlayer_Params
{
public:
	class AValeriaPlayerController*              ReturnValue;                                       // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ValeriaUI.VALUI_NewsInbox_Widget.GetNewsInboxMessageDefinitionFromRewardIndex
struct UVALUI_NewsInbox_Widget_GetNewsInboxMessageDefinitionFromRewardIndex_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Claimed;                                           // 0x4(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_24CB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UVALUI_NewsInboxMessageDataAsset*      ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ValeriaUI.VALUI_NewsInbox_Widget.GetNewsInboxMessageDefinitionByType
struct UVALUI_NewsInbox_Widget_GetNewsInboxMessageDefinitionByType_Params
{
public:
	enum class EVAL_NewsInboxMessageType         EMessageType;                                      // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_24CC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UVALUI_NewsInboxMessageDataAsset*      ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function ValeriaUI.VALUI_NewsInbox_Widget.BP_OnRewardRefresh
struct UVALUI_NewsInbox_Widget_BP_OnRewardRefresh_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ValeriaUI.VALUI_NewsInbox_Widget.BP_OnRedemptionSuccess
struct UVALUI_NewsInbox_Widget_BP_OnRedemptionSuccess_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ValeriaUI.VALUI_NewsInbox_Widget.BP_OnRedemptionFailure
struct UVALUI_NewsInbox_Widget_BP_OnRedemptionFailure_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ValeriaUI.VALUI_NewsInbox_Widget.BP_OnLoadSuccess
struct UVALUI_NewsInbox_Widget_BP_OnLoadSuccess_Params
{
public:
};

// 0x50 (0x50 - 0x0)
// Function ValeriaUI.VALUI_NotificationWidgetInterface.MatchesNotification
struct IVALUI_NotificationWidgetInterface_MatchesNotification_Params
{
public:
	class FText                                  NotificationText;                                  // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             NotificationIcon;                                  // 0x18(0x30)(ConstParm, Parm, OutParm, ReferenceParm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x48(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_24D8[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function ValeriaUI.VALUI_NotificationWidgetInterface.HandleNotificationShown
struct IVALUI_NotificationWidgetInterface_HandleNotificationShown_Params
{
public:
	class UVALUI_NotificationQueue*              NotificationQueue;                                 // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 NotificationId;                                    // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ValeriaUI.VALUI_NotificationWidgetInterface.HandleNotificationDismissed
struct IVALUI_NotificationWidgetInterface_HandleNotificationDismissed_Params
{
public:
	class UVALUI_NotificationQueue*              NotificationQueue;                                 // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 NotificationId;                                    // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// Function ValeriaUI.VALUI_NotificationQueue.TryDismissNotification
struct UVALUI_NotificationQueue_TryDismissNotification_Params
{
public:
	struct FGuid                                 NotificationId;                                    // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_24DE[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function ValeriaUI.VALUI_NotificationQueue.PushNotification
struct UVALUI_NotificationQueue_PushNotification_Params
{
public:
	class UWidget*                               NotificationWidget;                                // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ValeriaUI.VALUI_NotificationQueue.OnNotificationShown
struct UVALUI_NotificationQueue_OnNotificationShown_Params
{
public:
	struct FGuid                                 NotificationId;                                    // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// DelegateFunction ValeriaUI.VALUI_NotificationQueue.OnNotificationPushed__DelegateSignature
struct UVALUI_NotificationQueue_OnNotificationPushed__DelegateSignature_Params
{
public:
	class UVALUI_NotificationQueue*              NotificationQueue;                                 // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 AffectedNotificationId;                            // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// DelegateFunction ValeriaUI.VALUI_NotificationQueue.OnNotificationDismissed__DelegateSignature
struct UVALUI_NotificationQueue_OnNotificationDismissed__DelegateSignature_Params
{
public:
	class UVALUI_NotificationQueue*              NotificationQueue;                                 // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 AffectedNotificationId;                            // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                               NotificationWidget;                                // 0x18(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ValeriaUI.VALUI_NotificationQueue.GetNotificationById
struct UVALUI_NotificationQueue_GetNotificationById_Params
{
public:
	struct FGuid                                 NotificationId;                                    // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                               ReturnValue;                                       // 0x10(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ValeriaUI.VALUI_NotificationQueue.GetLastNotificationOnStack
struct UVALUI_NotificationQueue_GetLastNotificationOnStack_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ValeriaUI.VALUI_NotificationQueue.GetIdForNotification
struct UVALUI_NotificationQueue_GetIdForNotification_Params
{
public:
	class UWidget*                               NotificationWidget;                                // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ValeriaUI.VALUI_NotificationQueue.GetAlllNotificationIds
struct UVALUI_NotificationQueue_GetAlllNotificationIds_Params
{
public:
	TArray<struct FGuid>                         ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ValeriaUI.VALUI_PhotoCameraScreenBase.SetLookMode
struct UVALUI_PhotoCameraScreenBase_SetLookMode_Params
{
public:
	enum class EVALUI_PhotoCameraScreenLookMode  Value;                                             // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xE0 (0xE0 - 0x0)
// Function ValeriaUI.VALUI_PhotoCameraScreenBase.AccumulateLookModeInput
struct UVALUI_PhotoCameraScreenBase_AccumulateLookModeInput_Params
{
public:
	struct FGeometry                             InGeometry;                                        // 0x0(0x40)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FPointerEvent                         InMouseEvent;                                      // 0x40(0x98)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         bInvertYAxis;                                      // 0xD8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2506[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function ValeriaUI.VALUI_UIManagerWidgetBase.RegisterCallbacksAndBroadcastNewDragDrop
struct UVALUI_UIManagerWidgetBase_RegisterCallbacksAndBroadcastNewDragDrop_Params
{
public:
	class UVALUI_ItemDragDrop*                   ItemDragDrop;                                      // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ValeriaUI.VALUI_UIManagerWidgetBase.OpenVillagerStore
struct UVALUI_UIManagerWidgetBase_OpenVillagerStore_Params
{
public:
	int32                                        VillagerConfigId;                                  // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ValeriaUI.VALUI_UIManagerWidgetBase.OpenBook
struct UVALUI_UIManagerWidgetBase_OpenBook_Params
{
public:
	int32                                        BookId;                                            // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ValeriaUI.VALUI_UIManagerWidgetBase.OnItemDragDropped
struct UVALUI_UIManagerWidgetBase_OnItemDragDropped_Params
{
public:
	class UDragDropOperation*                    Operation;                                         // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// Function ValeriaUI.VALUI_UIManagerWidgetBase.NavigateToRecentPhotos
struct UVALUI_UIManagerWidgetBase_NavigateToRecentPhotos_Params
{
public:
	struct FGuid                                 IdOfPhotoToNavigateTo;                             // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShouldSelectPhoto;                                // 0x10(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_251F[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x14 (0x14 - 0x0)
// Function ValeriaUI.VALUI_UIManagerWidgetBase.NavigateToOnlinePhotoAlbum
struct UVALUI_UIManagerWidgetBase_NavigateToOnlinePhotoAlbum_Params
{
public:
	struct FGuid                                 IdOfPhotoToNavigateTo;                             // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShouldSelectPhoto;                                // 0x10(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2526[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function ValeriaUI.VALUI_UIManagerWidgetBase.Implementation_ToggleGameplayMenuMode
struct UVALUI_UIManagerWidgetBase_Implementation_ToggleGameplayMenuMode_Params
{
public:
	enum class EVAL_GameplayMenuMode             Mode;                                              // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ValeriaUI.VALUI_UIManagerWidgetBase.Implementation_ToggleCollectionsMenu
struct UVALUI_UIManagerWidgetBase_Implementation_ToggleCollectionsMenu_Params
{
public:
	enum class EVAL_CollectionsTabState          TabState;                                          // 0x0(0x1)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ValeriaUI.VALUI_UIManagerWidgetBase.Implementation_OpenVillagerStore
struct UVALUI_UIManagerWidgetBase_Implementation_OpenVillagerStore_Params
{
public:
	int32                                        VillagerConfigId;                                  // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ValeriaUI.VALUI_UIManagerWidgetBase.Implementation_OpenSubgameScreen
struct UVALUI_UIManagerWidgetBase_Implementation_OpenSubgameScreen_Params
{
public:
	class USubgameConfig*                        InSubgameConfig;                                   // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ValeriaUI.VALUI_UIManagerWidgetBase.Implementation_OpenStore
struct UVALUI_UIManagerWidgetBase_Implementation_OpenStore_Params
{
public:
	class UVillagerStoreConfig*                  StoreConfig;                                       // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ValeriaUI.VALUI_UIManagerWidgetBase.Implementation_OpenStables
struct UVALUI_UIManagerWidgetBase_Implementation_OpenStables_Params
{
public:
	class AActor*                                StablesActor;                                      // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ValeriaUI.VALUI_UIManagerWidgetBase.Implementation_OpenSignTeleporter
struct UVALUI_UIManagerWidgetBase_Implementation_OpenSignTeleporter_Params
{
public:
	class AActor*                                TeleporterActor;                                   // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ValeriaUI.VALUI_UIManagerWidgetBase.Implementation_OpenShippingBin
struct UVALUI_UIManagerWidgetBase_Implementation_OpenShippingBin_Params
{
public:
	class UShippingBinComponent*                 ShippingBinComponent;                              // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ValeriaUI.VALUI_UIManagerWidgetBase.Implementation_OpenRequestItem
struct UVALUI_UIManagerWidgetBase_Implementation_OpenRequestItem_Params
{
public:
	class FName                                  Tag;                                               // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ValeriaUI.VALUI_UIManagerWidgetBase.Implementation_OpenRepairStation
struct UVALUI_UIManagerWidgetBase_Implementation_OpenRepairStation_Params
{
public:
	class AActor*                                RepairStationActor;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowPurchases;                                   // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowRepairKitsFromStorage;                       // 0x9(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2542[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x0 - 0x0)
// Function ValeriaUI.VALUI_UIManagerWidgetBase.Implementation_OpenRecipeInspiration
struct UVALUI_UIManagerWidgetBase_Implementation_OpenRecipeInspiration_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function ValeriaUI.VALUI_UIManagerWidgetBase.Implementation_OpenPremiumStore
struct UVALUI_UIManagerWidgetBase_Implementation_OpenPremiumStore_Params
{
public:
	struct FVAL_OpenStorePayload                 Payload;                                           // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function ValeriaUI.VALUI_UIManagerWidgetBase.Implementation_OpenPlayerStorage
struct UVALUI_UIManagerWidgetBase_Implementation_OpenPlayerStorage_Params
{
public:
};

// 0x50 (0x50 - 0x0)
// Function ValeriaUI.VALUI_UIManagerWidgetBase.Implementation_OpenPetBonus
struct UVALUI_UIManagerWidgetBase_Implementation_OpenPetBonus_Params
{
public:
	TSet<TSoftObjectPtr<class UVAL_CharacterCustomizationItem_Pet>> Items;                                             // 0x0(0x50)(ConstParm, Parm, OutParm, ReferenceParm, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function ValeriaUI.VALUI_UIManagerWidgetBase.Implementation_OpenNewsInbox
struct UVALUI_UIManagerWidgetBase_Implementation_OpenNewsInbox_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ValeriaUI.VALUI_UIManagerWidgetBase.Implementation_OpenMenuHub
struct UVALUI_UIManagerWidgetBase_Implementation_OpenMenuHub_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ValeriaUI.VALUI_UIManagerWidgetBase.Implementation_OpenMailbox
struct UVALUI_UIManagerWidgetBase_Implementation_OpenMailbox_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function ValeriaUI.VALUI_UIManagerWidgetBase.Implementation_OpenItemVariantCustomizer
struct UVALUI_UIManagerWidgetBase_Implementation_OpenItemVariantCustomizer_Params
{
public:
	class UItemVariantCustomizerComponent*       Customizer;                                        // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ValeriaUI.VALUI_UIManagerWidgetBase.Implementation_OpenHousingEdit
struct UVALUI_UIManagerWidgetBase_Implementation_OpenHousingEdit_Params
{
public:
	class AHousingPlotActor*                     HousingPlot;                                       // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ValeriaUI.VALUI_UIManagerWidgetBase.Implementation_OpenHouseUpgrade
struct UVALUI_UIManagerWidgetBase_Implementation_OpenHouseUpgrade_Params
{
public:
	class ULevelerComponent*                     LevelerComponent;                                  // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ValeriaUI.VALUI_UIManagerWidgetBase.Implementation_OpenHomeTeleporter
struct UVALUI_UIManagerWidgetBase_Implementation_OpenHomeTeleporter_Params
{
public:
	class AVAL_TeleporterBase*                   Teleporter;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function ValeriaUI.VALUI_UIManagerWidgetBase.Implementation_OpenCVarMenu
struct UVALUI_UIManagerWidgetBase_Implementation_OpenCVarMenu_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function ValeriaUI.VALUI_UIManagerWidgetBase.Implementation_OpenCrafter
struct UVALUI_UIManagerWidgetBase_Implementation_OpenCrafter_Params
{
public:
	class UCrafterComponent*                     CrafterComponent;                                  // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function ValeriaUI.VALUI_UIManagerWidgetBase.Implementation_OpenCommunityActivities
struct UVALUI_UIManagerWidgetBase_Implementation_OpenCommunityActivities_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function ValeriaUI.VALUI_UIManagerWidgetBase.Implementation_OpenBundleDropOffMenu
struct UVALUI_UIManagerWidgetBase_Implementation_OpenBundleDropOffMenu_Params
{
public:
	class UBundleShrineConfig*                   BundleConfig;                                      // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ValeriaUI.VALUI_UIManagerWidgetBase.Implementation_OpenBook
struct UVALUI_UIManagerWidgetBase_Implementation_OpenBook_Params
{
public:
	int32                                        BookId;                                            // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ValeriaUI.VALUI_UIManagerWidgetBase.Implementation_OpenAmmoMenu
struct UVALUI_UIManagerWidgetBase_Implementation_OpenAmmoMenu_Params
{
public:
	enum class EAmmoType                         AmmoType;                                          // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// Function ValeriaUI.VALUI_UIManagerWidgetBase.Implementation_NavigateToRecentPhotos
struct UVALUI_UIManagerWidgetBase_Implementation_NavigateToRecentPhotos_Params
{
public:
	struct FGuid                                 IdOfPhotoToNavigateTo;                             // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShouldSelectPhoto;                                // 0x10(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_255F[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x14 (0x14 - 0x0)
// Function ValeriaUI.VALUI_UIManagerWidgetBase.Implementation_NavigateToOnlinePhotoAlbum
struct UVALUI_UIManagerWidgetBase_Implementation_NavigateToOnlinePhotoAlbum_Params
{
public:
	struct FGuid                                 IdOfPhotoToNavigateTo;                             // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShouldSelectPhoto;                                // 0x10(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2565[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xF (0xF - 0x0)
// Function ValeriaUI.VALUI_UIManagerWidgetBase.Implementation_NavigateToCharacterCustomization
struct UVALUI_UIManagerWidgetBase_Implementation_NavigateToCharacterCustomization_Params
{
public:
	struct FVAL_CharacterCustomizationModeConfig Config;                                            // 0x0(0xF)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ValeriaUI.VALUI_UIManagerWidgetBase.Implementation_HasAnyHousingPlotsTeleportOptions
struct UVALUI_UIManagerWidgetBase_Implementation_HasAnyHousingPlotsTeleportOptions_Params
{
public:
	class AVAL_TeleporterBase*                   Teleporter;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_256D[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x0 - 0x0)
// Function ValeriaUI.VALUI_UIManagerWidgetBase.Implementation_CloseSubgameScreen
struct UVALUI_UIManagerWidgetBase_Implementation_CloseSubgameScreen_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function ValeriaUI.VALUI_PregameUIManager.TryGetCachedCharacters_Checked
struct UVALUI_PregameUIManager_TryGetCachedCharacters_Checked_Params
{
public:
	TArray<struct FVALDTOS_MetaCharacterFormat>  OutOurCharacters;                                  // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ValeriaUI.VALUI_PregameUIManager.TryGetCachedCharacters
struct UVALUI_PregameUIManager_TryGetCachedCharacters_Params
{
public:
	TArray<struct FVALDTOS_MetaCharacterFormat>  OutOurCharacters;                                  // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_257B[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function ValeriaUI.VALUI_PregameUIManager.SetAnnouncementURL
struct UVALUI_PregameUIManager_SetAnnouncementURL_Params
{
public:
	class FString                                URL;                                               // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// DelegateFunction ValeriaUI.VALUI_PregameUIManager.OnPregameStateChange__DelegateSignature
struct UVALUI_PregameUIManager_OnPregameStateChange__DelegateSignature_Params
{
public:
	enum class EVALUI_PregameState               State;                                             // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// DelegateFunction ValeriaUI.VALUI_PregameUIManager.OnLobbyStateChange__DelegateSignature
struct UVALUI_PregameUIManager_OnLobbyStateChange__DelegateSignature_Params
{
public:
	enum class EVALUI_LobbyState                 State;                                             // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ValeriaUI.VALUI_PregameUIManager.HandleOnRetrievingCharacterListFailed
struct UVALUI_PregameUIManager_HandleOnRetrievingCharacterListFailed_Params
{
public:
	int32                                        ErrorCode;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ValeriaUI.VALUI_PregameUIManager.HandleOnPregameStateChanged
struct UVALUI_PregameUIManager_HandleOnPregameStateChanged_Params
{
public:
	enum class EVALUI_PregameState               NewState;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ValeriaUI.VALUI_PregameUIManager.HandleOnLoginStateChanged
struct UVALUI_PregameUIManager_HandleOnLoginStateChanged_Params
{
public:
	enum class EVALUI_LoginState                 NewState;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ValeriaUI.VALUI_PregameUIManager.HandleOnLobbyStateChanged
struct UVALUI_PregameUIManager_HandleOnLobbyStateChanged_Params
{
public:
	enum class EVALUI_LobbyState                 NewState;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function ValeriaUI.VALUI_PregameUIManager.HandleOnFetchedServerStatus
struct UVALUI_PregameUIManager_HandleOnFetchedServerStatus_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function ValeriaUI.VALUI_PregameUIManager.HandleOnCharacterListObtained
struct UVALUI_PregameUIManager_HandleOnCharacterListObtained_Params
{
public:
	TArray<struct FVALDTOS_MetaCharacterFormat>  InCachedCharacters;                                // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ValeriaUI.VALUI_PregameUIManager.HandleOnCharacterCreationStateChanged
struct UVALUI_PregameUIManager_HandleOnCharacterCreationStateChanged_Params
{
public:
	enum class EVALUI_CharacterCreationState     NewState;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ValeriaUI.VALUI_PregameUIManager.GoToPregameState
struct UVALUI_PregameUIManager_GoToPregameState_Params
{
public:
	enum class EVALUI_PregameState               NewState;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ValeriaUI.VALUI_PregameUIManager.GoToLoginState
struct UVALUI_PregameUIManager_GoToLoginState_Params
{
public:
	enum class EVALUI_LoginState                 NewState;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ValeriaUI.VALUI_PregameUIManager.GoToLobbyState
struct UVALUI_PregameUIManager_GoToLobbyState_Params
{
public:
	enum class EVALUI_LobbyState                 NewState;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ValeriaUI.VALUI_PregameUIManager.GoToCharacterCreationState
struct UVALUI_PregameUIManager_GoToCharacterCreationState_Params
{
public:
	enum class EVALUI_CharacterCreationState     NewState;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ValeriaUI.VALUI_PregameUIManager.GetCurrentPregameStateId
struct UVALUI_PregameUIManager_GetCurrentPregameStateId_Params
{
public:
	enum class EVALUI_PregameState               ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x720 (0x720 - 0x0)
// Function ValeriaUI.VALUI_PregameUIManager.GetCachedCharacterAtIndex_Checked
struct UVALUI_PregameUIManager_GetCachedCharacterAtIndex_Checked_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_25AA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVALDTOS_MetaCharacterFormat          OutCharacter;                                      // 0x8(0x718)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function ValeriaUI.VALUI_PregameUIManager.FetchServerStatus
struct UVALUI_PregameUIManager_FetchServerStatus_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ValeriaUI.VALUI_PregameUIManager.FetchAnnouncements
struct UVALUI_PregameUIManager_FetchAnnouncements_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ValeriaUI.VALUI_PremiumCurrencyPurchaseWidgetBase.RequestBundleOffers
struct UVALUI_PremiumCurrencyPurchaseWidgetBase_RequestBundleOffers_Params
{
public:
};

// 0x14 (0x14 - 0x0)
// Function ValeriaUI.VALUI_PremiumCurrencyPurchaseWidgetBase.PurchasePremiumCurrency
struct UVALUI_PremiumCurrencyPurchaseWidgetBase_PurchasePremiumCurrency_Params
{
public:
	struct FGuid                                 BundleID;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EVALUI_PremiumCurrencyProvider    Provider;                                          // 0x10(0x1)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_25C6[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function ValeriaUI.VALUI_PremiumCurrencyPurchaseWidgetBase.HandleValidatePaymentFulfillmentTick
struct UVALUI_PremiumCurrencyPurchaseWidgetBase_HandleValidatePaymentFulfillmentTick_Params
{
public:
	struct FGuid                                 PaymentID;                                         // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ValeriaUI.VALUI_PremiumCurrencyPurchaseWidgetBase.HandleUrlChanged
struct UVALUI_PremiumCurrencyPurchaseWidgetBase_HandleUrlChanged_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function ValeriaUI.VALUI_PremiumCurrencyPurchaseWidgetBase.HandlePaymentFulfilled
struct UVALUI_PremiumCurrencyPurchaseWidgetBase_HandlePaymentFulfilled_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ValeriaUI.VALUI_PremiumCurrencyPurchaseWidgetBase.HandlePaymentCompleted
struct UVALUI_PremiumCurrencyPurchaseWidgetBase_HandlePaymentCompleted_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ValeriaUI.VALUI_PremiumCurrencyPurchaseWidgetBase.HandlePaymentCancelled
struct UVALUI_PremiumCurrencyPurchaseWidgetBase_HandlePaymentCancelled_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function ValeriaUI.VALUI_PremiumCurrencyPurchaseWidgetBase.HandleCheckoutSessionCreated
struct UVALUI_PremiumCurrencyPurchaseWidgetBase_HandleCheckoutSessionCreated_Params
{
public:
	class FString                                URL;                                               // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function ValeriaUI.VALUI_PremiumCurrencyPurchaseWidgetBase.HandleBundleOffersFailed
struct UVALUI_PremiumCurrencyPurchaseWidgetBase_HandleBundleOffersFailed_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function ValeriaUI.VALUI_PremiumCurrencyPurchaseWidgetBase.HandleBundleOffersAvailable
struct UVALUI_PremiumCurrencyPurchaseWidgetBase_HandleBundleOffersAvailable_Params
{
public:
	TArray<struct FVALUI_PremiumCurrencyBundle>  Bundles;                                           // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function ValeriaUI.VALUI_PremiumCurrencyPurchaseWidgetBase.CancelValidatePaymentPolling
struct UVALUI_PremiumCurrencyPurchaseWidgetBase_CancelValidatePaymentPolling_Params
{
public:
};

// 0x60 (0x60 - 0x0)
// Function ValeriaUI.VALUI_PremiumItemPurchaseWidgetBase.GetLoadoutOverridesForCatalogItems
struct UVALUI_PremiumItemPurchaseWidgetBase_GetLoadoutOverridesForCatalogItems_Params
{
public:
	TArray<class UVAL_CharacterCustomizationItemBase*> Items;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TMap<class FName, class UVAL_CharacterCustomizationItemBase*> ReturnValue;                                       // 0x10(0x50)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ValeriaUI.VALUI_PremiumItemPurchaseWidgetBase.GetCustomizationItemsForGuids
struct UVALUI_PremiumItemPurchaseWidgetBase_GetCustomizationItemsForGuids_Params
{
public:
	TArray<struct FGuid>                         ItemIds;                                           // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<class UVAL_CharacterCustomizationItemBase*> ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function ValeriaUI.VALUI_PremiumStorefrontTileWidgetBase.SetModel
struct UVALUI_PremiumStorefrontTileWidgetBase_SetModel_Params
{
public:
	struct FVALUI_PremiumStorefrontWidgetModel   NewModel;                                          // 0x0(0x50)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// DelegateFunction ValeriaUI.VALUI_PremiumStorefrontTileWidgetBase.OnSelected__DelegateSignature
struct UVALUI_PremiumStorefrontTileWidgetBase_OnSelected__DelegateSignature_Params
{
public:
	class UVALUI_PremiumStorefrontTileWidgetBase* Widget;                                            // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function ValeriaUI.VALUI_PremiumStorefrontTileWidgetBase.HandleModelUpdate
struct UVALUI_PremiumStorefrontTileWidgetBase_HandleModelUpdate_Params
{
public:
	struct FVALUI_PremiumStorefrontWidgetModel   NewModel;                                          // 0x0(0x50)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function ValeriaUI.VALUI_PremiumStorefrontTileWidgetBase.GetModel
struct UVALUI_PremiumStorefrontTileWidgetBase_GetModel_Params
{
public:
	struct FVALUI_PremiumStorefrontWidgetModel   ReturnValue;                                       // 0x0(0x50)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ValeriaUI.VALUI_PremiumStorefrontWidgetBase.HandleTileWidgetSelected
struct UVALUI_PremiumStorefrontWidgetBase_HandleTileWidgetSelected_Params
{
public:
	class UVALUI_PremiumStorefrontTileWidgetBase* Tile;                                              // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function ValeriaUI.VALUI_PremiumStorefrontWidgetBase.HandleTileSelected
struct UVALUI_PremiumStorefrontWidgetBase_HandleTileSelected_Params
{
public:
	struct FVALUI_PremiumStorefrontWidgetModel   Model;                                             // 0x0(0x50)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function ValeriaUI.VALUI_PremiumStorefrontWidgetBase.HandleStorefrontError
struct UVALUI_PremiumStorefrontWidgetBase_HandleStorefrontError_Params
{
public:
};

// 0x20 (0x20 - 0x0)
// Function ValeriaUI.VALUI_PremiumStorefrontWidgetBase.HandleStorefrontAvailable
struct UVALUI_PremiumStorefrontWidgetBase_HandleStorefrontAvailable_Params
{
public:
	struct FVALUI_PremiumStorefrontResponse      Response;                                          // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ValeriaUI.VALUI_PremiumStorefrontWidgetBase.FetchStorefront
struct UVALUI_PremiumStorefrontWidgetBase_FetchStorefront_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ValeriaUI.VALUI_PremiumStorefrontWidgetBase.CreateStorefrontGrid
struct UVALUI_PremiumStorefrontWidgetBase_CreateStorefrontGrid_Params
{
public:
	int32                                        WidgetsPerRow;                                     // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2628[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FVALUI_PremiumStorefrontWidgetModel> Models;                                            // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// DelegateFunction ValeriaUI.VALUI_PremiumStoreScreenWidgetBase.OnStateChanged__DelegateSignature
struct UVALUI_PremiumStoreScreenWidgetBase_OnStateChanged__DelegateSignature_Params
{
public:
	class UVALUI_PremiumStoreScreenWidgetBase*   StoreWidget;                                       // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EVALUI_PremiumStoreState          State;                                             // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_262D[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function ValeriaUI.VALUI_PremiumStoreScreenWidgetBase.HandleOnStateChanged
struct UVALUI_PremiumStoreScreenWidgetBase_HandleOnStateChanged_Params
{
public:
	enum class EVALUI_PremiumStoreState          State;                                             // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function ValeriaUI.VALUI_PremiumStoreScreenWidgetBase.HandleBackAction
struct UVALUI_PremiumStoreScreenWidgetBase_HandleBackAction_Params
{
public:
	struct FInputActionValue                     ActionValue;                                       // 0x0(0x20)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	float                                        ElapsedTime;                                       // 0x20(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TriggeredTime;                                     // 0x24(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ValeriaUI.VALUI_PremiumStoreScreenWidgetBase.GoToPremiumStoreState
struct UVALUI_PremiumStoreScreenWidgetBase_GoToPremiumStoreState_Params
{
public:
	enum class EVALUI_PremiumStoreState          NewState;                                          // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ValeriaUI.VALUI_PremiumStoreScreenWidgetBase.GetPremiumStoreState
struct UVALUI_PremiumStoreScreenWidgetBase_GetPremiumStoreState_Params
{
public:
	enum class EVALUI_PremiumStoreState          ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x158 (0x158 - 0x0)
// Function ValeriaUI.VALUI_PremiumStoreFunctionLibrary.GetPetPurchaseBonusFromPurchaseRewards
struct UVALUI_PremiumStoreFunctionLibrary_GetPetPurchaseBonusFromPurchaseRewards_Params
{
public:
	struct FVALUI_PremiumStorefrontPurchaseRewards PurchaseRewards;                                   // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FVAL_CharacterCustomization_PetPurchaseBonus ReturnValue;                                       // 0x10(0x148)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x1A8 (0x1A8 - 0x0)
// Function ValeriaUI.VALUI_PremiumStoreFunctionLibrary.GetNewPetsForBonusReceivedModal
struct UVALUI_PremiumStoreFunctionLibrary_GetNewPetsForBonusReceivedModal_Params
{
public:
	struct FVAL_CharacterCustomization_PetPurchaseBonus PetPurchaseBonus;                                  // 0x0(0x148)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	TSet<struct FGuid>                           NewEntitlements;                                   // 0x148(0x50)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UVAL_CharacterCustomizationItem_Pet>> ReturnValue;                                       // 0x198(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ValeriaUI.VALUI_ProgressBarStyle.Apply
struct UVALUI_ProgressBarStyle_Apply_Params
{
public:
	class UProgressBar*                          ProgressBar;                                       // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ValeriaUI.VALUI_ProgressBar_Styled.SetProgressBarStyle
struct UVALUI_ProgressBar_Styled_SetProgressBarStyle_Params
{
public:
	class UVALUI_ProgressBarStyle*               NewStyle;                                          // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function ValeriaUI.VALUI_RadioSlider.TryIncrementPage
struct UVALUI_RadioSlider_TryIncrementPage_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ValeriaUI.VALUI_RadioSlider.TryDecrementPage
struct UVALUI_RadioSlider_TryDecrementPage_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function ValeriaUI.VALUI_RadioSlider.SetIndex
struct UVALUI_RadioSlider_SetIndex_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSkipSliderAnimation;                              // 0x4(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2660[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// DelegateFunction ValeriaUI.VALUI_RadioSlider.OnSliderWidgetCreated__DelegateSignature
struct UVALUI_RadioSlider_OnSliderWidgetCreated__DelegateSignature_Params
{
public:
	class UUserWidget*                           SliderWidget;                                      // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// DelegateFunction ValeriaUI.VALUI_RadioSlider.OnSliderChanged__DelegateSignature
struct UVALUI_RadioSlider_OnSliderChanged__DelegateSignature_Params
{
public:
	class UUserWidget*                           PreviousElementWidget;                             // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PreviousElementIndex;                              // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_266B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUserWidget*                           NewElementWidget;                                  // 0x10(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NewElementIndex;                                   // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_266C[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// DelegateFunction ValeriaUI.VALUI_RadioSlider.OnPageChanged__DelegateSignature
struct UVALUI_RadioSlider_OnPageChanged__DelegateSignature_Params
{
public:
	int32                                        PageIndex;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TotalNumPages;                                     // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// DelegateFunction ValeriaUI.VALUI_RadioSlider.OnElementWidgetCreated__DelegateSignature
struct UVALUI_RadioSlider_OnElementWidgetCreated__DelegateSignature_Params
{
public:
	class UUserWidget*                           ElementWidget;                                     // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ElementIndex;                                      // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2673[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function ValeriaUI.VALUI_RadioSlider.GetWidgetAtIndex
struct UVALUI_RadioSlider_GetWidgetAtIndex_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2679[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUserWidget*                           ReturnValue;                                       // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ValeriaUI.VALUI_RadioSlider.GetTotalNumPages
struct UVALUI_RadioSlider_GetTotalNumPages_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ValeriaUI.VALUI_RadioSlider.GetSliderWidget
struct UVALUI_RadioSlider_GetSliderWidget_Params
{
public:
	class UUserWidget*                           ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ValeriaUI.VALUI_RadioSlider.GetIndexFromWidget
struct UVALUI_RadioSlider_GetIndexFromWidget_Params
{
public:
	class UUserWidget*                           Widget;                                            // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Index;                                             // 0x8(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xC(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_268B[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// Function ValeriaUI.VALUI_RadioSlider.GetElementWidgetsTable
struct UVALUI_RadioSlider_GetElementWidgetsTable_Params
{
public:
	TMap<int32, class UUserWidget*>              ReturnValue;                                       // 0x0(0x50)(ConstParm, ExportObject, Parm, OutParm, ReturnParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ValeriaUI.VALUI_RadioSlider.GetCurrentPageIndex
struct UVALUI_RadioSlider_GetCurrentPageIndex_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ValeriaUI.VALUI_RadioSlider.GetCurrentIndex
struct UVALUI_RadioSlider_GetCurrentIndex_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function ValeriaUI.VALUI_RadioSlider.BuildElementsAndSlider
struct UVALUI_RadioSlider_BuildElementsAndSlider_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function ValeriaUI.VALUI_RichTextBlockStyle.ApplyToTextBlock
struct UVALUI_RichTextBlockStyle_ApplyToTextBlock_Params
{
public:
	class URichTextBlock*                        TextWidget;                                        // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ValeriaUI.VALUI_RichTextBlock_Styled.SetTextBlockStyle
struct UVALUI_RichTextBlock_Styled_SetTextBlockStyle_Params
{
public:
	class UVALUI_RichTextBlockStyle*             NewStyle;                                          // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ValeriaUI.VALUI_ScrollBoxStyle.ApplyToScrollBox
struct UVALUI_ScrollBoxStyle_ApplyToScrollBox_Params
{
public:
	class UScrollBox*                            ScrollBox;                                         // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ValeriaUI.VALUI_ScrollBox_Styled.SetScrollBoxStyle
struct UVALUI_ScrollBox_Styled_SetScrollBoxStyle_Params
{
public:
	class UVALUI_ScrollBoxStyle*                 NewStyle;                                          // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ValeriaUI.VALUI_SliderStyle.Apply
struct UVALUI_SliderStyle_Apply_Params
{
public:
	class USlider*                               Slider;                                            // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ValeriaUI.VALUI_Slider_Styled.SetSliderStyle
struct UVALUI_Slider_Styled_SetSliderStyle_Params
{
public:
	class UVALUI_SliderStyle*                    NewStyle;                                          // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// DelegateFunction ValeriaUI.VALUI_SocialPanelBase.ToggleDebugSimulation__DelegateSignature
struct UVALUI_SocialPanelBase_ToggleDebugSimulation__DelegateSignature_Params
{
public:
	bool                                         bDisplay;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ValeriaUI.VALUI_SocialPanelBase.GetDebugSimulationFlag
struct UVALUI_SocialPanelBase_GetDebugSimulationFlag_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ValeriaUI.VALUI_StateUserWidget_PregameHUD.SetOwner
struct UVALUI_StateUserWidget_PregameHUD_SetOwner_Params
{
public:
	class UVALUI_PregameUIManager*               Owner;                                             // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ValeriaUI.VALUI_StateUserWidget_PregameHUD.HandleOnLoginStateChanged
struct UVALUI_StateUserWidget_PregameHUD_HandleOnLoginStateChanged_Params
{
public:
	enum class EVALUI_LoginState                 NewState;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ValeriaUI.VALUI_StateUserWidget_PregameHUD.HandleOnLobbyStateChanged
struct UVALUI_StateUserWidget_PregameHUD_HandleOnLobbyStateChanged_Params
{
public:
	enum class EVALUI_LobbyState                 NewState;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function ValeriaUI.VALUI_StateUserWidget_PregameHUD.HandleOnFetchedServerStatus
struct UVALUI_StateUserWidget_PregameHUD_HandleOnFetchedServerStatus_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function ValeriaUI.VALUI_StateUserWidget_PregameHUD.HandleOnCharacterCreationStateChanged
struct UVALUI_StateUserWidget_PregameHUD_HandleOnCharacterCreationStateChanged_Params
{
public:
	enum class EVALUI_CharacterCreationState     NewState;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ValeriaUI.VALUI_StateUserWidget_PregameHUD.GetLobbyScreen
struct UVALUI_StateUserWidget_PregameHUD_GetLobbyScreen_Params
{
public:
	class UVALUI_LobbyScreenUserWidget*          ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ValeriaUI.VALUI_StateUserWidget_PregameHUD.GetCharacterCreationScreen
struct UVALUI_StateUserWidget_PregameHUD_GetCharacterCreationScreen_Params
{
public:
	class UVALUI_CharacterCreationScreenBase*    ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ValeriaUI.VALUI_StateUserWidget_PregameHUD.DisplayMatchmakingQueueNumber
struct UVALUI_StateUserWidget_PregameHUD_DisplayMatchmakingQueueNumber_Params
{
public:
	int32                                        Number;                                            // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ValeriaUI.VALUI_StateUserWidget_PregameHUD.DisplayMatchmakingQueueActive
struct UVALUI_StateUserWidget_PregameHUD_DisplayMatchmakingQueueActive_Params
{
public:
	bool                                         bActive;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function ValeriaUI.VALUI_StateUserWidget_PregameHUD.DisplayCharacterCreationMatchmaking
struct UVALUI_StateUserWidget_PregameHUD_DisplayCharacterCreationMatchmaking_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function ValeriaUI.VALUI_TabButtonHostBase.UnregisterTab
struct UVALUI_TabButtonHostBase_UnregisterTab_Params
{
public:
	class FName                                  TabName;                                           // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function ValeriaUI.VALUI_TabButtonHostBase.TrySetActiveTabName
struct UVALUI_TabButtonHostBase_TrySetActiveTabName_Params
{
public:
	class FName                                  TabName;                                           // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bForceSet;                                         // 0x8(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x9(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_26C3[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x80 (0x80 - 0x0)
// Function ValeriaUI.VALUI_TabButtonHostBase.TryGetTabInfo
struct UVALUI_TabButtonHostBase_TryGetTabInfo_Params
{
public:
	class FName                                  TabName;                                           // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVALUI_InstantiatedTabButtonInfo      OutInfo;                                           // 0x8(0x70)(Parm, OutParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x78(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_26C9[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// Function ValeriaUI.VALUI_TabButtonHostBase.SetTabButtonVisibility
struct UVALUI_TabButtonHostBase_SetTabButtonVisibility_Params
{
public:
	class FName                                  TabName;                                           // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESlateVisibility                  NewVisibility;                                     // 0x8(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_26CA[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x78 (0x78 - 0x0)
// Function ValeriaUI.VALUI_TabButtonHostBase.RemoveTabButton
struct UVALUI_TabButtonHostBase_RemoveTabButton_Params
{
public:
	class FName                                  TabName;                                           // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVALUI_InstantiatedTabButtonInfo      Info;                                              // 0x8(0x70)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// Function ValeriaUI.VALUI_TabButtonHostBase.RegisterNewTab
struct UVALUI_TabButtonHostBase_RegisterNewTab_Params
{
public:
	class FName                                  TabName;                                           // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  TabDisplayName;                                    // 0x8(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UButton*                               Button;                                            // 0x20(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                               AssociatedContent;                                 // 0x28(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             IconTexture;                                       // 0x30(0x30)(Parm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             IconSize;                                          // 0x60(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// DelegateFunction ValeriaUI.VALUI_TabButtonHostBase.OnDifferentActiveTabSet__DelegateSignature
struct UVALUI_TabButtonHostBase_OnDifferentActiveTabSet__DelegateSignature_Params
{
public:
	class UVALUI_TabButtonHostBase*              TabButtonHost;                                     // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ValeriaUI.VALUI_TabButtonHostBase.HandleDifferentActiveTabSet
struct UVALUI_TabButtonHostBase_HandleDifferentActiveTabSet_Params
{
public:
	class FName                                  TabName;                                           // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ValeriaUI.VALUI_TabButtonHostBase.GetTabNames
struct UVALUI_TabButtonHostBase_GetTabNames_Params
{
public:
	TArray<class FName>                          ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ValeriaUI.VALUI_TabButtonHostBase.GetActiveTabName
struct UVALUI_TabButtonHostBase_GetActiveTabName_Params
{
public:
	class FName                                  ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// Function ValeriaUI.VALUI_TabButtonHostBase.AddTabButton
struct UVALUI_TabButtonHostBase_AddTabButton_Params
{
public:
	class FName                                  TabName;                                           // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVALUI_InstantiatedTabButtonInfo      Info;                                              // 0x8(0x70)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ValeriaUI.VALUI_TabButtonInterface.SetIsActiveTabButton
struct IVALUI_TabButtonInterface_SetIsActiveTabButton_Params
{
public:
	bool                                         bIsActive;                                         // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ValeriaUI.VALUI_TextBlockStyle.ApplyToTextBlock
struct UVALUI_TextBlockStyle_ApplyToTextBlock_Params
{
public:
	class UTextBlock*                            TextWidget;                                        // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ValeriaUI.VALUI_TextBlock_Styled.SetTextBlockStyle
struct UVALUI_TextBlock_Styled_SetTextBlockStyle_Params
{
public:
	class UVALUI_TextBlockStyle*                 NewStyle;                                          // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ValeriaUI.VALUI_TileView_Styled.SetEntryWidth
struct UVALUI_TileView_Styled_SetEntryWidth_Params
{
public:
	float                                        NewWidth;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ValeriaUI.VALUI_TileView_Styled.SetEntryHeight
struct UVALUI_TileView_Styled_SetEntryHeight_Params
{
public:
	float                                        NewHeight;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ValeriaUI.VALUI_TileView_Styled.GetEntryWidth
struct UVALUI_TileView_Styled_GetEntryWidth_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ValeriaUI.VALUI_TileView_Styled.GetEntryHeight
struct UVALUI_TileView_Styled_GetEntryHeight_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ValeriaUI.VALUI_UButtonSlot.SetVerticalAlignment
struct UVALUI_UButtonSlot_SetVerticalAlignment_Params
{
public:
	enum class EVerticalAlignment                InVerticalAlignment;                               // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ValeriaUI.VALUI_UButtonSlot.SetPadding
struct UVALUI_UButtonSlot_SetPadding_Params
{
public:
	struct FMargin                               InPadding;                                         // 0x0(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ValeriaUI.VALUI_UButtonSlot.SetHorizontalAlignment
struct UVALUI_UButtonSlot_SetHorizontalAlignment_Params
{
public:
	enum class EHorizontalAlignment              InHorizontalAlignment;                             // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function ValeriaUI.VALUI_UButton_Styled.VisualRelease
struct UVALUI_UButton_Styled_VisualRelease_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ValeriaUI.VALUI_UButton_Styled.VisualPress
struct UVALUI_UButton_Styled_VisualPress_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function ValeriaUI.VALUI_UButton_Styled.SetTouchMethod
struct UVALUI_UButton_Styled_SetTouchMethod_Params
{
public:
	enum class EButtonTouchMethod                InTouchMethod;                                     // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ValeriaUI.VALUI_UButton_Styled.SetPressMethod
struct UVALUI_UButton_Styled_SetPressMethod_Params
{
public:
	enum class EButtonPressMethod                InPressMethod;                                     // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ValeriaUI.VALUI_UButton_Styled.SetClickMethod
struct UVALUI_UButton_Styled_SetClickMethod_Params
{
public:
	enum class EButtonClickMethod                InClickMethod;                                     // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x3F0 (0x3F0 - 0x0)
// Function ValeriaUI.VALUI_UButton_Styled.SetButtonStyle
struct UVALUI_UButton_Styled_SetButtonStyle_Params
{
public:
	struct FButtonStyle                          WidgetStyle;                                       // 0x0(0x3F0)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ValeriaUI.VALUI_UButton_Styled.SetButtonConfig
struct UVALUI_UButton_Styled_SetButtonConfig_Params
{
public:
	class UVALUI_ButtonStyle*                    NewButtonStyle;                                    // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x190 (0x190 - 0x0)
// Function ValeriaUI.VALUI_UButton_Styled.OnMouseButtonClicked
struct UVALUI_UButton_Styled_OnMouseButtonClicked_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x40)(Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FPointerEvent                         InMouseEvent;                                      // 0x40(0x98)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FEventReply                           ReturnValue;                                       // 0xD8(0xB8)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ValeriaUI.VALUI_WidgetBlueprintLibrary.UpdateEntryWidgetTypeOnListView
struct UVALUI_WidgetBlueprintLibrary_UpdateEntryWidgetTypeOnListView_Params
{
public:
	class UListViewBase*                         ListView;                                          // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UUserWidget>               EntryWidgetType;                                   // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ValeriaUI.VALUI_WidgetBlueprintLibrary.GetOuterForConstructingNativeWidget
struct UVALUI_WidgetBlueprintLibrary_GetOuterForConstructingNativeWidget_Params
{
public:
	class UUserWidget*                           HostUserWidget;                                    // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ValeriaUI.VALUI_WidgetBlueprintLibrary.FindOuterMostWidget
struct UVALUI_WidgetBlueprintLibrary_FindOuterMostWidget_Params
{
public:
	class UWidget*                               BaseWidget;                                        // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                               ReturnValue;                                       // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ValeriaUI.VALUI_WidgetBlueprintLibrary.ColorToHexString
struct UVALUI_WidgetBlueprintLibrary_ColorToHexString_Params
{
public:
	struct FLinearColor                          Color;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x178 (0x178 - 0x0)
// Function ValeriaUI.VALUI_WidgetBlueprintLibrary.CaptureMouseWithHighPrecision
struct UVALUI_WidgetBlueprintLibrary_CaptureMouseWithHighPrecision_Params
{
public:
	struct FEventReply                           Reply;                                             // 0x0(0xB8)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UWidget*                               CapturingWidget;                                   // 0xB8(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEventReply                           ReturnValue;                                       // 0xC0(0xB8)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

}
}


