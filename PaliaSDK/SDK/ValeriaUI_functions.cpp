#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function ValeriaUI.BaitUserWidget.ShowAmmoType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EAmmoType               AmmoType                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBaitUserWidget::ShowAmmoType(enum class EAmmoType AmmoType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaitUserWidget", "ShowAmmoType");

	Params::UBaitUserWidget_ShowAmmoType_Params Parms{};

	Parms.AmmoType = AmmoType;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.BaitUserWidget.OnShown
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// enum class EAmmoType               AmmoType                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UBaitUserWidget::OnShown(enum class EAmmoType AmmoType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaitUserWidget", "OnShown");

	Params::UBaitUserWidget_OnShown_Params Parms{};

	Parms.AmmoType = AmmoType;

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

void UBaitUserWidget::OnBaitSelected(const struct FValeriaItem& baitItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaitUserWidget", "OnBaitSelected");

	Params::UBaitUserWidget_OnBaitSelected_Params Parms{};

	Parms.baitItem = baitItem;

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

void UBookViewerWidget::MarkPageAsRead(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BookViewerWidget", "MarkPageAsRead");

	Params::UBookViewerWidget_MarkPageAsRead_Params Parms{};

	Parms.Index = Index;

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

class FText UBookViewerWidget::GetContentForPage(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BookViewerWidget", "GetContentForPage");

	Params::UBookViewerWidget_GetContentForPage_Params Parms{};

	Parms.Index = Index;

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

bool UDetailUserWidget::UpdateDetail(TSoftObjectPtr<class UVAL_ItemTypeDefinitionAsset>& ItemType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DetailUserWidget", "UpdateDetail");

	Params::UDetailUserWidget_UpdateDetail_Params Parms{};

	Parms.ItemType = ItemType;

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

void UVALUI_LoadingScreenUserWidget::HandleSetLoadingScreenTip(struct FPaliaLoadingScreenTip& Tip)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_LoadingScreenUserWidget", "HandleSetLoadingScreenTip");

	Params::UVALUI_LoadingScreenUserWidget_HandleSetLoadingScreenTip_Params Parms{};

	Parms.Tip = Tip;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_LoadingScreenUserWidget.HandleSetBackgroundImage
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UTexture2D*                  Texture                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_LoadingScreenUserWidget::HandleSetBackgroundImage(class UTexture2D* Texture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_LoadingScreenUserWidget", "HandleSetBackgroundImage");

	Params::UVALUI_LoadingScreenUserWidget_HandleSetBackgroundImage_Params Parms{};

	Parms.Texture = Texture;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_LoadingScreenUserWidget.HandleOnPawnChanged
// (Final, Native, Protected)
// Parameters:
// class APawn*                       Pawn                                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_LoadingScreenUserWidget::HandleOnPawnChanged(class APawn* Pawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_LoadingScreenUserWidget", "HandleOnPawnChanged");

	Params::UVALUI_LoadingScreenUserWidget_HandleOnPawnChanged_Params Parms{};

	Parms.Pawn = Pawn;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.MailboxViewerUserWidget.UpdateMailFilter
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EMailboxViewerFilter    Filter                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMailboxViewerUserWidget::UpdateMailFilter(enum class EMailboxViewerFilter Filter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MailboxViewerUserWidget", "UpdateMailFilter");

	Params::UMailboxViewerUserWidget_UpdateMailFilter_Params Parms{};

	Parms.Filter = Filter;

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

bool UMailboxViewerUserWidget::TryCollectReward(int32 Index, int32 RewardIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MailboxViewerUserWidget", "TryCollectReward");

	Params::UMailboxViewerUserWidget_TryCollectReward_Params Parms{};

	Parms.Index = Index;
	Parms.RewardIndex = RewardIndex;

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

void UMailboxViewerUserWidget::RefreshMailMessages(bool AllowRemoval)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MailboxViewerUserWidget", "RefreshMailMessages");

	Params::UMailboxViewerUserWidget_RefreshMailMessages_Params Parms{};

	Parms.AllowRemoval = AllowRemoval;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.MailboxViewerUserWidget.OnVillagerMailChanged
// (Final, Native, Private)
// Parameters:
// class UVillagerMailInboxComponent* VillagerMail                                                     (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMailboxViewerUserWidget::OnVillagerMailChanged(class UVillagerMailInboxComponent* VillagerMail)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MailboxViewerUserWidget", "OnVillagerMailChanged");

	Params::UMailboxViewerUserWidget_OnVillagerMailChanged_Params Parms{};

	Parms.VillagerMail = VillagerMail;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.MailboxViewerUserWidget.OnPlayerToPlayerMailSuccess
// (Final, Native, Private)
// Parameters:
// struct FMailbox                    Mailbox                                                          (ConstParm, Parm, NativeAccessSpecifierPublic)

void UMailboxViewerUserWidget::OnPlayerToPlayerMailSuccess(const struct FMailbox& Mailbox)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MailboxViewerUserWidget", "OnPlayerToPlayerMailSuccess");

	Params::UMailboxViewerUserWidget_OnPlayerToPlayerMailSuccess_Params Parms{};

	Parms.Mailbox = Mailbox;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.MailboxViewerUserWidget.OnPlayerToPlayerMailFailed
// (Final, Native, Private)
// Parameters:
// class FString                      Error                                                            (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMailboxViewerUserWidget::OnPlayerToPlayerMailFailed(const class FString& Error)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MailboxViewerUserWidget", "OnPlayerToPlayerMailFailed");

	Params::UMailboxViewerUserWidget_OnPlayerToPlayerMailFailed_Params Parms{};

	Parms.Error = Error;

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

void UMailboxViewerUserWidget::MarkAsRead(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MailboxViewerUserWidget", "MarkAsRead");

	Params::UMailboxViewerUserWidget_MarkAsRead_Params Parms{};

	Parms.Index = Index;

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

void UMailboxViewerUserWidget::HideMessage(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MailboxViewerUserWidget", "HideMessage");

	Params::UMailboxViewerUserWidget_HideMessage_Params Parms{};

	Parms.Index = Index;

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

int32 UMailboxViewerUserWidget::GetNumberOfMessagesForFilter(enum class EMailboxViewerFilter Filter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MailboxViewerUserWidget", "GetNumberOfMessagesForFilter");

	Params::UMailboxViewerUserWidget_GetNumberOfMessagesForFilter_Params Parms{};

	Parms.Filter = Filter;

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

int32 UMailboxViewerUserWidget::GetNextNonHiddenMessage(int32 StartIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MailboxViewerUserWidget", "GetNextNonHiddenMessage");

	Params::UMailboxViewerUserWidget_GetNextNonHiddenMessage_Params Parms{};

	Parms.StartIndex = StartIndex;

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

struct FMailMessageWidgetData UMailboxViewerUserWidget::GetMailMessage(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MailboxViewerUserWidget", "GetMailMessage");

	Params::UMailboxViewerUserWidget_GetMailMessage_Params Parms{};

	Parms.Index = Index;

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

int32 UMailboxViewerUserWidget::GetIndexOfMailMessage(const struct FMailMessageWidgetData& Data)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MailboxViewerUserWidget", "GetIndexOfMailMessage");

	Params::UMailboxViewerUserWidget_GetIndexOfMailMessage_Params Parms{};

	Parms.Data = Data;

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

void UValeriaViewportClient::HandleOnFadeOutBlack(float DurationSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ValeriaViewportClient", "HandleOnFadeOutBlack");

	Params::UValeriaViewportClient_HandleOnFadeOutBlack_Params Parms{};

	Parms.DurationSeconds = DurationSeconds;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.ValeriaViewportClient.HandleOnFadeInBlack
// (Final, Native, Protected)
// Parameters:
// float                              DurationSeconds                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UValeriaViewportClient::HandleOnFadeInBlack(float DurationSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ValeriaViewportClient", "HandleOnFadeInBlack");

	Params::UValeriaViewportClient_HandleOnFadeInBlack_Params Parms{};

	Parms.DurationSeconds = DurationSeconds;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.VALUI_AnnouncementsMessageModalDialog.SetURL
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      NewURL                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_AnnouncementsMessageModalDialog::SetURL(const class FString& NewURL)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_AnnouncementsMessageModalDialog", "SetURL");

	Params::UVALUI_AnnouncementsMessageModalDialog_SetURL_Params Parms{};

	Parms.NewURL = NewURL;

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


// Function ValeriaUI.VALUI_AnnouncementsMessageModalDialog.HandleRefreshedMessageFromWeb
// (Event, Protected, BlueprintEvent)
// Parameters:
// class FString                      Message                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_AnnouncementsMessageModalDialog::HandleRefreshedMessageFromWeb(const class FString& Message)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_AnnouncementsMessageModalDialog", "HandleRefreshedMessageFromWeb");

	Params::UVALUI_AnnouncementsMessageModalDialog_HandleRefreshedMessageFromWeb_Params Parms{};

	Parms.Message = Message;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_AsyncUpdateLoadout.UpdateLoadout
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UVALUI_CharacterCustomizationPanelBase*CustPanel                                                        (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVAL_CharacterCustomizationLoadoutNewLoadout                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FVALUI_CharCustomization_UpdateLoadoutContextPayloadContextPayload                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UVALUI_AsyncUpdateLoadout*   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UVALUI_AsyncUpdateLoadout* UVALUI_AsyncUpdateLoadout::UpdateLoadout(class UVALUI_CharacterCustomizationPanelBase* CustPanel, struct FVAL_CharacterCustomizationLoadout& NewLoadout, struct FVALUI_CharCustomization_UpdateLoadoutContextPayload& ContextPayload)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_AsyncUpdateLoadout", "UpdateLoadout");

	Params::UVALUI_AsyncUpdateLoadout_UpdateLoadout_Params Parms{};

	Parms.CustPanel = CustPanel;
	Parms.NewLoadout = NewLoadout;
	Parms.ContextPayload = ContextPayload;

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

void UVALUI_AsyncUpdateLoadout::OnUpdateLoadoutFailed__DelegateSignature(struct FVALUI_CharCustomization_UpdateLoadoutContextPayload& ContextPayload)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_AsyncUpdateLoadout", "OnUpdateLoadoutFailed__DelegateSignature");

	Params::UVALUI_AsyncUpdateLoadout_OnUpdateLoadoutFailed__DelegateSignature_Params Parms{};

	Parms.ContextPayload = ContextPayload;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction ValeriaUI.VALUI_AsyncUpdateLoadout.OnUpdateLoadoutCompleted__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams)
// Parameters:
// class UVALUI_CharacterCustomizationPanelBase*CharacterCustomizationPanel                                      (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVALUI_CharCustomization_UpdateLoadoutContextPayloadContextPayload                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UVALUI_AsyncUpdateLoadout::OnUpdateLoadoutCompleted__DelegateSignature(class UVALUI_CharacterCustomizationPanelBase* CharacterCustomizationPanel, struct FVALUI_CharCustomization_UpdateLoadoutContextPayload& ContextPayload)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_AsyncUpdateLoadout", "OnUpdateLoadoutCompleted__DelegateSignature");

	Params::UVALUI_AsyncUpdateLoadout_OnUpdateLoadoutCompleted__DelegateSignature_Params Parms{};

	Parms.CharacterCustomizationPanel = CharacterCustomizationPanel;
	Parms.ContextPayload = ContextPayload;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_BorderStyle.Apply
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// class UBorder*                     Border                                                           (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_BorderStyle::Apply(class UBorder* Border)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_BorderStyle", "Apply");

	Params::UVALUI_BorderStyle_Apply_Params Parms{};

	Parms.Border = Border;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.VALUI_Border_Styled.SetBorderStyle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UVALUI_BorderStyle*          NewStyle                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_Border_Styled::SetBorderStyle(class UVALUI_BorderStyle* NewStyle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_Border_Styled", "SetBorderStyle");

	Params::UVALUI_Border_Styled_SetBorderStyle_Params Parms{};

	Parms.NewStyle = NewStyle;

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

void UVALUI_BoundInputActionStateWidget::UpdateInputActionState_Implementation(struct FKey& Key, enum class ETriggerEvent LatestTriggerEvent, float OngoingDuration, float HoldTimeThreshold)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_BoundInputActionStateWidget", "UpdateInputActionState_Implementation");

	Params::UVALUI_BoundInputActionStateWidget_UpdateInputActionState_Implementation_Params Parms{};

	Parms.Key = Key;
	Parms.LatestTriggerEvent = LatestTriggerEvent;
	Parms.OngoingDuration = OngoingDuration;
	Parms.HoldTimeThreshold = HoldTimeThreshold;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_BoundInputActionStateWidget.SetInputAction
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UInputAction*                InInputAction                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_BoundInputActionStateWidget::SetInputAction(class UInputAction* InInputAction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_BoundInputActionStateWidget", "SetInputAction");

	Params::UVALUI_BoundInputActionStateWidget_SetInputAction_Params Parms{};

	Parms.InInputAction = InInputAction;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.VALUI_ButtonStyle.Apply
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// class UVALUI_Button_Styled*        Button                                                           (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_ButtonStyle::Apply(class UVALUI_Button_Styled* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_ButtonStyle", "Apply");

	Params::UVALUI_ButtonStyle_Apply_Params Parms{};

	Parms.Button = Button;

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

bool UVALUI_Button_Styled::ShowCursor(class UWidget* InCursor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_Button_Styled", "ShowCursor");

	Params::UVALUI_Button_Styled_ShowCursor_Params Parms{};

	Parms.InCursor = InCursor;

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

void UVALUI_Button_Styled::SetButtonStyle(class UVALUI_ButtonStyle* NewStyle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_Button_Styled", "SetButtonStyle");

	Params::UVALUI_Button_Styled_SetButtonStyle_Params Parms{};

	Parms.NewStyle = NewStyle;

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

void UVALUI_Button_Styled::RemoveCursor(class UWidget* InCursor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_Button_Styled", "RemoveCursor");

	Params::UVALUI_Button_Styled_RemoveCursor_Params Parms{};

	Parms.InCursor = InCursor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.VALUI_Button_Styled.PreConstruct
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_Button_Styled::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_Button_Styled", "PreConstruct");

	Params::UVALUI_Button_Styled_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

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

bool UVALUI_NameValidator::IsNameValid(const class FString& InCharacterName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_NameValidator", "IsNameValid");

	Params::UVALUI_NameValidator_IsNameValid_Params Parms{};

	Parms.InCharacterName = InCharacterName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ValeriaUI.VALUI_CharacterCreationScreenBase.HandleCharacterNameValidityResponse
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FVALUI_CharacterNameValidityResponseResponse                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UVALUI_CharacterCreationScreenBase::HandleCharacterNameValidityResponse(struct FVALUI_CharacterNameValidityResponse& Response)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_CharacterCreationScreenBase", "HandleCharacterNameValidityResponse");

	Params::UVALUI_CharacterCreationScreenBase_HandleCharacterNameValidityResponse_Params Parms{};

	Parms.Response = Response;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_CharacterCreationScreenBase.HandleCharacterNameChanged
// (Final, Native, Protected, HasOutParams, BlueprintCallable)
// Parameters:
// class FText                        InCharacterName                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// enum class EVAL_CharacterNameType  InCharacterNameType                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_CharacterCreationScreenBase::HandleCharacterNameChanged(class FText& InCharacterName, enum class EVAL_CharacterNameType InCharacterNameType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_CharacterCreationScreenBase", "HandleCharacterNameChanged");

	Params::UVALUI_CharacterCreationScreenBase_HandleCharacterNameChanged_Params Parms{};

	Parms.InCharacterName = InCharacterName;
	Parms.InCharacterNameType = InCharacterNameType;

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

bool UVALUI_CharacterCreationStatics::IsCharacterNameValidityResponseValid(struct FVALUI_CharacterNameValidityResponse& Response)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_CharacterCreationStatics", "IsCharacterNameValidityResponseValid");

	Params::UVALUI_CharacterCreationStatics_IsCharacterNameValidityResponseValid_Params Parms{};

	Parms.Response = Response;

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

void UVALUI_CharacterCustomizationPanelBase::SetPreviewCharacterActor(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_CharacterCustomizationPanelBase", "SetPreviewCharacterActor");

	Params::UVALUI_CharacterCustomizationPanelBase_SetPreviewCharacterActor_Params Parms{};

	Parms.Actor = Actor;

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

void UVALUI_CharacterCustomizationPanelBase::HandleLoadoutUpdated(struct FVALUI_CharCustomization_UpdateLoadoutContextPayload& ContextPayload)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_CharacterCustomizationPanelBase", "HandleLoadoutUpdated");

	Params::UVALUI_CharacterCustomizationPanelBase_HandleLoadoutUpdated_Params Parms{};

	Parms.ContextPayload = ContextPayload;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_CharacterCustomizationPanelBase.HandleLoadoutSlotItemsGenerated
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FName                        LoadoutSlotName                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVALUI_CharCustomization_LoadoutSlotDataLoadoutSlotData                                                  (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UVALUI_CharacterCustomizationPanelBase::HandleLoadoutSlotItemsGenerated(class FName& LoadoutSlotName, struct FVALUI_CharCustomization_LoadoutSlotData& LoadoutSlotData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_CharacterCustomizationPanelBase", "HandleLoadoutSlotItemsGenerated");

	Params::UVALUI_CharacterCustomizationPanelBase_HandleLoadoutSlotItemsGenerated_Params Parms{};

	Parms.LoadoutSlotName = LoadoutSlotName;
	Parms.LoadoutSlotData = LoadoutSlotData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_CharacterCustomizationPanelBase.GetLoadoutSlotDataFromItemObject
// (Final, Native, Protected, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UObject*                     ItemObject                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        LoadoutSlotName                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVALUI_CharCustomization_LoadoutSlotDataLoadoutSlotData                                                  (Parm, OutParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// bool                               bSuccess                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_CharacterCustomizationPanelBase::GetLoadoutSlotDataFromItemObject(class UObject* ItemObject, class FName* LoadoutSlotName, struct FVALUI_CharCustomization_LoadoutSlotData* LoadoutSlotData, bool* bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_CharacterCustomizationPanelBase", "GetLoadoutSlotDataFromItemObject");

	Params::UVALUI_CharacterCustomizationPanelBase_GetLoadoutSlotDataFromItemObject_Params Parms{};

	Parms.ItemObject = ItemObject;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (LoadoutSlotName != nullptr)
		*LoadoutSlotName = Parms.LoadoutSlotName;

	if (LoadoutSlotData != nullptr)
		*LoadoutSlotData = Parms.LoadoutSlotData;

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;

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

class UObject* UVALUI_CharacterCustomizationPanelBase::GenerateItemObject(struct FVAL_CharCustomization_AssetData& AssetData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_CharacterCustomizationPanelBase", "GenerateItemObject");

	Params::UVALUI_CharacterCustomizationPanelBase_GenerateItemObject_Params Parms{};

	Parms.AssetData = AssetData;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ValeriaUI.VALUI_CharacterMovementStick_Mobile.SetHooker
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UVALUI_CameraVirtualMoveHooker_Mobile*VirtualMoveHooker                                                (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_CharacterMovementStick_Mobile::SetHooker(class UVALUI_CameraVirtualMoveHooker_Mobile* VirtualMoveHooker)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_CharacterMovementStick_Mobile", "SetHooker");

	Params::UVALUI_CharacterMovementStick_Mobile_SetHooker_Params Parms{};

	Parms.VirtualMoveHooker = VirtualMoveHooker;

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

void UVALUI_CharacterMovementStick_Mobile::OnUpdateMovmentVirtualStick(bool TouchControlFlag, struct FVector2D& Pos, struct FVector2D& ControlVector)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_CharacterMovementStick_Mobile", "OnUpdateMovmentVirtualStick");

	Params::UVALUI_CharacterMovementStick_Mobile_OnUpdateMovmentVirtualStick_Params Parms{};

	Parms.TouchControlFlag = TouchControlFlag;
	Parms.Pos = Pos;
	Parms.ControlVector = ControlVector;

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

void UVALUI_CharacterMovementStick_Mobile::InitMovementVirtualStack(const struct FVector2D& DefaultPosition, float ValidTouchRadius, float MovementValidDistanceTemp, float WalkBoundaryDistanceTemp)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_CharacterMovementStick_Mobile", "InitMovementVirtualStack");

	Params::UVALUI_CharacterMovementStick_Mobile_InitMovementVirtualStack_Params Parms{};

	Parms.DefaultPosition = DefaultPosition;
	Parms.ValidTouchRadius = ValidTouchRadius;
	Parms.MovementValidDistanceTemp = MovementValidDistanceTemp;
	Parms.WalkBoundaryDistanceTemp = WalkBoundaryDistanceTemp;

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

TSoftObjectPtr<class UTexture2D> UVALUI_ChatEmojiPanel::GetTexture(struct FS6UI_FRichImageRow_Soft& ImageRow)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_ChatEmojiPanel", "GetTexture");

	Params::UVALUI_ChatEmojiPanel_GetTexture_Params Parms{};

	Parms.ImageRow = ImageRow;

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

void UVALUI_ChatInputBar::VALUIEvent_OnTextChanged__DelegateSignature(class UVALUI_ChatInputBar* InputBar, class FText& PreviousText, class FText& NewText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_ChatInputBar", "VALUIEvent_OnTextChanged__DelegateSignature");

	Params::UVALUI_ChatInputBar_VALUIEvent_OnTextChanged__DelegateSignature_Params Parms{};

	Parms.InputBar = InputBar;
	Parms.PreviousText = PreviousText;
	Parms.NewText = NewText;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction ValeriaUI.VALUI_ChatInputBar.VALUIEvent_OnMessageTargetCycled__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams)
// Parameters:
// class UVALUI_ChatInputBar*         InputBar                                                         (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMessageTarget              MessageTarget                                                    (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_ChatInputBar::VALUIEvent_OnMessageTargetCycled__DelegateSignature(class UVALUI_ChatInputBar* InputBar, struct FMessageTarget& MessageTarget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_ChatInputBar", "VALUIEvent_OnMessageTargetCycled__DelegateSignature");

	Params::UVALUI_ChatInputBar_VALUIEvent_OnMessageTargetCycled__DelegateSignature_Params Parms{};

	Parms.InputBar = InputBar;
	Parms.MessageTarget = MessageTarget;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction ValeriaUI.VALUI_ChatInputBar.VALUIEvent_OnMessageSubmitted__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams)
// Parameters:
// class UVALUI_ChatInputBar*         InputBar                                                         (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMessageTarget              MessageTarget                                                    (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FText                        Message                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UVALUI_ChatInputBar::VALUIEvent_OnMessageSubmitted__DelegateSignature(class UVALUI_ChatInputBar* InputBar, struct FMessageTarget& MessageTarget, class FText& Message)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_ChatInputBar", "VALUIEvent_OnMessageSubmitted__DelegateSignature");

	Params::UVALUI_ChatInputBar_VALUIEvent_OnMessageSubmitted__DelegateSignature_Params Parms{};

	Parms.InputBar = InputBar;
	Parms.MessageTarget = MessageTarget;
	Parms.Message = Message;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction ValeriaUI.VALUI_ChatInputBar.VALUIEvent_OnCommitBlankText__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UVALUI_ChatInputBar*         InputBar                                                         (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_ChatInputBar::VALUIEvent_OnCommitBlankText__DelegateSignature(class UVALUI_ChatInputBar* InputBar)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_ChatInputBar", "VALUIEvent_OnCommitBlankText__DelegateSignature");

	Params::UVALUI_ChatInputBar_VALUIEvent_OnCommitBlankText__DelegateSignature_Params Parms{};

	Parms.InputBar = InputBar;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction ValeriaUI.VALUI_ChatInputBar.VALUIEvent_OnCommandSuggestionsChanged__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams)
// Parameters:
// class FString                      InString                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<TSubclassOf<class UVAL_ChatCommand_Base>>CommandClasses                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, UObjectWrapper, NativeAccessSpecifierPublic)

void UVALUI_ChatInputBar::VALUIEvent_OnCommandSuggestionsChanged__DelegateSignature(const class FString& InString, TArray<TSubclassOf<class UVAL_ChatCommand_Base>>& CommandClasses)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_ChatInputBar", "VALUIEvent_OnCommandSuggestionsChanged__DelegateSignature");

	Params::UVALUI_ChatInputBar_VALUIEvent_OnCommandSuggestionsChanged__DelegateSignature_Params Parms{};

	Parms.InString = InString;
	Parms.CommandClasses = CommandClasses;

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

void UVALUI_ChatInputBar::PushErrorNotification(class FText& InErrorText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_ChatInputBar", "PushErrorNotification");

	Params::UVALUI_ChatInputBar_PushErrorNotification_Params Parms{};

	Parms.InErrorText = InErrorText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_ChatInputBar.HandleOnTextCommitted
// (Final, Native, Protected, HasOutParams)
// Parameters:
// class FText                        InText                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// enum class ETextCommit             InCommitMethod                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_ChatInputBar::HandleOnTextCommitted(class FText& InText, enum class ETextCommit InCommitMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_ChatInputBar", "HandleOnTextCommitted");

	Params::UVALUI_ChatInputBar_HandleOnTextCommitted_Params Parms{};

	Parms.InText = InText;
	Parms.InCommitMethod = InCommitMethod;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.VALUI_ChatInputBar.HandleOnTextChanged
// (Final, Native, Protected, HasOutParams)
// Parameters:
// class FText                        InText                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UVALUI_ChatInputBar::HandleOnTextChanged(class FText& InText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_ChatInputBar", "HandleOnTextChanged");

	Params::UVALUI_ChatInputBar_HandleOnTextChanged_Params Parms{};

	Parms.InText = InText;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.VALUI_ChatInputBar.HandleOnStateChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EVALUI_ChatInputBarStateNewStateId                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_ChatInputBar::HandleOnStateChanged(enum class EVALUI_ChatInputBarState NewStateId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_ChatInputBar", "HandleOnStateChanged");

	Params::UVALUI_ChatInputBar_HandleOnStateChanged_Params Parms{};

	Parms.NewStateId = NewStateId;

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

void UVALUI_ChatInputBar::HandleOnDisplayCharacterNameSuggestions(const class FString& CharacterNameSubstr, int32 MaxSuggestionsNum)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_ChatInputBar", "HandleOnDisplayCharacterNameSuggestions");

	Params::UVALUI_ChatInputBar_HandleOnDisplayCharacterNameSuggestions_Params Parms{};

	Parms.CharacterNameSubstr = CharacterNameSubstr;
	Parms.MaxSuggestionsNum = MaxSuggestionsNum;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.VALUI_ChatInputBar.HandleOnChatChannelSet
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FVALUI_ChatChannel          Channel                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UVALUI_ChatInputBar::HandleOnChatChannelSet(struct FVALUI_ChatChannel& Channel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_ChatInputBar", "HandleOnChatChannelSet");

	Params::UVALUI_ChatInputBar_HandleOnChatChannelSet_Params Parms{};

	Parms.Channel = Channel;

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

void UVALUI_ChatInputBar::DisplayStringsSuggestions(const class FString& InString, TArray<class FString>& Suggestions)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_ChatInputBar", "DisplayStringsSuggestions");

	Params::UVALUI_ChatInputBar_DisplayStringsSuggestions_Params Parms{};

	Parms.InString = InString;
	Parms.Suggestions = Suggestions;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_ChatInputBar.DisplayCommandSuggestions
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bInDisplay                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_ChatInputBar::DisplayCommandSuggestions(bool bInDisplay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_ChatInputBar", "DisplayCommandSuggestions");

	Params::UVALUI_ChatInputBar_DisplayCommandSuggestions_Params Parms{};

	Parms.bInDisplay = bInDisplay;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_ChatInputBar.DisplayActiveCommandHint
// (Event, Public, BlueprintEvent)
// Parameters:
// class UVAL_ChatCommand_Base*       Command                                                          (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bDisplay                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_ChatInputBar::DisplayActiveCommandHint(class UVAL_ChatCommand_Base* Command, bool bDisplay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_ChatInputBar", "DisplayActiveCommandHint");

	Params::UVALUI_ChatInputBar_DisplayActiveCommandHint_Params Parms{};

	Parms.Command = Command;
	Parms.bDisplay = bDisplay;

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

bool UVALUI_ChatInputBar::ChangeMessageTarget(struct FMessageTarget& MessageTarget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_ChatInputBar", "ChangeMessageTarget");

	Params::UVALUI_ChatInputBar_ChangeMessageTarget_Params Parms{};

	Parms.MessageTarget = MessageTarget;

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

void UVALUI_ChatInputEditableText::VALUI_OnSummonContextMenu__DelegateSignature(struct FGeometry& Geometry, struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_ChatInputEditableText", "VALUI_OnSummonContextMenu__DelegateSignature");

	Params::UVALUI_ChatInputEditableText_VALUI_OnSummonContextMenu__DelegateSignature_Params Parms{};

	Parms.Geometry = Geometry;
	Parms.MouseEvent = MouseEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_ChatInputEditableText.StyleSelectedText
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      StyleTagString                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_ChatInputEditableText::StyleSelectedText(const class FString& StyleTagString)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_ChatInputEditableText", "StyleSelectedText");

	Params::UVALUI_ChatInputEditableText_StyleSelectedText_Params Parms{};

	Parms.StyleTagString = StyleTagString;

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

void UVALUI_ChatInputEditableText::InsertTextAtCursorChecked(class FText& InText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_ChatInputEditableText", "InsertTextAtCursorChecked");

	Params::UVALUI_ChatInputEditableText_InsertTextAtCursorChecked_Params Parms{};

	Parms.InText = InText;

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

class FString UVALUI_ChatMessage::ColorToHexString(struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_ChatMessage", "ColorToHexString");

	Params::UVALUI_ChatMessage_ColorToHexString_Params Parms{};

	Parms.Color = Color;

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

bool UVALUI_ChatPanelBase::TryGetTabAndChannelFromMessageConfig(struct FVALUI_ChatMessageConfig& Config, struct FVALUI_ChatTab* OutTab, struct FVALUI_ChatChannel* OutChannel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_ChatPanelBase", "TryGetTabAndChannelFromMessageConfig");

	Params::UVALUI_ChatPanelBase_TryGetTabAndChannelFromMessageConfig_Params Parms{};

	Parms.Config = Config;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutTab != nullptr)
		*OutTab = Parms.OutTab;

	if (OutChannel != nullptr)
		*OutChannel = Parms.OutChannel;

	return Parms.ReturnValue;

}


// Function ValeriaUI.VALUI_ChatPanelBase.ToggleChatChannel
// (Final, Native, Protected, HasOutParams, BlueprintCallable)
// Parameters:
// struct FVALUI_ChatMessageConfig    MessageConfig                                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UVALUI_ChatPanelBase::ToggleChatChannel(struct FVALUI_ChatMessageConfig& MessageConfig)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_ChatPanelBase", "ToggleChatChannel");

	Params::UVALUI_ChatPanelBase_ToggleChatChannel_Params Parms{};

	Parms.MessageConfig = MessageConfig;

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

void UVALUI_ChatPanelBase::ToggleChannelsByType(bool bEnabled, enum class EMessageTargetType Type)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_ChatPanelBase", "ToggleChannelsByType");

	Params::UVALUI_ChatPanelBase_ToggleChannelsByType_Params Parms{};

	Parms.bEnabled = bEnabled;
	Parms.Type = Type;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.VALUI_ChatPanelBase.ToggleAllChannels
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// bool                               bEnabled                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_ChatPanelBase::ToggleAllChannels(bool bEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_ChatPanelBase", "ToggleAllChannels");

	Params::UVALUI_ChatPanelBase_ToggleAllChannels_Params Parms{};

	Parms.bEnabled = bEnabled;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.VALUI_ChatPanelBase.SwitchTab
// (Final, Native, Protected, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        TabName                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_ChatPanelBase::SwitchTab(class FName& TabName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_ChatPanelBase", "SwitchTab");

	Params::UVALUI_ChatPanelBase_SwitchTab_Params Parms{};

	Parms.TabName = TabName;

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

void UVALUI_ChatPanelBase::RemoveTabChannel(struct FVALUI_ChatTab* Tab, int32 ChannelIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_ChatPanelBase", "RemoveTabChannel");

	Params::UVALUI_ChatPanelBase_RemoveTabChannel_Params Parms{};

	Parms.ChannelIndex = ChannelIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (Tab != nullptr)
		*Tab = Parms.Tab;

}


// Function ValeriaUI.VALUI_ChatPanelBase.OnNewChatMessageAdded
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FValeriaChatMessage         ChatMessage                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UVALUI_ChatPanelBase::OnNewChatMessageAdded(struct FValeriaChatMessage& ChatMessage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_ChatPanelBase", "OnNewChatMessageAdded");

	Params::UVALUI_ChatPanelBase_OnNewChatMessageAdded_Params Parms{};

	Parms.ChatMessage = ChatMessage;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_ChatPanelBase.HandleToggleTabHost
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bEnabled                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_ChatPanelBase::HandleToggleTabHost(bool bEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_ChatPanelBase", "HandleToggleTabHost");

	Params::UVALUI_ChatPanelBase_HandleToggleTabHost_Params Parms{};

	Parms.bEnabled = bEnabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_ChatPanelBase.HandleTabChannelEnabled
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FVALUI_ChatTab              Tab                                                              (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FVALUI_ChatChannel          Channel                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FVALUI_ChatMessageConfig    Config                                                           (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UVALUI_ChatPanelBase::HandleTabChannelEnabled(struct FVALUI_ChatTab& Tab, struct FVALUI_ChatChannel& Channel, struct FVALUI_ChatMessageConfig& Config)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_ChatPanelBase", "HandleTabChannelEnabled");

	Params::UVALUI_ChatPanelBase_HandleTabChannelEnabled_Params Parms{};

	Parms.Tab = Tab;
	Parms.Channel = Channel;
	Parms.Config = Config;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_ChatPanelBase.HandleRemoveSidePanelChannel
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UWidget*                     SidePanel                                                        (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ChannelIndex                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_ChatPanelBase::HandleRemoveSidePanelChannel(class UWidget* SidePanel, int32 ChannelIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_ChatPanelBase", "HandleRemoveSidePanelChannel");

	Params::UVALUI_ChatPanelBase_HandleRemoveSidePanelChannel_Params Parms{};

	Parms.SidePanel = SidePanel;
	Parms.ChannelIndex = ChannelIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_ChatPanelBase.HandleOnStateChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EVALUI_ChatPanelState   State                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_ChatPanelBase::HandleOnStateChanged(enum class EVALUI_ChatPanelState State)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_ChatPanelBase", "HandleOnStateChanged");

	Params::UVALUI_ChatPanelBase_HandleOnStateChanged_Params Parms{};

	Parms.State = State;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_ChatPanelBase.HandleOnChatroomJoined
// (Final, Native, Protected)
// Parameters:
// bool                               bWasSuccess                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      RoomId                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_ChatPanelBase::HandleOnChatroomJoined(bool bWasSuccess, const class FString& RoomId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_ChatPanelBase", "HandleOnChatroomJoined");

	Params::UVALUI_ChatPanelBase_HandleOnChatroomJoined_Params Parms{};

	Parms.bWasSuccess = bWasSuccess;
	Parms.RoomId = RoomId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.VALUI_ChatPanelBase.HandleNewMessageTarget
// (Final, Native, Private)
// Parameters:
// struct FMessageTarget              MessageTarget                                                    (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_ChatPanelBase::HandleNewMessageTarget(const struct FMessageTarget& MessageTarget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_ChatPanelBase", "HandleNewMessageTarget");

	Params::UVALUI_ChatPanelBase_HandleNewMessageTarget_Params Parms{};

	Parms.MessageTarget = MessageTarget;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.VALUI_ChatPanelBase.HandleNewControlMessage
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FControlMessage             ControlMessage                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UVALUI_ChatPanelBase::HandleNewControlMessage(struct FControlMessage& ControlMessage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_ChatPanelBase", "HandleNewControlMessage");

	Params::UVALUI_ChatPanelBase_HandleNewControlMessage_Params Parms{};

	Parms.ControlMessage = ControlMessage;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_ChatPanelBase.HandleNewChatMessage
// (Final, Native, Protected, HasOutParams)
// Parameters:
// struct FValeriaChatMessage         ChatMessage                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UVALUI_ChatPanelBase::HandleNewChatMessage(struct FValeriaChatMessage& ChatMessage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_ChatPanelBase", "HandleNewChatMessage");

	Params::UVALUI_ChatPanelBase_HandleNewChatMessage_Params Parms{};

	Parms.ChatMessage = ChatMessage;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.VALUI_ChatPanelBase.HandleMessageTargetRemoved
// (Final, Native, Private)
// Parameters:
// struct FMessageTarget              MessageTarget                                                    (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_ChatPanelBase::HandleMessageTargetRemoved(const struct FMessageTarget& MessageTarget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_ChatPanelBase", "HandleMessageTargetRemoved");

	Params::UVALUI_ChatPanelBase_HandleMessageTargetRemoved_Params Parms{};

	Parms.MessageTarget = MessageTarget;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.VALUI_ChatPanelBase.HandleDisplayTab
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FName                        TabName                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_ChatPanelBase::HandleDisplayTab(class FName& TabName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_ChatPanelBase", "HandleDisplayTab");

	Params::UVALUI_ChatPanelBase_HandleDisplayTab_Params Parms{};

	Parms.TabName = TabName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_ChatPanelBase.HandleDisplayChannelGlow
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class UWidget*                     SidePanel                                                        (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVALUI_ChatChannel          Channel                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              ChannelIndex                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_ChatPanelBase::HandleDisplayChannelGlow(class UWidget* SidePanel, struct FVALUI_ChatChannel& Channel, int32 ChannelIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_ChatPanelBase", "HandleDisplayChannelGlow");

	Params::UVALUI_ChatPanelBase_HandleDisplayChannelGlow_Params Parms{};

	Parms.SidePanel = SidePanel;
	Parms.Channel = Channel;
	Parms.ChannelIndex = ChannelIndex;

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

void UVALUI_ChatPanelBase::HandleClearMessagePanel(class UWidget* MessagePanel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_ChatPanelBase", "HandleClearMessagePanel");

	Params::UVALUI_ChatPanelBase_HandleClearMessagePanel_Params Parms{};

	Parms.MessagePanel = MessagePanel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_ChatPanelBase.HandleAddTabToTabHost
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FName                        TabName                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FText                        TabDisplayName                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UVALUI_ChatPanelBase::HandleAddTabToTabHost(class FName& TabName, class FText& TabDisplayName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_ChatPanelBase", "HandleAddTabToTabHost");

	Params::UVALUI_ChatPanelBase_HandleAddTabToTabHost_Params Parms{};

	Parms.TabName = TabName;
	Parms.TabDisplayName = TabDisplayName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_ChatPanelBase.HandleAddTabChannel
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FVALUI_ChatMessageConfig    MessageConfig                                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UVALUI_ChatPanelBase::HandleAddTabChannel(struct FVALUI_ChatMessageConfig& MessageConfig)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_ChatPanelBase", "HandleAddTabChannel");

	Params::UVALUI_ChatPanelBase_HandleAddTabChannel_Params Parms{};

	Parms.MessageConfig = MessageConfig;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_ChatPanelBase.HandleAddMessageToPanel
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class UWidget*                     MessagePanel                                                     (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FValeriaChatMessage         ChatMessage                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FVALUI_ChatMessageConfig    MessageConfig                                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UVALUI_ChatPanelBase::HandleAddMessageToPanel(class UWidget* MessagePanel, struct FValeriaChatMessage& ChatMessage, struct FVALUI_ChatMessageConfig& MessageConfig)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_ChatPanelBase", "HandleAddMessageToPanel");

	Params::UVALUI_ChatPanelBase_HandleAddMessageToPanel_Params Parms{};

	Parms.MessagePanel = MessagePanel;
	Parms.ChatMessage = ChatMessage;
	Parms.MessageConfig = MessageConfig;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_ChatPanelBase.GotoChatState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EVALUI_ChatPanelState   State                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_ChatPanelBase::GotoChatState(enum class EVALUI_ChatPanelState State)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_ChatPanelBase", "GotoChatState");

	Params::UVALUI_ChatPanelBase_GotoChatState_Params Parms{};

	Parms.State = State;

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

void UVALUI_ChatPanelBase::GetTabWidgetReferences(class FName& TabName, class UWidget** OutSidePanelWidget, class UWidget** OutMessagePanelWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_ChatPanelBase", "GetTabWidgetReferences");

	Params::UVALUI_ChatPanelBase_GetTabWidgetReferences_Params Parms{};

	Parms.TabName = TabName;

	UObject::ProcessEvent(Func, &Parms);

	if (OutSidePanelWidget != nullptr)
		*OutSidePanelWidget = Parms.OutSidePanelWidget;

	if (OutMessagePanelWidget != nullptr)
		*OutMessagePanelWidget = Parms.OutMessagePanelWidget;

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

void UVALUI_ChatPanelBase::GetChatMessageConfigs(struct FValeriaChatMessage& Message, TArray<struct FVALUI_ChatMessageConfig>* OutMessageConfigs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_ChatPanelBase", "GetChatMessageConfigs");

	Params::UVALUI_ChatPanelBase_GetChatMessageConfigs_Params Parms{};

	Parms.Message = Message;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutMessageConfigs != nullptr)
		*OutMessageConfigs = Parms.OutMessageConfigs;

}


// Function ValeriaUI.VALUI_ChatPanelBase.DisplayTab
// (Final, Native, Protected, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        TabName                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_ChatPanelBase::DisplayTab(class FName& TabName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_ChatPanelBase", "DisplayTab");

	Params::UVALUI_ChatPanelBase_DisplayTab_Params Parms{};

	Parms.TabName = TabName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.VALUI_ChatPanelBase.ClearTabSidePanel
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FVALUI_ChatTab              Tab                                                              (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UVALUI_ChatPanelBase::ClearTabSidePanel(struct FVALUI_ChatTab& Tab)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_ChatPanelBase", "ClearTabSidePanel");

	Params::UVALUI_ChatPanelBase_ClearTabSidePanel_Params Parms{};

	Parms.Tab = Tab;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_ChatStatics.GetMessageTargetsOfChannel
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class UWorld*                      WorldContext                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVALUI_ChatChannel          InChannel                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FMessageTarget>      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FMessageTarget> UVALUI_ChatStatics::GetMessageTargetsOfChannel(class UWorld* WorldContext, struct FVALUI_ChatChannel& InChannel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_ChatStatics", "GetMessageTargetsOfChannel");

	Params::UVALUI_ChatStatics_GetMessageTargetsOfChannel_Params Parms{};

	Parms.WorldContext = WorldContext;
	Parms.InChannel = InChannel;

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

bool UVALUI_ChatStatics::DoesChannelMatchMessageTarget(struct FVALUI_ChatChannel& InChannel, struct FMessageTarget& InMessageTarget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_ChatStatics", "DoesChannelMatchMessageTarget");

	Params::UVALUI_ChatStatics_DoesChannelMatchMessageTarget_Params Parms{};

	Parms.InChannel = InChannel;
	Parms.InMessageTarget = InMessageTarget;

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

struct FS6PLAT_ChatMessage UVALUI_ChatStatics::ConvertValeriaChatMessageToPlatformChatMessage(struct FValeriaChatMessage& ChatMessages)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_ChatStatics", "ConvertValeriaChatMessageToPlatformChatMessage");

	Params::UVALUI_ChatStatics_ConvertValeriaChatMessageToPlatformChatMessage_Params Parms{};

	Parms.ChatMessages = ChatMessages;

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

TArray<struct FS6PLAT_ChatMessage> UVALUI_ChatStatics::ConvertValeriaChatMessagesArrayToPlatformChatMessagesArray(TArray<struct FValeriaChatMessage>& ChatMessages)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_ChatStatics", "ConvertValeriaChatMessagesArrayToPlatformChatMessagesArray");

	Params::UVALUI_ChatStatics_ConvertValeriaChatMessagesArrayToPlatformChatMessagesArray_Params Parms{};

	Parms.ChatMessages = ChatMessages;

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

void UVALUI_CheckBoxStyle::Apply(class UCheckBox* CheckBox)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_CheckBoxStyle", "Apply");

	Params::UVALUI_CheckBoxStyle_Apply_Params Parms{};

	Parms.CheckBox = CheckBox;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.VALUI_CheckBox_Styled.SetCheckBoxStyle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UVALUI_CheckBoxStyle*        NewStyle                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_CheckBox_Styled::SetCheckBoxStyle(class UVALUI_CheckBoxStyle* NewStyle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_CheckBox_Styled", "SetCheckBoxStyle");

	Params::UVALUI_CheckBox_Styled_SetCheckBoxStyle_Params Parms{};

	Parms.NewStyle = NewStyle;

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

class FName UVALUI_CrafterContentWidget::GetCrafterRowName(struct FCrafterConfig& CrafterConfig)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_CrafterContentWidget", "GetCrafterRowName");

	Params::UVALUI_CrafterContentWidget_GetCrafterRowName_Params Parms{};

	Parms.CrafterConfig = CrafterConfig;

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

bool UVALUI_CrafterContentWidget::GetCrafterData(struct FCrafterConfig& CrafterConfig, struct FVALUI_Crafter* CrafterData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_CrafterContentWidget", "GetCrafterData");

	Params::UVALUI_CrafterContentWidget_GetCrafterData_Params Parms{};

	Parms.CrafterConfig = CrafterConfig;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (CrafterData != nullptr)
		*CrafterData = Parms.CrafterData;

	return Parms.ReturnValue;

}


// Function ValeriaUI.VALUI_CrafterStationsViewWidget.DisplayCrafterStations
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRecipeNeeds                RecipeNeeds                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UVALUI_CrafterStationsViewWidget::DisplayCrafterStations(struct FRecipeNeeds& RecipeNeeds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_CrafterStationsViewWidget", "DisplayCrafterStations");

	Params::UVALUI_CrafterStationsViewWidget_DisplayCrafterStations_Params Parms{};

	Parms.RecipeNeeds = RecipeNeeds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_DepthSortedHorizontalBox.SetForemostWidgetIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              Index                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_DepthSortedHorizontalBox::SetForemostWidgetIndex(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_DepthSortedHorizontalBox", "SetForemostWidgetIndex");

	Params::UVALUI_DepthSortedHorizontalBox_SetForemostWidgetIndex_Params Parms{};

	Parms.Index = Index;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.VALUI_DragDropOperation.DragStarted
// (Native, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FPointerEvent               PointerEvent                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UVALUI_DragDropOperation::DragStarted(struct FPointerEvent& PointerEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_DragDropOperation", "DragStarted");

	Params::UVALUI_DragDropOperation_DragStarted_Params Parms{};

	Parms.PointerEvent = PointerEvent;

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

void UVALUI_EditableRichTextStyle::ApplyToTextBlock(class US6UI_EditableRichText* TextWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_EditableRichTextStyle", "ApplyToTextBlock");

	Params::UVALUI_EditableRichTextStyle_ApplyToTextBlock_Params Parms{};

	Parms.TextWidget = TextWidget;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.VALUI_EditableTextBoxStyle.ApplyToTextBox
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// class UEditableTextBox*            TextWidget                                                       (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_EditableTextBoxStyle::ApplyToTextBox(class UEditableTextBox* TextWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_EditableTextBoxStyle", "ApplyToTextBox");

	Params::UVALUI_EditableTextBoxStyle_ApplyToTextBox_Params Parms{};

	Parms.TextWidget = TextWidget;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.VALUI_EditableTextBox_Styled.SetTextStyle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UVALUI_EditableTextBoxStyle* NewStyle                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_EditableTextBox_Styled::SetTextStyle(class UVALUI_EditableTextBoxStyle* NewStyle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_EditableTextBox_Styled", "SetTextStyle");

	Params::UVALUI_EditableTextBox_Styled_SetTextStyle_Params Parms{};

	Parms.NewStyle = NewStyle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.VALUI_EditableTextStyle.ApplyToTextBlock
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// class UEditableText*               TextWidget                                                       (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_EditableTextStyle::ApplyToTextBlock(class UEditableText* TextWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_EditableTextStyle", "ApplyToTextBlock");

	Params::UVALUI_EditableTextStyle_ApplyToTextBlock_Params Parms{};

	Parms.TextWidget = TextWidget;

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

void UVALUI_EditableText_Styled::VALUIEvent_UMGEditableTextOnCursorMoved__DelegateSignature(int32 LineIndex, int32 Offset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_EditableText_Styled", "VALUIEvent_UMGEditableTextOnCursorMoved__DelegateSignature");

	Params::UVALUI_EditableText_Styled_VALUIEvent_UMGEditableTextOnCursorMoved__DelegateSignature_Params Parms{};

	Parms.LineIndex = LineIndex;
	Parms.Offset = Offset;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_EditableText_Styled.SetTextStyle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UVALUI_EditableTextStyle*    NewStyle                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_EditableText_Styled::SetTextStyle(class UVALUI_EditableTextStyle* NewStyle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_EditableText_Styled", "SetTextStyle");

	Params::UVALUI_EditableText_Styled_SetTextStyle_Params Parms{};

	Parms.NewStyle = NewStyle;

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

void UVALUI_EditableText_Styled::CaretGoTo(int32 LineIndex, int32 Offset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_EditableText_Styled", "CaretGoTo");

	Params::UVALUI_EditableText_Styled_CaretGoTo_Params Parms{};

	Parms.LineIndex = LineIndex;
	Parms.Offset = Offset;

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

void UVALUI_EmoteButtonContainer::OnEmoteContainerButtonClicked__DelegateSignature(class UVALUI_EmoteButtonContainer* Container, class UVALUI_EmoteButton* ButtonClicked, class UEmoteDataAsset* EmoteDataAsset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_EmoteButtonContainer", "OnEmoteContainerButtonClicked__DelegateSignature");

	Params::UVALUI_EmoteButtonContainer_OnEmoteContainerButtonClicked__DelegateSignature_Params Parms{};

	Parms.Container = Container;
	Parms.ButtonClicked = ButtonClicked;
	Parms.EmoteDataAsset = EmoteDataAsset;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_EmoteButtonContainer.OnEmoteButtonClicked
// (Final, Native, Protected)
// Parameters:
// class UVALUI_EmoteButton*          InButtonClicked                                                  (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UEmoteDataAsset*             InEmoteDataAsset                                                 (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_EmoteButtonContainer::OnEmoteButtonClicked(class UVALUI_EmoteButton* InButtonClicked, class UEmoteDataAsset* InEmoteDataAsset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_EmoteButtonContainer", "OnEmoteButtonClicked");

	Params::UVALUI_EmoteButtonContainer_OnEmoteButtonClicked_Params Parms{};

	Parms.InButtonClicked = InButtonClicked;
	Parms.InEmoteDataAsset = InEmoteDataAsset;

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

void UVALUI_EmoteButtonContainer::HandleAddButtonToContainer(class UVALUI_EmoteButton* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_EmoteButtonContainer", "HandleAddButtonToContainer");

	Params::UVALUI_EmoteButtonContainer_HandleAddButtonToContainer_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_ErrorDisplayHandlerInterface.HandleErrorDisplay
// (Native, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FVALUI_ErrorDisplayPayload  ErrorDisplayPayload                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void IVALUI_ErrorDisplayHandlerInterface::HandleErrorDisplay(struct FVALUI_ErrorDisplayPayload& ErrorDisplayPayload)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_ErrorDisplayHandlerInterface", "HandleErrorDisplay");

	Params::IVALUI_ErrorDisplayHandlerInterface_HandleErrorDisplay_Params Parms{};

	Parms.ErrorDisplayPayload = ErrorDisplayPayload;

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

bool UVALUI_ErrorDisplayHandling::TryRaiseErrorForDisplay(class UWidget* InstigatingWidget, struct FVALUI_ErrorDisplayPayload& ErrorDisplayPayload)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_ErrorDisplayHandling", "TryRaiseErrorForDisplay");

	Params::UVALUI_ErrorDisplayHandling_TryRaiseErrorForDisplay_Params Parms{};

	Parms.InstigatingWidget = InstigatingWidget;
	Parms.ErrorDisplayPayload = ErrorDisplayPayload;

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

void UVALUI_ExpandableAreaStyle::Apply(class UExpandableArea* ExpandableArea)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_ExpandableAreaStyle", "Apply");

	Params::UVALUI_ExpandableAreaStyle_Apply_Params Parms{};

	Parms.ExpandableArea = ExpandableArea;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.VALUI_ExpandableArea_Styled.SetExpandableAreaStyle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UVALUI_ExpandableAreaStyle*  NewStyle                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_ExpandableArea_Styled::SetExpandableAreaStyle(class UVALUI_ExpandableAreaStyle* NewStyle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_ExpandableArea_Styled", "SetExpandableAreaStyle");

	Params::UVALUI_ExpandableArea_Styled_SetExpandableAreaStyle_Params Parms{};

	Parms.NewStyle = NewStyle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.VALUI_ExtensionPointContainerBase.AddExtensibleWidget
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// TSoftClassPtr<class UUserWidget>   WidgetReference                                                  (ConstParm, Parm, OutParm, ReferenceParm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_ExtensionPointContainerBase::AddExtensibleWidget(TSoftClassPtr<class UUserWidget>& WidgetReference)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_ExtensionPointContainerBase", "AddExtensibleWidget");

	Params::UVALUI_ExtensionPointContainerBase_AddExtensibleWidget_Params Parms{};

	Parms.WidgetReference = WidgetReference;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_InputValidationFunctionLibrary.ValidateUserName
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      UserNameInput                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FText>                OutErrors                                                        (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVALUI_InputValidationFunctionLibrary::ValidateUserName(const class FString& UserNameInput, TArray<class FText>* OutErrors)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_InputValidationFunctionLibrary", "ValidateUserName");

	Params::UVALUI_InputValidationFunctionLibrary_ValidateUserName_Params Parms{};

	Parms.UserNameInput = UserNameInput;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutErrors != nullptr)
		*OutErrors = Parms.OutErrors;

	return Parms.ReturnValue;

}


// Function ValeriaUI.VALUI_ItemAcquisitionNotificationInterface.SetInitialData
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FValeriaItem                Item                                                             (Parm, NativeAccessSpecifierPublic)

void IVALUI_ItemAcquisitionNotificationInterface::SetInitialData(const struct FValeriaItem& Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_ItemAcquisitionNotificationInterface", "SetInitialData");

	Params::IVALUI_ItemAcquisitionNotificationInterface_SetInitialData_Params Parms{};

	Parms.Item = Item;

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

void IVALUI_ItemAcquisitionNotificationInterface::AppendAdditionalData(const struct FValeriaItem& Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_ItemAcquisitionNotificationInterface", "AppendAdditionalData");

	Params::IVALUI_ItemAcquisitionNotificationInterface_AppendAdditionalData_Params Parms{};

	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_ItemAcquisitionNotifier.Setup
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UInventoryComponent*         SourceInventoryComponent                                         (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UVALUI_NotificationQueue*    TargetNotificationQueue                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSoftClassPtr<class UUserWidget>   InWidgetClass                                                    (ConstParm, Parm, OutParm, ReferenceParm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_ItemAcquisitionNotifier::Setup(class UInventoryComponent* SourceInventoryComponent, class UVALUI_NotificationQueue* TargetNotificationQueue, TSoftClassPtr<class UUserWidget>& InWidgetClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_ItemAcquisitionNotifier", "Setup");

	Params::UVALUI_ItemAcquisitionNotifier_Setup_Params Parms{};

	Parms.SourceInventoryComponent = SourceInventoryComponent;
	Parms.TargetNotificationQueue = TargetNotificationQueue;
	Parms.InWidgetClass = InWidgetClass;

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

class UWidget* UVALUI_ItemAcquisitionNotifier::OnCreateItemAcquisitionNotification__DelegateSignature(class UVALUI_ItemAcquisitionNotifier* Notifier)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_ItemAcquisitionNotifier", "OnCreateItemAcquisitionNotification__DelegateSignature");

	Params::UVALUI_ItemAcquisitionNotifier_OnCreateItemAcquisitionNotification__DelegateSignature_Params Parms{};

	Parms.Notifier = Notifier;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ValeriaUI.VALUI_ItemAcquisitionNotifier.HandleNotificationDismissed
// (Final, Native, Private, HasOutParams, HasDefaults)
// Parameters:
// class UVALUI_NotificationQueue*    NotificationQueue                                                (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGuid                       AffectedNotificationId                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWidget*                     NotificationWidget                                               (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_ItemAcquisitionNotifier::HandleNotificationDismissed(class UVALUI_NotificationQueue* NotificationQueue, struct FGuid& AffectedNotificationId, class UWidget* NotificationWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_ItemAcquisitionNotifier", "HandleNotificationDismissed");

	Params::UVALUI_ItemAcquisitionNotifier_HandleNotificationDismissed_Params Parms{};

	Parms.NotificationQueue = NotificationQueue;
	Parms.AffectedNotificationId = AffectedNotificationId;
	Parms.NotificationWidget = NotificationWidget;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.VALUI_ItemAcquisitionNotifier.HandleItemAcquired
// (Final, Native, Private)
// Parameters:
// struct FValeriaItem                Item                                                             (Parm, NativeAccessSpecifierPublic)

void UVALUI_ItemAcquisitionNotifier::HandleItemAcquired(const struct FValeriaItem& Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_ItemAcquisitionNotifier", "HandleItemAcquired");

	Params::UVALUI_ItemAcquisitionNotifier_HandleItemAcquired_Params Parms{};

	Parms.Item = Item;

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

void UVALUI_ListView_Styled::VALUI_OnListViewUserScrolled__DelegateSignature(float ScrollFraction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_ListView_Styled", "VALUI_OnListViewUserScrolled__DelegateSignature");

	Params::UVALUI_ListView_Styled_VALUI_OnListViewUserScrolled__DelegateSignature_Params Parms{};

	Parms.ScrollFraction = ScrollFraction;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction ValeriaUI.VALUI_ListView_Styled.VALUI_OnListViewUserMouseWheelScrolled__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// float                              DesiredOffset                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_ListView_Styled::VALUI_OnListViewUserMouseWheelScrolled__DelegateSignature(float DesiredOffset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_ListView_Styled", "VALUI_OnListViewUserMouseWheelScrolled__DelegateSignature");

	Params::UVALUI_ListView_Styled_VALUI_OnListViewUserMouseWheelScrolled__DelegateSignature_Params Parms{};

	Parms.DesiredOffset = DesiredOffset;

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


// DelegateFunction ValeriaUI.VALUI_ListView_Styled.OnListItemsChanged__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams)
// Parameters:
// TArray<class UObject*>             AddedItems                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<class UObject*>             RemovedItems                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UVALUI_ListView_Styled::OnListItemsChanged__DelegateSignature(TArray<class UObject*>& AddedItems, TArray<class UObject*>& RemovedItems)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_ListView_Styled", "OnListItemsChanged__DelegateSignature");

	Params::UVALUI_ListView_Styled_OnListItemsChanged__DelegateSignature_Params Parms{};

	Parms.AddedItems = AddedItems;
	Parms.RemovedItems = RemovedItems;

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

TArray<class UObject*> UVALUI_ListView_Styled::GetItemsWithinRange(int32& StartingIndex, int32& Range)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_ListView_Styled", "GetItemsWithinRange");

	Params::UVALUI_ListView_Styled_GetItemsWithinRange_Params Parms{};

	Parms.StartingIndex = StartingIndex;
	Parms.Range = Range;

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

void UVALUI_LoadingScreenBlackWidget::FadeFromNoneToBlack(float FadeTimeInSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_LoadingScreenBlackWidget", "FadeFromNoneToBlack");

	Params::UVALUI_LoadingScreenBlackWidget_FadeFromNoneToBlack_Params Parms{};

	Parms.FadeTimeInSeconds = FadeTimeInSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_LoadingScreenBlackWidget.FadeFromBlackToNone
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              FadeTimeInSeconds                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_LoadingScreenBlackWidget::FadeFromBlackToNone(float FadeTimeInSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_LoadingScreenBlackWidget", "FadeFromBlackToNone");

	Params::UVALUI_LoadingScreenBlackWidget_FadeFromBlackToNone_Params Parms{};

	Parms.FadeTimeInSeconds = FadeTimeInSeconds;

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

void UVALUI_MainHUDWidget::HandleOnViewModelSocialTrackingDataChanged(class UObject* Object, const struct FFieldNotificationId& Field)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_MainHUDWidget", "HandleOnViewModelSocialTrackingDataChanged");

	Params::UVALUI_MainHUDWidget_HandleOnViewModelSocialTrackingDataChanged_Params Parms{};

	Parms.Object = Object;
	Parms.Field = Field;

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

void UVALUI_MainHUDWidget::HandleOnViewModelHUDStateChanged(class UObject* Object, const struct FFieldNotificationId& Field)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_MainHUDWidget", "HandleOnViewModelHUDStateChanged");

	Params::UVALUI_MainHUDWidget_HandleOnViewModelHUDStateChanged_Params Parms{};

	Parms.Object = Object;
	Parms.Field = Field;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.VALUI_MainHUDWidget.HandleOnSocialTrackingDataChanged
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FVALUI_SocialTrackingData   SocialData                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UVALUI_MainHUDWidget::HandleOnSocialTrackingDataChanged(struct FVALUI_SocialTrackingData& SocialData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_MainHUDWidget", "HandleOnSocialTrackingDataChanged");

	Params::UVALUI_MainHUDWidget_HandleOnSocialTrackingDataChanged_Params Parms{};

	Parms.SocialData = SocialData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_MainHUDWidget.HandleOnHUDStateChanged
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FVALUI_MainHUDState         State                                                            (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UVALUI_MainHUDWidget::HandleOnHUDStateChanged(struct FVALUI_MainHUDState& State)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_MainHUDWidget", "HandleOnHUDStateChanged");

	Params::UVALUI_MainHUDWidget_HandleOnHUDStateChanged_Params Parms{};

	Parms.State = State;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_MultiLineEditableTextBoxStyle.ApplyToTextBox
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// class UMultiLineEditableTextBox*   TextWidget                                                       (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_MultiLineEditableTextBoxStyle::ApplyToTextBox(class UMultiLineEditableTextBox* TextWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_MultiLineEditableTextBoxStyle", "ApplyToTextBox");

	Params::UVALUI_MultiLineEditableTextBoxStyle_ApplyToTextBox_Params Parms{};

	Parms.TextWidget = TextWidget;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.VALUI_MultiLineEditableTextBox_Styled.SetTextBoxStyle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UVALUI_MultiLineEditableTextBoxStyle*NewStyle                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_MultiLineEditableTextBox_Styled::SetTextBoxStyle(class UVALUI_MultiLineEditableTextBoxStyle* NewStyle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_MultiLineEditableTextBox_Styled", "SetTextBoxStyle");

	Params::UVALUI_MultiLineEditableTextBox_Styled_SetTextBoxStyle_Params Parms{};

	Parms.NewStyle = NewStyle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.VALUI_MultiLineEditableTextStyle.ApplyToTextBlock
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// class UMultiLineEditableText*      TextWidget                                                       (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_MultiLineEditableTextStyle::ApplyToTextBlock(class UMultiLineEditableText* TextWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_MultiLineEditableTextStyle", "ApplyToTextBlock");

	Params::UVALUI_MultiLineEditableTextStyle_ApplyToTextBlock_Params Parms{};

	Parms.TextWidget = TextWidget;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.VALUI_MultiLineEditableText_Styled.SetTextStyle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UVALUI_MultiLineEditableTextStyle*NewStyle                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_MultiLineEditableText_Styled::SetTextStyle(class UVALUI_MultiLineEditableTextStyle* NewStyle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_MultiLineEditableText_Styled", "SetTextStyle");

	Params::UVALUI_MultiLineEditableText_Styled_SetTextStyle_Params Parms{};

	Parms.NewStyle = NewStyle;

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

class UVALUI_NewsInboxMessageDataAsset* UVALUI_NewsInbox_Widget::GetNewsInboxMessageDefinitionFromRewardIndex(int32 Index, bool Claimed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_NewsInbox_Widget", "GetNewsInboxMessageDefinitionFromRewardIndex");

	Params::UVALUI_NewsInbox_Widget_GetNewsInboxMessageDefinitionFromRewardIndex_Params Parms{};

	Parms.Index = Index;
	Parms.Claimed = Claimed;

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

class UVALUI_NewsInboxMessageDataAsset* UVALUI_NewsInbox_Widget::GetNewsInboxMessageDefinitionByType(enum class EVAL_NewsInboxMessageType EMessageType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_NewsInbox_Widget", "GetNewsInboxMessageDefinitionByType");

	Params::UVALUI_NewsInbox_Widget_GetNewsInboxMessageDefinitionByType_Params Parms{};

	Parms.EMessageType = EMessageType;

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

bool IVALUI_NotificationWidgetInterface::MatchesNotification(class FText& NotificationText, TSoftObjectPtr<class UTexture2D>& NotificationIcon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_NotificationWidgetInterface", "MatchesNotification");

	Params::IVALUI_NotificationWidgetInterface_MatchesNotification_Params Parms{};

	Parms.NotificationText = NotificationText;
	Parms.NotificationIcon = NotificationIcon;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ValeriaUI.VALUI_NotificationWidgetInterface.HandleNotificationShown
// (Event, Public, HasOutParams, HasDefaults, BlueprintEvent)
// Parameters:
// class UVALUI_NotificationQueue*    NotificationQueue                                                (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGuid                       NotificationId                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IVALUI_NotificationWidgetInterface::HandleNotificationShown(class UVALUI_NotificationQueue* NotificationQueue, struct FGuid& NotificationId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_NotificationWidgetInterface", "HandleNotificationShown");

	Params::IVALUI_NotificationWidgetInterface_HandleNotificationShown_Params Parms{};

	Parms.NotificationQueue = NotificationQueue;
	Parms.NotificationId = NotificationId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_NotificationWidgetInterface.HandleNotificationDismissed
// (Event, Public, HasOutParams, HasDefaults, BlueprintEvent)
// Parameters:
// class UVALUI_NotificationQueue*    NotificationQueue                                                (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGuid                       NotificationId                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IVALUI_NotificationWidgetInterface::HandleNotificationDismissed(class UVALUI_NotificationQueue* NotificationQueue, struct FGuid& NotificationId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_NotificationWidgetInterface", "HandleNotificationDismissed");

	Params::IVALUI_NotificationWidgetInterface_HandleNotificationDismissed_Params Parms{};

	Parms.NotificationQueue = NotificationQueue;
	Parms.NotificationId = NotificationId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_NotificationQueue.TryDismissNotification
// (Final, BlueprintCosmetic, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FGuid                       NotificationId                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVALUI_NotificationQueue::TryDismissNotification(struct FGuid& NotificationId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_NotificationQueue", "TryDismissNotification");

	Params::UVALUI_NotificationQueue_TryDismissNotification_Params Parms{};

	Parms.NotificationId = NotificationId;

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

struct FGuid UVALUI_NotificationQueue::PushNotification(class UWidget* NotificationWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_NotificationQueue", "PushNotification");

	Params::UVALUI_NotificationQueue_PushNotification_Params Parms{};

	Parms.NotificationWidget = NotificationWidget;

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

void UVALUI_NotificationQueue::OnNotificationShown(struct FGuid& NotificationId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_NotificationQueue", "OnNotificationShown");

	Params::UVALUI_NotificationQueue_OnNotificationShown_Params Parms{};

	Parms.NotificationId = NotificationId;

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

void UVALUI_NotificationQueue::OnNotificationPushed__DelegateSignature(class UVALUI_NotificationQueue* NotificationQueue, struct FGuid& AffectedNotificationId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_NotificationQueue", "OnNotificationPushed__DelegateSignature");

	Params::UVALUI_NotificationQueue_OnNotificationPushed__DelegateSignature_Params Parms{};

	Parms.NotificationQueue = NotificationQueue;
	Parms.AffectedNotificationId = AffectedNotificationId;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction ValeriaUI.VALUI_NotificationQueue.OnNotificationDismissed__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParams, HasDefaults)
// Parameters:
// class UVALUI_NotificationQueue*    NotificationQueue                                                (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGuid                       AffectedNotificationId                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWidget*                     NotificationWidget                                               (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_NotificationQueue::OnNotificationDismissed__DelegateSignature(class UVALUI_NotificationQueue* NotificationQueue, struct FGuid& AffectedNotificationId, class UWidget* NotificationWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_NotificationQueue", "OnNotificationDismissed__DelegateSignature");

	Params::UVALUI_NotificationQueue_OnNotificationDismissed__DelegateSignature_Params Parms{};

	Parms.NotificationQueue = NotificationQueue;
	Parms.AffectedNotificationId = AffectedNotificationId;
	Parms.NotificationWidget = NotificationWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_NotificationQueue.GetNotificationById
// (Final, BlueprintCosmetic, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGuid                       NotificationId                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWidget*                     ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UWidget* UVALUI_NotificationQueue::GetNotificationById(struct FGuid& NotificationId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_NotificationQueue", "GetNotificationById");

	Params::UVALUI_NotificationQueue_GetNotificationById_Params Parms{};

	Parms.NotificationId = NotificationId;

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

struct FGuid UVALUI_NotificationQueue::GetIdForNotification(class UWidget* NotificationWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_NotificationQueue", "GetIdForNotification");

	Params::UVALUI_NotificationQueue_GetIdForNotification_Params Parms{};

	Parms.NotificationWidget = NotificationWidget;

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

void UVALUI_PhotoCameraScreenBase::SetLookMode(enum class EVALUI_PhotoCameraScreenLookMode Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_PhotoCameraScreenBase", "SetLookMode");

	Params::UVALUI_PhotoCameraScreenBase_SetLookMode_Params Parms{};

	Parms.Value = Value;

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

void UVALUI_PhotoCameraScreenBase::AccumulateLookModeInput(struct FGeometry& InGeometry, struct FPointerEvent& InMouseEvent, bool bInvertYAxis)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_PhotoCameraScreenBase", "AccumulateLookModeInput");

	Params::UVALUI_PhotoCameraScreenBase_AccumulateLookModeInput_Params Parms{};

	Parms.InGeometry = InGeometry;
	Parms.InMouseEvent = InMouseEvent;
	Parms.bInvertYAxis = bInvertYAxis;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.VALUI_UIManagerWidgetBase.RegisterCallbacksAndBroadcastNewDragDrop
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UVALUI_ItemDragDrop*         ItemDragDrop                                                     (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_UIManagerWidgetBase::RegisterCallbacksAndBroadcastNewDragDrop(class UVALUI_ItemDragDrop* ItemDragDrop)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_UIManagerWidgetBase", "RegisterCallbacksAndBroadcastNewDragDrop");

	Params::UVALUI_UIManagerWidgetBase_RegisterCallbacksAndBroadcastNewDragDrop_Params Parms{};

	Parms.ItemDragDrop = ItemDragDrop;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.VALUI_UIManagerWidgetBase.OpenVillagerStore
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              VillagerConfigId                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_UIManagerWidgetBase::OpenVillagerStore(int32 VillagerConfigId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_UIManagerWidgetBase", "OpenVillagerStore");

	Params::UVALUI_UIManagerWidgetBase_OpenVillagerStore_Params Parms{};

	Parms.VillagerConfigId = VillagerConfigId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.VALUI_UIManagerWidgetBase.OpenBook
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              BookId                                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_UIManagerWidgetBase::OpenBook(int32 BookId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_UIManagerWidgetBase", "OpenBook");

	Params::UVALUI_UIManagerWidgetBase_OpenBook_Params Parms{};

	Parms.BookId = BookId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.VALUI_UIManagerWidgetBase.OnItemDragDropped
// (Final, Native, Private)
// Parameters:
// class UDragDropOperation*          Operation                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_UIManagerWidgetBase::OnItemDragDropped(class UDragDropOperation* Operation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_UIManagerWidgetBase", "OnItemDragDropped");

	Params::UVALUI_UIManagerWidgetBase_OnItemDragDropped_Params Parms{};

	Parms.Operation = Operation;

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

void UVALUI_UIManagerWidgetBase::NavigateToRecentPhotos(struct FGuid& IdOfPhotoToNavigateTo, bool bShouldSelectPhoto)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_UIManagerWidgetBase", "NavigateToRecentPhotos");

	Params::UVALUI_UIManagerWidgetBase_NavigateToRecentPhotos_Params Parms{};

	Parms.IdOfPhotoToNavigateTo = IdOfPhotoToNavigateTo;
	Parms.bShouldSelectPhoto = bShouldSelectPhoto;

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

void UVALUI_UIManagerWidgetBase::NavigateToOnlinePhotoAlbum(struct FGuid& IdOfPhotoToNavigateTo, bool bShouldSelectPhoto)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_UIManagerWidgetBase", "NavigateToOnlinePhotoAlbum");

	Params::UVALUI_UIManagerWidgetBase_NavigateToOnlinePhotoAlbum_Params Parms{};

	Parms.IdOfPhotoToNavigateTo = IdOfPhotoToNavigateTo;
	Parms.bShouldSelectPhoto = bShouldSelectPhoto;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.VALUI_UIManagerWidgetBase.Implementation_ToggleGameplayMenuMode
// (BlueprintCosmetic, Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EVAL_GameplayMenuMode   Mode                                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_UIManagerWidgetBase::Implementation_ToggleGameplayMenuMode(enum class EVAL_GameplayMenuMode Mode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_UIManagerWidgetBase", "Implementation_ToggleGameplayMenuMode");

	Params::UVALUI_UIManagerWidgetBase_Implementation_ToggleGameplayMenuMode_Params Parms{};

	Parms.Mode = Mode;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_UIManagerWidgetBase.Implementation_ToggleCollectionsMenu
// (BlueprintCosmetic, Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EVAL_CollectionsTabStateTabState                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_UIManagerWidgetBase::Implementation_ToggleCollectionsMenu(enum class EVAL_CollectionsTabState& TabState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_UIManagerWidgetBase", "Implementation_ToggleCollectionsMenu");

	Params::UVALUI_UIManagerWidgetBase_Implementation_ToggleCollectionsMenu_Params Parms{};

	Parms.TabState = TabState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_UIManagerWidgetBase.Implementation_OpenVillagerStore
// (BlueprintCosmetic, Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              VillagerConfigId                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_UIManagerWidgetBase::Implementation_OpenVillagerStore(int32 VillagerConfigId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_UIManagerWidgetBase", "Implementation_OpenVillagerStore");

	Params::UVALUI_UIManagerWidgetBase_Implementation_OpenVillagerStore_Params Parms{};

	Parms.VillagerConfigId = VillagerConfigId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_UIManagerWidgetBase.Implementation_OpenSubgameScreen
// (BlueprintCosmetic, Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USubgameConfig*              InSubgameConfig                                                  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_UIManagerWidgetBase::Implementation_OpenSubgameScreen(class USubgameConfig* InSubgameConfig)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_UIManagerWidgetBase", "Implementation_OpenSubgameScreen");

	Params::UVALUI_UIManagerWidgetBase_Implementation_OpenSubgameScreen_Params Parms{};

	Parms.InSubgameConfig = InSubgameConfig;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_UIManagerWidgetBase.Implementation_OpenStore
// (BlueprintCosmetic, Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UVillagerStoreConfig*        StoreConfig                                                      (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_UIManagerWidgetBase::Implementation_OpenStore(class UVillagerStoreConfig* StoreConfig)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_UIManagerWidgetBase", "Implementation_OpenStore");

	Params::UVALUI_UIManagerWidgetBase_Implementation_OpenStore_Params Parms{};

	Parms.StoreConfig = StoreConfig;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_UIManagerWidgetBase.Implementation_OpenStables
// (BlueprintCosmetic, Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      StablesActor                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_UIManagerWidgetBase::Implementation_OpenStables(class AActor* StablesActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_UIManagerWidgetBase", "Implementation_OpenStables");

	Params::UVALUI_UIManagerWidgetBase_Implementation_OpenStables_Params Parms{};

	Parms.StablesActor = StablesActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_UIManagerWidgetBase.Implementation_OpenSignTeleporter
// (BlueprintCosmetic, Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      TeleporterActor                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_UIManagerWidgetBase::Implementation_OpenSignTeleporter(class AActor* TeleporterActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_UIManagerWidgetBase", "Implementation_OpenSignTeleporter");

	Params::UVALUI_UIManagerWidgetBase_Implementation_OpenSignTeleporter_Params Parms{};

	Parms.TeleporterActor = TeleporterActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_UIManagerWidgetBase.Implementation_OpenShippingBin
// (BlueprintCosmetic, Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UShippingBinComponent*       ShippingBinComponent                                             (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_UIManagerWidgetBase::Implementation_OpenShippingBin(class UShippingBinComponent* ShippingBinComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_UIManagerWidgetBase", "Implementation_OpenShippingBin");

	Params::UVALUI_UIManagerWidgetBase_Implementation_OpenShippingBin_Params Parms{};

	Parms.ShippingBinComponent = ShippingBinComponent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_UIManagerWidgetBase.Implementation_OpenRequestItem
// (BlueprintCosmetic, Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Tag                                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_UIManagerWidgetBase::Implementation_OpenRequestItem(class FName Tag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_UIManagerWidgetBase", "Implementation_OpenRequestItem");

	Params::UVALUI_UIManagerWidgetBase_Implementation_OpenRequestItem_Params Parms{};

	Parms.Tag = Tag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_UIManagerWidgetBase.Implementation_OpenRepairStation
// (BlueprintCosmetic, Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      RepairStationActor                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAllowPurchases                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAllowRepairKitsFromStorage                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_UIManagerWidgetBase::Implementation_OpenRepairStation(class AActor* RepairStationActor, bool bAllowPurchases, bool bAllowRepairKitsFromStorage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_UIManagerWidgetBase", "Implementation_OpenRepairStation");

	Params::UVALUI_UIManagerWidgetBase_Implementation_OpenRepairStation_Params Parms{};

	Parms.RepairStationActor = RepairStationActor;
	Parms.bAllowPurchases = bAllowPurchases;
	Parms.bAllowRepairKitsFromStorage = bAllowRepairKitsFromStorage;

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

void UVALUI_UIManagerWidgetBase::Implementation_OpenPremiumStore(struct FVAL_OpenStorePayload& Payload)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_UIManagerWidgetBase", "Implementation_OpenPremiumStore");

	Params::UVALUI_UIManagerWidgetBase_Implementation_OpenPremiumStore_Params Parms{};

	Parms.Payload = Payload;

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

void UVALUI_UIManagerWidgetBase::Implementation_OpenPetBonus(TSet<TSoftObjectPtr<class UVAL_CharacterCustomizationItem_Pet>>& Items)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_UIManagerWidgetBase", "Implementation_OpenPetBonus");

	Params::UVALUI_UIManagerWidgetBase_Implementation_OpenPetBonus_Params Parms{};

	Parms.Items = Items;

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

void UVALUI_UIManagerWidgetBase::Implementation_OpenItemVariantCustomizer(class UItemVariantCustomizerComponent* Customizer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_UIManagerWidgetBase", "Implementation_OpenItemVariantCustomizer");

	Params::UVALUI_UIManagerWidgetBase_Implementation_OpenItemVariantCustomizer_Params Parms{};

	Parms.Customizer = Customizer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_UIManagerWidgetBase.Implementation_OpenHousingEdit
// (BlueprintCosmetic, Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AHousingPlotActor*           HousingPlot                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_UIManagerWidgetBase::Implementation_OpenHousingEdit(class AHousingPlotActor* HousingPlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_UIManagerWidgetBase", "Implementation_OpenHousingEdit");

	Params::UVALUI_UIManagerWidgetBase_Implementation_OpenHousingEdit_Params Parms{};

	Parms.HousingPlot = HousingPlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_UIManagerWidgetBase.Implementation_OpenHouseUpgrade
// (BlueprintCosmetic, Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ULevelerComponent*           LevelerComponent                                                 (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_UIManagerWidgetBase::Implementation_OpenHouseUpgrade(class ULevelerComponent* LevelerComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_UIManagerWidgetBase", "Implementation_OpenHouseUpgrade");

	Params::UVALUI_UIManagerWidgetBase_Implementation_OpenHouseUpgrade_Params Parms{};

	Parms.LevelerComponent = LevelerComponent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_UIManagerWidgetBase.Implementation_OpenHomeTeleporter
// (BlueprintCosmetic, Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ATeleporterActor*            Teleporter                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_UIManagerWidgetBase::Implementation_OpenHomeTeleporter(class ATeleporterActor* Teleporter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_UIManagerWidgetBase", "Implementation_OpenHomeTeleporter");

	Params::UVALUI_UIManagerWidgetBase_Implementation_OpenHomeTeleporter_Params Parms{};

	Parms.Teleporter = Teleporter;

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

void UVALUI_UIManagerWidgetBase::Implementation_OpenCrafter(class UCrafterComponent* CrafterComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_UIManagerWidgetBase", "Implementation_OpenCrafter");

	Params::UVALUI_UIManagerWidgetBase_Implementation_OpenCrafter_Params Parms{};

	Parms.CrafterComponent = CrafterComponent;

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

void UVALUI_UIManagerWidgetBase::Implementation_OpenBundleDropOffMenu(class UBundleShrineConfig* BundleConfig)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_UIManagerWidgetBase", "Implementation_OpenBundleDropOffMenu");

	Params::UVALUI_UIManagerWidgetBase_Implementation_OpenBundleDropOffMenu_Params Parms{};

	Parms.BundleConfig = BundleConfig;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_UIManagerWidgetBase.Implementation_OpenBook
// (BlueprintCosmetic, Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              BookId                                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_UIManagerWidgetBase::Implementation_OpenBook(int32 BookId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_UIManagerWidgetBase", "Implementation_OpenBook");

	Params::UVALUI_UIManagerWidgetBase_Implementation_OpenBook_Params Parms{};

	Parms.BookId = BookId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_UIManagerWidgetBase.Implementation_OpenAmmoMenu
// (BlueprintCosmetic, Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EAmmoType               AmmoType                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_UIManagerWidgetBase::Implementation_OpenAmmoMenu(enum class EAmmoType AmmoType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_UIManagerWidgetBase", "Implementation_OpenAmmoMenu");

	Params::UVALUI_UIManagerWidgetBase_Implementation_OpenAmmoMenu_Params Parms{};

	Parms.AmmoType = AmmoType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_UIManagerWidgetBase.Implementation_NavigateToRecentPhotos
// (BlueprintCosmetic, Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                       IdOfPhotoToNavigateTo                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bShouldSelectPhoto                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_UIManagerWidgetBase::Implementation_NavigateToRecentPhotos(struct FGuid& IdOfPhotoToNavigateTo, bool bShouldSelectPhoto)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_UIManagerWidgetBase", "Implementation_NavigateToRecentPhotos");

	Params::UVALUI_UIManagerWidgetBase_Implementation_NavigateToRecentPhotos_Params Parms{};

	Parms.IdOfPhotoToNavigateTo = IdOfPhotoToNavigateTo;
	Parms.bShouldSelectPhoto = bShouldSelectPhoto;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_UIManagerWidgetBase.Implementation_NavigateToOnlinePhotoAlbum
// (BlueprintCosmetic, Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                       IdOfPhotoToNavigateTo                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bShouldSelectPhoto                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_UIManagerWidgetBase::Implementation_NavigateToOnlinePhotoAlbum(struct FGuid& IdOfPhotoToNavigateTo, bool bShouldSelectPhoto)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_UIManagerWidgetBase", "Implementation_NavigateToOnlinePhotoAlbum");

	Params::UVALUI_UIManagerWidgetBase_Implementation_NavigateToOnlinePhotoAlbum_Params Parms{};

	Parms.IdOfPhotoToNavigateTo = IdOfPhotoToNavigateTo;
	Parms.bShouldSelectPhoto = bShouldSelectPhoto;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_UIManagerWidgetBase.Implementation_NavigateToCharacterCustomization
// (BlueprintCosmetic, Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVAL_CharacterCustomizationModeConfigConfig                                                           (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UVALUI_UIManagerWidgetBase::Implementation_NavigateToCharacterCustomization(struct FVAL_CharacterCustomizationModeConfig& Config)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_UIManagerWidgetBase", "Implementation_NavigateToCharacterCustomization");

	Params::UVALUI_UIManagerWidgetBase_Implementation_NavigateToCharacterCustomization_Params Parms{};

	Parms.Config = Config;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_UIManagerWidgetBase.Implementation_HasAnyHousingPlotsTeleportOptions
// (BlueprintCosmetic, Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ATeleporterActor*            Teleporter                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVALUI_UIManagerWidgetBase::Implementation_HasAnyHousingPlotsTeleportOptions(class ATeleporterActor* Teleporter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_UIManagerWidgetBase", "Implementation_HasAnyHousingPlotsTeleportOptions");

	Params::UVALUI_UIManagerWidgetBase_Implementation_HasAnyHousingPlotsTeleportOptions_Params Parms{};

	Parms.Teleporter = Teleporter;

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

void UVALUI_PregameUIManager::TryGetCachedCharacters_Checked(TArray<struct FVALDTOS_MetaCharacterFormat>* OutOurCharacters)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_PregameUIManager", "TryGetCachedCharacters_Checked");

	Params::UVALUI_PregameUIManager_TryGetCachedCharacters_Checked_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutOurCharacters != nullptr)
		*OutOurCharacters = Parms.OutOurCharacters;

}


// Function ValeriaUI.VALUI_PregameUIManager.TryGetCachedCharacters
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FVALDTOS_MetaCharacterFormat>OutOurCharacters                                                 (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVALUI_PregameUIManager::TryGetCachedCharacters(TArray<struct FVALDTOS_MetaCharacterFormat>* OutOurCharacters)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_PregameUIManager", "TryGetCachedCharacters");

	Params::UVALUI_PregameUIManager_TryGetCachedCharacters_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutOurCharacters != nullptr)
		*OutOurCharacters = Parms.OutOurCharacters;

	return Parms.ReturnValue;

}


// Function ValeriaUI.VALUI_PregameUIManager.SetAnnouncementURL
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      URL                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_PregameUIManager::SetAnnouncementURL(const class FString& URL)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_PregameUIManager", "SetAnnouncementURL");

	Params::UVALUI_PregameUIManager_SetAnnouncementURL_Params Parms{};

	Parms.URL = URL;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// DelegateFunction ValeriaUI.VALUI_PregameUIManager.OnPregameStateChange__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// enum class EVALUI_PregameState     State                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_PregameUIManager::OnPregameStateChange__DelegateSignature(enum class EVALUI_PregameState State)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_PregameUIManager", "OnPregameStateChange__DelegateSignature");

	Params::UVALUI_PregameUIManager_OnPregameStateChange__DelegateSignature_Params Parms{};

	Parms.State = State;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_PregameUIManager.HandleOnRetrievingCharacterListFailed
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                              ErrorCode                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_PregameUIManager::HandleOnRetrievingCharacterListFailed(int32 ErrorCode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_PregameUIManager", "HandleOnRetrievingCharacterListFailed");

	Params::UVALUI_PregameUIManager_HandleOnRetrievingCharacterListFailed_Params Parms{};

	Parms.ErrorCode = ErrorCode;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_PregameUIManager.HandleOnPregameStateChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EVALUI_PregameState     NewState                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_PregameUIManager::HandleOnPregameStateChanged(enum class EVALUI_PregameState NewState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_PregameUIManager", "HandleOnPregameStateChanged");

	Params::UVALUI_PregameUIManager_HandleOnPregameStateChanged_Params Parms{};

	Parms.NewState = NewState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_PregameUIManager.HandleOnLoginStateChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EVALUI_LoginState       NewState                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_PregameUIManager::HandleOnLoginStateChanged(enum class EVALUI_LoginState NewState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_PregameUIManager", "HandleOnLoginStateChanged");

	Params::UVALUI_PregameUIManager_HandleOnLoginStateChanged_Params Parms{};

	Parms.NewState = NewState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_PregameUIManager.HandleOnLobbyStateChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EVALUI_LobbyState       NewState                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_PregameUIManager::HandleOnLobbyStateChanged(enum class EVALUI_LobbyState NewState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_PregameUIManager", "HandleOnLobbyStateChanged");

	Params::UVALUI_PregameUIManager_HandleOnLobbyStateChanged_Params Parms{};

	Parms.NewState = NewState;

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

void UVALUI_PregameUIManager::HandleOnCharacterListObtained(TArray<struct FVALDTOS_MetaCharacterFormat>& InCachedCharacters)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_PregameUIManager", "HandleOnCharacterListObtained");

	Params::UVALUI_PregameUIManager_HandleOnCharacterListObtained_Params Parms{};

	Parms.InCachedCharacters = InCachedCharacters;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.VALUI_PregameUIManager.HandleOnCharacterCreationStateChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EVALUI_CharacterCreationStateNewState                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_PregameUIManager::HandleOnCharacterCreationStateChanged(enum class EVALUI_CharacterCreationState NewState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_PregameUIManager", "HandleOnCharacterCreationStateChanged");

	Params::UVALUI_PregameUIManager_HandleOnCharacterCreationStateChanged_Params Parms{};

	Parms.NewState = NewState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_PregameUIManager.GoToPregameState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EVALUI_PregameState     NewState                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_PregameUIManager::GoToPregameState(enum class EVALUI_PregameState NewState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_PregameUIManager", "GoToPregameState");

	Params::UVALUI_PregameUIManager_GoToPregameState_Params Parms{};

	Parms.NewState = NewState;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.VALUI_PregameUIManager.GoToLoginState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EVALUI_LoginState       NewState                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_PregameUIManager::GoToLoginState(enum class EVALUI_LoginState NewState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_PregameUIManager", "GoToLoginState");

	Params::UVALUI_PregameUIManager_GoToLoginState_Params Parms{};

	Parms.NewState = NewState;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.VALUI_PregameUIManager.GoToLobbyState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EVALUI_LobbyState       NewState                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_PregameUIManager::GoToLobbyState(enum class EVALUI_LobbyState NewState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_PregameUIManager", "GoToLobbyState");

	Params::UVALUI_PregameUIManager_GoToLobbyState_Params Parms{};

	Parms.NewState = NewState;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.VALUI_PregameUIManager.GoToCharacterCreationState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EVALUI_CharacterCreationStateNewState                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_PregameUIManager::GoToCharacterCreationState(enum class EVALUI_CharacterCreationState NewState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_PregameUIManager", "GoToCharacterCreationState");

	Params::UVALUI_PregameUIManager_GoToCharacterCreationState_Params Parms{};

	Parms.NewState = NewState;

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

void UVALUI_PregameUIManager::GetCachedCharacterAtIndex_Checked(int32 Index, struct FVALDTOS_MetaCharacterFormat* OutCharacter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_PregameUIManager", "GetCachedCharacterAtIndex_Checked");

	Params::UVALUI_PregameUIManager_GetCachedCharacterAtIndex_Checked_Params Parms{};

	Parms.Index = Index;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutCharacter != nullptr)
		*OutCharacter = Parms.OutCharacter;

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

void UVALUI_PremiumCurrencyPurchaseWidgetBase::PurchasePremiumCurrency(struct FGuid& BundleID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_PremiumCurrencyPurchaseWidgetBase", "PurchasePremiumCurrency");

	Params::UVALUI_PremiumCurrencyPurchaseWidgetBase_PurchasePremiumCurrency_Params Parms{};

	Parms.BundleID = BundleID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.VALUI_PremiumCurrencyPurchaseWidgetBase.HandleValidatePaymentFulfillmentTick
// (Final, Native, Protected, HasOutParams, HasDefaults)
// Parameters:
// struct FGuid                       PaymentID                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_PremiumCurrencyPurchaseWidgetBase::HandleValidatePaymentFulfillmentTick(struct FGuid& PaymentID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_PremiumCurrencyPurchaseWidgetBase", "HandleValidatePaymentFulfillmentTick");

	Params::UVALUI_PremiumCurrencyPurchaseWidgetBase_HandleValidatePaymentFulfillmentTick_Params Parms{};

	Parms.PaymentID = PaymentID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.VALUI_PremiumCurrencyPurchaseWidgetBase.HandleUrlChanged
// (Final, Native, Protected, HasOutParams, BlueprintCallable)
// Parameters:
// class FText                        Text                                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UVALUI_PremiumCurrencyPurchaseWidgetBase::HandleUrlChanged(class FText& Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_PremiumCurrencyPurchaseWidgetBase", "HandleUrlChanged");

	Params::UVALUI_PremiumCurrencyPurchaseWidgetBase_HandleUrlChanged_Params Parms{};

	Parms.Text = Text;

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

void UVALUI_PremiumCurrencyPurchaseWidgetBase::HandleCheckoutSessionCreated(const class FString& URL)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_PremiumCurrencyPurchaseWidgetBase", "HandleCheckoutSessionCreated");

	Params::UVALUI_PremiumCurrencyPurchaseWidgetBase_HandleCheckoutSessionCreated_Params Parms{};

	Parms.URL = URL;

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

void UVALUI_PremiumCurrencyPurchaseWidgetBase::HandleBundleOffersAvailable(TArray<struct FVALUI_PremiumCurrencyBundle>& Bundles)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_PremiumCurrencyPurchaseWidgetBase", "HandleBundleOffersAvailable");

	Params::UVALUI_PremiumCurrencyPurchaseWidgetBase_HandleBundleOffersAvailable_Params Parms{};

	Parms.Bundles = Bundles;

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

TMap<class FName, class UVAL_CharacterCustomizationItemBase*> UVALUI_PremiumItemPurchaseWidgetBase::GetLoadoutOverridesForCatalogItems(TArray<class UVAL_CharacterCustomizationItemBase*>& Items)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_PremiumItemPurchaseWidgetBase", "GetLoadoutOverridesForCatalogItems");

	Params::UVALUI_PremiumItemPurchaseWidgetBase_GetLoadoutOverridesForCatalogItems_Params Parms{};

	Parms.Items = Items;

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

TArray<class UVAL_CharacterCustomizationItemBase*> UVALUI_PremiumItemPurchaseWidgetBase::GetCustomizationItemsForGuids(TArray<struct FGuid>& ItemIds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_PremiumItemPurchaseWidgetBase", "GetCustomizationItemsForGuids");

	Params::UVALUI_PremiumItemPurchaseWidgetBase_GetCustomizationItemsForGuids_Params Parms{};

	Parms.ItemIds = ItemIds;

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

void UVALUI_PremiumStorefrontTileWidgetBase::SetModel(struct FVALUI_PremiumStorefrontWidgetModel& NewModel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_PremiumStorefrontTileWidgetBase", "SetModel");

	Params::UVALUI_PremiumStorefrontTileWidgetBase_SetModel_Params Parms{};

	Parms.NewModel = NewModel;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// DelegateFunction ValeriaUI.VALUI_PremiumStorefrontTileWidgetBase.OnSelected__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UVALUI_PremiumStorefrontTileWidgetBase*Widget                                                           (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_PremiumStorefrontTileWidgetBase::OnSelected__DelegateSignature(class UVALUI_PremiumStorefrontTileWidgetBase* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_PremiumStorefrontTileWidgetBase", "OnSelected__DelegateSignature");

	Params::UVALUI_PremiumStorefrontTileWidgetBase_OnSelected__DelegateSignature_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_PremiumStorefrontTileWidgetBase.HandleModelUpdate
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FVALUI_PremiumStorefrontWidgetModelNewModel                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UVALUI_PremiumStorefrontTileWidgetBase::HandleModelUpdate(struct FVALUI_PremiumStorefrontWidgetModel& NewModel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_PremiumStorefrontTileWidgetBase", "HandleModelUpdate");

	Params::UVALUI_PremiumStorefrontTileWidgetBase_HandleModelUpdate_Params Parms{};

	Parms.NewModel = NewModel;

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

void UVALUI_PremiumStorefrontWidgetBase::HandleTileWidgetSelected(class UVALUI_PremiumStorefrontTileWidgetBase* Tile)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_PremiumStorefrontWidgetBase", "HandleTileWidgetSelected");

	Params::UVALUI_PremiumStorefrontWidgetBase_HandleTileWidgetSelected_Params Parms{};

	Parms.Tile = Tile;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.VALUI_PremiumStorefrontWidgetBase.HandleTileSelected
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FVALUI_PremiumStorefrontWidgetModelModel                                                            (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UVALUI_PremiumStorefrontWidgetBase::HandleTileSelected(struct FVALUI_PremiumStorefrontWidgetModel& Model)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_PremiumStorefrontWidgetBase", "HandleTileSelected");

	Params::UVALUI_PremiumStorefrontWidgetBase_HandleTileSelected_Params Parms{};

	Parms.Model = Model;

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
// TArray<struct FVALUI_PremiumStorefrontWidgetModel>Models                                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UVALUI_PremiumStorefrontWidgetBase::HandleStorefrontAvailable(TArray<struct FVALUI_PremiumStorefrontWidgetModel>& Models)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_PremiumStorefrontWidgetBase", "HandleStorefrontAvailable");

	Params::UVALUI_PremiumStorefrontWidgetBase_HandleStorefrontAvailable_Params Parms{};

	Parms.Models = Models;

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

void UVALUI_PremiumStorefrontWidgetBase::CreateStorefrontGrid(int32 WidgetsPerRow, TArray<struct FVALUI_PremiumStorefrontWidgetModel>& Models)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_PremiumStorefrontWidgetBase", "CreateStorefrontGrid");

	Params::UVALUI_PremiumStorefrontWidgetBase_CreateStorefrontGrid_Params Parms{};

	Parms.WidgetsPerRow = WidgetsPerRow;
	Parms.Models = Models;

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

void UVALUI_PremiumStoreScreenWidgetBase::OnStateChanged__DelegateSignature(class UVALUI_PremiumStoreScreenWidgetBase* StoreWidget, enum class EVALUI_PremiumStoreState State)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_PremiumStoreScreenWidgetBase", "OnStateChanged__DelegateSignature");

	Params::UVALUI_PremiumStoreScreenWidgetBase_OnStateChanged__DelegateSignature_Params Parms{};

	Parms.StoreWidget = StoreWidget;
	Parms.State = State;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_PremiumStoreScreenWidgetBase.HandleOnStateChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EVALUI_PremiumStoreStateState                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_PremiumStoreScreenWidgetBase::HandleOnStateChanged(enum class EVALUI_PremiumStoreState State)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_PremiumStoreScreenWidgetBase", "HandleOnStateChanged");

	Params::UVALUI_PremiumStoreScreenWidgetBase_HandleOnStateChanged_Params Parms{};

	Parms.State = State;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_PremiumStoreScreenWidgetBase.HandleBackAction
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FInputActionValue           ActionValue                                                      (Parm, NoDestructor, NativeAccessSpecifierPublic)
// float                              ElapsedTime                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              TriggeredTime                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_PremiumStoreScreenWidgetBase::HandleBackAction(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_PremiumStoreScreenWidgetBase", "HandleBackAction");

	Params::UVALUI_PremiumStoreScreenWidgetBase_HandleBackAction_Params Parms{};

	Parms.ActionValue = ActionValue;
	Parms.ElapsedTime = ElapsedTime;
	Parms.TriggeredTime = TriggeredTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_PremiumStoreScreenWidgetBase.GoToPremiumStoreState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EVALUI_PremiumStoreStateNewState                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_PremiumStoreScreenWidgetBase::GoToPremiumStoreState(enum class EVALUI_PremiumStoreState NewState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_PremiumStoreScreenWidgetBase", "GoToPremiumStoreState");

	Params::UVALUI_PremiumStoreScreenWidgetBase_GoToPremiumStoreState_Params Parms{};

	Parms.NewState = NewState;

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


// Function ValeriaUI.VALUI_ProgressBarStyle.Apply
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// class UProgressBar*                ProgressBar                                                      (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_ProgressBarStyle::Apply(class UProgressBar* ProgressBar)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_ProgressBarStyle", "Apply");

	Params::UVALUI_ProgressBarStyle_Apply_Params Parms{};

	Parms.ProgressBar = ProgressBar;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.VALUI_ProgressBar_Styled.SetProgressBarStyle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UVALUI_ProgressBarStyle*     NewStyle                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_ProgressBar_Styled::SetProgressBarStyle(class UVALUI_ProgressBarStyle* NewStyle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_ProgressBar_Styled", "SetProgressBarStyle");

	Params::UVALUI_ProgressBar_Styled_SetProgressBarStyle_Params Parms{};

	Parms.NewStyle = NewStyle;

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

void UVALUI_RadioSlider::SetIndex(int32 Index, bool bSkipSliderAnimation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_RadioSlider", "SetIndex");

	Params::UVALUI_RadioSlider_SetIndex_Params Parms{};

	Parms.Index = Index;
	Parms.bSkipSliderAnimation = bSkipSliderAnimation;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// DelegateFunction ValeriaUI.VALUI_RadioSlider.OnSliderWidgetCreated__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UUserWidget*                 SliderWidget                                                     (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_RadioSlider::OnSliderWidgetCreated__DelegateSignature(class UUserWidget* SliderWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_RadioSlider", "OnSliderWidgetCreated__DelegateSignature");

	Params::UVALUI_RadioSlider_OnSliderWidgetCreated__DelegateSignature_Params Parms{};

	Parms.SliderWidget = SliderWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction ValeriaUI.VALUI_RadioSlider.OnSliderChanged__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UUserWidget*                 PreviousElementWidget                                            (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              PreviousElementIndex                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UUserWidget*                 NewElementWidget                                                 (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              NewElementIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_RadioSlider::OnSliderChanged__DelegateSignature(class UUserWidget* PreviousElementWidget, int32 PreviousElementIndex, class UUserWidget* NewElementWidget, int32 NewElementIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_RadioSlider", "OnSliderChanged__DelegateSignature");

	Params::UVALUI_RadioSlider_OnSliderChanged__DelegateSignature_Params Parms{};

	Parms.PreviousElementWidget = PreviousElementWidget;
	Parms.PreviousElementIndex = PreviousElementIndex;
	Parms.NewElementWidget = NewElementWidget;
	Parms.NewElementIndex = NewElementIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction ValeriaUI.VALUI_RadioSlider.OnPageChanged__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// int32                              PageIndex                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              TotalNumPages                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_RadioSlider::OnPageChanged__DelegateSignature(int32 PageIndex, int32 TotalNumPages)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_RadioSlider", "OnPageChanged__DelegateSignature");

	Params::UVALUI_RadioSlider_OnPageChanged__DelegateSignature_Params Parms{};

	Parms.PageIndex = PageIndex;
	Parms.TotalNumPages = TotalNumPages;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction ValeriaUI.VALUI_RadioSlider.OnElementWidgetCreated__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UUserWidget*                 ElementWidget                                                    (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ElementIndex                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_RadioSlider::OnElementWidgetCreated__DelegateSignature(class UUserWidget* ElementWidget, int32 ElementIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_RadioSlider", "OnElementWidgetCreated__DelegateSignature");

	Params::UVALUI_RadioSlider_OnElementWidgetCreated__DelegateSignature_Params Parms{};

	Parms.ElementWidget = ElementWidget;
	Parms.ElementIndex = ElementIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_RadioSlider.GetWidgetAtIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              Index                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UUserWidget*                 ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UUserWidget* UVALUI_RadioSlider::GetWidgetAtIndex(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_RadioSlider", "GetWidgetAtIndex");

	Params::UVALUI_RadioSlider_GetWidgetAtIndex_Params Parms{};

	Parms.Index = Index;

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

bool UVALUI_RadioSlider::GetIndexFromWidget(class UUserWidget* Widget, int32* Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_RadioSlider", "GetIndexFromWidget");

	Params::UVALUI_RadioSlider_GetIndexFromWidget_Params Parms{};

	Parms.Widget = Widget;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (Index != nullptr)
		*Index = Parms.Index;

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

void UVALUI_RichTextBlockStyle::ApplyToTextBlock(class URichTextBlock* TextWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_RichTextBlockStyle", "ApplyToTextBlock");

	Params::UVALUI_RichTextBlockStyle_ApplyToTextBlock_Params Parms{};

	Parms.TextWidget = TextWidget;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.VALUI_RichTextBlock_Styled.SetTextBlockStyle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UVALUI_RichTextBlockStyle*   NewStyle                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_RichTextBlock_Styled::SetTextBlockStyle(class UVALUI_RichTextBlockStyle* NewStyle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_RichTextBlock_Styled", "SetTextBlockStyle");

	Params::UVALUI_RichTextBlock_Styled_SetTextBlockStyle_Params Parms{};

	Parms.NewStyle = NewStyle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.VALUI_ScrollBoxStyle.ApplyToScrollBox
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// class UScrollBox*                  ScrollBox                                                        (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_ScrollBoxStyle::ApplyToScrollBox(class UScrollBox* ScrollBox)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_ScrollBoxStyle", "ApplyToScrollBox");

	Params::UVALUI_ScrollBoxStyle_ApplyToScrollBox_Params Parms{};

	Parms.ScrollBox = ScrollBox;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.VALUI_ScrollBox_Styled.SetScrollBoxStyle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UVALUI_ScrollBoxStyle*       NewStyle                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_ScrollBox_Styled::SetScrollBoxStyle(class UVALUI_ScrollBoxStyle* NewStyle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_ScrollBox_Styled", "SetScrollBoxStyle");

	Params::UVALUI_ScrollBox_Styled_SetScrollBoxStyle_Params Parms{};

	Parms.NewStyle = NewStyle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.VALUI_SliderStyle.Apply
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// class USlider*                     Slider                                                           (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_SliderStyle::Apply(class USlider* Slider)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_SliderStyle", "Apply");

	Params::UVALUI_SliderStyle_Apply_Params Parms{};

	Parms.Slider = Slider;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.VALUI_Slider_Styled.SetSliderStyle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UVALUI_SliderStyle*          NewStyle                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_Slider_Styled::SetSliderStyle(class UVALUI_SliderStyle* NewStyle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_Slider_Styled", "SetSliderStyle");

	Params::UVALUI_Slider_Styled_SetSliderStyle_Params Parms{};

	Parms.NewStyle = NewStyle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// DelegateFunction ValeriaUI.VALUI_SocialPanelBase.ToggleDebugSimulation__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// bool                               bDisplay                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_SocialPanelBase::ToggleDebugSimulation__DelegateSignature(bool bDisplay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_SocialPanelBase", "ToggleDebugSimulation__DelegateSignature");

	Params::UVALUI_SocialPanelBase_ToggleDebugSimulation__DelegateSignature_Params Parms{};

	Parms.bDisplay = bDisplay;

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


// Function ValeriaUI.VALUI_TabButtonHostBase.UnregisterTab
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        TabName                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_TabButtonHostBase::UnregisterTab(class FName& TabName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_TabButtonHostBase", "UnregisterTab");

	Params::UVALUI_TabButtonHostBase_UnregisterTab_Params Parms{};

	Parms.TabName = TabName;

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

bool UVALUI_TabButtonHostBase::TrySetActiveTabName(class FName TabName, bool bForceSet)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_TabButtonHostBase", "TrySetActiveTabName");

	Params::UVALUI_TabButtonHostBase_TrySetActiveTabName_Params Parms{};

	Parms.TabName = TabName;
	Parms.bForceSet = bForceSet;

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

bool UVALUI_TabButtonHostBase::TryGetTabInfo(class FName& TabName, struct FVALUI_InstantiatedTabButtonInfo* OutInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_TabButtonHostBase", "TryGetTabInfo");

	Params::UVALUI_TabButtonHostBase_TryGetTabInfo_Params Parms{};

	Parms.TabName = TabName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutInfo != nullptr)
		*OutInfo = Parms.OutInfo;

	return Parms.ReturnValue;

}


// Function ValeriaUI.VALUI_TabButtonHostBase.SetTabButtonVisibility
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        TabName                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ESlateVisibility        NewVisibility                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_TabButtonHostBase::SetTabButtonVisibility(class FName& TabName, enum class ESlateVisibility NewVisibility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_TabButtonHostBase", "SetTabButtonVisibility");

	Params::UVALUI_TabButtonHostBase_SetTabButtonVisibility_Params Parms{};

	Parms.TabName = TabName;
	Parms.NewVisibility = NewVisibility;

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

void UVALUI_TabButtonHostBase::RemoveTabButton(class FName& TabName, struct FVALUI_InstantiatedTabButtonInfo& Info)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_TabButtonHostBase", "RemoveTabButton");

	Params::UVALUI_TabButtonHostBase_RemoveTabButton_Params Parms{};

	Parms.TabName = TabName;
	Parms.Info = Info;

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

void UVALUI_TabButtonHostBase::RegisterNewTab(class FName& TabName, class FText& TabDisplayName, class UButton* Button, class UWidget* AssociatedContent, TSoftObjectPtr<class UTexture2D> IconTexture, struct FVector2D& IconSize)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_TabButtonHostBase", "RegisterNewTab");

	Params::UVALUI_TabButtonHostBase_RegisterNewTab_Params Parms{};

	Parms.TabName = TabName;
	Parms.TabDisplayName = TabDisplayName;
	Parms.Button = Button;
	Parms.AssociatedContent = AssociatedContent;
	Parms.IconTexture = IconTexture;
	Parms.IconSize = IconSize;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// DelegateFunction ValeriaUI.VALUI_TabButtonHostBase.OnDifferentActiveTabSet__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UVALUI_TabButtonHostBase*    TabButtonHost                                                    (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_TabButtonHostBase::OnDifferentActiveTabSet__DelegateSignature(class UVALUI_TabButtonHostBase* TabButtonHost)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_TabButtonHostBase", "OnDifferentActiveTabSet__DelegateSignature");

	Params::UVALUI_TabButtonHostBase_OnDifferentActiveTabSet__DelegateSignature_Params Parms{};

	Parms.TabButtonHost = TabButtonHost;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_TabButtonHostBase.HandleDifferentActiveTabSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// class FName                        TabName                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_TabButtonHostBase::HandleDifferentActiveTabSet(class FName TabName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_TabButtonHostBase", "HandleDifferentActiveTabSet");

	Params::UVALUI_TabButtonHostBase_HandleDifferentActiveTabSet_Params Parms{};

	Parms.TabName = TabName;

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

void UVALUI_TabButtonHostBase::AddTabButton(class FName& TabName, struct FVALUI_InstantiatedTabButtonInfo& Info)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_TabButtonHostBase", "AddTabButton");

	Params::UVALUI_TabButtonHostBase_AddTabButton_Params Parms{};

	Parms.TabName = TabName;
	Parms.Info = Info;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ValeriaUI.VALUI_TabButtonInterface.SetIsActiveTabButton
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// bool                               bIsActive                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void IVALUI_TabButtonInterface::SetIsActiveTabButton(bool bIsActive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_TabButtonInterface", "SetIsActiveTabButton");

	Params::IVALUI_TabButtonInterface_SetIsActiveTabButton_Params Parms{};

	Parms.bIsActive = bIsActive;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.VALUI_TextBlockStyle.ApplyToTextBlock
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// class UTextBlock*                  TextWidget                                                       (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_TextBlockStyle::ApplyToTextBlock(class UTextBlock* TextWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_TextBlockStyle", "ApplyToTextBlock");

	Params::UVALUI_TextBlockStyle_ApplyToTextBlock_Params Parms{};

	Parms.TextWidget = TextWidget;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.VALUI_TextBlock_Styled.SetTextBlockStyle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UVALUI_TextBlockStyle*       NewStyle                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_TextBlock_Styled::SetTextBlockStyle(class UVALUI_TextBlockStyle* NewStyle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_TextBlock_Styled", "SetTextBlockStyle");

	Params::UVALUI_TextBlock_Styled_SetTextBlockStyle_Params Parms{};

	Parms.NewStyle = NewStyle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.VALUI_TileView_Styled.SetEntryWidth
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              NewWidth                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_TileView_Styled::SetEntryWidth(float NewWidth)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_TileView_Styled", "SetEntryWidth");

	Params::UVALUI_TileView_Styled_SetEntryWidth_Params Parms{};

	Parms.NewWidth = NewWidth;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.VALUI_TileView_Styled.SetEntryHeight
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              NewHeight                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_TileView_Styled::SetEntryHeight(float NewHeight)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_TileView_Styled", "SetEntryHeight");

	Params::UVALUI_TileView_Styled_SetEntryHeight_Params Parms{};

	Parms.NewHeight = NewHeight;

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

void UVALUI_UButtonSlot::SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_UButtonSlot", "SetVerticalAlignment");

	Params::UVALUI_UButtonSlot_SetVerticalAlignment_Params Parms{};

	Parms.InVerticalAlignment = InVerticalAlignment;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.VALUI_UButtonSlot.SetPadding
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMargin                     InPadding                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void UVALUI_UButtonSlot::SetPadding(const struct FMargin& InPadding)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_UButtonSlot", "SetPadding");

	Params::UVALUI_UButtonSlot_SetPadding_Params Parms{};

	Parms.InPadding = InPadding;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.VALUI_UButtonSlot.SetHorizontalAlignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EHorizontalAlignment    InHorizontalAlignment                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_UButtonSlot::SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_UButtonSlot", "SetHorizontalAlignment");

	Params::UVALUI_UButtonSlot_SetHorizontalAlignment_Params Parms{};

	Parms.InHorizontalAlignment = InHorizontalAlignment;

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

void UVALUI_UButton_Styled::SetTouchMethod(enum class EButtonTouchMethod InTouchMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_UButton_Styled", "SetTouchMethod");

	Params::UVALUI_UButton_Styled_SetTouchMethod_Params Parms{};

	Parms.InTouchMethod = InTouchMethod;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.VALUI_UButton_Styled.SetPressMethod
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EButtonPressMethod      InPressMethod                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_UButton_Styled::SetPressMethod(enum class EButtonPressMethod InPressMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_UButton_Styled", "SetPressMethod");

	Params::UVALUI_UButton_Styled_SetPressMethod_Params Parms{};

	Parms.InPressMethod = InPressMethod;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.VALUI_UButton_Styled.SetClickMethod
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EButtonClickMethod      InClickMethod                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_UButton_Styled::SetClickMethod(enum class EButtonClickMethod InClickMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_UButton_Styled", "SetClickMethod");

	Params::UVALUI_UButton_Styled_SetClickMethod_Params Parms{};

	Parms.InClickMethod = InClickMethod;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.VALUI_UButton_Styled.SetButtonStyle
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FButtonStyle                WidgetStyle                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UVALUI_UButton_Styled::SetButtonStyle(struct FButtonStyle& WidgetStyle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_UButton_Styled", "SetButtonStyle");

	Params::UVALUI_UButton_Styled_SetButtonStyle_Params Parms{};

	Parms.WidgetStyle = WidgetStyle;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ValeriaUI.VALUI_UButton_Styled.SetButtonConfig
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UVALUI_ButtonStyle*          NewButtonStyle                                                   (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_UButton_Styled::SetButtonConfig(class UVALUI_ButtonStyle* NewButtonStyle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_UButton_Styled", "SetButtonConfig");

	Params::UVALUI_UButton_Styled_SetButtonConfig_Params Parms{};

	Parms.NewButtonStyle = NewButtonStyle;

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

struct FEventReply UVALUI_UButton_Styled::OnMouseButtonClicked(const struct FGeometry& MyGeometry, struct FPointerEvent& InMouseEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_UButton_Styled", "OnMouseButtonClicked");

	Params::UVALUI_UButton_Styled_OnMouseButtonClicked_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InMouseEvent = InMouseEvent;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ValeriaUI.VALUI_WidgetBlueprintLibrary.UpdateEntryWidgetTypeOnListView
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UListViewBase*               ListView                                                         (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class UUserWidget>     EntryWidgetType                                                  (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVALUI_WidgetBlueprintLibrary::UpdateEntryWidgetTypeOnListView(class UListViewBase* ListView, TSubclassOf<class UUserWidget> EntryWidgetType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_WidgetBlueprintLibrary", "UpdateEntryWidgetTypeOnListView");

	Params::UVALUI_WidgetBlueprintLibrary_UpdateEntryWidgetTypeOnListView_Params Parms{};

	Parms.ListView = ListView;
	Parms.EntryWidgetType = EntryWidgetType;

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

class UObject* UVALUI_WidgetBlueprintLibrary::GetOuterForConstructingNativeWidget(class UUserWidget* HostUserWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_WidgetBlueprintLibrary", "GetOuterForConstructingNativeWidget");

	Params::UVALUI_WidgetBlueprintLibrary_GetOuterForConstructingNativeWidget_Params Parms{};

	Parms.HostUserWidget = HostUserWidget;

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

class UWidget* UVALUI_WidgetBlueprintLibrary::FindOuterMostWidget(class UWidget* BaseWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_WidgetBlueprintLibrary", "FindOuterMostWidget");

	Params::UVALUI_WidgetBlueprintLibrary_FindOuterMostWidget_Params Parms{};

	Parms.BaseWidget = BaseWidget;

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

struct FEventReply UVALUI_WidgetBlueprintLibrary::CaptureMouseWithHighPrecision(struct FEventReply& Reply, class UWidget* CapturingWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALUI_WidgetBlueprintLibrary", "CaptureMouseWithHighPrecision");

	Params::UVALUI_WidgetBlueprintLibrary_CaptureMouseWithHighPrecision_Params Parms{};

	Parms.Reply = Reply;
	Parms.CapturingWidget = CapturingWidget;

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
