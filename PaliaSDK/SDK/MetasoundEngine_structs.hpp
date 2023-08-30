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

enum class EMetaSoundMessageLevel : uint8
{
	EMetaSoundMessageLevel__Error  = 0,
	EMetaSoundMessageLevel__Warning = 1,
	EMetaSoundMessageLevel__Info   = 2,
	EMetaSoundMessageLevel__EMetaSoundMessageLevel_MAX = 3,
};

enum class EMetasoundSourceAudioFormat : uint8
{
	EMetasoundSourceAudioFormat__Mono = 0,
	EMetasoundSourceAudioFormat__Stereo = 1,
	EMetasoundSourceAudioFormat__Quad = 2,
	EMetasoundSourceAudioFormat__FiveDotOne = 3,
	EMetasoundSourceAudioFormat__SevenDotOne = 4,
	EMetasoundSourceAudioFormat__COUNT = 5,
	EMetasoundSourceAudioFormat__EMetasoundSourceAudioFormat_MAX = 6,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x20 - 0x0)
// ScriptStruct MetasoundEngine.DefaultMetaSoundAssetAutoUpdateSettings
struct FDefaultMetaSoundAssetAutoUpdateSettings
{
public:
	struct FSoftObjectPath                       Metasound;                                         // 0x0(0x20)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct MetasoundEngine.MetaSoundAssetDirectory
struct FMetaSoundAssetDirectory
{
public:
	struct FDirectoryPath                        Directory;                                         // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct MetasoundEngine.MetaSoundAsyncAssetDependencies
struct FMetaSoundAsyncAssetDependencies
{
public:
	uint8                                        Pad_22[0x8];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               Metasound;                                         // 0x8(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_23[0x20];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
