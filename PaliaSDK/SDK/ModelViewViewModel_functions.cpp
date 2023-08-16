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


// Function ModelViewViewModel.MVVMViewModelBase.K2_SetPropertyValue
// (Final, Native, Protected, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              OldValue                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              NewValue                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMVVMViewModelBase::K2_SetPropertyValue(int32& InOldValue, int32& InNewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MVVMViewModelBase", "K2_SetPropertyValue");

	Params::UMVVMViewModelBase_K2_SetPropertyValue_Params Parms{};

	Parms.OldValue = InOldValue;
	Parms.NewValue = InNewValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ModelViewViewModel.MVVMViewModelBase.K2_RemoveFieldValueChangedDelegate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FFieldNotificationId        FieldId                                                          (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Delegate                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMVVMViewModelBase::K2_RemoveFieldValueChangedDelegate(const struct FFieldNotificationId& InFieldId, FDelegateProperty_ InDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MVVMViewModelBase", "K2_RemoveFieldValueChangedDelegate");

	Params::UMVVMViewModelBase_K2_RemoveFieldValueChangedDelegate_Params Parms{};

	Parms.FieldId = InFieldId;
	Parms.Delegate = InDelegate;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ModelViewViewModel.MVVMViewModelBase.K2_BroadcastFieldValueChanged
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// struct FFieldNotificationId        FieldId                                                          (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMVVMViewModelBase::K2_BroadcastFieldValueChanged(const struct FFieldNotificationId& InFieldId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MVVMViewModelBase", "K2_BroadcastFieldValueChanged");

	Params::UMVVMViewModelBase_K2_BroadcastFieldValueChanged_Params Parms{};

	Parms.FieldId = InFieldId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ModelViewViewModel.MVVMViewModelBase.K2_AddFieldValueChangedDelegate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FFieldNotificationId        FieldId                                                          (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Delegate                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMVVMViewModelBase::K2_AddFieldValueChangedDelegate(const struct FFieldNotificationId& InFieldId, FDelegateProperty_ InDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MVVMViewModelBase", "K2_AddFieldValueChangedDelegate");

	Params::UMVVMViewModelBase_K2_AddFieldValueChangedDelegate_Params Parms{};

	Parms.FieldId = InFieldId;
	Parms.Delegate = InDelegate;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ModelViewViewModel.MVVMSubsystem.GetViewFromUserWidget
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UUserWidget*                 UserWidget                                                       (ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMVVMView*                   ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMVVMView* UMVVMSubsystem::GetViewFromUserWidget(class UUserWidget* InUserWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MVVMSubsystem", "GetViewFromUserWidget");

	Params::UMVVMSubsystem_GetViewFromUserWidget_Params Parms{};

	Parms.UserWidget = InUserWidget;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ModelViewViewModel.MVVMSubsystem.GetGlobalViewModelCollection
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UMVVMViewModelCollectionObject*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMVVMViewModelCollectionObject* UMVVMSubsystem::GetGlobalViewModelCollection()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MVVMSubsystem", "GetGlobalViewModelCollection");

	Params::UMVVMSubsystem_GetGlobalViewModelCollection_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ModelViewViewModel.MVVMSubsystem.GetAvailableBindings
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                      Class                                                            (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UClass*                      Accessor                                                         (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FMVVMAvailableBinding>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FMVVMAvailableBinding> UMVVMSubsystem::GetAvailableBindings(class UClass* InClass, class UClass* InAccessor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MVVMSubsystem", "GetAvailableBindings");

	Params::UMVVMSubsystem_GetAvailableBindings_Params Parms{};

	Parms.Class = InClass;
	Parms.Accessor = InAccessor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ModelViewViewModel.MVVMSubsystem.GetAvailableBinding
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                      Class                                                            (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMVVMBindingName            BindingName                                                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UClass*                      Accessor                                                         (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMVVMAvailableBinding       ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FMVVMAvailableBinding UMVVMSubsystem::GetAvailableBinding(class UClass* InClass, const struct FMVVMBindingName& InBindingName, class UClass* InAccessor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MVVMSubsystem", "GetAvailableBinding");

	Params::UMVVMSubsystem_GetAvailableBinding_Params Parms{};

	Parms.Class = InClass;
	Parms.BindingName = InBindingName;
	Parms.Accessor = InAccessor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ModelViewViewModel.MVVMSubsystem.DoesWidgetTreeContainedWidget
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UWidgetTree*                 WidgetTree                                                       (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWidget*                     ViewWidget                                                       (ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMVVMSubsystem::DoesWidgetTreeContainedWidget(class UWidgetTree* InWidgetTree, class UWidget* InViewWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MVVMSubsystem", "DoesWidgetTreeContainedWidget");

	Params::UMVVMSubsystem_DoesWidgetTreeContainedWidget_Params Parms{};

	Parms.WidgetTree = InWidgetTree;
	Parms.ViewWidget = InViewWidget;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ModelViewViewModel.MVVMViewModelCollectionObject.RemoveViewModel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMVVMViewModelContext       Context                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMVVMViewModelCollectionObject::RemoveViewModel(const struct FMVVMViewModelContext& InContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MVVMViewModelCollectionObject", "RemoveViewModel");

	Params::UMVVMViewModelCollectionObject_RemoveViewModel_Params Parms{};

	Parms.Context = InContext;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ModelViewViewModel.MVVMViewModelCollectionObject.RemoveAllViewModelInstance
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMVVMViewModelBase*          ViewModel                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UMVVMViewModelCollectionObject::RemoveAllViewModelInstance(class UMVVMViewModelBase* InViewModel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MVVMViewModelCollectionObject", "RemoveAllViewModelInstance");

	Params::UMVVMViewModelCollectionObject_RemoveAllViewModelInstance_Params Parms{};

	Parms.ViewModel = InViewModel;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ModelViewViewModel.MVVMViewModelCollectionObject.FindViewModelInstance
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMVVMViewModelContext       Context                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class UMVVMViewModelBase*          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMVVMViewModelBase* UMVVMViewModelCollectionObject::FindViewModelInstance(const struct FMVVMViewModelContext& InContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MVVMViewModelCollectionObject", "FindViewModelInstance");

	Params::UMVVMViewModelCollectionObject_FindViewModelInstance_Params Parms{};

	Parms.Context = InContext;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ModelViewViewModel.MVVMViewModelCollectionObject.AddViewModelInstance
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMVVMViewModelContext       Context                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class UMVVMViewModelBase*          ViewModel                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMVVMViewModelCollectionObject::AddViewModelInstance(const struct FMVVMViewModelContext& InContext, class UMVVMViewModelBase* InViewModel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MVVMViewModelCollectionObject", "AddViewModelInstance");

	Params::UMVVMViewModelCollectionObject_AddViewModelInstance_Params Parms{};

	Parms.Context = InContext;
	Parms.ViewModel = InViewModel;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ModelViewViewModel.MVVMView.SetViewModel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        ViewModelName                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMVVMViewModelBase*          ViewModel                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMVVMView::SetViewModel(class FName InViewModelName, class UMVVMViewModelBase* InViewModel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MVVMView", "SetViewModel");

	Params::UMVVMView_SetViewModel_Params Parms{};

	Parms.ViewModelName = InViewModelName;
	Parms.ViewModel = InViewModel;

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
