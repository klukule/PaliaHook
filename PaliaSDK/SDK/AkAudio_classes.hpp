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

// 0xE0 (0x380 - 0x2A0)
// Class AkAudio.AkPortalComponent
class UAkPortalComponent : public USceneComponent
{
public:
	bool                                         bDynamic;                                          // 0x2A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAkAcousticPortalState            InitialState;                                      // 0x2A1(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_566[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ObstructionRefreshInterval;                        // 0x2A4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECollisionChannel                 ObstructionCollisionChannel;                       // 0x2A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_567[0xD7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AkPortalComponent");
		return Clss;
	}

	bool PortalPlacementValid();
	void OpenPortal();
	class UPrimitiveComponent* GetPrimitiveParent();
	enum class EAkAcousticPortalState GetCurrentState();
	void ClosePortal();
};

// 0x10 (0x2D8 - 0x2C8)
// Class AkAudio.AkAcousticPortal
class AAkAcousticPortal : public AVolume
{
public:
	class UAkPortalComponent*                    Portal;                                            // 0x2C8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAkAcousticPortalState            InitialState;                                      // 0x2D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bRequiresStateMigration;                           // 0x2D1(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_56B[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AkAcousticPortal");
		return Clss;
	}

	void OpenPortal();
	enum class EAkAcousticPortalState GetCurrentState();
	void ClosePortal();
};

// 0x18 (0x40 - 0x28)
// Class AkAudio.AkAudioType
class UAkAudioType : public UObject
{
public:
	uint32                                       ShortID;                                           // 0x28(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_56D[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UObject*>                       UserData;                                          // 0x30(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AkAudioType");
		return Clss;
	}

};

// 0x0 (0x40 - 0x40)
// Class AkAudio.AkAcousticTexture
class UAkAcousticTexture : public UAkAudioType
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AkAcousticTexture");
		return Clss;
	}

};

// 0x18 (0x2B8 - 0x2A0)
// Class AkAudio.AkAcousticTextureSetComponent
class UAkAcousticTextureSetComponent : public USceneComponent
{
public:
	uint8                                        Pad_56F[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AkAcousticTextureSetComponent");
		return Clss;
	}

};

// 0x40 (0x2D0 - 0x290)
// Class AkAudio.AkAmbientSound
class AAkAmbientSound : public AActor
{
public:
	class UAkAudioEvent*                         AkAudioEvent;                                      // 0x290(0x8)(ZeroConstructor, Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkComponent*                          AkComponent;                                       // 0x298(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         StopWhenOwnerIsDestroyed;                          // 0x2A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, SimpleDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AutoPost;                                          // 0x2A1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, SimpleDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_574[0x2E];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AkAmbientSound");
		return Clss;
	}

	void StopAmbientSound();
	void StartAmbientSound();
};

// 0xD0 (0xF8 - 0x28)
// Class AkAudio.AkAndroidInitializationSettings
class UAkAndroidInitializationSettings : public UObject
{
public:
	uint8                                        Pad_576[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings;                                    // 0x30(0x68)(Edit, Config, NativeAccessSpecifierPublic)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;                             // 0x98(0x28)(Edit, Config, NativeAccessSpecifierPublic)
	struct FAkAndroidAdvancedInitializationSettings AdvancedSettings;                                  // 0xC0(0x38)(Edit, Config, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AkAndroidInitializationSettings");
		return Clss;
	}

	void MigrateMultiCoreRendering(bool InNewValue);
};

// 0x48 (0x70 - 0x28)
// Class AkAudio.AkPlatformInfo
class UAkPlatformInfo : public UObject
{
public:
	uint8                                        Pad_578[0x48];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AkPlatformInfo");
		return Clss;
	}

};

// 0x0 (0x70 - 0x70)
// Class AkAudio.AkAndroidPlatformInfo
class UAkAndroidPlatformInfo : public UAkPlatformInfo
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AkAndroidPlatformInfo");
		return Clss;
	}

};

// 0x10 (0x50 - 0x40)
// Class AkAudio.AkAssetBase
class UAkAssetBase : public UAkAudioType
{
public:
	class UAkAssetPlatformData*                  PlatformAssetData;                                 // 0x40(0x8)(Edit, ZeroConstructor, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_57A[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AkAssetBase");
		return Clss;
	}

};

// 0x48 (0x70 - 0x28)
// Class AkAudio.AkAssetData
class UAkAssetData : public UObject
{
public:
	uint32                                       CachedHash;                                        // 0x28(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_57B[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                BankLanguage;                                      // 0x30(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_57C[0x30];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AkAssetData");
		return Clss;
	}

};

// 0x10 (0x80 - 0x70)
// Class AkAudio.AkAssetDataWithMedia
class UAkAssetDataWithMedia : public UAkAssetData
{
public:
	TArray<class UAkMediaAsset*>                 MediaList;                                         // 0x70(0x10)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AkAssetDataWithMedia");
		return Clss;
	}

};

// 0x8 (0x30 - 0x28)
// Class AkAudio.AkAssetPlatformData
class UAkAssetPlatformData : public UObject
{
public:
	class UAkAssetData*                          CurrentAssetData;                                  // 0x28(0x8)(ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AkAssetPlatformData");
		return Clss;
	}

};

// 0x58 (0x80 - 0x28)
// Class AkAudio.AkAssetDataSwitchContainerData
class UAkAssetDataSwitchContainerData : public UObject
{
public:
	TSoftObjectPtr<class UAkGroupValue>          GroupValue;                                        // 0x28(0x30)(Edit, EditConst, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkGroupValue*                         DefaultGroupValue;                                 // 0x58(0x8)(Edit, ZeroConstructor, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UAkMediaAsset*>                 MediaList;                                         // 0x60(0x10)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	TArray<class UAkAssetDataSwitchContainerData*> Children;                                          // 0x70(0x10)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AkAssetDataSwitchContainerData");
		return Clss;
	}

};

// 0x68 (0xE8 - 0x80)
// Class AkAudio.AkAssetDataSwitchContainer
class UAkAssetDataSwitchContainer : public UAkAssetDataWithMedia
{
public:
	TArray<class UAkAssetDataSwitchContainerData*> SwitchContainers;                                  // 0x80(0x10)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	class UAkGroupValue*                         DefaultGroupValue;                                 // 0x90(0x8)(Edit, ZeroConstructor, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_581[0x50];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AkAssetDataSwitchContainer");
		return Clss;
	}

};

// 0x1A0 (0x288 - 0xE8)
// Class AkAudio.AkAudioEventData
class UAkAudioEventData : public UAkAssetDataSwitchContainer
{
public:
	float                                        MaxAttenuationRadius;                              // 0xE8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsInfinite;                                        // 0xEC(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_583[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MinimumDuration;                                   // 0xF0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaximumDuration;                                   // 0xF4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FString, class UAkAssetDataSwitchContainer*> LocalizedMedia;                                    // 0xF8(0x50)(Deprecated, NativeAccessSpecifierPublic)
	TSet<class UAkAudioEvent*>                   PostedEvents;                                      // 0x148(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NativeAccessSpecifierPublic)
	TSet<class UAkAuxBus*>                       UserDefinedSends;                                  // 0x198(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NativeAccessSpecifierPublic)
	TSet<class UAkTrigger*>                      PostedTriggers;                                    // 0x1E8(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NativeAccessSpecifierPublic)
	TSet<class UAkGroupValue*>                   GroupValues;                                       // 0x238(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AkAudioEventData");
		return Clss;
	}

};

// 0xC8 (0x118 - 0x50)
// Class AkAudio.AkAudioBank
class UAkAudioBank : public UAkAssetBase
{
public:
	bool                                         AutoLoad;                                          // 0x50(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_585[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class FString, class UAkAssetPlatformData*> LocalizedPlatformAssetDataMap;                     // 0x58(0x50)(Edit, EditConst, NativeAccessSpecifierPublic)
	TSet<TSoftObjectPtr<class UAkAudioEvent>>    LinkedAkEvents;                                    // 0xA8(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, Transient, EditConst, UObjectWrapper, NativeAccessSpecifierPublic)
	class UAkAssetPlatformData*                  CurrentLocalizedPlatformAssetData;                 // 0xF8(0x8)(ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_586[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AkAudioBank");
		return Clss;
	}

};

// 0x80 (0xD0 - 0x50)
// Class AkAudio.AkAudioEvent
class UAkAudioEvent : public UAkAssetBase
{
public:
	TMap<class FString, class UAkAssetPlatformData*> LocalizedPlatformAssetDataMap;                     // 0x50(0x50)(Edit, EditConst, NativeAccessSpecifierPublic)
	class UAkAudioBank*                          RequiredBank;                                      // 0xA0(0x8)(Edit, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_58C[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UAkAssetPlatformData*                  CurrentLocalizedPlatformData;                      // 0xB0(0x8)(ZeroConstructor, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        MaxAttenuationRadius;                              // 0xB8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         IsInfinite;                                        // 0xBC(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_58D[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MinimumDuration;                                   // 0xC0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        MaximumDuration;                                   // 0xC4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_58E[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AkAudioEvent");
		return Clss;
	}

	float GetMinimumDuration();
	float GetMaximumDuration();
	float GetMaxAttenuationRadius();
	bool GetIsInfinite();
};

// 0x20 (0x2C0 - 0x2A0)
// Class AkAudio.AkGameObject
class UAkGameObject : public USceneComponent
{
public:
	class UAkAudioEvent*                         AkAudioEvent;                                      // 0x2A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                EventName;                                         // 0x2A8(0x10)(Edit, BlueprintVisible, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5CF[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AkGameObject");
		return Clss;
	}

	void Stop();
	void SetRTPCValue(class UAkRtpc* InRTPCValue, float InValue, int32 InInterpolationTimeMs, const class FString& InRTPC);
	void PostAssociatedAkEventAsync(class UObject* InWorldContextObject, int32 InCallbackMask, FDelegateProperty_& InPostEventCallback, TArray<struct FAkExternalSourceInfo>& InExternalSources, const struct FLatentActionInfo& InLatentInfo, int32* InPlayingID);
	int32 PostAssociatedAkEvent(int32 InCallbackMask, FDelegateProperty_& InPostEventCallback, TArray<struct FAkExternalSourceInfo>& InExternalSources);
	void PostAkEventAsync(class UObject* InWorldContextObject, class UAkAudioEvent* InAkEvent, int32* InPlayingID, int32 InCallbackMask, FDelegateProperty_& InPostEventCallback, TArray<struct FAkExternalSourceInfo>& InExternalSources, const struct FLatentActionInfo& InLatentInfo);
	int32 PostAkEvent(class UAkAudioEvent* InAkEvent, int32 InCallbackMask, FDelegateProperty_& InPostEventCallback, TArray<struct FAkExternalSourceInfo>& InExternalSources, const class FString& InIn_EventName);
	void GetRTPCValue(class UAkRtpc* InRTPCValue, enum class ERTPCValueType InInputValueType, float* InValue, enum class ERTPCValueType* InOutputValueType, const class FString& InRTPC, int32 InPlayingID);
};

// 0x1C8 (0x488 - 0x2C0)
// Class AkAudio.AkComponent
class UAkComponent : public UAkGameObject
{
public:
	bool                                         bUseSpatialAudio;                                  // 0x2C0(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_646[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	enum class ECollisionChannel                 OcclusionCollisionChannel;                         // 0x2C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         EnableSpotReflectors;                              // 0x2C9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_647[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        OuterRadius;                                       // 0x2CC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InnerRadius;                                       // 0x2D0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_64B[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UAkAuxBus*                             EarlyReflectionAuxBus;                             // 0x2D8(0x8)(Edit, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                EarlyReflectionAuxBusName;                         // 0x2E0(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        EarlyReflectionOrder;                              // 0x2F0(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        EarlyReflectionBusSendGain;                        // 0x2F4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        EarlyReflectionMaxPathLength;                      // 0x2F8(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        RoomReverbAuxBusGain;                              // 0x2FC(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        DiffractionMaxEdges;                               // 0x300(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        DiffractionMaxPaths;                               // 0x304(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        DiffractionMaxPathLength;                          // 0x308(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         DrawFirstOrderReflections;                         // 0x30C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         DrawSecondOrderReflections;                        // 0x30D(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         DrawHigherOrderReflections;                        // 0x30E(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         DrawDiffraction;                                   // 0x30F(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         StopWhenOwnerDestroyed;                            // 0x310(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_652[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        AttenuationScalingFactor;                          // 0x314(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OcclusionRefreshInterval;                          // 0x318(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseReverbVolumes;                                 // 0x31C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_653[0x16B];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AkComponent");
		return Clss;
	}

	void UseReverbVolumes(bool InInUseReverbVolumes);
	void UseEarlyReflections(class UAkAuxBus* InAuxBus, int32 InOrder, float InBusSendGain, float InMaxPathLength, bool InSpotReflectors, const class FString& InAuxBusName);
	void SetSwitch(class UAkSwitchValue* InSwitchValue, const class FString& InSwitchGroup, const class FString& InSwitchState);
	void SetStopWhenOwnerDestroyed(bool InbStopWhenOwnerDestroyed);
	void SetOutputBusVolume(float InBusVolume);
	void SetListeners(TArray<class UAkComponent*>& InListeners);
	void SetGameObjectRadius(float InIn_outerRadius, float InIn_innerRadius);
	void SetEarlyReflectionsVolume(float InSendVolume);
	void SetEarlyReflectionsAuxBus(const class FString& InAuxBusName);
	void SetAttenuationScalingFactor(float InValue);
	void PostTrigger(class UAkTrigger* InTriggerValue, const class FString& InTrigger);
	void PostAssociatedAkEventAndWaitForEndAsync(int32* InPlayingID, TArray<struct FAkExternalSourceInfo>& InExternalSources, const struct FLatentActionInfo& InLatentInfo);
	int32 PostAssociatedAkEventAndWaitForEnd(TArray<struct FAkExternalSourceInfo>& InExternalSources, const struct FLatentActionInfo& InLatentInfo);
	int32 PostAkEventByName(const class FString& InIn_EventName);
	void PostAkEventAndWaitForEndAsync(class UAkAudioEvent* InAkEvent, int32* InPlayingID, TArray<struct FAkExternalSourceInfo>& InExternalSources, const struct FLatentActionInfo& InLatentInfo);
	int32 PostAkEventAndWaitForEnd(class UAkAudioEvent* InAkEvent, const class FString& InIn_EventName, TArray<struct FAkExternalSourceInfo>& InExternalSources, const struct FLatentActionInfo& InLatentInfo);
	bool GetAutoDestroy();
	float GetAttenuationRadius();
};

// 0x38 (0x4C0 - 0x488)
// Class AkAudio.AkAudioInputComponent
class UAkAudioInputComponent : public UAkComponent
{
public:
	uint8                                        Pad_662[0x38];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AkAudioInputComponent");
		return Clss;
	}

	int32 PostAssociatedAudioInputEvent();
};

// 0x8 (0x58 - 0x50)
// Class AkAudio.AkAuxBus
class UAkAuxBus : public UAkAssetBase
{
public:
	class UAkAudioBank*                          RequiredBank;                                      // 0x50(0x8)(Edit, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AkAuxBus");
		return Clss;
	}

};

// 0xE58 (0xFC0 - 0x168)
// Class AkAudio.AkCheckBox
class UAkCheckBox : public UContentWidget
{
public:
	uint8                                        Pad_685[0x290];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	enum class ECheckBoxState                    CheckedState;                                      // 0x3F8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_687[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           CheckedStateDelegate;                              // 0x3FC(0x10)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_688[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCheckBoxStyle                        WidgetStyle;                                       // 0x410(0xAD0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	enum class EHorizontalAlignment              HorizontalAlignment;                               // 0xEE0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsFocusable;                                       // 0xEE1(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_68A[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAkBoolPropertyToControl              ThePropertyToControl;                              // 0xEE8(0x10)(Edit, NativeAccessSpecifierPublic)
	struct FAkWwiseItemToControl                 ItemToControl;                                     // 0xEF8(0x40)(Edit, Config, EditConst, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            AkOnCheckStateChanged;                             // 0xF38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnItemDropped;                                     // 0xF48(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnPropertyDropped;                                 // 0xF58(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_68D[0x58];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AkCheckBox");
		return Clss;
	}

	void SetIsChecked(bool InInIsChecked);
	void SetCheckedState(enum class ECheckBoxState InInCheckedState);
	void SetAkItemId(struct FGuid& InItemId);
	void SetAkBoolProperty(const class FString& InItemProperty);
	bool IsPressed();
	bool IsChecked();
	enum class ECheckBoxState GetCheckedState();
	class FString GetAkProperty();
	struct FGuid GetAkItemId();
};

// 0x8 (0x540 - 0x538)
// Class AkAudio.DrawPortalComponent
class UDrawPortalComponent : public UPrimitiveComponent
{
public:
	uint8                                        Pad_691[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("DrawPortalComponent");
		return Clss;
	}

};

// 0x8 (0x540 - 0x538)
// Class AkAudio.DrawRoomComponent
class UDrawRoomComponent : public UPrimitiveComponent
{
public:
	uint8                                        Pad_694[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("DrawRoomComponent");
		return Clss;
	}

};

// 0x78 (0xB8 - 0x40)
// Class AkAudio.AkFolder
class UAkFolder : public UAkAudioType
{
public:
	class FString                                UnrealFolderPath;                                  // 0x40(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                WwiseFolderPath;                                   // 0x50(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_695[0x58];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AkFolder");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class AkAudio.AkGameplayStatics
class UAkGameplayStatics : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AkGameplayStatics");
		return Clss;
	}

	void UseReverbVolumes(bool InInUseReverbVolumes, class AActor* InActor);
	void UseEarlyReflections(class AActor* InActor, class UAkAuxBus* InAuxBus, int32 InOrder, float InBusSendGain, float InMaxPathLength, bool InSpotReflectors, const class FString& InAuxBusName);
	void UnloadBankByName(const class FString& InBankName);
	void UnloadBankAsync(class UAkAudioBank* InBank, FDelegateProperty_& InBankUnloadedCallback);
	void UnloadBank(class UAkAudioBank* InBank, const class FString& InBankName, const struct FLatentActionInfo& InLatentInfo, class UObject* InWorldContextObject);
	void StopProfilerCapture();
	void StopOutputCapture();
	void StopAllAmbientSounds(class UObject* InWorldContextObject);
	void StopAll();
	void StopActor(class AActor* InActor);
	void StartProfilerCapture(const class FString& InFilename);
	void StartOutputCapture(const class FString& InFilename);
	void StartAllAmbientSounds(class UObject* InWorldContextObject);
	class UAkComponent* SpawnAkComponentAtLocation(class UObject* InWorldContextObject, class UAkAudioEvent* InAkEvent, const struct FVector& InLocation, const struct FRotator& InOrientation, bool InAutoPost, const class FString& InEventName, bool InAutoDestroy);
	void SetSwitch(class UAkSwitchValue* InSwitchValue, class AActor* InActor, class FName InSwitchGroup, class FName InSwitchState);
	void SetState(class UAkStateValue* InStateValue, class FName InStateGroup, class FName InState);
	void SetSpeakerAngles(TArray<float>& InSpeakerAngles, float InHeightAngle, const class FString& InDeviceShareset);
	void SetRTPCValue(class UAkRtpc* InRTPCValue, float InValue, int32 InInterpolationTimeMs, class AActor* InActor, class FName InRTPC);
	void SetReflectionsOrder(int32 InOrder, bool InRefreshPaths);
	void SetPortalToPortalObstruction(class UAkPortalComponent* InPortalComponent0, class UAkPortalComponent* InPortalComponent1, float InObstructionValue);
	void SetPortalObstructionAndOcclusion(class UAkPortalComponent* InPortalComponent, float InObstructionValue, float InOcclusionValue);
	void SetPanningRule(enum class EPanningRule InPanRule);
	void SetOutputBusVolume(float InBusVolume, class AActor* InActor);
	void SetOcclusionScalingFactor(float InScalingFactor);
	void SetOcclusionRefreshInterval(float InRefreshInterval, class AActor* InActor);
	void SetMultiplePositions(class UAkComponent* InGameObjectAkComponent, const TArray<struct FTransform>& InPositions, enum class EAkMultiPositionType InMultiPositionType);
	void SetMultipleChannelMaskEmitterPositions(class UAkComponent* InGameObjectAkComponent, const TArray<struct FAkChannelMask>& InChannelMasks, const TArray<struct FTransform>& InPositions, enum class EAkMultiPositionType InMultiPositionType);
	void SetMultipleChannelEmitterPositions(class UAkComponent* InGameObjectAkComponent, const TArray<enum class EAkChannelConfiguration>& InChannelMasks, const TArray<struct FTransform>& InPositions, enum class EAkMultiPositionType InMultiPositionType);
	void SetGameObjectToPortalObstruction(class UAkComponent* InGameObjectAkComponent, class UAkPortalComponent* InPortalComponent, float InObstructionValue);
	void SetCurrentAudioCultureAsync(const class FString& InAudioCulture, FDelegateProperty_& InCompleted);
	void SetCurrentAudioCulture(const class FString& InAudioCulture, const struct FLatentActionInfo& InLatentInfo, class UObject* InWorldContextObject);
	void SetBusConfig(const class FString& InBusName, enum class EAkChannelConfiguration InChannelConfiguration);
	void ResetRTPCValue(class UAkRtpc* InRTPCValue, int32 InInterpolationTimeMs, class AActor* InActor, class FName InRTPC);
	void ReplaceMainOutput(struct FAkOutputSettings& InMainOutputSettings);
	void PostTrigger(class UAkTrigger* InTriggerValue, class AActor* InActor, class FName InTrigger);
	void PostGlobalSwitch(class UAkSwitchValue* InSwitchValue, class FName InSwitchGroup, class FName InSwitchState);
	int32 PostGlobalMusic(class UAkAudioEvent* InAkEvent, int32 InCallbackMask, FDelegateProperty_& InPostEventCallback);
	int32 PostGlobalEvent(class UAkAudioEvent* InAkEvent);
	void PostEventByName(const class FString& InEventName, class AActor* InActor, bool InbStopWhenAttachedToDestroyed);
	int32 PostEventAttached(class UAkAudioEvent* InAkEvent, class AActor* InActor, class FName InAttachPointName, bool InbStopWhenAttachedToDestroyed, const class FString& InEventName);
	void PostEventAtLocationByName(const class FString& InEventName, const struct FVector& InLocation, const struct FRotator& InOrientation, class UObject* InWorldContextObject);
	int32 PostEventAtLocation(class UAkAudioEvent* InAkEvent, const struct FVector& InLocation, const struct FRotator& InOrientation, const class FString& InEventName, class UObject* InWorldContextObject);
	int32 PostEvent(class UAkAudioEvent* InAkEvent, class AActor* InActor, int32 InCallbackMask, FDelegateProperty_& InPostEventCallback, TArray<struct FAkExternalSourceInfo>& InExternalSources, bool InbStopWhenAttachedToDestroyed, const class FString& InEventName);
	void PostAndWaitForEndOfEventAsync(class UAkAudioEvent* InAkEvent, class AActor* InActor, int32* InPlayingID, bool InbStopWhenAttachedToDestroyed, TArray<struct FAkExternalSourceInfo>& InExternalSources, const struct FLatentActionInfo& InLatentInfo);
	int32 PostAndWaitForEndOfEvent(class UAkAudioEvent* InAkEvent, class AActor* InActor, bool InbStopWhenAttachedToDestroyed, TArray<struct FAkExternalSourceInfo>& InExternalSources, const class FString& InEventName, const struct FLatentActionInfo& InLatentInfo);
	void LoadInitBank();
	void LoadBanks(TArray<class UAkAudioBank*>& InSoundBanks, bool InSynchronizeSoundBanks);
	void LoadBankByName(const class FString& InBankName);
	void LoadBankAsync(class UAkAudioBank* InBank, FDelegateProperty_& InBankLoadedCallback);
	void LoadBank(class UAkAudioBank* InBank, const class FString& InBankName, const struct FLatentActionInfo& InLatentInfo, class UObject* InWorldContextObject);
	bool IsGame(class UObject* InWorldContextObject);
	bool IsEditor();
	void GetSpeakerAngles(TArray<float>* InSpeakerAngles, float* InHeightAngle, const class FString& InDeviceShareset);
	void GetRTPCValue(class UAkRtpc* InRTPCValue, int32 InPlayingID, enum class ERTPCValueType InInputValueType, float* InValue, enum class ERTPCValueType* InOutputValueType, class AActor* InActor, class FName InRTPC);
	float GetOcclusionScalingFactor();
	class FString GetCurrentAudioCulture();
	TArray<class FString> GetAvailableAudioCultures();
	class UObject* GetAkMediaAssetUserData(class UAkMediaAsset* InInstance, class UClass* InType);
	class UAkComponent* GetAkComponent(class USceneComponent* InAttachToComponent, bool* InComponentCreated, class FName InAttachPointName, const struct FVector& InLocation, enum class EAttachLocation InLocationType);
	class UObject* GetAkAudioTypeUserData(class UAkAudioType* InInstance, class UClass* InType);
	void ExecuteActionOnPlayingID(enum class EAkActionOnEventType InActionType, int32 InPlayingID, int32 InTransitionDuration, enum class EAkCurveInterpolation InFadeCurve);
	void ExecuteActionOnEvent(class UAkAudioEvent* InAkEvent, enum class EAkActionOnEventType InActionType, class AActor* InActor, int32 InTransitionDuration, enum class EAkCurveInterpolation InFadeCurve, int32 InPlayingID);
	void ClearBanks();
	void CancelEventCallback(FDelegateProperty_& InPostEventCallback);
	void AddOutputCaptureMarker(const class FString& InMarkerText);
};

// 0x8 (0x30 - 0x28)
// Class AkAudio.AkCallbackInfo
class UAkCallbackInfo : public UObject
{
public:
	class UAkComponent*                          AkComponent;                                       // 0x28(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AkCallbackInfo");
		return Clss;
	}

};

// 0x8 (0x38 - 0x30)
// Class AkAudio.AkEventCallbackInfo
class UAkEventCallbackInfo : public UAkCallbackInfo
{
public:
	int32                                        PlayingID;                                         // 0x30(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        EventId;                                           // 0x34(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AkEventCallbackInfo");
		return Clss;
	}

};

// 0x10 (0x48 - 0x38)
// Class AkAudio.AkMIDIEventCallbackInfo
class UAkMIDIEventCallbackInfo : public UAkEventCallbackInfo
{
public:
	uint8                                        Pad_934[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AkMIDIEventCallbackInfo");
		return Clss;
	}

	enum class EAkMidiEventType GetType();
	bool GetProgramChange(struct FAkMidiProgramChange* InAsProgramChange);
	bool GetPitchBend(struct FAkMidiPitchBend* InAsPitchBend);
	bool GetNoteOn(struct FAkMidiNoteOnOff* InAsNoteOn);
	bool GetNoteOff(struct FAkMidiNoteOnOff* InAsNoteOff);
	bool GetNoteAftertouch(struct FAkMidiNoteAftertouch* InAsNoteAftertouch);
	bool GetGeneric(struct FAkMidiGeneric* InAsGeneric);
	bool GetChannelAftertouch(struct FAkMidiChannelAftertouch* InAsChannelAftertouch);
	uint8 GetChannel();
	bool GetCc(struct FAkMidiCc* InAsCc);
};

// 0x18 (0x50 - 0x38)
// Class AkAudio.AkMarkerCallbackInfo
class UAkMarkerCallbackInfo : public UAkEventCallbackInfo
{
public:
	int32                                        Identifier;                                        // 0x38(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Position;                                          // 0x3C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Label;                                             // 0x40(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AkMarkerCallbackInfo");
		return Clss;
	}

};

// 0x18 (0x50 - 0x38)
// Class AkAudio.AkDurationCallbackInfo
class UAkDurationCallbackInfo : public UAkEventCallbackInfo
{
public:
	float                                        Duration;                                          // 0x38(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EstimatedDuration;                                 // 0x3C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        AudioNodeID;                                       // 0x40(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MediaID;                                           // 0x44(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bStreaming;                                        // 0x48(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_935[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AkDurationCallbackInfo");
		return Clss;
	}

};

// 0x40 (0x70 - 0x30)
// Class AkAudio.AkMusicSyncCallbackInfo
class UAkMusicSyncCallbackInfo : public UAkCallbackInfo
{
public:
	int32                                        PlayingID;                                         // 0x30(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAkSegmentInfo                        SegmentInfo;                                       // 0x34(0x24)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	enum class EAkCallbackType                   MusicSyncType;                                     // 0x58(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_937[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                UserCueName;                                       // 0x60(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AkMusicSyncCallbackInfo");
		return Clss;
	}

};

// 0x188 (0x440 - 0x2B8)
// Class AkAudio.AkGeometryComponent
class UAkGeometryComponent : public UAkAcousticTextureSetComponent
{
public:
	enum class EAkMeshType                       MeshType;                                          // 0x2B8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_939[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        LOD;                                               // 0x2BC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WeldingThreshold;                                  // 0x2C0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_93B[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class UMaterialInterface*, struct FAkGeometrySurfaceOverride> StaticMeshSurfaceOverride;                         // 0x2C8(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FAkGeometrySurfaceOverride            CollisionMeshSurfaceOverride;                      // 0x318(0x18)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bEnableDiffraction;                                // 0x330(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableDiffractionOnBoundaryEdges;                 // 0x331(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_93C[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                AssociatedRoom;                                    // 0x338(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_93D[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAkGeometryData                       GeometryData;                                      // 0x350(0x50)(NativeAccessSpecifierPrivate)
	TMap<int32, double>                          SurfaceAreas;                                      // 0x3A0(0x50)(NativeAccessSpecifierPrivate)
	uint8                                        Pad_93E[0x50];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AkGeometryComponent");
		return Clss;
	}

	void UpdateGeometry();
	void SendGeometry();
	void RemoveGeometry();
	void ConvertMesh();
};

// 0x28 (0x68 - 0x40)
// Class AkAudio.AkGroupValue
class UAkGroupValue : public UAkAudioType
{
public:
	TArray<TSoftObjectPtr<class UAkMediaAsset>>  MediaDependencies;                                 // 0x40(0x10)(Edit, ZeroConstructor, EditConst, UObjectWrapper, NativeAccessSpecifierPublic)
	uint32                                       GroupShortID;                                      // 0x50(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_93F[0x14];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AkGroupValue");
		return Clss;
	}

};

// 0xD0 (0xF8 - 0x28)
// Class AkAudio.AkHololensInitializationSettings
class UAkHololensInitializationSettings : public UObject
{
public:
	uint8                                        Pad_947[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings;                                    // 0x30(0x68)(Edit, Config, NativeAccessSpecifierPublic)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;                             // 0x98(0x28)(Edit, Config, NativeAccessSpecifierPublic)
	struct FAkHololensAdvancedInitializationSettings AdvancedSettings;                                  // 0xC0(0x34)(Edit, Config, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	uint8                                        Pad_948[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AkHololensInitializationSettings");
		return Clss;
	}

	void MigrateMultiCoreRendering(bool InNewValue);
};

// 0x0 (0x70 - 0x70)
// Class AkAudio.AkHololensPlatformInfo
class UAkHololensPlatformInfo : public UAkPlatformInfo
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AkHololensPlatformInfo");
		return Clss;
	}

};

// 0x10 (0x90 - 0x80)
// Class AkAudio.AkInitBankAssetData
class UAkInitBankAssetData : public UAkAssetDataWithMedia
{
public:
	TArray<struct FAkPluginInfo>                 PluginInfos;                                       // 0x80(0x10)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AkInitBankAssetData");
		return Clss;
	}

};

// 0x20 (0x70 - 0x50)
// Class AkAudio.AkInitBank
class UAkInitBank : public UAkAssetBase
{
public:
	TArray<class FString>                        AvailableAudioCultures;                            // 0x50(0x10)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	class FString                                DefaultLanguage;                                   // 0x60(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AkInitBank");
		return Clss;
	}

};

// 0xD8 (0x100 - 0x28)
// Class AkAudio.AkIOSInitializationSettings
class UAkIOSInitializationSettings : public UObject
{
public:
	uint8                                        Pad_94E[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings;                                    // 0x30(0x68)(Edit, Config, NativeAccessSpecifierPublic)
	struct FAkAudioSession                       AudioSession;                                      // 0x98(0xC)(Edit, Config, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_950[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;                             // 0xA8(0x28)(Edit, Config, NativeAccessSpecifierPublic)
	struct FAkAdvancedInitializationSettings     AdvancedSettings;                                  // 0xD0(0x2C)(Edit, Config, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	uint8                                        Pad_952[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AkIOSInitializationSettings");
		return Clss;
	}

};

// 0x0 (0x70 - 0x70)
// Class AkAudio.AkIOSPlatformInfo
class UAkIOSPlatformInfo : public UAkPlatformInfo
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AkIOSPlatformInfo");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class AkAudio.AkItemBoolPropertiesConv
class UAkItemBoolPropertiesConv : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AkItemBoolPropertiesConv");
		return Clss;
	}

	class FText Conv_FAkBoolPropertyToControlToText(struct FAkBoolPropertyToControl& InINAkBoolPropertyToControl);
	class FString Conv_FAkBoolPropertyToControlToString(struct FAkBoolPropertyToControl& InINAkBoolPropertyToControl);
};

// 0x40 (0x190 - 0x150)
// Class AkAudio.AkItemBoolProperties
class UAkItemBoolProperties : public UWidget
{
public:
	FMulticastInlineDelegateProperty_            OnSelectionChanged;                                // 0x150(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnPropertyDragged;                                 // 0x160(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_977[0x20];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AkItemBoolProperties");
		return Clss;
	}

	void SetSearchText(const class FString& InNewText);
	class FString GetSelectedProperty();
	class FString GetSearchText();
};

// 0x0 (0x28 - 0x28)
// Class AkAudio.AkItemPropertiesConv
class UAkItemPropertiesConv : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AkItemPropertiesConv");
		return Clss;
	}

	class FText Conv_FAkPropertyToControlToText(struct FAkPropertyToControl& InINAkPropertyToControl);
	class FString Conv_FAkPropertyToControlToString(struct FAkPropertyToControl& InINAkPropertyToControl);
};

// 0x40 (0x190 - 0x150)
// Class AkAudio.AkItemProperties
class UAkItemProperties : public UWidget
{
public:
	FMulticastInlineDelegateProperty_            OnSelectionChanged;                                // 0x150(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnPropertyDragged;                                 // 0x160(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_991[0x20];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AkItemProperties");
		return Clss;
	}

	void SetSearchText(const class FString& InNewText);
	class FString GetSelectedProperty();
	class FString GetSearchText();
};

// 0x88 (0x328 - 0x2A0)
// Class AkAudio.AkLateReverbComponent
class UAkLateReverbComponent : public USceneComponent
{
public:
	bool                                         bEnable;                                           // 0x2A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_995[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SendLevel;                                         // 0x2A4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FadeRate;                                          // 0x2A8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Priority;                                          // 0x2AC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AutoAssignAuxBus;                                  // 0x2B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_998[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UAkAuxBus*                             AuxBus;                                            // 0x2B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                AuxBusName;                                        // 0x2C0(0x10)(Edit, BlueprintVisible, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_99A[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UAkAuxBus*                             AuxBusManual;                                      // 0x2D8(0x8)(Edit, ZeroConstructor, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_99B[0x48];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AkLateReverbComponent");
		return Clss;
	}

	void AssociateAkTextureSetComponent(class UAkAcousticTextureSetComponent* InTextureSetComponent);
};

// 0xC8 (0xF0 - 0x28)
// Class AkAudio.AkLinuxInitializationSettings
class UAkLinuxInitializationSettings : public UObject
{
public:
	uint8                                        Pad_9A3[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings;                                    // 0x30(0x68)(Edit, Config, NativeAccessSpecifierPublic)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;                             // 0x98(0x28)(Edit, Config, NativeAccessSpecifierPublic)
	struct FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings;                                  // 0xC0(0x30)(Edit, Config, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AkLinuxInitializationSettings");
		return Clss;
	}

	void MigrateMultiCoreRendering(bool InNewValue);
};

// 0x0 (0x70 - 0x70)
// Class AkAudio.AkLinuxPlatformInfo
class UAkLinuxPlatformInfo : public UAkPlatformInfo
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AkLinuxPlatformInfo");
		return Clss;
	}

};

// 0xC8 (0xF0 - 0x28)
// Class AkAudio.AkMacInitializationSettings
class UAkMacInitializationSettings : public UObject
{
public:
	uint8                                        Pad_9A9[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings;                                    // 0x30(0x68)(Edit, Config, NativeAccessSpecifierPublic)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;                             // 0x98(0x28)(Edit, Config, NativeAccessSpecifierPublic)
	struct FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings;                                  // 0xC0(0x30)(Edit, Config, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AkMacInitializationSettings");
		return Clss;
	}

	void MigrateMultiCoreRendering(bool InNewValue);
};

// 0x0 (0x70 - 0x70)
// Class AkAudio.AkMacPlatformInfo
class UAkMacPlatformInfo : public UAkPlatformInfo
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AkMacPlatformInfo");
		return Clss;
	}

};

// 0x50 (0x78 - 0x28)
// Class AkAudio.AkMediaAssetData
class UAkMediaAssetData : public UObject
{
public:
	bool                                         IsStreamed;                                        // 0x28(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         UseDeviceMemory;                                   // 0x29(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9AB[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Language;                                          // 0x30(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                AssetPlatform;                                     // 0x40(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9AC[0x28];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AkMediaAssetData");
		return Clss;
	}

};

// 0x50 (0x78 - 0x28)
// Class AkAudio.AkMediaAsset
class UAkMediaAsset : public UObject
{
public:
	uint32                                       ID;                                                // 0x28(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9AE[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                MediaName;                                         // 0x30(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AutoLoad;                                          // 0x40(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9B1[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UObject*>                       UserData;                                          // 0x48(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                Language;                                          // 0x58(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkMediaAssetData*                     CurrentMediaAssetData;                             // 0x68(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_9B2[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AkMediaAsset");
		return Clss;
	}

};

// 0x0 (0x78 - 0x78)
// Class AkAudio.AkLocalizedMediaAsset
class UAkLocalizedMediaAsset : public UAkMediaAsset
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AkLocalizedMediaAsset");
		return Clss;
	}

};

// 0x60 (0xD8 - 0x78)
// Class AkAudio.AkExternalMediaAsset
class UAkExternalMediaAsset : public UAkMediaAsset
{
public:
	uint8                                        Pad_9B3[0x60];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AkExternalMediaAsset");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class AkAudio.AkPlatformInitialisationSettingsBase
class IAkPlatformInitialisationSettingsBase : public IInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AkPlatformInitialisationSettingsBase");
		return Clss;
	}

};

// 0xC8 (0xF0 - 0x28)
// Class AkAudio.AkPS4InitializationSettings
class UAkPS4InitializationSettings : public UObject
{
public:
	uint8                                        Pad_9BE[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAkCommonInitializationSettings       CommonSettings;                                    // 0x30(0x60)(Edit, Config, NativeAccessSpecifierPublic)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;                             // 0x90(0x28)(Edit, Config, NativeAccessSpecifierPublic)
	struct FAkPS4AdvancedInitializationSettings  AdvancedSettings;                                  // 0xB8(0x38)(Edit, Config, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AkPS4InitializationSettings");
		return Clss;
	}

	void MigrateMultiCoreRendering(bool InNewValue);
};

// 0x0 (0x70 - 0x70)
// Class AkAudio.AkPS4PlatformInfo
class UAkPS4PlatformInfo : public UAkPlatformInfo
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AkPS4PlatformInfo");
		return Clss;
	}

};

// 0x38 (0x300 - 0x2C8)
// Class AkAudio.AkReverbVolume
class AAkReverbVolume : public AVolume
{
public:
	bool                                         bEnabled;                                          // 0x2C8(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9C4[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UAkAuxBus*                             AuxBus;                                            // 0x2D0(0x8)(ZeroConstructor, Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                AuxBusName;                                        // 0x2D8(0x10)(ZeroConstructor, Deprecated, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SendLevel;                                         // 0x2E8(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FadeRate;                                          // 0x2EC(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Priority;                                          // 0x2F0(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9C5[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UAkLateReverbComponent*                LateReverbComponent;                               // 0x2F8(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AkReverbVolume");
		return Clss;
	}

};

// 0x30 (0x2F0 - 0x2C0)
// Class AkAudio.AkRoomComponent
class UAkRoomComponent : public UAkGameObject
{
public:
	bool                                         bEnable;                                           // 0x2C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDynamic;                                          // 0x2C1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9CF[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Priority;                                          // 0x2C4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WallOcclusion;                                     // 0x2C8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AuxSendLevel;                                      // 0x2CC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AutoPost;                                          // 0x2D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, SimpleDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9D5[0xF];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UAkAcousticTextureSetComponent*        GeometryComponent;                                 // 0x2E0(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_9D6[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AkRoomComponent");
		return Clss;
	}

	void SetGeometryComponent(class UAkAcousticTextureSetComponent* InTextureSetComponent);
	class UPrimitiveComponent* GetPrimitiveParent();
};

// 0x0 (0x40 - 0x40)
// Class AkAudio.AkRtpc
class UAkRtpc : public UAkAudioType
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AkRtpc");
		return Clss;
	}

};

// 0x2E0 (0x308 - 0x28)
// Class AkAudio.AkSettings
class UAkSettings : public UObject
{
public:
	uint8                                        MaxSimultaneousReverbVolumes;                      // 0x28(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9D9[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFilePath                             WwiseProjectPath;                                  // 0x30(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDirectoryPath                        WwiseSoundDataFolder;                              // 0x40(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAutoConnectToWAAPI;                               // 0x50(0x1)(ZeroConstructor, Config, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECollisionChannel                 DefaultOcclusionCollisionChannel;                  // 0x51(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECollisionChannel                 DefaultFitToGeometryCollisionChannel;              // 0x52(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9DE[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<TSoftObjectPtr<class UPhysicalMaterial>, struct FAkGeometrySurfacePropertiesToMap> AkGeometryMap;                                     // 0x58(0x50)(Edit, EditFixedSize, Config, NativeAccessSpecifierPublic)
	float                                        GlobalDecayAbsorption;                             // 0xA8(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9E0[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UAkAuxBus>              DefaultReverbAuxBus;                               // 0xB0(0x30)(Edit, Config, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<float, TSoftObjectPtr<class UAkAuxBus>> EnvironmentDecayAuxBusMap;                         // 0xE0(0x50)(Edit, Config, UObjectWrapper, NativeAccessSpecifierPublic)
	class FString                                HFDampingName;                                     // 0x130(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                DecayEstimateName;                                 // 0x140(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                TimeToFirstReflectionName;                         // 0x150(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UAkRtpc>                HFDampingRTPC;                                     // 0x160(0x30)(Edit, Config, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UAkRtpc>                DecayEstimateRTPC;                                 // 0x190(0x30)(Edit, Config, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UAkRtpc>                TimeToFirstReflectionRTPC;                         // 0x1C0(0x30)(Edit, Config, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UAkAudioEvent>          AudioInputEvent;                                   // 0x1F0(0x30)(Edit, Config, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<struct FGuid, struct FAkAcousticTextureParams> AcousticTextureParamsMap;                          // 0x220(0x50)(Config, NativeAccessSpecifierPublic)
	bool                                         SplitSwitchContainerMedia;                         // 0x270(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         SplitMediaPerFolder;                               // 0x271(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         UseEventBasedPackaging;                            // 0x272(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnsureSoundDataPathIsAlwaysCooked;                // 0x273(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         EnableAutomaticAssetSynchronization;               // 0x274(0x1)(ZeroConstructor, Config, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9EA[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CommandletCommitMessage;                           // 0x278(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FString, class FString>           UnrealCultureToWwiseCulture;                       // 0x288(0x50)(Edit, Config, NativeAccessSpecifierPublic)
	bool                                         AskedToUseNewAssetManagement;                      // 0x2D8(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableMultiCoreRendering;                         // 0x2D9(0x1)(ZeroConstructor, Config, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         MigratedEnableMultiCoreRendering;                  // 0x2DA(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         FixupRedirectorsDuringMigration;                   // 0x2DB(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9EF[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDirectoryPath                        WwiseWindowsInstallationPath;                      // 0x2E0(0x10)(ZeroConstructor, Config, Deprecated, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFilePath                             WwiseMacInstallationPath;                          // 0x2F0(0x10)(ZeroConstructor, Config, Deprecated, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9F8[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AkSettings");
		return Clss;
	}

};

// 0x58 (0x80 - 0x28)
// Class AkAudio.AkSettingsPerUser
class UAkSettingsPerUser : public UObject
{
public:
	struct FDirectoryPath                        WwiseWindowsInstallationPath;                      // 0x28(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFilePath                             WwiseMacInstallationPath;                          // 0x38(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         EnableAutomaticAssetSynchronization;               // 0x48(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9FA[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                WaapiIPAddress;                                    // 0x50(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       WaapiPort;                                         // 0x60(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAutoConnectToWAAPI;                               // 0x64(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AutoSyncSelection;                                 // 0x65(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         SuppressWwiseProjectPathWarnings;                  // 0x66(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         SoundDataGenerationSkipLanguage;                   // 0x67(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9FE[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AkSettingsPerUser");
		return Clss;
	}

};

// 0x5F0 (0x740 - 0x150)
// Class AkAudio.AkSlider
class UAkSlider : public UWidget
{
public:
	float                                        Value;                                             // 0x150(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           ValueDelegate;                                     // 0x154(0x10)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A1B[0xC];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSliderStyle                          WidgetStyle;                                       // 0x170(0x500)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	enum class EOrientation                      Orientation;                                       // 0x670(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A1E[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          SliderBarColor;                                    // 0x674(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          SliderHandleColor;                                 // 0x684(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IndentHandle;                                      // 0x694(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Locked;                                            // 0x695(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A22[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        StepSize;                                          // 0x698(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsFocusable;                                       // 0x69C(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A24[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAkPropertyToControl                  ThePropertyToControl;                              // 0x6A0(0x10)(Edit, EditConst, NativeAccessSpecifierPublic)
	struct FAkWwiseItemToControl                 ItemToControl;                                     // 0x6B0(0x40)(Edit, Config, EditConst, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnValueChanged;                                    // 0x6F0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnItemDropped;                                     // 0x700(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnPropertyDropped;                                 // 0x710(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_A27[0x20];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AkSlider");
		return Clss;
	}

	void SetValue(float InInValue);
	void SetStepSize(float InInValue);
	void SetSliderHandleColor(const struct FLinearColor& InInValue);
	void SetSliderBarColor(const struct FLinearColor& InInValue);
	void SetLocked(bool InInValue);
	void SetIndentHandle(bool InInValue);
	void SetAkSliderItemProperty(const class FString& InItemProperty);
	void SetAkSliderItemId(struct FGuid& InItemId);
	float GetValue();
	class FString GetAkSliderItemProperty();
	struct FGuid GetAkSliderItemId();
};

// 0x18 (0x2E0 - 0x2C8)
// Class AkAudio.AkSpatialAudioVolume
class AAkSpatialAudioVolume : public AVolume
{
public:
	class UAkSurfaceReflectorSetComponent*       SurfaceReflectorSet;                               // 0x2C8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkLateReverbComponent*                LateReverb;                                        // 0x2D0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkRoomComponent*                      Room;                                              // 0x2D8(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AkSpatialAudioVolume");
		return Clss;
	}

};

// 0x28 (0x2B8 - 0x290)
// Class AkAudio.AkSpotReflector
class AAkSpotReflector : public AActor
{
public:
	class UAkAuxBus*                             EarlyReflectionAuxBus;                             // 0x290(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                EarlyReflectionAuxBusName;                         // 0x298(0x10)(Edit, BlueprintVisible, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAkAcousticTexture*                    AcousticTexture;                                   // 0x2A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DistanceScalingFactor;                             // 0x2B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Level;                                             // 0x2B4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AkSpotReflector");
		return Clss;
	}

};

// 0x0 (0x68 - 0x68)
// Class AkAudio.AkStateValue
class UAkStateValue : public UAkGroupValue
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AkStateValue");
		return Clss;
	}

};

// 0x50 (0x510 - 0x4C0)
// Class AkAudio.AkSubmixInputComponent
class UAkSubmixInputComponent : public UAkAudioInputComponent
{
public:
	class USoundSubmix*                          SubmixToRecord;                                    // 0x4C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A35[0x48];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AkSubmixInputComponent");
		return Clss;
	}

};

// 0x38 (0x2F0 - 0x2B8)
// Class AkAudio.AkSurfaceReflectorSetComponent
class UAkSurfaceReflectorSetComponent : public UAkAcousticTextureSetComponent
{
public:
	bool                                         bEnableSurfaceReflectors;                          // 0x2B8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A3F[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FAkSurfacePoly>                AcousticPolys;                                     // 0x2C0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bEnableDiffraction;                                // 0x2D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableDiffractionOnBoundaryEdges;                 // 0x2D1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A42[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                AssociatedRoom;                                    // 0x2D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A43[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AkSurfaceReflectorSetComponent");
		return Clss;
	}

	void UpdateSurfaceReflectorSet();
	void SendSurfaceReflectorSet();
	void RemoveSurfaceReflectorSet();
};

// 0xC8 (0xF0 - 0x28)
// Class AkAudio.AkSwitchInitializationSettings
class UAkSwitchInitializationSettings : public UObject
{
public:
	uint8                                        Pad_A47[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings;                                    // 0x30(0x68)(Edit, Config, NativeAccessSpecifierPublic)
	struct FAkCommunicationSettingsWithCommSelection CommunicationSettings;                             // 0x98(0x28)(Edit, Config, NativeAccessSpecifierPublic)
	struct FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings;                                  // 0xC0(0x30)(Edit, Config, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AkSwitchInitializationSettings");
		return Clss;
	}

	void MigrateMultiCoreRendering(bool InNewValue);
};

// 0x0 (0x70 - 0x70)
// Class AkAudio.AkSwitchPlatformInfo
class UAkSwitchPlatformInfo : public UAkPlatformInfo
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AkSwitchPlatformInfo");
		return Clss;
	}

};

// 0x0 (0x68 - 0x68)
// Class AkAudio.AkSwitchValue
class UAkSwitchValue : public UAkGroupValue
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AkSwitchValue");
		return Clss;
	}

};

// 0x0 (0x40 - 0x40)
// Class AkAudio.AkTrigger
class UAkTrigger : public UAkAudioType
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AkTrigger");
		return Clss;
	}

};

// 0xD8 (0x100 - 0x28)
// Class AkAudio.AkTVOSInitializationSettings
class UAkTVOSInitializationSettings : public UObject
{
public:
	uint8                                        Pad_A4E[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings;                                    // 0x30(0x68)(Edit, Config, NativeAccessSpecifierPublic)
	struct FAkAudioSession                       AudioSession;                                      // 0x98(0xC)(Edit, Config, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_A50[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;                             // 0xA8(0x28)(Edit, Config, NativeAccessSpecifierPublic)
	struct FAkAdvancedInitializationSettings     AdvancedSettings;                                  // 0xD0(0x2C)(Edit, Config, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	uint8                                        Pad_A51[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AkTVOSInitializationSettings");
		return Clss;
	}

};

// 0x0 (0x70 - 0x70)
// Class AkAudio.AkTVOSPlatformInfo
class UAkTVOSPlatformInfo : public UAkPlatformInfo
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AkTVOSPlatformInfo");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class AkAudio.AkWaapiCalls
class UAkWaapiCalls : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AkWaapiCalls");
		return Clss;
	}

	struct FAKWaapiJsonObject Unsubscribe(struct FAkWaapiSubscriptionId& InSubscriptionId, bool* InUnsubscriptionDone);
	struct FAKWaapiJsonObject SubscribeToWaapi(struct FAkWaapiUri& InWaapiUri, struct FAKWaapiJsonObject& InWaapiOptions, FDelegateProperty_& InCallback, struct FAkWaapiSubscriptionId* InSubscriptionId, bool* InSubscriptionDone);
	void SetSubscriptionID(struct FAkWaapiSubscriptionId& InSubscription, int32 InID);
	bool RegisterWaapiProjectLoadedCallback(FDelegateProperty_& InCallback);
	bool RegisterWaapiConnectionLostCallback(FDelegateProperty_& InCallback);
	int32 GetSubscriptionID(struct FAkWaapiSubscriptionId& InSubscription);
	class FText Conv_FAkWaapiSubscriptionIdToText(struct FAkWaapiSubscriptionId& InINAkWaapiSubscriptionId);
	class FString Conv_FAkWaapiSubscriptionIdToString(struct FAkWaapiSubscriptionId& InINAkWaapiSubscriptionId);
	struct FAKWaapiJsonObject CallWaapi(struct FAkWaapiUri& InWaapiUri, struct FAKWaapiJsonObject& InWaapiArgs, struct FAKWaapiJsonObject& InWaapiOptions);
};

// 0x0 (0x28 - 0x28)
// Class AkAudio.SAkWaapiFieldNamesConv
class USAkWaapiFieldNamesConv : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SAkWaapiFieldNamesConv");
		return Clss;
	}

	class FText Conv_FAkWaapiFieldNamesToText(struct FAkWaapiFieldNames& InINAkWaapiFieldNames);
	class FString Conv_FAkWaapiFieldNamesToString(struct FAkWaapiFieldNames& InINAkWaapiFieldNames);
};

// 0x0 (0x28 - 0x28)
// Class AkAudio.AkWaapiJsonManager
class UAkWaapiJsonManager : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AkWaapiJsonManager");
		return Clss;
	}

	struct FAKWaapiJsonObject SetStringField(struct FAkWaapiFieldNames& InFieldName, const class FString& InFieldValue, const struct FAKWaapiJsonObject& InTarget);
	struct FAKWaapiJsonObject SetObjectField(struct FAkWaapiFieldNames& InFieldName, const struct FAKWaapiJsonObject& InFieldValue, const struct FAKWaapiJsonObject& InTarget);
	struct FAKWaapiJsonObject SetNumberField(struct FAkWaapiFieldNames& InFieldName, float InFieldValue, const struct FAKWaapiJsonObject& InTarget);
	struct FAKWaapiJsonObject SetBoolField(struct FAkWaapiFieldNames& InFieldName, bool InFieldValue, const struct FAKWaapiJsonObject& InTarget);
	struct FAKWaapiJsonObject SetArrayStringFields(struct FAkWaapiFieldNames& InFieldName, TArray<class FString>& InFieldStringValues, const struct FAKWaapiJsonObject& InTarget);
	struct FAKWaapiJsonObject SetArrayObjectFields(struct FAkWaapiFieldNames& InFieldName, TArray<struct FAKWaapiJsonObject>& InFieldObjectValues, const struct FAKWaapiJsonObject& InTarget);
	class FString GetStringField(struct FAkWaapiFieldNames& InFieldName, const struct FAKWaapiJsonObject& InTarget);
	struct FAKWaapiJsonObject GetObjectField(struct FAkWaapiFieldNames& InFieldName, const struct FAKWaapiJsonObject& InTarget);
	float GetNumberField(struct FAkWaapiFieldNames& InFieldName, const struct FAKWaapiJsonObject& InTarget);
	int32 GetIntegerField(struct FAkWaapiFieldNames& InFieldName, const struct FAKWaapiJsonObject& InTarget);
	bool GetBoolField(struct FAkWaapiFieldNames& InFieldName, const struct FAKWaapiJsonObject& InTarget);
	TArray<struct FAKWaapiJsonObject> GetArrayField(struct FAkWaapiFieldNames& InFieldName, const struct FAKWaapiJsonObject& InTarget);
	class FText Conv_FAKWaapiJsonObjectToText(const struct FAKWaapiJsonObject& InINAKWaapiJsonObject);
	class FString Conv_FAKWaapiJsonObjectToString(const struct FAKWaapiJsonObject& InINAKWaapiJsonObject);
};

// 0x0 (0x28 - 0x28)
// Class AkAudio.AkWaapiUriConv
class UAkWaapiUriConv : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AkWaapiUriConv");
		return Clss;
	}

	class FText Conv_FAkWaapiUriToText(struct FAkWaapiUri& InINAkWaapiUri);
	class FString Conv_FAkWaapiUriToString(struct FAkWaapiUri& InINAkWaapiUri);
};

// 0xD0 (0xF8 - 0x28)
// Class AkAudio.AkWindowsInitializationSettings
class UAkWindowsInitializationSettings : public UObject
{
public:
	uint8                                        Pad_B43[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAkCommonInitializationSettingsWithSampleRate CommonSettings;                                    // 0x30(0x68)(Edit, Config, NativeAccessSpecifierPublic)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;                             // 0x98(0x28)(Edit, Config, NativeAccessSpecifierPublic)
	struct FAkWindowsAdvancedInitializationSettings AdvancedSettings;                                  // 0xC0(0x38)(Edit, Config, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AkWindowsInitializationSettings");
		return Clss;
	}

	void MigrateMultiCoreRendering(bool InNewValue);
};

// 0x0 (0x70 - 0x70)
// Class AkAudio.AkWin32PlatformInfo
class UAkWin32PlatformInfo : public UAkPlatformInfo
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AkWin32PlatformInfo");
		return Clss;
	}

};

// 0x0 (0x70 - 0x70)
// Class AkAudio.AkWin64PlatformInfo
class UAkWin64PlatformInfo : public UAkPlatformInfo
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AkWin64PlatformInfo");
		return Clss;
	}

};

// 0x0 (0x70 - 0x70)
// Class AkAudio.AkWindowsPlatformInfo
class UAkWindowsPlatformInfo : public UAkWin64PlatformInfo
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AkWindowsPlatformInfo");
		return Clss;
	}

};

// 0x40 (0x190 - 0x150)
// Class AkAudio.AkWwiseTree
class UAkWwiseTree : public UWidget
{
public:
	FMulticastInlineDelegateProperty_            OnSelectionChanged;                                // 0x150(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnItemDragged;                                     // 0x160(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_B58[0x20];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AkWwiseTree");
		return Clss;
	}

	void SetSearchText(const class FString& InNewText);
	struct FAkWwiseObjectDetails GetSelectedItem();
	class FString GetSearchText();
};

// 0x60 (0x1B0 - 0x150)
// Class AkAudio.AkWwiseTreeSelector
class UAkWwiseTreeSelector : public UWidget
{
public:
	FMulticastInlineDelegateProperty_            OnSelectionChanged;                                // 0x150(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnItemDragged;                                     // 0x160(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_B5A[0x40];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AkWwiseTreeSelector");
		return Clss;
	}

};

// 0xD0 (0xF8 - 0x28)
// Class AkAudio.AkXboxOneInitializationSettings
class UAkXboxOneInitializationSettings : public UObject
{
public:
	uint8                                        Pad_B5D[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAkCommonInitializationSettings       CommonSettings;                                    // 0x30(0x60)(Edit, Config, NativeAccessSpecifierPublic)
	struct FAkXboxOneApuHeapInitializationSettings ApuHeapSettings;                                   // 0x90(0x8)(Edit, Config, NoDestructor, NativeAccessSpecifierPublic)
	struct FAkCommunicationSettingsWithSystemInitialization CommunicationSettings;                             // 0x98(0x28)(Edit, Config, NativeAccessSpecifierPublic)
	struct FAkXboxOneAdvancedInitializationSettings AdvancedSettings;                                  // 0xC0(0x34)(Edit, Config, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	uint8                                        Pad_B62[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AkXboxOneInitializationSettings");
		return Clss;
	}

	void MigrateMultiCoreRendering(bool InNewValue);
};

// 0x0 (0x70 - 0x70)
// Class AkAudio.AkXboxOnePlatformInfo
class UAkXboxOnePlatformInfo : public UAkPlatformInfo
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AkXboxOnePlatformInfo");
		return Clss;
	}

};

// 0xE8 (0x1D8 - 0xF0)
// Class AkAudio.MovieSceneAkAudioEventSection
class UMovieSceneAkAudioEventSection : public UMovieSceneSection
{
public:
	uint8                                        Pad_B67[0x40];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAkAudioEvent*                         Event;                                             // 0x130(0x8)(Edit, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         RetriggerEvent;                                    // 0x138(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_B68[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ScrubTailLengthMs;                                 // 0x13C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         StopAtSectionEnd;                                  // 0x140(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_B69[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                EventName;                                         // 0x148(0x10)(Edit, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_B6A[0x20];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MaxSourceDuration;                                 // 0x178(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_B6B[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                MaxDurationSourceID;                               // 0x180(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_B6C[0x48];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneAkAudioEventSection");
		return Clss;
	}

};

// 0x18 (0xB0 - 0x98)
// Class AkAudio.MovieSceneAkTrack
class UMovieSceneAkTrack : public UMovieSceneTrack
{
public:
	TArray<class UMovieSceneSection*>            Sections;                                          // 0x98(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	bool                                         bIsAMasterTrack;                                   // 0xA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_B6E[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneAkTrack");
		return Clss;
	}

};

// 0x8 (0xB8 - 0xB0)
// Class AkAudio.MovieSceneAkAudioEventTrack
class UMovieSceneAkAudioEventTrack : public UMovieSceneAkTrack
{
public:
	uint8                                        Pad_B71[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneAkAudioEventTrack");
		return Clss;
	}

};

// 0x1D8 (0x2C8 - 0xF0)
// Class AkAudio.MovieSceneAkAudioRTPCSection
class UMovieSceneAkAudioRTPCSection : public UMovieSceneSection
{
public:
	class UAkRtpc*                               RTPC;                                              // 0xF0(0x8)(Edit, ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FString                                Name;                                              // 0xF8(0x10)(Edit, ZeroConstructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FRichCurve                            FloatCurve;                                        // 0x108(0x80)(Protected, NativeAccessSpecifierProtected)
	struct FMovieSceneFloatChannelSerializationHelper FloatChannelSerializationHelper;                   // 0x188(0x30)(Protected, NativeAccessSpecifierProtected)
	struct FMovieSceneFloatChannel               RTPCChannel;                                       // 0x1B8(0x110)(Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneAkAudioRTPCSection");
		return Clss;
	}

};

// 0x8 (0xB8 - 0xB0)
// Class AkAudio.MovieSceneAkAudioRTPCTrack
class UMovieSceneAkAudioRTPCTrack : public UMovieSceneAkTrack
{
public:
	uint8                                        Pad_B74[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneAkAudioRTPCTrack");
		return Clss;
	}

};

// 0x70 (0xA0 - 0x30)
// Class AkAudio.PostEventAsync
class UPostEventAsync : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            Completed;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_B85[0x60];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PostEventAsync");
		return Clss;
	}

	class UPostEventAsync* PostEventAsync(class UObject* InWorldContextObject, class UAkAudioEvent* InAkEvent, class AActor* InActor, int32 InCallbackMask, FDelegateProperty_& InPostEventCallback, TArray<struct FAkExternalSourceInfo>& InExternalSources, bool InbStopWhenAttachedToDestroyed);
	void PollPostEventFuture();
};

// 0x68 (0x98 - 0x30)
// Class AkAudio.PostEventAtLocationAsync
class UPostEventAtLocationAsync : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            Completed;                                         // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_B9A[0x58];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PostEventAtLocationAsync");
		return Clss;
	}

	class UPostEventAtLocationAsync* PostEventAtLocationAsync(class UObject* InWorldContextObject, class UAkAudioEvent* InAkEvent, const struct FVector& InLocation, const struct FRotator& InOrientation);
	void PollPostEventFuture();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
