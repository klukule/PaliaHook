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

// 0xB0 (0xB0 - 0x0)
// Function S6PlatformServiceSubsystems.S6PLAT_PlayerBehaviorSubsystem.ValidateReportForm
struct US6PLAT_PlayerBehaviorSubsystem_ValidateReportForm_Params
{
public:
	struct FS6PLAT_PlayerBehaviorReportForm      ReportForm;                                        // 0x0(0xA8)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xA8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1574[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xB8 (0xB8 - 0x0)
// DelegateFunction S6PlatformServiceSubsystems.S6PLAT_PlayerBehaviorSubsystem.ReportSubmitedDelegate__DelegateSignature
struct US6PLAT_PlayerBehaviorSubsystem_ReportSubmitedDelegate__DelegateSignature_Params
{
public:
	class US6PLAT_PlayerBehaviorSubsystem*       PlayerBehaviorSubsystem;                           // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FS6PLAT_PlayerBehaviorReportForm      ReportForm;                                        // 0x8(0xA8)(ConstParm, Parm, NativeAccessSpecifierPublic)
	bool                                         bDidSucceed;                                       // 0xB0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_157C[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xA8 (0xA8 - 0x0)
// Function S6PlatformServiceSubsystems.S6PLAT_PlayerBehaviorSubsystem.ReportPlayerBehavior
struct US6PLAT_PlayerBehaviorSubsystem_ReportPlayerBehavior_Params
{
public:
	struct FS6PLAT_PlayerBehaviorReportForm      ReportForm;                                        // 0x0(0xA8)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function S6PlatformServiceSubsystems.S6PLAT_PlayerBehaviorSubsystem.IsReady
struct US6PLAT_PlayerBehaviorSubsystem_IsReady_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// Function S6PlatformServiceSubsystems.S6PLAT_PlayerBehaviorSubsystem.GetValidReportCategoriesByType
struct US6PLAT_PlayerBehaviorSubsystem_GetValidReportCategoriesByType_Params
{
public:
	enum class ES6PLAT_PlayerBehaviorReportType  ReportType;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_158E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class FName, struct FS6PLAT_PlayerBehaviorReportCategoryInfo> ReturnValue;                                       // 0x8(0x50)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function S6PlatformServiceSubsystems.S6PLAT_PlayerBehaviorSubsystem.GetValidReportCategories
struct US6PLAT_PlayerBehaviorSubsystem_GetValidReportCategories_Params
{
public:
	TMap<class FName, struct FS6PLAT_PlayerBehaviorReportCategoryInfo> ReturnValue;                                       // 0x0(0x50)(ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

}
}


