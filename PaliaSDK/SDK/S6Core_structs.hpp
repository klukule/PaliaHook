#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ES6DayOfWeek : uint8
{
	Monday                         = 0,
	Tuesday                        = 1,
	Wednesday                      = 2,
	Thursday                       = 3,
	Friday                         = 4,
	Saturday                       = 5,
	Sunday                         = 6,
	ES6DayOfWeek_MAX               = 7,
};

enum class ERedirectsPlatform : uint8
{
	Invalid                        = 0,
	Windows                        = 1,
	XSX                            = 2,
	XboxOne                        = 3,
	PS5                            = 4,
	PS4                            = 5,
	Switch                         = 6,
	Android                        = 7,
	IOS                            = 8,
	ERedirectsPlatform_MAX         = 9,
};

enum class ESingleTagFilterType : uint8
{
	None                           = 0,
	Any                            = 1,
	AnyOfTags                      = 2,
	ESingleTagFilterType_MAX       = 3,
};

enum class ETagFilterType : uint8
{
	AlwaysFalse                    = 0,
	AlwaysTrue                     = 1,
	AnyTag                         = 2,
	AllTags                        = 3,
	ETagFilterType_MAX             = 4,
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
	uint8                                        Pad_803[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTagList                              GameplayTags;                                      // 0x8(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct S6Core.AsyncReadPixelsRequest
struct FAsyncReadPixelsRequest
{
public:
	class UTextureRenderTarget2D*                RenderTarget;                                      // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_806[0x30];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// ScriptStruct S6Core.S6AsyncReadPixels
struct FS6AsyncReadPixels
{
public:
	TArray<struct FAsyncReadPixelsRequest>       Queued;                                            // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_808[0x40];                                     // Fixing Size Of Struct [ Dumper-7 ]
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
	uint8                                        Pad_80C[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTagList                              GameplayTags;                                      // 0x8(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

}


