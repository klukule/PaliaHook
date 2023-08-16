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


// Function S6Core.CommandLineHelper.TryGetCommandlineKeyValuePair
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      Key                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Value                                                            (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCommandLineHelper::TryGetCommandlineKeyValuePair(const class FString& InKey, class FString* InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommandLineHelper", "TryGetCommandlineKeyValuePair");

	Params::UCommandLineHelper_TryGetCommandlineKeyValuePair_Params Parms{};

	Parms.Key = InKey;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (InValue != nullptr)
		*InValue = Parms.Value;

	return Parms.ReturnValue;

}


// Function S6Core.CommandLineHelper.DoesCommandlineHaveSwitch
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      SWITCH                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCommandLineHelper::DoesCommandlineHaveSwitch(const class FString& InSWITCH)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CommandLineHelper", "DoesCommandlineHaveSwitch");

	Params::UCommandLineHelper_DoesCommandlineHaveSwitch_Params Parms{};

	Parms.SWITCH = InSWITCH;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

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


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function S6Core.S6DataAssetManager.FindConfigByGuid
// (Final, Native, Public, HasDefaults, BlueprintCallable, Const)
// Parameters:
// struct FGuid                       Guid                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGuidDataAsset*              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UGuidDataAsset* US6DataAssetManager::FindConfigByGuid(const struct FGuid& InGuid)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6DataAssetManager", "FindConfigByGuid");

	Params::US6DataAssetManager_FindConfigByGuid_Params Parms{};

	Parms.Guid = InGuid;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function S6Core.S6VersioningFunctionLibrary.IsValidVersionString
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      InVersion                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool US6VersioningFunctionLibrary::IsValidVersionString(const class FString& InInVersion)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6VersioningFunctionLibrary", "IsValidVersionString");

	Params::US6VersioningFunctionLibrary_IsValidVersionString_Params Parms{};

	Parms.InVersion = InInVersion;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

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


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function S6Core.S6Core_General_BlueprintFunctionLibrary.ToInt64
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      InString                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int64                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int64 US6Core_General_BlueprintFunctionLibrary::ToInt64(const class FString& InInString)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6Core_General_BlueprintFunctionLibrary", "ToInt64");

	Params::US6Core_General_BlueprintFunctionLibrary_ToInt64_Params Parms{};

	Parms.InString = InInString;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function S6Core.S6Core_General_BlueprintFunctionLibrary.ToggleScreenshotMaskOnCurrentGameViewport
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameInstance*               GameInstance                                                     (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               MaskEnabled                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void US6Core_General_BlueprintFunctionLibrary::ToggleScreenshotMaskOnCurrentGameViewport(class UGameInstance* InGameInstance, bool InMaskEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6Core_General_BlueprintFunctionLibrary", "ToggleScreenshotMaskOnCurrentGameViewport");

	Params::US6Core_General_BlueprintFunctionLibrary_ToggleScreenshotMaskOnCurrentGameViewport_Params Parms{};

	Parms.GameInstance = InGameInstance;
	Parms.MaskEnabled = InMaskEnabled;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

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

void US6Core_General_BlueprintFunctionLibrary::TakeHighResScreenshotOfGameViewport(class UGameInstance* InGameInstance, int32 InImageSize_X, int32 InImageSize_Y, float InImageResolution, bool InUseHDR, bool InMaskBackground)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6Core_General_BlueprintFunctionLibrary", "TakeHighResScreenshotOfGameViewport");

	Params::US6Core_General_BlueprintFunctionLibrary_TakeHighResScreenshotOfGameViewport_Params Parms{};

	Parms.GameInstance = InGameInstance;
	Parms.ImageSize_X = InImageSize_X;
	Parms.ImageSize_Y = InImageSize_Y;
	Parms.ImageResolution = InImageResolution;
	Parms.UseHDR = InUseHDR;
	Parms.MaskBackground = InMaskBackground;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function S6Core.S6Core_General_BlueprintFunctionLibrary.ShowSimpleNotification
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      Text                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bErrorMessage                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              WidthOverride                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void US6Core_General_BlueprintFunctionLibrary::ShowSimpleNotification(const class FString& InText, bool InbErrorMessage, float InWidthOverride)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6Core_General_BlueprintFunctionLibrary", "ShowSimpleNotification");

	Params::US6Core_General_BlueprintFunctionLibrary_ShowSimpleNotification_Params Parms{};

	Parms.Text = InText;
	Parms.bErrorMessage = InbErrorMessage;
	Parms.WidthOverride = InWidthOverride;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function S6Core.S6Core_General_BlueprintFunctionLibrary.PrintToConsoleWindow
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      Msg                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void US6Core_General_BlueprintFunctionLibrary::PrintToConsoleWindow(const class FString& InMsg)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6Core_General_BlueprintFunctionLibrary", "PrintToConsoleWindow");

	Params::US6Core_General_BlueprintFunctionLibrary_PrintToConsoleWindow_Params Parms{};

	Parms.Msg = InMsg;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function S6Core.S6Core_General_BlueprintFunctionLibrary.IsStatGroupToggled
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        StatGroupName                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool US6Core_General_BlueprintFunctionLibrary::IsStatGroupToggled(class FName& InStatGroupName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6Core_General_BlueprintFunctionLibrary", "IsStatGroupToggled");

	Params::US6Core_General_BlueprintFunctionLibrary_IsStatGroupToggled_Params Parms{};

	Parms.StatGroupName = InStatGroupName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function S6Core.S6Core_General_BlueprintFunctionLibrary.HasBegunPlay
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                      InActor                                                          (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool US6Core_General_BlueprintFunctionLibrary::HasBegunPlay(class AActor* InInActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6Core_General_BlueprintFunctionLibrary", "HasBegunPlay");

	Params::US6Core_General_BlueprintFunctionLibrary_HasBegunPlay_Params Parms{};

	Parms.InActor = InInActor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function S6Core.S6Core_General_BlueprintFunctionLibrary.GetStatDataFromName
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        StatName                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FS6Core_StatData            ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FS6Core_StatData US6Core_General_BlueprintFunctionLibrary::GetStatDataFromName(class FName& InStatName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6Core_General_BlueprintFunctionLibrary", "GetStatDataFromName");

	Params::US6Core_General_BlueprintFunctionLibrary_GetStatDataFromName_Params Parms{};

	Parms.StatName = InStatName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function S6Core.S6Core_General_BlueprintFunctionLibrary.GetLocalPlayerFromController
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class APlayerController*           Controller                                                       (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ULocalPlayer*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULocalPlayer* US6Core_General_BlueprintFunctionLibrary::GetLocalPlayerFromController(class APlayerController* InController)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6Core_General_BlueprintFunctionLibrary", "GetLocalPlayerFromController");

	Params::US6Core_General_BlueprintFunctionLibrary_GetLocalPlayerFromController_Params Parms{};

	Parms.Controller = InController;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function S6Core.S6Core_General_BlueprintFunctionLibrary.GetCurrentMapName
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FName US6Core_General_BlueprintFunctionLibrary::GetCurrentMapName(class UObject* InWorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6Core_General_BlueprintFunctionLibrary", "GetCurrentMapName");

	Params::US6Core_General_BlueprintFunctionLibrary_GetCurrentMapName_Params Parms{};

	Parms.WorldContextObject = InWorldContextObject;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

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


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function S6Core.S6Core_General_BlueprintFunctionLibrary.GetComponentByInterface
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                      InActor                                                          (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class IInterface>      Interface                                                        (ConstParm, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActorComponent*             ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UActorComponent* US6Core_General_BlueprintFunctionLibrary::GetComponentByInterface(class AActor* InInActor, TSubclassOf<class IInterface> InInterface)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6Core_General_BlueprintFunctionLibrary", "GetComponentByInterface");

	Params::US6Core_General_BlueprintFunctionLibrary_GetComponentByInterface_Params Parms{};

	Parms.InActor = InInActor;
	Parms.Interface = InInterface;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function S6Core.S6Core_General_BlueprintFunctionLibrary.GetAllStatDataForStatGroup
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FName                        StatGroupName                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TMap<class FName, struct FS6Core_StatData>ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

TMap<class FName, struct FS6Core_StatData> US6Core_General_BlueprintFunctionLibrary::GetAllStatDataForStatGroup(class FName& InStatGroupName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6Core_General_BlueprintFunctionLibrary", "GetAllStatDataForStatGroup");

	Params::US6Core_General_BlueprintFunctionLibrary_GetAllStatDataForStatGroup_Params Parms{};

	Parms.StatGroupName = InStatGroupName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function S6Core.S6Core_General_BlueprintFunctionLibrary.GetActorBounds
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// TSubclassOf<class AActor>          InActorClass                                                     (ConstParm, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bOnlyCollidingComponents                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBox                        OutBounds                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void US6Core_General_BlueprintFunctionLibrary::GetActorBounds(TSubclassOf<class AActor> InInActorClass, bool InbOnlyCollidingComponents, struct FBox* InOutBounds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6Core_General_BlueprintFunctionLibrary", "GetActorBounds");

	Params::US6Core_General_BlueprintFunctionLibrary_GetActorBounds_Params Parms{};

	Parms.InActorClass = InInActorClass;
	Parms.bOnlyCollidingComponents = InbOnlyCollidingComponents;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (InOutBounds != nullptr)
		*InOutBounds = Parms.OutBounds;

}


// Function S6Core.S6Core_General_BlueprintFunctionLibrary.FindDefaultComponentsByClass
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TSubclassOf<class AActor>          InActorClass                                                     (ConstParm, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class UActorComponent> InComponentClass                                                 (ConstParm, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UActorComponent*>     ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

TArray<class UActorComponent*> US6Core_General_BlueprintFunctionLibrary::FindDefaultComponentsByClass(TSubclassOf<class AActor> InInActorClass, TSubclassOf<class UActorComponent> InInComponentClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6Core_General_BlueprintFunctionLibrary", "FindDefaultComponentsByClass");

	Params::US6Core_General_BlueprintFunctionLibrary_FindDefaultComponentsByClass_Params Parms{};

	Parms.InActorClass = InInActorClass;
	Parms.InComponentClass = InInComponentClass;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function S6Core.S6Core_General_BlueprintFunctionLibrary.FindDefaultComponentByClass
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TSubclassOf<class AActor>          InActorClass                                                     (ConstParm, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class UActorComponent> InComponentClass                                                 (ConstParm, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActorComponent*             ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UActorComponent* US6Core_General_BlueprintFunctionLibrary::FindDefaultComponentByClass(TSubclassOf<class AActor> InInActorClass, TSubclassOf<class UActorComponent> InInComponentClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6Core_General_BlueprintFunctionLibrary", "FindDefaultComponentByClass");

	Params::US6Core_General_BlueprintFunctionLibrary_FindDefaultComponentByClass_Params Parms{};

	Parms.InActorClass = InInActorClass;
	Parms.InComponentClass = InInComponentClass;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function S6Core.S6Core_General_BlueprintFunctionLibrary.DoesFunctionExist
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     Instance                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        FunctionName                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool US6Core_General_BlueprintFunctionLibrary::DoesFunctionExist(class UObject* InInstance, class FName& InFunctionName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6Core_General_BlueprintFunctionLibrary", "DoesFunctionExist");

	Params::US6Core_General_BlueprintFunctionLibrary_DoesFunctionExist_Params Parms{};

	Parms.Instance = InInstance;
	Parms.FunctionName = InFunctionName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function S6Core.S6Core_General_BlueprintFunctionLibrary.DeleteFileAtPath
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      FilePath                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool US6Core_General_BlueprintFunctionLibrary::DeleteFileAtPath(const class FString& InFilePath)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6Core_General_BlueprintFunctionLibrary", "DeleteFileAtPath");

	Params::US6Core_General_BlueprintFunctionLibrary_DeleteFileAtPath_Params Parms{};

	Parms.FilePath = InFilePath;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

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

class US6Core_AsyncAction_LevelTravel* US6Core_AsyncAction_LevelTravel::LevelTravel(const class FString& InLevelName, class UObject* InInWorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6Core_AsyncAction_LevelTravel", "LevelTravel");

	Params::US6Core_AsyncAction_LevelTravel_LevelTravel_Params Parms{};

	Parms.LevelName = InLevelName;
	Parms.InWorldContextObject = InInWorldContextObject;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

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

class US6Core_AsyncAction_LoadSublevel* US6Core_AsyncAction_LoadSublevel::LoadSublevel(const class FString& InInLevelName, class UObject* InInWorldContextObject, bool InbInShouldBeVisible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("S6Core_AsyncAction_LoadSublevel", "LoadSublevel");

	Params::US6Core_AsyncAction_LoadSublevel_LoadSublevel_Params Parms{};

	Parms.InLevelName = InInLevelName;
	Parms.InWorldContextObject = InInWorldContextObject;
	Parms.bInShouldBeVisible = InbInShouldBeVisible;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

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


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

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


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

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


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

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


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

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


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

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


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

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


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

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


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

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


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

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


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

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


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
