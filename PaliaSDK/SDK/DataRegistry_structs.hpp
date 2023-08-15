#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EDataRegistryAcquireStatus : uint8
{
	EDataRegistryAcquireStatus__NotStarted = 0,
	EDataRegistryAcquireStatus__WaitingForInitialAcquire = 1,
	EDataRegistryAcquireStatus__InitialAcquireFinished = 2,
	EDataRegistryAcquireStatus__WaitingForResources = 3,
	EDataRegistryAcquireStatus__AcquireFinished = 4,
	EDataRegistryAcquireStatus__AcquireError = 5,
	EDataRegistryAcquireStatus__DoesNotExist = 6,
	EDataRegistryAcquireStatus__EDataRegistryAcquireStatus_MAX = 7,
};

enum class EMetaDataRegistrySourceAssetUsage : uint8
{
	EMetaDataRegistrySourceAssetUsage__NoAssets = 0,
	EMetaDataRegistrySourceAssetUsage__SearchAssets = 1,
	EMetaDataRegistrySourceAssetUsage__RegisterAssets = 2,
	EMetaDataRegistrySourceAssetUsage__SearchAndRegisterAssets = 3,
	EMetaDataRegistrySourceAssetUsage__EMetaDataRegistrySourceAssetUsage_MAX = 4,
};

enum class EDataRegistrySubsystemGetItemResult : uint8
{
	EDataRegistrySubsystemGetItemResult__Found = 0,
	EDataRegistrySubsystemGetItemResult__NotFound = 1,
	EDataRegistrySubsystemGetItemResult__EDataRegistrySubsystemGetItemResult_MAX = 2,
};

enum class EDataRegistryAvailability : uint8
{
	EDataRegistryAvailability__DoesNotExist = 0,
	EDataRegistryAvailability__Unknown = 1,
	EDataRegistryAvailability__Remote = 2,
	EDataRegistryAvailability__OnDisk = 3,
	EDataRegistryAvailability__LocalAsset = 4,
	EDataRegistryAvailability__PreCached = 5,
	EDataRegistryAvailability__EDataRegistryAvailability_MAX = 6,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x20 - 0x0)
// ScriptStruct DataRegistry.DataRegistryLookup
struct FDataRegistryLookup
{
public:
	uint8                                        Pad_68C[0x20];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct DataRegistry.DataRegistryType
struct FDataRegistryType
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct DataRegistry.DataRegistryId
struct FDataRegistryId
{
public:
	struct FDataRegistryType                     RegistryType;                                      // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ItemName;                                          // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct DataRegistry.DataRegistrySource_DataTableRules
struct FDataRegistrySource_DataTableRules
{
public:
	bool                                         bPrecacheTable;                                    // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_694[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CachedTableKeepSeconds;                            // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct DataRegistry.DataRegistryIdFormat
struct FDataRegistryIdFormat
{
public:
	struct FGameplayTag                          BaseGameplayTag;                                   // 0x0(0x8)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct DataRegistry.DataRegistryCachePolicy
struct FDataRegistryCachePolicy
{
public:
	bool                                         bCacheIsAlwaysVolatile;                            // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseCurveTableCacheVersion;                        // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_698[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MinNumberKept;                                     // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxNumberKept;                                     // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ForceKeepSeconds;                                  // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ForceReleaseSeconds;                               // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct DataRegistry.DataRegistrySourceItemId
struct FDataRegistrySourceItemId
{
public:
	uint8                                        Pad_69E[0x40];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
