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

// 0x50 (0x50 - 0x0)
// Function MAP_CharacterRender_LevelInstance_4.MAP_CharacterRender_C.GetAllTaggedActors
struct AMAP_CharacterRender_C_GetAllTaggedActors_Params
{
public:
	TSet<class AActor*>                          ReturnValue;                                       // 0x0(0x50)(Parm, OutParm, ReturnParm)
};

// 0x50 (0x50 - 0x0)
// Function MAP_CharacterRender_LevelInstance_4.MAP_CharacterRender_C.GetAllCameraActors
struct AMAP_CharacterRender_C_GetAllCameraActors_Params
{
public:
	TSet<class AActor*>                          ReturnValue;                                       // 0x0(0x50)(Parm, OutParm, ReturnParm)
};

// 0x18 (0x18 - 0x0)
// Function MAP_CharacterRender_LevelInstance_4.MAP_CharacterRender_C.GetCameraActorForCosmeticAsset
struct AMAP_CharacterRender_C_GetCameraActorForCosmeticAsset_Params
{
public:
	class UVAL_CharacterCustomizationItemBase*   Item;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class EVAL_CharacterBodyType            BodyType;                                          // 0x8(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4537[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function MAP_CharacterRender_LevelInstance_4.MAP_CharacterRender_C.GetCharacter
struct AMAP_CharacterRender_C_GetCharacter_Params
{
public:
	class AValeriaCharacter*                     ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function MAP_CharacterRender_LevelInstance_4.MAP_CharacterRender_C.GetDefaultCameraActor
struct AMAP_CharacterRender_C_GetDefaultCameraActor_Params
{
public:
	class AActor*                                ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function MAP_CharacterRender_LevelInstance_4.MAP_CharacterRender_C.ReceiveBeginPlay
struct AMAP_CharacterRender_C_ReceiveBeginPlay_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function MAP_CharacterRender_LevelInstance_4.MAP_CharacterRender_C.ExecuteUbergraph_MAP_CharacterRender
struct AMAP_CharacterRender_C_ExecuteUbergraph_MAP_CharacterRender_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


