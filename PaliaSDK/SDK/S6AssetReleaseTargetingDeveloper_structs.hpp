#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0xC - 0x0)
// ScriptStruct S6AssetReleaseTargetingDeveloper.S6AssetReleaseTargetingInfo
struct FS6AssetReleaseTargetingInfo
{
public:
	bool                                         bIsDeveloperOnly;                                  // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9DF[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS6ReleaseVersionSpecification        ReleaseVersionSpec;                                // 0x4(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}


