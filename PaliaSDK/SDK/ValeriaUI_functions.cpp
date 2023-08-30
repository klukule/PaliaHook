#pragma once

// Dumped with Dumper-7!

#include "SDK.hpp"

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function ValeriaUI.BaitUserWidget.ShowAmmoType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EAmmoType               AmmoType                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBaitUserWidget::ShowAmmoType(enum class EAmmoType InAmmoType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaitUserWidget", "ShowAmmoType");

	Params::UBaitUserWidget_ShowAmmoType_Params Parms{};

	Parms.AmmoType = InAmmoType;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.BaitUserWidget.OnShown
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// enum class EAmmoType               AmmoType                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBaitUserWidget::OnShown(enum class EAmmoType InAmmoType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaitUserWidget", "OnShown");

	Params::UBaitUserWidget_OnShown_Params Parms{};

	Parms.AmmoType = InAmmoType;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.BaitUserWidget.OnRightMouseReleased
// (Final, Native, Private, BlueprintCallable)
// Parameters:

void UBaitUserWidget::OnRightMouseReleased()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaitUserWidget", "OnRightMouseReleased");

	Params::UBaitUserWidget_OnRightMouseReleased_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.BaitUserWidget.OnHidden
// (Native, Event, Protected, BlueprintEvent)
// Parameters:

void UBaitUserWidget::OnHidden()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaitUserWidget", "OnHidden");

	Params::UBaitUserWidget_OnHidden_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.BaitUserWidget.OnBaitSelected
// (Final, Native, Private, BlueprintCallable)
// Parameters:
// struct FValeriaItem                baitItem                                                         (Parm, NativeAccessSpecifierPublic)

void UBaitUserWidget::OnBaitSelected(const struct FValeriaItem& InbaitItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaitUserWidget", "OnBaitSelected");

	Params::UBaitUserWidget_OnBaitSelected_Params Parms{};

	Parms.baitItem = InbaitItem;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.BaitUserWidget.EndBaitSelection
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBaitUserWidget::EndBaitSelection()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaitUserWidget", "EndBaitSelection");

	Params::UBaitUserWidget_EndBaitSelection_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.BookViewerWidget.MarkPageAsRead
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBookViewerWidget::MarkPageAsRead(int32 InIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BookViewerWidget", "MarkPageAsRead");

	Params::UBookViewerWidget_MarkPageAsRead_Params Parms{};

	Parms.Index = InIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.BookViewerWidget.GetTitle
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText UBookViewerWidget::GetTitle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BookViewerWidget", "GetTitle");

	Params::UBookViewerWidget_GetTitle_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ValeriaUI.BookViewerWidget.GetSubTitle
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText UBookViewerWidget::GetSubTitle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BookViewerWidget", "GetSubTitle");

	Params::UBookViewerWidget_GetSubTitle_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ValeriaUI.BookViewerWidget.GetNumberOfPages
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UBookViewerWidget::GetNumberOfPages()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BookViewerWidget", "GetNumberOfPages");

	Params::UBookViewerWidget_GetNumberOfPages_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ValeriaUI.BookViewerWidget.GetContentForPage
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

class FText UBookViewerWidget::GetContentForPage(int32 InIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BookViewerWidget", "GetContentForPage");

	Params::UBookViewerWidget_GetContentForPage_Params Parms{};

	Parms.Index = InIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ValeriaUI.DetailUserWidget.UpdateDetail
// (Native, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UVAL_ItemTypeDefinitionAsset>ItemType                                                         (ConstParm, Parm, OutParm, ReferenceParm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UDetailUserWidget::UpdateDetail(TSoftObjectPtr<class UVAL_ItemTypeDefinitionAsset>& InItemType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DetailUserWidget", "UpdateDetail");

	Params::UDetailUserWidget_UpdateDetail_Params Parms{};

	Parms.ItemType = InItemType;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ValeriaUI.VALUI_LoadingScreenUserWidget.ShowLoadingScreenBackground
// (Event, Public, BlueprintEvent)
// Parameters:

void UVALUI_LoadingScreenUserWidget::ShowLoadingScreenBackground()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_LoadingScreenUserWidget", "ShowLoadingScreenBackground");

	Params::UVALUI_LoadingScreenUserWidget_ShowLoadingScreenBackground_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_LoadingScreenUserWidget.ShowFadeToBlack
// (Event, Public, BlueprintEvent)
// Parameters:

void UVALUI_LoadingScreenUserWidget::ShowFadeToBlack()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_LoadingScreenUserWidget", "ShowFadeToBlack");

	Params::UVALUI_LoadingScreenUserWidget_ShowFadeToBlack_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_LoadingScreenUserWidget.HandleSetLoadingScreenTip
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FPaliaLoadingScreenTip      Tip                                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UVALUI_LoadingScreenUserWidget::HandleSetLoadingScreenTip(struct FPaliaLoadingScreenTip& InTip)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_LoadingScreenUserWidget", "HandleSetLoadingScreenTip");

	Params::UVALUI_LoadingScreenUserWidget_HandleSetLoadingScreenTip_Params Parms{};

	Parms.Tip = InTip;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_LoadingScreenUserWidget.HandleSetBackgroundImage
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UTexture2D*                  Texture                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_LoadingScreenUserWidget::HandleSetBackgroundImage(class UTexture2D* InTexture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_LoadingScreenUserWidget", "HandleSetBackgroundImage");

	Params::UVALUI_LoadingScreenUserWidget_HandleSetBackgroundImage_Params Parms{};

	Parms.Texture = InTexture;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_LoadingScreenUserWidget.HandleOnPawnChanged
// (Final, Native, Protected)
// Parameters:
// class APawn*                       Pawn                                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_LoadingScreenUserWidget::HandleOnPawnChanged(class APawn* InPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_LoadingScreenUserWidget", "HandleOnPawnChanged");

	Params::UVALUI_LoadingScreenUserWidget_HandleOnPawnChanged_Params Parms{};

	Parms.Pawn = InPawn;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.MailboxViewerUserWidget.UpdateMailFilter
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EMailboxViewerFilter    Filter                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMailboxViewerUserWidget::UpdateMailFilter(enum class EMailboxViewerFilter InFilter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MailboxViewerUserWidget", "UpdateMailFilter");

	Params::UMailboxViewerUserWidget_UpdateMailFilter_Params Parms{};

	Parms.Filter = InFilter;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.MailboxViewerUserWidget.TryCollectReward
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              RewardIndex                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMailboxViewerUserWidget::TryCollectReward(int32 InIndex, int32 InRewardIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MailboxViewerUserWidget", "TryCollectReward");

	Params::UMailboxViewerUserWidget_TryCollectReward_Params Parms{};

	Parms.Index = InIndex;
	Parms.RewardIndex = InRewardIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ValeriaUI.MailboxViewerUserWidget.RefreshMailMessages
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               AllowRemoval                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMailboxViewerUserWidget::RefreshMailMessages(bool InAllowRemoval)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MailboxViewerUserWidget", "RefreshMailMessages");

	Params::UMailboxViewerUserWidget_RefreshMailMessages_Params Parms{};

	Parms.AllowRemoval = InAllowRemoval;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.MailboxViewerUserWidget.OnVillagerMailChanged
// (Final, Native, Private)
// Parameters:
// class UVillagerMailInboxComponent* VillagerMail                                                     (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMailboxViewerUserWidget::OnVillagerMailChanged(class UVillagerMailInboxComponent* InVillagerMail)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MailboxViewerUserWidget", "OnVillagerMailChanged");

	Params::UMailboxViewerUserWidget_OnVillagerMailChanged_Params Parms{};

	Parms.VillagerMail = InVillagerMail;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.MailboxViewerUserWidget.OnPlayerToPlayerMailSuccess
// (Final, Native, Private)
// Parameters:
// struct FMailbox                    Mailbox                                                          (ConstParm, Parm, NativeAccessSpecifierPublic)

void UMailboxViewerUserWidget::OnPlayerToPlayerMailSuccess(const struct FMailbox& InMailbox)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MailboxViewerUserWidget", "OnPlayerToPlayerMailSuccess");

	Params::UMailboxViewerUserWidget_OnPlayerToPlayerMailSuccess_Params Parms{};

	Parms.Mailbox = InMailbox;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.MailboxViewerUserWidget.OnPlayerToPlayerMailFailed
// (Final, Native, Private)
// Parameters:
// class FString                      Error                                                            (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMailboxViewerUserWidget::OnPlayerToPlayerMailFailed(const class FString& InError)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MailboxViewerUserWidget", "OnPlayerToPlayerMailFailed");

	Params::UMailboxViewerUserWidget_OnPlayerToPlayerMailFailed_Params Parms{};

	Parms.Error = InError;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.MailboxViewerUserWidget.OnMailLoaded
// (Event, Public, BlueprintEvent)
// Parameters:

void UMailboxViewerUserWidget::OnMailLoaded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MailboxViewerUserWidget", "OnMailLoaded");

	Params::UMailboxViewerUserWidget_OnMailLoaded_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.MailboxViewerUserWidget.OnMailChanged
// (Event, Public, BlueprintEvent)
// Parameters:

void UMailboxViewerUserWidget::OnMailChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MailboxViewerUserWidget", "OnMailChanged");

	Params::UMailboxViewerUserWidget_OnMailChanged_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.MailboxViewerUserWidget.MarkAsRead
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMailboxViewerUserWidget::MarkAsRead(int32 InIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MailboxViewerUserWidget", "MarkAsRead");

	Params::UMailboxViewerUserWidget_MarkAsRead_Params Parms{};

	Parms.Index = InIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.MailboxViewerUserWidget.LoadMail
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UMailboxViewerUserWidget::LoadMail()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MailboxViewerUserWidget", "LoadMail");

	Params::UMailboxViewerUserWidget_LoadMail_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.MailboxViewerUserWidget.HideMessage
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMailboxViewerUserWidget::HideMessage(int32 InIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MailboxViewerUserWidget", "HideMessage");

	Params::UMailboxViewerUserWidget_HideMessage_Params Parms{};

	Parms.Index = InIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.MailboxViewerUserWidget.GetNumberOfNonHiddenMessages
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UMailboxViewerUserWidget::GetNumberOfNonHiddenMessages()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MailboxViewerUserWidget", "GetNumberOfNonHiddenMessages");

	Params::UMailboxViewerUserWidget_GetNumberOfNonHiddenMessages_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ValeriaUI.MailboxViewerUserWidget.GetNumberOfMessagesForFilter
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EMailboxViewerFilter    Filter                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UMailboxViewerUserWidget::GetNumberOfMessagesForFilter(enum class EMailboxViewerFilter InFilter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MailboxViewerUserWidget", "GetNumberOfMessagesForFilter");

	Params::UMailboxViewerUserWidget_GetNumberOfMessagesForFilter_Params Parms{};

	Parms.Filter = InFilter;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ValeriaUI.MailboxViewerUserWidget.GetNumberOfMessages
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UMailboxViewerUserWidget::GetNumberOfMessages()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MailboxViewerUserWidget", "GetNumberOfMessages");

	Params::UMailboxViewerUserWidget_GetNumberOfMessages_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ValeriaUI.MailboxViewerUserWidget.GetNextNonHiddenMessage
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              StartIndex                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UMailboxViewerUserWidget::GetNextNonHiddenMessage(int32 InStartIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MailboxViewerUserWidget", "GetNextNonHiddenMessage");

	Params::UMailboxViewerUserWidget_GetNextNonHiddenMessage_Params Parms{};

	Parms.StartIndex = InStartIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ValeriaUI.MailboxViewerUserWidget.GetMailMessage
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMailMessageWidgetData      ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FMailMessageWidgetData UMailboxViewerUserWidget::GetMailMessage(int32 InIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MailboxViewerUserWidget", "GetMailMessage");

	Params::UMailboxViewerUserWidget_GetMailMessage_Params Parms{};

	Parms.Index = InIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ValeriaUI.MailboxViewerUserWidget.GetIndexOfMailMessage
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMailMessageWidgetData      Data                                                             (Parm, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UMailboxViewerUserWidget::GetIndexOfMailMessage(const struct FMailMessageWidgetData& InData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MailboxViewerUserWidget", "GetIndexOfMailMessage");

	Params::UMailboxViewerUserWidget_GetIndexOfMailMessage_Params Parms{};

	Parms.Data = InData;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ValeriaUI.MailboxViewerUserWidget.GetCurrentFilter
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EMailboxViewerFilter    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EMailboxViewerFilter UMailboxViewerUserWidget::GetCurrentFilter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MailboxViewerUserWidget", "GetCurrentFilter");

	Params::UMailboxViewerUserWidget_GetCurrentFilter_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ValeriaUI.ValeriaViewportClient.ReceiveOnFadeOutBlack
// (Final, Native, Protected)
// Parameters:

void UValeriaViewportClient::ReceiveOnFadeOutBlack()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ValeriaViewportClient", "ReceiveOnFadeOutBlack");

	Params::UValeriaViewportClient_ReceiveOnFadeOutBlack_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.ValeriaViewportClient.HandleOnFadeOutBlack
// (Final, Native, Protected)
// Parameters:
// float                              DurationSeconds                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UValeriaViewportClient::HandleOnFadeOutBlack(float InDurationSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ValeriaViewportClient", "HandleOnFadeOutBlack");

	Params::UValeriaViewportClient_HandleOnFadeOutBlack_Params Parms{};

	Parms.DurationSeconds = InDurationSeconds;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.ValeriaViewportClient.HandleOnFadeInBlack
// (Final, Native, Protected)
// Parameters:
// float                              DurationSeconds                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UValeriaViewportClient::HandleOnFadeInBlack(float InDurationSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ValeriaViewportClient", "HandleOnFadeInBlack");

	Params::UValeriaViewportClient_HandleOnFadeInBlack_Params Parms{};

	Parms.DurationSeconds = InDurationSeconds;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.VALUI_AnnouncementsMessageModalDialog.SetURL
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      NewURL                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_AnnouncementsMessageModalDialog::SetURL(const class FString& InNewURL)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_AnnouncementsMessageModalDialog", "SetURL");

	Params::UVALUI_AnnouncementsMessageModalDialog_SetURL_Params Parms{};

	Parms.NewURL = InNewURL;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.VALUI_AnnouncementsMessageModalDialog.RefreshMessageFromWeb
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UVALUI_AnnouncementsMessageModalDialog::RefreshMessageFromWeb()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_AnnouncementsMessageModalDialog", "RefreshMessageFromWeb");

	Params::UVALUI_AnnouncementsMessageModalDialog_RefreshMessageFromWeb_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// DelegateFunction ValeriaUI.VALUI_AnnouncementsMessageModalDialog.OnConfirmDelegate__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:

void UVALUI_AnnouncementsMessageModalDialog::OnConfirmDelegate__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_AnnouncementsMessageModalDialog", "OnConfirmDelegate__DelegateSignature");

	Params::UVALUI_AnnouncementsMessageModalDialog_OnConfirmDelegate__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_AnnouncementsMessageModalDialog.NotifyConfirmComplete
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UVALUI_AnnouncementsMessageModalDialog::NotifyConfirmComplete()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_AnnouncementsMessageModalDialog", "NotifyConfirmComplete");

	Params::UVALUI_AnnouncementsMessageModalDialog_NotifyConfirmComplete_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.VALUI_AnnouncementsMessageModalDialog.HandleRefreshedMessageFromWeb
// (Event, Protected, BlueprintEvent)
// Parameters:
// class FString                      Message                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_AnnouncementsMessageModalDialog::HandleRefreshedMessageFromWeb(const class FString& InMessage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_AnnouncementsMessageModalDialog", "HandleRefreshedMessageFromWeb");

	Params::UVALUI_AnnouncementsMessageModalDialog_HandleRefreshedMessageFromWeb_Params Parms{};

	Parms.Message = InMessage;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VAL_AsyncActionRequestStorefront.RequestStorefront
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class ULocalPlayer*                LP                                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UVAL_AsyncActionRequestStorefront*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UVAL_AsyncActionRequestStorefront* UVAL_AsyncActionRequestStorefront::RequestStorefront(class ULocalPlayer* InLP)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VAL_AsyncActionRequestStorefront", "RequestStorefront");

	Params::UVAL_AsyncActionRequestStorefront_RequestStorefront_Params Parms{};

	Parms.LP = InLP;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// DelegateFunction ValeriaUI.VAL_AsyncActionRequestStorefront.OnRequestStorefrontSuccess__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// struct FVALUI_PremiumStorefrontResponseResponse                                                         (Parm, NativeAccessSpecifierPublic)

void UVAL_AsyncActionRequestStorefront::OnRequestStorefrontSuccess__DelegateSignature(const struct FVALUI_PremiumStorefrontResponse& InResponse)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VAL_AsyncActionRequestStorefront", "OnRequestStorefrontSuccess__DelegateSignature");

	Params::UVAL_AsyncActionRequestStorefront_OnRequestStorefrontSuccess__DelegateSignature_Params Parms{};

	Parms.Response = InResponse;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction ValeriaUI.VAL_AsyncActionRequestStorefront.OnRequestStorefrontFailure__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:

void UVAL_AsyncActionRequestStorefront::OnRequestStorefrontFailure__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VAL_AsyncActionRequestStorefront", "OnRequestStorefrontFailure__DelegateSignature");

	Params::UVAL_AsyncActionRequestStorefront_OnRequestStorefrontFailure__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_AsyncUpdateLoadout.UpdateLoadout
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UVALUI_CharacterCustomizationPanelBase*CustPanel                                                        (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVAL_CharacterCustomizationLoadoutNewLoadout                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FVALUI_CharCustomization_UpdateLoadoutContextPayloadContextPayload                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UVALUI_AsyncUpdateLoadout*   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UVALUI_AsyncUpdateLoadout* UVALUI_AsyncUpdateLoadout::UpdateLoadout(class UVALUI_CharacterCustomizationPanelBase* InCustPanel, struct FVAL_CharacterCustomizationLoadout& InNewLoadout, struct FVALUI_CharCustomization_UpdateLoadoutContextPayload& InContextPayload)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_AsyncUpdateLoadout", "UpdateLoadout");

	Params::UVALUI_AsyncUpdateLoadout_UpdateLoadout_Params Parms{};

	Parms.CustPanel = InCustPanel;
	Parms.NewLoadout = InNewLoadout;
	Parms.ContextPayload = InContextPayload;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// DelegateFunction ValeriaUI.VALUI_AsyncUpdateLoadout.OnUpdateLoadoutFailed__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams)
// Parameters:
// struct FVALUI_CharCustomization_UpdateLoadoutContextPayloadContextPayload                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UVALUI_AsyncUpdateLoadout::OnUpdateLoadoutFailed__DelegateSignature(struct FVALUI_CharCustomization_UpdateLoadoutContextPayload& InContextPayload)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_AsyncUpdateLoadout", "OnUpdateLoadoutFailed__DelegateSignature");

	Params::UVALUI_AsyncUpdateLoadout_OnUpdateLoadoutFailed__DelegateSignature_Params Parms{};

	Parms.ContextPayload = InContextPayload;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction ValeriaUI.VALUI_AsyncUpdateLoadout.OnUpdateLoadoutCompleted__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams)
// Parameters:
// class UVALUI_CharacterCustomizationPanelBase*CharacterCustomizationPanel                                      (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVALUI_CharCustomization_UpdateLoadoutContextPayloadContextPayload                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UVALUI_AsyncUpdateLoadout::OnUpdateLoadoutCompleted__DelegateSignature(class UVALUI_CharacterCustomizationPanelBase* InCharacterCustomizationPanel, struct FVALUI_CharCustomization_UpdateLoadoutContextPayload& InContextPayload)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_AsyncUpdateLoadout", "OnUpdateLoadoutCompleted__DelegateSignature");

	Params::UVALUI_AsyncUpdateLoadout_OnUpdateLoadoutCompleted__DelegateSignature_Params Parms{};

	Parms.CharacterCustomizationPanel = InCharacterCustomizationPanel;
	Parms.ContextPayload = InContextPayload;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_BorderStyle.Apply
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// class UBorder*                     Border                                                           (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_BorderStyle::Apply(class UBorder* InBorder)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_BorderStyle", "Apply");

	Params::UVALUI_BorderStyle_Apply_Params Parms{};

	Parms.Border = InBorder;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.VALUI_Border_Styled.SetBorderStyle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UVALUI_BorderStyle*          NewStyle                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_Border_Styled::SetBorderStyle(class UVALUI_BorderStyle* InNewStyle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_Border_Styled", "SetBorderStyle");

	Params::UVALUI_Border_Styled_SetBorderStyle_Params Parms{};

	Parms.NewStyle = InNewStyle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.VALUI_BoundInputActionStateWidget.UpdateInputActionState_Implementation
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FKey                        Key                                                              (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ETriggerEvent           LatestTriggerEvent                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              OngoingDuration                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              HoldTimeThreshold                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_BoundInputActionStateWidget::UpdateInputActionState_Implementation(struct FKey& InKey, enum class ETriggerEvent InLatestTriggerEvent, float InOngoingDuration, float InHoldTimeThreshold)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_BoundInputActionStateWidget", "UpdateInputActionState_Implementation");

	Params::UVALUI_BoundInputActionStateWidget_UpdateInputActionState_Implementation_Params Parms{};

	Parms.Key = InKey;
	Parms.LatestTriggerEvent = InLatestTriggerEvent;
	Parms.OngoingDuration = InOngoingDuration;
	Parms.HoldTimeThreshold = InHoldTimeThreshold;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_BoundInputActionStateWidget.SetInputAction
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UInputAction*                InInputAction                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_BoundInputActionStateWidget::SetInputAction(class UInputAction* InInInputAction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_BoundInputActionStateWidget", "SetInputAction");

	Params::UVALUI_BoundInputActionStateWidget_SetInputAction_Params Parms{};

	Parms.InInputAction = InInInputAction;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.VALUI_ButtonStyle.Apply
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// class UVALUI_Button_Styled*        Button                                                           (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_ButtonStyle::Apply(class UVALUI_Button_Styled* InButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_ButtonStyle", "Apply");

	Params::UVALUI_ButtonStyle_Apply_Params Parms{};

	Parms.Button = InButton;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.VALUI_Button_Styled.ShowCursor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                     InCursor                                                         (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVALUI_Button_Styled::ShowCursor(class UWidget* InInCursor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_Button_Styled", "ShowCursor");

	Params::UVALUI_Button_Styled_ShowCursor_Params Parms{};

	Parms.InCursor = InInCursor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ValeriaUI.VALUI_Button_Styled.SetButtonStyle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UVALUI_ButtonStyle*          NewStyle                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_Button_Styled::SetButtonStyle(class UVALUI_ButtonStyle* InNewStyle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_Button_Styled", "SetButtonStyle");

	Params::UVALUI_Button_Styled_SetButtonStyle_Params Parms{};

	Parms.NewStyle = InNewStyle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.VALUI_Button_Styled.SetButtonFocus
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UVALUI_Button_Styled::SetButtonFocus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_Button_Styled", "SetButtonFocus");

	Params::UVALUI_Button_Styled_SetButtonFocus_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.VALUI_Button_Styled.RemoveCursor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                     InCursor                                                         (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_Button_Styled::RemoveCursor(class UWidget* InInCursor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_Button_Styled", "RemoveCursor");

	Params::UVALUI_Button_Styled_RemoveCursor_Params Parms{};

	Parms.InCursor = InInCursor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.VALUI_Button_Styled.PreConstruct
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_Button_Styled::PreConstruct(bool InIsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_Button_Styled", "PreConstruct");

	Params::UVALUI_Button_Styled_PreConstruct_Params Parms{};

	Parms.IsDesignTime = InIsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_Button_Styled.OnInitialized
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:

void UVALUI_Button_Styled::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_Button_Styled", "OnInitialized");

	Params::UVALUI_Button_Styled_OnInitialized_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_Button_Styled.HasFocus
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVALUI_Button_Styled::HasFocus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_Button_Styled", "HasFocus");

	Params::UVALUI_Button_Styled_HasFocus_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ValeriaUI.VALUI_Button_Styled.HandleReleased
// (Native, Protected)
// Parameters:

void UVALUI_Button_Styled::HandleReleased()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_Button_Styled", "HandleReleased");

	Params::UVALUI_Button_Styled_HandleReleased_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.VALUI_Button_Styled.HandlePressed
// (Native, Protected)
// Parameters:

void UVALUI_Button_Styled::HandlePressed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_Button_Styled", "HandlePressed");

	Params::UVALUI_Button_Styled_HandlePressed_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.VALUI_Button_Styled.Destruct
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:

void UVALUI_Button_Styled::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_Button_Styled", "Destruct");

	Params::UVALUI_Button_Styled_Destruct_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_Button_Styled.Construct
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:

void UVALUI_Button_Styled::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_Button_Styled", "Construct");

	Params::UVALUI_Button_Styled_Construct_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_Button_Styled_WithBG.HandleUnhovered
// (Native, Protected)
// Parameters:

void UVALUI_Button_Styled_WithBG::HandleUnhovered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_Button_Styled_WithBG", "HandleUnhovered");

	Params::UVALUI_Button_Styled_WithBG_HandleUnhovered_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.VALUI_Button_Styled_WithBG.HandleHovered
// (Native, Protected)
// Parameters:

void UVALUI_Button_Styled_WithBG::HandleHovered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_Button_Styled_WithBG", "HandleHovered");

	Params::UVALUI_Button_Styled_WithBG_HandleHovered_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.VALUI_NameValidator.IsNameValid
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// class FString                      InCharacterName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVALUI_NameValidator::IsNameValid(const class FString& InInCharacterName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_NameValidator", "IsNameValid");

	Params::UVALUI_NameValidator_IsNameValid_Params Parms{};

	Parms.InCharacterName = InInCharacterName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ValeriaUI.VALUI_CharacterCreationScreenBase.SetEnableContinueButton
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bEnable                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_CharacterCreationScreenBase::SetEnableContinueButton(bool InbEnable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_CharacterCreationScreenBase", "SetEnableContinueButton");

	Params::UVALUI_CharacterCreationScreenBase_SetEnableContinueButton_Params Parms{};

	Parms.bEnable = InbEnable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_CharacterCreationScreenBase.SetEnableAllButtons
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bEnable                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_CharacterCreationScreenBase::SetEnableAllButtons(bool InbEnable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_CharacterCreationScreenBase", "SetEnableAllButtons");

	Params::UVALUI_CharacterCreationScreenBase_SetEnableAllButtons_Params Parms{};

	Parms.bEnable = InbEnable;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction ValeriaUI.VALUI_CharacterCreationScreenBase.OnCommitCharacter__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// struct FVALDTOS_MetaCharacterFormatCommitedCharacter                                                (Parm, NativeAccessSpecifierPublic)

void UVALUI_CharacterCreationScreenBase::OnCommitCharacter__DelegateSignature(const struct FVALDTOS_MetaCharacterFormat& InCommitedCharacter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_CharacterCreationScreenBase", "OnCommitCharacter__DelegateSignature");

	Params::UVALUI_CharacterCreationScreenBase_OnCommitCharacter__DelegateSignature_Params Parms{};

	Parms.CommitedCharacter = InCommitedCharacter;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction ValeriaUI.VALUI_CharacterCreationScreenBase.OnBodyTypeSelectionConfirm__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:

void UVALUI_CharacterCreationScreenBase::OnBodyTypeSelectionConfirm__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_CharacterCreationScreenBase", "OnBodyTypeSelectionConfirm__DelegateSignature");

	Params::UVALUI_CharacterCreationScreenBase_OnBodyTypeSelectionConfirm__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction ValeriaUI.VALUI_CharacterCreationScreenBase.OnBodyTypeSelectionChange__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// bool                               bFirstSelection                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_CharacterCreationScreenBase::OnBodyTypeSelectionChange__DelegateSignature(bool InbFirstSelection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_CharacterCreationScreenBase", "OnBodyTypeSelectionChange__DelegateSignature");

	Params::UVALUI_CharacterCreationScreenBase_OnBodyTypeSelectionChange__DelegateSignature_Params Parms{};

	Parms.bFirstSelection = InbFirstSelection;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_CharacterCreationScreenBase.HandleCharacterNameValidityResponse
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FVALUI_CharacterNameValidityResponseResponse                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UVALUI_CharacterCreationScreenBase::HandleCharacterNameValidityResponse(struct FVALUI_CharacterNameValidityResponse& InResponse)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_CharacterCreationScreenBase", "HandleCharacterNameValidityResponse");

	Params::UVALUI_CharacterCreationScreenBase_HandleCharacterNameValidityResponse_Params Parms{};

	Parms.Response = InResponse;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_CharacterCreationScreenBase.HandleCharacterNameChanged
// (Final, Native, Protected, HasOutParams, BlueprintCallable)
// Parameters:
// class FText                        InCharacterName                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// enum class EVAL_CharacterNameType  InCharacterNameType                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_CharacterCreationScreenBase::HandleCharacterNameChanged(class FText& InInCharacterName, enum class EVAL_CharacterNameType InInCharacterNameType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_CharacterCreationScreenBase", "HandleCharacterNameChanged");

	Params::UVALUI_CharacterCreationScreenBase_HandleCharacterNameChanged_Params Parms{};

	Parms.InCharacterName = InInCharacterName;
	Parms.InCharacterNameType = InInCharacterNameType;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.VALUI_CharacterCreationScreenBase.GetAllowedCustomizationItems
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TSet<TSoftObjectPtr<class UVAL_CharacterCustomizationItemBase>>ReturnValue                                                      (Parm, OutParm, ReturnParm, UObjectWrapper, NativeAccessSpecifierPublic)

TSet<TSoftObjectPtr<class UVAL_CharacterCustomizationItemBase>> UVALUI_CharacterCreationScreenBase::GetAllowedCustomizationItems()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_CharacterCreationScreenBase", "GetAllowedCustomizationItems");

	Params::UVALUI_CharacterCreationScreenBase_GetAllowedCustomizationItems_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ValeriaUI.VALUI_CharacterCreationStatics.IsCharacterNameValidityResponseValid
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVALUI_CharacterNameValidityResponseResponse                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVALUI_CharacterCreationStatics::IsCharacterNameValidityResponseValid(struct FVALUI_CharacterNameValidityResponse& InResponse)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_CharacterCreationStatics", "IsCharacterNameValidityResponseValid");

	Params::UVALUI_CharacterCreationStatics_IsCharacterNameValidityResponseValid_Params Parms{};

	Parms.Response = InResponse;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ValeriaUI.VALUI_CharacterCustomizationPanelBase.SetPreviewCharacterActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_CharacterCustomizationPanelBase::SetPreviewCharacterActor(class AActor* InActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_CharacterCustomizationPanelBase", "SetPreviewCharacterActor");

	Params::UVALUI_CharacterCustomizationPanelBase_SetPreviewCharacterActor_Params Parms{};

	Parms.Actor = InActor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.VALUI_CharacterCustomizationPanelBase.PopulateLoadoutSlotMap
// (Event, Protected, BlueprintEvent)
// Parameters:

void UVALUI_CharacterCustomizationPanelBase::PopulateLoadoutSlotMap()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_CharacterCustomizationPanelBase", "PopulateLoadoutSlotMap");

	Params::UVALUI_CharacterCustomizationPanelBase_PopulateLoadoutSlotMap_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_CharacterCustomizationPanelBase.HandleOnAllLoadoutSlotItemsGenerated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UVALUI_CharacterCustomizationPanelBase::HandleOnAllLoadoutSlotItemsGenerated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_CharacterCustomizationPanelBase", "HandleOnAllLoadoutSlotItemsGenerated");

	Params::UVALUI_CharacterCustomizationPanelBase_HandleOnAllLoadoutSlotItemsGenerated_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_CharacterCustomizationPanelBase.HandleLoadoutUpdated
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FVALUI_CharCustomization_UpdateLoadoutContextPayloadContextPayload                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UVALUI_CharacterCustomizationPanelBase::HandleLoadoutUpdated(struct FVALUI_CharCustomization_UpdateLoadoutContextPayload& InContextPayload)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_CharacterCustomizationPanelBase", "HandleLoadoutUpdated");

	Params::UVALUI_CharacterCustomizationPanelBase_HandleLoadoutUpdated_Params Parms{};

	Parms.ContextPayload = InContextPayload;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_CharacterCustomizationPanelBase.HandleLoadoutSlotItemsGenerated
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FName                        LoadoutSlotName                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVALUI_CharCustomization_LoadoutSlotDataLoadoutSlotData                                                  (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UVALUI_CharacterCustomizationPanelBase::HandleLoadoutSlotItemsGenerated(class FName& InLoadoutSlotName, struct FVALUI_CharCustomization_LoadoutSlotData& InLoadoutSlotData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_CharacterCustomizationPanelBase", "HandleLoadoutSlotItemsGenerated");

	Params::UVALUI_CharacterCustomizationPanelBase_HandleLoadoutSlotItemsGenerated_Params Parms{};

	Parms.LoadoutSlotName = InLoadoutSlotName;
	Parms.LoadoutSlotData = InLoadoutSlotData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_CharacterCustomizationPanelBase.GetLoadoutSlotDataFromItemObject
// (Final, Native, Protected, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UObject*                     ItemObject                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        LoadoutSlotName                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVALUI_CharCustomization_LoadoutSlotDataLoadoutSlotData                                                  (Parm, OutParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// bool                               bSuccess                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_CharacterCustomizationPanelBase::GetLoadoutSlotDataFromItemObject(class UObject* InItemObject, class FName* InLoadoutSlotName, struct FVALUI_CharCustomization_LoadoutSlotData* InLoadoutSlotData, bool* InbSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_CharacterCustomizationPanelBase", "GetLoadoutSlotDataFromItemObject");

	Params::UVALUI_CharacterCustomizationPanelBase_GetLoadoutSlotDataFromItemObject_Params Parms{};

	Parms.ItemObject = InItemObject;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (InLoadoutSlotName != nullptr)
		*InLoadoutSlotName = Parms.LoadoutSlotName;

	if (InLoadoutSlotData != nullptr)
		*InLoadoutSlotData = Parms.LoadoutSlotData;

	if (InbSuccess != nullptr)
		*InbSuccess = Parms.bSuccess;

}


// Function ValeriaUI.VALUI_CharacterCustomizationPanelBase.GetCurrentLoadout
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVAL_CharacterCustomizationLoadoutReturnValue                                                      (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

struct FVAL_CharacterCustomizationLoadout UVALUI_CharacterCustomizationPanelBase::GetCurrentLoadout()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_CharacterCustomizationPanelBase", "GetCurrentLoadout");

	Params::UVALUI_CharacterCustomizationPanelBase_GetCurrentLoadout_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ValeriaUI.VALUI_CharacterCustomizationPanelBase.GenerateLoadoutSlotItems
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UVALUI_CharacterCustomizationPanelBase::GenerateLoadoutSlotItems()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_CharacterCustomizationPanelBase", "GenerateLoadoutSlotItems");

	Params::UVALUI_CharacterCustomizationPanelBase_GenerateLoadoutSlotItems_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.VALUI_CharacterCustomizationPanelBase.GenerateItemObject
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FVAL_CharCustomization_AssetDataAssetData                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UObject*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UObject* UVALUI_CharacterCustomizationPanelBase::GenerateItemObject(struct FVAL_CharCustomization_AssetData& InAssetData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_CharacterCustomizationPanelBase", "GenerateItemObject");

	Params::UVALUI_CharacterCustomizationPanelBase_GenerateItemObject_Params Parms{};

	Parms.AssetData = InAssetData;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ValeriaUI.VALUI_CharacterMovementStick_Mobile.SetHooker
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UVALUI_CameraVirtualMoveHooker_Mobile*VirtualMoveHooker                                                (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_CharacterMovementStick_Mobile::SetHooker(class UVALUI_CameraVirtualMoveHooker_Mobile* InVirtualMoveHooker)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_CharacterMovementStick_Mobile", "SetHooker");

	Params::UVALUI_CharacterMovementStick_Mobile_SetHooker_Params Parms{};

	Parms.VirtualMoveHooker = InVirtualMoveHooker;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.VALUI_CharacterMovementStick_Mobile.OnUpdateMovmentVirtualStick
// (Event, Public, HasOutParams, HasDefaults, BlueprintEvent)
// Parameters:
// bool                               TouchControlFlag                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   Pos                                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   ControlVector                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_CharacterMovementStick_Mobile::OnUpdateMovmentVirtualStick(bool InTouchControlFlag, struct FVector2D& InPos, struct FVector2D& InControlVector)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_CharacterMovementStick_Mobile", "OnUpdateMovmentVirtualStick");

	Params::UVALUI_CharacterMovementStick_Mobile_OnUpdateMovmentVirtualStick_Params Parms{};

	Parms.TouchControlFlag = InTouchControlFlag;
	Parms.Pos = InPos;
	Parms.ControlVector = InControlVector;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_CharacterMovementStick_Mobile.OnFirstTouch
// (Event, Public, BlueprintEvent)
// Parameters:

void UVALUI_CharacterMovementStick_Mobile::OnFirstTouch()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_CharacterMovementStick_Mobile", "OnFirstTouch");

	Params::UVALUI_CharacterMovementStick_Mobile_OnFirstTouch_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_CharacterMovementStick_Mobile.InitMovementVirtualStack
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D                   DefaultPosition                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ValidTouchRadius                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              MovementValidDistanceTemp                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              WalkBoundaryDistanceTemp                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_CharacterMovementStick_Mobile::InitMovementVirtualStack(const struct FVector2D& InDefaultPosition, float InValidTouchRadius, float InMovementValidDistanceTemp, float InWalkBoundaryDistanceTemp)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_CharacterMovementStick_Mobile", "InitMovementVirtualStack");

	Params::UVALUI_CharacterMovementStick_Mobile_InitMovementVirtualStack_Params Parms{};

	Parms.DefaultPosition = InDefaultPosition;
	Parms.ValidTouchRadius = InValidTouchRadius;
	Parms.MovementValidDistanceTemp = InMovementValidDistanceTemp;
	Parms.WalkBoundaryDistanceTemp = InWalkBoundaryDistanceTemp;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.VALUI_ChatEmojiPanel.GetTexture
// (Final, Native, Private, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FS6UI_FRichImageRow_Soft    ImageRow                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// TSoftObjectPtr<class UTexture2D>   ReturnValue                                                      (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TSoftObjectPtr<class UTexture2D> UVALUI_ChatEmojiPanel::GetTexture(struct FS6UI_FRichImageRow_Soft& InImageRow)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_ChatEmojiPanel", "GetTexture");

	Params::UVALUI_ChatEmojiPanel_GetTexture_Params Parms{};

	Parms.ImageRow = InImageRow;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// DelegateFunction ValeriaUI.VALUI_ChatInputBar.VALUIEvent_OnTextChanged__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams)
// Parameters:
// class UVALUI_ChatInputBar*         InputBar                                                         (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FText                        PreviousText                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FText                        NewText                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UVALUI_ChatInputBar::VALUIEvent_OnTextChanged__DelegateSignature(class UVALUI_ChatInputBar* InInputBar, class FText& InPreviousText, class FText& InNewText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_ChatInputBar", "VALUIEvent_OnTextChanged__DelegateSignature");

	Params::UVALUI_ChatInputBar_VALUIEvent_OnTextChanged__DelegateSignature_Params Parms{};

	Parms.InputBar = InInputBar;
	Parms.PreviousText = InPreviousText;
	Parms.NewText = InNewText;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction ValeriaUI.VALUI_ChatInputBar.VALUIEvent_OnMessageTargetCycled__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams)
// Parameters:
// class UVALUI_ChatInputBar*         InputBar                                                         (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMessageTarget              MessageTarget                                                    (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_ChatInputBar::VALUIEvent_OnMessageTargetCycled__DelegateSignature(class UVALUI_ChatInputBar* InInputBar, struct FMessageTarget& InMessageTarget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_ChatInputBar", "VALUIEvent_OnMessageTargetCycled__DelegateSignature");

	Params::UVALUI_ChatInputBar_VALUIEvent_OnMessageTargetCycled__DelegateSignature_Params Parms{};

	Parms.InputBar = InInputBar;
	Parms.MessageTarget = InMessageTarget;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction ValeriaUI.VALUI_ChatInputBar.VALUIEvent_OnMessageSubmitted__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams)
// Parameters:
// class UVALUI_ChatInputBar*         InputBar                                                         (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMessageTarget              MessageTarget                                                    (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FText                        Message                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UVALUI_ChatInputBar::VALUIEvent_OnMessageSubmitted__DelegateSignature(class UVALUI_ChatInputBar* InInputBar, struct FMessageTarget& InMessageTarget, class FText& InMessage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_ChatInputBar", "VALUIEvent_OnMessageSubmitted__DelegateSignature");

	Params::UVALUI_ChatInputBar_VALUIEvent_OnMessageSubmitted__DelegateSignature_Params Parms{};

	Parms.InputBar = InInputBar;
	Parms.MessageTarget = InMessageTarget;
	Parms.Message = InMessage;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction ValeriaUI.VALUI_ChatInputBar.VALUIEvent_OnCommitBlankText__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UVALUI_ChatInputBar*         InputBar                                                         (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_ChatInputBar::VALUIEvent_OnCommitBlankText__DelegateSignature(class UVALUI_ChatInputBar* InInputBar)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_ChatInputBar", "VALUIEvent_OnCommitBlankText__DelegateSignature");

	Params::UVALUI_ChatInputBar_VALUIEvent_OnCommitBlankText__DelegateSignature_Params Parms{};

	Parms.InputBar = InInputBar;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction ValeriaUI.VALUI_ChatInputBar.VALUIEvent_OnCommandSuggestionsChanged__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams)
// Parameters:
// class FString                      InString                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UVAL_ChatCommand_Base*>CommandObjects                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UVALUI_ChatInputBar::VALUIEvent_OnCommandSuggestionsChanged__DelegateSignature(const class FString& InInString, TArray<class UVAL_ChatCommand_Base*>& InCommandObjects)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_ChatInputBar", "VALUIEvent_OnCommandSuggestionsChanged__DelegateSignature");

	Params::UVALUI_ChatInputBar_VALUIEvent_OnCommandSuggestionsChanged__DelegateSignature_Params Parms{};

	Parms.InString = InInString;
	Parms.CommandObjects = InCommandObjects;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_ChatInputBar.TryUpdateChatChannel
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UVALUI_ChatInputBar::TryUpdateChatChannel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_ChatInputBar", "TryUpdateChatChannel");

	Params::UVALUI_ChatInputBar_TryUpdateChatChannel_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.VALUI_ChatInputBar.PushErrorNotification
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        InErrorText                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UVALUI_ChatInputBar::PushErrorNotification(class FText& InInErrorText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_ChatInputBar", "PushErrorNotification");

	Params::UVALUI_ChatInputBar_PushErrorNotification_Params Parms{};

	Parms.InErrorText = InInErrorText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_ChatInputBar.HandleOnTextCommitted
// (Final, Native, Protected, HasOutParams)
// Parameters:
// class FText                        InText                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// enum class ETextCommit             InCommitMethod                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_ChatInputBar::HandleOnTextCommitted(class FText& InInText, enum class ETextCommit InInCommitMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_ChatInputBar", "HandleOnTextCommitted");

	Params::UVALUI_ChatInputBar_HandleOnTextCommitted_Params Parms{};

	Parms.InText = InInText;
	Parms.InCommitMethod = InInCommitMethod;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.VALUI_ChatInputBar.HandleOnTextChanged
// (Final, Native, Protected, HasOutParams)
// Parameters:
// class FText                        InText                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UVALUI_ChatInputBar::HandleOnTextChanged(class FText& InInText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_ChatInputBar", "HandleOnTextChanged");

	Params::UVALUI_ChatInputBar_HandleOnTextChanged_Params Parms{};

	Parms.InText = InInText;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.VALUI_ChatInputBar.HandleOnStateChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EVALUI_ChatInputBarStateNewStateId                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_ChatInputBar::HandleOnStateChanged(enum class EVALUI_ChatInputBarState InNewStateId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_ChatInputBar", "HandleOnStateChanged");

	Params::UVALUI_ChatInputBar_HandleOnStateChanged_Params Parms{};

	Parms.NewStateId = InNewStateId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_ChatInputBar.HandleOnHideSuggestions
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UVALUI_ChatInputBar::HandleOnHideSuggestions()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_ChatInputBar", "HandleOnHideSuggestions");

	Params::UVALUI_ChatInputBar_HandleOnHideSuggestions_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.VALUI_ChatInputBar.HandleOnDisplayCharacterNameSuggestions
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      CharacterNameSubstr                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              MaxSuggestionsNum                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_ChatInputBar::HandleOnDisplayCharacterNameSuggestions(const class FString& InCharacterNameSubstr, int32 InMaxSuggestionsNum)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_ChatInputBar", "HandleOnDisplayCharacterNameSuggestions");

	Params::UVALUI_ChatInputBar_HandleOnDisplayCharacterNameSuggestions_Params Parms{};

	Parms.CharacterNameSubstr = InCharacterNameSubstr;
	Parms.MaxSuggestionsNum = InMaxSuggestionsNum;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.VALUI_ChatInputBar.HandleOnChatChannelSet
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FVALUI_ChatChannel          Channel                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UVALUI_ChatInputBar::HandleOnChatChannelSet(struct FVALUI_ChatChannel& InChannel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_ChatInputBar", "HandleOnChatChannelSet");

	Params::UVALUI_ChatInputBar_HandleOnChatChannelSet_Params Parms{};

	Parms.Channel = InChannel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_ChatInputBar.GetCharacterName
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UVALUI_ChatInputBar::GetCharacterName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_ChatInputBar", "GetCharacterName");

	Params::UVALUI_ChatInputBar_GetCharacterName_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ValeriaUI.VALUI_ChatInputBar.DisplayStringsSuggestions
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FString                      InString                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FString>              Suggestions                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UVALUI_ChatInputBar::DisplayStringsSuggestions(const class FString& InInString, TArray<class FString>& InSuggestions)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_ChatInputBar", "DisplayStringsSuggestions");

	Params::UVALUI_ChatInputBar_DisplayStringsSuggestions_Params Parms{};

	Parms.InString = InInString;
	Parms.Suggestions = InSuggestions;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_ChatInputBar.DisplayCommandSuggestions
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bInDisplay                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_ChatInputBar::DisplayCommandSuggestions(bool InbInDisplay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_ChatInputBar", "DisplayCommandSuggestions");

	Params::UVALUI_ChatInputBar_DisplayCommandSuggestions_Params Parms{};

	Parms.bInDisplay = InbInDisplay;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_ChatInputBar.DisplayActiveCommandHint
// (Event, Public, BlueprintEvent)
// Parameters:
// class UVAL_ChatCommand_Base*       Command                                                          (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bDisplay                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_ChatInputBar::DisplayActiveCommandHint(class UVAL_ChatCommand_Base* InCommand, bool InbDisplay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_ChatInputBar", "DisplayActiveCommandHint");

	Params::UVALUI_ChatInputBar_DisplayActiveCommandHint_Params Parms{};

	Parms.Command = InCommand;
	Parms.bDisplay = InbDisplay;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_ChatInputBar.CycleToPrevSuggestion
// (Event, Public, BlueprintEvent)
// Parameters:

void UVALUI_ChatInputBar::CycleToPrevSuggestion()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_ChatInputBar", "CycleToPrevSuggestion");

	Params::UVALUI_ChatInputBar_CycleToPrevSuggestion_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_ChatInputBar.CycleToNextSuggestion
// (Event, Public, BlueprintEvent)
// Parameters:

void UVALUI_ChatInputBar::CycleToNextSuggestion()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_ChatInputBar", "CycleToNextSuggestion");

	Params::UVALUI_ChatInputBar_CycleToNextSuggestion_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_ChatInputBar.CompleteSuggestion
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UVALUI_ChatInputBar::CompleteSuggestion()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_ChatInputBar", "CompleteSuggestion");

	Params::UVALUI_ChatInputBar_CompleteSuggestion_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_ChatInputBar.ChangeMessageTarget
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FMessageTarget              MessageTarget                                                    (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVALUI_ChatInputBar::ChangeMessageTarget(struct FMessageTarget& InMessageTarget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_ChatInputBar", "ChangeMessageTarget");

	Params::UVALUI_ChatInputBar_ChangeMessageTarget_Params Parms{};

	Parms.MessageTarget = InMessageTarget;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// DelegateFunction ValeriaUI.VALUI_ChatInputEditableText.VALUI_OnSummonContextMenu__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams)
// Parameters:
// struct FGeometry                   Geometry                                                         (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UVALUI_ChatInputEditableText::VALUI_OnSummonContextMenu__DelegateSignature(struct FGeometry& InGeometry, struct FPointerEvent& InMouseEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_ChatInputEditableText", "VALUI_OnSummonContextMenu__DelegateSignature");

	Params::UVALUI_ChatInputEditableText_VALUI_OnSummonContextMenu__DelegateSignature_Params Parms{};

	Parms.Geometry = InGeometry;
	Parms.MouseEvent = InMouseEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_ChatInputEditableText.StyleSelectedText
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      StyleTagString                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_ChatInputEditableText::StyleSelectedText(const class FString& InStyleTagString)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_ChatInputEditableText", "StyleSelectedText");

	Params::UVALUI_ChatInputEditableText_StyleSelectedText_Params Parms{};

	Parms.StyleTagString = InStyleTagString;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.VALUI_ChatInputEditableText.PasteTextFromClipboardChecked
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UVALUI_ChatInputEditableText::PasteTextFromClipboardChecked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_ChatInputEditableText", "PasteTextFromClipboardChecked");

	Params::UVALUI_ChatInputEditableText_PasteTextFromClipboardChecked_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.VALUI_ChatInputEditableText.MakeSelectedTextPlain
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UVALUI_ChatInputEditableText::MakeSelectedTextPlain()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_ChatInputEditableText", "MakeSelectedTextPlain");

	Params::UVALUI_ChatInputEditableText_MakeSelectedTextPlain_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.VALUI_ChatInputEditableText.MakeSelectedTextItalic
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UVALUI_ChatInputEditableText::MakeSelectedTextItalic()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_ChatInputEditableText", "MakeSelectedTextItalic");

	Params::UVALUI_ChatInputEditableText_MakeSelectedTextItalic_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.VALUI_ChatInputEditableText.MakeSelectedTextBold
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UVALUI_ChatInputEditableText::MakeSelectedTextBold()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_ChatInputEditableText", "MakeSelectedTextBold");

	Params::UVALUI_ChatInputEditableText_MakeSelectedTextBold_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.VALUI_ChatInputEditableText.InsertTextAtCursorChecked
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FText                        InText                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UVALUI_ChatInputEditableText::InsertTextAtCursorChecked(class FText& InInText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_ChatInputEditableText", "InsertTextAtCursorChecked");

	Params::UVALUI_ChatInputEditableText_InsertTextAtCursorChecked_Params Parms{};

	Parms.InText = InInText;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.VALUI_ChatMessage.GetTimeZone
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UVALUI_ChatMessage::GetTimeZone()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_ChatMessage", "GetTimeZone");

	Params::UVALUI_ChatMessage_GetTimeZone_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ValeriaUI.VALUI_ChatMessage.ColorToHexString
// (Final, Native, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FLinearColor                Color                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UVALUI_ChatMessage::ColorToHexString(struct FLinearColor& InColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_ChatMessage", "ColorToHexString");

	Params::UVALUI_ChatMessage_ColorToHexString_Params Parms{};

	Parms.Color = InColor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ValeriaUI.VALUI_ChatPanelBase.TryGetTabAndChannelFromMessageConfig
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVALUI_ChatMessageConfig    Config                                                           (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FVALUI_ChatTab              OutTab                                                           (Parm, OutParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FVALUI_ChatChannel          OutChannel                                                       (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVALUI_ChatPanelBase::TryGetTabAndChannelFromMessageConfig(struct FVALUI_ChatMessageConfig& InConfig, struct FVALUI_ChatTab* InOutTab, struct FVALUI_ChatChannel* InOutChannel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_ChatPanelBase", "TryGetTabAndChannelFromMessageConfig");

	Params::UVALUI_ChatPanelBase_TryGetTabAndChannelFromMessageConfig_Params Parms{};

	Parms.Config = InConfig;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (InOutTab != nullptr)
		*InOutTab = Parms.OutTab;

	if (InOutChannel != nullptr)
		*InOutChannel = Parms.OutChannel;

	return Parms.ReturnValue;

}


// Function ValeriaUI.VALUI_ChatPanelBase.ToggleChatChannel
// (Final, Native, Protected, HasOutParams, BlueprintCallable)
// Parameters:
// struct FVALUI_ChatMessageConfig    MessageConfig                                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UVALUI_ChatPanelBase::ToggleChatChannel(struct FVALUI_ChatMessageConfig& InMessageConfig)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_ChatPanelBase", "ToggleChatChannel");

	Params::UVALUI_ChatPanelBase_ToggleChatChannel_Params Parms{};

	Parms.MessageConfig = InMessageConfig;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.VALUI_ChatPanelBase.ToggleChannelsByType
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// bool                               bEnabled                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EMessageTargetType      Type                                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_ChatPanelBase::ToggleChannelsByType(bool InbEnabled, enum class EMessageTargetType InType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_ChatPanelBase", "ToggleChannelsByType");

	Params::UVALUI_ChatPanelBase_ToggleChannelsByType_Params Parms{};

	Parms.bEnabled = InbEnabled;
	Parms.Type = InType;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.VALUI_ChatPanelBase.ToggleAllChannels
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// bool                               bEnabled                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_ChatPanelBase::ToggleAllChannels(bool InbEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_ChatPanelBase", "ToggleAllChannels");

	Params::UVALUI_ChatPanelBase_ToggleAllChannels_Params Parms{};

	Parms.bEnabled = InbEnabled;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.VALUI_ChatPanelBase.SwitchTab
// (Final, Native, Protected, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        TabName                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_ChatPanelBase::SwitchTab(class FName& InTabName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_ChatPanelBase", "SwitchTab");

	Params::UVALUI_ChatPanelBase_SwitchTab_Params Parms{};

	Parms.TabName = InTabName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.VALUI_ChatPanelBase.RemoveTabChannel
// (Final, Native, Protected, HasOutParams, BlueprintCallable)
// Parameters:
// struct FVALUI_ChatTab              Tab                                                              (Parm, OutParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// int32                              ChannelIndex                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_ChatPanelBase::RemoveTabChannel(struct FVALUI_ChatTab* InTab, int32 InChannelIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_ChatPanelBase", "RemoveTabChannel");

	Params::UVALUI_ChatPanelBase_RemoveTabChannel_Params Parms{};

	Parms.ChannelIndex = InChannelIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (InTab != nullptr)
		*InTab = Parms.Tab;

}


// Function ValeriaUI.VALUI_ChatPanelBase.OnNewChatMessageAdded
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FValeriaChatMessage         ChatMessage                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UVALUI_ChatPanelBase::OnNewChatMessageAdded(struct FValeriaChatMessage& InChatMessage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_ChatPanelBase", "OnNewChatMessageAdded");

	Params::UVALUI_ChatPanelBase_OnNewChatMessageAdded_Params Parms{};

	Parms.ChatMessage = InChatMessage;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_ChatPanelBase.HandleToggleTabHost
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bEnabled                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_ChatPanelBase::HandleToggleTabHost(bool InbEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_ChatPanelBase", "HandleToggleTabHost");

	Params::UVALUI_ChatPanelBase_HandleToggleTabHost_Params Parms{};

	Parms.bEnabled = InbEnabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_ChatPanelBase.HandleTabChannelEnabled
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FVALUI_ChatTab              Tab                                                              (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FVALUI_ChatChannel          Channel                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FVALUI_ChatMessageConfig    Config                                                           (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UVALUI_ChatPanelBase::HandleTabChannelEnabled(struct FVALUI_ChatTab& InTab, struct FVALUI_ChatChannel& InChannel, struct FVALUI_ChatMessageConfig& InConfig)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_ChatPanelBase", "HandleTabChannelEnabled");

	Params::UVALUI_ChatPanelBase_HandleTabChannelEnabled_Params Parms{};

	Parms.Tab = InTab;
	Parms.Channel = InChannel;
	Parms.Config = InConfig;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_ChatPanelBase.HandleRemoveSidePanelChannel
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UWidget*                     SidePanel                                                        (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ChannelIndex                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_ChatPanelBase::HandleRemoveSidePanelChannel(class UWidget* InSidePanel, int32 InChannelIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_ChatPanelBase", "HandleRemoveSidePanelChannel");

	Params::UVALUI_ChatPanelBase_HandleRemoveSidePanelChannel_Params Parms{};

	Parms.SidePanel = InSidePanel;
	Parms.ChannelIndex = InChannelIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_ChatPanelBase.HandleOnStateChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EVALUI_ChatPanelState   State                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_ChatPanelBase::HandleOnStateChanged(enum class EVALUI_ChatPanelState InState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_ChatPanelBase", "HandleOnStateChanged");

	Params::UVALUI_ChatPanelBase_HandleOnStateChanged_Params Parms{};

	Parms.State = InState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_ChatPanelBase.HandleOnPawnChanged
// (Final, Native, Private)
// Parameters:
// class APawn*                       Pawn                                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_ChatPanelBase::HandleOnPawnChanged(class APawn* InPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_ChatPanelBase", "HandleOnPawnChanged");

	Params::UVALUI_ChatPanelBase_HandleOnPawnChanged_Params Parms{};

	Parms.Pawn = InPawn;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.VALUI_ChatPanelBase.HandleNewMessageTarget
// (Final, Native, Private)
// Parameters:
// struct FMessageTarget              MessageTarget                                                    (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_ChatPanelBase::HandleNewMessageTarget(const struct FMessageTarget& InMessageTarget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_ChatPanelBase", "HandleNewMessageTarget");

	Params::UVALUI_ChatPanelBase_HandleNewMessageTarget_Params Parms{};

	Parms.MessageTarget = InMessageTarget;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.VALUI_ChatPanelBase.HandleNewControlMessage
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FControlMessage             ControlMessage                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UVALUI_ChatPanelBase::HandleNewControlMessage(struct FControlMessage& InControlMessage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_ChatPanelBase", "HandleNewControlMessage");

	Params::UVALUI_ChatPanelBase_HandleNewControlMessage_Params Parms{};

	Parms.ControlMessage = InControlMessage;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_ChatPanelBase.HandleNewChatMessage
// (Final, Native, Protected, HasOutParams)
// Parameters:
// struct FValeriaChatMessage         ChatMessage                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UVALUI_ChatPanelBase::HandleNewChatMessage(struct FValeriaChatMessage& InChatMessage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_ChatPanelBase", "HandleNewChatMessage");

	Params::UVALUI_ChatPanelBase_HandleNewChatMessage_Params Parms{};

	Parms.ChatMessage = InChatMessage;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.VALUI_ChatPanelBase.HandleMessageTargetRemoved
// (Final, Native, Private)
// Parameters:
// struct FMessageTarget              MessageTarget                                                    (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_ChatPanelBase::HandleMessageTargetRemoved(const struct FMessageTarget& InMessageTarget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_ChatPanelBase", "HandleMessageTargetRemoved");

	Params::UVALUI_ChatPanelBase_HandleMessageTargetRemoved_Params Parms{};

	Parms.MessageTarget = InMessageTarget;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.VALUI_ChatPanelBase.HandleDisplayTab
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FName                        TabName                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_ChatPanelBase::HandleDisplayTab(class FName& InTabName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_ChatPanelBase", "HandleDisplayTab");

	Params::UVALUI_ChatPanelBase_HandleDisplayTab_Params Parms{};

	Parms.TabName = InTabName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_ChatPanelBase.HandleDisplayChannelGlow
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class UWidget*                     SidePanel                                                        (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVALUI_ChatChannel          Channel                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              ChannelIndex                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_ChatPanelBase::HandleDisplayChannelGlow(class UWidget* InSidePanel, struct FVALUI_ChatChannel& InChannel, int32 InChannelIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_ChatPanelBase", "HandleDisplayChannelGlow");

	Params::UVALUI_ChatPanelBase_HandleDisplayChannelGlow_Params Parms{};

	Parms.SidePanel = InSidePanel;
	Parms.Channel = InChannel;
	Parms.ChannelIndex = InChannelIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_ChatPanelBase.HandleClearTabHost
// (Event, Protected, BlueprintEvent)
// Parameters:

void UVALUI_ChatPanelBase::HandleClearTabHost()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_ChatPanelBase", "HandleClearTabHost");

	Params::UVALUI_ChatPanelBase_HandleClearTabHost_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_ChatPanelBase.HandleClearMessagePanel
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UWidget*                     MessagePanel                                                     (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_ChatPanelBase::HandleClearMessagePanel(class UWidget* InMessagePanel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_ChatPanelBase", "HandleClearMessagePanel");

	Params::UVALUI_ChatPanelBase_HandleClearMessagePanel_Params Parms{};

	Parms.MessagePanel = InMessagePanel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_ChatPanelBase.HandleAddTabToTabHost
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FName                        TabName                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FText                        TabDisplayName                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UVALUI_ChatPanelBase::HandleAddTabToTabHost(class FName& InTabName, class FText& InTabDisplayName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_ChatPanelBase", "HandleAddTabToTabHost");

	Params::UVALUI_ChatPanelBase_HandleAddTabToTabHost_Params Parms{};

	Parms.TabName = InTabName;
	Parms.TabDisplayName = InTabDisplayName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_ChatPanelBase.HandleAddTabChannel
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FVALUI_ChatMessageConfig    MessageConfig                                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UVALUI_ChatPanelBase::HandleAddTabChannel(struct FVALUI_ChatMessageConfig& InMessageConfig)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_ChatPanelBase", "HandleAddTabChannel");

	Params::UVALUI_ChatPanelBase_HandleAddTabChannel_Params Parms{};

	Parms.MessageConfig = InMessageConfig;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_ChatPanelBase.HandleAddMessageToPanel
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class UWidget*                     MessagePanel                                                     (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FValeriaChatMessage         ChatMessage                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FVALUI_ChatMessageConfig    MessageConfig                                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UVALUI_ChatPanelBase::HandleAddMessageToPanel(class UWidget* InMessagePanel, struct FValeriaChatMessage& InChatMessage, struct FVALUI_ChatMessageConfig& InMessageConfig)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_ChatPanelBase", "HandleAddMessageToPanel");

	Params::UVALUI_ChatPanelBase_HandleAddMessageToPanel_Params Parms{};

	Parms.MessagePanel = InMessagePanel;
	Parms.ChatMessage = InChatMessage;
	Parms.MessageConfig = InMessageConfig;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_ChatPanelBase.GotoChatState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EVALUI_ChatPanelState   State                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_ChatPanelBase::GotoChatState(enum class EVALUI_ChatPanelState InState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_ChatPanelBase", "GotoChatState");

	Params::UVALUI_ChatPanelBase_GotoChatState_Params Parms{};

	Parms.State = InState;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.VALUI_ChatPanelBase.GetTabWidgetReferences
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FName                        TabName                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWidget*                     OutSidePanelWidget                                               (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWidget*                     OutMessagePanelWidget                                            (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_ChatPanelBase::GetTabWidgetReferences(class FName& InTabName, class UWidget** InOutSidePanelWidget, class UWidget** InOutMessagePanelWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_ChatPanelBase", "GetTabWidgetReferences");

	Params::UVALUI_ChatPanelBase_GetTabWidgetReferences_Params Parms{};

	Parms.TabName = InTabName;

	UObject::ProcessEvent(Func, &Parms);

	if (InOutSidePanelWidget != nullptr)
		*InOutSidePanelWidget = Parms.OutSidePanelWidget;

	if (InOutMessagePanelWidget != nullptr)
		*InOutMessagePanelWidget = Parms.OutMessagePanelWidget;

}


// Function ValeriaUI.VALUI_ChatPanelBase.GetCurrentChatState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EVALUI_ChatPanelState   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EVALUI_ChatPanelState UVALUI_ChatPanelBase::GetCurrentChatState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_ChatPanelBase", "GetCurrentChatState");

	Params::UVALUI_ChatPanelBase_GetCurrentChatState_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ValeriaUI.VALUI_ChatPanelBase.GetChatMessageConfigs
// (Final, Native, Protected, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FValeriaChatMessage         Message                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FVALUI_ChatMessageConfig>OutMessageConfigs                                                (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UVALUI_ChatPanelBase::GetChatMessageConfigs(struct FValeriaChatMessage& InMessage, TArray<struct FVALUI_ChatMessageConfig>* InOutMessageConfigs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_ChatPanelBase", "GetChatMessageConfigs");

	Params::UVALUI_ChatPanelBase_GetChatMessageConfigs_Params Parms{};

	Parms.Message = InMessage;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (InOutMessageConfigs != nullptr)
		*InOutMessageConfigs = Parms.OutMessageConfigs;

}


// Function ValeriaUI.VALUI_ChatPanelBase.DisplayTab
// (Final, Native, Protected, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        TabName                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_ChatPanelBase::DisplayTab(class FName& InTabName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_ChatPanelBase", "DisplayTab");

	Params::UVALUI_ChatPanelBase_DisplayTab_Params Parms{};

	Parms.TabName = InTabName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.VALUI_ChatPanelBase.ClearTabSidePanel
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FVALUI_ChatTab              Tab                                                              (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UVALUI_ChatPanelBase::ClearTabSidePanel(struct FVALUI_ChatTab& InTab)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_ChatPanelBase", "ClearTabSidePanel");

	Params::UVALUI_ChatPanelBase_ClearTabSidePanel_Params Parms{};

	Parms.Tab = InTab;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_ChatStatics.GetMessageTargetsOfChannel
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class UWorld*                      WorldContext                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVALUI_ChatChannel          InChannel                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FMessageTarget>      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FMessageTarget> UVALUI_ChatStatics::GetMessageTargetsOfChannel(class UWorld* InWorldContext, struct FVALUI_ChatChannel& InInChannel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_ChatStatics", "GetMessageTargetsOfChannel");

	Params::UVALUI_ChatStatics_GetMessageTargetsOfChannel_Params Parms{};

	Parms.WorldContext = InWorldContext;
	Parms.InChannel = InInChannel;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ValeriaUI.VALUI_ChatStatics.DoesChannelMatchMessageTarget
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVALUI_ChatChannel          InChannel                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FMessageTarget              InMessageTarget                                                  (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVALUI_ChatStatics::DoesChannelMatchMessageTarget(struct FVALUI_ChatChannel& InInChannel, struct FMessageTarget& InInMessageTarget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_ChatStatics", "DoesChannelMatchMessageTarget");

	Params::UVALUI_ChatStatics_DoesChannelMatchMessageTarget_Params Parms{};

	Parms.InChannel = InInChannel;
	Parms.InMessageTarget = InInMessageTarget;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ValeriaUI.VALUI_ChatStatics.ConvertValeriaChatMessageToPlatformChatMessage
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FValeriaChatMessage         ChatMessages                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FS6PLAT_ChatMessage         ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FS6PLAT_ChatMessage UVALUI_ChatStatics::ConvertValeriaChatMessageToPlatformChatMessage(struct FValeriaChatMessage& InChatMessages)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_ChatStatics", "ConvertValeriaChatMessageToPlatformChatMessage");

	Params::UVALUI_ChatStatics_ConvertValeriaChatMessageToPlatformChatMessage_Params Parms{};

	Parms.ChatMessages = InChatMessages;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ValeriaUI.VALUI_ChatStatics.ConvertValeriaChatMessagesArrayToPlatformChatMessagesArray
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<struct FValeriaChatMessage> ChatMessages                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FS6PLAT_ChatMessage> ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FS6PLAT_ChatMessage> UVALUI_ChatStatics::ConvertValeriaChatMessagesArrayToPlatformChatMessagesArray(TArray<struct FValeriaChatMessage>& InChatMessages)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_ChatStatics", "ConvertValeriaChatMessagesArrayToPlatformChatMessagesArray");

	Params::UVALUI_ChatStatics_ConvertValeriaChatMessagesArrayToPlatformChatMessagesArray_Params Parms{};

	Parms.ChatMessages = InChatMessages;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ValeriaUI.VALUI_CheckBoxStyle.Apply
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// class UCheckBox*                   CheckBox                                                         (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_CheckBoxStyle::Apply(class UCheckBox* InCheckBox)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_CheckBoxStyle", "Apply");

	Params::UVALUI_CheckBoxStyle_Apply_Params Parms{};

	Parms.CheckBox = InCheckBox;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.VALUI_CheckBox_Styled.SetCheckBoxStyle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UVALUI_CheckBoxStyle*        NewStyle                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_CheckBox_Styled::SetCheckBoxStyle(class UVALUI_CheckBoxStyle* InNewStyle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_CheckBox_Styled", "SetCheckBoxStyle");

	Params::UVALUI_CheckBox_Styled_SetCheckBoxStyle_Params Parms{};

	Parms.NewStyle = InNewStyle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.VALUI_CrafterContentWidget.GetCrafterRowName
// (Final, Native, Protected, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FCrafterConfig              CrafterConfig                                                    (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FName UVALUI_CrafterContentWidget::GetCrafterRowName(struct FCrafterConfig& InCrafterConfig)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_CrafterContentWidget", "GetCrafterRowName");

	Params::UVALUI_CrafterContentWidget_GetCrafterRowName_Params Parms{};

	Parms.CrafterConfig = InCrafterConfig;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ValeriaUI.VALUI_CrafterContentWidget.GetCrafterData
// (Final, Native, Protected, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FCrafterConfig              CrafterConfig                                                    (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVALUI_Crafter              CrafterData                                                      (Parm, OutParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVALUI_CrafterContentWidget::GetCrafterData(struct FCrafterConfig& InCrafterConfig, struct FVALUI_Crafter* InCrafterData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_CrafterContentWidget", "GetCrafterData");

	Params::UVALUI_CrafterContentWidget_GetCrafterData_Params Parms{};

	Parms.CrafterConfig = InCrafterConfig;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (InCrafterData != nullptr)
		*InCrafterData = Parms.CrafterData;

	return Parms.ReturnValue;

}


// Function ValeriaUI.VALUI_CrafterStationsViewWidget.DisplayCrafterStations
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRecipeNeeds                RecipeNeeds                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UVALUI_CrafterStationsViewWidget::DisplayCrafterStations(struct FRecipeNeeds& InRecipeNeeds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_CrafterStationsViewWidget", "DisplayCrafterStations");

	Params::UVALUI_CrafterStationsViewWidget_DisplayCrafterStations_Params Parms{};

	Parms.RecipeNeeds = InRecipeNeeds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_DepthSortedHorizontalBox.SetForemostWidgetIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              Index                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_DepthSortedHorizontalBox::SetForemostWidgetIndex(int32 InIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_DepthSortedHorizontalBox", "SetForemostWidgetIndex");

	Params::UVALUI_DepthSortedHorizontalBox_SetForemostWidgetIndex_Params Parms{};

	Parms.Index = InIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.VALUI_DragDropOperation.DragStarted
// (Native, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FPointerEvent               PointerEvent                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UVALUI_DragDropOperation::DragStarted(struct FPointerEvent& InPointerEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_DragDropOperation", "DragStarted");

	Params::UVALUI_DragDropOperation_DragStarted_Params Parms{};

	Parms.PointerEvent = InPointerEvent;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.VALUI_Functor_Button_OnClicked.OnClicked
// (Final, Native, Public)
// Parameters:

void UVALUI_Functor_Button_OnClicked::OnClicked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_Functor_Button_OnClicked", "OnClicked");

	Params::UVALUI_Functor_Button_OnClicked_OnClicked_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.VALUI_DynamicExtensionBase.AttachedToWidget
// (Event, Public, BlueprintEvent)
// Parameters:

void UVALUI_DynamicExtensionBase::AttachedToWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_DynamicExtensionBase", "AttachedToWidget");

	Params::UVALUI_DynamicExtensionBase_AttachedToWidget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_EditableRichTextStyle.ApplyToTextBlock
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// class US6UI_EditableRichText*      TextWidget                                                       (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_EditableRichTextStyle::ApplyToTextBlock(class US6UI_EditableRichText* InTextWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_EditableRichTextStyle", "ApplyToTextBlock");

	Params::UVALUI_EditableRichTextStyle_ApplyToTextBlock_Params Parms{};

	Parms.TextWidget = InTextWidget;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.VALUI_EditableTextBoxStyle.ApplyToTextBox
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// class UEditableTextBox*            TextWidget                                                       (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_EditableTextBoxStyle::ApplyToTextBox(class UEditableTextBox* InTextWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_EditableTextBoxStyle", "ApplyToTextBox");

	Params::UVALUI_EditableTextBoxStyle_ApplyToTextBox_Params Parms{};

	Parms.TextWidget = InTextWidget;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.VALUI_EditableTextBox_Styled.SetTextStyle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UVALUI_EditableTextBoxStyle* NewStyle                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_EditableTextBox_Styled::SetTextStyle(class UVALUI_EditableTextBoxStyle* InNewStyle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_EditableTextBox_Styled", "SetTextStyle");

	Params::UVALUI_EditableTextBox_Styled_SetTextStyle_Params Parms{};

	Parms.NewStyle = InNewStyle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.VALUI_EditableTextStyle.ApplyToTextBlock
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// class UEditableText*               TextWidget                                                       (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_EditableTextStyle::ApplyToTextBlock(class UEditableText* InTextWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_EditableTextStyle", "ApplyToTextBlock");

	Params::UVALUI_EditableTextStyle_ApplyToTextBlock_Params Parms{};

	Parms.TextWidget = InTextWidget;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// DelegateFunction ValeriaUI.VALUI_EditableText_Styled.VALUIEvent_UMGEditableTextOnCursorMoved__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// int32                              LineIndex                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Offset                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_EditableText_Styled::VALUIEvent_UMGEditableTextOnCursorMoved__DelegateSignature(int32 InLineIndex, int32 InOffset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_EditableText_Styled", "VALUIEvent_UMGEditableTextOnCursorMoved__DelegateSignature");

	Params::UVALUI_EditableText_Styled_VALUIEvent_UMGEditableTextOnCursorMoved__DelegateSignature_Params Parms{};

	Parms.LineIndex = InLineIndex;
	Parms.Offset = InOffset;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_EditableText_Styled.SetTextStyle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UVALUI_EditableTextStyle*    NewStyle                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_EditableText_Styled::SetTextStyle(class UVALUI_EditableTextStyle* InNewStyle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_EditableText_Styled", "SetTextStyle");

	Params::UVALUI_EditableText_Styled_SetTextStyle_Params Parms{};

	Parms.NewStyle = InNewStyle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.VALUI_EditableText_Styled.CaretGoTo
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              LineIndex                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Offset                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_EditableText_Styled::CaretGoTo(int32 InLineIndex, int32 InOffset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_EditableText_Styled", "CaretGoTo");

	Params::UVALUI_EditableText_Styled_CaretGoTo_Params Parms{};

	Parms.LineIndex = InLineIndex;
	Parms.Offset = InOffset;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// DelegateFunction ValeriaUI.VALUI_EmoteButtonContainer.OnEmoteContainerButtonClicked__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UVALUI_EmoteButtonContainer* Container                                                        (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UVALUI_EmoteButton*          ButtonClicked                                                    (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UEmoteDataAsset*             EmoteDataAsset                                                   (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_EmoteButtonContainer::OnEmoteContainerButtonClicked__DelegateSignature(class UVALUI_EmoteButtonContainer* InContainer, class UVALUI_EmoteButton* InButtonClicked, class UEmoteDataAsset* InEmoteDataAsset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_EmoteButtonContainer", "OnEmoteContainerButtonClicked__DelegateSignature");

	Params::UVALUI_EmoteButtonContainer_OnEmoteContainerButtonClicked__DelegateSignature_Params Parms{};

	Parms.Container = InContainer;
	Parms.ButtonClicked = InButtonClicked;
	Parms.EmoteDataAsset = InEmoteDataAsset;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_EmoteButtonContainer.OnEmoteButtonClicked
// (Final, Native, Protected)
// Parameters:
// class UVALUI_EmoteButton*          InButtonClicked                                                  (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UEmoteDataAsset*             InEmoteDataAsset                                                 (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_EmoteButtonContainer::OnEmoteButtonClicked(class UVALUI_EmoteButton* InInButtonClicked, class UEmoteDataAsset* InInEmoteDataAsset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_EmoteButtonContainer", "OnEmoteButtonClicked");

	Params::UVALUI_EmoteButtonContainer_OnEmoteButtonClicked_Params Parms{};

	Parms.InButtonClicked = InInButtonClicked;
	Parms.InEmoteDataAsset = InInEmoteDataAsset;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.VALUI_EmoteButtonContainer.HandleClearContainer
// (Event, Protected, BlueprintEvent)
// Parameters:

void UVALUI_EmoteButtonContainer::HandleClearContainer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_EmoteButtonContainer", "HandleClearContainer");

	Params::UVALUI_EmoteButtonContainer_HandleClearContainer_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_EmoteButtonContainer.HandleAddButtonToContainer
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UVALUI_EmoteButton*          Button                                                           (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_EmoteButtonContainer::HandleAddButtonToContainer(class UVALUI_EmoteButton* InButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_EmoteButtonContainer", "HandleAddButtonToContainer");

	Params::UVALUI_EmoteButtonContainer_HandleAddButtonToContainer_Params Parms{};

	Parms.Button = InButton;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_ErrorDisplayHandlerInterface.HandleErrorDisplay
// (Native, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FVALUI_ErrorDisplayPayload  ErrorDisplayPayload                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void IVALUI_ErrorDisplayHandlerInterface::HandleErrorDisplay(struct FVALUI_ErrorDisplayPayload& InErrorDisplayPayload)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_ErrorDisplayHandlerInterface", "HandleErrorDisplay");

	Params::IVALUI_ErrorDisplayHandlerInterface_HandleErrorDisplay_Params Parms{};

	Parms.ErrorDisplayPayload = InErrorDisplayPayload;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.VALUI_ErrorDisplayHandling.TryRaiseErrorForDisplay
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UWidget*                     InstigatingWidget                                                (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVALUI_ErrorDisplayPayload  ErrorDisplayPayload                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVALUI_ErrorDisplayHandling::TryRaiseErrorForDisplay(class UWidget* InInstigatingWidget, struct FVALUI_ErrorDisplayPayload& InErrorDisplayPayload)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_ErrorDisplayHandling", "TryRaiseErrorForDisplay");

	Params::UVALUI_ErrorDisplayHandling_TryRaiseErrorForDisplay_Params Parms{};

	Parms.InstigatingWidget = InInstigatingWidget;
	Parms.ErrorDisplayPayload = InErrorDisplayPayload;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ValeriaUI.VALUI_ExpandableAreaStyle.Apply
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// class UExpandableArea*             ExpandableArea                                                   (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_ExpandableAreaStyle::Apply(class UExpandableArea* InExpandableArea)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_ExpandableAreaStyle", "Apply");

	Params::UVALUI_ExpandableAreaStyle_Apply_Params Parms{};

	Parms.ExpandableArea = InExpandableArea;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.VALUI_ExpandableArea_Styled.SetExpandableAreaStyle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UVALUI_ExpandableAreaStyle*  NewStyle                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_ExpandableArea_Styled::SetExpandableAreaStyle(class UVALUI_ExpandableAreaStyle* InNewStyle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_ExpandableArea_Styled", "SetExpandableAreaStyle");

	Params::UVALUI_ExpandableArea_Styled_SetExpandableAreaStyle_Params Parms{};

	Parms.NewStyle = InNewStyle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.VALUI_ExtensionPointContainerBase.AddExtensibleWidget
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// TSoftClassPtr<class UUserWidget>   WidgetReference                                                  (ConstParm, Parm, OutParm, ReferenceParm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_ExtensionPointContainerBase::AddExtensibleWidget(TSoftClassPtr<class UUserWidget>& InWidgetReference)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_ExtensionPointContainerBase", "AddExtensibleWidget");

	Params::UVALUI_ExtensionPointContainerBase_AddExtensibleWidget_Params Parms{};

	Parms.WidgetReference = InWidgetReference;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_InputValidationFunctionLibrary.ValidateUserName
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      UserNameInput                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FText>                OutErrors                                                        (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVALUI_InputValidationFunctionLibrary::ValidateUserName(const class FString& InUserNameInput, TArray<class FText>* InOutErrors)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_InputValidationFunctionLibrary", "ValidateUserName");

	Params::UVALUI_InputValidationFunctionLibrary_ValidateUserName_Params Parms{};

	Parms.UserNameInput = InUserNameInput;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (InOutErrors != nullptr)
		*InOutErrors = Parms.OutErrors;

	return Parms.ReturnValue;

}


// Function ValeriaUI.VALUI_ItemAcquisitionNotificationInterface.SetInitialData
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FValeriaItem                Item                                                             (Parm, NativeAccessSpecifierPublic)

void IVALUI_ItemAcquisitionNotificationInterface::SetInitialData(const struct FValeriaItem& InItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_ItemAcquisitionNotificationInterface", "SetInitialData");

	Params::IVALUI_ItemAcquisitionNotificationInterface_SetInitialData_Params Parms{};

	Parms.Item = InItem;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_ItemAcquisitionNotificationInterface.CanAppendAdditionalData
// (Event, Public, BlueprintEvent, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool IVALUI_ItemAcquisitionNotificationInterface::CanAppendAdditionalData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_ItemAcquisitionNotificationInterface", "CanAppendAdditionalData");

	Params::IVALUI_ItemAcquisitionNotificationInterface_CanAppendAdditionalData_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ValeriaUI.VALUI_ItemAcquisitionNotificationInterface.AppendAdditionalData
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FValeriaItem                Item                                                             (Parm, NativeAccessSpecifierPublic)

void IVALUI_ItemAcquisitionNotificationInterface::AppendAdditionalData(const struct FValeriaItem& InItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_ItemAcquisitionNotificationInterface", "AppendAdditionalData");

	Params::IVALUI_ItemAcquisitionNotificationInterface_AppendAdditionalData_Params Parms{};

	Parms.Item = InItem;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_ItemAcquisitionNotifier.Setup
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UInventoryComponent*         SourceInventoryComponent                                         (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UVALUI_NotificationQueue*    TargetNotificationQueue                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSoftClassPtr<class UUserWidget>   InWidgetClass                                                    (ConstParm, Parm, OutParm, ReferenceParm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_ItemAcquisitionNotifier::Setup(class UInventoryComponent* InSourceInventoryComponent, class UVALUI_NotificationQueue* InTargetNotificationQueue, TSoftClassPtr<class UUserWidget>& InInWidgetClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_ItemAcquisitionNotifier", "Setup");

	Params::UVALUI_ItemAcquisitionNotifier_Setup_Params Parms{};

	Parms.SourceInventoryComponent = InSourceInventoryComponent;
	Parms.TargetNotificationQueue = InTargetNotificationQueue;
	Parms.InWidgetClass = InInWidgetClass;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// DelegateFunction ValeriaUI.VALUI_ItemAcquisitionNotifier.OnCreateItemAcquisitionNotification__DelegateSignature
// (Public, Delegate)
// Parameters:
// class UVALUI_ItemAcquisitionNotifier*Notifier                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWidget*                     ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UWidget* UVALUI_ItemAcquisitionNotifier::OnCreateItemAcquisitionNotification__DelegateSignature(class UVALUI_ItemAcquisitionNotifier* InNotifier)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_ItemAcquisitionNotifier", "OnCreateItemAcquisitionNotification__DelegateSignature");

	Params::UVALUI_ItemAcquisitionNotifier_OnCreateItemAcquisitionNotification__DelegateSignature_Params Parms{};

	Parms.Notifier = InNotifier;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ValeriaUI.VALUI_ItemAcquisitionNotifier.HandleNotificationDismissed
// (Final, Native, Private, HasOutParams, HasDefaults)
// Parameters:
// class UVALUI_NotificationQueue*    NotificationQueue                                                (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGuid                       AffectedNotificationId                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWidget*                     NotificationWidget                                               (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_ItemAcquisitionNotifier::HandleNotificationDismissed(class UVALUI_NotificationQueue* InNotificationQueue, struct FGuid& InAffectedNotificationId, class UWidget* InNotificationWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_ItemAcquisitionNotifier", "HandleNotificationDismissed");

	Params::UVALUI_ItemAcquisitionNotifier_HandleNotificationDismissed_Params Parms{};

	Parms.NotificationQueue = InNotificationQueue;
	Parms.AffectedNotificationId = InAffectedNotificationId;
	Parms.NotificationWidget = InNotificationWidget;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.VALUI_ItemAcquisitionNotifier.HandleItemAcquired
// (Final, Native, Private)
// Parameters:
// struct FValeriaItem                Item                                                             (Parm, NativeAccessSpecifierPublic)

void UVALUI_ItemAcquisitionNotifier::HandleItemAcquired(const struct FValeriaItem& InItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_ItemAcquisitionNotifier", "HandleItemAcquired");

	Params::UVALUI_ItemAcquisitionNotifier_HandleItemAcquired_Params Parms{};

	Parms.Item = InItem;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.VALUI_ItemDragDrop.GetItem
// (Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FValeriaItem                ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FValeriaItem UVALUI_ItemDragDrop::GetItem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_ItemDragDrop", "GetItem");

	Params::UVALUI_ItemDragDrop_GetItem_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// DelegateFunction ValeriaUI.VALUI_ListView_Styled.VALUI_OnListViewUserScrolled__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// float                              ScrollFraction                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_ListView_Styled::VALUI_OnListViewUserScrolled__DelegateSignature(float InScrollFraction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_ListView_Styled", "VALUI_OnListViewUserScrolled__DelegateSignature");

	Params::UVALUI_ListView_Styled_VALUI_OnListViewUserScrolled__DelegateSignature_Params Parms{};

	Parms.ScrollFraction = InScrollFraction;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction ValeriaUI.VALUI_ListView_Styled.VALUI_OnListViewUserMouseWheelScrolled__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// float                              DesiredOffset                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_ListView_Styled::VALUI_OnListViewUserMouseWheelScrolled__DelegateSignature(float InDesiredOffset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_ListView_Styled", "VALUI_OnListViewUserMouseWheelScrolled__DelegateSignature");

	Params::UVALUI_ListView_Styled_VALUI_OnListViewUserMouseWheelScrolled__DelegateSignature_Params Parms{};

	Parms.DesiredOffset = InDesiredOffset;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_ListView_Styled.ShouldScrollBarBeVisible
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVALUI_ListView_Styled::ShouldScrollBarBeVisible()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_ListView_Styled", "ShouldScrollBarBeVisible");

	Params::UVALUI_ListView_Styled_ShouldScrollBarBeVisible_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// DelegateFunction ValeriaUI.VALUI_ListView_Styled.OnListItemSelectionChangedWithInputTypeDynamic__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UObject*                     Item                                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsSelected                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ESelectInfo             SelectType                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_ListView_Styled::OnListItemSelectionChangedWithInputTypeDynamic__DelegateSignature(class UObject* InItem, bool InbIsSelected, enum class ESelectInfo InSelectType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_ListView_Styled", "OnListItemSelectionChangedWithInputTypeDynamic__DelegateSignature");

	Params::UVALUI_ListView_Styled_OnListItemSelectionChangedWithInputTypeDynamic__DelegateSignature_Params Parms{};

	Parms.Item = InItem;
	Parms.bIsSelected = InbIsSelected;
	Parms.SelectType = InSelectType;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction ValeriaUI.VALUI_ListView_Styled.OnListItemsChanged__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams)
// Parameters:
// TArray<class UObject*>             AddedItems                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<class UObject*>             RemovedItems                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UVALUI_ListView_Styled::OnListItemsChanged__DelegateSignature(TArray<class UObject*>& InAddedItems, TArray<class UObject*>& InRemovedItems)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_ListView_Styled", "OnListItemsChanged__DelegateSignature");

	Params::UVALUI_ListView_Styled_OnListItemsChanged__DelegateSignature_Params Parms{};

	Parms.AddedItems = InAddedItems;
	Parms.RemovedItems = InRemovedItems;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_ListView_Styled.GetScrollbarDistanceFromBottom
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UVALUI_ListView_Styled::GetScrollbarDistanceFromBottom()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_ListView_Styled", "GetScrollbarDistanceFromBottom");

	Params::UVALUI_ListView_Styled_GetScrollbarDistanceFromBottom_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ValeriaUI.VALUI_ListView_Styled.GetItemsWithinRange
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              StartingIndex                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Range                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UObject*>             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class UObject*> UVALUI_ListView_Styled::GetItemsWithinRange(int32& InStartingIndex, int32& InRange)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_ListView_Styled", "GetItemsWithinRange");

	Params::UVALUI_ListView_Styled_GetItemsWithinRange_Params Parms{};

	Parms.StartingIndex = InStartingIndex;
	Parms.Range = InRange;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ValeriaUI.VALUI_LoadingScreenBlackWidget.GetFadeFromBlackAnimation
// (Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UWidgetAnimation*            ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UWidgetAnimation* UVALUI_LoadingScreenBlackWidget::GetFadeFromBlackAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_LoadingScreenBlackWidget", "GetFadeFromBlackAnimation");

	Params::UVALUI_LoadingScreenBlackWidget_GetFadeFromBlackAnimation_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ValeriaUI.VALUI_LoadingScreenBlackWidget.FadeFromNoneToBlack
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              FadeTimeInSeconds                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_LoadingScreenBlackWidget::FadeFromNoneToBlack(float InFadeTimeInSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_LoadingScreenBlackWidget", "FadeFromNoneToBlack");

	Params::UVALUI_LoadingScreenBlackWidget_FadeFromNoneToBlack_Params Parms{};

	Parms.FadeTimeInSeconds = InFadeTimeInSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_LoadingScreenBlackWidget.FadeFromBlackToNone
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              FadeTimeInSeconds                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_LoadingScreenBlackWidget::FadeFromBlackToNone(float InFadeTimeInSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_LoadingScreenBlackWidget", "FadeFromBlackToNone");

	Params::UVALUI_LoadingScreenBlackWidget_FadeFromBlackToNone_Params Parms{};

	Parms.FadeTimeInSeconds = InFadeTimeInSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_MainHUDViewModel.ShowRightHudElements
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UVALUI_MainHUDViewModel::ShowRightHudElements()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_MainHUDViewModel", "ShowRightHudElements");

	Params::UVALUI_MainHUDViewModel_ShowRightHudElements_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.VALUI_MainHUDViewModel.HideRightHudElements
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UVALUI_MainHUDViewModel::HideRightHudElements()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_MainHUDViewModel", "HideRightHudElements");

	Params::UVALUI_MainHUDViewModel_HideRightHudElements_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.VALUI_MainHUDWidget.HandleOnViewModelSocialTrackingDataChanged
// (Final, Native, Protected)
// Parameters:
// class UObject*                     Object                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFieldNotificationId        Field                                                            (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_MainHUDWidget::HandleOnViewModelSocialTrackingDataChanged(class UObject* InObject, const struct FFieldNotificationId& InField)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_MainHUDWidget", "HandleOnViewModelSocialTrackingDataChanged");

	Params::UVALUI_MainHUDWidget_HandleOnViewModelSocialTrackingDataChanged_Params Parms{};

	Parms.Object = InObject;
	Parms.Field = InField;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.VALUI_MainHUDWidget.HandleOnViewModelHUDStateChanged
// (Final, Native, Protected)
// Parameters:
// class UObject*                     Object                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFieldNotificationId        Field                                                            (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_MainHUDWidget::HandleOnViewModelHUDStateChanged(class UObject* InObject, const struct FFieldNotificationId& InField)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_MainHUDWidget", "HandleOnViewModelHUDStateChanged");

	Params::UVALUI_MainHUDWidget_HandleOnViewModelHUDStateChanged_Params Parms{};

	Parms.Object = InObject;
	Parms.Field = InField;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.VALUI_MainHUDWidget.HandleOnSocialTrackingDataChanged
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FVALUI_SocialTrackingData   SocialData                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UVALUI_MainHUDWidget::HandleOnSocialTrackingDataChanged(struct FVALUI_SocialTrackingData& InSocialData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_MainHUDWidget", "HandleOnSocialTrackingDataChanged");

	Params::UVALUI_MainHUDWidget_HandleOnSocialTrackingDataChanged_Params Parms{};

	Parms.SocialData = InSocialData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_MainHUDWidget.HandleOnHUDStateChanged
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FVALUI_MainHUDState         State                                                            (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UVALUI_MainHUDWidget::HandleOnHUDStateChanged(struct FVALUI_MainHUDState& InState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_MainHUDWidget", "HandleOnHUDStateChanged");

	Params::UVALUI_MainHUDWidget_HandleOnHUDStateChanged_Params Parms{};

	Parms.State = InState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_MultiLineEditableTextBoxStyle.ApplyToTextBox
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// class UMultiLineEditableTextBox*   TextWidget                                                       (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_MultiLineEditableTextBoxStyle::ApplyToTextBox(class UMultiLineEditableTextBox* InTextWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_MultiLineEditableTextBoxStyle", "ApplyToTextBox");

	Params::UVALUI_MultiLineEditableTextBoxStyle_ApplyToTextBox_Params Parms{};

	Parms.TextWidget = InTextWidget;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.VALUI_MultiLineEditableTextBox_Styled.SetTextBoxStyle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UVALUI_MultiLineEditableTextBoxStyle*NewStyle                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_MultiLineEditableTextBox_Styled::SetTextBoxStyle(class UVALUI_MultiLineEditableTextBoxStyle* InNewStyle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_MultiLineEditableTextBox_Styled", "SetTextBoxStyle");

	Params::UVALUI_MultiLineEditableTextBox_Styled_SetTextBoxStyle_Params Parms{};

	Parms.NewStyle = InNewStyle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.VALUI_MultiLineEditableTextStyle.ApplyToTextBlock
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// class UMultiLineEditableText*      TextWidget                                                       (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_MultiLineEditableTextStyle::ApplyToTextBlock(class UMultiLineEditableText* InTextWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_MultiLineEditableTextStyle", "ApplyToTextBlock");

	Params::UVALUI_MultiLineEditableTextStyle_ApplyToTextBlock_Params Parms{};

	Parms.TextWidget = InTextWidget;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.VALUI_MultiLineEditableText_Styled.SetTextStyle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UVALUI_MultiLineEditableTextStyle*NewStyle                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_MultiLineEditableText_Styled::SetTextStyle(class UVALUI_MultiLineEditableTextStyle* InNewStyle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_MultiLineEditableText_Styled", "SetTextStyle");

	Params::UVALUI_MultiLineEditableText_Styled_SetTextStyle_Params Parms{};

	Parms.NewStyle = InNewStyle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.VALUI_NewsInbox_Widget.OnLoadSuccess
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UVALUI_NewsInbox_Widget::OnLoadSuccess()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_NewsInbox_Widget", "OnLoadSuccess");

	Params::UVALUI_NewsInbox_Widget_OnLoadSuccess_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.VALUI_NewsInbox_Widget.LoadNewsInboxMessageDefinitions
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UVALUI_NewsInbox_Widget::LoadNewsInboxMessageDefinitions()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_NewsInbox_Widget", "LoadNewsInboxMessageDefinitions");

	Params::UVALUI_NewsInbox_Widget_LoadNewsInboxMessageDefinitions_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.VALUI_NewsInbox_Widget.GetValeriaPlayer
// (Final, Native, Private, Const)
// Parameters:
// class AValeriaPlayerController*    ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class AValeriaPlayerController* UVALUI_NewsInbox_Widget::GetValeriaPlayer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_NewsInbox_Widget", "GetValeriaPlayer");

	Params::UVALUI_NewsInbox_Widget_GetValeriaPlayer_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ValeriaUI.VALUI_NewsInbox_Widget.GetNewsInboxMessageDefinitionFromRewardIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              Index                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               Claimed                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UVALUI_NewsInboxMessageDataAsset*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UVALUI_NewsInboxMessageDataAsset* UVALUI_NewsInbox_Widget::GetNewsInboxMessageDefinitionFromRewardIndex(int32 InIndex, bool InClaimed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_NewsInbox_Widget", "GetNewsInboxMessageDefinitionFromRewardIndex");

	Params::UVALUI_NewsInbox_Widget_GetNewsInboxMessageDefinitionFromRewardIndex_Params Parms{};

	Parms.Index = InIndex;
	Parms.Claimed = InClaimed;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ValeriaUI.VALUI_NewsInbox_Widget.GetNewsInboxMessageDefinitionByType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EVAL_NewsInboxMessageTypeEMessageType                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UVALUI_NewsInboxMessageDataAsset*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UVALUI_NewsInboxMessageDataAsset* UVALUI_NewsInbox_Widget::GetNewsInboxMessageDefinitionByType(enum class EVAL_NewsInboxMessageType InEMessageType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_NewsInbox_Widget", "GetNewsInboxMessageDefinitionByType");

	Params::UVALUI_NewsInbox_Widget_GetNewsInboxMessageDefinitionByType_Params Parms{};

	Parms.EMessageType = InEMessageType;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ValeriaUI.VALUI_NewsInbox_Widget.BP_OnRewardRefresh
// (BlueprintCosmetic, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UVALUI_NewsInbox_Widget::BP_OnRewardRefresh()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_NewsInbox_Widget", "BP_OnRewardRefresh");

	Params::UVALUI_NewsInbox_Widget_BP_OnRewardRefresh_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_NewsInbox_Widget.BP_OnRedemptionSuccess
// (BlueprintCosmetic, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UVALUI_NewsInbox_Widget::BP_OnRedemptionSuccess()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_NewsInbox_Widget", "BP_OnRedemptionSuccess");

	Params::UVALUI_NewsInbox_Widget_BP_OnRedemptionSuccess_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_NewsInbox_Widget.BP_OnRedemptionFailure
// (BlueprintCosmetic, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UVALUI_NewsInbox_Widget::BP_OnRedemptionFailure()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_NewsInbox_Widget", "BP_OnRedemptionFailure");

	Params::UVALUI_NewsInbox_Widget_BP_OnRedemptionFailure_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_NewsInbox_Widget.BP_OnLoadSuccess
// (BlueprintCosmetic, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UVALUI_NewsInbox_Widget::BP_OnLoadSuccess()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_NewsInbox_Widget", "BP_OnLoadSuccess");

	Params::UVALUI_NewsInbox_Widget_BP_OnLoadSuccess_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_NotificationWidgetInterface.MatchesNotification
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        NotificationText                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// TSoftObjectPtr<class UTexture2D>   NotificationIcon                                                 (ConstParm, Parm, OutParm, ReferenceParm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool IVALUI_NotificationWidgetInterface::MatchesNotification(class FText& InNotificationText, TSoftObjectPtr<class UTexture2D>& InNotificationIcon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_NotificationWidgetInterface", "MatchesNotification");

	Params::IVALUI_NotificationWidgetInterface_MatchesNotification_Params Parms{};

	Parms.NotificationText = InNotificationText;
	Parms.NotificationIcon = InNotificationIcon;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ValeriaUI.VALUI_NotificationWidgetInterface.HandleNotificationShown
// (Event, Public, HasOutParams, HasDefaults, BlueprintEvent)
// Parameters:
// class UVALUI_NotificationQueue*    NotificationQueue                                                (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGuid                       NotificationId                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IVALUI_NotificationWidgetInterface::HandleNotificationShown(class UVALUI_NotificationQueue* InNotificationQueue, struct FGuid& InNotificationId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_NotificationWidgetInterface", "HandleNotificationShown");

	Params::IVALUI_NotificationWidgetInterface_HandleNotificationShown_Params Parms{};

	Parms.NotificationQueue = InNotificationQueue;
	Parms.NotificationId = InNotificationId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_NotificationWidgetInterface.HandleNotificationDismissed
// (Event, Public, HasOutParams, HasDefaults, BlueprintEvent)
// Parameters:
// class UVALUI_NotificationQueue*    NotificationQueue                                                (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGuid                       NotificationId                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IVALUI_NotificationWidgetInterface::HandleNotificationDismissed(class UVALUI_NotificationQueue* InNotificationQueue, struct FGuid& InNotificationId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_NotificationWidgetInterface", "HandleNotificationDismissed");

	Params::IVALUI_NotificationWidgetInterface_HandleNotificationDismissed_Params Parms{};

	Parms.NotificationQueue = InNotificationQueue;
	Parms.NotificationId = InNotificationId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_NotificationQueue.TryDismissNotification
// (Final, BlueprintCosmetic, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FGuid                       NotificationId                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVALUI_NotificationQueue::TryDismissNotification(struct FGuid& InNotificationId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_NotificationQueue", "TryDismissNotification");

	Params::UVALUI_NotificationQueue_TryDismissNotification_Params Parms{};

	Parms.NotificationId = InNotificationId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ValeriaUI.VALUI_NotificationQueue.PushNotification
// (Final, BlueprintCosmetic, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UWidget*                     NotificationWidget                                               (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGuid                       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FGuid UVALUI_NotificationQueue::PushNotification(class UWidget* InNotificationWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_NotificationQueue", "PushNotification");

	Params::UVALUI_NotificationQueue_PushNotification_Params Parms{};

	Parms.NotificationWidget = InNotificationWidget;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ValeriaUI.VALUI_NotificationQueue.OnNotificationShown
// (Final, BlueprintCosmetic, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FGuid                       NotificationId                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_NotificationQueue::OnNotificationShown(struct FGuid& InNotificationId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_NotificationQueue", "OnNotificationShown");

	Params::UVALUI_NotificationQueue_OnNotificationShown_Params Parms{};

	Parms.NotificationId = InNotificationId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// DelegateFunction ValeriaUI.VALUI_NotificationQueue.OnNotificationPushed__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams, HasDefaults)
// Parameters:
// class UVALUI_NotificationQueue*    NotificationQueue                                                (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGuid                       AffectedNotificationId                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_NotificationQueue::OnNotificationPushed__DelegateSignature(class UVALUI_NotificationQueue* InNotificationQueue, struct FGuid& InAffectedNotificationId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_NotificationQueue", "OnNotificationPushed__DelegateSignature");

	Params::UVALUI_NotificationQueue_OnNotificationPushed__DelegateSignature_Params Parms{};

	Parms.NotificationQueue = InNotificationQueue;
	Parms.AffectedNotificationId = InAffectedNotificationId;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction ValeriaUI.VALUI_NotificationQueue.OnNotificationDismissed__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams, HasDefaults)
// Parameters:
// class UVALUI_NotificationQueue*    NotificationQueue                                                (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGuid                       AffectedNotificationId                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWidget*                     NotificationWidget                                               (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_NotificationQueue::OnNotificationDismissed__DelegateSignature(class UVALUI_NotificationQueue* InNotificationQueue, struct FGuid& InAffectedNotificationId, class UWidget* InNotificationWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_NotificationQueue", "OnNotificationDismissed__DelegateSignature");

	Params::UVALUI_NotificationQueue_OnNotificationDismissed__DelegateSignature_Params Parms{};

	Parms.NotificationQueue = InNotificationQueue;
	Parms.AffectedNotificationId = InAffectedNotificationId;
	Parms.NotificationWidget = InNotificationWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_NotificationQueue.GetNotificationById
// (Final, BlueprintCosmetic, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGuid                       NotificationId                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWidget*                     ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UWidget* UVALUI_NotificationQueue::GetNotificationById(struct FGuid& InNotificationId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_NotificationQueue", "GetNotificationById");

	Params::UVALUI_NotificationQueue_GetNotificationById_Params Parms{};

	Parms.NotificationId = InNotificationId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ValeriaUI.VALUI_NotificationQueue.GetLastNotificationOnStack
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UWidget*                     ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UWidget* UVALUI_NotificationQueue::GetLastNotificationOnStack()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_NotificationQueue", "GetLastNotificationOnStack");

	Params::UVALUI_NotificationQueue_GetLastNotificationOnStack_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ValeriaUI.VALUI_NotificationQueue.GetIdForNotification
// (Final, BlueprintCosmetic, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UWidget*                     NotificationWidget                                               (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGuid                       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FGuid UVALUI_NotificationQueue::GetIdForNotification(class UWidget* InNotificationWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_NotificationQueue", "GetIdForNotification");

	Params::UVALUI_NotificationQueue_GetIdForNotification_Params Parms{};

	Parms.NotificationWidget = InNotificationWidget;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ValeriaUI.VALUI_NotificationQueue.GetAlllNotificationIds
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FGuid>               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FGuid> UVALUI_NotificationQueue::GetAlllNotificationIds()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_NotificationQueue", "GetAlllNotificationIds");

	Params::UVALUI_NotificationQueue_GetAlllNotificationIds_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ValeriaUI.VALUI_PhotoCameraScreenBase.SetLookMode
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// enum class EVALUI_PhotoCameraScreenLookModeValue                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_PhotoCameraScreenBase::SetLookMode(enum class EVALUI_PhotoCameraScreenLookMode InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_PhotoCameraScreenBase", "SetLookMode");

	Params::UVALUI_PhotoCameraScreenBase_SetLookMode_Params Parms{};

	Parms.Value = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.VALUI_PhotoCameraScreenBase.AccumulateLookModeInput
// (Final, Native, Protected, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGeometry                   InGeometry                                                       (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FPointerEvent               InMouseEvent                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               bInvertYAxis                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_PhotoCameraScreenBase::AccumulateLookModeInput(struct FGeometry& InInGeometry, struct FPointerEvent& InInMouseEvent, bool InbInvertYAxis)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_PhotoCameraScreenBase", "AccumulateLookModeInput");

	Params::UVALUI_PhotoCameraScreenBase_AccumulateLookModeInput_Params Parms{};

	Parms.InGeometry = InInGeometry;
	Parms.InMouseEvent = InInMouseEvent;
	Parms.bInvertYAxis = InbInvertYAxis;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.VALUI_UIManagerWidgetBase.RegisterCallbacksAndBroadcastNewDragDrop
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UVALUI_ItemDragDrop*         ItemDragDrop                                                     (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_UIManagerWidgetBase::RegisterCallbacksAndBroadcastNewDragDrop(class UVALUI_ItemDragDrop* InItemDragDrop)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_UIManagerWidgetBase", "RegisterCallbacksAndBroadcastNewDragDrop");

	Params::UVALUI_UIManagerWidgetBase_RegisterCallbacksAndBroadcastNewDragDrop_Params Parms{};

	Parms.ItemDragDrop = InItemDragDrop;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.VALUI_UIManagerWidgetBase.OpenVillagerStore
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              VillagerConfigId                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_UIManagerWidgetBase::OpenVillagerStore(int32 InVillagerConfigId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_UIManagerWidgetBase", "OpenVillagerStore");

	Params::UVALUI_UIManagerWidgetBase_OpenVillagerStore_Params Parms{};

	Parms.VillagerConfigId = InVillagerConfigId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.VALUI_UIManagerWidgetBase.OpenBook
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              BookId                                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_UIManagerWidgetBase::OpenBook(int32 InBookId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_UIManagerWidgetBase", "OpenBook");

	Params::UVALUI_UIManagerWidgetBase_OpenBook_Params Parms{};

	Parms.BookId = InBookId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.VALUI_UIManagerWidgetBase.OnItemDragDropped
// (Final, Native, Private)
// Parameters:
// class UDragDropOperation*          Operation                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_UIManagerWidgetBase::OnItemDragDropped(class UDragDropOperation* InOperation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_UIManagerWidgetBase", "OnItemDragDropped");

	Params::UVALUI_UIManagerWidgetBase_OnItemDragDropped_Params Parms{};

	Parms.Operation = InOperation;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.VALUI_UIManagerWidgetBase.NavigateToRecentPhotos
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FGuid                       IdOfPhotoToNavigateTo                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bShouldSelectPhoto                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_UIManagerWidgetBase::NavigateToRecentPhotos(struct FGuid& InIdOfPhotoToNavigateTo, bool InbShouldSelectPhoto)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_UIManagerWidgetBase", "NavigateToRecentPhotos");

	Params::UVALUI_UIManagerWidgetBase_NavigateToRecentPhotos_Params Parms{};

	Parms.IdOfPhotoToNavigateTo = InIdOfPhotoToNavigateTo;
	Parms.bShouldSelectPhoto = InbShouldSelectPhoto;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.VALUI_UIManagerWidgetBase.NavigateToOnlinePhotoAlbum
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FGuid                       IdOfPhotoToNavigateTo                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bShouldSelectPhoto                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_UIManagerWidgetBase::NavigateToOnlinePhotoAlbum(struct FGuid& InIdOfPhotoToNavigateTo, bool InbShouldSelectPhoto)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_UIManagerWidgetBase", "NavigateToOnlinePhotoAlbum");

	Params::UVALUI_UIManagerWidgetBase_NavigateToOnlinePhotoAlbum_Params Parms{};

	Parms.IdOfPhotoToNavigateTo = InIdOfPhotoToNavigateTo;
	Parms.bShouldSelectPhoto = InbShouldSelectPhoto;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.VALUI_UIManagerWidgetBase.Implementation_ToggleGameplayMenuMode
// (BlueprintCosmetic, Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EVAL_GameplayMenuMode   Mode                                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_UIManagerWidgetBase::Implementation_ToggleGameplayMenuMode(enum class EVAL_GameplayMenuMode InMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_UIManagerWidgetBase", "Implementation_ToggleGameplayMenuMode");

	Params::UVALUI_UIManagerWidgetBase_Implementation_ToggleGameplayMenuMode_Params Parms{};

	Parms.Mode = InMode;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_UIManagerWidgetBase.Implementation_ToggleCollectionsMenu
// (BlueprintCosmetic, Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EVAL_CollectionsTabStateTabState                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_UIManagerWidgetBase::Implementation_ToggleCollectionsMenu(enum class EVAL_CollectionsTabState& InTabState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_UIManagerWidgetBase", "Implementation_ToggleCollectionsMenu");

	Params::UVALUI_UIManagerWidgetBase_Implementation_ToggleCollectionsMenu_Params Parms{};

	Parms.TabState = InTabState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_UIManagerWidgetBase.Implementation_OpenVillagerStore
// (BlueprintCosmetic, Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              VillagerConfigId                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_UIManagerWidgetBase::Implementation_OpenVillagerStore(int32 InVillagerConfigId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_UIManagerWidgetBase", "Implementation_OpenVillagerStore");

	Params::UVALUI_UIManagerWidgetBase_Implementation_OpenVillagerStore_Params Parms{};

	Parms.VillagerConfigId = InVillagerConfigId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_UIManagerWidgetBase.Implementation_OpenSubgameScreen
// (BlueprintCosmetic, Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USubgameConfig*              InSubgameConfig                                                  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_UIManagerWidgetBase::Implementation_OpenSubgameScreen(class USubgameConfig* InInSubgameConfig)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_UIManagerWidgetBase", "Implementation_OpenSubgameScreen");

	Params::UVALUI_UIManagerWidgetBase_Implementation_OpenSubgameScreen_Params Parms{};

	Parms.InSubgameConfig = InInSubgameConfig;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_UIManagerWidgetBase.Implementation_OpenStore
// (BlueprintCosmetic, Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UVillagerStoreConfig*        StoreConfig                                                      (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_UIManagerWidgetBase::Implementation_OpenStore(class UVillagerStoreConfig* InStoreConfig)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_UIManagerWidgetBase", "Implementation_OpenStore");

	Params::UVALUI_UIManagerWidgetBase_Implementation_OpenStore_Params Parms{};

	Parms.StoreConfig = InStoreConfig;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_UIManagerWidgetBase.Implementation_OpenStables
// (BlueprintCosmetic, Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      StablesActor                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_UIManagerWidgetBase::Implementation_OpenStables(class AActor* InStablesActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_UIManagerWidgetBase", "Implementation_OpenStables");

	Params::UVALUI_UIManagerWidgetBase_Implementation_OpenStables_Params Parms{};

	Parms.StablesActor = InStablesActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_UIManagerWidgetBase.Implementation_OpenSignTeleporter
// (BlueprintCosmetic, Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      TeleporterActor                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_UIManagerWidgetBase::Implementation_OpenSignTeleporter(class AActor* InTeleporterActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_UIManagerWidgetBase", "Implementation_OpenSignTeleporter");

	Params::UVALUI_UIManagerWidgetBase_Implementation_OpenSignTeleporter_Params Parms{};

	Parms.TeleporterActor = InTeleporterActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_UIManagerWidgetBase.Implementation_OpenShippingBin
// (BlueprintCosmetic, Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UShippingBinComponent*       ShippingBinComponent                                             (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_UIManagerWidgetBase::Implementation_OpenShippingBin(class UShippingBinComponent* InShippingBinComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_UIManagerWidgetBase", "Implementation_OpenShippingBin");

	Params::UVALUI_UIManagerWidgetBase_Implementation_OpenShippingBin_Params Parms{};

	Parms.ShippingBinComponent = InShippingBinComponent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_UIManagerWidgetBase.Implementation_OpenRequestItem
// (BlueprintCosmetic, Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Tag                                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_UIManagerWidgetBase::Implementation_OpenRequestItem(class FName InTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_UIManagerWidgetBase", "Implementation_OpenRequestItem");

	Params::UVALUI_UIManagerWidgetBase_Implementation_OpenRequestItem_Params Parms{};

	Parms.Tag = InTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_UIManagerWidgetBase.Implementation_OpenRepairStation
// (BlueprintCosmetic, Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      RepairStationActor                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAllowPurchases                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAllowRepairKitsFromStorage                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_UIManagerWidgetBase::Implementation_OpenRepairStation(class AActor* InRepairStationActor, bool InbAllowPurchases, bool InbAllowRepairKitsFromStorage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_UIManagerWidgetBase", "Implementation_OpenRepairStation");

	Params::UVALUI_UIManagerWidgetBase_Implementation_OpenRepairStation_Params Parms{};

	Parms.RepairStationActor = InRepairStationActor;
	Parms.bAllowPurchases = InbAllowPurchases;
	Parms.bAllowRepairKitsFromStorage = InbAllowRepairKitsFromStorage;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_UIManagerWidgetBase.Implementation_OpenRecipeInspiration
// (BlueprintCosmetic, Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UVALUI_UIManagerWidgetBase::Implementation_OpenRecipeInspiration()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_UIManagerWidgetBase", "Implementation_OpenRecipeInspiration");

	Params::UVALUI_UIManagerWidgetBase_Implementation_OpenRecipeInspiration_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_UIManagerWidgetBase.Implementation_OpenPremiumStore
// (BlueprintCosmetic, Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVAL_OpenStorePayload       Payload                                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UVALUI_UIManagerWidgetBase::Implementation_OpenPremiumStore(struct FVAL_OpenStorePayload& InPayload)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_UIManagerWidgetBase", "Implementation_OpenPremiumStore");

	Params::UVALUI_UIManagerWidgetBase_Implementation_OpenPremiumStore_Params Parms{};

	Parms.Payload = InPayload;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_UIManagerWidgetBase.Implementation_OpenPlayerStorage
// (BlueprintCosmetic, Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UVALUI_UIManagerWidgetBase::Implementation_OpenPlayerStorage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_UIManagerWidgetBase", "Implementation_OpenPlayerStorage");

	Params::UVALUI_UIManagerWidgetBase_Implementation_OpenPlayerStorage_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_UIManagerWidgetBase.Implementation_OpenPetBonus
// (BlueprintCosmetic, Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSet<TSoftObjectPtr<class UVAL_CharacterCustomizationItem_Pet>>Items                                                            (ConstParm, Parm, OutParm, ReferenceParm, UObjectWrapper, NativeAccessSpecifierPublic)

void UVALUI_UIManagerWidgetBase::Implementation_OpenPetBonus(TSet<TSoftObjectPtr<class UVAL_CharacterCustomizationItem_Pet>>& InItems)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_UIManagerWidgetBase", "Implementation_OpenPetBonus");

	Params::UVALUI_UIManagerWidgetBase_Implementation_OpenPetBonus_Params Parms{};

	Parms.Items = InItems;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_UIManagerWidgetBase.Implementation_OpenNewsInbox
// (BlueprintCosmetic, Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UVALUI_UIManagerWidgetBase::Implementation_OpenNewsInbox()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_UIManagerWidgetBase", "Implementation_OpenNewsInbox");

	Params::UVALUI_UIManagerWidgetBase_Implementation_OpenNewsInbox_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_UIManagerWidgetBase.Implementation_OpenMenuHub
// (BlueprintCosmetic, Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UVALUI_UIManagerWidgetBase::Implementation_OpenMenuHub()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_UIManagerWidgetBase", "Implementation_OpenMenuHub");

	Params::UVALUI_UIManagerWidgetBase_Implementation_OpenMenuHub_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_UIManagerWidgetBase.Implementation_OpenMailbox
// (BlueprintCosmetic, Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UVALUI_UIManagerWidgetBase::Implementation_OpenMailbox()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_UIManagerWidgetBase", "Implementation_OpenMailbox");

	Params::UVALUI_UIManagerWidgetBase_Implementation_OpenMailbox_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_UIManagerWidgetBase.Implementation_OpenItemVariantCustomizer
// (BlueprintCosmetic, Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UItemVariantCustomizerComponent*Customizer                                                       (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_UIManagerWidgetBase::Implementation_OpenItemVariantCustomizer(class UItemVariantCustomizerComponent* InCustomizer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_UIManagerWidgetBase", "Implementation_OpenItemVariantCustomizer");

	Params::UVALUI_UIManagerWidgetBase_Implementation_OpenItemVariantCustomizer_Params Parms{};

	Parms.Customizer = InCustomizer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_UIManagerWidgetBase.Implementation_OpenHousingEdit
// (BlueprintCosmetic, Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHousingPlotActor*           HousingPlot                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_UIManagerWidgetBase::Implementation_OpenHousingEdit(class AHousingPlotActor* InHousingPlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_UIManagerWidgetBase", "Implementation_OpenHousingEdit");

	Params::UVALUI_UIManagerWidgetBase_Implementation_OpenHousingEdit_Params Parms{};

	Parms.HousingPlot = InHousingPlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_UIManagerWidgetBase.Implementation_OpenHouseUpgrade
// (BlueprintCosmetic, Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ULevelerComponent*           LevelerComponent                                                 (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_UIManagerWidgetBase::Implementation_OpenHouseUpgrade(class ULevelerComponent* InLevelerComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_UIManagerWidgetBase", "Implementation_OpenHouseUpgrade");

	Params::UVALUI_UIManagerWidgetBase_Implementation_OpenHouseUpgrade_Params Parms{};

	Parms.LevelerComponent = InLevelerComponent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_UIManagerWidgetBase.Implementation_OpenHomeTeleporter
// (BlueprintCosmetic, Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ATeleporterActor*            Teleporter                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_UIManagerWidgetBase::Implementation_OpenHomeTeleporter(class ATeleporterActor* InTeleporter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_UIManagerWidgetBase", "Implementation_OpenHomeTeleporter");

	Params::UVALUI_UIManagerWidgetBase_Implementation_OpenHomeTeleporter_Params Parms{};

	Parms.Teleporter = InTeleporter;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_UIManagerWidgetBase.Implementation_OpenCVarMenu
// (BlueprintCosmetic, Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UVALUI_UIManagerWidgetBase::Implementation_OpenCVarMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_UIManagerWidgetBase", "Implementation_OpenCVarMenu");

	Params::UVALUI_UIManagerWidgetBase_Implementation_OpenCVarMenu_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_UIManagerWidgetBase.Implementation_OpenCrafter
// (BlueprintCosmetic, Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCrafterComponent*           CrafterComponent                                                 (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_UIManagerWidgetBase::Implementation_OpenCrafter(class UCrafterComponent* InCrafterComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_UIManagerWidgetBase", "Implementation_OpenCrafter");

	Params::UVALUI_UIManagerWidgetBase_Implementation_OpenCrafter_Params Parms{};

	Parms.CrafterComponent = InCrafterComponent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_UIManagerWidgetBase.Implementation_OpenCommunityActivities
// (BlueprintCosmetic, Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UVALUI_UIManagerWidgetBase::Implementation_OpenCommunityActivities()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_UIManagerWidgetBase", "Implementation_OpenCommunityActivities");

	Params::UVALUI_UIManagerWidgetBase_Implementation_OpenCommunityActivities_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_UIManagerWidgetBase.Implementation_OpenBundleDropOffMenu
// (BlueprintCosmetic, Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBundleShrineConfig*         BundleConfig                                                     (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_UIManagerWidgetBase::Implementation_OpenBundleDropOffMenu(class UBundleShrineConfig* InBundleConfig)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_UIManagerWidgetBase", "Implementation_OpenBundleDropOffMenu");

	Params::UVALUI_UIManagerWidgetBase_Implementation_OpenBundleDropOffMenu_Params Parms{};

	Parms.BundleConfig = InBundleConfig;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_UIManagerWidgetBase.Implementation_OpenBook
// (BlueprintCosmetic, Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              BookId                                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_UIManagerWidgetBase::Implementation_OpenBook(int32 InBookId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_UIManagerWidgetBase", "Implementation_OpenBook");

	Params::UVALUI_UIManagerWidgetBase_Implementation_OpenBook_Params Parms{};

	Parms.BookId = InBookId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_UIManagerWidgetBase.Implementation_OpenAmmoMenu
// (BlueprintCosmetic, Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EAmmoType               AmmoType                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_UIManagerWidgetBase::Implementation_OpenAmmoMenu(enum class EAmmoType InAmmoType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_UIManagerWidgetBase", "Implementation_OpenAmmoMenu");

	Params::UVALUI_UIManagerWidgetBase_Implementation_OpenAmmoMenu_Params Parms{};

	Parms.AmmoType = InAmmoType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_UIManagerWidgetBase.Implementation_NavigateToRecentPhotos
// (BlueprintCosmetic, Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                       IdOfPhotoToNavigateTo                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bShouldSelectPhoto                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_UIManagerWidgetBase::Implementation_NavigateToRecentPhotos(struct FGuid& InIdOfPhotoToNavigateTo, bool InbShouldSelectPhoto)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_UIManagerWidgetBase", "Implementation_NavigateToRecentPhotos");

	Params::UVALUI_UIManagerWidgetBase_Implementation_NavigateToRecentPhotos_Params Parms{};

	Parms.IdOfPhotoToNavigateTo = InIdOfPhotoToNavigateTo;
	Parms.bShouldSelectPhoto = InbShouldSelectPhoto;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_UIManagerWidgetBase.Implementation_NavigateToOnlinePhotoAlbum
// (BlueprintCosmetic, Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                       IdOfPhotoToNavigateTo                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bShouldSelectPhoto                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_UIManagerWidgetBase::Implementation_NavigateToOnlinePhotoAlbum(struct FGuid& InIdOfPhotoToNavigateTo, bool InbShouldSelectPhoto)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_UIManagerWidgetBase", "Implementation_NavigateToOnlinePhotoAlbum");

	Params::UVALUI_UIManagerWidgetBase_Implementation_NavigateToOnlinePhotoAlbum_Params Parms{};

	Parms.IdOfPhotoToNavigateTo = InIdOfPhotoToNavigateTo;
	Parms.bShouldSelectPhoto = InbShouldSelectPhoto;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_UIManagerWidgetBase.Implementation_NavigateToCharacterCustomization
// (BlueprintCosmetic, Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVAL_CharacterCustomizationModeConfigConfig                                                           (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UVALUI_UIManagerWidgetBase::Implementation_NavigateToCharacterCustomization(struct FVAL_CharacterCustomizationModeConfig& InConfig)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_UIManagerWidgetBase", "Implementation_NavigateToCharacterCustomization");

	Params::UVALUI_UIManagerWidgetBase_Implementation_NavigateToCharacterCustomization_Params Parms{};

	Parms.Config = InConfig;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_UIManagerWidgetBase.Implementation_HasAnyHousingPlotsTeleportOptions
// (BlueprintCosmetic, Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ATeleporterActor*            Teleporter                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVALUI_UIManagerWidgetBase::Implementation_HasAnyHousingPlotsTeleportOptions(class ATeleporterActor* InTeleporter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_UIManagerWidgetBase", "Implementation_HasAnyHousingPlotsTeleportOptions");

	Params::UVALUI_UIManagerWidgetBase_Implementation_HasAnyHousingPlotsTeleportOptions_Params Parms{};

	Parms.Teleporter = InTeleporter;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ValeriaUI.VALUI_UIManagerWidgetBase.Implementation_CloseSubgameScreen
// (BlueprintCosmetic, Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UVALUI_UIManagerWidgetBase::Implementation_CloseSubgameScreen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_UIManagerWidgetBase", "Implementation_CloseSubgameScreen");

	Params::UVALUI_UIManagerWidgetBase_Implementation_CloseSubgameScreen_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_PregameUIManager.TryGetCachedCharacters_Checked
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FVALDTOS_MetaCharacterFormat>OutOurCharacters                                                 (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UVALUI_PregameUIManager::TryGetCachedCharacters_Checked(TArray<struct FVALDTOS_MetaCharacterFormat>* InOutOurCharacters)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_PregameUIManager", "TryGetCachedCharacters_Checked");

	Params::UVALUI_PregameUIManager_TryGetCachedCharacters_Checked_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (InOutOurCharacters != nullptr)
		*InOutOurCharacters = Parms.OutOurCharacters;

}


// Function ValeriaUI.VALUI_PregameUIManager.TryGetCachedCharacters
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FVALDTOS_MetaCharacterFormat>OutOurCharacters                                                 (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVALUI_PregameUIManager::TryGetCachedCharacters(TArray<struct FVALDTOS_MetaCharacterFormat>* InOutOurCharacters)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_PregameUIManager", "TryGetCachedCharacters");

	Params::UVALUI_PregameUIManager_TryGetCachedCharacters_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (InOutOurCharacters != nullptr)
		*InOutOurCharacters = Parms.OutOurCharacters;

	return Parms.ReturnValue;

}


// Function ValeriaUI.VALUI_PregameUIManager.SetAnnouncementURL
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      URL                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_PregameUIManager::SetAnnouncementURL(const class FString& InURL)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_PregameUIManager", "SetAnnouncementURL");

	Params::UVALUI_PregameUIManager_SetAnnouncementURL_Params Parms{};

	Parms.URL = InURL;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// DelegateFunction ValeriaUI.VALUI_PregameUIManager.OnPregameStateChange__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// enum class EVALUI_PregameState     State                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_PregameUIManager::OnPregameStateChange__DelegateSignature(enum class EVALUI_PregameState InState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_PregameUIManager", "OnPregameStateChange__DelegateSignature");

	Params::UVALUI_PregameUIManager_OnPregameStateChange__DelegateSignature_Params Parms{};

	Parms.State = InState;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction ValeriaUI.VALUI_PregameUIManager.OnLobbyStateChange__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// enum class EVALUI_LobbyState       State                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_PregameUIManager::OnLobbyStateChange__DelegateSignature(enum class EVALUI_LobbyState InState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_PregameUIManager", "OnLobbyStateChange__DelegateSignature");

	Params::UVALUI_PregameUIManager_OnLobbyStateChange__DelegateSignature_Params Parms{};

	Parms.State = InState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_PregameUIManager.HandleOnRetrievingCharacterListFailed
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                              ErrorCode                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_PregameUIManager::HandleOnRetrievingCharacterListFailed(int32 InErrorCode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_PregameUIManager", "HandleOnRetrievingCharacterListFailed");

	Params::UVALUI_PregameUIManager_HandleOnRetrievingCharacterListFailed_Params Parms{};

	Parms.ErrorCode = InErrorCode;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_PregameUIManager.HandleOnPregameStateChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EVALUI_PregameState     NewState                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_PregameUIManager::HandleOnPregameStateChanged(enum class EVALUI_PregameState InNewState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_PregameUIManager", "HandleOnPregameStateChanged");

	Params::UVALUI_PregameUIManager_HandleOnPregameStateChanged_Params Parms{};

	Parms.NewState = InNewState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_PregameUIManager.HandleOnLoginStateChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EVALUI_LoginState       NewState                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_PregameUIManager::HandleOnLoginStateChanged(enum class EVALUI_LoginState InNewState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_PregameUIManager", "HandleOnLoginStateChanged");

	Params::UVALUI_PregameUIManager_HandleOnLoginStateChanged_Params Parms{};

	Parms.NewState = InNewState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_PregameUIManager.HandleOnLobbyStateChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EVALUI_LobbyState       NewState                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_PregameUIManager::HandleOnLobbyStateChanged(enum class EVALUI_LobbyState InNewState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_PregameUIManager", "HandleOnLobbyStateChanged");

	Params::UVALUI_PregameUIManager_HandleOnLobbyStateChanged_Params Parms{};

	Parms.NewState = InNewState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_PregameUIManager.HandleOnFetchedServerStatus
// (Event, Public, BlueprintEvent)
// Parameters:

void UVALUI_PregameUIManager::HandleOnFetchedServerStatus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_PregameUIManager", "HandleOnFetchedServerStatus");

	Params::UVALUI_PregameUIManager_HandleOnFetchedServerStatus_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_PregameUIManager.HandleOnCharacterListObtained
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FVALDTOS_MetaCharacterFormat>InCachedCharacters                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UVALUI_PregameUIManager::HandleOnCharacterListObtained(TArray<struct FVALDTOS_MetaCharacterFormat>& InInCachedCharacters)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_PregameUIManager", "HandleOnCharacterListObtained");

	Params::UVALUI_PregameUIManager_HandleOnCharacterListObtained_Params Parms{};

	Parms.InCachedCharacters = InInCachedCharacters;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.VALUI_PregameUIManager.HandleOnCharacterCreationStateChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EVALUI_CharacterCreationStateNewState                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_PregameUIManager::HandleOnCharacterCreationStateChanged(enum class EVALUI_CharacterCreationState InNewState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_PregameUIManager", "HandleOnCharacterCreationStateChanged");

	Params::UVALUI_PregameUIManager_HandleOnCharacterCreationStateChanged_Params Parms{};

	Parms.NewState = InNewState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_PregameUIManager.GoToPregameState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EVALUI_PregameState     NewState                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_PregameUIManager::GoToPregameState(enum class EVALUI_PregameState InNewState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_PregameUIManager", "GoToPregameState");

	Params::UVALUI_PregameUIManager_GoToPregameState_Params Parms{};

	Parms.NewState = InNewState;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.VALUI_PregameUIManager.GoToLoginState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EVALUI_LoginState       NewState                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_PregameUIManager::GoToLoginState(enum class EVALUI_LoginState InNewState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_PregameUIManager", "GoToLoginState");

	Params::UVALUI_PregameUIManager_GoToLoginState_Params Parms{};

	Parms.NewState = InNewState;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.VALUI_PregameUIManager.GoToLobbyState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EVALUI_LobbyState       NewState                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_PregameUIManager::GoToLobbyState(enum class EVALUI_LobbyState InNewState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_PregameUIManager", "GoToLobbyState");

	Params::UVALUI_PregameUIManager_GoToLobbyState_Params Parms{};

	Parms.NewState = InNewState;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.VALUI_PregameUIManager.GoToCharacterCreationState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EVALUI_CharacterCreationStateNewState                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_PregameUIManager::GoToCharacterCreationState(enum class EVALUI_CharacterCreationState InNewState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_PregameUIManager", "GoToCharacterCreationState");

	Params::UVALUI_PregameUIManager_GoToCharacterCreationState_Params Parms{};

	Parms.NewState = InNewState;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.VALUI_PregameUIManager.GetCurrentPregameStateId
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EVALUI_PregameState     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EVALUI_PregameState UVALUI_PregameUIManager::GetCurrentPregameStateId()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_PregameUIManager", "GetCurrentPregameStateId");

	Params::UVALUI_PregameUIManager_GetCurrentPregameStateId_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ValeriaUI.VALUI_PregameUIManager.GetCachedCharacterAtIndex_Checked
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              Index                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVALDTOS_MetaCharacterFormatOutCharacter                                                     (Parm, OutParm, NativeAccessSpecifierPublic)

void UVALUI_PregameUIManager::GetCachedCharacterAtIndex_Checked(int32 InIndex, struct FVALDTOS_MetaCharacterFormat* InOutCharacter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_PregameUIManager", "GetCachedCharacterAtIndex_Checked");

	Params::UVALUI_PregameUIManager_GetCachedCharacterAtIndex_Checked_Params Parms{};

	Parms.Index = InIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (InOutCharacter != nullptr)
		*InOutCharacter = Parms.OutCharacter;

}


// Function ValeriaUI.VALUI_PregameUIManager.FetchServerStatus
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UVALUI_PregameUIManager::FetchServerStatus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_PregameUIManager", "FetchServerStatus");

	Params::UVALUI_PregameUIManager_FetchServerStatus_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.VALUI_PregameUIManager.FetchAnnouncements
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UVALUI_PregameUIManager::FetchAnnouncements()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_PregameUIManager", "FetchAnnouncements");

	Params::UVALUI_PregameUIManager_FetchAnnouncements_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.VALUI_PremiumCurrencyPurchaseWidgetBase.RequestBundleOffers
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UVALUI_PremiumCurrencyPurchaseWidgetBase::RequestBundleOffers()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_PremiumCurrencyPurchaseWidgetBase", "RequestBundleOffers");

	Params::UVALUI_PremiumCurrencyPurchaseWidgetBase_RequestBundleOffers_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.VALUI_PremiumCurrencyPurchaseWidgetBase.PurchasePremiumCurrency
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FGuid                       BundleID                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EVALUI_PremiumCurrencyProviderProvider                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_PremiumCurrencyPurchaseWidgetBase::PurchasePremiumCurrency(struct FGuid& InBundleID, enum class EVALUI_PremiumCurrencyProvider& InProvider)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_PremiumCurrencyPurchaseWidgetBase", "PurchasePremiumCurrency");

	Params::UVALUI_PremiumCurrencyPurchaseWidgetBase_PurchasePremiumCurrency_Params Parms{};

	Parms.BundleID = InBundleID;
	Parms.Provider = InProvider;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.VALUI_PremiumCurrencyPurchaseWidgetBase.HandleValidatePaymentFulfillmentTick
// (Final, Native, Protected, HasOutParams, HasDefaults)
// Parameters:
// struct FGuid                       PaymentID                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_PremiumCurrencyPurchaseWidgetBase::HandleValidatePaymentFulfillmentTick(struct FGuid& InPaymentID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_PremiumCurrencyPurchaseWidgetBase", "HandleValidatePaymentFulfillmentTick");

	Params::UVALUI_PremiumCurrencyPurchaseWidgetBase_HandleValidatePaymentFulfillmentTick_Params Parms{};

	Parms.PaymentID = InPaymentID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.VALUI_PremiumCurrencyPurchaseWidgetBase.HandleUrlChanged
// (Final, Native, Protected, HasOutParams, BlueprintCallable)
// Parameters:
// class FText                        Text                                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UVALUI_PremiumCurrencyPurchaseWidgetBase::HandleUrlChanged(class FText& InText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_PremiumCurrencyPurchaseWidgetBase", "HandleUrlChanged");

	Params::UVALUI_PremiumCurrencyPurchaseWidgetBase_HandleUrlChanged_Params Parms{};

	Parms.Text = InText;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.VALUI_PremiumCurrencyPurchaseWidgetBase.HandlePaymentFulfilled
// (Event, Public, BlueprintEvent)
// Parameters:

void UVALUI_PremiumCurrencyPurchaseWidgetBase::HandlePaymentFulfilled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_PremiumCurrencyPurchaseWidgetBase", "HandlePaymentFulfilled");

	Params::UVALUI_PremiumCurrencyPurchaseWidgetBase_HandlePaymentFulfilled_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_PremiumCurrencyPurchaseWidgetBase.HandlePaymentCompleted
// (Event, Public, BlueprintEvent)
// Parameters:

void UVALUI_PremiumCurrencyPurchaseWidgetBase::HandlePaymentCompleted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_PremiumCurrencyPurchaseWidgetBase", "HandlePaymentCompleted");

	Params::UVALUI_PremiumCurrencyPurchaseWidgetBase_HandlePaymentCompleted_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_PremiumCurrencyPurchaseWidgetBase.HandlePaymentCancelled
// (Event, Public, BlueprintEvent)
// Parameters:

void UVALUI_PremiumCurrencyPurchaseWidgetBase::HandlePaymentCancelled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_PremiumCurrencyPurchaseWidgetBase", "HandlePaymentCancelled");

	Params::UVALUI_PremiumCurrencyPurchaseWidgetBase_HandlePaymentCancelled_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_PremiumCurrencyPurchaseWidgetBase.HandleCheckoutSessionCreated
// (Event, Public, BlueprintEvent)
// Parameters:
// class FString                      URL                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_PremiumCurrencyPurchaseWidgetBase::HandleCheckoutSessionCreated(const class FString& InURL)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_PremiumCurrencyPurchaseWidgetBase", "HandleCheckoutSessionCreated");

	Params::UVALUI_PremiumCurrencyPurchaseWidgetBase_HandleCheckoutSessionCreated_Params Parms{};

	Parms.URL = InURL;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_PremiumCurrencyPurchaseWidgetBase.HandleBundleOffersFailed
// (Event, Public, BlueprintEvent)
// Parameters:

void UVALUI_PremiumCurrencyPurchaseWidgetBase::HandleBundleOffersFailed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_PremiumCurrencyPurchaseWidgetBase", "HandleBundleOffersFailed");

	Params::UVALUI_PremiumCurrencyPurchaseWidgetBase_HandleBundleOffersFailed_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_PremiumCurrencyPurchaseWidgetBase.HandleBundleOffersAvailable
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// TArray<struct FVALUI_PremiumCurrencyBundle>Bundles                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UVALUI_PremiumCurrencyPurchaseWidgetBase::HandleBundleOffersAvailable(TArray<struct FVALUI_PremiumCurrencyBundle>& InBundles)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_PremiumCurrencyPurchaseWidgetBase", "HandleBundleOffersAvailable");

	Params::UVALUI_PremiumCurrencyPurchaseWidgetBase_HandleBundleOffersAvailable_Params Parms{};

	Parms.Bundles = InBundles;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_PremiumCurrencyPurchaseWidgetBase.CancelValidatePaymentPolling
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UVALUI_PremiumCurrencyPurchaseWidgetBase::CancelValidatePaymentPolling()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_PremiumCurrencyPurchaseWidgetBase", "CancelValidatePaymentPolling");

	Params::UVALUI_PremiumCurrencyPurchaseWidgetBase_CancelValidatePaymentPolling_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.VALUI_PremiumItemPurchaseWidgetBase.GetLoadoutOverridesForCatalogItems
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class UVAL_CharacterCustomizationItemBase*>Items                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TMap<class FName, class UVAL_CharacterCustomizationItemBase*>ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

TMap<class FName, class UVAL_CharacterCustomizationItemBase*> UVALUI_PremiumItemPurchaseWidgetBase::GetLoadoutOverridesForCatalogItems(TArray<class UVAL_CharacterCustomizationItemBase*>& InItems)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_PremiumItemPurchaseWidgetBase", "GetLoadoutOverridesForCatalogItems");

	Params::UVALUI_PremiumItemPurchaseWidgetBase_GetLoadoutOverridesForCatalogItems_Params Parms{};

	Parms.Items = InItems;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ValeriaUI.VALUI_PremiumItemPurchaseWidgetBase.GetCustomizationItemsForGuids
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FGuid>               ItemIds                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<class UVAL_CharacterCustomizationItemBase*>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class UVAL_CharacterCustomizationItemBase*> UVALUI_PremiumItemPurchaseWidgetBase::GetCustomizationItemsForGuids(TArray<struct FGuid>& InItemIds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_PremiumItemPurchaseWidgetBase", "GetCustomizationItemsForGuids");

	Params::UVALUI_PremiumItemPurchaseWidgetBase_GetCustomizationItemsForGuids_Params Parms{};

	Parms.ItemIds = InItemIds;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ValeriaUI.VALUI_PremiumStorefrontTileWidgetBase.SetModel
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FVALUI_PremiumStorefrontWidgetModelNewModel                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UVALUI_PremiumStorefrontTileWidgetBase::SetModel(struct FVALUI_PremiumStorefrontWidgetModel& InNewModel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_PremiumStorefrontTileWidgetBase", "SetModel");

	Params::UVALUI_PremiumStorefrontTileWidgetBase_SetModel_Params Parms{};

	Parms.NewModel = InNewModel;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// DelegateFunction ValeriaUI.VALUI_PremiumStorefrontTileWidgetBase.OnSelected__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UVALUI_PremiumStorefrontTileWidgetBase*Widget                                                           (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_PremiumStorefrontTileWidgetBase::OnSelected__DelegateSignature(class UVALUI_PremiumStorefrontTileWidgetBase* InWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_PremiumStorefrontTileWidgetBase", "OnSelected__DelegateSignature");

	Params::UVALUI_PremiumStorefrontTileWidgetBase_OnSelected__DelegateSignature_Params Parms{};

	Parms.Widget = InWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_PremiumStorefrontTileWidgetBase.HandleModelUpdate
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FVALUI_PremiumStorefrontWidgetModelNewModel                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UVALUI_PremiumStorefrontTileWidgetBase::HandleModelUpdate(struct FVALUI_PremiumStorefrontWidgetModel& InNewModel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_PremiumStorefrontTileWidgetBase", "HandleModelUpdate");

	Params::UVALUI_PremiumStorefrontTileWidgetBase_HandleModelUpdate_Params Parms{};

	Parms.NewModel = InNewModel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_PremiumStorefrontTileWidgetBase.GetModel
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVALUI_PremiumStorefrontWidgetModelReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FVALUI_PremiumStorefrontWidgetModel UVALUI_PremiumStorefrontTileWidgetBase::GetModel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_PremiumStorefrontTileWidgetBase", "GetModel");

	Params::UVALUI_PremiumStorefrontTileWidgetBase_GetModel_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ValeriaUI.VALUI_PremiumStorefrontWidgetBase.HandleTileWidgetSelected
// (Final, Native, Private)
// Parameters:
// class UVALUI_PremiumStorefrontTileWidgetBase*Tile                                                             (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_PremiumStorefrontWidgetBase::HandleTileWidgetSelected(class UVALUI_PremiumStorefrontTileWidgetBase* InTile)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_PremiumStorefrontWidgetBase", "HandleTileWidgetSelected");

	Params::UVALUI_PremiumStorefrontWidgetBase_HandleTileWidgetSelected_Params Parms{};

	Parms.Tile = InTile;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.VALUI_PremiumStorefrontWidgetBase.HandleTileSelected
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FVALUI_PremiumStorefrontWidgetModelModel                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UVALUI_PremiumStorefrontWidgetBase::HandleTileSelected(struct FVALUI_PremiumStorefrontWidgetModel& InModel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_PremiumStorefrontWidgetBase", "HandleTileSelected");

	Params::UVALUI_PremiumStorefrontWidgetBase_HandleTileSelected_Params Parms{};

	Parms.Model = InModel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_PremiumStorefrontWidgetBase.HandleStorefrontError
// (Event, Public, BlueprintEvent)
// Parameters:

void UVALUI_PremiumStorefrontWidgetBase::HandleStorefrontError()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_PremiumStorefrontWidgetBase", "HandleStorefrontError");

	Params::UVALUI_PremiumStorefrontWidgetBase_HandleStorefrontError_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_PremiumStorefrontWidgetBase.HandleStorefrontAvailable
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FVALUI_PremiumStorefrontResponseResponse                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UVALUI_PremiumStorefrontWidgetBase::HandleStorefrontAvailable(struct FVALUI_PremiumStorefrontResponse& InResponse)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_PremiumStorefrontWidgetBase", "HandleStorefrontAvailable");

	Params::UVALUI_PremiumStorefrontWidgetBase_HandleStorefrontAvailable_Params Parms{};

	Parms.Response = InResponse;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_PremiumStorefrontWidgetBase.FetchStorefront
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVALUI_PremiumStorefrontWidgetBase::FetchStorefront()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_PremiumStorefrontWidgetBase", "FetchStorefront");

	Params::UVALUI_PremiumStorefrontWidgetBase_FetchStorefront_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ValeriaUI.VALUI_PremiumStorefrontWidgetBase.CreateStorefrontGrid
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              WidgetsPerRow                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FVALUI_PremiumStorefrontWidgetModel>Models                                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UVALUI_PremiumStorefrontWidgetBase::CreateStorefrontGrid(int32 InWidgetsPerRow, TArray<struct FVALUI_PremiumStorefrontWidgetModel>& InModels)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_PremiumStorefrontWidgetBase", "CreateStorefrontGrid");

	Params::UVALUI_PremiumStorefrontWidgetBase_CreateStorefrontGrid_Params Parms{};

	Parms.WidgetsPerRow = InWidgetsPerRow;
	Parms.Models = InModels;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// DelegateFunction ValeriaUI.VALUI_PremiumStoreScreenWidgetBase.OnStateChanged__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UVALUI_PremiumStoreScreenWidgetBase*StoreWidget                                                      (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EVALUI_PremiumStoreStateState                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_PremiumStoreScreenWidgetBase::OnStateChanged__DelegateSignature(class UVALUI_PremiumStoreScreenWidgetBase* InStoreWidget, enum class EVALUI_PremiumStoreState InState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_PremiumStoreScreenWidgetBase", "OnStateChanged__DelegateSignature");

	Params::UVALUI_PremiumStoreScreenWidgetBase_OnStateChanged__DelegateSignature_Params Parms{};

	Parms.StoreWidget = InStoreWidget;
	Parms.State = InState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_PremiumStoreScreenWidgetBase.HandleOnStateChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EVALUI_PremiumStoreStateState                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_PremiumStoreScreenWidgetBase::HandleOnStateChanged(enum class EVALUI_PremiumStoreState InState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_PremiumStoreScreenWidgetBase", "HandleOnStateChanged");

	Params::UVALUI_PremiumStoreScreenWidgetBase_HandleOnStateChanged_Params Parms{};

	Parms.State = InState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_PremiumStoreScreenWidgetBase.HandleBackAction
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FInputActionValue           ActionValue                                                      (Parm, NoDestructor, NativeAccessSpecifierPublic)
// float                              ElapsedTime                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              TriggeredTime                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_PremiumStoreScreenWidgetBase::HandleBackAction(const struct FInputActionValue& InActionValue, float InElapsedTime, float InTriggeredTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_PremiumStoreScreenWidgetBase", "HandleBackAction");

	Params::UVALUI_PremiumStoreScreenWidgetBase_HandleBackAction_Params Parms{};

	Parms.ActionValue = InActionValue;
	Parms.ElapsedTime = InElapsedTime;
	Parms.TriggeredTime = InTriggeredTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_PremiumStoreScreenWidgetBase.GoToPremiumStoreState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EVALUI_PremiumStoreStateNewState                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_PremiumStoreScreenWidgetBase::GoToPremiumStoreState(enum class EVALUI_PremiumStoreState InNewState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_PremiumStoreScreenWidgetBase", "GoToPremiumStoreState");

	Params::UVALUI_PremiumStoreScreenWidgetBase_GoToPremiumStoreState_Params Parms{};

	Parms.NewState = InNewState;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.VALUI_PremiumStoreScreenWidgetBase.GetPremiumStoreState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EVALUI_PremiumStoreStateReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EVALUI_PremiumStoreState UVALUI_PremiumStoreScreenWidgetBase::GetPremiumStoreState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_PremiumStoreScreenWidgetBase", "GetPremiumStoreState");

	Params::UVALUI_PremiumStoreScreenWidgetBase_GetPremiumStoreState_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ValeriaUI.VALUI_PremiumStoreFunctionLibrary.GetPetPurchaseBonusFromPurchaseRewards
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FVALUI_PremiumStorefrontPurchaseRewardsPurchaseRewards                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FVAL_CharacterCustomization_PetPurchaseBonusReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FVAL_CharacterCustomization_PetPurchaseBonus UVALUI_PremiumStoreFunctionLibrary::GetPetPurchaseBonusFromPurchaseRewards(struct FVALUI_PremiumStorefrontPurchaseRewards& InPurchaseRewards)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_PremiumStoreFunctionLibrary", "GetPetPurchaseBonusFromPurchaseRewards");

	Params::UVALUI_PremiumStoreFunctionLibrary_GetPetPurchaseBonusFromPurchaseRewards_Params Parms{};

	Parms.PurchaseRewards = InPurchaseRewards;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ValeriaUI.VALUI_PremiumStoreFunctionLibrary.GetNewPetsForBonusReceivedModal
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVAL_CharacterCustomization_PetPurchaseBonusPetPurchaseBonus                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// TSet<struct FGuid>                 NewEntitlements                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<TSoftObjectPtr<class UVAL_CharacterCustomizationItem_Pet>>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, UObjectWrapper, NativeAccessSpecifierPublic)

TArray<TSoftObjectPtr<class UVAL_CharacterCustomizationItem_Pet>> UVALUI_PremiumStoreFunctionLibrary::GetNewPetsForBonusReceivedModal(struct FVAL_CharacterCustomization_PetPurchaseBonus& InPetPurchaseBonus, TSet<struct FGuid>& InNewEntitlements)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_PremiumStoreFunctionLibrary", "GetNewPetsForBonusReceivedModal");

	Params::UVALUI_PremiumStoreFunctionLibrary_GetNewPetsForBonusReceivedModal_Params Parms{};

	Parms.PetPurchaseBonus = InPetPurchaseBonus;
	Parms.NewEntitlements = InNewEntitlements;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ValeriaUI.VALUI_ProgressBarStyle.Apply
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// class UProgressBar*                ProgressBar                                                      (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_ProgressBarStyle::Apply(class UProgressBar* InProgressBar)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_ProgressBarStyle", "Apply");

	Params::UVALUI_ProgressBarStyle_Apply_Params Parms{};

	Parms.ProgressBar = InProgressBar;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.VALUI_ProgressBar_Styled.SetProgressBarStyle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UVALUI_ProgressBarStyle*     NewStyle                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_ProgressBar_Styled::SetProgressBarStyle(class UVALUI_ProgressBarStyle* InNewStyle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_ProgressBar_Styled", "SetProgressBarStyle");

	Params::UVALUI_ProgressBar_Styled_SetProgressBarStyle_Params Parms{};

	Parms.NewStyle = InNewStyle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.VALUI_RadioSlider.TryIncrementPage
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:

void UVALUI_RadioSlider::TryIncrementPage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_RadioSlider", "TryIncrementPage");

	Params::UVALUI_RadioSlider_TryIncrementPage_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.VALUI_RadioSlider.TryDecrementPage
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:

void UVALUI_RadioSlider::TryDecrementPage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_RadioSlider", "TryDecrementPage");

	Params::UVALUI_RadioSlider_TryDecrementPage_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.VALUI_RadioSlider.SetIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              Index                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bSkipSliderAnimation                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_RadioSlider::SetIndex(int32 InIndex, bool InbSkipSliderAnimation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_RadioSlider", "SetIndex");

	Params::UVALUI_RadioSlider_SetIndex_Params Parms{};

	Parms.Index = InIndex;
	Parms.bSkipSliderAnimation = InbSkipSliderAnimation;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// DelegateFunction ValeriaUI.VALUI_RadioSlider.OnSliderWidgetCreated__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UUserWidget*                 SliderWidget                                                     (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_RadioSlider::OnSliderWidgetCreated__DelegateSignature(class UUserWidget* InSliderWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_RadioSlider", "OnSliderWidgetCreated__DelegateSignature");

	Params::UVALUI_RadioSlider_OnSliderWidgetCreated__DelegateSignature_Params Parms{};

	Parms.SliderWidget = InSliderWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction ValeriaUI.VALUI_RadioSlider.OnSliderChanged__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UUserWidget*                 PreviousElementWidget                                            (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              PreviousElementIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UUserWidget*                 NewElementWidget                                                 (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              NewElementIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_RadioSlider::OnSliderChanged__DelegateSignature(class UUserWidget* InPreviousElementWidget, int32 InPreviousElementIndex, class UUserWidget* InNewElementWidget, int32 InNewElementIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_RadioSlider", "OnSliderChanged__DelegateSignature");

	Params::UVALUI_RadioSlider_OnSliderChanged__DelegateSignature_Params Parms{};

	Parms.PreviousElementWidget = InPreviousElementWidget;
	Parms.PreviousElementIndex = InPreviousElementIndex;
	Parms.NewElementWidget = InNewElementWidget;
	Parms.NewElementIndex = InNewElementIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction ValeriaUI.VALUI_RadioSlider.OnPageChanged__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// int32                              PageIndex                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              TotalNumPages                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_RadioSlider::OnPageChanged__DelegateSignature(int32 InPageIndex, int32 InTotalNumPages)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_RadioSlider", "OnPageChanged__DelegateSignature");

	Params::UVALUI_RadioSlider_OnPageChanged__DelegateSignature_Params Parms{};

	Parms.PageIndex = InPageIndex;
	Parms.TotalNumPages = InTotalNumPages;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction ValeriaUI.VALUI_RadioSlider.OnElementWidgetCreated__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UUserWidget*                 ElementWidget                                                    (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ElementIndex                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_RadioSlider::OnElementWidgetCreated__DelegateSignature(class UUserWidget* InElementWidget, int32 InElementIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_RadioSlider", "OnElementWidgetCreated__DelegateSignature");

	Params::UVALUI_RadioSlider_OnElementWidgetCreated__DelegateSignature_Params Parms{};

	Parms.ElementWidget = InElementWidget;
	Parms.ElementIndex = InElementIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_RadioSlider.GetWidgetAtIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              Index                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UUserWidget*                 ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UUserWidget* UVALUI_RadioSlider::GetWidgetAtIndex(int32 InIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_RadioSlider", "GetWidgetAtIndex");

	Params::UVALUI_RadioSlider_GetWidgetAtIndex_Params Parms{};

	Parms.Index = InIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ValeriaUI.VALUI_RadioSlider.GetTotalNumPages
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UVALUI_RadioSlider::GetTotalNumPages()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_RadioSlider", "GetTotalNumPages");

	Params::UVALUI_RadioSlider_GetTotalNumPages_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ValeriaUI.VALUI_RadioSlider.GetSliderWidget
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UUserWidget*                 ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UUserWidget* UVALUI_RadioSlider::GetSliderWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_RadioSlider", "GetSliderWidget");

	Params::UVALUI_RadioSlider_GetSliderWidget_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ValeriaUI.VALUI_RadioSlider.GetIndexFromWidget
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UUserWidget*                 Widget                                                           (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVALUI_RadioSlider::GetIndexFromWidget(class UUserWidget* InWidget, int32* InIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_RadioSlider", "GetIndexFromWidget");

	Params::UVALUI_RadioSlider_GetIndexFromWidget_Params Parms{};

	Parms.Widget = InWidget;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (InIndex != nullptr)
		*InIndex = Parms.Index;

	return Parms.ReturnValue;

}


// Function ValeriaUI.VALUI_RadioSlider.GetElementWidgetsTable
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TMap<int32, class UUserWidget*>    ReturnValue                                                      (ConstParm, ExportObject, Parm, OutParm, ReturnParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

TMap<int32, class UUserWidget*> UVALUI_RadioSlider::GetElementWidgetsTable()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_RadioSlider", "GetElementWidgetsTable");

	Params::UVALUI_RadioSlider_GetElementWidgetsTable_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ValeriaUI.VALUI_RadioSlider.GetCurrentPageIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UVALUI_RadioSlider::GetCurrentPageIndex()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_RadioSlider", "GetCurrentPageIndex");

	Params::UVALUI_RadioSlider_GetCurrentPageIndex_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ValeriaUI.VALUI_RadioSlider.GetCurrentIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UVALUI_RadioSlider::GetCurrentIndex()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_RadioSlider", "GetCurrentIndex");

	Params::UVALUI_RadioSlider_GetCurrentIndex_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ValeriaUI.VALUI_RadioSlider.BuildElementsAndSlider
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UVALUI_RadioSlider::BuildElementsAndSlider()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_RadioSlider", "BuildElementsAndSlider");

	Params::UVALUI_RadioSlider_BuildElementsAndSlider_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.VALUI_RichTextBlockStyle.ApplyToTextBlock
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// class URichTextBlock*              TextWidget                                                       (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_RichTextBlockStyle::ApplyToTextBlock(class URichTextBlock* InTextWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_RichTextBlockStyle", "ApplyToTextBlock");

	Params::UVALUI_RichTextBlockStyle_ApplyToTextBlock_Params Parms{};

	Parms.TextWidget = InTextWidget;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.VALUI_RichTextBlock_Styled.SetTextBlockStyle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UVALUI_RichTextBlockStyle*   NewStyle                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_RichTextBlock_Styled::SetTextBlockStyle(class UVALUI_RichTextBlockStyle* InNewStyle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_RichTextBlock_Styled", "SetTextBlockStyle");

	Params::UVALUI_RichTextBlock_Styled_SetTextBlockStyle_Params Parms{};

	Parms.NewStyle = InNewStyle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.VALUI_ScrollBoxStyle.ApplyToScrollBox
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// class UScrollBox*                  ScrollBox                                                        (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_ScrollBoxStyle::ApplyToScrollBox(class UScrollBox* InScrollBox)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_ScrollBoxStyle", "ApplyToScrollBox");

	Params::UVALUI_ScrollBoxStyle_ApplyToScrollBox_Params Parms{};

	Parms.ScrollBox = InScrollBox;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.VALUI_ScrollBox_Styled.SetScrollBoxStyle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UVALUI_ScrollBoxStyle*       NewStyle                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_ScrollBox_Styled::SetScrollBoxStyle(class UVALUI_ScrollBoxStyle* InNewStyle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_ScrollBox_Styled", "SetScrollBoxStyle");

	Params::UVALUI_ScrollBox_Styled_SetScrollBoxStyle_Params Parms{};

	Parms.NewStyle = InNewStyle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.VALUI_SliderStyle.Apply
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// class USlider*                     Slider                                                           (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_SliderStyle::Apply(class USlider* InSlider)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_SliderStyle", "Apply");

	Params::UVALUI_SliderStyle_Apply_Params Parms{};

	Parms.Slider = InSlider;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.VALUI_Slider_Styled.SetSliderStyle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UVALUI_SliderStyle*          NewStyle                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_Slider_Styled::SetSliderStyle(class UVALUI_SliderStyle* InNewStyle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_Slider_Styled", "SetSliderStyle");

	Params::UVALUI_Slider_Styled_SetSliderStyle_Params Parms{};

	Parms.NewStyle = InNewStyle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// DelegateFunction ValeriaUI.VALUI_SocialPanelBase.ToggleDebugSimulation__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// bool                               bDisplay                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_SocialPanelBase::ToggleDebugSimulation__DelegateSignature(bool InbDisplay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_SocialPanelBase", "ToggleDebugSimulation__DelegateSignature");

	Params::UVALUI_SocialPanelBase_ToggleDebugSimulation__DelegateSignature_Params Parms{};

	Parms.bDisplay = InbDisplay;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_SocialPanelBase.GetDebugSimulationFlag
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UVALUI_SocialPanelBase::GetDebugSimulationFlag()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_SocialPanelBase", "GetDebugSimulationFlag");

	Params::UVALUI_SocialPanelBase_GetDebugSimulationFlag_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ValeriaUI.VALUI_StateUserWidget_PregameHUD.SetOwner
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UVALUI_PregameUIManager*     Owner                                                            (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_StateUserWidget_PregameHUD::SetOwner(class UVALUI_PregameUIManager* InOwner)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_StateUserWidget_PregameHUD", "SetOwner");

	Params::UVALUI_StateUserWidget_PregameHUD_SetOwner_Params Parms{};

	Parms.Owner = InOwner;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_StateUserWidget_PregameHUD.HandleOnLoginStateChanged
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EVALUI_LoginState       NewState                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_StateUserWidget_PregameHUD::HandleOnLoginStateChanged(enum class EVALUI_LoginState InNewState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_StateUserWidget_PregameHUD", "HandleOnLoginStateChanged");

	Params::UVALUI_StateUserWidget_PregameHUD_HandleOnLoginStateChanged_Params Parms{};

	Parms.NewState = InNewState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_StateUserWidget_PregameHUD.HandleOnLobbyStateChanged
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EVALUI_LobbyState       NewState                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_StateUserWidget_PregameHUD::HandleOnLobbyStateChanged(enum class EVALUI_LobbyState InNewState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_StateUserWidget_PregameHUD", "HandleOnLobbyStateChanged");

	Params::UVALUI_StateUserWidget_PregameHUD_HandleOnLobbyStateChanged_Params Parms{};

	Parms.NewState = InNewState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_StateUserWidget_PregameHUD.HandleOnFetchedServerStatus
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UVALUI_StateUserWidget_PregameHUD::HandleOnFetchedServerStatus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_StateUserWidget_PregameHUD", "HandleOnFetchedServerStatus");

	Params::UVALUI_StateUserWidget_PregameHUD_HandleOnFetchedServerStatus_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_StateUserWidget_PregameHUD.HandleOnCharacterCreationStateChanged
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EVALUI_CharacterCreationStateNewState                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_StateUserWidget_PregameHUD::HandleOnCharacterCreationStateChanged(enum class EVALUI_CharacterCreationState InNewState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_StateUserWidget_PregameHUD", "HandleOnCharacterCreationStateChanged");

	Params::UVALUI_StateUserWidget_PregameHUD_HandleOnCharacterCreationStateChanged_Params Parms{};

	Parms.NewState = InNewState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_StateUserWidget_PregameHUD.GetLobbyScreen
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UVALUI_LobbyScreenUserWidget*ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UVALUI_LobbyScreenUserWidget* UVALUI_StateUserWidget_PregameHUD::GetLobbyScreen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_StateUserWidget_PregameHUD", "GetLobbyScreen");

	Params::UVALUI_StateUserWidget_PregameHUD_GetLobbyScreen_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ValeriaUI.VALUI_StateUserWidget_PregameHUD.GetCharacterCreationScreen
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UVALUI_CharacterCreationScreenBase*ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UVALUI_CharacterCreationScreenBase* UVALUI_StateUserWidget_PregameHUD::GetCharacterCreationScreen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_StateUserWidget_PregameHUD", "GetCharacterCreationScreen");

	Params::UVALUI_StateUserWidget_PregameHUD_GetCharacterCreationScreen_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ValeriaUI.VALUI_StateUserWidget_PregameHUD.DisplayMatchmakingQueueNumber
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Number                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_StateUserWidget_PregameHUD::DisplayMatchmakingQueueNumber(int32 InNumber)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_StateUserWidget_PregameHUD", "DisplayMatchmakingQueueNumber");

	Params::UVALUI_StateUserWidget_PregameHUD_DisplayMatchmakingQueueNumber_Params Parms{};

	Parms.Number = InNumber;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_StateUserWidget_PregameHUD.DisplayMatchmakingQueueActive
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bActive                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_StateUserWidget_PregameHUD::DisplayMatchmakingQueueActive(bool InbActive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_StateUserWidget_PregameHUD", "DisplayMatchmakingQueueActive");

	Params::UVALUI_StateUserWidget_PregameHUD_DisplayMatchmakingQueueActive_Params Parms{};

	Parms.bActive = InbActive;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_StateUserWidget_PregameHUD.DisplayCharacterCreationMatchmaking
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UVALUI_StateUserWidget_PregameHUD::DisplayCharacterCreationMatchmaking()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_StateUserWidget_PregameHUD", "DisplayCharacterCreationMatchmaking");

	Params::UVALUI_StateUserWidget_PregameHUD_DisplayCharacterCreationMatchmaking_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_TabButtonHostBase.UnregisterTab
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        TabName                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_TabButtonHostBase::UnregisterTab(class FName& InTabName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_TabButtonHostBase", "UnregisterTab");

	Params::UVALUI_TabButtonHostBase_UnregisterTab_Params Parms{};

	Parms.TabName = InTabName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.VALUI_TabButtonHostBase.TrySetActiveTabName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        TabName                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bForceSet                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVALUI_TabButtonHostBase::TrySetActiveTabName(class FName InTabName, bool InbForceSet)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_TabButtonHostBase", "TrySetActiveTabName");

	Params::UVALUI_TabButtonHostBase_TrySetActiveTabName_Params Parms{};

	Parms.TabName = InTabName;
	Parms.bForceSet = InbForceSet;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ValeriaUI.VALUI_TabButtonHostBase.TryGetTabInfo
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        TabName                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVALUI_InstantiatedTabButtonInfoOutInfo                                                          (Parm, OutParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVALUI_TabButtonHostBase::TryGetTabInfo(class FName& InTabName, struct FVALUI_InstantiatedTabButtonInfo* InOutInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_TabButtonHostBase", "TryGetTabInfo");

	Params::UVALUI_TabButtonHostBase_TryGetTabInfo_Params Parms{};

	Parms.TabName = InTabName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (InOutInfo != nullptr)
		*InOutInfo = Parms.OutInfo;

	return Parms.ReturnValue;

}


// Function ValeriaUI.VALUI_TabButtonHostBase.SetTabButtonVisibility
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        TabName                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ESlateVisibility        NewVisibility                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_TabButtonHostBase::SetTabButtonVisibility(class FName& InTabName, enum class ESlateVisibility InNewVisibility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_TabButtonHostBase", "SetTabButtonVisibility");

	Params::UVALUI_TabButtonHostBase_SetTabButtonVisibility_Params Parms{};

	Parms.TabName = InTabName;
	Parms.NewVisibility = InNewVisibility;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.VALUI_TabButtonHostBase.RemoveTabButton
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FName                        TabName                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVALUI_InstantiatedTabButtonInfoInfo                                                             (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UVALUI_TabButtonHostBase::RemoveTabButton(class FName& InTabName, struct FVALUI_InstantiatedTabButtonInfo& InInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_TabButtonHostBase", "RemoveTabButton");

	Params::UVALUI_TabButtonHostBase_RemoveTabButton_Params Parms{};

	Parms.TabName = InTabName;
	Parms.Info = InInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_TabButtonHostBase.RegisterNewTab
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class FName                        TabName                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FText                        TabDisplayName                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UButton*                     Button                                                           (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWidget*                     AssociatedContent                                                (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSoftObjectPtr<class UTexture2D>   IconTexture                                                      (Parm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   IconSize                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_TabButtonHostBase::RegisterNewTab(class FName& InTabName, class FText& InTabDisplayName, class UButton* InButton, class UWidget* InAssociatedContent, TSoftObjectPtr<class UTexture2D> InIconTexture, struct FVector2D& InIconSize)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_TabButtonHostBase", "RegisterNewTab");

	Params::UVALUI_TabButtonHostBase_RegisterNewTab_Params Parms{};

	Parms.TabName = InTabName;
	Parms.TabDisplayName = InTabDisplayName;
	Parms.Button = InButton;
	Parms.AssociatedContent = InAssociatedContent;
	Parms.IconTexture = InIconTexture;
	Parms.IconSize = InIconSize;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// DelegateFunction ValeriaUI.VALUI_TabButtonHostBase.OnDifferentActiveTabSet__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UVALUI_TabButtonHostBase*    TabButtonHost                                                    (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_TabButtonHostBase::OnDifferentActiveTabSet__DelegateSignature(class UVALUI_TabButtonHostBase* InTabButtonHost)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_TabButtonHostBase", "OnDifferentActiveTabSet__DelegateSignature");

	Params::UVALUI_TabButtonHostBase_OnDifferentActiveTabSet__DelegateSignature_Params Parms{};

	Parms.TabButtonHost = InTabButtonHost;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_TabButtonHostBase.HandleDifferentActiveTabSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// class FName                        TabName                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_TabButtonHostBase::HandleDifferentActiveTabSet(class FName InTabName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_TabButtonHostBase", "HandleDifferentActiveTabSet");

	Params::UVALUI_TabButtonHostBase_HandleDifferentActiveTabSet_Params Parms{};

	Parms.TabName = InTabName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_TabButtonHostBase.GetTabNames
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class FName>                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class FName> UVALUI_TabButtonHostBase::GetTabNames()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_TabButtonHostBase", "GetTabNames");

	Params::UVALUI_TabButtonHostBase_GetTabNames_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ValeriaUI.VALUI_TabButtonHostBase.GetActiveTabName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FName UVALUI_TabButtonHostBase::GetActiveTabName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_TabButtonHostBase", "GetActiveTabName");

	Params::UVALUI_TabButtonHostBase_GetActiveTabName_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ValeriaUI.VALUI_TabButtonHostBase.AddTabButton
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FName                        TabName                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVALUI_InstantiatedTabButtonInfoInfo                                                             (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UVALUI_TabButtonHostBase::AddTabButton(class FName& InTabName, struct FVALUI_InstantiatedTabButtonInfo& InInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_TabButtonHostBase", "AddTabButton");

	Params::UVALUI_TabButtonHostBase_AddTabButton_Params Parms{};

	Parms.TabName = InTabName;
	Parms.Info = InInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_TabButtonInterface.SetIsActiveTabButton
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// bool                               bIsActive                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IVALUI_TabButtonInterface::SetIsActiveTabButton(bool InbIsActive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_TabButtonInterface", "SetIsActiveTabButton");

	Params::IVALUI_TabButtonInterface_SetIsActiveTabButton_Params Parms{};

	Parms.bIsActive = InbIsActive;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.VALUI_TextBlockStyle.ApplyToTextBlock
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// class UTextBlock*                  TextWidget                                                       (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_TextBlockStyle::ApplyToTextBlock(class UTextBlock* InTextWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_TextBlockStyle", "ApplyToTextBlock");

	Params::UVALUI_TextBlockStyle_ApplyToTextBlock_Params Parms{};

	Parms.TextWidget = InTextWidget;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.VALUI_TextBlock_Styled.SetTextBlockStyle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UVALUI_TextBlockStyle*       NewStyle                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_TextBlock_Styled::SetTextBlockStyle(class UVALUI_TextBlockStyle* InNewStyle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_TextBlock_Styled", "SetTextBlockStyle");

	Params::UVALUI_TextBlock_Styled_SetTextBlockStyle_Params Parms{};

	Parms.NewStyle = InNewStyle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.VALUI_TileView_Styled.SetEntryWidth
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              NewWidth                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_TileView_Styled::SetEntryWidth(float InNewWidth)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_TileView_Styled", "SetEntryWidth");

	Params::UVALUI_TileView_Styled_SetEntryWidth_Params Parms{};

	Parms.NewWidth = InNewWidth;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.VALUI_TileView_Styled.SetEntryHeight
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              NewHeight                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_TileView_Styled::SetEntryHeight(float InNewHeight)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_TileView_Styled", "SetEntryHeight");

	Params::UVALUI_TileView_Styled_SetEntryHeight_Params Parms{};

	Parms.NewHeight = InNewHeight;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.VALUI_TileView_Styled.GetEntryWidth
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UVALUI_TileView_Styled::GetEntryWidth()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_TileView_Styled", "GetEntryWidth");

	Params::UVALUI_TileView_Styled_GetEntryWidth_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ValeriaUI.VALUI_TileView_Styled.GetEntryHeight
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UVALUI_TileView_Styled::GetEntryHeight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_TileView_Styled", "GetEntryHeight");

	Params::UVALUI_TileView_Styled_GetEntryHeight_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ValeriaUI.VALUI_UButtonSlot.SetVerticalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EVerticalAlignment      InVerticalAlignment                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_UButtonSlot::SetVerticalAlignment(enum class EVerticalAlignment InInVerticalAlignment)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_UButtonSlot", "SetVerticalAlignment");

	Params::UVALUI_UButtonSlot_SetVerticalAlignment_Params Parms{};

	Parms.InVerticalAlignment = InInVerticalAlignment;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.VALUI_UButtonSlot.SetPadding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMargin                     InPadding                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void UVALUI_UButtonSlot::SetPadding(const struct FMargin& InInPadding)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_UButtonSlot", "SetPadding");

	Params::UVALUI_UButtonSlot_SetPadding_Params Parms{};

	Parms.InPadding = InInPadding;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.VALUI_UButtonSlot.SetHorizontalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EHorizontalAlignment    InHorizontalAlignment                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_UButtonSlot::SetHorizontalAlignment(enum class EHorizontalAlignment InInHorizontalAlignment)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_UButtonSlot", "SetHorizontalAlignment");

	Params::UVALUI_UButtonSlot_SetHorizontalAlignment_Params Parms{};

	Parms.InHorizontalAlignment = InInHorizontalAlignment;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.VALUI_UButton_Styled.VisualRelease
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UVALUI_UButton_Styled::VisualRelease()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_UButton_Styled", "VisualRelease");

	Params::UVALUI_UButton_Styled_VisualRelease_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.VALUI_UButton_Styled.VisualPress
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UVALUI_UButton_Styled::VisualPress()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_UButton_Styled", "VisualPress");

	Params::UVALUI_UButton_Styled_VisualPress_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.VALUI_UButton_Styled.SetTouchMethod
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EButtonTouchMethod      InTouchMethod                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_UButton_Styled::SetTouchMethod(enum class EButtonTouchMethod InInTouchMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_UButton_Styled", "SetTouchMethod");

	Params::UVALUI_UButton_Styled_SetTouchMethod_Params Parms{};

	Parms.InTouchMethod = InInTouchMethod;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.VALUI_UButton_Styled.SetPressMethod
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EButtonPressMethod      InPressMethod                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_UButton_Styled::SetPressMethod(enum class EButtonPressMethod InInPressMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_UButton_Styled", "SetPressMethod");

	Params::UVALUI_UButton_Styled_SetPressMethod_Params Parms{};

	Parms.InPressMethod = InInPressMethod;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.VALUI_UButton_Styled.SetClickMethod
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EButtonClickMethod      InClickMethod                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_UButton_Styled::SetClickMethod(enum class EButtonClickMethod InInClickMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_UButton_Styled", "SetClickMethod");

	Params::UVALUI_UButton_Styled_SetClickMethod_Params Parms{};

	Parms.InClickMethod = InInClickMethod;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.VALUI_UButton_Styled.SetButtonStyle
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FButtonStyle                WidgetStyle                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UVALUI_UButton_Styled::SetButtonStyle(struct FButtonStyle& InWidgetStyle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_UButton_Styled", "SetButtonStyle");

	Params::UVALUI_UButton_Styled_SetButtonStyle_Params Parms{};

	Parms.WidgetStyle = InWidgetStyle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.VALUI_UButton_Styled.SetButtonConfig
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UVALUI_ButtonStyle*          NewButtonStyle                                                   (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_UButton_Styled::SetButtonConfig(class UVALUI_ButtonStyle* InNewButtonStyle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_UButton_Styled", "SetButtonConfig");

	Params::UVALUI_UButton_Styled_SetButtonConfig_Params Parms{};

	Parms.NewButtonStyle = InNewButtonStyle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.VALUI_UButton_Styled.OnMouseButtonClicked
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FPointerEvent               InMouseEvent                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FEventReply UVALUI_UButton_Styled::OnMouseButtonClicked(const struct FGeometry& InMyGeometry, struct FPointerEvent& InInMouseEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_UButton_Styled", "OnMouseButtonClicked");

	Params::UVALUI_UButton_Styled_OnMouseButtonClicked_Params Parms{};

	Parms.MyGeometry = InMyGeometry;
	Parms.InMouseEvent = InInMouseEvent;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ValeriaUI.VALUI_WidgetBlueprintLibrary.UpdateEntryWidgetTypeOnListView
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UListViewBase*               ListView                                                         (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class UUserWidget>     EntryWidgetType                                                  (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_WidgetBlueprintLibrary::UpdateEntryWidgetTypeOnListView(class UListViewBase* InListView, TSubclassOf<class UUserWidget> InEntryWidgetType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_WidgetBlueprintLibrary", "UpdateEntryWidgetTypeOnListView");

	Params::UVALUI_WidgetBlueprintLibrary_UpdateEntryWidgetTypeOnListView_Params Parms{};

	Parms.ListView = InListView;
	Parms.EntryWidgetType = InEntryWidgetType;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.VALUI_WidgetBlueprintLibrary.GetOuterForConstructingNativeWidget
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UUserWidget*                 HostUserWidget                                                   (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UObject* UVALUI_WidgetBlueprintLibrary::GetOuterForConstructingNativeWidget(class UUserWidget* InHostUserWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_WidgetBlueprintLibrary", "GetOuterForConstructingNativeWidget");

	Params::UVALUI_WidgetBlueprintLibrary_GetOuterForConstructingNativeWidget_Params Parms{};

	Parms.HostUserWidget = InHostUserWidget;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ValeriaUI.VALUI_WidgetBlueprintLibrary.FindOuterMostWidget
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UWidget*                     BaseWidget                                                       (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWidget*                     ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UWidget* UVALUI_WidgetBlueprintLibrary::FindOuterMostWidget(class UWidget* InBaseWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_WidgetBlueprintLibrary", "FindOuterMostWidget");

	Params::UVALUI_WidgetBlueprintLibrary_FindOuterMostWidget_Params Parms{};

	Parms.BaseWidget = InBaseWidget;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ValeriaUI.VALUI_WidgetBlueprintLibrary.CaptureMouseWithHighPrecision
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FEventReply                 Reply                                                            (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UWidget*                     CapturingWidget                                                  (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FEventReply UVALUI_WidgetBlueprintLibrary::CaptureMouseWithHighPrecision(struct FEventReply& InReply, class UWidget* InCapturingWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_WidgetBlueprintLibrary", "CaptureMouseWithHighPrecision");

	Params::UVALUI_WidgetBlueprintLibrary_CaptureMouseWithHighPrecision_Params Parms{};

	Parms.Reply = InReply;
	Parms.CapturingWidget = InCapturingWidget;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
