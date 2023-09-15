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

// 0x28 (0x28 - 0x0)
// Function S6Core.CommandLineHelper.TryGetCommandlineKeyValuePair
struct UCommandLineHelper_TryGetCommandlineKeyValuePair_Params
{
public:
	class FString                                Key;                                               // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Value;                                             // 0x10(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_99A[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function S6Core.CommandLineHelper.DoesCommandlineHaveSwitch
struct UCommandLineHelper_DoesCommandlineHaveSwitch_Params
{
public:
	class FString                                SWITCH;                                            // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_99B[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function S6Core.S6DataAssetManager.GetAllGuidDataAssets
struct US6DataAssetManager_GetAllGuidDataAssets_Params
{
public:
	TArray<class UGuidDataAsset*>                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function S6Core.S6DataAssetManager.FindConfigByGuid
struct US6DataAssetManager_FindConfigByGuid_Params
{
public:
	struct FGuid                                 Guid;                                              // 0x0(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGuidDataAsset*                        ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function S6Core.S6VersioningFunctionLibrary.IsValidVersionString
struct US6VersioningFunctionLibrary_IsValidVersionString_Params
{
public:
	class FString                                InVersion;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9A6[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function S6Core.S6VersioningFunctionLibrary.GetVersionString
struct US6VersioningFunctionLibrary_GetVersionString_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function S6Core.S6Core_General_BlueprintFunctionLibrary.ToInt64
struct US6Core_General_BlueprintFunctionLibrary_ToInt64_Params
{
public:
	class FString                                InString;                                          // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                        ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function S6Core.S6Core_General_BlueprintFunctionLibrary.ToggleScreenshotMaskOnCurrentGameViewport
struct US6Core_General_BlueprintFunctionLibrary_ToggleScreenshotMaskOnCurrentGameViewport_Params
{
public:
	class UGameInstance*                         GameInstance;                                      // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         MaskEnabled;                                       // 0x8(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9B1[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function S6Core.S6Core_General_BlueprintFunctionLibrary.TakeHighResScreenshotOfGameViewport
struct US6Core_General_BlueprintFunctionLibrary_TakeHighResScreenshotOfGameViewport_Params
{
public:
	class UGameInstance*                         GameInstance;                                      // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ImageSize_X;                                       // 0x8(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ImageSize_Y;                                       // 0xC(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ImageResolution;                                   // 0x10(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         UseHDR;                                            // 0x14(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         MaskBackground;                                    // 0x15(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9B7[0x2];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function S6Core.S6Core_General_BlueprintFunctionLibrary.ShowSimpleNotification
struct US6Core_General_BlueprintFunctionLibrary_ShowSimpleNotification_Params
{
public:
	class FString                                Text;                                              // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bErrorMessage;                                     // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9BD[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        WidthOverride;                                     // 0x14(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function S6Core.S6Core_General_BlueprintFunctionLibrary.PrintToConsoleWindow
struct US6Core_General_BlueprintFunctionLibrary_PrintToConsoleWindow_Params
{
public:
	class FString                                Msg;                                               // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function S6Core.S6Core_General_BlueprintFunctionLibrary.IsStatGroupToggled
struct US6Core_General_BlueprintFunctionLibrary_IsStatGroupToggled_Params
{
public:
	class FName                                  StatGroupName;                                     // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9C0[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function S6Core.S6Core_General_BlueprintFunctionLibrary.HasBegunPlay
struct US6Core_General_BlueprintFunctionLibrary_HasBegunPlay_Params
{
public:
	class AActor*                                InActor;                                           // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9C4[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x14 (0x14 - 0x0)
// Function S6Core.S6Core_General_BlueprintFunctionLibrary.GetStatDataFromName
struct US6Core_General_BlueprintFunctionLibrary_GetStatDataFromName_Params
{
public:
	class FName                                  StatName;                                          // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FS6Core_StatData                      ReturnValue;                                       // 0x8(0xC)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function S6Core.S6Core_General_BlueprintFunctionLibrary.GetLocalPlayerFromController
struct US6Core_General_BlueprintFunctionLibrary_GetLocalPlayerFromController_Params
{
public:
	class APlayerController*                     Controller;                                        // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULocalPlayer*                          ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function S6Core.S6Core_General_BlueprintFunctionLibrary.GetCurrentMapName
struct US6Core_General_BlueprintFunctionLibrary_GetCurrentMapName_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function S6Core.S6Core_General_BlueprintFunctionLibrary.GetCurrentDrawCalls
struct US6Core_General_BlueprintFunctionLibrary_GetCurrentDrawCalls_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function S6Core.S6Core_General_BlueprintFunctionLibrary.GetComponentByInterface
struct US6Core_General_BlueprintFunctionLibrary_GetComponentByInterface_Params
{
public:
	class AActor*                                InActor;                                           // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class IInterface>                Interface;                                         // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UActorComponent*                       ReturnValue;                                       // 0x10(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// Function S6Core.S6Core_General_BlueprintFunctionLibrary.GetAllStatDataForStatGroup
struct US6Core_General_BlueprintFunctionLibrary_GetAllStatDataForStatGroup_Params
{
public:
	class FName                                  StatGroupName;                                     // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FName, struct FS6Core_StatData>   ReturnValue;                                       // 0x8(0x50)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function S6Core.S6Core_General_BlueprintFunctionLibrary.GetActorBounds
struct US6Core_General_BlueprintFunctionLibrary_GetActorBounds_Params
{
public:
	TSubclassOf<class AActor>                    InActorClass;                                      // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOnlyCollidingComponents;                          // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9EC[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBox                                  OutBounds;                                         // 0x10(0x38)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function S6Core.S6Core_General_BlueprintFunctionLibrary.FindDefaultComponentsByClass
struct US6Core_General_BlueprintFunctionLibrary_FindDefaultComponentsByClass_Params
{
public:
	TSubclassOf<class AActor>                    InActorClass;                                      // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UActorComponent>           InComponentClass;                                  // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UActorComponent*>               ReturnValue;                                       // 0x10(0x10)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function S6Core.S6Core_General_BlueprintFunctionLibrary.FindDefaultComponentByClass
struct US6Core_General_BlueprintFunctionLibrary_FindDefaultComponentByClass_Params
{
public:
	TSubclassOf<class AActor>                    InActorClass;                                      // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UActorComponent>           InComponentClass;                                  // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UActorComponent*                       ReturnValue;                                       // 0x10(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function S6Core.S6Core_General_BlueprintFunctionLibrary.DoesFunctionExist
struct US6Core_General_BlueprintFunctionLibrary_DoesFunctionExist_Params
{
public:
	class UObject*                               Instance;                                          // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  FunctionName;                                      // 0x8(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9F5[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function S6Core.S6Core_General_BlueprintFunctionLibrary.DeleteFileAtPath
struct US6Core_General_BlueprintFunctionLibrary_DeleteFileAtPath_Params
{
public:
	class FString                                FilePath;                                          // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9F6[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x0 - 0x0)
// DelegateFunction S6Core.S6Core_AsyncAction_LevelTravel.OnLevelTravelComplete__DelegateSignature
struct US6Core_AsyncAction_LevelTravel_OnLevelTravelComplete__DelegateSignature_Params
{
public:
};

// 0x20 (0x20 - 0x0)
// Function S6Core.S6Core_AsyncAction_LevelTravel.LevelTravel
struct US6Core_AsyncAction_LevelTravel_LevelTravel_Params
{
public:
	class FString                                LevelName;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               InWorldContextObject;                              // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class US6Core_AsyncAction_LevelTravel*       ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// DelegateFunction S6Core.S6Core_AsyncAction_LoadSublevel.OnSublevelActionCompleted__DelegateSignature
struct US6Core_AsyncAction_LoadSublevel_OnSublevelActionCompleted__DelegateSignature_Params
{
public:
};

// 0x28 (0x28 - 0x0)
// Function S6Core.S6Core_AsyncAction_LoadSublevel.LoadSublevel
struct US6Core_AsyncAction_LoadSublevel_LoadSublevel_Params
{
public:
	class FString                                InLevelName;                                       // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               InWorldContextObject;                              // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInShouldBeVisible;                                // 0x18(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A0E[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class US6Core_AsyncAction_LoadSublevel*      ReturnValue;                                       // 0x20(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function S6Core.S6Core_AsyncAction_LoadSublevel.HandleOnLevelLoaded
struct US6Core_AsyncAction_LoadSublevel_HandleOnLevelLoaded_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function S6Core.S6PlatformUtils.IsMobile
struct US6PlatformUtils_IsMobile_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function S6Core.S6PlatformUtils.IsDesktop
struct US6PlatformUtils_IsDesktop_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function S6Core.S6PlatformUtils.IsConsole
struct US6PlatformUtils_IsConsole_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function S6Core.S6PlatformUtils.GetPlatformType
struct US6PlatformUtils_GetPlatformType_Params
{
public:
	enum class ERedirectsPlatform                ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// DelegateFunction S6Core.S6TokenProvider.OnTokenReady__DelegateSignature
struct US6TokenProvider_OnTokenReady__DelegateSignature_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function S6Core.S6TokenProvider.IsTokenValid
struct US6TokenProvider_IsTokenValid_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function S6Core.S6TokenProvider.IsReady
struct US6TokenProvider_IsReady_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function S6Core.S6TokenProvider.GetToken
struct US6TokenProvider_GetToken_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function S6Core.S6TokenProvider.FetchToken
struct US6TokenProvider_FetchToken_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function S6Core.S6WorldPartitionStreamer.HasAreaLoaded
struct AS6WorldPartitionStreamer_HasAreaLoaded_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function S6Core.S6WorldPartitionStreamer.CheckForAreaLoaded
struct AS6WorldPartitionStreamer_CheckForAreaLoaded_Params
{
public:
};

}
}


