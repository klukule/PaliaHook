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
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("CommandLineHelper");

		return Clss;
	}

	bool TryGetCommandlineKeyValuePair(const class FString& Key, class FString* Value);
	bool DoesCommandlineHaveSwitch(const class FString& SWITCH);
};

// 0x18 (0x48 - 0x30)
// Class S6Core.GuidDataAsset
class UGuidDataAsset : public UDataAsset
{
public:
	uint8                                        Pad_5F7[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGuid                                 Guid;                                              // 0x38(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("GuidDataAsset");

		return Clss;
	}

};

// 0x58 (0x88 - 0x30)
// Class S6Core.S6DataAssetManager
class US6DataAssetManager : public UEngineSubsystem
{
public:
	TMap<struct FGuid, class UGuidDataAsset*>    GuidToAssetMap;                                    // 0x30(0x50)(NativeAccessSpecifierPrivate)
	uint8                                        Pad_5FE[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("S6DataAssetManager");

		return Clss;
	}

	TArray<class UGuidDataAsset*> GetAllGuidDataAssets();
	class UGuidDataAsset* FindConfigByGuid(const struct FGuid& Guid);
};

// 0x0 (0x28 - 0x28)
// Class S6Core.S6UsesCustomReferenceSerializationInterface
class IS6UsesCustomReferenceSerializationInterface : public IInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("S6UsesCustomReferenceSerializationInterface");

		return Clss;
	}

};

// 0x50 (0x78 - 0x28)
// Class S6Core.S6Core_AssetLoader
class US6Core_AssetLoader : public UObject
{
public:
	uint8                                        Pad_600[0x50];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("S6Core_AssetLoader");

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
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("S6VersioningFunctionLibrary");

		return Clss;
	}

	bool IsValidVersionString(const class FString& InVersion);
	class FString GetVersionString();
};

// 0x0 (0x28 - 0x28)
// Class S6Core.S6Core_General_BlueprintFunctionLibrary
class US6Core_General_BlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("S6Core_General_BlueprintFunctionLibrary");

		return Clss;
	}

	int64 ToInt64(const class FString& InString);
	void ToggleScreenshotMaskOnCurrentGameViewport(class UGameInstance* GameInstance, bool MaskEnabled);
	void TakeHighResScreenshotOfGameViewport(class UGameInstance* GameInstance, int32 ImageSize_X, int32 ImageSize_Y, float ImageResolution, bool UseHDR, bool MaskBackground);
	void ShowSimpleNotification(const class FString& Text, bool bErrorMessage, float WidthOverride);
	void PrintToConsoleWindow(const class FString& Msg);
	bool IsStatGroupToggled(class FName& StatGroupName);
	bool HasBegunPlay(class AActor* InActor);
	struct FS6Core_StatData GetStatDataFromName(class FName& StatName);
	class ULocalPlayer* GetLocalPlayerFromController(class APlayerController* Controller);
	class FName GetCurrentMapName(class UObject* WorldContextObject);
	int32 GetCurrentDrawCalls();
	class UActorComponent* GetComponentByInterface(class AActor* InActor, TSubclassOf<class IInterface> Interface);
	TMap<class FName, struct FS6Core_StatData> GetAllStatDataForStatGroup(class FName& StatGroupName);
	void GetActorBounds(TSubclassOf<class AActor> InActorClass, bool bOnlyCollidingComponents, struct FBox* OutBounds);
	TArray<class UActorComponent*> FindDefaultComponentsByClass(TSubclassOf<class AActor> InActorClass, TSubclassOf<class UActorComponent> InComponentClass);
	class UActorComponent* FindDefaultComponentByClass(TSubclassOf<class AActor> InActorClass, TSubclassOf<class UActorComponent> InComponentClass);
	bool DoesFunctionExist(class UObject* Instance, class FName& FunctionName);
	bool DeleteFileAtPath(const class FString& FilePath);
};

// 0x38 (0x68 - 0x30)
// Class S6Core.S6Core_AsyncAction_LevelTravel
class US6Core_AsyncAction_LevelTravel : public UBlueprintAsyncActionBase
{
public:
	uint8                                        Pad_673[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               WorldContextObject;                                // 0x40(0x8)(ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	FMulticastInlineDelegateProperty_            OnComplete;                                        // 0x48(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	FMulticastInlineDelegateProperty_            OnFail;                                            // 0x58(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("S6Core_AsyncAction_LevelTravel");

		return Clss;
	}

	void OnLevelTravelComplete__DelegateSignature();
	class US6Core_AsyncAction_LevelTravel* LevelTravel(const class FString& LevelName, class UObject* InWorldContextObject);
};

// 0x48 (0x78 - 0x30)
// Class S6Core.S6Core_AsyncAction_LoadSublevel
class US6Core_AsyncAction_LoadSublevel : public UBlueprintAsyncActionBase
{
public:
	uint8                                        Pad_682[0x20];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               WorldContextObject;                                // 0x50(0x8)(ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	FMulticastInlineDelegateProperty_            OnComplete;                                        // 0x58(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	FMulticastInlineDelegateProperty_            OnFail;                                            // 0x68(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("S6Core_AsyncAction_LoadSublevel");

		return Clss;
	}

	void OnSublevelActionCompleted__DelegateSignature();
	class US6Core_AsyncAction_LoadSublevel* LoadSublevel(const class FString& InLevelName, class UObject* InWorldContextObject, bool bInShouldBeVisible);
	void HandleOnLevelLoaded();
};

// 0x0 (0x28 - 0x28)
// Class S6Core.S6PlatformUtils
class US6PlatformUtils : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("S6PlatformUtils");

		return Clss;
	}

	bool IsShowCommonUI();
	bool IsMobile();
	bool IsDesktop();
	bool IsConsole();
	enum class EShowUIStyle GetShowUIStyle();
	enum class ERedirectsPlatform GetPlatformType();
};

// 0x28 (0x58 - 0x30)
// Class S6Core.S6ServerMetrics
class US6ServerMetrics : public UGameInstanceSubsystem
{
public:
	uint8                                        Pad_6A3[0x20];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         ShouldEmitServerMetrics;                           // 0x50(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6A4[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("S6ServerMetrics");

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
	uint8                                        Pad_6A7[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("S6TokenProviderConfiguration");

		return Clss;
	}

};

// 0x98 (0xC8 - 0x30)
// Class S6Core.S6TokenProvider
class US6TokenProvider : public UGameInstanceSubsystem
{
public:
	FMulticastInlineDelegateProperty_            OnTokenReady;                                      // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_6AE[0x88];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("S6TokenProvider");

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
	uint8                                        Pad_6B6[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          AreaLoadedTimerHandle;                             // 0x2B0(0x8)(NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("S6WorldPartitionStreamer");

		return Clss;
	}

	bool HasAreaLoaded();
	void CheckForAreaLoaded();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
