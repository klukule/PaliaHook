#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class S6Core.CommandLineHelper
class UCommandLineHelper : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CommandLineHelper");
		return Clss;
	}

	bool TryGetCommandlineKeyValuePair(const class FString& InKey, class FString* InValue);
	bool DoesCommandlineHaveSwitch(const class FString& InSWITCH);
};

// 0x18 (0x48 - 0x30)
// Class S6Core.GuidDataAsset
class UGuidDataAsset : public UDataAsset
{
public:
	uint8                                        Pad_618[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGuid                                 Guid;                                              // 0x38(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GuidDataAsset");
		return Clss;
	}

};

// 0x58 (0x88 - 0x30)
// Class S6Core.S6DataAssetManager
class US6DataAssetManager : public UEngineSubsystem
{
public:
	TMap<struct FGuid, class UGuidDataAsset*>    GuidToAssetMap;                                    // 0x30(0x50)(NativeAccessSpecifierPrivate)
	uint8                                        Pad_62D[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("S6DataAssetManager");
		return Clss;
	}

	TArray<class UGuidDataAsset*> GetAllGuidDataAssets();
	class UGuidDataAsset* FindConfigByGuid(const struct FGuid& InGuid);
};

// 0x0 (0x28 - 0x28)
// Class S6Core.S6UsesCustomReferenceSerializationInterface
class IS6UsesCustomReferenceSerializationInterface : public IInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("S6UsesCustomReferenceSerializationInterface");
		return Clss;
	}

};

// 0x50 (0x78 - 0x28)
// Class S6Core.S6Core_AssetLoader
class US6Core_AssetLoader : public UObject
{
public:
	uint8                                        Pad_630[0x50];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("S6Core_AssetLoader");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class S6Core.S6VersioningFunctionLibrary
class US6VersioningFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("S6VersioningFunctionLibrary");
		return Clss;
	}

	bool IsValidVersionString(const class FString& InInVersion);
	class FString GetVersionString();
};

// 0x0 (0x28 - 0x28)
// Class S6Core.S6Core_General_BlueprintFunctionLibrary
class US6Core_General_BlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("S6Core_General_BlueprintFunctionLibrary");
		return Clss;
	}

	int64 ToInt64(const class FString& InInString);
	void ToggleScreenshotMaskOnCurrentGameViewport(class UGameInstance* InGameInstance, bool InMaskEnabled);
	void TakeHighResScreenshotOfGameViewport(class UGameInstance* InGameInstance, int32 InImageSize_X, int32 InImageSize_Y, float InImageResolution, bool InUseHDR, bool InMaskBackground);
	void ShowSimpleNotification(const class FString& InText, bool InbErrorMessage, float InWidthOverride);
	void PrintToConsoleWindow(const class FString& InMsg);
	bool IsStatGroupToggled(class FName& InStatGroupName);
	bool HasBegunPlay(class AActor* InInActor);
	struct FS6Core_StatData GetStatDataFromName(class FName& InStatName);
	class ULocalPlayer* GetLocalPlayerFromController(class APlayerController* InController);
	class FName GetCurrentMapName(class UObject* InWorldContextObject);
	int32 GetCurrentDrawCalls();
	class UActorComponent* GetComponentByInterface(class AActor* InInActor, TSubclassOf<class IInterface> InInterface);
	TMap<class FName, struct FS6Core_StatData> GetAllStatDataForStatGroup(class FName& InStatGroupName);
	void GetActorBounds(TSubclassOf<class AActor> InInActorClass, bool InbOnlyCollidingComponents, struct FBox* InOutBounds);
	TArray<class UActorComponent*> FindDefaultComponentsByClass(TSubclassOf<class AActor> InInActorClass, TSubclassOf<class UActorComponent> InInComponentClass);
	class UActorComponent* FindDefaultComponentByClass(TSubclassOf<class AActor> InInActorClass, TSubclassOf<class UActorComponent> InInComponentClass);
	bool DoesFunctionExist(class UObject* InInstance, class FName& InFunctionName);
	bool DeleteFileAtPath(const class FString& InFilePath);
};

// 0x38 (0x68 - 0x30)
// Class S6Core.S6Core_AsyncAction_LevelTravel
class US6Core_AsyncAction_LevelTravel : public UBlueprintAsyncActionBase
{
public:
	uint8                                        Pad_6BC[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               WorldContextObject;                                // 0x40(0x8)(ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	FMulticastInlineDelegateProperty_            OnComplete;                                        // 0x48(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	FMulticastInlineDelegateProperty_            OnFail;                                            // 0x58(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("S6Core_AsyncAction_LevelTravel");
		return Clss;
	}

	void OnLevelTravelComplete__DelegateSignature();
	class US6Core_AsyncAction_LevelTravel* LevelTravel(const class FString& InLevelName, class UObject* InInWorldContextObject);
};

// 0x48 (0x78 - 0x30)
// Class S6Core.S6Core_AsyncAction_LoadSublevel
class US6Core_AsyncAction_LoadSublevel : public UBlueprintAsyncActionBase
{
public:
	uint8                                        Pad_6C8[0x20];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               WorldContextObject;                                // 0x50(0x8)(ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	FMulticastInlineDelegateProperty_            OnComplete;                                        // 0x58(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	FMulticastInlineDelegateProperty_            OnFail;                                            // 0x68(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("S6Core_AsyncAction_LoadSublevel");
		return Clss;
	}

	void OnSublevelActionCompleted__DelegateSignature();
	class US6Core_AsyncAction_LoadSublevel* LoadSublevel(const class FString& InInLevelName, class UObject* InInWorldContextObject, bool InbInShouldBeVisible);
	void HandleOnLevelLoaded();
};

// 0x0 (0x28 - 0x28)
// Class S6Core.S6PlatformUtils
class US6PlatformUtils : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("S6PlatformUtils");
		return Clss;
	}

	bool IsMobile();
	bool IsDesktop();
	bool IsConsole();
	enum class ERedirectsPlatform GetPlatformType();
};

// 0x28 (0x58 - 0x30)
// Class S6Core.S6ServerMetrics
class US6ServerMetrics : public UGameInstanceSubsystem
{
public:
	uint8                                        Pad_6E2[0x20];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         ShouldEmitServerMetrics;                           // 0x50(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6E3[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("S6ServerMetrics");
		return Clss;
	}

};

// 0x18 (0x50 - 0x38)
// Class S6Core.S6TokenProviderConfiguration
class US6TokenProviderConfiguration : public UDeveloperSettings
{
public:
	float                                        ExpiryRefreshPercent;                              // 0x38(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InitialBackOffInterval;                            // 0x3C(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BackOffMultiplier;                                 // 0x40(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BackOffJitter;                                     // 0x44(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxBackOffInterval;                                // 0x48(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6E8[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("S6TokenProviderConfiguration");
		return Clss;
	}

};

// 0x98 (0xC8 - 0x30)
// Class S6Core.S6TokenProvider
class US6TokenProvider : public UGameInstanceSubsystem
{
public:
	FMulticastInlineDelegateProperty_            OnTokenReady;                                      // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_6FA[0x88];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("S6TokenProvider");
		return Clss;
	}

	void OnTokenReady__DelegateSignature();
	bool IsTokenValid();
	bool IsReady();
	class FString GetToken();
	void FetchToken();
};

// 0x28 (0x2B8 - 0x290)
// Class S6Core.S6WorldPartitionStreamer
class AS6WorldPartitionStreamer : public AActor
{
public:
	class UWorldPartitionStreamingSourceComponent* WorldPartitionStreamingSourceComponent;            // 0x290(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnWorldPartitionStreamerAreaLoaded;                // 0x298(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	bool                                         bAreaLoaded;                                       // 0x2A8(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_710[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          AreaLoadedTimerHandle;                             // 0x2B0(0x8)(NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("S6WorldPartitionStreamer");
		return Clss;
	}

	bool HasAreaLoaded();
	void CheckForAreaLoaded();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
