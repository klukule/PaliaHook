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

enum class ES6PLAT_PlayerBehaviorReportType : uint8
{
	ES6PLAT_PlayerBehaviorReportType__Positive = 0,
	ES6PLAT_PlayerBehaviorReportType__Negative = 1,
	ES6PLAT_PlayerBehaviorReportType__ES6PLAT_MAX = 2,
};

enum class ES6PLAT_PlayerBehaviorReportSource : uint8
{
	ES6PLAT_PlayerBehaviorReportSource__SocialPanel = 0,
	ES6PLAT_PlayerBehaviorReportSource__CharacterCard = 1,
	ES6PLAT_PlayerBehaviorReportSource__Chat = 2,
	ES6PLAT_PlayerBehaviorReportSource__ES6PLAT_MAX = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x20 - 0x0)
// ScriptStruct S6PlatformServiceSubsystems.S6PLAT_PlayerBehaviorReportCategoryInfo
struct FS6PLAT_PlayerBehaviorReportCategoryInfo
{
public:
	class FText                                  DisplayName;                                       // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	enum class ES6PLAT_PlayerBehaviorReportType  ReportType;                                        // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18A7[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// ScriptStruct S6PlatformServiceSubsystems.S6PLAT_ChatMessage
struct FS6PLAT_ChatMessage
{
public:
	struct FGuid                                 SenderId;                                          // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ChannelName;                                       // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Content;                                           // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                             CreatedAt;                                         // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xA8 (0xA8 - 0x0)
// ScriptStruct S6PlatformServiceSubsystems.S6PLAT_PlayerBehaviorReportForm
struct FS6PLAT_PlayerBehaviorReportForm
{
public:
	struct FGuid                                 TargetAccountId;                                   // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 TargetCharacterId;                                 // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 ReporterAccountId;                                 // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 ReporterCharacterId;                               // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ES6PLAT_PlayerBehaviorReportSource ReportSource;                                      // 0x40(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ES6PLAT_PlayerBehaviorReportType  ReportType;                                        // 0x41(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18AA[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CategoryName;                                      // 0x44(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18AC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Comment;                                           // 0x50(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FS6PLAT_ChatMessage                   ReportedMessage;                                   // 0x60(0x38)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<struct FS6PLAT_ChatMessage>           SurroundingMessages;                               // 0x98(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
