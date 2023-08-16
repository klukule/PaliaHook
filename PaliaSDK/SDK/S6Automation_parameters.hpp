#pragma once

// Dumped with Dumper-7!

#include "SDK.hpp"

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x10 - 0x0)
// Function S6Automation.S6Auto_SuiteSubsystem.RunSuites
struct US6Auto_SuiteSubsystem_RunSuites_Params
{
public:
	TArray<class US6Auto_Suite*>                 Suites;                                            // 0x0(0x10)(ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function S6Automation.S6Auto_SuiteStepScript.StartStep
struct US6Auto_SuiteStepScript_StartStep_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function S6Automation.S6Auto_SuiteStepScript.MarkStepFailed
struct US6Auto_SuiteStepScript_MarkStepFailed_Params
{
public:
	class FString                                ErrorMessage;                                      // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function S6Automation.S6Auto_SuiteStepScript.MarkStepCompleted
struct US6Auto_SuiteStepScript_MarkStepCompleted_Params
{
public:
};

// 0x18 (0x18 - 0x0)
// Function S6Automation.S6Auto_SuiteStepScript.GetScriptDisplayName
struct US6Auto_SuiteStepScript_GetScriptDisplayName_Params
{
public:
	class US6Auto_SuiteStepPayload*              ScriptPayload;                                     // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function S6Automation.S6AutoStatics.GetSuitesFromId
struct US6AutoStatics_GetSuitesFromId_Params
{
public:
	class FString                                SuiteId;                                           // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class US6Auto_Suite>>  ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function S6Automation.S6AutoStatics.GetSuitesFromAssetName
struct US6AutoStatics_GetSuitesFromAssetName_Params
{
public:
	class FName                                  SuiteAssetName;                                    // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class US6Auto_Suite>>  ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function S6Automation.S6AutoStatics.GetAllSuites
struct US6AutoStatics_GetAllSuites_Params
{
public:
	TArray<TSoftObjectPtr<class US6Auto_Suite>>  ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, UObjectWrapper, NativeAccessSpecifierPublic)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
