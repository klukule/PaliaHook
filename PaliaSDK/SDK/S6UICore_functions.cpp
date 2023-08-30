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


// Function S6UICore.S6UI_AsyncAction_OpenModal.OpenModal
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class APlayerController*           PC                                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSoftClassPtr<class US6UI_ModalWidgetBase>WidgetClass                                                      (Parm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class US6UI_AsyncAction_OpenModal* ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class US6UI_AsyncAction_OpenModal* US6UI_AsyncAction_OpenModal::OpenModal(class APlayerController* InPC, TSoftClassPtr<class US6UI_ModalWidgetBase> InWidgetClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6UI_AsyncAction_OpenModal", "OpenModal");

	Params::US6UI_AsyncAction_OpenModal_OpenModal_Params Parms{};

	Parms.PC = InPC;
	Parms.WidgetClass = InWidgetClass;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// DelegateFunction S6UICore.S6UI_AsyncAction_OpenModal.OnOpened__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class US6UI_ModalWidgetBase*       ModalWidget                                                      (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void US6UI_AsyncAction_OpenModal::OnOpened__DelegateSignature(class US6UI_ModalWidgetBase* InModalWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6UI_AsyncAction_OpenModal", "OnOpened__DelegateSignature");

	Params::US6UI_AsyncAction_OpenModal_OnOpened__DelegateSignature_Params Parms{};

	Parms.ModalWidget = InModalWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction S6UICore.S6UI_AsyncAction_OpenModal.OnFailed__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:

void US6UI_AsyncAction_OpenModal::OnFailed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6UI_AsyncAction_OpenModal", "OnFailed__DelegateSignature");

	Params::US6UI_AsyncAction_OpenModal_OnFailed__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function S6UICore.S6UI_ModalWidgetBase.SetWantsCursor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bValue                                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void US6UI_ModalWidgetBase::SetWantsCursor(bool InbValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6UI_ModalWidgetBase", "SetWantsCursor");

	Params::US6UI_ModalWidgetBase_SetWantsCursor_Params Parms{};

	Parms.bValue = InbValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// DelegateFunction S6UICore.S6UI_ModalWidgetBase.OnStartedClosing__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UWidget*                     Widget                                                           (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void US6UI_ModalWidgetBase::OnStartedClosing__DelegateSignature(class UWidget* InWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6UI_ModalWidgetBase", "OnStartedClosing__DelegateSignature");

	Params::US6UI_ModalWidgetBase_OnStartedClosing__DelegateSignature_Params Parms{};

	Parms.Widget = InWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction S6UICore.S6UI_ModalWidgetBase.OnFinishedOpening__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UWidget*                     Widget                                                           (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void US6UI_ModalWidgetBase::OnFinishedOpening__DelegateSignature(class UWidget* InWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6UI_ModalWidgetBase", "OnFinishedOpening__DelegateSignature");

	Params::US6UI_ModalWidgetBase_OnFinishedOpening__DelegateSignature_Params Parms{};

	Parms.Widget = InWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction S6UICore.S6UI_ModalWidgetBase.OnFinishedClosing__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UWidget*                     Widget                                                           (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void US6UI_ModalWidgetBase::OnFinishedClosing__DelegateSignature(class UWidget* InWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6UI_ModalWidgetBase", "OnFinishedClosing__DelegateSignature");

	Params::US6UI_ModalWidgetBase_OnFinishedClosing__DelegateSignature_Params Parms{};

	Parms.Widget = InWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function S6UICore.S6UI_ModalWidgetBase.HandleStartOpening_BP
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// bool                               bOutHasLatentOpeningLogic                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void US6UI_ModalWidgetBase::HandleStartOpening_BP(bool* InbOutHasLatentOpeningLogic)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6UI_ModalWidgetBase", "HandleStartOpening_BP");

	Params::US6UI_ModalWidgetBase_HandleStartOpening_BP_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (InbOutHasLatentOpeningLogic != nullptr)
		*InbOutHasLatentOpeningLogic = Parms.bOutHasLatentOpeningLogic;

}


// Function S6UICore.S6UI_ModalWidgetBase.HandleStartClosing_BP
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// bool                               bPermitLatentClosing                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bOutHasLatentClosingLogic                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void US6UI_ModalWidgetBase::HandleStartClosing_BP(bool InbPermitLatentClosing, bool* InbOutHasLatentClosingLogic)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6UI_ModalWidgetBase", "HandleStartClosing_BP");

	Params::US6UI_ModalWidgetBase_HandleStartClosing_BP_Params Parms{};

	Parms.bPermitLatentClosing = InbPermitLatentClosing;

	UObject::ProcessEvent(Func, &Parms);

	if (InbOutHasLatentClosingLogic != nullptr)
		*InbOutHasLatentClosingLogic = Parms.bOutHasLatentClosingLogic;

}


// Function S6UICore.S6UI_ModalWidgetBase.HandleOpened_BP
// (Event, Protected, BlueprintEvent)
// Parameters:

void US6UI_ModalWidgetBase::HandleOpened_BP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6UI_ModalWidgetBase", "HandleOpened_BP");

	Params::US6UI_ModalWidgetBase_HandleOpened_BP_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function S6UICore.S6UI_ModalWidgetBase.HandleInputAction_UIBack_Triggered
// (Final, Native, Private)
// Parameters:
// struct FInputActionValue           ActionValue                                                      (Parm, NoDestructor, NativeAccessSpecifierPublic)
// float                              ElapsedTime                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              TriggeredTime                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UInputAction*                SourceAction                                                     (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void US6UI_ModalWidgetBase::HandleInputAction_UIBack_Triggered(const struct FInputActionValue& InActionValue, float InElapsedTime, float InTriggeredTime, class UInputAction* InSourceAction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6UI_ModalWidgetBase", "HandleInputAction_UIBack_Triggered");

	Params::US6UI_ModalWidgetBase_HandleInputAction_UIBack_Triggered_Params Parms{};

	Parms.ActionValue = InActionValue;
	Parms.ElapsedTime = InElapsedTime;
	Parms.TriggeredTime = InTriggeredTime;
	Parms.SourceAction = InSourceAction;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function S6UICore.S6UI_ModalWidgetBase.HandleClosed_BP
// (Event, Protected, BlueprintEvent)
// Parameters:

void US6UI_ModalWidgetBase::HandleClosed_BP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6UI_ModalWidgetBase", "HandleClosed_BP");

	Params::US6UI_ModalWidgetBase_HandleClosed_BP_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function S6UICore.S6UI_ModalWidgetBase.GetModalWidgetState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ES6UI_ModalWidgetState  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ES6UI_ModalWidgetState US6UI_ModalWidgetBase::GetModalWidgetState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6UI_ModalWidgetBase", "GetModalWidgetState");

	Params::US6UI_ModalWidgetBase_GetModalWidgetState_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function S6UICore.S6UI_ModalWidgetBase.FinishOpening
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void US6UI_ModalWidgetBase::FinishOpening()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6UI_ModalWidgetBase", "FinishOpening");

	Params::US6UI_ModalWidgetBase_FinishOpening_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function S6UICore.S6UI_ModalWidgetBase.FinishClosing
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void US6UI_ModalWidgetBase::FinishClosing()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6UI_ModalWidgetBase", "FinishClosing");

	Params::US6UI_ModalWidgetBase_FinishClosing_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function S6UICore.S6UI_ModalWidgetBase.CanClose
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool US6UI_ModalWidgetBase::CanClose()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6UI_ModalWidgetBase", "CanClose");

	Params::US6UI_ModalWidgetBase_CanClose_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function S6UICore.S6UI_CustomNavigationGroup.SetAutoEdgeEscapeDirections
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<enum class EUINavigation>   InEdgeEscapeDirections                                           (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)

void US6UI_CustomNavigationGroup::SetAutoEdgeEscapeDirections(const TArray<enum class EUINavigation>& InInEdgeEscapeDirections)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6UI_CustomNavigationGroup", "SetAutoEdgeEscapeDirections");

	Params::US6UI_CustomNavigationGroup_SetAutoEdgeEscapeDirections_Params Parms{};

	Parms.InEdgeEscapeDirections = InInEdgeEscapeDirections;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// DelegateFunction S6UICore.S6UI_CustomNavigationGroup.OnIsWidgetValiedToNavigate__DelegateSignature
// (Public, Delegate)
// Parameters:
// class UObject*                     NavObject                                                        (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool US6UI_CustomNavigationGroup::OnIsWidgetValiedToNavigate__DelegateSignature(class UObject* InNavObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6UI_CustomNavigationGroup", "OnIsWidgetValiedToNavigate__DelegateSignature");

	Params::US6UI_CustomNavigationGroup_OnIsWidgetValiedToNavigate__DelegateSignature_Params Parms{};

	Parms.NavObject = InNavObject;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// DelegateFunction S6UICore.S6UI_CustomNavigationGroup.OnCustomNavigationGroupTransitionEvent__DelegateSignature
// (Public, Delegate)
// Parameters:
// enum class EUINavigation           InNavigationType                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class US6UI_CustomNavigationGroup* InOriginNavigationGroup                                          (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              InOriginWidgetIndex                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              InTargetWidgetIndex                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool US6UI_CustomNavigationGroup::OnCustomNavigationGroupTransitionEvent__DelegateSignature(enum class EUINavigation InInNavigationType, class US6UI_CustomNavigationGroup* InInOriginNavigationGroup, int32 InInOriginWidgetIndex, int32 InInTargetWidgetIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6UI_CustomNavigationGroup", "OnCustomNavigationGroupTransitionEvent__DelegateSignature");

	Params::US6UI_CustomNavigationGroup_OnCustomNavigationGroupTransitionEvent__DelegateSignature_Params Parms{};

	Parms.InNavigationType = InInNavigationType;
	Parms.InOriginNavigationGroup = InInOriginNavigationGroup;
	Parms.InOriginWidgetIndex = InInOriginWidgetIndex;
	Parms.InTargetWidgetIndex = InInTargetWidgetIndex;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// DelegateFunction S6UICore.S6UI_CustomNavigationGroup.OnCustomNavigationGroupInitialized__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:

void US6UI_CustomNavigationGroup::OnCustomNavigationGroupInitialized__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6UI_CustomNavigationGroup", "OnCustomNavigationGroupInitialized__DelegateSignature");

	Params::US6UI_CustomNavigationGroup_OnCustomNavigationGroupInitialized__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function S6UICore.S6UI_CustomNavigationGroup.NavigateToTargetWidget
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              InTargetWidgetIndex                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bDelayActive                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void US6UI_CustomNavigationGroup::NavigateToTargetWidget(int32 InInTargetWidgetIndex, bool InbDelayActive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6UI_CustomNavigationGroup", "NavigateToTargetWidget");

	Params::US6UI_CustomNavigationGroup_NavigateToTargetWidget_Params Parms{};

	Parms.InTargetWidgetIndex = InInTargetWidgetIndex;
	Parms.bDelayActive = InbDelayActive;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function S6UICore.S6UI_CustomNavigationGroup.EnableAutoEdgeEscape
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInAutoEdgeEscape                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void US6UI_CustomNavigationGroup::EnableAutoEdgeEscape(bool InbInAutoEdgeEscape)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6UI_CustomNavigationGroup", "EnableAutoEdgeEscape");

	Params::US6UI_CustomNavigationGroup_EnableAutoEdgeEscape_Params Parms{};

	Parms.bInAutoEdgeEscape = InbInAutoEdgeEscape;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function S6UICore.S6UI_CustomNavigationGroup.DelayExcuteNavigationFromParentGroup
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FFocusEvent                 InFocusEvent                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void US6UI_CustomNavigationGroup::DelayExcuteNavigationFromParentGroup(struct FFocusEvent& InInFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6UI_CustomNavigationGroup", "DelayExcuteNavigationFromParentGroup");

	Params::US6UI_CustomNavigationGroup_DelayExcuteNavigationFromParentGroup_Params Parms{};

	Parms.InFocusEvent = InInFocusEvent;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function S6UICore.S6UI_CustomNavigationGroup.ClearNavigationGroupTransitionDatas
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void US6UI_CustomNavigationGroup::ClearNavigationGroupTransitionDatas()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6UI_CustomNavigationGroup", "ClearNavigationGroupTransitionDatas");

	Params::US6UI_CustomNavigationGroup_ClearNavigationGroupTransitionDatas_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function S6UICore.S6UI_CustomNavigationGroup.ClearNavigationData
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInClearNavWidgets                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void US6UI_CustomNavigationGroup::ClearNavigationData(bool InbInClearNavWidgets)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6UI_CustomNavigationGroup", "ClearNavigationData");

	Params::US6UI_CustomNavigationGroup_ClearNavigationData_Params Parms{};

	Parms.bInClearNavWidgets = InbInClearNavWidgets;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function S6UICore.S6UI_CustomNavigationGroup.BuildNavigation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInImmediately                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void US6UI_CustomNavigationGroup::BuildNavigation(bool InbInImmediately)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6UI_CustomNavigationGroup", "BuildNavigation");

	Params::US6UI_CustomNavigationGroup_BuildNavigation_Params Parms{};

	Parms.bInImmediately = InbInImmediately;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function S6UICore.S6UI_CustomNavigationGroup.AddNavWidgets
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<class UWidget*>             InWidgetArray                                                    (ConstParm, Parm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// bool                               bInBuildNavigationImmediately                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void US6UI_CustomNavigationGroup::AddNavWidgets(const TArray<class UWidget*>& InInWidgetArray, bool InbInBuildNavigationImmediately)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6UI_CustomNavigationGroup", "AddNavWidgets");

	Params::US6UI_CustomNavigationGroup_AddNavWidgets_Params Parms{};

	Parms.InWidgetArray = InInWidgetArray;
	Parms.bInBuildNavigationImmediately = InbInBuildNavigationImmediately;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function S6UICore.S6UI_CustomNavigationGroup.AddNavigationGroupTransitionData
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FS6UI_NavigationGroupTranstionDataInTransitionData                                                 (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// bool                               bInBidirectional                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void US6UI_CustomNavigationGroup::AddNavigationGroupTransitionData(const struct FS6UI_NavigationGroupTranstionData& InInTransitionData, bool InbInBidirectional)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6UI_CustomNavigationGroup", "AddNavigationGroupTransitionData");

	Params::US6UI_CustomNavigationGroup_AddNavigationGroupTransitionData_Params Parms{};

	Parms.InTransitionData = InInTransitionData;
	Parms.bInBidirectional = InbInBidirectional;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function S6UICore.S6UI_CustomNavigationGroup.AddNavExplicitData
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FS6UI_NavExplicitData       InNavExplicitData                                                (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void US6UI_CustomNavigationGroup::AddNavExplicitData(struct FS6UI_NavExplicitData& InInNavExplicitData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6UI_CustomNavigationGroup", "AddNavExplicitData");

	Params::US6UI_CustomNavigationGroup_AddNavExplicitData_Params Parms{};

	Parms.InNavExplicitData = InInNavExplicitData;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function S6UICore.S6UI_CustomNavigationGroup.ActiveNavigationGroup
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bDelayActive                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              InAutoSelectNavWidgetID                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void US6UI_CustomNavigationGroup::ActiveNavigationGroup(bool InbDelayActive, int32 InInAutoSelectNavWidgetID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6UI_CustomNavigationGroup", "ActiveNavigationGroup");

	Params::US6UI_CustomNavigationGroup_ActiveNavigationGroup_Params Parms{};

	Parms.bDelayActive = InbDelayActive;
	Parms.InAutoSelectNavWidgetID = InInAutoSelectNavWidgetID;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function S6UICore.S6UI_InputActionHandlingWidgetComponent.UnregisterInputActionBinding
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FGuid                       BindingId                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void US6UI_InputActionHandlingWidgetComponent::UnregisterInputActionBinding(struct FGuid& InBindingId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6UI_InputActionHandlingWidgetComponent", "UnregisterInputActionBinding");

	Params::US6UI_InputActionHandlingWidgetComponent_UnregisterInputActionBinding_Params Parms{};

	Parms.BindingId = InBindingId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function S6UICore.S6UI_InputActionHandlingWidgetComponent.SetIsEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bValue                                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void US6UI_InputActionHandlingWidgetComponent::SetIsEnabled(bool InbValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6UI_InputActionHandlingWidgetComponent", "SetIsEnabled");

	Params::US6UI_InputActionHandlingWidgetComponent_SetIsEnabled_Params Parms{};

	Parms.bValue = InbValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function S6UICore.S6UI_InputActionHandlingWidgetComponent.RegisterInputActionBinding
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UInputAction*                InputAction                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ETriggerEvent           TriggerEventType                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Delegate                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGuid                       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FGuid US6UI_InputActionHandlingWidgetComponent::RegisterInputActionBinding(class UInputAction* InInputAction, enum class ETriggerEvent InTriggerEventType, FDelegateProperty_& InDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6UI_InputActionHandlingWidgetComponent", "RegisterInputActionBinding");

	Params::US6UI_InputActionHandlingWidgetComponent_RegisterInputActionBinding_Params Parms{};

	Parms.InputAction = InInputAction;
	Parms.TriggerEventType = InTriggerEventType;
	Parms.Delegate = InDelegate;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// DelegateFunction S6UICore.S6UI_InputActionHandlingWidgetComponent.OnInputActionBindingsChanged__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class US6UI_InputActionHandlingWidgetComponent*AffectedComponent                                                (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void US6UI_InputActionHandlingWidgetComponent::OnInputActionBindingsChanged__DelegateSignature(class US6UI_InputActionHandlingWidgetComponent* InAffectedComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6UI_InputActionHandlingWidgetComponent", "OnInputActionBindingsChanged__DelegateSignature");

	Params::US6UI_InputActionHandlingWidgetComponent_OnInputActionBindingsChanged__DelegateSignature_Params Parms{};

	Parms.AffectedComponent = InAffectedComponent;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction S6UICore.S6UI_InputActionHandlingWidgetComponent.OnEnabledStateChanged__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class US6UI_InputActionHandlingWidgetComponent*AffectedComponent                                                (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void US6UI_InputActionHandlingWidgetComponent::OnEnabledStateChanged__DelegateSignature(class US6UI_InputActionHandlingWidgetComponent* InAffectedComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6UI_InputActionHandlingWidgetComponent", "OnEnabledStateChanged__DelegateSignature");

	Params::US6UI_InputActionHandlingWidgetComponent_OnEnabledStateChanged__DelegateSignature_Params Parms{};

	Parms.AffectedComponent = InAffectedComponent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function S6UICore.S6UI_InputActionHandlingWidgetComponent.GetRegisteredInputActionBindings
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FS6UI_RegisteredInputActionBinding>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

TArray<struct FS6UI_RegisteredInputActionBinding> US6UI_InputActionHandlingWidgetComponent::GetRegisteredInputActionBindings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6UI_InputActionHandlingWidgetComponent", "GetRegisteredInputActionBindings");

	Params::US6UI_InputActionHandlingWidgetComponent_GetRegisteredInputActionBindings_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function S6UICore.S6UI_InputActionHandlingWidgetInterface.GetInputActionHandlingComponent
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class US6UI_InputActionHandlingWidgetComponent*ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class US6UI_InputActionHandlingWidgetComponent* IS6UI_InputActionHandlingWidgetInterface::GetInputActionHandlingComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6UI_InputActionHandlingWidgetInterface", "GetInputActionHandlingComponent");

	Params::IS6UI_InputActionHandlingWidgetInterface_GetInputActionHandlingComponent_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function S6UICore.S6UI_InputRouterSubsystem.UnregisterInputActionHandler
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class US6UI_InputActionHandlingWidgetComponent*InputActionHandler                                               (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void US6UI_InputRouterSubsystem::UnregisterInputActionHandler(class US6UI_InputActionHandlingWidgetComponent* InInputActionHandler)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6UI_InputRouterSubsystem", "UnregisterInputActionHandler");

	Params::US6UI_InputRouterSubsystem_UnregisterInputActionHandler_Params Parms{};

	Parms.InputActionHandler = InInputActionHandler;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function S6UICore.S6UI_InputRouterSubsystem.RegisterInputActionHandler
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class US6UI_InputActionHandlingWidgetComponent*InputActionHandler                                               (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void US6UI_InputRouterSubsystem::RegisterInputActionHandler(class US6UI_InputActionHandlingWidgetComponent* InInputActionHandler)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6UI_InputRouterSubsystem", "RegisterInputActionHandler");

	Params::US6UI_InputRouterSubsystem_RegisterInputActionHandler_Params Parms{};

	Parms.InputActionHandler = InInputActionHandler;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function S6UICore.S6UI_InputRouterSubsystem.HandleInputActionHandlingComponentEnabledStateChanged
// (Final, Native, Private)
// Parameters:
// class US6UI_InputActionHandlingWidgetComponent*AffectedComponent                                                (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void US6UI_InputRouterSubsystem::HandleInputActionHandlingComponentEnabledStateChanged(class US6UI_InputActionHandlingWidgetComponent* InAffectedComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6UI_InputRouterSubsystem", "HandleInputActionHandlingComponentEnabledStateChanged");

	Params::US6UI_InputRouterSubsystem_HandleInputActionHandlingComponentEnabledStateChanged_Params Parms{};

	Parms.AffectedComponent = InAffectedComponent;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function S6UICore.S6UI_InputRouterSubsystem.HandleInputActionHandlingComponentBindingsChanged
// (Final, Native, Private)
// Parameters:
// class US6UI_InputActionHandlingWidgetComponent*AffectedComponent                                                (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void US6UI_InputRouterSubsystem::HandleInputActionHandlingComponentBindingsChanged(class US6UI_InputActionHandlingWidgetComponent* InAffectedComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6UI_InputRouterSubsystem", "HandleInputActionHandlingComponentBindingsChanged");

	Params::US6UI_InputRouterSubsystem_HandleInputActionHandlingComponentBindingsChanged_Params Parms{};

	Parms.AffectedComponent = InAffectedComponent;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function S6UICore.S6UI_StateUserWidget.GetViewModelContext
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMVVMViewModelContext       ReturnValue                                                      (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

struct FMVVMViewModelContext US6UI_StateUserWidget::GetViewModelContext()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6UI_StateUserWidget", "GetViewModelContext");

	Params::US6UI_StateUserWidget_GetViewModelContext_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function S6UICore.S6UI_StateUserWidget.GetViewModel
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class US6UI_StateViewModel*        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class US6UI_StateViewModel* US6UI_StateUserWidget::GetViewModel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6UI_StateUserWidget", "GetViewModel");

	Params::US6UI_StateUserWidget_GetViewModel_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function S6UICore.S6UI_StateUserWidget.GetInputMode
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FS6UI_InputMode             ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FS6UI_InputMode US6UI_StateUserWidget::GetInputMode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6UI_StateUserWidget", "GetInputMode");

	Params::US6UI_StateUserWidget_GetInputMode_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function S6UICore.S6UI_ToolTipWidgetInterface.UpdateToolTipText
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void IS6UI_ToolTipWidgetInterface::UpdateToolTipText(class FText& InText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6UI_ToolTipWidgetInterface", "UpdateToolTipText");

	Params::IS6UI_ToolTipWidgetInterface_UpdateToolTipText_Params Parms{};

	Parms.Text = InText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function S6UICore.S6UI_ToolTipWidgetInterface.HandleOnOpening
// (Event, Public, BlueprintEvent)
// Parameters:

void IS6UI_ToolTipWidgetInterface::HandleOnOpening()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6UI_ToolTipWidgetInterface", "HandleOnOpening");

	Params::IS6UI_ToolTipWidgetInterface_HandleOnOpening_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function S6UICore.S6UI_ToolTipWidgetInterface.HandleOnClosed
// (Event, Public, BlueprintEvent)
// Parameters:

void IS6UI_ToolTipWidgetInterface::HandleOnClosed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6UI_ToolTipWidgetInterface", "HandleOnClosed");

	Params::IS6UI_ToolTipWidgetInterface_HandleOnClosed_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function S6UICore.S6UI_UIManagerWidgetBase.RemoveModalWidget
// (Final, Native, Public)
// Parameters:
// class UWidget*                     Widget                                                           (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void US6UI_UIManagerWidgetBase::RemoveModalWidget(class UWidget* InWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6UI_UIManagerWidgetBase", "RemoveModalWidget");

	Params::US6UI_UIManagerWidgetBase_RemoveModalWidget_Params Parms{};

	Parms.Widget = InWidget;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function S6UICore.S6UI_UIManagerWidgetBase.RemoveLoadingScreenWidget
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// class UUserWidget*                 Widget                                                           (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void US6UI_UIManagerWidgetBase::RemoveLoadingScreenWidget(class UUserWidget* InWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6UI_UIManagerWidgetBase", "RemoveLoadingScreenWidget");

	Params::US6UI_UIManagerWidgetBase_RemoveLoadingScreenWidget_Params Parms{};

	Parms.Widget = InWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function S6UICore.S6UI_UIManagerWidgetBase.PushState
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class US6UI_StateUserWidget*       StateWidget                                                      (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void US6UI_UIManagerWidgetBase::PushState(class US6UI_StateUserWidget* InStateWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6UI_UIManagerWidgetBase", "PushState");

	Params::US6UI_UIManagerWidgetBase_PushState_Params Parms{};

	Parms.StateWidget = InStateWidget;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function S6UICore.S6UI_UIManagerWidgetBase.PopState
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class US6UI_StateUserWidget*       StateWidget                                                      (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void US6UI_UIManagerWidgetBase::PopState(class US6UI_StateUserWidget* InStateWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6UI_UIManagerWidgetBase", "PopState");

	Params::US6UI_UIManagerWidgetBase_PopState_Params Parms{};

	Parms.StateWidget = InStateWidget;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function S6UICore.S6UI_UIManagerWidgetBase.OpenModalWidget
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                     Widget                                                           (ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void US6UI_UIManagerWidgetBase::OpenModalWidget(class UWidget* InWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6UI_UIManagerWidgetBase", "OpenModalWidget");

	Params::US6UI_UIManagerWidgetBase_OpenModalWidget_Params Parms{};

	Parms.Widget = InWidget;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function S6UICore.S6UI_UIManagerWidgetBase.IsModalWidgetActive
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool US6UI_UIManagerWidgetBase::IsModalWidgetActive()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6UI_UIManagerWidgetBase", "IsModalWidgetActive");

	Params::US6UI_UIManagerWidgetBase_IsModalWidgetActive_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function S6UICore.S6UI_UIManagerWidgetBase.HandleOnStateInputModeChanged
// (Final, Native, Protected)
// Parameters:
// class UObject*                     Object                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFieldNotificationId        Field                                                            (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void US6UI_UIManagerWidgetBase::HandleOnStateInputModeChanged(class UObject* InObject, const struct FFieldNotificationId& InField)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6UI_UIManagerWidgetBase", "HandleOnStateInputModeChanged");

	Params::US6UI_UIManagerWidgetBase_HandleOnStateInputModeChanged_Params Parms{};

	Parms.Object = InObject;
	Parms.Field = InField;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function S6UICore.S6UI_UIManagerWidgetBase.GetUIManagerWidget
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class APlayerController*           PC                                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class US6UI_UIManagerWidgetBase*   ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class US6UI_UIManagerWidgetBase* US6UI_UIManagerWidgetBase::GetUIManagerWidget(class APlayerController* InPC)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6UI_UIManagerWidgetBase", "GetUIManagerWidget");

	Params::US6UI_UIManagerWidgetBase_GetUIManagerWidget_Params Parms{};

	Parms.PC = InPC;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function S6UICore.S6UI_UIManagerWidgetBase.GetCurrentStateWidget
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class US6UI_StateUserWidget*       ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class US6UI_StateUserWidget* US6UI_UIManagerWidgetBase::GetCurrentStateWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6UI_UIManagerWidgetBase", "GetCurrentStateWidget");

	Params::US6UI_UIManagerWidgetBase_GetCurrentStateWidget_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function S6UICore.S6UI_UIManagerWidgetBase.GetCurrentStateViewModel
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class US6UI_StateViewModel*        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class US6UI_StateViewModel* US6UI_UIManagerWidgetBase::GetCurrentStateViewModel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6UI_UIManagerWidgetBase", "GetCurrentStateViewModel");

	Params::US6UI_UIManagerWidgetBase_GetCurrentStateViewModel_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function S6UICore.S6UI_UIManagerWidgetBase.ForceCloseAllModalWidgets
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:

void US6UI_UIManagerWidgetBase::ForceCloseAllModalWidgets()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6UI_UIManagerWidgetBase", "ForceCloseAllModalWidgets");

	Params::US6UI_UIManagerWidgetBase_ForceCloseAllModalWidgets_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function S6UICore.S6UI_UIManagerWidgetBase.DeactivateTopModalWidget
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:

void US6UI_UIManagerWidgetBase::DeactivateTopModalWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6UI_UIManagerWidgetBase", "DeactivateTopModalWidget");

	Params::US6UI_UIManagerWidgetBase_DeactivateTopModalWidget_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function S6UICore.S6UI_UIManagerWidgetBase.DeactivateModalWidget
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                     Widget                                                           (ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void US6UI_UIManagerWidgetBase::DeactivateModalWidget(class UWidget* InWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6UI_UIManagerWidgetBase", "DeactivateModalWidget");

	Params::US6UI_UIManagerWidgetBase_DeactivateModalWidget_Params Parms{};

	Parms.Widget = InWidget;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function S6UICore.S6UI_UIManagerWidgetBase.CreateDefaultStateWidget
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:

void US6UI_UIManagerWidgetBase::CreateDefaultStateWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6UI_UIManagerWidgetBase", "CreateDefaultStateWidget");

	Params::US6UI_UIManagerWidgetBase_CreateDefaultStateWidget_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function S6UICore.S6UI_UIManagerWidgetBase.CloseTopModalWidget
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bShouldForceClose                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bPermitLatentClosing                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool US6UI_UIManagerWidgetBase::CloseTopModalWidget(bool InbShouldForceClose, bool InbPermitLatentClosing)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6UI_UIManagerWidgetBase", "CloseTopModalWidget");

	Params::US6UI_UIManagerWidgetBase_CloseTopModalWidget_Params Parms{};

	Parms.bShouldForceClose = InbShouldForceClose;
	Parms.bPermitLatentClosing = InbPermitLatentClosing;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function S6UICore.S6UI_UIManagerWidgetBase.CloseModalWidget
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                     Widget                                                           (ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bShouldForceClose                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bPermitLatentClosing                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void US6UI_UIManagerWidgetBase::CloseModalWidget(class UWidget* InWidget, bool InbShouldForceClose, bool InbPermitLatentClosing)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6UI_UIManagerWidgetBase", "CloseModalWidget");

	Params::US6UI_UIManagerWidgetBase_CloseModalWidget_Params Parms{};

	Parms.Widget = InWidget;
	Parms.bShouldForceClose = InbShouldForceClose;
	Parms.bPermitLatentClosing = InbPermitLatentClosing;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function S6UICore.S6UI_UIManagerWidgetBase.AddLoadingScreenWidget
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// class UUserWidget*                 Widget                                                           (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void US6UI_UIManagerWidgetBase::AddLoadingScreenWidget(class UUserWidget* InWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6UI_UIManagerWidgetBase", "AddLoadingScreenWidget");

	Params::US6UI_UIManagerWidgetBase_AddLoadingScreenWidget_Params Parms{};

	Parms.Widget = InWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function S6UICore.S6UI_UIManagerWidgetBase.ActivateModalWidget
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                     Widget                                                           (ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void US6UI_UIManagerWidgetBase::ActivateModalWidget(class UWidget* InWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6UI_UIManagerWidgetBase", "ActivateModalWidget");

	Params::US6UI_UIManagerWidgetBase_ActivateModalWidget_Params Parms{};

	Parms.Widget = InWidget;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function S6UICore.S6UI_UIManagerHUDBase.GetUIManagerWidget
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class US6UI_UIManagerWidgetBase*   ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class US6UI_UIManagerWidgetBase* AS6UI_UIManagerHUDBase::GetUIManagerWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6UI_UIManagerHUDBase", "GetUIManagerWidget");

	Params::AS6UI_UIManagerHUDBase_GetUIManagerWidget_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function S6UICore.S6UI_UIManagerCrossPlatformHelper.RedirectStateType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TSoftClassPtr<class US6UI_StateUserWidget>DefaultStateType                                                 (Parm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSoftClassPtr<class US6UI_StateUserWidget>ReturnValue                                                      (Parm, OutParm, ReturnParm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TSoftClassPtr<class US6UI_StateUserWidget> US6UI_UIManagerCrossPlatformHelper::RedirectStateType(TSoftClassPtr<class US6UI_StateUserWidget> InDefaultStateType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6UI_UIManagerCrossPlatformHelper", "RedirectStateType");

	Params::US6UI_UIManagerCrossPlatformHelper_RedirectStateType_Params Parms{};

	Parms.DefaultStateType = InDefaultStateType;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function S6UICore.S6UI_UIManagerCrossPlatformHelper.RedirectModalType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TSoftClassPtr<class US6UI_ModalWidgetBase>DefaultModalType                                                 (Parm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSoftClassPtr<class US6UI_ModalWidgetBase>ReturnValue                                                      (Parm, OutParm, ReturnParm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TSoftClassPtr<class US6UI_ModalWidgetBase> US6UI_UIManagerCrossPlatformHelper::RedirectModalType(TSoftClassPtr<class US6UI_ModalWidgetBase> InDefaultModalType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6UI_UIManagerCrossPlatformHelper", "RedirectModalType");

	Params::US6UI_UIManagerCrossPlatformHelper_RedirectModalType_Params Parms{};

	Parms.DefaultModalType = InDefaultModalType;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function S6UICore.S6UI_Utils.SummonContextMenuAtPosition
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWidget*                     ParentWidget                                                     (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   Position                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class UUserWidget>     ContentWidgetClass                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FS6UI_ContextMenu           OutContextMenu                                                   (Parm, OutParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool US6UI_Utils::SummonContextMenuAtPosition(class UObject* InWorldContextObject, class UWidget* InParentWidget, struct FVector2D& InPosition, TSubclassOf<class UUserWidget>& InContentWidgetClass, struct FS6UI_ContextMenu* InOutContextMenu)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6UI_Utils", "SummonContextMenuAtPosition");

	Params::US6UI_Utils_SummonContextMenuAtPosition_Params Parms{};

	Parms.WorldContextObject = InWorldContextObject;
	Parms.ParentWidget = InParentWidget;
	Parms.Position = InPosition;
	Parms.ContentWidgetClass = InContentWidgetClass;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (InOutContextMenu != nullptr)
		*InOutContextMenu = Parms.OutContextMenu;

	return Parms.ReturnValue;

}


// Function S6UICore.S6UI_Utils.SummonContextMenu
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// TSubclassOf<class UUserWidget>     ContentWidgetClass                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FS6UI_ContextMenu           OutContextMenu                                                   (Parm, OutParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool US6UI_Utils::SummonContextMenu(class UObject* InWorldContextObject, struct FPointerEvent& InMouseEvent, TSubclassOf<class UUserWidget>& InContentWidgetClass, struct FS6UI_ContextMenu* InOutContextMenu)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6UI_Utils", "SummonContextMenu");

	Params::US6UI_Utils_SummonContextMenu_Params Parms{};

	Parms.WorldContextObject = InWorldContextObject;
	Parms.MouseEvent = InMouseEvent;
	Parms.ContentWidgetClass = InContentWidgetClass;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (InOutContextMenu != nullptr)
		*InOutContextMenu = Parms.OutContextMenu;

	return Parms.ReturnValue;

}


// Function S6UICore.S6UI_Utils.IsShowCommonUI
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool US6UI_Utils::IsShowCommonUI()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6UI_Utils", "IsShowCommonUI");

	Params::US6UI_Utils_IsShowCommonUI_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function S6UICore.S6UI_Utils.GetContextMenuContentWidget
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FS6UI_ContextMenu           ContextMenu                                                      (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// class UUserWidget*                 ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UUserWidget* US6UI_Utils::GetContextMenuContentWidget(struct FS6UI_ContextMenu& InContextMenu)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6UI_Utils", "GetContextMenuContentWidget");

	Params::US6UI_Utils_GetContextMenuContentWidget_Params Parms{};

	Parms.ContextMenu = InContextMenu;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function S6UICore.S6UI_Utils.DismissContextMenu
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FS6UI_ContextMenu           ContextMenu                                                      (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

void US6UI_Utils::DismissContextMenu(struct FS6UI_ContextMenu& InContextMenu)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6UI_Utils", "DismissContextMenu");

	Params::US6UI_Utils_DismissContextMenu_Params Parms{};

	Parms.ContextMenu = InContextMenu;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function S6UICore.S6UI_Utils.AreCapsLocked
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool US6UI_Utils::AreCapsLocked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6UI_Utils", "AreCapsLocked");

	Params::US6UI_Utils_AreCapsLocked_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function S6UICore.S6UI_StateStatics.PushState
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class US6UI_StateUserWidget*       Widget                                                           (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void US6UI_StateStatics::PushState(class US6UI_StateUserWidget* InWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6UI_StateStatics", "PushState");

	Params::US6UI_StateStatics_PushState_Params Parms{};

	Parms.Widget = InWidget;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function S6UICore.S6UI_StateStatics.PopState
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class US6UI_StateUserWidget*       Widget                                                           (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void US6UI_StateStatics::PopState(class US6UI_StateUserWidget* InWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6UI_StateStatics", "PopState");

	Params::US6UI_StateStatics_PopState_Params Parms{};

	Parms.Widget = InWidget;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function S6UICore.S6UI_StateStatics.CreateInputMode_UIOnly
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UWidget*                     WidgetToFocus                                                    (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ES6UI_MouseLockMode     MouseLockMode                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bShowCursor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FS6UI_InputMode             ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FS6UI_InputMode US6UI_StateStatics::CreateInputMode_UIOnly(class UWidget* InWidgetToFocus, enum class ES6UI_MouseLockMode InMouseLockMode, bool InbShowCursor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6UI_StateStatics", "CreateInputMode_UIOnly");

	Params::US6UI_StateStatics_CreateInputMode_UIOnly_Params Parms{};

	Parms.WidgetToFocus = InWidgetToFocus;
	Parms.MouseLockMode = InMouseLockMode;
	Parms.bShowCursor = InbShowCursor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function S6UICore.S6UI_StateStatics.CreateInputMode_GameOnly
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FS6UI_InputMode             ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FS6UI_InputMode US6UI_StateStatics::CreateInputMode_GameOnly()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6UI_StateStatics", "CreateInputMode_GameOnly");

	Params::US6UI_StateStatics_CreateInputMode_GameOnly_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function S6UICore.S6UI_StateStatics.CreateInputMode_GameAndUI
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UWidget*                     WidgetToFocus                                                    (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ES6UI_MouseLockMode     MouseLockMode                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bHideCursorDuringCapture                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bShowCursor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FS6UI_InputMode             ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FS6UI_InputMode US6UI_StateStatics::CreateInputMode_GameAndUI(class UWidget* InWidgetToFocus, enum class ES6UI_MouseLockMode InMouseLockMode, bool InbHideCursorDuringCapture, bool InbShowCursor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6UI_StateStatics", "CreateInputMode_GameAndUI");

	Params::US6UI_StateStatics_CreateInputMode_GameAndUI_Params Parms{};

	Parms.WidgetToFocus = InWidgetToFocus;
	Parms.MouseLockMode = InMouseLockMode;
	Parms.bHideCursorDuringCapture = InbHideCursorDuringCapture;
	Parms.bShowCursor = InbShowCursor;

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
