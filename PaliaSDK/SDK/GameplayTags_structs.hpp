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

enum class EGameplayContainerMatchType : uint8
{
	EGameplayContainerMatchType__Any = 0,
	EGameplayContainerMatchType__All = 1,
	EGameplayContainerMatchType__EGameplayContainerMatchType_MAX = 2,
};

enum class EGameplayTagQueryExprType : uint8
{
	EGameplayTagQueryExprType__Undefined = 0,
	EGameplayTagQueryExprType__AnyTagsMatch = 1,
	EGameplayTagQueryExprType__AllTagsMatch = 2,
	EGameplayTagQueryExprType__NoTagsMatch = 3,
	EGameplayTagQueryExprType__AnyExprMatch = 4,
	EGameplayTagQueryExprType__AllExprMatch = 5,
	EGameplayTagQueryExprType__NoExprMatch = 6,
	EGameplayTagQueryExprType__EGameplayTagQueryExprType_MAX = 7,
};

enum class EGameplayTagSourceType : uint8
{
	EGameplayTagSourceType__Native = 0,
	EGameplayTagSourceType__DefaultTagList = 1,
	EGameplayTagSourceType__TagList = 2,
	EGameplayTagSourceType__RestrictedTagList = 3,
	EGameplayTagSourceType__DataTable = 4,
	EGameplayTagSourceType__Invalid = 5,
	EGameplayTagSourceType__EGameplayTagSourceType_MAX = 6,
};

enum class EGameplayTagSelectionType : uint8
{
	EGameplayTagSelectionType__None = 0,
	EGameplayTagSelectionType__NonRestrictedOnly = 1,
	EGameplayTagSelectionType__RestrictedOnly = 2,
	EGameplayTagSelectionType__All = 3,
	EGameplayTagSelectionType__EGameplayTagSelectionType_MAX = 4,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x8 - 0x0)
// ScriptStruct GameplayTags.GameplayTag
struct FGameplayTag
{
public:
	class FName                                  TagName;                                           // 0x0(0x8)(Edit, ZeroConstructor, EditConst, SaveGame, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct GameplayTags.GameplayTagContainer
struct FGameplayTagContainer
{
public:
	TArray<struct FGameplayTag>                  GameplayTags;                                      // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, EditConst, SaveGame, Protected, NativeAccessSpecifierProtected)
	TArray<struct FGameplayTag>                  ParentTags;                                        // 0x10(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct GameplayTags.GameplayTagQuery
struct FGameplayTagQuery
{
public:
	int32                                        TokenStreamVersion;                                // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_26BD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FGameplayTag>                  TagDictionary;                                     // 0x8(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<uint8>                                QueryTokenStream;                                  // 0x18(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	class FString                                UserDescription;                                   // 0x28(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                AutoDescription;                                   // 0x38(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct GameplayTags.GameplayTagContainerNetSerializerConfig
struct FGameplayTagContainerNetSerializerConfig : public FNetSerializerConfig
{
public:
	uint8                                        Pad_26C0[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// ScriptStruct GameplayTags.GameplayTagNetSerializerConfig
struct FGameplayTagNetSerializerConfig : public FNetSerializerConfig
{
public:
	uint8                                        Pad_26C1[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GameplayTags.GameplayTagContainerNetSerializerSerializationHelper
struct FGameplayTagContainerNetSerializerSerializationHelper
{
public:
	TArray<struct FGameplayTag>                  GameplayTags;                                      // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GameplayTags.GameplayTagReferenceHelper
struct FGameplayTagReferenceHelper
{
public:
	uint8                                        Pad_26C6[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// ScriptStruct GameplayTags.GameplayTagCreationWidgetHelper
struct FGameplayTagCreationWidgetHelper
{
public:
	uint8                                        Pad_26C7[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GameplayTags.GameplayTagRedirect
struct FGameplayTagRedirect
{
public:
	class FName                                  OldTagName;                                        // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  NewTagName;                                        // 0x8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct GameplayTags.GameplayTagTableRow
struct FGameplayTagTableRow : public FTableRowBase
{
public:
	class FName                                  Tag;                                               // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                DevComment;                                        // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x28 - 0x20)
// ScriptStruct GameplayTags.RestrictedGameplayTagTableRow
struct FRestrictedGameplayTagTableRow : public FGameplayTagTableRow
{
public:
	bool                                         bAllowNonRestrictedChildren;                       // 0x20(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_26C8[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct GameplayTags.GameplayTagSource
struct FGameplayTagSource
{
public:
	class FName                                  SourceName;                                        // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGameplayTagSourceType            SourceType;                                        // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_26C9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGameplayTagsList*                     SourceTagList;                                     // 0x10(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class URestrictedGameplayTagsList*           SourceRestrictedTagList;                           // 0x18(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct GameplayTags.GameplayTagNode
struct FGameplayTagNode
{
public:
	uint8                                        Pad_26CC[0x50];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct GameplayTags.GameplayTagCategoryRemap
struct FGameplayTagCategoryRemap
{
public:
	class FString                                BaseCategory;                                      // 0x0(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        RemapCategories;                                   // 0x10(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct GameplayTags.RestrictedConfigInfo
struct FRestrictedConfigInfo
{
public:
	class FString                                RestrictedConfigName;                              // 0x0(0x10)(Edit, ZeroConstructor, Config, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        Owners;                                            // 0x10(0x10)(Edit, ZeroConstructor, Config, AdvancedDisplay, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
