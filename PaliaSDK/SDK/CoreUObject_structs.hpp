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

enum class EAutomationEventType : uint8
{
	EAutomationEventType__Info     = 0,
	EAutomationEventType__Warning  = 1,
	EAutomationEventType__Error    = 2,
	EAutomationEventType__EAutomationEventType_MAX = 3,
};

enum class ERangeBoundTypes : uint8
{
	ERangeBoundTypes__Exclusive    = 0,
	ERangeBoundTypes__Inclusive    = 1,
	ERangeBoundTypes__Open         = 2,
	ERangeBoundTypes__ERangeBoundTypes_MAX = 3,
};

enum class EInterpCurveMode : uint8
{
	CIM_Linear                     = 0,
	CIM_CurveAuto                  = 1,
	CIM_Constant                   = 2,
	CIM_CurveUser                  = 3,
	CIM_CurveBreak                 = 4,
	CIM_CurveAutoClamped           = 5,
	CIM_MAX                        = 6,
};

enum class EInputDeviceConnectionState : uint8
{
	EInputDeviceConnectionState__Invalid = 0,
	EInputDeviceConnectionState__Unknown = 1,
	EInputDeviceConnectionState__Disconnected = 2,
	EInputDeviceConnectionState__Connected = 3,
	EInputDeviceConnectionState__EInputDeviceConnectionState_MAX = 4,
};

enum class ELocalizedTextSourceCategory : uint8
{
	ELocalizedTextSourceCategory__Game = 0,
	ELocalizedTextSourceCategory__Engine = 1,
	ELocalizedTextSourceCategory__Editor = 2,
	ELocalizedTextSourceCategory__ELocalizedTextSourceCategory_MAX = 3,
};

enum class EMouseCursor : uint8
{
	EMouseCursor__None             = 0,
	EMouseCursor__Default          = 1,
	EMouseCursor__TextEditBeam     = 2,
	EMouseCursor__ResizeLeftRight  = 3,
	EMouseCursor__ResizeUpDown     = 4,
	EMouseCursor__ResizeSouthEast  = 5,
	EMouseCursor__ResizeSouthWest  = 6,
	EMouseCursor__CardinalCross    = 7,
	EMouseCursor__Crosshairs       = 8,
	EMouseCursor__Hand             = 9,
	EMouseCursor__GrabHand         = 10,
	EMouseCursor__GrabHandClosed   = 11,
	EMouseCursor__SlashedCircle    = 12,
	EMouseCursor__EyeDropper       = 13,
	EMouseCursor__EMouseCursor_MAX = 14,
};

enum class ELifetimeCondition : uint8
{
	COND_None                      = 0,
	COND_InitialOnly               = 1,
	COND_OwnerOnly                 = 2,
	COND_SkipOwner                 = 3,
	COND_SimulatedOnly             = 4,
	COND_AutonomousOnly            = 5,
	COND_SimulatedOrPhysics        = 6,
	COND_InitialOrOwner            = 7,
	COND_Custom                    = 8,
	COND_ReplayOrOwner             = 9,
	COND_ReplayOnly                = 10,
	COND_SimulatedOnlyNoReplay     = 11,
	COND_SimulatedOrPhysicsNoReplay = 12,
	COND_SkipReplay                = 13,
	COND_Never                     = 15,
	COND_NetGroup                  = 16,
	COND_Max                       = 17,
};

enum class ESearchCase : uint8
{
	ESearchCase__CaseSensitive     = 0,
	ESearchCase__IgnoreCase        = 1,
	ESearchCase__ESearchCase_MAX   = 2,
};

enum class ESearchDir : uint8
{
	ESearchDir__FromStart          = 0,
	ESearchDir__FromEnd            = 1,
	ESearchDir__ESearchDir_MAX     = 2,
};

enum class ELogTimes : uint8
{
	ELogTimes__None                = 0,
	ELogTimes__UTC                 = 1,
	ELogTimes__SinceGStartTime     = 2,
	ELogTimes__Local               = 3,
	ELogTimes__ELogTimes_MAX       = 4,
};

enum class EAxis : uint8
{
	EAxis__None                    = 0,
	EAxis__X                       = 1,
	EAxis__Y                       = 2,
	EAxis__Z                       = 3,
	EAxis__EAxis_MAX               = 4,
};

enum class EAxisList : uint8
{
	EAxisList__None                = 0,
	EAxisList__X                   = 1,
	EAxisList__Y                   = 2,
	EAxisList__Z                   = 4,
	EAxisList__Screen              = 8,
	EAxisList__XY                  = 3,
	EAxisList__XZ                  = 5,
	EAxisList__YZ                  = 6,
	EAxisList__XYZ                 = 7,
	EAxisList__All                 = 15,
	EAxisList__ZRotation           = 6,
	EAxisList__Rotate2D            = 8,
	EAxisList__EAxisList_MAX       = 16,
};

enum class EPixelFormat : uint8
{
	PF_Unknown                     = 0,
	PF_A32B32G32R32F               = 1,
	PF_B8G8R8A8                    = 2,
	PF_G8                          = 3,
	PF_G16                         = 4,
	PF_DXT1                        = 5,
	PF_DXT3                        = 6,
	PF_DXT5                        = 7,
	PF_UYVY                        = 8,
	PF_FloatRGB                    = 9,
	PF_FloatRGBA                   = 10,
	PF_DepthStencil                = 11,
	PF_ShadowDepth                 = 12,
	PF_R32_FLOAT                   = 13,
	PF_G16R16                      = 14,
	PF_G16R16F                     = 15,
	PF_G16R16F_FILTER              = 16,
	PF_G32R32F                     = 17,
	PF_A2B10G10R10                 = 18,
	PF_A16B16G16R16                = 19,
	PF_D24                         = 20,
	PF_R16F                        = 21,
	PF_R16F_FILTER                 = 22,
	PF_BC5                         = 23,
	PF_V8U8                        = 24,
	PF_A1                          = 25,
	PF_FloatR11G11B10              = 26,
	PF_A8                          = 27,
	PF_R32_UINT                    = 28,
	PF_R32_SINT                    = 29,
	PF_PVRTC2                      = 30,
	PF_PVRTC4                      = 31,
	PF_R16_UINT                    = 32,
	PF_R16_SINT                    = 33,
	PF_R16G16B16A16_UINT           = 34,
	PF_R16G16B16A16_SINT           = 35,
	PF_R5G6B5_UNORM                = 36,
	PF_R8G8B8A8                    = 37,
	PF_A8R8G8B8                    = 38,
	PF_BC4                         = 39,
	PF_R8G8                        = 40,
	PF_ATC_RGB                     = 41,
	PF_ATC_RGBA_E                  = 42,
	PF_ATC_RGBA_I                  = 43,
	PF_X24_G8                      = 44,
	PF_ETC1                        = 45,
	PF_ETC2_RGB                    = 46,
	PF_ETC2_RGBA                   = 47,
	PF_R32G32B32A32_UINT           = 48,
	PF_R16G16_UINT                 = 49,
	PF_ASTC_4x4                    = 50,
	PF_ASTC_6x6                    = 51,
	PF_ASTC_8x8                    = 52,
	PF_ASTC_10x10                  = 53,
	PF_ASTC_12x12                  = 54,
	PF_BC6H                        = 55,
	PF_BC7                         = 56,
	PF_R8_UINT                     = 57,
	PF_L8                          = 58,
	PF_XGXR8                       = 59,
	PF_R8G8B8A8_UINT               = 60,
	PF_R8G8B8A8_SNORM              = 61,
	PF_R16G16B16A16_UNORM          = 62,
	PF_R16G16B16A16_SNORM          = 63,
	PF_PLATFORM_HDR_0              = 64,
	PF_PLATFORM_HDR_1              = 65,
	PF_PLATFORM_HDR_2              = 66,
	PF_NV12                        = 67,
	PF_R32G32_UINT                 = 68,
	PF_ETC2_R11_EAC                = 69,
	PF_ETC2_RG11_EAC               = 70,
	PF_R8                          = 71,
	PF_B5G5R5A1_UNORM              = 72,
	PF_G16R16_SNORM                = 78,
	PF_R8G8_UINT                   = 79,
	PF_R32G32B32_UINT              = 80,
	PF_R32G32B32_SINT              = 81,
	PF_R32G32B32F                  = 82,
	PF_R8_SINT                     = 83,
	PF_R64_UINT                    = 84,
	PF_R9G9B9EXP5                  = 85,
	PF_MAX_                        = 86,
};

enum class EUnit : uint8
{
	EUnit__Micrometers             = 0,
	EUnit__Millimeters             = 1,
	EUnit__Centimeters             = 2,
	EUnit__Meters                  = 3,
	EUnit__Kilometers              = 4,
	EUnit__Inches                  = 5,
	EUnit__Feet                    = 6,
	EUnit__Yards                   = 7,
	EUnit__Miles                   = 8,
	EUnit__Lightyears              = 9,
	EUnit__Degrees                 = 10,
	EUnit__Radians                 = 11,
	EUnit__CentimetersPerSecond    = 12,
	EUnit__MetersPerSecond         = 13,
	EUnit__KilometersPerHour       = 14,
	EUnit__MilesPerHour            = 15,
	EUnit__Celsius                 = 16,
	EUnit__Farenheit               = 17,
	EUnit__Kelvin                  = 18,
	EUnit__Micrograms              = 19,
	EUnit__Milligrams              = 20,
	EUnit__Grams                   = 21,
	EUnit__Kilograms               = 22,
	EUnit__MetricTons              = 23,
	EUnit__Ounces                  = 24,
	EUnit__Pounds                  = 25,
	EUnit__Stones                  = 26,
	EUnit__Newtons                 = 27,
	EUnit__PoundsForce             = 28,
	EUnit__KilogramsForce          = 29,
	EUnit__Hertz                   = 30,
	EUnit__Kilohertz               = 31,
	EUnit__Megahertz               = 32,
	EUnit__Gigahertz               = 33,
	EUnit__RevolutionsPerMinute    = 34,
	EUnit__Bytes                   = 35,
	EUnit__Kilobytes               = 36,
	EUnit__Megabytes               = 37,
	EUnit__Gigabytes               = 38,
	EUnit__Terabytes               = 39,
	EUnit__Lumens                  = 40,
	EUnit__Milliseconds            = 46,
	EUnit__Seconds                 = 47,
	EUnit__Minutes                 = 48,
	EUnit__Hours                   = 49,
	EUnit__Days                    = 50,
	EUnit__Months                  = 51,
	EUnit__Years                   = 52,
	EUnit__Multiplier              = 55,
	EUnit__Percentage              = 54,
	EUnit__Unspecified             = 56,
	EUnit__EUnit_MAX               = 57,
};

enum class EPropertyAccessChangeNotifyMode : uint8
{
	EPropertyAccessChangeNotifyMode__Default = 0,
	EPropertyAccessChangeNotifyMode__Never = 1,
	EPropertyAccessChangeNotifyMode__Always = 2,
	EPropertyAccessChangeNotifyMode__EPropertyAccessChangeNotifyMode_MAX = 3,
};

enum class EAppReturnType : uint8
{
	EAppReturnType__No             = 0,
	EAppReturnType__Yes            = 1,
	EAppReturnType__YesAll         = 2,
	EAppReturnType__NoAll          = 3,
	EAppReturnType__Cancel         = 4,
	EAppReturnType__Ok             = 5,
	EAppReturnType__Retry          = 6,
	EAppReturnType__Continue       = 7,
	EAppReturnType__EAppReturnType_MAX = 8,
};

enum class EAppMsgType : uint8
{
	EAppMsgType__Ok                = 0,
	EAppMsgType__YesNo             = 1,
	EAppMsgType__OkCancel          = 2,
	EAppMsgType__YesNoCancel       = 3,
	EAppMsgType__CancelRetryContinue = 4,
	EAppMsgType__YesNoYesAllNoAll  = 5,
	EAppMsgType__YesNoYesAllNoAllCancel = 6,
	EAppMsgType__YesNoYesAll       = 7,
	EAppMsgType__EAppMsgType_MAX   = 8,
};

enum class EDataValidationResult : uint8
{
	EDataValidationResult__Invalid = 0,
	EDataValidationResult__Valid   = 1,
	EDataValidationResult__NotValidated = 2,
	EDataValidationResult__EDataValidationResult_MAX = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x10 - 0x0)
// ScriptStruct CoreUObject.TopLevelAssetPath
struct FTopLevelAssetPath
{
public:
	class FName                                  PackageName;                                       // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  AssetName;                                         // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct CoreUObject.SoftObjectPath
struct FSoftObjectPath
{
public:
	struct FTopLevelAssetPath                    AssetPath;                                         // 0x0(0x10)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                SubPathString;                                     // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x150 (0x150 - 0x0)
// ScriptStruct CoreUObject.ARFilter
struct FARFilter
{
public:
	TArray<class FName>                          PackageNames;                                      // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<class FName>                          PackagePaths;                                      // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<struct FSoftObjectPath>               SoftObjectPaths;                                   // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	TArray<class FName>                          ClassNames;                                        // 0x30(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FTopLevelAssetPath>            ClassPaths;                                        // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)
	uint8                                        Pad_31[0x50];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TSet<class FName>                            RecursiveClassesExclusionSet;                      // 0xA0(0x50)(BlueprintVisible, NativeAccessSpecifierPublic)
	TSet<struct FTopLevelAssetPath>              RecursiveClassPathsExclusionSet;                   // 0xF0(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic)
	bool                                         bRecursivePaths;                                   // 0x140(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRecursiveClasses;                                 // 0x141(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIncludeOnlyOnDiskAssets;                          // 0x142(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_32[0xD];                                       // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct CoreUObject.AssetBundleEntry
struct FAssetBundleEntry
{
public:
	class FName                                  BundleName;                                        // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FTopLevelAssetPath>            AssetPaths;                                        // 0x8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct CoreUObject.AssetBundleData
struct FAssetBundleData
{
public:
	TArray<struct FAssetBundleEntry>             Bundles;                                           // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// ScriptStruct CoreUObject.AssetData
struct FAssetData
{
public:
	class FName                                  PackageName;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  PackagePath;                                       // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  AssetName;                                         // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  AssetClass;                                        // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTopLevelAssetPath                    AssetClassPath;                                    // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_35[0x38];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct CoreUObject.Guid
struct FGuid
{
public:
	int32                                        A;                                                 // 0x0(0x4)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        B;                                                 // 0x4(0x4)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        C;                                                 // 0x8(0x4)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        D;                                                 // 0xC(0x4)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	inline bool operator==(const FGuid& Other) const
	{
		return A == Other.A && B == Other.B && C == Other.C && D == Other.D;
	}

	inline bool operator!=(const FGuid& Other) const
	{
		return A != Other.A || B != Other.B || C != Other.C || D != Other.D;
	}

};

// 0x38 (0x38 - 0x0)
// ScriptStruct CoreUObject.AutomationEvent
struct FAutomationEvent
{
public:
	enum class EAutomationEventType              Type;                                              // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_37[0x7];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Message;                                           // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Context;                                           // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 Artifact;                                          // 0x28(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct CoreUObject.DateTime
struct FDateTime
{
public:
	uint8                                        Pad_3A[0x8];                                       // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x58 - 0x0)
// ScriptStruct CoreUObject.AutomationExecutionEntry
struct FAutomationExecutionEntry
{
public:
	struct FAutomationEvent                      Event;                                             // 0x0(0x38)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Filename;                                          // 0x38(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LineNumber;                                        // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C[0x4];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDateTime                             Timestamp;                                         // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct CoreUObject.Vector
struct FVector
{
public:
	double                                       X;                                                 // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       Y;                                                 // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       Z;                                                 // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	inline bool operator==(const FVector& Other) const
	{
		return X == Other.X && Y == Other.Y && Z == Other.Z;
	}

	inline bool operator!=(const FVector& Other) const
	{
		return X != Other.X || Y != Other.Y || Z != Other.Z;
	}

};

// 0x38 (0x38 - 0x0)
// ScriptStruct CoreUObject.Box
struct FBox
{
public:
	struct FVector                               Min;                                               // 0x0(0x18)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Max;                                               // 0x18(0x18)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        IsValid;                                           // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3F[0x7];                                       // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct CoreUObject.Vector2D
struct FVector2D
{
public:
	double                                       X;                                                 // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       Y;                                                 // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct CoreUObject.Box2D
struct FBox2D
{
public:
	struct FVector2D                             Min;                                               // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             Max;                                               // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bIsValid;                                          // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_43[0x7];                                       // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct CoreUObject.Vector2f
struct FVector2f
{
public:
	float                                        X;                                                 // 0x0(0x4)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Y;                                                 // 0x4(0x4)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct CoreUObject.Box2f
struct FBox2f
{
public:
	struct FVector2f                             Min;                                               // 0x0(0x8)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2f                             Max;                                               // 0x8(0x8)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bIsValid;                                          // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4A[0x3];                                       // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct CoreUObject.Vector3d
struct FVector3d
{
public:
	double                                       X;                                                 // 0x0(0x8)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       Y;                                                 // 0x8(0x8)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       Z;                                                 // 0x10(0x8)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct CoreUObject.Box3d
struct FBox3d
{
public:
	struct FVector3d                             Min;                                               // 0x0(0x18)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector3d                             Max;                                               // 0x18(0x18)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        IsValid;                                           // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_54[0x7];                                       // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// ScriptStruct CoreUObject.Vector3f
struct FVector3f
{
public:
	float                                        X;                                                 // 0x0(0x4)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Y;                                                 // 0x4(0x4)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Z;                                                 // 0x8(0x4)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1C (0x1C - 0x0)
// ScriptStruct CoreUObject.Box3f
struct FBox3f
{
public:
	struct FVector3f                             Min;                                               // 0x0(0xC)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector3f                             Max;                                               // 0xC(0xC)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        IsValid;                                           // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_55[0x3];                                       // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// ScriptStruct CoreUObject.BoxSphereBounds
struct FBoxSphereBounds
{
public:
	struct FVector                               Origin;                                            // 0x0(0x18)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               BoxExtent;                                         // 0x18(0x18)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       SphereRadius;                                      // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct CoreUObject.BoxSphereBounds3d
struct FBoxSphereBounds3d
{
public:
	struct FVector3d                             Origin;                                            // 0x0(0x18)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector3d                             BoxExtent;                                         // 0x18(0x18)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       SphereRadius;                                      // 0x30(0x8)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1C (0x1C - 0x0)
// ScriptStruct CoreUObject.BoxSphereBounds3f
struct FBoxSphereBounds3f
{
public:
	struct FVector3f                             Origin;                                            // 0x0(0xC)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector3f                             BoxExtent;                                         // 0xC(0xC)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SphereRadius;                                      // 0x18(0x4)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct CoreUObject.Color
struct FColor
{
public:
	uint8                                        B;                                                 // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        G;                                                 // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        R;                                                 // 0x2(0x1)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        A;                                                 // 0x3(0x1)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct CoreUObject.DirectoryPath
struct FDirectoryPath
{
public:
	class FString                                Path;                                              // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct CoreUObject.DoubleRangeBound
struct FDoubleRangeBound
{
public:
	enum class ERangeBoundTypes                  Type;                                              // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_59[0x7];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Value;                                             // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct CoreUObject.DoubleRange
struct FDoubleRange
{
public:
	struct FDoubleRangeBound                     LowerBound;                                        // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FDoubleRangeBound                     UpperBound;                                        // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct CoreUObject.FallbackStruct
struct FFallbackStruct
{
public:
	uint8                                        Pad_5C[0x1];                                       // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct CoreUObject.FilePath
struct FFilePath
{
public:
	class FString                                FilePath;                                          // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct CoreUObject.FloatInterval
struct FFloatInterval
{
public:
	float                                        Min;                                               // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Max;                                               // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct CoreUObject.FloatRangeBound
struct FFloatRangeBound
{
public:
	enum class ERangeBoundTypes                  Type;                                              // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_5F[0x3];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Value;                                             // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct CoreUObject.FloatRange
struct FFloatRange
{
public:
	struct FFloatRangeBound                      LowerBound;                                        // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FFloatRangeBound                      UpperBound;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct CoreUObject.FrameNumber
struct FFrameNumber
{
public:
	int32                                        Value;                                             // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct CoreUObject.FrameNumberRangeBound
struct FFrameNumberRangeBound
{
public:
	enum class ERangeBoundTypes                  Type;                                              // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_65[0x3];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFrameNumber                          Value;                                             // 0x4(0x4)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct CoreUObject.FrameNumberRange
struct FFrameNumberRange
{
public:
	struct FFrameNumberRangeBound                LowerBound;                                        // 0x0(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FFrameNumberRangeBound                UpperBound;                                        // 0x8(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct CoreUObject.FrameRate
struct FFrameRate
{
public:
	int32                                        Numerator;                                         // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Denominator;                                       // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct CoreUObject.FrameTime
struct FFrameTime
{
public:
	struct FFrameNumber                          FrameNumber;                                       // 0x0(0x4)(BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SubFrame;                                          // 0x4(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct CoreUObject.InputDeviceId
struct FInputDeviceId
{
public:
	int32                                        InternalId;                                        // 0x0(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct CoreUObject.Int32Interval
struct FInt32Interval
{
public:
	int32                                        Min;                                               // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Max;                                               // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct CoreUObject.Int32Point
struct FInt32Point
{
public:
	int32                                        X;                                                 // 0x0(0x4)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Y;                                                 // 0x4(0x4)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct CoreUObject.Int32RangeBound
struct FInt32RangeBound
{
public:
	enum class ERangeBoundTypes                  Type;                                              // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_68[0x3];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Value;                                             // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct CoreUObject.Int32Range
struct FInt32Range
{
public:
	struct FInt32RangeBound                      LowerBound;                                        // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FInt32RangeBound                      UpperBound;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0xC (0xC - 0x0)
// ScriptStruct CoreUObject.Int32Vector
struct FInt32Vector
{
public:
	int32                                        X;                                                 // 0x0(0x4)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Y;                                                 // 0x4(0x4)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Z;                                                 // 0x8(0x4)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct CoreUObject.Int32Vector2
struct FInt32Vector2
{
public:
	int32                                        X;                                                 // 0x0(0x4)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Y;                                                 // 0x4(0x4)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct CoreUObject.Int32Vector4
struct FInt32Vector4
{
public:
	int32                                        X;                                                 // 0x0(0x4)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Y;                                                 // 0x4(0x4)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Z;                                                 // 0x8(0x4)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        W;                                                 // 0xC(0x4)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct CoreUObject.Int64Point
struct FInt64Point
{
public:
	int64                                        X;                                                 // 0x0(0x8)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                        Y;                                                 // 0x8(0x8)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct CoreUObject.Int64Vector
struct FInt64Vector
{
public:
	int64                                        X;                                                 // 0x0(0x8)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                        Y;                                                 // 0x8(0x8)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                        Z;                                                 // 0x10(0x8)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct CoreUObject.Int64Vector2
struct FInt64Vector2
{
public:
	int64                                        X;                                                 // 0x0(0x8)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                        Y;                                                 // 0x8(0x8)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct CoreUObject.Int64Vector4
struct FInt64Vector4
{
public:
	int64                                        X;                                                 // 0x0(0x8)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                        Y;                                                 // 0x8(0x8)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                        Z;                                                 // 0x10(0x8)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                        W;                                                 // 0x18(0x8)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct CoreUObject.InterpCurvePointFloat
struct FInterpCurvePointFloat
{
public:
	float                                        InVal;                                             // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OutVal;                                            // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ArriveTangent;                                     // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LeaveTangent;                                      // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EInterpCurveMode                  InterpMode;                                        // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6C[0x3];                                       // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct CoreUObject.InterpCurveFloat
struct FInterpCurveFloat
{
public:
	TArray<struct FInterpCurvePointFloat>        Points;                                            // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bIsLooped;                                         // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6E[0x3];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        LoopKeyOffset;                                     // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct CoreUObject.LinearColor
struct FLinearColor
{
public:
	float                                        R;                                                 // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        G;                                                 // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        B;                                                 // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        A;                                                 // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct CoreUObject.InterpCurvePointLinearColor
struct FInterpCurvePointLinearColor
{
public:
	float                                        InVal;                                             // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          OutVal;                                            // 0x4(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          ArriveTangent;                                     // 0x14(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          LeaveTangent;                                      // 0x24(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EInterpCurveMode                  InterpMode;                                        // 0x34(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_73[0x3];                                       // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct CoreUObject.InterpCurveLinearColor
struct FInterpCurveLinearColor
{
public:
	TArray<struct FInterpCurvePointLinearColor>  Points;                                            // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bIsLooped;                                         // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_74[0x3];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        LoopKeyOffset;                                     // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct CoreUObject.Quat
struct FQuat
{
public:
	double                                       X;                                                 // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       Y;                                                 // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       Z;                                                 // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       W;                                                 // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// ScriptStruct CoreUObject.InterpCurvePointQuat
struct FInterpCurvePointQuat
{
public:
	float                                        InVal;                                             // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_75[0xC];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 OutVal;                                            // 0x10(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQuat                                 ArriveTangent;                                     // 0x30(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FQuat                                 LeaveTangent;                                      // 0x50(0x20)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EInterpCurveMode                  InterpMode;                                        // 0x70(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_76[0xF];                                       // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct CoreUObject.TwoVectors
struct FTwoVectors
{
public:
	struct FVector                               V1;                                                // 0x0(0x18)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               V2;                                                // 0x18(0x18)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xA0 (0xA0 - 0x0)
// ScriptStruct CoreUObject.InterpCurvePointTwoVectors
struct FInterpCurvePointTwoVectors
{
public:
	float                                        InVal;                                             // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_77[0x4];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTwoVectors                           OutVal;                                            // 0x8(0x30)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTwoVectors                           ArriveTangent;                                     // 0x38(0x30)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTwoVectors                           LeaveTangent;                                      // 0x68(0x30)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	enum class EInterpCurveMode                  InterpMode;                                        // 0x98(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_78[0x7];                                       // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x58 - 0x0)
// ScriptStruct CoreUObject.InterpCurvePointVector
struct FInterpCurvePointVector
{
public:
	float                                        InVal;                                             // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_79[0x4];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               OutVal;                                            // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ArriveTangent;                                     // 0x20(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               LeaveTangent;                                      // 0x38(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EInterpCurveMode                  InterpMode;                                        // 0x50(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7A[0x7];                                       // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct CoreUObject.InterpCurvePointVector2D
struct FInterpCurvePointVector2D
{
public:
	float                                        InVal;                                             // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7B[0x4];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             OutVal;                                            // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             ArriveTangent;                                     // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             LeaveTangent;                                      // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EInterpCurveMode                  InterpMode;                                        // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7C[0x7];                                       // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct CoreUObject.InterpCurveQuat
struct FInterpCurveQuat
{
public:
	TArray<struct FInterpCurvePointQuat>         Points;                                            // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bIsLooped;                                         // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7F[0x3];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        LoopKeyOffset;                                     // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct CoreUObject.InterpCurveTwoVectors
struct FInterpCurveTwoVectors
{
public:
	TArray<struct FInterpCurvePointTwoVectors>   Points;                                            // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bIsLooped;                                         // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_80[0x3];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        LoopKeyOffset;                                     // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct CoreUObject.InterpCurveVector
struct FInterpCurveVector
{
public:
	TArray<struct FInterpCurvePointVector>       Points;                                            // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bIsLooped;                                         // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_81[0x3];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        LoopKeyOffset;                                     // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct CoreUObject.InterpCurveVector2D
struct FInterpCurveVector2D
{
public:
	TArray<struct FInterpCurvePointVector2D>     Points;                                            // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bIsLooped;                                         // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_82[0x3];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        LoopKeyOffset;                                     // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct CoreUObject.IntPoint
struct FIntPoint
{
public:
	int32                                        X;                                                 // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Y;                                                 // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct CoreUObject.IntVector
struct FIntVector
{
public:
	int32                                        X;                                                 // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Y;                                                 // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Z;                                                 // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct CoreUObject.IntVector2
struct FIntVector2
{
public:
	int32                                        X;                                                 // 0x0(0x4)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Y;                                                 // 0x4(0x4)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct CoreUObject.IntVector4
struct FIntVector4
{
public:
	int32                                        X;                                                 // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Y;                                                 // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Z;                                                 // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        W;                                                 // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x20 - 0x18)
// ScriptStruct CoreUObject.Plane
struct FPlane : public FVector
{
public:
	double                                       W;                                                 // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// ScriptStruct CoreUObject.Matrix
struct FMatrix
{
public:
	struct FPlane                                XPlane;                                            // 0x0(0x20)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPlane                                YPlane;                                            // 0x20(0x20)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPlane                                ZPlane;                                            // 0x40(0x20)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPlane                                WPlane;                                            // 0x60(0x20)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x20 - 0x18)
// ScriptStruct CoreUObject.Plane4d
struct FPlane4d : public FVector3d
{
public:
	double                                       W;                                                 // 0x18(0x8)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// ScriptStruct CoreUObject.Matrix44d
struct FMatrix44d
{
public:
	struct FPlane4d                              XPlane;                                            // 0x0(0x20)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPlane4d                              YPlane;                                            // 0x20(0x20)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPlane4d                              ZPlane;                                            // 0x40(0x20)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPlane4d                              WPlane;                                            // 0x60(0x20)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x10 - 0xC)
// ScriptStruct CoreUObject.Plane4f
struct FPlane4f : public FVector3f
{
public:
	float                                        W;                                                 // 0xC(0x4)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct CoreUObject.Matrix44f
struct FMatrix44f
{
public:
	struct FPlane4f                              XPlane;                                            // 0x0(0x10)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPlane4f                              YPlane;                                            // 0x10(0x10)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPlane4f                              ZPlane;                                            // 0x20(0x10)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPlane4f                              WPlane;                                            // 0x30(0x10)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// ScriptStruct CoreUObject.OrientedBox
struct FOrientedBox
{
public:
	struct FVector                               Center;                                            // 0x0(0x18)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               AxisX;                                             // 0x18(0x18)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               AxisY;                                             // 0x30(0x18)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               AxisZ;                                             // 0x48(0x18)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       ExtentX;                                           // 0x60(0x8)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       ExtentY;                                           // 0x68(0x8)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       ExtentZ;                                           // 0x70(0x8)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct CoreUObject.PackedNormal
struct FPackedNormal
{
public:
	uint8                                        X;                                                 // 0x0(0x1)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Y;                                                 // 0x1(0x1)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Z;                                                 // 0x2(0x1)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        W;                                                 // 0x3(0x1)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct CoreUObject.PackedRGB10A2N
struct FPackedRGB10A2N
{
public:
	int32                                        Packed;                                            // 0x0(0x4)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct CoreUObject.PackedRGBA16N
struct FPackedRGBA16N
{
public:
	int32                                        XY;                                                // 0x0(0x4)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ZW;                                                // 0x4(0x4)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct CoreUObject.PlatformUserId
struct FPlatformUserId
{
public:
	int32                                        InternalId;                                        // 0x0(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct CoreUObject.PlatformInputDeviceState
struct FPlatformInputDeviceState
{
public:
	struct FPlatformUserId                       OwningPlatformUser;                                // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EInputDeviceConnectionState       ConnectionState;                                   // 0x4(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_85[0x3];                                       // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xB8 (0xB8 - 0x0)
// ScriptStruct CoreUObject.PolyglotTextData
struct FPolyglotTextData
{
public:
	enum class ELocalizedTextSourceCategory      Category;                                          // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_86[0x7];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                NativeCulture;                                     // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Namespace;                                         // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Key;                                               // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                NativeString;                                      // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FString, class FString>           LocalizedStrings;                                  // 0x48(0x50)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                         bIsMinimalPatch;                                   // 0x98(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_88[0x7];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CachedText;                                        // 0xA0(0x18)(Transient, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct CoreUObject.PrimaryAssetType
struct FPrimaryAssetType
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct CoreUObject.PrimaryAssetId
struct FPrimaryAssetId
{
public:
	struct FPrimaryAssetType                     PrimaryAssetType;                                  // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  PrimaryAssetName;                                  // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct CoreUObject.QualifiedFrameTime
struct FQualifiedFrameTime
{
public:
	struct FFrameTime                            Time;                                              // 0x0(0x8)(BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameRate                            Rate;                                              // 0x8(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct CoreUObject.Quat4d
struct FQuat4d
{
public:
	double                                       X;                                                 // 0x0(0x8)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       Y;                                                 // 0x8(0x8)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       Z;                                                 // 0x10(0x8)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       W;                                                 // 0x18(0x8)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct CoreUObject.Quat4f
struct FQuat4f
{
public:
	float                                        X;                                                 // 0x0(0x4)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Y;                                                 // 0x4(0x4)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Z;                                                 // 0x8(0x4)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        W;                                                 // 0xC(0x4)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct CoreUObject.RandomStream
struct FRandomStream
{
public:
	int32                                        InitialSeed;                                       // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Seed;                                              // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct CoreUObject.Rotator
struct FRotator
{
public:
	double                                       Pitch;                                             // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       Yaw;                                               // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       Roll;                                              // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct CoreUObject.Rotator3d
struct FRotator3d
{
public:
	double                                       Pitch;                                             // 0x0(0x8)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       Yaw;                                               // 0x8(0x8)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       Roll;                                              // 0x10(0x8)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct CoreUObject.Rotator3f
struct FRotator3f
{
public:
	float                                        Pitch;                                             // 0x0(0x4)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Yaw;                                               // 0x4(0x4)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Roll;                                              // 0x8(0x4)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x20 - 0x20)
// ScriptStruct CoreUObject.SoftClassPath
struct FSoftClassPath : public FSoftObjectPath
{
public:
};

// 0x10 (0x10 - 0x0)
// ScriptStruct CoreUObject.TemplateString
struct FTemplateString
{
public:
	class FString                                Template;                                          // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct CoreUObject.TestUninitializedScriptStructMembersTest
struct FTestUninitializedScriptStructMembersTest
{
public:
	class UObject*                               UninitializedObjectReference;                      // 0x0(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               InitializedObjectReference;                        // 0x8(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        UnusedValue;                                       // 0x10(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B[0x4];                                       // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x14 (0x14 - 0x0)
// ScriptStruct CoreUObject.Timecode
struct FTimecode
{
public:
	int32                                        Hours;                                             // 0x0(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Minutes;                                           // 0x4(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Seconds;                                           // 0x8(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Frames;                                            // 0xC(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDropFrameFormat;                                  // 0x10(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8C[0x3];                                       // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct CoreUObject.Timespan
struct FTimespan
{
public:
	uint8                                        Pad_8D[0x8];                                       // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x60 (0x60 - 0x0)
// ScriptStruct CoreUObject.Transform
struct FTransform
{
public:
	struct FQuat                                 Rotation;                                          // 0x0(0x20)(Edit, BlueprintVisible, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Translation;                                       // 0x20(0x18)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8E[0x8];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Scale3D;                                           // 0x40(0x18)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8F[0x8];                                       // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x60 (0x60 - 0x0)
// ScriptStruct CoreUObject.Transform3d
struct FTransform3d
{
public:
	struct FQuat4d                               Rotation;                                          // 0x0(0x20)(Edit, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector3d                             Translation;                                       // 0x20(0x18)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_90[0x8];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector3d                             Scale3D;                                           // 0x40(0x18)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_91[0x8];                                       // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct CoreUObject.Transform3f
struct FTransform3f
{
public:
	struct FQuat4f                               Rotation;                                          // 0x0(0x10)(Edit, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector3f                             Translation;                                       // 0x10(0xC)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_92[0x4];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector3f                             Scale3D;                                           // 0x20(0xC)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_93[0x4];                                       // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct CoreUObject.Uint32Point
struct FUint32Point
{
public:
	int32                                        X;                                                 // 0x0(0x4)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Y;                                                 // 0x4(0x4)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct CoreUObject.Uint32Vector
struct FUint32Vector
{
public:
	uint32                                       X;                                                 // 0x0(0x4)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       Y;                                                 // 0x4(0x4)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       Z;                                                 // 0x8(0x4)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct CoreUObject.Uint32Vector2
struct FUint32Vector2
{
public:
	uint32                                       X;                                                 // 0x0(0x4)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       Y;                                                 // 0x4(0x4)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct CoreUObject.Uint32Vector4
struct FUint32Vector4
{
public:
	uint32                                       X;                                                 // 0x0(0x4)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       Y;                                                 // 0x4(0x4)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       Z;                                                 // 0x8(0x4)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       W;                                                 // 0xC(0x4)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct CoreUObject.Uint64Point
struct FUint64Point
{
public:
	int64                                        X;                                                 // 0x0(0x8)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                        Y;                                                 // 0x8(0x8)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct CoreUObject.Uint64Vector
struct FUint64Vector
{
public:
	uint64                                       X;                                                 // 0x0(0x8)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint64                                       Y;                                                 // 0x8(0x8)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint64                                       Z;                                                 // 0x10(0x8)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct CoreUObject.Uint64Vector2
struct FUint64Vector2
{
public:
	uint64                                       X;                                                 // 0x0(0x8)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint64                                       Y;                                                 // 0x8(0x8)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct CoreUObject.Uint64Vector4
struct FUint64Vector4
{
public:
	uint64                                       X;                                                 // 0x0(0x8)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint64                                       Y;                                                 // 0x8(0x8)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint64                                       Z;                                                 // 0x10(0x8)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint64                                       W;                                                 // 0x18(0x8)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct CoreUObject.UintPoint
struct FUintPoint
{
public:
	int32                                        X;                                                 // 0x0(0x4)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Y;                                                 // 0x4(0x4)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct CoreUObject.UintVector
struct FUintVector
{
public:
	uint32                                       X;                                                 // 0x0(0x4)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       Y;                                                 // 0x4(0x4)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       Z;                                                 // 0x8(0x4)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct CoreUObject.UintVector2
struct FUintVector2
{
public:
	uint32                                       X;                                                 // 0x0(0x4)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       Y;                                                 // 0x4(0x4)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct CoreUObject.UintVector4
struct FUintVector4
{
public:
	uint32                                       X;                                                 // 0x0(0x4)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       Y;                                                 // 0x4(0x4)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       Z;                                                 // 0x8(0x4)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       W;                                                 // 0xC(0x4)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct CoreUObject.Vector4
struct FVector4
{
public:
	double                                       X;                                                 // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       Y;                                                 // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       Z;                                                 // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       W;                                                 // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct CoreUObject.Vector4d
struct FVector4d
{
public:
	double                                       X;                                                 // 0x0(0x8)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       Y;                                                 // 0x8(0x8)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       Z;                                                 // 0x10(0x8)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       W;                                                 // 0x18(0x8)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct CoreUObject.Vector4f
struct FVector4f
{
public:
	float                                        X;                                                 // 0x0(0x4)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Y;                                                 // 0x4(0x4)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Z;                                                 // 0x8(0x4)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        W;                                                 // 0xC(0x4)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
