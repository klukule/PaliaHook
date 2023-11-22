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
	uint8                                        Pad_285[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTagList                              GameplayTags;                                      // 0x8(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct S6Core.AsyncReadPixelsRequest
struct FAsyncReadPixelsRequest
{
public:
	class UTextureRenderTarget2D*                RenderTarget;                                      // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_286[0x30];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// ScriptStruct S6Core.S6AsyncReadPixels
struct FS6AsyncReadPixels
{
public:
	TArray<struct FAsyncReadPixelsRequest>       Queued;                                            // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_287[0x40];                                     // Fixing Size Of Struct [ Dumper-7 ]
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

// 0x20 (0x20 - 0x0)
// ScriptStruct S6Core.S6HARNVPair
struct FS6HARNVPair
{
public:
	class FString                                Name;                                              // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Value;                                             // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct S6Core.S6HARPostData
struct FS6HARPostData
{
public:
	class FString                                MimeType;                                          // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Text;                                              // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x88 (0x88 - 0x0)
// ScriptStruct S6Core.S6HARRequest
struct FS6HARRequest
{
public:
	class FString                                Method;                                            // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                URL;                                               // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                HttpVersion;                                       // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FS6HARNVPair>                  Cookies;                                           // 0x30(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FS6HARNVPair>                  Headers;                                           // 0x40(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FS6HARNVPair>                  QueryString;                                       // 0x50(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct FS6HARPostData                        PostData;                                          // 0x60(0x20)(NativeAccessSpecifierPublic)
	int32                                        HeaderSize;                                        // 0x80(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        bodySize;                                          // 0x84(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xA0 (0xA0 - 0x0)
// ScriptStruct S6Core.S6HAREntry
struct FS6HAREntry
{
public:
	class FString                                StartedDateTime;                                   // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Time;                                              // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28C[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS6HARRequest                         Request;                                           // 0x18(0x88)(NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct S6Core.TagFilter
struct FTagFilter
{
public:
	enum class ETagFilterType                    Type;                                              // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28E[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTagList                              GameplayTags;                                      // 0x8(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

}


