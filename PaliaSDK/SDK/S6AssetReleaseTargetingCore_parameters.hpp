#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x0 - 0x0)
// Function S6AssetReleaseTargetingCore.S6ReleaseVersioningSettings.SanitizeReleaseVersions
struct US6ReleaseVersioningSettings_SanitizeReleaseVersions_Params
{
public:
};

// 0x20 (0x20 - 0x0)
// Function S6AssetReleaseTargetingCore.S6ReleaseVersioningLibrary.TryParse
struct US6ReleaseVersioningLibrary_TryParse_Params
{
public:
	class FString                                VersionString;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FS6ReleaseVersionSpecification        OutReleaseVersion;                                 // 0x10(0x8)(Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_143B[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function S6AssetReleaseTargetingCore.S6ReleaseVersioningLibrary.ToString
struct US6ReleaseVersioningLibrary_ToString_Params
{
public:
	struct FS6ReleaseVersionSpecification        Value;                                             // 0x0(0x8)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// Function S6AssetReleaseTargetingCore.S6ReleaseVersioningLibrary.NotEqual
struct US6ReleaseVersioningLibrary_NotEqual_Params
{
public:
	struct FS6ReleaseVersionSpecification        A;                                                 // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FS6ReleaseVersionSpecification        B;                                                 // 0x8(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_144B[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function S6AssetReleaseTargetingCore.S6ReleaseVersioningLibrary.Min
struct US6ReleaseVersioningLibrary_Min_Params
{
public:
	struct FS6ReleaseVersionSpecification        A;                                                 // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FS6ReleaseVersionSpecification        B;                                                 // 0x8(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FS6ReleaseVersionSpecification        ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function S6AssetReleaseTargetingCore.S6ReleaseVersioningLibrary.Max
struct US6ReleaseVersioningLibrary_Max_Params
{
public:
	struct FS6ReleaseVersionSpecification        A;                                                 // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FS6ReleaseVersionSpecification        B;                                                 // 0x8(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FS6ReleaseVersionSpecification        ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// Function S6AssetReleaseTargetingCore.S6ReleaseVersioningLibrary.LessEqual
struct US6ReleaseVersioningLibrary_LessEqual_Params
{
public:
	struct FS6ReleaseVersionSpecification        A;                                                 // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FS6ReleaseVersionSpecification        B;                                                 // 0x8(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_146E[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x14 (0x14 - 0x0)
// Function S6AssetReleaseTargetingCore.S6ReleaseVersioningLibrary.Less
struct US6ReleaseVersioningLibrary_Less_Params
{
public:
	struct FS6ReleaseVersionSpecification        A;                                                 // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FS6ReleaseVersionSpecification        B;                                                 // 0x8(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1476[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// Function S6AssetReleaseTargetingCore.S6ReleaseVersioningLibrary.IsValid
struct US6ReleaseVersioningLibrary_IsValid_Params
{
public:
	struct FS6ReleaseVersionSpecification        Value;                                             // 0x0(0x8)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_147D[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x14 (0x14 - 0x0)
// Function S6AssetReleaseTargetingCore.S6ReleaseVersioningLibrary.GreaterEqual
struct US6ReleaseVersioningLibrary_GreaterEqual_Params
{
public:
	struct FS6ReleaseVersionSpecification        A;                                                 // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FS6ReleaseVersionSpecification        B;                                                 // 0x8(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1487[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x14 (0x14 - 0x0)
// Function S6AssetReleaseTargetingCore.S6ReleaseVersioningLibrary.Greater
struct US6ReleaseVersioningLibrary_Greater_Params
{
public:
	struct FS6ReleaseVersionSpecification        A;                                                 // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FS6ReleaseVersionSpecification        B;                                                 // 0x8(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1493[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function S6AssetReleaseTargetingCore.S6ReleaseVersioningLibrary.GetUnspecifiedReleaseVersionSpec
struct US6ReleaseVersioningLibrary_GetUnspecifiedReleaseVersionSpec_Params
{
public:
	struct FS6ReleaseVersionSpecification        ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function S6AssetReleaseTargetingCore.S6ReleaseVersioningLibrary.GetFutureReleaseVersionSpec
struct US6ReleaseVersioningLibrary_GetFutureReleaseVersionSpec_Params
{
public:
	struct FS6ReleaseVersionSpecification        ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function S6AssetReleaseTargetingCore.S6ReleaseVersioningLibrary.GetCurrentReleaseVersionSpec
struct US6ReleaseVersioningLibrary_GetCurrentReleaseVersionSpec_Params
{
public:
	struct FS6ReleaseVersionSpecification        ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// Function S6AssetReleaseTargetingCore.S6ReleaseVersioningLibrary.EqualEqual
struct US6ReleaseVersioningLibrary_EqualEqual_Params
{
public:
	struct FS6ReleaseVersionSpecification        A;                                                 // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FS6ReleaseVersionSpecification        B;                                                 // 0x8(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_14AC[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

}
}


