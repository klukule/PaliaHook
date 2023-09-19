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

// 0xA0 (0xA0 - 0x0)
// Function MAP_CharacterCreation_LevelInstance_1.MAP_CharacterCreation_C.GetAllTaggedActors
struct AMAP_CharacterCreation_C_GetAllTaggedActors_Params
{
public:
	TSet<class AActor*>                          ReturnValue;                                       // 0x0(0x50)(Parm, OutParm, ReturnParm)
	TSet<class AActor*>                          K2Node_MakeSet_Set;                                // 0x50(0x50)(None)
};

// 0x100 (0x100 - 0x0)
// Function MAP_CharacterCreation_LevelInstance_1.MAP_CharacterCreation_C.GetCameraActorForCosmeticAsset
struct AMAP_CharacterCreation_C_GetCameraActorForCosmeticAsset_Params
{
public:
	class UVAL_CharacterCustomizationItemBase*   Item;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class EVAL_CharacterBodyType            BodyType;                                          // 0x8(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_458B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
	TSet<class UClass*>                          FacialCamClassTargets;                             // 0x18(0x50)(Edit, BlueprintVisible)
	class AActor*                                Actor;                                             // 0x68(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	class AActor*                                Temp_object_Variable;                              // 0x70(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_458C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                CallFunc_GetObjectClass_ReturnValue;               // 0x80(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TSet<class UClass*>                          K2Node_MakeVariable_MakeVariableOutput;            // 0x88(0x50)(None)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0xD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Set_Contains_ReturnValue;                 // 0xD9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_458D[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_GetDefaultCameraActor_ReturnValue;        // 0xE0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                Temp_object_Variable_1;                            // 0xE8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class EVAL_CharacterBodyType            Temp_byte_Variable;                                // 0xF0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_458E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                K2Node_Select_Default;                             // 0xF8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0xA0 (0xA0 - 0x0)
// Function MAP_CharacterCreation_LevelInstance_1.MAP_CharacterCreation_C.GetAllCameraActors
struct AMAP_CharacterCreation_C_GetAllCameraActors_Params
{
public:
	TSet<class AActor*>                          ReturnValue;                                       // 0x0(0x50)(Parm, OutParm, ReturnParm)
	TSet<class AActor*>                          K2Node_MakeSet_Set;                                // 0x50(0x50)(None)
};

// 0x8 (0x8 - 0x0)
// Function MAP_CharacterCreation_LevelInstance_1.MAP_CharacterCreation_C.GetDefaultCameraActor
struct AMAP_CharacterCreation_C_GetDefaultCameraActor_Params
{
public:
	class AActor*                                ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function MAP_CharacterCreation_LevelInstance_1.MAP_CharacterCreation_C.GetCharacter
struct AMAP_CharacterCreation_C_GetCharacter_Params
{
public:
	class AValeriaCharacter*                     ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function MAP_CharacterCreation_LevelInstance_1.MAP_CharacterCreation_C.ReceiveBeginPlay
struct AMAP_CharacterCreation_C_ReceiveBeginPlay_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function MAP_CharacterCreation_LevelInstance_1.MAP_CharacterCreation_C.ReceiveEndPlay
struct AMAP_CharacterCreation_C_ReceiveEndPlay_Params
{
public:
	enum class EEndPlayReason                    EndPlayReason;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x44 (0x44 - 0x0)
// Function MAP_CharacterCreation_LevelInstance_1.MAP_CharacterCreation_C.ExecuteUbergraph_MAP_CharacterCreation
struct AMAP_CharacterCreation_C_ExecuteUbergraph_MAP_CharacterCreation_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EEndPlayReason                    K2Node_Event_EndPlayReason;                        // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_458F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue_1;        // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UCharacterCustomManager*               CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue; // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UCharacterCustomManager*               CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue_1; // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4590[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AVAL_CharacterRenderStudio*            CallFunc_GetCharacterRenderStudio_ReturnValue;     // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AVAL_CharacterRenderStudio*            CallFunc_GetCharacterRenderStudio_ReturnValue_1;   // 0x38(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0x41(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_4;                    // 0x42(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_5;                    // 0x43(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


