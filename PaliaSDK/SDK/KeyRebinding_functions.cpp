#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class KeyRebinding.AvailableKeysAsset
// (None)

class UClass* UAvailableKeysAsset::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AvailableKeysAsset");

	return Clss;
}


// AvailableKeysAsset KeyRebinding.Default__AvailableKeysAsset
// (Public, ClassDefaultObject, ArchetypeObject)

class UAvailableKeysAsset* UAvailableKeysAsset::GetDefaultObj()
{
	static class UAvailableKeysAsset* Default = nullptr;

	if (!Default)
		Default = static_cast<UAvailableKeysAsset*>(UAvailableKeysAsset::StaticClass()->DefaultObject);

	return Default;
}


// Class KeyRebinding.BindingKeyListenerWidget
// (None)

class UClass* UBindingKeyListenerWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BindingKeyListenerWidget");

	return Clss;
}


// BindingKeyListenerWidget KeyRebinding.Default__BindingKeyListenerWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UBindingKeyListenerWidget* UBindingKeyListenerWidget::GetDefaultObj()
{
	static class UBindingKeyListenerWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UBindingKeyListenerWidget*>(UBindingKeyListenerWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function KeyRebinding.BindingKeyListenerWidget.OnDeactivated
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UBindingKeyListenerWidget::OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BindingKeyListenerWidget", "OnDeactivated");

	Params::UBindingKeyListenerWidget_OnDeactivated_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class KeyRebinding.CustomKeyRebindingInfo
// (None)

class UClass* UCustomKeyRebindingInfo::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CustomKeyRebindingInfo");

	return Clss;
}


// CustomKeyRebindingInfo KeyRebinding.Default__CustomKeyRebindingInfo
// (Public, ClassDefaultObject, ArchetypeObject)

class UCustomKeyRebindingInfo* UCustomKeyRebindingInfo::GetDefaultObj()
{
	static class UCustomKeyRebindingInfo* Default = nullptr;

	if (!Default)
		Default = static_cast<UCustomKeyRebindingInfo*>(UCustomKeyRebindingInfo::StaticClass()->DefaultObject);

	return Default;
}


// Class KeyRebinding.EnhancedPlayerInputWithKeyRebind
// (None)

class UClass* UEnhancedPlayerInputWithKeyRebind::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnhancedPlayerInputWithKeyRebind");

	return Clss;
}


// EnhancedPlayerInputWithKeyRebind KeyRebinding.Default__EnhancedPlayerInputWithKeyRebind
// (Public, Transactional, ClassDefaultObject, ArchetypeObject)

class UEnhancedPlayerInputWithKeyRebind* UEnhancedPlayerInputWithKeyRebind::GetDefaultObj()
{
	static class UEnhancedPlayerInputWithKeyRebind* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnhancedPlayerInputWithKeyRebind*>(UEnhancedPlayerInputWithKeyRebind::StaticClass()->DefaultObject);

	return Default;
}


// Class KeyRebinding.IARichTextBlockImageDecorator
// (None)

class UClass* UIARichTextBlockImageDecorator::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("IARichTextBlockImageDecorator");

	return Clss;
}


// IARichTextBlockImageDecorator KeyRebinding.Default__IARichTextBlockImageDecorator
// (Public, ClassDefaultObject, ArchetypeObject)

class UIARichTextBlockImageDecorator* UIARichTextBlockImageDecorator::GetDefaultObj()
{
	static class UIARichTextBlockImageDecorator* Default = nullptr;

	if (!Default)
		Default = static_cast<UIARichTextBlockImageDecorator*>(UIARichTextBlockImageDecorator::StaticClass()->DefaultObject);

	return Default;
}


// Class KeyRebinding.InputActionDescriptionWidget
// (None)

class UClass* UInputActionDescriptionWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InputActionDescriptionWidget");

	return Clss;
}


// InputActionDescriptionWidget KeyRebinding.Default__InputActionDescriptionWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UInputActionDescriptionWidget* UInputActionDescriptionWidget::GetDefaultObj()
{
	static class UInputActionDescriptionWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UInputActionDescriptionWidget*>(UInputActionDescriptionWidget::StaticClass()->DefaultObject);

	return Default;
}


// Class KeyRebinding.InputActionGroupLocalization
// (None)

class UClass* UInputActionGroupLocalization::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InputActionGroupLocalization");

	return Clss;
}


// InputActionGroupLocalization KeyRebinding.Default__InputActionGroupLocalization
// (Public, ClassDefaultObject, ArchetypeObject)

class UInputActionGroupLocalization* UInputActionGroupLocalization::GetDefaultObj()
{
	static class UInputActionGroupLocalization* Default = nullptr;

	if (!Default)
		Default = static_cast<UInputActionGroupLocalization*>(UInputActionGroupLocalization::StaticClass()->DefaultObject);

	return Default;
}


// Class KeyRebinding.InputActionLocalization
// (None)

class UClass* UInputActionLocalization::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InputActionLocalization");

	return Clss;
}


// InputActionLocalization KeyRebinding.Default__InputActionLocalization
// (Public, ClassDefaultObject, ArchetypeObject)

class UInputActionLocalization* UInputActionLocalization::GetDefaultObj()
{
	static class UInputActionLocalization* Default = nullptr;

	if (!Default)
		Default = static_cast<UInputActionLocalization*>(UInputActionLocalization::StaticClass()->DefaultObject);

	return Default;
}


// Class KeyRebinding.KeyRebindingDatasetSettings
// (None)

class UClass* UKeyRebindingDatasetSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("KeyRebindingDatasetSettings");

	return Clss;
}


// KeyRebindingDatasetSettings KeyRebinding.Default__KeyRebindingDatasetSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UKeyRebindingDatasetSettings* UKeyRebindingDatasetSettings::GetDefaultObj()
{
	static class UKeyRebindingDatasetSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UKeyRebindingDatasetSettings*>(UKeyRebindingDatasetSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class KeyRebinding.KeyRebindingMappingItemsAsset
// (None)

class UClass* UKeyRebindingMappingItemsAsset::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("KeyRebindingMappingItemsAsset");

	return Clss;
}


// KeyRebindingMappingItemsAsset KeyRebinding.Default__KeyRebindingMappingItemsAsset
// (Public, ClassDefaultObject, ArchetypeObject)

class UKeyRebindingMappingItemsAsset* UKeyRebindingMappingItemsAsset::GetDefaultObj()
{
	static class UKeyRebindingMappingItemsAsset* Default = nullptr;

	if (!Default)
		Default = static_cast<UKeyRebindingMappingItemsAsset*>(UKeyRebindingMappingItemsAsset::StaticClass()->DefaultObject);

	return Default;
}


// Class KeyRebinding.KeyRebindingToolsLibrary
// (None)

class UClass* UKeyRebindingToolsLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("KeyRebindingToolsLibrary");

	return Clss;
}


// KeyRebindingToolsLibrary KeyRebinding.Default__KeyRebindingToolsLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UKeyRebindingToolsLibrary* UKeyRebindingToolsLibrary::GetDefaultObj()
{
	static class UKeyRebindingToolsLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UKeyRebindingToolsLibrary*>(UKeyRebindingToolsLibrary::StaticClass()->DefaultObject);

	return Default;
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


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function KeyRebinding.KeyRebindingToolsLibrary.GetImagesWithInputKeys
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FInputKeys                  InputKeys                                                        (ConstParm, Parm, NativeAccessSpecifierPublic)
// class UInputActionDescriptionWidget*ActionDescWidget                                                 (ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UTexture2D*>          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class UTexture2D*> UKeyRebindingToolsLibrary::GetImagesWithInputKeys(const struct FInputKeys& InputKeys, class UInputActionDescriptionWidget* ActionDescWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KeyRebindingToolsLibrary", "GetImagesWithInputKeys");

	Params::UKeyRebindingToolsLibrary_GetImagesWithInputKeys_Params Parms{};

	Parms.InputKeys = InputKeys;
	Parms.ActionDescWidget = ActionDescWidget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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

struct FKeyRebindingIcons UKeyRebindingToolsLibrary::GetImagesArrayWithActionName(class FName& ActionName, bool bIsGamepadKey, class UKeyRebindingSubsystem* KeyRebindingSubsystem, class UInputActionDescriptionWidget* ActionDescWidget, bool bIsLockedCurrentInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KeyRebindingToolsLibrary", "GetImagesArrayWithActionName");

	Params::UKeyRebindingToolsLibrary_GetImagesArrayWithActionName_Params Parms{};

	Parms.ActionName = ActionName;
	Parms.bIsGamepadKey = bIsGamepadKey;
	Parms.KeyRebindingSubsystem = KeyRebindingSubsystem;
	Parms.ActionDescWidget = ActionDescWidget;
	Parms.bIsLockedCurrentInput = bIsLockedCurrentInput;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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

void UKeyRebindingToolsLibrary::GetAllInputActionMappingInfo(TArray<struct FKeyRebindingSettingsInfo>* OutKeyRebindingSettingsInfo, bool bIsGamepadKey, class UKeyRebindingSubsystem* KeyRebindingSubsystem, class UInputActionDescriptionWidget* ActionDescWidget, bool bIsLockedCurrentInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KeyRebindingToolsLibrary", "GetAllInputActionMappingInfo");

	Params::UKeyRebindingToolsLibrary_GetAllInputActionMappingInfo_Params Parms{};

	Parms.bIsGamepadKey = bIsGamepadKey;
	Parms.KeyRebindingSubsystem = KeyRebindingSubsystem;
	Parms.ActionDescWidget = ActionDescWidget;
	Parms.bIsLockedCurrentInput = bIsLockedCurrentInput;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutKeyRebindingSettingsInfo != nullptr)
		*OutKeyRebindingSettingsInfo = std::move(Parms.OutKeyRebindingSettingsInfo);

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

TArray<struct FInputKeysImages> UKeyRebindingToolsLibrary::GetAllImagesWithAction(class UInputAction* InputAction, class UEnhancedInputSubsystemWithKeyRebinding* EnhancedInputSubsystem, class UInputActionDescriptionWidget* ActionDescWidget, bool bIsGamepadKey, bool bIsLockedCurrentInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KeyRebindingToolsLibrary", "GetAllImagesWithAction");

	Params::UKeyRebindingToolsLibrary_GetAllImagesWithAction_Params Parms{};

	Parms.InputAction = InputAction;
	Parms.EnhancedInputSubsystem = EnhancedInputSubsystem;
	Parms.ActionDescWidget = ActionDescWidget;
	Parms.bIsGamepadKey = bIsGamepadKey;
	Parms.bIsLockedCurrentInput = bIsLockedCurrentInput;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class KeyRebinding.UnAvailableKeysAsset
// (None)

class UClass* UUnAvailableKeysAsset::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UnAvailableKeysAsset");

	return Clss;
}


// UnAvailableKeysAsset KeyRebinding.Default__UnAvailableKeysAsset
// (Public, ClassDefaultObject, ArchetypeObject)

class UUnAvailableKeysAsset* UUnAvailableKeysAsset::GetDefaultObj()
{
	static class UUnAvailableKeysAsset* Default = nullptr;

	if (!Default)
		Default = static_cast<UUnAvailableKeysAsset*>(UUnAvailableKeysAsset::StaticClass()->DefaultObject);

	return Default;
}


// Class KeyRebinding.EnhancedInputSubsystemWithKeyRebinding
// (None)

class UClass* UEnhancedInputSubsystemWithKeyRebinding::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnhancedInputSubsystemWithKeyRebinding");

	return Clss;
}


// EnhancedInputSubsystemWithKeyRebinding KeyRebinding.Default__EnhancedInputSubsystemWithKeyRebinding
// (Public, ClassDefaultObject, ArchetypeObject)

class UEnhancedInputSubsystemWithKeyRebinding* UEnhancedInputSubsystemWithKeyRebinding::GetDefaultObj()
{
	static class UEnhancedInputSubsystemWithKeyRebinding* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnhancedInputSubsystemWithKeyRebinding*>(UEnhancedInputSubsystemWithKeyRebinding::StaticClass()->DefaultObject);

	return Default;
}


// Function KeyRebinding.EnhancedInputSubsystemWithKeyRebinding.UnRegisterDelegateToRefreshKeys
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UInputAction*                InputAction                                                      (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 RefreshKeysDelegate                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEnhancedInputSubsystemWithKeyRebinding::UnRegisterDelegateToRefreshKeys(class UInputAction* InputAction, FDelegateProperty_& RefreshKeysDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnhancedInputSubsystemWithKeyRebinding", "UnRegisterDelegateToRefreshKeys");

	Params::UEnhancedInputSubsystemWithKeyRebinding_UnRegisterDelegateToRefreshKeys_Params Parms{};

	Parms.InputAction = InputAction;
	Parms.RefreshKeysDelegate = RefreshKeysDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function KeyRebinding.EnhancedInputSubsystemWithKeyRebinding.RegisterDelegateToRefreshKeys
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UInputAction*                InputAction                                                      (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 RefreshKeysDelegate                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEnhancedInputSubsystemWithKeyRebinding::RegisterDelegateToRefreshKeys(class UInputAction* InputAction, FDelegateProperty_& RefreshKeysDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnhancedInputSubsystemWithKeyRebinding", "RegisterDelegateToRefreshKeys");

	Params::UEnhancedInputSubsystemWithKeyRebinding_RegisterDelegateToRefreshKeys_Params Parms{};

	Parms.InputAction = InputAction;
	Parms.RefreshKeysDelegate = RefreshKeysDelegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function KeyRebinding.EnhancedInputSubsystemWithKeyRebinding.GetKeysForInputAction
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UInputAction*                InputAction                                                      (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsGamepadKey                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsLockedCurrentInput                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FInputKeys>          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FInputKeys> UEnhancedInputSubsystemWithKeyRebinding::GetKeysForInputAction(class UInputAction* InputAction, bool bIsGamepadKey, bool bIsLockedCurrentInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnhancedInputSubsystemWithKeyRebinding", "GetKeysForInputAction");

	Params::UEnhancedInputSubsystemWithKeyRebinding_GetKeysForInputAction_Params Parms{};

	Parms.InputAction = InputAction;
	Parms.bIsGamepadKey = bIsGamepadKey;
	Parms.bIsLockedCurrentInput = bIsLockedCurrentInput;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

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

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class KeyRebinding.KeyRebindingMappingDataset
// (None)

class UClass* UKeyRebindingMappingDataset::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("KeyRebindingMappingDataset");

	return Clss;
}


// KeyRebindingMappingDataset KeyRebinding.Default__KeyRebindingMappingDataset
// (Public, ClassDefaultObject, ArchetypeObject)

class UKeyRebindingMappingDataset* UKeyRebindingMappingDataset::GetDefaultObj()
{
	static class UKeyRebindingMappingDataset* Default = nullptr;

	if (!Default)
		Default = static_cast<UKeyRebindingMappingDataset*>(UKeyRebindingMappingDataset::StaticClass()->DefaultObject);

	return Default;
}


// Class KeyRebinding.KeyRebindingSubsystem
// (None)

class UClass* UKeyRebindingSubsystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("KeyRebindingSubsystem");

	return Clss;
}


// KeyRebindingSubsystem KeyRebinding.Default__KeyRebindingSubsystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UKeyRebindingSubsystem* UKeyRebindingSubsystem::GetDefaultObj()
{
	static class UKeyRebindingSubsystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UKeyRebindingSubsystem*>(UKeyRebindingSubsystem::StaticClass()->DefaultObject);

	return Default;
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

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function KeyRebinding.KeyRebindingSubsystem.QueryKeysOfActionAndSlot
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        ActionName                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EKeyRebindingSlot       SlotNum                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsGamepadKey                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsLockedCurrentInput                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FInputKeys                  ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FInputKeys UKeyRebindingSubsystem::QueryKeysOfActionAndSlot(class FName& ActionName, enum class EKeyRebindingSlot SlotNum, bool bIsGamepadKey, bool bIsLockedCurrentInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KeyRebindingSubsystem", "QueryKeysOfActionAndSlot");

	Params::UKeyRebindingSubsystem_QueryKeysOfActionAndSlot_Params Parms{};

	Parms.ActionName = ActionName;
	Parms.SlotNum = SlotNum;
	Parms.bIsGamepadKey = bIsGamepadKey;
	Parms.bIsLockedCurrentInput = bIsLockedCurrentInput;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function KeyRebinding.KeyRebindingSubsystem.QueryCustomRemappingKeys
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        ActionName                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsGamepadKey                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsLockedCurrentInput                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FInputKeys>          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FInputKeys> UKeyRebindingSubsystem::QueryCustomRemappingKeys(class FName& ActionName, bool bIsGamepadKey, bool bIsLockedCurrentInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KeyRebindingSubsystem", "QueryCustomRemappingKeys");

	Params::UKeyRebindingSubsystem_QueryCustomRemappingKeys_Params Parms{};

	Parms.ActionName = ActionName;
	Parms.bIsGamepadKey = bIsGamepadKey;
	Parms.bIsLockedCurrentInput = bIsLockedCurrentInput;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function KeyRebinding.KeyRebindingSubsystem.GetAllKeysWithActionBound
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               bIsGamepadKey                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsLockedCurrentInput                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FKey>                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FKey> UKeyRebindingSubsystem::GetAllKeysWithActionBound(bool bIsGamepadKey, bool bIsLockedCurrentInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KeyRebindingSubsystem", "GetAllKeysWithActionBound");

	Params::UKeyRebindingSubsystem_GetAllKeysWithActionBound_Params Parms{};

	Parms.bIsGamepadKey = bIsGamepadKey;
	Parms.bIsLockedCurrentInput = bIsLockedCurrentInput;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


