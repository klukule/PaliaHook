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

enum class ETwoPlayerSplitScreenType : uint8
{
	ETwoPlayerSplitScreenType__Horizontal = 0,
	ETwoPlayerSplitScreenType__Vertical = 1,
	ETwoPlayerSplitScreenType__ETwoPlayerSplitScreenType_MAX = 2,
};

enum class EThreePlayerSplitScreenType : uint8
{
	EThreePlayerSplitScreenType__FavorTop = 0,
	EThreePlayerSplitScreenType__FavorBottom = 1,
	EThreePlayerSplitScreenType__Vertical = 2,
	EThreePlayerSplitScreenType__Horizontal = 3,
	EThreePlayerSplitScreenType__EThreePlayerSplitScreenType_MAX = 4,
};

enum class EFourPlayerSplitScreenType : uint8
{
	EFourPlayerSplitScreenType__Grid = 0,
	EFourPlayerSplitScreenType__Vertical = 1,
	EFourPlayerSplitScreenType__Horizontal = 2,
	EFourPlayerSplitScreenType__EFourPlayerSplitScreenType_MAX = 3,
};

enum class ESubLevelStripMode : uint8
{
	ESubLevelStripMode__ExactClass = 0,
	ESubLevelStripMode__IsChildOf  = 1,
	ESubLevelStripMode__ESubLevelStripMode_MAX = 2,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x28 - 0x0)
// ScriptStruct EngineSettings.AutoCompleteCommand
struct FAutoCompleteCommand
{
public:
	class FString                                Command;                                           // 0x0(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Desc;                                              // 0x10(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_626[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct EngineSettings.GameModeName
struct FGameModeName
{
public:
	class FString                                Name;                                              // 0x0(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSoftClassPath                        GameMode;                                          // 0x10(0x20)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct EngineSettings.TemplateMapInfoOverride
struct FTemplateMapInfoOverride
{
public:
	struct FSoftObjectPath                       Thumbnail;                                         // 0x0(0x20)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSoftObjectPath                       Map;                                               // 0x20(0x20)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  DisplayName;                                       // 0x40(0x18)(Edit, Config, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
