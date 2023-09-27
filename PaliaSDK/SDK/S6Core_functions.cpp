#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class S6Core.CommandLineHelper
// (None)

class UClass* UCommandLineHelper::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CommandLineHelper");

	return Clss;
}


// CommandLineHelper S6Core.Default__CommandLineHelper
// (Public, ClassDefaultObject, ArchetypeObject)

class UCommandLineHelper* UCommandLineHelper::GetDefaultObj()
{
	static class UCommandLineHelper* Default = nullptr;

	if (!Default)
		Default = static_cast<UCommandLineHelper*>(UCommandLineHelper::StaticClass()->DefaultObject);

	return Default;
}


// Function S6Core.CommandLineHelper.TryGetCommandlineKeyValuePair
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Value                                                            (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCommandLineHelper::TryGetCommandlineKeyValuePair(const class FString& Key, class FString* Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommandLineHelper", "TryGetCommandlineKeyValuePair");

	Params::UCommandLineHelper_TryGetCommandlineKeyValuePair_Params Parms{};

	Parms.Key = Key;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Value != nullptr)
		*Value = std::move(Parms.Value);

	return Parms.ReturnValue;

}


// Function S6Core.CommandLineHelper.DoesCommandlineHaveSwitch
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      SWITCH                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCommandLineHelper::DoesCommandlineHaveSwitch(const class FString& SWITCH)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommandLineHelper", "DoesCommandlineHaveSwitch");

	Params::UCommandLineHelper_DoesCommandlineHaveSwitch_Params Parms{};

	Parms.SWITCH = SWITCH;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class S6Core.GuidDataAsset
// (None)

class UClass* UGuidDataAsset::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GuidDataAsset");

	return Clss;
}


// GuidDataAsset S6Core.Default__GuidDataAsset
// (Public, ClassDefaultObject, ArchetypeObject)

class UGuidDataAsset* UGuidDataAsset::GetDefaultObj()
{
	static class UGuidDataAsset* Default = nullptr;

	if (!Default)
		Default = static_cast<UGuidDataAsset*>(UGuidDataAsset::StaticClass()->DefaultObject);

	return Default;
}


// Class S6Core.S6DataAssetManager
// (None)

class UClass* US6DataAssetManager::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("S6DataAssetManager");

	return Clss;
}


// S6DataAssetManager S6Core.Default__S6DataAssetManager
// (Public, ClassDefaultObject, ArchetypeObject)

class US6DataAssetManager* US6DataAssetManager::GetDefaultObj()
{
	static class US6DataAssetManager* Default = nullptr;

	if (!Default)
		Default = static_cast<US6DataAssetManager*>(US6DataAssetManager::StaticClass()->DefaultObject);

	return Default;
}


// Function S6Core.S6DataAssetManager.GetAllGuidDataAssets
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// TArray<class UGuidDataAsset*>      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class UGuidDataAsset*> US6DataAssetManager::GetAllGuidDataAssets()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6DataAssetManager", "GetAllGuidDataAssets");

	Params::US6DataAssetManager_GetAllGuidDataAssets_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function S6Core.S6DataAssetManager.FindConfigByGuid
// (Final, Native, Public, HasDefaults, BlueprintCallable, Const)
// Parameters:
// struct FGuid                       Guid                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGuidDataAsset*              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UGuidDataAsset* US6DataAssetManager::FindConfigByGuid(const struct FGuid& Guid)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6DataAssetManager", "FindConfigByGuid");

	Params::US6DataAssetManager_FindConfigByGuid_Params Parms{};

	Parms.Guid = Guid;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class S6Core.S6UsesCustomReferenceSerializationInterface
// (None)

class UClass* IS6UsesCustomReferenceSerializationInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("S6UsesCustomReferenceSerializationInterface");

	return Clss;
}


// S6UsesCustomReferenceSerializationInterface S6Core.Default__S6UsesCustomReferenceSerializationInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class IS6UsesCustomReferenceSerializationInterface* IS6UsesCustomReferenceSerializationInterface::GetDefaultObj()
{
	static class IS6UsesCustomReferenceSerializationInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<IS6UsesCustomReferenceSerializationInterface*>(IS6UsesCustomReferenceSerializationInterface::StaticClass()->DefaultObject);

	return Default;
}


// Class S6Core.S6Core_AssetLoader
// (None)

class UClass* US6Core_AssetLoader::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("S6Core_AssetLoader");

	return Clss;
}


// S6Core_AssetLoader S6Core.Default__S6Core_AssetLoader
// (Public, ClassDefaultObject, ArchetypeObject)

class US6Core_AssetLoader* US6Core_AssetLoader::GetDefaultObj()
{
	static class US6Core_AssetLoader* Default = nullptr;

	if (!Default)
		Default = static_cast<US6Core_AssetLoader*>(US6Core_AssetLoader::StaticClass()->DefaultObject);

	return Default;
}


// Class S6Core.S6VersioningFunctionLibrary
// (None)

class UClass* US6VersioningFunctionLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("S6VersioningFunctionLibrary");

	return Clss;
}


// S6VersioningFunctionLibrary S6Core.Default__S6VersioningFunctionLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class US6VersioningFunctionLibrary* US6VersioningFunctionLibrary::GetDefaultObj()
{
	static class US6VersioningFunctionLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<US6VersioningFunctionLibrary*>(US6VersioningFunctionLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function S6Core.S6VersioningFunctionLibrary.IsValidVersionString
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      InVersion                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool US6VersioningFunctionLibrary::IsValidVersionString(const class FString& InVersion)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6VersioningFunctionLibrary", "IsValidVersionString");

	Params::US6VersioningFunctionLibrary_IsValidVersionString_Params Parms{};

	Parms.InVersion = InVersion;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function S6Core.S6VersioningFunctionLibrary.GetVersionString
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString US6VersioningFunctionLibrary::GetVersionString()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6VersioningFunctionLibrary", "GetVersionString");

	Params::US6VersioningFunctionLibrary_GetVersionString_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class S6Core.S6Core_General_BlueprintFunctionLibrary
// (None)

class UClass* US6Core_General_BlueprintFunctionLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("S6Core_General_BlueprintFunctionLibrary");

	return Clss;
}


// S6Core_General_BlueprintFunctionLibrary S6Core.Default__S6Core_General_BlueprintFunctionLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class US6Core_General_BlueprintFunctionLibrary* US6Core_General_BlueprintFunctionLibrary::GetDefaultObj()
{
	static class US6Core_General_BlueprintFunctionLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<US6Core_General_BlueprintFunctionLibrary*>(US6Core_General_BlueprintFunctionLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function S6Core.S6Core_General_BlueprintFunctionLibrary.ToInt64
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      InString                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int64                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int64 US6Core_General_BlueprintFunctionLibrary::ToInt64(const class FString& InString)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6Core_General_BlueprintFunctionLibrary", "ToInt64");

	Params::US6Core_General_BlueprintFunctionLibrary_ToInt64_Params Parms{};

	Parms.InString = InString;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function S6Core.S6Core_General_BlueprintFunctionLibrary.ToggleScreenshotMaskOnCurrentGameViewport
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameInstance*               GameInstance                                                     (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               MaskEnabled                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void US6Core_General_BlueprintFunctionLibrary::ToggleScreenshotMaskOnCurrentGameViewport(class UGameInstance* GameInstance, bool MaskEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6Core_General_BlueprintFunctionLibrary", "ToggleScreenshotMaskOnCurrentGameViewport");

	Params::US6Core_General_BlueprintFunctionLibrary_ToggleScreenshotMaskOnCurrentGameViewport_Params Parms{};

	Parms.GameInstance = GameInstance;
	Parms.MaskEnabled = MaskEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function S6Core.S6Core_General_BlueprintFunctionLibrary.TakeHighResScreenshotOfGameViewport
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameInstance*               GameInstance                                                     (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ImageSize_X                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ImageSize_Y                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ImageResolution                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               UseHDR                                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               MaskBackground                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void US6Core_General_BlueprintFunctionLibrary::TakeHighResScreenshotOfGameViewport(class UGameInstance* GameInstance, int32 ImageSize_X, int32 ImageSize_Y, float ImageResolution, bool UseHDR, bool MaskBackground)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6Core_General_BlueprintFunctionLibrary", "TakeHighResScreenshotOfGameViewport");

	Params::US6Core_General_BlueprintFunctionLibrary_TakeHighResScreenshotOfGameViewport_Params Parms{};

	Parms.GameInstance = GameInstance;
	Parms.ImageSize_X = ImageSize_X;
	Parms.ImageSize_Y = ImageSize_Y;
	Parms.ImageResolution = ImageResolution;
	Parms.UseHDR = UseHDR;
	Parms.MaskBackground = MaskBackground;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function S6Core.S6Core_General_BlueprintFunctionLibrary.ShowSimpleNotification
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      Text                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bErrorMessage                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              WidthOverride                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void US6Core_General_BlueprintFunctionLibrary::ShowSimpleNotification(const class FString& Text, bool bErrorMessage, float WidthOverride)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6Core_General_BlueprintFunctionLibrary", "ShowSimpleNotification");

	Params::US6Core_General_BlueprintFunctionLibrary_ShowSimpleNotification_Params Parms{};

	Parms.Text = Text;
	Parms.bErrorMessage = bErrorMessage;
	Parms.WidthOverride = WidthOverride;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function S6Core.S6Core_General_BlueprintFunctionLibrary.PrintToConsoleWindow
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      Msg                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void US6Core_General_BlueprintFunctionLibrary::PrintToConsoleWindow(const class FString& Msg)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6Core_General_BlueprintFunctionLibrary", "PrintToConsoleWindow");

	Params::US6Core_General_BlueprintFunctionLibrary_PrintToConsoleWindow_Params Parms{};

	Parms.Msg = Msg;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function S6Core.S6Core_General_BlueprintFunctionLibrary.IsStatGroupToggled
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        StatGroupName                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool US6Core_General_BlueprintFunctionLibrary::IsStatGroupToggled(class FName& StatGroupName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6Core_General_BlueprintFunctionLibrary", "IsStatGroupToggled");

	Params::US6Core_General_BlueprintFunctionLibrary_IsStatGroupToggled_Params Parms{};

	Parms.StatGroupName = StatGroupName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function S6Core.S6Core_General_BlueprintFunctionLibrary.HasBegunPlay
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                      InActor                                                          (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool US6Core_General_BlueprintFunctionLibrary::HasBegunPlay(class AActor* InActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6Core_General_BlueprintFunctionLibrary", "HasBegunPlay");

	Params::US6Core_General_BlueprintFunctionLibrary_HasBegunPlay_Params Parms{};

	Parms.InActor = InActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function S6Core.S6Core_General_BlueprintFunctionLibrary.GetStatDataFromName
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        StatName                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FS6Core_StatData            ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FS6Core_StatData US6Core_General_BlueprintFunctionLibrary::GetStatDataFromName(class FName& StatName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6Core_General_BlueprintFunctionLibrary", "GetStatDataFromName");

	Params::US6Core_General_BlueprintFunctionLibrary_GetStatDataFromName_Params Parms{};

	Parms.StatName = StatName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function S6Core.S6Core_General_BlueprintFunctionLibrary.GetLocalPlayerFromController
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class APlayerController*           Controller                                                       (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ULocalPlayer*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULocalPlayer* US6Core_General_BlueprintFunctionLibrary::GetLocalPlayerFromController(class APlayerController* Controller)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6Core_General_BlueprintFunctionLibrary", "GetLocalPlayerFromController");

	Params::US6Core_General_BlueprintFunctionLibrary_GetLocalPlayerFromController_Params Parms{};

	Parms.Controller = Controller;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function S6Core.S6Core_General_BlueprintFunctionLibrary.GetCurrentMapName
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FName US6Core_General_BlueprintFunctionLibrary::GetCurrentMapName(class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6Core_General_BlueprintFunctionLibrary", "GetCurrentMapName");

	Params::US6Core_General_BlueprintFunctionLibrary_GetCurrentMapName_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function S6Core.S6Core_General_BlueprintFunctionLibrary.GetCurrentDrawCalls
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 US6Core_General_BlueprintFunctionLibrary::GetCurrentDrawCalls()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6Core_General_BlueprintFunctionLibrary", "GetCurrentDrawCalls");

	Params::US6Core_General_BlueprintFunctionLibrary_GetCurrentDrawCalls_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function S6Core.S6Core_General_BlueprintFunctionLibrary.GetComponentByInterface
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                      InActor                                                          (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class IInterface>      Interface                                                        (ConstParm, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActorComponent*             ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UActorComponent* US6Core_General_BlueprintFunctionLibrary::GetComponentByInterface(class AActor* InActor, TSubclassOf<class IInterface> Interface)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6Core_General_BlueprintFunctionLibrary", "GetComponentByInterface");

	Params::US6Core_General_BlueprintFunctionLibrary_GetComponentByInterface_Params Parms{};

	Parms.InActor = InActor;
	Parms.Interface = Interface;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function S6Core.S6Core_General_BlueprintFunctionLibrary.GetAllStatDataForStatGroup
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        StatGroupName                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TMap<class FName, struct FS6Core_StatData>ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

TMap<class FName, struct FS6Core_StatData> US6Core_General_BlueprintFunctionLibrary::GetAllStatDataForStatGroup(class FName& StatGroupName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6Core_General_BlueprintFunctionLibrary", "GetAllStatDataForStatGroup");

	Params::US6Core_General_BlueprintFunctionLibrary_GetAllStatDataForStatGroup_Params Parms{};

	Parms.StatGroupName = StatGroupName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function S6Core.S6Core_General_BlueprintFunctionLibrary.GetAllKnownPlayerPawns
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class ULocalPlayer*                LocalPlayer                                                      (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TMap<struct FUniqueNetIdRepl, class APawn*>PlayerPawns                                                      (Parm, OutParm, NativeAccessSpecifierPublic)
// bool                               bIncludeLocalPawn                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void US6Core_General_BlueprintFunctionLibrary::GetAllKnownPlayerPawns(class ULocalPlayer* LocalPlayer, TMap<struct FUniqueNetIdRepl, class APawn*>* PlayerPawns, bool bIncludeLocalPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6Core_General_BlueprintFunctionLibrary", "GetAllKnownPlayerPawns");

	Params::US6Core_General_BlueprintFunctionLibrary_GetAllKnownPlayerPawns_Params Parms{};

	Parms.LocalPlayer = LocalPlayer;
	Parms.bIncludeLocalPawn = bIncludeLocalPawn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PlayerPawns != nullptr)
		*PlayerPawns = Parms.PlayerPawns;

}


// Function S6Core.S6Core_General_BlueprintFunctionLibrary.GetActorBounds
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// TSubclassOf<class AActor>          InActorClass                                                     (ConstParm, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bOnlyCollidingComponents                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBox                        OutBounds                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void US6Core_General_BlueprintFunctionLibrary::GetActorBounds(TSubclassOf<class AActor> InActorClass, bool bOnlyCollidingComponents, struct FBox* OutBounds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6Core_General_BlueprintFunctionLibrary", "GetActorBounds");

	Params::US6Core_General_BlueprintFunctionLibrary_GetActorBounds_Params Parms{};

	Parms.InActorClass = InActorClass;
	Parms.bOnlyCollidingComponents = bOnlyCollidingComponents;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutBounds != nullptr)
		*OutBounds = std::move(Parms.OutBounds);

}


// Function S6Core.S6Core_General_BlueprintFunctionLibrary.FindDefaultComponentsByClass
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TSubclassOf<class AActor>          InActorClass                                                     (ConstParm, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class UActorComponent> InComponentClass                                                 (ConstParm, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UActorComponent*>     ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

TArray<class UActorComponent*> US6Core_General_BlueprintFunctionLibrary::FindDefaultComponentsByClass(TSubclassOf<class AActor> InActorClass, TSubclassOf<class UActorComponent> InComponentClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6Core_General_BlueprintFunctionLibrary", "FindDefaultComponentsByClass");

	Params::US6Core_General_BlueprintFunctionLibrary_FindDefaultComponentsByClass_Params Parms{};

	Parms.InActorClass = InActorClass;
	Parms.InComponentClass = InComponentClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function S6Core.S6Core_General_BlueprintFunctionLibrary.FindDefaultComponentByClass
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TSubclassOf<class AActor>          InActorClass                                                     (ConstParm, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class UActorComponent> InComponentClass                                                 (ConstParm, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActorComponent*             ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UActorComponent* US6Core_General_BlueprintFunctionLibrary::FindDefaultComponentByClass(TSubclassOf<class AActor> InActorClass, TSubclassOf<class UActorComponent> InComponentClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6Core_General_BlueprintFunctionLibrary", "FindDefaultComponentByClass");

	Params::US6Core_General_BlueprintFunctionLibrary_FindDefaultComponentByClass_Params Parms{};

	Parms.InActorClass = InActorClass;
	Parms.InComponentClass = InComponentClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function S6Core.S6Core_General_BlueprintFunctionLibrary.DoesFunctionExist
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     Instance                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        FunctionName                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool US6Core_General_BlueprintFunctionLibrary::DoesFunctionExist(class UObject* Instance, class FName& FunctionName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6Core_General_BlueprintFunctionLibrary", "DoesFunctionExist");

	Params::US6Core_General_BlueprintFunctionLibrary_DoesFunctionExist_Params Parms{};

	Parms.Instance = Instance;
	Parms.FunctionName = FunctionName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function S6Core.S6Core_General_BlueprintFunctionLibrary.DeleteFileAtPath
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      FilePath                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool US6Core_General_BlueprintFunctionLibrary::DeleteFileAtPath(const class FString& FilePath)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6Core_General_BlueprintFunctionLibrary", "DeleteFileAtPath");

	Params::US6Core_General_BlueprintFunctionLibrary_DeleteFileAtPath_Params Parms{};

	Parms.FilePath = FilePath;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class S6Core.S6Core_AsyncAction_LevelTravel
// (None)

class UClass* US6Core_AsyncAction_LevelTravel::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("S6Core_AsyncAction_LevelTravel");

	return Clss;
}


// S6Core_AsyncAction_LevelTravel S6Core.Default__S6Core_AsyncAction_LevelTravel
// (Public, ClassDefaultObject, ArchetypeObject)

class US6Core_AsyncAction_LevelTravel* US6Core_AsyncAction_LevelTravel::GetDefaultObj()
{
	static class US6Core_AsyncAction_LevelTravel* Default = nullptr;

	if (!Default)
		Default = static_cast<US6Core_AsyncAction_LevelTravel*>(US6Core_AsyncAction_LevelTravel::StaticClass()->DefaultObject);

	return Default;
}


// DelegateFunction S6Core.S6Core_AsyncAction_LevelTravel.OnLevelTravelComplete__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:

void US6Core_AsyncAction_LevelTravel::OnLevelTravelComplete__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6Core_AsyncAction_LevelTravel", "OnLevelTravelComplete__DelegateSignature");

	Params::US6Core_AsyncAction_LevelTravel_OnLevelTravelComplete__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function S6Core.S6Core_AsyncAction_LevelTravel.LevelTravel
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      LevelName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     InWorldContextObject                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class US6Core_AsyncAction_LevelTravel*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class US6Core_AsyncAction_LevelTravel* US6Core_AsyncAction_LevelTravel::LevelTravel(const class FString& LevelName, class UObject* InWorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6Core_AsyncAction_LevelTravel", "LevelTravel");

	Params::US6Core_AsyncAction_LevelTravel_LevelTravel_Params Parms{};

	Parms.LevelName = LevelName;
	Parms.InWorldContextObject = InWorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class S6Core.S6Core_AsyncAction_LoadSublevel
// (None)

class UClass* US6Core_AsyncAction_LoadSublevel::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("S6Core_AsyncAction_LoadSublevel");

	return Clss;
}


// S6Core_AsyncAction_LoadSublevel S6Core.Default__S6Core_AsyncAction_LoadSublevel
// (Public, ClassDefaultObject, ArchetypeObject)

class US6Core_AsyncAction_LoadSublevel* US6Core_AsyncAction_LoadSublevel::GetDefaultObj()
{
	static class US6Core_AsyncAction_LoadSublevel* Default = nullptr;

	if (!Default)
		Default = static_cast<US6Core_AsyncAction_LoadSublevel*>(US6Core_AsyncAction_LoadSublevel::StaticClass()->DefaultObject);

	return Default;
}


// DelegateFunction S6Core.S6Core_AsyncAction_LoadSublevel.OnSublevelActionCompleted__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:

void US6Core_AsyncAction_LoadSublevel::OnSublevelActionCompleted__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6Core_AsyncAction_LoadSublevel", "OnSublevelActionCompleted__DelegateSignature");

	Params::US6Core_AsyncAction_LoadSublevel_OnSublevelActionCompleted__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function S6Core.S6Core_AsyncAction_LoadSublevel.LoadSublevel
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      InLevelName                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     InWorldContextObject                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bInShouldBeVisible                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class US6Core_AsyncAction_LoadSublevel*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class US6Core_AsyncAction_LoadSublevel* US6Core_AsyncAction_LoadSublevel::LoadSublevel(const class FString& InLevelName, class UObject* InWorldContextObject, bool bInShouldBeVisible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6Core_AsyncAction_LoadSublevel", "LoadSublevel");

	Params::US6Core_AsyncAction_LoadSublevel_LoadSublevel_Params Parms{};

	Parms.InLevelName = InLevelName;
	Parms.InWorldContextObject = InWorldContextObject;
	Parms.bInShouldBeVisible = bInShouldBeVisible;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function S6Core.S6Core_AsyncAction_LoadSublevel.HandleOnLevelLoaded
// (Final, Native, Private)
// Parameters:

void US6Core_AsyncAction_LoadSublevel::HandleOnLevelLoaded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6Core_AsyncAction_LoadSublevel", "HandleOnLevelLoaded");

	Params::US6Core_AsyncAction_LoadSublevel_HandleOnLevelLoaded_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class S6Core.S6PlatformUtils
// (None)

class UClass* US6PlatformUtils::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("S6PlatformUtils");

	return Clss;
}


// S6PlatformUtils S6Core.Default__S6PlatformUtils
// (Public, ClassDefaultObject, ArchetypeObject)

class US6PlatformUtils* US6PlatformUtils::GetDefaultObj()
{
	static class US6PlatformUtils* Default = nullptr;

	if (!Default)
		Default = static_cast<US6PlatformUtils*>(US6PlatformUtils::StaticClass()->DefaultObject);

	return Default;
}


// Function S6Core.S6PlatformUtils.IsMobile
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool US6PlatformUtils::IsMobile()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6PlatformUtils", "IsMobile");

	Params::US6PlatformUtils_IsMobile_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function S6Core.S6PlatformUtils.IsDesktop
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool US6PlatformUtils::IsDesktop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6PlatformUtils", "IsDesktop");

	Params::US6PlatformUtils_IsDesktop_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function S6Core.S6PlatformUtils.IsConsole
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool US6PlatformUtils::IsConsole()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6PlatformUtils", "IsConsole");

	Params::US6PlatformUtils_IsConsole_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function S6Core.S6PlatformUtils.GetPlatformType
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class ERedirectsPlatform      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ERedirectsPlatform US6PlatformUtils::GetPlatformType()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6PlatformUtils", "GetPlatformType");

	Params::US6PlatformUtils_GetPlatformType_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function S6Core.S6PlatformUtils.GetEnvironment
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString US6PlatformUtils::GetEnvironment()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6PlatformUtils", "GetEnvironment");

	Params::US6PlatformUtils_GetEnvironment_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class S6Core.S6ServerMetrics
// (None)

class UClass* US6ServerMetrics::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("S6ServerMetrics");

	return Clss;
}


// S6ServerMetrics S6Core.Default__S6ServerMetrics
// (Public, ClassDefaultObject, ArchetypeObject)

class US6ServerMetrics* US6ServerMetrics::GetDefaultObj()
{
	static class US6ServerMetrics* Default = nullptr;

	if (!Default)
		Default = static_cast<US6ServerMetrics*>(US6ServerMetrics::StaticClass()->DefaultObject);

	return Default;
}


// Class S6Core.S6TokenProviderConfiguration
// (None)

class UClass* US6TokenProviderConfiguration::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("S6TokenProviderConfiguration");

	return Clss;
}


// S6TokenProviderConfiguration S6Core.Default__S6TokenProviderConfiguration
// (Public, ClassDefaultObject, ArchetypeObject)

class US6TokenProviderConfiguration* US6TokenProviderConfiguration::GetDefaultObj()
{
	static class US6TokenProviderConfiguration* Default = nullptr;

	if (!Default)
		Default = static_cast<US6TokenProviderConfiguration*>(US6TokenProviderConfiguration::StaticClass()->DefaultObject);

	return Default;
}


// Class S6Core.S6TokenProvider
// (None)

class UClass* US6TokenProvider::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("S6TokenProvider");

	return Clss;
}


// S6TokenProvider S6Core.Default__S6TokenProvider
// (Public, ClassDefaultObject, ArchetypeObject)

class US6TokenProvider* US6TokenProvider::GetDefaultObj()
{
	static class US6TokenProvider* Default = nullptr;

	if (!Default)
		Default = static_cast<US6TokenProvider*>(US6TokenProvider::StaticClass()->DefaultObject);

	return Default;
}


// DelegateFunction S6Core.S6TokenProvider.OnTokenReady__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:

void US6TokenProvider::OnTokenReady__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6TokenProvider", "OnTokenReady__DelegateSignature");

	Params::US6TokenProvider_OnTokenReady__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function S6Core.S6TokenProvider.IsTokenValid
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool US6TokenProvider::IsTokenValid()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6TokenProvider", "IsTokenValid");

	Params::US6TokenProvider_IsTokenValid_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function S6Core.S6TokenProvider.IsReady
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool US6TokenProvider::IsReady()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6TokenProvider", "IsReady");

	Params::US6TokenProvider_IsReady_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function S6Core.S6TokenProvider.GetToken
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString US6TokenProvider::GetToken()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6TokenProvider", "GetToken");

	Params::US6TokenProvider_GetToken_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function S6Core.S6TokenProvider.FetchToken
// (Final, Native, Public)
// Parameters:

void US6TokenProvider::FetchToken()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6TokenProvider", "FetchToken");

	Params::US6TokenProvider_FetchToken_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class S6Core.S6WorldPartitionStreamer
// (Actor)

class UClass* AS6WorldPartitionStreamer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("S6WorldPartitionStreamer");

	return Clss;
}


// S6WorldPartitionStreamer S6Core.Default__S6WorldPartitionStreamer
// (Public, ClassDefaultObject, ArchetypeObject)

class AS6WorldPartitionStreamer* AS6WorldPartitionStreamer::GetDefaultObj()
{
	static class AS6WorldPartitionStreamer* Default = nullptr;

	if (!Default)
		Default = static_cast<AS6WorldPartitionStreamer*>(AS6WorldPartitionStreamer::StaticClass()->DefaultObject);

	return Default;
}


// Function S6Core.S6WorldPartitionStreamer.HasAreaLoaded
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AS6WorldPartitionStreamer::HasAreaLoaded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6WorldPartitionStreamer", "HasAreaLoaded");

	Params::AS6WorldPartitionStreamer_HasAreaLoaded_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function S6Core.S6WorldPartitionStreamer.CheckForAreaLoaded
// (Final, Native, Protected)
// Parameters:

void AS6WorldPartitionStreamer::CheckForAreaLoaded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6WorldPartitionStreamer", "CheckForAreaLoaded");

	Params::AS6WorldPartitionStreamer_CheckForAreaLoaded_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


