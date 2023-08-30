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


// Function KeyRebinding.BindingKeyListenerWidget.OnDeactivated
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UBindingKeyListenerWidget::OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BindingKeyListenerWidget", "OnDeactivated");

	Params::UBindingKeyListenerWidget_OnDeactivated_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function KeyRebinding.BindingKeyListenerWidget.OnActivated
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UBindingKeyListenerWidget::OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BindingKeyListenerWidget", "OnActivated");

	Params::UBindingKeyListenerWidget_OnActivated_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function KeyRebinding.BindingKeyListenerWidget.GetPlayerInputKey
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FInputKeys                  ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FInputKeys UBindingKeyListenerWidget::GetPlayerInputKey()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BindingKeyListenerWidget", "GetPlayerInputKey");

	Params::UBindingKeyListenerWidget_GetPlayerInputKey_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function KeyRebinding.KeyRebindingToolsLibrary.GetPromptDelayTime
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UKeyRebindingToolsLibrary::GetPromptDelayTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KeyRebindingToolsLibrary", "GetPromptDelayTime");

	Params::UKeyRebindingToolsLibrary_GetPromptDelayTime_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function KeyRebinding.KeyRebindingToolsLibrary.GetKeyFName
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FKey                        InKey                                                            (ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UKeyRebindingToolsLibrary::GetKeyFName(struct FKey& InInKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KeyRebindingToolsLibrary", "GetKeyFName");

	Params::UKeyRebindingToolsLibrary_GetKeyFName_Params Parms{};

	Parms.InKey = InInKey;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function KeyRebinding.KeyRebindingToolsLibrary.GetImagesWithInputKeys
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FInputKeys                  InputKeys                                                        (ConstParm, Parm, NativeAccessSpecifierPublic)
// class UInputActionDescriptionWidget*ActionDescWidget                                                 (ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UTexture2D*>          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class UTexture2D*> UKeyRebindingToolsLibrary::GetImagesWithInputKeys(const struct FInputKeys& InInputKeys, class UInputActionDescriptionWidget* InActionDescWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KeyRebindingToolsLibrary", "GetImagesWithInputKeys");

	Params::UKeyRebindingToolsLibrary_GetImagesWithInputKeys_Params Parms{};

	Parms.InputKeys = InInputKeys;
	Parms.ActionDescWidget = InActionDescWidget;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function KeyRebinding.KeyRebindingToolsLibrary.GetImagesArrayWithActionName
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        ActionName                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsGamepadKey                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UKeyRebindingSubsystem*      KeyRebindingSubsystem                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UInputActionDescriptionWidget*ActionDescWidget                                                 (ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsLockedCurrentInput                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKeyRebindingIcons          ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FKeyRebindingIcons UKeyRebindingToolsLibrary::GetImagesArrayWithActionName(class FName& InActionName, bool InbIsGamepadKey, class UKeyRebindingSubsystem* InKeyRebindingSubsystem, class UInputActionDescriptionWidget* InActionDescWidget, bool InbIsLockedCurrentInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KeyRebindingToolsLibrary", "GetImagesArrayWithActionName");

	Params::UKeyRebindingToolsLibrary_GetImagesArrayWithActionName_Params Parms{};

	Parms.ActionName = InActionName;
	Parms.bIsGamepadKey = InbIsGamepadKey;
	Parms.KeyRebindingSubsystem = InKeyRebindingSubsystem;
	Parms.ActionDescWidget = InActionDescWidget;
	Parms.bIsLockedCurrentInput = InbIsLockedCurrentInput;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function KeyRebinding.KeyRebindingToolsLibrary.GetAllInputActionMappingInfo
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FKeyRebindingSettingsInfo>OutKeyRebindingSettingsInfo                                      (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// bool                               bIsGamepadKey                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UKeyRebindingSubsystem*      KeyRebindingSubsystem                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UInputActionDescriptionWidget*ActionDescWidget                                                 (ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsLockedCurrentInput                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UKeyRebindingToolsLibrary::GetAllInputActionMappingInfo(TArray<struct FKeyRebindingSettingsInfo>* InOutKeyRebindingSettingsInfo, bool InbIsGamepadKey, class UKeyRebindingSubsystem* InKeyRebindingSubsystem, class UInputActionDescriptionWidget* InActionDescWidget, bool InbIsLockedCurrentInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KeyRebindingToolsLibrary", "GetAllInputActionMappingInfo");

	Params::UKeyRebindingToolsLibrary_GetAllInputActionMappingInfo_Params Parms{};

	Parms.bIsGamepadKey = InbIsGamepadKey;
	Parms.KeyRebindingSubsystem = InKeyRebindingSubsystem;
	Parms.ActionDescWidget = InActionDescWidget;
	Parms.bIsLockedCurrentInput = InbIsLockedCurrentInput;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (InOutKeyRebindingSettingsInfo != nullptr)
		*InOutKeyRebindingSettingsInfo = Parms.OutKeyRebindingSettingsInfo;

}


// Function KeyRebinding.KeyRebindingToolsLibrary.GetAllImagesWithAction
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UInputAction*                InputAction                                                      (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UEnhancedInputSubsystemWithKeyRebinding*EnhancedInputSubsystem                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UInputActionDescriptionWidget*ActionDescWidget                                                 (ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsGamepadKey                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsLockedCurrentInput                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FInputKeysImages>    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FInputKeysImages> UKeyRebindingToolsLibrary::GetAllImagesWithAction(class UInputAction* InInputAction, class UEnhancedInputSubsystemWithKeyRebinding* InEnhancedInputSubsystem, class UInputActionDescriptionWidget* InActionDescWidget, bool InbIsGamepadKey, bool InbIsLockedCurrentInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KeyRebindingToolsLibrary", "GetAllImagesWithAction");

	Params::UKeyRebindingToolsLibrary_GetAllImagesWithAction_Params Parms{};

	Parms.InputAction = InInputAction;
	Parms.EnhancedInputSubsystem = InEnhancedInputSubsystem;
	Parms.ActionDescWidget = InActionDescWidget;
	Parms.bIsGamepadKey = InbIsGamepadKey;
	Parms.bIsLockedCurrentInput = InbIsLockedCurrentInput;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function KeyRebinding.EnhancedInputSubsystemWithKeyRebinding.UnRegisterDelegateToRefreshKeys
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UInputAction*                InputAction                                                      (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 RefreshKeysDelegate                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEnhancedInputSubsystemWithKeyRebinding::UnRegisterDelegateToRefreshKeys(class UInputAction* InInputAction, FDelegateProperty_& InRefreshKeysDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnhancedInputSubsystemWithKeyRebinding", "UnRegisterDelegateToRefreshKeys");

	Params::UEnhancedInputSubsystemWithKeyRebinding_UnRegisterDelegateToRefreshKeys_Params Parms{};

	Parms.InputAction = InInputAction;
	Parms.RefreshKeysDelegate = InRefreshKeysDelegate;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function KeyRebinding.EnhancedInputSubsystemWithKeyRebinding.RequestRebuildControlMappings
// (BlueprintCosmetic, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FModifyContextOptions       Options                                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// enum class EInputMappingRebuildTypeRebuildType                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEnhancedInputSubsystemWithKeyRebinding::RequestRebuildControlMappings(struct FModifyContextOptions& InOptions, enum class EInputMappingRebuildType InRebuildType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnhancedInputSubsystemWithKeyRebinding", "RequestRebuildControlMappings");

	Params::UEnhancedInputSubsystemWithKeyRebinding_RequestRebuildControlMappings_Params Parms{};

	Parms.Options = InOptions;
	Parms.RebuildType = InRebuildType;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function KeyRebinding.EnhancedInputSubsystemWithKeyRebinding.RemoveMappingContext
// (BlueprintCosmetic, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UInputMappingContext*        MappingContext                                                   (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FModifyContextOptions       Options                                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UEnhancedInputSubsystemWithKeyRebinding::RemoveMappingContext(class UInputMappingContext* InMappingContext, struct FModifyContextOptions& InOptions)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnhancedInputSubsystemWithKeyRebinding", "RemoveMappingContext");

	Params::UEnhancedInputSubsystemWithKeyRebinding_RemoveMappingContext_Params Parms{};

	Parms.MappingContext = InMappingContext;
	Parms.Options = InOptions;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function KeyRebinding.EnhancedInputSubsystemWithKeyRebinding.RegisterDelegateToRefreshKeys
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UInputAction*                InputAction                                                      (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 RefreshKeysDelegate                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEnhancedInputSubsystemWithKeyRebinding::RegisterDelegateToRefreshKeys(class UInputAction* InInputAction, FDelegateProperty_& InRefreshKeysDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnhancedInputSubsystemWithKeyRebinding", "RegisterDelegateToRefreshKeys");

	Params::UEnhancedInputSubsystemWithKeyRebinding_RegisterDelegateToRefreshKeys_Params Parms{};

	Parms.InputAction = InInputAction;
	Parms.RefreshKeysDelegate = InRefreshKeysDelegate;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function KeyRebinding.EnhancedInputSubsystemWithKeyRebinding.GetKeysForInputAction
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UInputAction*                InputAction                                                      (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsGamepadKey                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsLockedCurrentInput                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FInputKeys>          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FInputKeys> UEnhancedInputSubsystemWithKeyRebinding::GetKeysForInputAction(class UInputAction* InInputAction, bool InbIsGamepadKey, bool InbIsLockedCurrentInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnhancedInputSubsystemWithKeyRebinding", "GetKeysForInputAction");

	Params::UEnhancedInputSubsystemWithKeyRebinding_GetKeysForInputAction_Params Parms{};

	Parms.InputAction = InInputAction;
	Parms.bIsGamepadKey = InbIsGamepadKey;
	Parms.bIsLockedCurrentInput = InbIsLockedCurrentInput;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function KeyRebinding.EnhancedInputSubsystemWithKeyRebinding.AddMappingContext
// (BlueprintCosmetic, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UInputMappingContext*        MappingContext                                                   (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Priority                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FModifyContextOptions       Options                                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UEnhancedInputSubsystemWithKeyRebinding::AddMappingContext(class UInputMappingContext* InMappingContext, int32 InPriority, struct FModifyContextOptions& InOptions)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnhancedInputSubsystemWithKeyRebinding", "AddMappingContext");

	Params::UEnhancedInputSubsystemWithKeyRebinding_AddMappingContext_Params Parms{};

	Parms.MappingContext = InMappingContext;
	Parms.Priority = InPriority;
	Parms.Options = InOptions;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function KeyRebinding.KeyRebindingSubsystem.UnRegisterCompleteKeyRebindingEvent
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        ActionName                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 KeyRebindingCallBackDelegate                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UKeyRebindingSubsystem::UnRegisterCompleteKeyRebindingEvent(class FName InActionName, FDelegateProperty_& InKeyRebindingCallBackDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KeyRebindingSubsystem", "UnRegisterCompleteKeyRebindingEvent");

	Params::UKeyRebindingSubsystem_UnRegisterCompleteKeyRebindingEvent_Params Parms{};

	Parms.ActionName = InActionName;
	Parms.KeyRebindingCallBackDelegate = InKeyRebindingCallBackDelegate;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function KeyRebinding.KeyRebindingSubsystem.SetCustomKeyBindingOfAction
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        ActionName                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EKeyRebindingSlot       SlotNum                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsUnbindingOperation                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FInputKeys                  InputKeys                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               bIsGamepadKey                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UKeyRebindingSubsystem::SetCustomKeyBindingOfAction(class FName InActionName, enum class EKeyRebindingSlot InSlotNum, bool InbIsUnbindingOperation, struct FInputKeys& InInputKeys, bool InbIsGamepadKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KeyRebindingSubsystem", "SetCustomKeyBindingOfAction");

	Params::UKeyRebindingSubsystem_SetCustomKeyBindingOfAction_Params Parms{};

	Parms.ActionName = InActionName;
	Parms.SlotNum = InSlotNum;
	Parms.bIsUnbindingOperation = InbIsUnbindingOperation;
	Parms.InputKeys = InInputKeys;
	Parms.bIsGamepadKey = InbIsGamepadKey;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function KeyRebinding.KeyRebindingSubsystem.SaveCustomRemappingDataset
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UKeyRebindingSubsystem::SaveCustomRemappingDataset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KeyRebindingSubsystem", "SaveCustomRemappingDataset");

	Params::UKeyRebindingSubsystem_SaveCustomRemappingDataset_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function KeyRebinding.KeyRebindingSubsystem.ResetToDefaultKeyMapping
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UKeyRebindingSubsystem::ResetToDefaultKeyMapping()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KeyRebindingSubsystem", "ResetToDefaultKeyMapping");

	Params::UKeyRebindingSubsystem_ResetToDefaultKeyMapping_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function KeyRebinding.KeyRebindingSubsystem.RegisterCompleteKeyRebindingEvent
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        ActionName                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 KeyRebindingCallBackDelegate                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UKeyRebindingSubsystem::RegisterCompleteKeyRebindingEvent(class FName InActionName, FDelegateProperty_& InKeyRebindingCallBackDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KeyRebindingSubsystem", "RegisterCompleteKeyRebindingEvent");

	Params::UKeyRebindingSubsystem_RegisterCompleteKeyRebindingEvent_Params Parms{};

	Parms.ActionName = InActionName;
	Parms.KeyRebindingCallBackDelegate = InKeyRebindingCallBackDelegate;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function KeyRebinding.KeyRebindingSubsystem.QueryKeysOfActionAndSlot
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        ActionName                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EKeyRebindingSlot       SlotNum                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsGamepadKey                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsLockedCurrentInput                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FInputKeys                  ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FInputKeys UKeyRebindingSubsystem::QueryKeysOfActionAndSlot(class FName& InActionName, enum class EKeyRebindingSlot InSlotNum, bool InbIsGamepadKey, bool InbIsLockedCurrentInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KeyRebindingSubsystem", "QueryKeysOfActionAndSlot");

	Params::UKeyRebindingSubsystem_QueryKeysOfActionAndSlot_Params Parms{};

	Parms.ActionName = InActionName;
	Parms.SlotNum = InSlotNum;
	Parms.bIsGamepadKey = InbIsGamepadKey;
	Parms.bIsLockedCurrentInput = InbIsLockedCurrentInput;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function KeyRebinding.KeyRebindingSubsystem.QueryCustomRemappingKeys
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        ActionName                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsGamepadKey                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsLockedCurrentInput                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FInputKeys>          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FInputKeys> UKeyRebindingSubsystem::QueryCustomRemappingKeys(class FName& InActionName, bool InbIsGamepadKey, bool InbIsLockedCurrentInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KeyRebindingSubsystem", "QueryCustomRemappingKeys");

	Params::UKeyRebindingSubsystem_QueryCustomRemappingKeys_Params Parms{};

	Parms.ActionName = InActionName;
	Parms.bIsGamepadKey = InbIsGamepadKey;
	Parms.bIsLockedCurrentInput = InbIsLockedCurrentInput;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function KeyRebinding.KeyRebindingSubsystem.GetAllKeysWithActionBound
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               bIsGamepadKey                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsLockedCurrentInput                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FKey>                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FKey> UKeyRebindingSubsystem::GetAllKeysWithActionBound(bool InbIsGamepadKey, bool InbIsLockedCurrentInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KeyRebindingSubsystem", "GetAllKeysWithActionBound");

	Params::UKeyRebindingSubsystem_GetAllKeysWithActionBound_Params Parms{};

	Parms.bIsGamepadKey = InbIsGamepadKey;
	Parms.bIsLockedCurrentInput = InbIsLockedCurrentInput;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function KeyRebinding.KeyRebindingSubsystem.GetActionNameWithAction
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UInputAction*                InputAction                                                      (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FName UKeyRebindingSubsystem::GetActionNameWithAction(class UInputAction* InInputAction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KeyRebindingSubsystem", "GetActionNameWithAction");

	Params::UKeyRebindingSubsystem_GetActionNameWithAction_Params Parms{};

	Parms.InputAction = InInputAction;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function KeyRebinding.KeyRebindingSubsystem.ApplyLoadKeyRebindingSettings
// (Final, Native, Public)
// Parameters:

void UKeyRebindingSubsystem::ApplyLoadKeyRebindingSettings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KeyRebindingSubsystem", "ApplyLoadKeyRebindingSettings");

	Params::UKeyRebindingSubsystem_ApplyLoadKeyRebindingSettings_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function KeyRebinding.KeyRebindingSubsystem.ApplyCustomKeyMapping
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UKeyRebindingSubsystem::ApplyCustomKeyMapping()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KeyRebindingSubsystem", "ApplyCustomKeyMapping");

	Params::UKeyRebindingSubsystem_ApplyCustomKeyMapping_Params Parms{};


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
