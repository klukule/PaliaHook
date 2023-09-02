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

// 0x18 (0x18 - 0x0)
// Function MAP_PreGame.MAP_PreGame_C.GetRenderStudioSpawnLocation
struct AMAP_PreGame_C_GetRenderStudioSpawnLocation_Params
{
public:
	struct FVector                               ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function MAP_PreGame.MAP_PreGame_C.GetCharacterInventoryPreviewer
struct AMAP_PreGame_C_GetCharacterInventoryPreviewer_Params
{
public:
	class AVAL_CharacterPreviewer*               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
};

// 0x80 (0x80 - 0x0)
// Function MAP_PreGame.MAP_PreGame_C.GetCharacterPreviewer
struct AMAP_PreGame_C_GetCharacterPreviewer_Params
{
public:
	class AVAL_CharacterPreviewer*               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4441[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_MakeTransform_ReturnValue;                // 0x10(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x70(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_CharacterPreview_C*                CallFunc_FinishSpawningActor_ReturnValue;          // 0x78(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function MAP_PreGame.MAP_PreGame_C.GetCharacterRenderStudio
struct AMAP_PreGame_C_GetCharacterRenderStudio_Params
{
public:
	class AVAL_CharacterRenderStudio*            ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function MAP_PreGame.MAP_PreGame_C.GetItemPreviewerSpawnLocation
struct AMAP_PreGame_C_GetItemPreviewerSpawnLocation_Params
{
public:
	struct FVector                               ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function MAP_PreGame.MAP_PreGame_C.GetLobbyCharacter
struct AMAP_PreGame_C_GetLobbyCharacter_Params
{
public:
	class AValeriaCharacter*                     ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
};

}
}


