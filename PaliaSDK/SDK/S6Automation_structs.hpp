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

enum class ES6Auto_SuiteSearchType : uint8
{
	ES6Auto_SuiteSearchType__SuiteId = 0,
	ES6Auto_SuiteSearchType__AssetName = 1,
	ES6Auto_SuiteSearchType__ES6Auto_MAX = 2,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x10 - 0x0)
// ScriptStruct S6Automation.S6Auto_SuiteCollection
struct FS6Auto_SuiteCollection
{
public:
	TArray<class US6Auto_Suite*>                 Suites;                                            // 0x0(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct S6Automation.S6Auto_SuiteStep
struct FS6Auto_SuiteStep
{
public:
	double                                       TimeoutSeconds;                                    // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class US6Auto_SuiteStepScript>   ScriptClass;                                       // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class US6Auto_SuiteStepPayload*              Payload;                                           // 0x10(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
