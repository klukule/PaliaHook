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


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x10 - 0x0)
// ScriptStruct DeveloperSettings.PerPlatformSettings
struct FPerPlatformSettings
{
public:
	TArray<class UPlatformSettings*>             Settings;                                          // 0x0(0x10)(Edit, ExportObject, EditFixedSize, ZeroConstructor, Transient, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct DeveloperSettings.PlatformSettingsInstances
struct FPlatformSettingsInstances
{
public:
	class UPlatformSettings*                     PlatformInstance;                                  // 0x0(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FName, class UPlatformSettings*>  OtherPlatforms;                                    // 0x8(0x50)(Transient, UObjectWrapper, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
