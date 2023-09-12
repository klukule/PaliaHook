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

// 0x39 (0x39 - 0x0)
// Function Comp_Actor_Audio_Data.Comp_Actor_Audio_Data_C.WeatherManagerIsRaining
struct UComp_Actor_Audio_Data_C_WeatherManagerIsRaining_Params
{
public:
	bool                                         bIsRaining;                                        // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2958[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UValeriaWeather*                       CallFunc_GetWorldSubsystem_ReturnValue;            // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FWeatherStateProperties               CallFunc_GetCurrentWorldWeatherState_ReturnValue;  // 0x10(0x28)(None)
	bool                                         CallFunc_HasTag_ReturnValue;                       // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xB (0xB - 0x0)
// Function Comp_Actor_Audio_Data.Comp_Actor_Audio_Data_C.UpdatePhysmat
struct UComp_Actor_Audio_Data_C_UpdatePhysmat_Params
{
public:
	class UPhysicalMaterial*                     PhysMat;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0xA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function Comp_Actor_Audio_Data.Comp_Actor_Audio_Data_C.SetDialogIntro
struct UComp_Actor_Audio_Data_C_SetDialogIntro_Params
{
public:
	bool                                         IsPlayingIntro;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function Comp_Actor_Audio_Data.Comp_Actor_Audio_Data_C.SetDialogOutro
struct UComp_Actor_Audio_Data_C_SetDialogOutro_Params
{
public:
	bool                                         IsPlayingOutro;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function Comp_Actor_Audio_Data.Comp_Actor_Audio_Data_C.RainStop
struct UComp_Actor_Audio_Data_C_RainStop_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Comp_Actor_Audio_Data.Comp_Actor_Audio_Data_C.ReceiveBeginPlay
struct UComp_Actor_Audio_Data_C_ReceiveBeginPlay_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Comp_Actor_Audio_Data.Comp_Actor_Audio_Data_C.DistanceFade_Exterior_Overlap
struct UComp_Actor_Audio_Data_C_DistanceFade_Exterior_Overlap_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Comp_Actor_Audio_Data.Comp_Actor_Audio_Data_C.DistanceFadeInteriorOverlap
struct UComp_Actor_Audio_Data_C_DistanceFadeInteriorOverlap_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function Comp_Actor_Audio_Data.Comp_Actor_Audio_Data_C.HasEnteredWater
struct UComp_Actor_Audio_Data_C_HasEnteredWater_Params
{
public:
	bool                                         TURR;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function Comp_Actor_Audio_Data.Comp_Actor_Audio_Data_C.HasEnteredWetArea
struct UComp_Actor_Audio_Data_C_HasEnteredWetArea_Params
{
public:
	bool                                         TURR;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function Comp_Actor_Audio_Data.Comp_Actor_Audio_Data_C.WeatherChanged
struct UComp_Actor_Audio_Data_C_WeatherChanged_Params
{
public:
	struct FWeatherStateProperties               State;                                             // 0x0(0x28)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x0 (0x0 - 0x0)
// Function Comp_Actor_Audio_Data.Comp_Actor_Audio_Data_C.RainStart
struct UComp_Actor_Audio_Data_C_RainStart_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Comp_Actor_Audio_Data.Comp_Actor_Audio_Data_C.Raining
struct UComp_Actor_Audio_Data_C_Raining_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Comp_Actor_Audio_Data.Comp_Actor_Audio_Data_C.NotRaining
struct UComp_Actor_Audio_Data_C_NotRaining_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Comp_Actor_Audio_Data.Comp_Actor_Audio_Data_C.DecreaseWetness
struct UComp_Actor_Audio_Data_C_DecreaseWetness_Params
{
public:
};

// 0xC5 (0xC5 - 0x0)
// Function Comp_Actor_Audio_Data.Comp_Actor_Audio_Data_C.ExecuteUbergraph_Comp_Actor_Audio_Data
struct UComp_Actor_Audio_Data_C_ExecuteUbergraph_Comp_Actor_Audio_Data_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_297A[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_FClamp_ReturnValue;                       // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_FClamp_ReturnValue_1;                     // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_True_1;                         // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_297B[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Add_DoubleDouble_ReturnValue;             // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_True;                           // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_297C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_FClamp_ReturnValue_2;                     // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_DoubleDouble_ReturnValue;       // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue_1;                  // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_WeatherManagerIsRaining_bIsRaining;       // 0x3A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_DoubleDouble_ReturnValue;    // 0x3B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_297F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FWeatherStateProperties               K2Node_CustomEvent_state;                          // 0x40(0x28)(ConstParm)
	double                                       CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_WeatherManagerIsRaining_bIsRaining_1;     // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2980[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x74(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2981[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UValeriaWeather*                       CallFunc_GetWorldSubsystem_ReturnValue;            // 0x88(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Subtract_DoubleDouble_ReturnValue_1;      // 0x90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_FClamp_ReturnValue_3;                     // 0x98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0xA0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0xA8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsInside_IsInside;                        // 0xC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0xC1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0xC2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0xC3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0xC4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


