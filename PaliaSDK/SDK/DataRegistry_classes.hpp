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

// 0x18 (0x50 - 0x38)
// Class DataRegistry.DataRegistrySettings
class UDataRegistrySettings : public UDeveloperSettings
{
public:
	TArray<struct FDirectoryPath>                DirectoriesToScan;                                 // 0x38(0x10)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	bool                                         bInitializeAllLoadedRegistries;                    // 0x48(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIgnoreMissingCookedAssetRegistryData;             // 0x49(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_599[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("DataRegistrySettings");
		return Clss;
	}

};

// 0x98 (0xC0 - 0x28)
// Class DataRegistry.DataRegistry
class UDataRegistry : public UObject
{
public:
	class FName                                  RegistryType;                                      // 0x28(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, AssetRegistrySearchable, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDataRegistryIdFormat                 IdFormat;                                          // 0x30(0x8)(Edit, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	class UScriptStruct*                         ItemStruct;                                        // 0x38(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, AssetRegistrySearchable, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class UDataRegistrySource*>           DataSources;                                       // 0x40(0x10)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TArray<class UDataRegistrySource*>           RuntimeSources;                                    // 0x50(0x10)(Edit, ExportObject, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, ContainsInstancedReference, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	float                                        TimerUpdateFrequency;                              // 0x60(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDataRegistryCachePolicy              DefaultCachePolicy;                                // 0x64(0x14)(Edit, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_59C[0x48];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("DataRegistry");
		return Clss;
	}

};

// 0x10 (0x38 - 0x28)
// Class DataRegistry.DataRegistrySource
class UDataRegistrySource : public UObject
{
public:
	uint8                                        Pad_59E[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UDataRegistrySource*                   ParentSource;                                      // 0x30(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("DataRegistrySource");
		return Clss;
	}

};

// 0xD0 (0x108 - 0x38)
// Class DataRegistry.MetaDataRegistrySource
class UMetaDataRegistrySource : public UDataRegistrySource
{
public:
	enum class EMetaDataRegistrySourceAssetUsage AssetUsage;                                        // 0x38(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5A4[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAssetManagerSearchRules              SearchRules;                                       // 0x40(0x50)(Edit, NativeAccessSpecifierPublic)
	TMap<class FName, class UDataRegistrySource*> RuntimeChildren;                                   // 0x90(0x50)(ExportObject, Transient, ContainsInstancedReference, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	uint8                                        Pad_5A6[0x28];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MetaDataRegistrySource");
		return Clss;
	}

};

// 0x70 (0xA8 - 0x38)
// Class DataRegistry.DataRegistrySource_CurveTable
class UDataRegistrySource_CurveTable : public UDataRegistrySource
{
public:
	TSoftObjectPtr<class UCurveTable>            SourceTable;                                       // 0x38(0x30)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDataRegistrySource_DataTableRules    TableRules;                                        // 0x68(0x8)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	class UCurveTable*                           CachedTable;                                       // 0x70(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCurveTable*                           PreloadTable;                                      // 0x78(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_5AA[0x28];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("DataRegistrySource_CurveTable");
		return Clss;
	}

};

// 0x10 (0x118 - 0x108)
// Class DataRegistry.MetaDataRegistrySource_CurveTable
class UMetaDataRegistrySource_CurveTable : public UMetaDataRegistrySource
{
public:
	TSubclassOf<class UDataRegistrySource_CurveTable> CreatedSource;                                     // 0x108(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDataRegistrySource_DataTableRules    TableRules;                                        // 0x110(0x8)(Edit, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MetaDataRegistrySource_CurveTable");
		return Clss;
	}

};

// 0x70 (0xA8 - 0x38)
// Class DataRegistry.DataRegistrySource_DataTable
class UDataRegistrySource_DataTable : public UDataRegistrySource
{
public:
	TSoftObjectPtr<class UDataTable>             SourceTable;                                       // 0x38(0x30)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDataRegistrySource_DataTableRules    TableRules;                                        // 0x68(0x8)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	class UDataTable*                            CachedTable;                                       // 0x70(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDataTable*                            PreloadTable;                                      // 0x78(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_5AE[0x28];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("DataRegistrySource_DataTable");
		return Clss;
	}

};

// 0x10 (0x118 - 0x108)
// Class DataRegistry.MetaDataRegistrySource_DataTable
class UMetaDataRegistrySource_DataTable : public UMetaDataRegistrySource
{
public:
	TSubclassOf<class UDataRegistrySource_DataTable> CreatedSource;                                     // 0x108(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDataRegistrySource_DataTableRules    TableRules;                                        // 0x110(0x8)(Edit, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MetaDataRegistrySource_DataTable");
		return Clss;
	}

};

// 0x98 (0xC8 - 0x30)
// Class DataRegistry.DataRegistrySubsystem
class UDataRegistrySubsystem : public UEngineSubsystem
{
public:
	uint8                                        Pad_621[0x98];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("DataRegistrySubsystem");
		return Clss;
	}

	bool NotEqual_DataRegistryType(const struct FDataRegistryType& InA, const struct FDataRegistryType& InB);
	bool NotEqual_DataRegistryId(const struct FDataRegistryId& InA, const struct FDataRegistryId& InB);
	bool IsValidDataRegistryType(const struct FDataRegistryType& InDataRegistryType);
	bool IsValidDataRegistryId(const struct FDataRegistryId& InDataRegistryId);
	bool GetCachedItemFromLookupBP(const struct FDataRegistryId& InItemId, struct FDataRegistryLookup& InResolvedLookup, struct FTableRowBase* InOutItem);
	bool GetCachedItemBP(const struct FDataRegistryId& InItemId, struct FTableRowBase& InOutItem);
	void FindCachedItemBP(const struct FDataRegistryId& InItemId, enum class EDataRegistrySubsystemGetItemResult* InOutResult, struct FTableRowBase* InOutItem);
	void EvaluateDataRegistryCurve(const struct FDataRegistryId& InItemId, float InInputValue, float InDefaultValue, enum class EDataRegistrySubsystemGetItemResult* InOutResult, float* InOutValue);
	bool EqualEqual_DataRegistryType(const struct FDataRegistryType& InA, const struct FDataRegistryType& InB);
	bool EqualEqual_DataRegistryId(const struct FDataRegistryId& InA, const struct FDataRegistryId& InB);
	class FString Conv_DataRegistryTypeToString(const struct FDataRegistryType& InDataRegistryType);
	class FString Conv_DataRegistryIdToString(const struct FDataRegistryId& InDataRegistryId);
	bool AcquireItemBP(const struct FDataRegistryId& InItemId, FDelegateProperty_ InAcquireCallback);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
