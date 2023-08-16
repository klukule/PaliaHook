#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "SDK.hpp"

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


// Function KeyRebinding.InputActionDescriptionWidget.RefreshDiscription
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        ActionName                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsGamepadKey                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKeyRebindingIcons          ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FKeyRebindingIcons UInputActionDescriptionWidget::RefreshDiscription(class FName& ActionName, bool bIsGamepadKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InputActionDescriptionWidget", "RefreshDiscription");

	Params::UInputActionDescriptionWidget_RefreshDiscription_Params Parms{};

	Parms.ActionName = ActionName;
	Parms.bIsGamepadKey = bIsGamepadKey;

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

class FString UKeyRebindingToolsLibrary::GetKeyFName(struct FKey& InKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KeyRebindingToolsLibrary", "GetKeyFName");

	Params::UKeyRebindingToolsLibrary_GetKeyFName_Params Parms{};

	Parms.InKey = InKey;

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
// bool                               bIsGamepadKey                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UInputActionDescriptionWidget*ActionDescWidget                                                 (ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UTexture2D*>          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class UTexture2D*> UKeyRebindingToolsLibrary::GetImagesWithInputKeys(const struct FInputKeys& InputKeys, bool bIsGamepadKey, class UInputActionDescriptionWidget* ActionDescWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KeyRebindingToolsLibrary", "GetImagesWithInputKeys");

	Params::UKeyRebindingToolsLibrary_GetImagesWithInputKeys_Params Parms{};

	Parms.InputKeys = InputKeys;
	Parms.bIsGamepadKey = bIsGamepadKey;
	Parms.ActionDescWidget = ActionDescWidget;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function KeyRebinding.KeyRebindingToolsLibrary.GetImagesWithActionNameAndSlot
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        ActionName                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EKeyRebindingSlot       SlotNum                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsGamepadKey                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UKeyRebindingSubsystem*      KeyRebindingSubsystem                                            (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UInputActionDescriptionWidget*ActionDescWidget                                                 (ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UTexture2D*>          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class UTexture2D*> UKeyRebindingToolsLibrary::GetImagesWithActionNameAndSlot(class FName& ActionName, enum class EKeyRebindingSlot SlotNum, bool bIsGamepadKey, class UKeyRebindingSubsystem* KeyRebindingSubsystem, class UInputActionDescriptionWidget* ActionDescWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KeyRebindingToolsLibrary", "GetImagesWithActionNameAndSlot");

	Params::UKeyRebindingToolsLibrary_GetImagesWithActionNameAndSlot_Params Parms{};

	Parms.ActionName = ActionName;
	Parms.SlotNum = SlotNum;
	Parms.bIsGamepadKey = bIsGamepadKey;
	Parms.KeyRebindingSubsystem = KeyRebindingSubsystem;
	Parms.ActionDescWidget = ActionDescWidget;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function KeyRebinding.KeyRebindingToolsLibrary.GetImagesWithAction
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UInputAction*                InputAction                                                      (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsGamepadKey                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UKeyRebindingSubsystem*      KeyRebindingSubsystem                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UInputActionDescriptionWidget*ActionDescWidget                                                 (ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UTexture2D*>          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class UTexture2D*> UKeyRebindingToolsLibrary::GetImagesWithAction(class UInputAction* InputAction, bool bIsGamepadKey, class UKeyRebindingSubsystem* KeyRebindingSubsystem, class UInputActionDescriptionWidget* ActionDescWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KeyRebindingToolsLibrary", "GetImagesWithAction");

	Params::UKeyRebindingToolsLibrary_GetImagesWithAction_Params Parms{};

	Parms.InputAction = InputAction;
	Parms.bIsGamepadKey = bIsGamepadKey;
	Parms.KeyRebindingSubsystem = KeyRebindingSubsystem;
	Parms.ActionDescWidget = ActionDescWidget;

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
// class UKeyRebindingSubsystem*      KeyRebindingSubsystem                                            (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UInputActionDescriptionWidget*ActionDescWidget                                                 (ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKeyRebindingIcons          ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FKeyRebindingIcons UKeyRebindingToolsLibrary::GetImagesArrayWithActionName(class FName& ActionName, bool bIsGamepadKey, class UKeyRebindingSubsystem* KeyRebindingSubsystem, class UInputActionDescriptionWidget* ActionDescWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KeyRebindingToolsLibrary", "GetImagesArrayWithActionName");

	Params::UKeyRebindingToolsLibrary_GetImagesArrayWithActionName_Params Parms{};

	Parms.ActionName = ActionName;
	Parms.bIsGamepadKey = bIsGamepadKey;
	Parms.KeyRebindingSubsystem = KeyRebindingSubsystem;
	Parms.ActionDescWidget = ActionDescWidget;

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

void UKeyRebindingToolsLibrary::GetAllInputActionMappingInfo(TArray<struct FKeyRebindingSettingsInfo>* OutKeyRebindingSettingsInfo, bool bIsGamepadKey, class UKeyRebindingSubsystem* KeyRebindingSubsystem, class UInputActionDescriptionWidget* ActionDescWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KeyRebindingToolsLibrary", "GetAllInputActionMappingInfo");

	Params::UKeyRebindingToolsLibrary_GetAllInputActionMappingInfo_Params Parms{};

	Parms.bIsGamepadKey = bIsGamepadKey;
	Parms.KeyRebindingSubsystem = KeyRebindingSubsystem;
	Parms.ActionDescWidget = ActionDescWidget;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutKeyRebindingSettingsInfo != nullptr)
		*OutKeyRebindingSettingsInfo = Parms.OutKeyRebindingSettingsInfo;

}


// Function KeyRebinding.EnhancedInputSubsystemWithKeyRebinding.RequestRebuildControlMappings
// (BlueprintCosmetic, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FModifyContextOptions       Options                                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// enum class EInputMappingRebuildTypeRebuildType                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEnhancedInputSubsystemWithKeyRebinding::RequestRebuildControlMappings(struct FModifyContextOptions& Options, enum class EInputMappingRebuildType RebuildType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnhancedInputSubsystemWithKeyRebinding", "RequestRebuildControlMappings");

	Params::UEnhancedInputSubsystemWithKeyRebinding_RequestRebuildControlMappings_Params Parms{};

	Parms.Options = Options;
	Parms.RebuildType = RebuildType;

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

void UEnhancedInputSubsystemWithKeyRebinding::RemoveMappingContext(class UInputMappingContext* MappingContext, struct FModifyContextOptions& Options)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnhancedInputSubsystemWithKeyRebinding", "RemoveMappingContext");

	Params::UEnhancedInputSubsystemWithKeyRebinding_RemoveMappingContext_Params Parms{};

	Parms.MappingContext = MappingContext;
	Parms.Options = Options;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function KeyRebinding.EnhancedInputSubsystemWithKeyRebinding.AddMappingContext
// (BlueprintCosmetic, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UInputMappingContext*        MappingContext                                                   (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Priority                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FModifyContextOptions       Options                                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UEnhancedInputSubsystemWithKeyRebinding::AddMappingContext(class UInputMappingContext* MappingContext, int32 Priority, struct FModifyContextOptions& Options)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnhancedInputSubsystemWithKeyRebinding", "AddMappingContext");

	Params::UEnhancedInputSubsystemWithKeyRebinding_AddMappingContext_Params Parms{};

	Parms.MappingContext = MappingContext;
	Parms.Priority = Priority;
	Parms.Options = Options;

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

void UKeyRebindingSubsystem::UnRegisterCompleteKeyRebindingEvent(class FName ActionName, FDelegateProperty_& KeyRebindingCallBackDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KeyRebindingSubsystem", "UnRegisterCompleteKeyRebindingEvent");

	Params::UKeyRebindingSubsystem_UnRegisterCompleteKeyRebindingEvent_Params Parms{};

	Parms.ActionName = ActionName;
	Parms.KeyRebindingCallBackDelegate = KeyRebindingCallBackDelegate;

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

bool UKeyRebindingSubsystem::SetCustomKeyBindingOfAction(class FName ActionName, enum class EKeyRebindingSlot SlotNum, bool bIsUnbindingOperation, struct FInputKeys& InputKeys, bool bIsGamepadKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KeyRebindingSubsystem", "SetCustomKeyBindingOfAction");

	Params::UKeyRebindingSubsystem_SetCustomKeyBindingOfAction_Params Parms{};

	Parms.ActionName = ActionName;
	Parms.SlotNum = SlotNum;
	Parms.bIsUnbindingOperation = bIsUnbindingOperation;
	Parms.InputKeys = InputKeys;
	Parms.bIsGamepadKey = bIsGamepadKey;

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

void UKeyRebindingSubsystem::RegisterCompleteKeyRebindingEvent(class FName ActionName, FDelegateProperty_& KeyRebindingCallBackDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KeyRebindingSubsystem", "RegisterCompleteKeyRebindingEvent");

	Params::UKeyRebindingSubsystem_RegisterCompleteKeyRebindingEvent_Params Parms{};

	Parms.ActionName = ActionName;
	Parms.KeyRebindingCallBackDelegate = KeyRebindingCallBackDelegate;

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
// struct FInputKeys                  ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FInputKeys UKeyRebindingSubsystem::QueryKeysOfActionAndSlot(class FName& ActionName, enum class EKeyRebindingSlot SlotNum, bool bIsGamepadKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KeyRebindingSubsystem", "QueryKeysOfActionAndSlot");

	Params::UKeyRebindingSubsystem_QueryKeysOfActionAndSlot_Params Parms{};

	Parms.ActionName = ActionName;
	Parms.SlotNum = SlotNum;
	Parms.bIsGamepadKey = bIsGamepadKey;

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
// TArray<struct FInputKeys>          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FInputKeys> UKeyRebindingSubsystem::QueryCustomRemappingKeys(class FName& ActionName, bool bIsGamepadKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KeyRebindingSubsystem", "QueryCustomRemappingKeys");

	Params::UKeyRebindingSubsystem_QueryCustomRemappingKeys_Params Parms{};

	Parms.ActionName = ActionName;
	Parms.bIsGamepadKey = bIsGamepadKey;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function KeyRebinding.KeyRebindingSubsystem.GetMappingsWithAction
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        ActionName                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FKeyRebindingMappingsWithActionReturnValue                                                      (Parm, OutParm, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

struct FKeyRebindingMappingsWithAction UKeyRebindingSubsystem::GetMappingsWithAction(class FName ActionName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KeyRebindingSubsystem", "GetMappingsWithAction");

	Params::UKeyRebindingSubsystem_GetMappingsWithAction_Params Parms{};

	Parms.ActionName = ActionName;

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
// TArray<struct FKey>                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FKey> UKeyRebindingSubsystem::GetAllKeysWithActionBound(bool bIsGamepadKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KeyRebindingSubsystem", "GetAllKeysWithActionBound");

	Params::UKeyRebindingSubsystem_GetAllKeysWithActionBound_Params Parms{};

	Parms.bIsGamepadKey = bIsGamepadKey;

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

class FName UKeyRebindingSubsystem::GetActionNameWithAction(class UInputAction* InputAction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KeyRebindingSubsystem", "GetActionNameWithAction");

	Params::UKeyRebindingSubsystem_GetActionNameWithAction_Params Parms{};

	Parms.InputAction = InputAction;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function KeyRebinding.KeyRebindingSubsystem.DoesActionHaveMappingKey
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        ActionName                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsGamepadKey                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UKeyRebindingSubsystem::DoesActionHaveMappingKey(class FName& ActionName, bool bIsGamepadKey)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KeyRebindingSubsystem", "DoesActionHaveMappingKey");

	Params::UKeyRebindingSubsystem_DoesActionHaveMappingKey_Params Parms{};

	Parms.ActionName = ActionName;
	Parms.bIsGamepadKey = bIsGamepadKey;

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
