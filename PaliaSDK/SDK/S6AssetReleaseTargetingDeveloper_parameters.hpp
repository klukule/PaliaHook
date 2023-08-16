#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x40 - 0x0)
// Function S6AssetReleaseTargetingDeveloper.S6AssetReleaseTargetingLibrary.GetAssetReleaseTargetingInfo_SoftObject
struct US6AssetReleaseTargetingLibrary_GetAssetReleaseTargetingInfo_SoftObject_Params
{
public:
	TSoftObjectPtr<class UObject>                SoftObject;                                        // 0x0(0x30)(ConstParm, Parm, OutParm, ReferenceParm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FS6AssetReleaseTargetingInfo          ReturnValue;                                       // 0x30(0xC)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_89E[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1C (0x1C - 0x0)
// Function S6AssetReleaseTargetingDeveloper.S6AssetReleaseTargetingLibrary.GetAssetReleaseTargetingInfo_PrimaryAssetId
struct US6AssetReleaseTargetingLibrary_GetAssetReleaseTargetingInfo_PrimaryAssetId_Params
{
public:
	struct FPrimaryAssetId                       AssetId;                                           // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FS6AssetReleaseTargetingInfo          ReturnValue;                                       // 0x10(0xC)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function S6AssetReleaseTargetingDeveloper.S6AssetReleaseTargetingLibrary.GetAssetReleaseTargetingInfo_ObjectPath
struct US6AssetReleaseTargetingLibrary_GetAssetReleaseTargetingInfo_ObjectPath_Params
{
public:
	struct FSoftObjectPath                       SoftObjectPath;                                    // 0x0(0x20)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FS6AssetReleaseTargetingInfo          ReturnValue;                                       // 0x20(0xC)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_8AC[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function S6AssetReleaseTargetingDeveloper.S6AssetReleaseTargetingLibrary.GetAssetReleaseTargetingInfo_Object
struct US6AssetReleaseTargetingLibrary_GetAssetReleaseTargetingInfo_Object_Params
{
public:
	class UObject*                               Object;                                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FS6AssetReleaseTargetingInfo          ReturnValue;                                       // 0x8(0xC)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_8BB[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x78 (0x78 - 0x0)
// Function S6AssetReleaseTargetingDeveloper.S6AssetReleaseTargetingLibrary.GetAssetReleaseTargetingInfo_AssetData
struct US6AssetReleaseTargetingLibrary_GetAssetReleaseTargetingInfo_AssetData_Params
{
public:
	struct FAssetData                            AssetData;                                         // 0x0(0x68)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FS6AssetReleaseTargetingInfo          ReturnValue;                                       // 0x68(0xC)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_8C0[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
