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

enum class ES6DayOfWeek : uint8
{
	ES6DayOfWeek__Monday           = 0,
	ES6DayOfWeek__Tuesday          = 1,
	ES6DayOfWeek__Wednesday        = 2,
	ES6DayOfWeek__Thursday         = 3,
	ES6DayOfWeek__Friday           = 4,
	ES6DayOfWeek__Saturday         = 5,
	ES6DayOfWeek__Sunday           = 6,
	ES6DayOfWeek__ES6DayOfWeek_MAX = 7,
};

enum class ERedirectsPlatform : uint8
{
	ERedirectsPlatform__Invalid    = 0,
	ERedirectsPlatform__Windows    = 1,
	ERedirectsPlatform__XSX        = 2,
	ERedirectsPlatform__XboxOne    = 3,
	ERedirectsPlatform__PS5        = 4,
	ERedirectsPlatform__PS4        = 5,
	ERedirectsPlatform__Switch     = 6,
	ERedirectsPlatform__Android    = 7,
	ERedirectsPlatform__IOS        = 8,
	ERedirectsPlatform__ERedirectsPlatform_MAX = 9,
};

enum class ESingleTagFilterType : uint8
{
	ESingleTagFilterType__None     = 0,
	ESingleTagFilterType__Any      = 1,
	ESingleTagFilterType__AnyOfTags = 2,
	ESingleTagFilterType__ESingleTagFilterType_MAX = 3,
};

enum class ETagFilterType : uint8
{
	ETagFilterType__AlwaysFalse    = 0,
	ETagFilterType__AlwaysTrue     = 1,
	ETagFilterType__AnyTag         = 2,
	ETagFilterType__AllTags        = 3,
	ETagFilterType__ETagFilterType_MAX = 4,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x20 - 0x0)
// ScriptStruct S6Core.TagList
struct FTagList
{
public:
	struct FGameplayTagContainer                 GameplayTags;                                      // 0x0(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct S6Core.SingleTagFilter
struct FSingleTagFilter
{
public:
	enum class ESingleTagFilterType              Type;                                              // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8F5[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTagList                              GameplayTags;                                      // 0x8(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct S6Core.AsyncReadPixelsRequest
struct FAsyncReadPixelsRequest
{
public:
	class UTextureRenderTarget2D*                RenderTarget;                                      // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8F8[0x30];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// ScriptStruct S6Core.S6AsyncReadPixels
struct FS6AsyncReadPixels
{
public:
	TArray<struct FAsyncReadPixelsRequest>       Queued;                                            // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_8FA[0x40];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// ScriptStruct S6Core.S6Core_StatData
struct FS6Core_StatData
{
public:
	float                                        Average;                                           // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Min;                                               // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Max;                                               // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct S6Core.TagFilter
struct FTagFilter
{
public:
	enum class ETagFilterType                    Type;                                              // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8FE[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTagList                              GameplayTags;                                      // 0x8(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
