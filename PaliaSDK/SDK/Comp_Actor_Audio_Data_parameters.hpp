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

// 0x28 (0x28 - 0x0)
// Function Comp_Actor_Audio_Data.Comp_Actor_Audio_Data_C.Get Voice Audio Component
struct UComp_Actor_Audio_Data_C_Get_Voice_Audio_Component_Params
{
public:
	class UAkComponent*                          AkComponent;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AValeriaVillagerCharacter*             K2Node_DynamicCast_AsValeria_Villager_Character;   // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_AkGetComponent_ComponentCreated;          // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2BAA[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAkComponent*                          CallFunc_AkGetComponent_AkComponent;               // 0x20(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x1E0 (0x1E0 - 0x0)
// Function Comp_Actor_Audio_Data.Comp_Actor_Audio_Data_C.GetDialogBookend
struct UComp_Actor_Audio_Data_C_GetDialogBookend_Params
{
public:
	bool                                         Intro;                                             // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2BC1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UDialogueComponent*                    Dialog;                                            // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AValeriaCharacter*                     Player;                                            // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                         DialogEvent;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AValeriaVillagerCharacter*             Villager;                                          // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	class UDialogBookendAudioSet_C*              CurrentDialogSet;                                  // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<struct FStruct_DialogBookendConfig>   Config;                                            // 0x30(0x10)(Edit, BlueprintVisible)
	bool                                         CallFunc_IsLocallyControlled_ReturnValue;          // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_True_if_break_was_hit_Variable;          // 0x41(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x42(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2BC3[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x49(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2BC5[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAkAudioEvent*                         CallFunc_GetRandomDialogEvent_DialogEvent;         // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FStruct_DialogBookendConfig           CallFunc_Array_Get_Item;                           // 0x58(0x140)(HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x198(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2BC6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x1A0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AValeriaVillagerCharacter*             K2Node_DynamicCast_AsValeria_Villager_Character;   // 0x1A8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x1B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1B1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsDialogueRequirementMetForWorldVillager_ReturnValue; // 0x1B2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2BC8[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x1B4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x1B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2BCA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x1BC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x1C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2BCC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAkAudioEvent*                         CallFunc_GetRandomDialogEvent_DialogEvent_1;       // 0x1C8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<struct FStruct_DialogBookendConfig>   K2Node_Select_Default;                             // 0x1D0(0x10)(ReferenceParm)
};

// 0x39 (0x39 - 0x0)
// Function Comp_Actor_Audio_Data.Comp_Actor_Audio_Data_C.WeatherManagerIsRaining
struct UComp_Actor_Audio_Data_C_WeatherManagerIsRaining_Params
{
public:
	bool                                         bIsRaining;                                        // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2BD3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
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

// 0x0 (0x0 - 0x0)
// Function Comp_Actor_Audio_Data.Comp_Actor_Audio_Data_C.Raining
struct UComp_Actor_Audio_Data_C_Raining_Params
{
public:
};

// 0x28 (0x28 - 0x0)
// Function Comp_Actor_Audio_Data.Comp_Actor_Audio_Data_C.WeatherChanged
struct UComp_Actor_Audio_Data_C_WeatherChanged_Params
{
public:
	struct FWeatherStateProperties               State;                                             // 0x0(0x28)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x0 (0x0 - 0x0)
// Function Comp_Actor_Audio_Data.Comp_Actor_Audio_Data_C.NotRaining
struct UComp_Actor_Audio_Data_C_NotRaining_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Comp_Actor_Audio_Data.Comp_Actor_Audio_Data_C.RainStart
struct UComp_Actor_Audio_Data_C_RainStart_Params
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
// Function Comp_Actor_Audio_Data.Comp_Actor_Audio_Data_C.DecreaseWetness
struct UComp_Actor_Audio_Data_C_DecreaseWetness_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function Comp_Actor_Audio_Data.Comp_Actor_Audio_Data_C.DialogStarted
struct UComp_Actor_Audio_Data_C_DialogStarted_Params
{
public:
	class UDialogueComponent*                    Diag;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AValeriaCharacter*                     PlayerParticipant;                                 // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function Comp_Actor_Audio_Data.Comp_Actor_Audio_Data_C.DialogEnded
struct UComp_Actor_Audio_Data_C_DialogEnded_Params
{
public:
	class UDialogueComponent*                    Diag;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AValeriaCharacter*                     PlayerParticipant;                                 // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function Comp_Actor_Audio_Data.Comp_Actor_Audio_Data_C.IntroAudioFinished
struct UComp_Actor_Audio_Data_C_IntroAudioFinished_Params
{
public:
	enum class EAkCallbackType                   CallbackType;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2BEB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAkCallbackInfo*                       CallbackInfo;                                      // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function Comp_Actor_Audio_Data.Comp_Actor_Audio_Data_C.OutroAudioFinished
struct UComp_Actor_Audio_Data_C_OutroAudioFinished_Params
{
public:
	enum class EAkCallbackType                   CallbackType;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2BED[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAkCallbackInfo*                       CallbackInfo;                                      // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function Comp_Actor_Audio_Data.Comp_Actor_Audio_Data_C.PlayDialogBookend
struct UComp_Actor_Audio_Data_C_PlayDialogBookend_Params
{
public:
	bool                                         Intro;                                             // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2BEE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAkAudioEvent*                         AkEvent;                                           // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x1A8 (0x1A8 - 0x0)
// Function Comp_Actor_Audio_Data.Comp_Actor_Audio_Data_C.ExecuteUbergraph_Comp_Actor_Audio_Data
struct UComp_Actor_Audio_Data_C_ExecuteUbergraph_Comp_Actor_Audio_Data_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2C0D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_FClamp_ReturnValue;                       // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_FClamp_ReturnValue_1;                     // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_DoubleDouble_ReturnValue;       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_True_1;                         // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x1A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_True;                           // 0x1B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_WeatherManagerIsRaining_bIsRaining;       // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue_1;                  // 0x1D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2C0F[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FWeatherStateProperties               K2Node_CustomEvent_state;                          // 0x20(0x28)(ConstParm)
	double                                       CallFunc_Add_DoubleDouble_ReturnValue;             // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_FClamp_ReturnValue_2;                     // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_DoubleDouble_ReturnValue;    // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_WeatherManagerIsRaining_bIsRaining_1;     // 0x59(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2C12[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UValeriaWeather*                       CallFunc_GetWorldSubsystem_ReturnValue;            // 0x60(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Subtract_DoubleDouble_ReturnValue_1;      // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_FClamp_ReturnValue_3;                     // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x80(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x88(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsInside_IsInside;                        // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0xA1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0xA2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0xA3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2C14[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_GetOwner_ReturnValue_1;                   // 0xA8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0xB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2C15[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UDialogueComponent*                    CallFunc_GetComponentByClass_ReturnValue;          // 0xB8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0xC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xC1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2C16[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0xC4(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0xD4(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2C17[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UDialogueComponent*                    K2Node_CustomEvent_diag_1;                         // 0xE8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AValeriaCharacter*                     K2Node_CustomEvent_playerParticipant_1;            // 0xF0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0xF8(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                         CallFunc_GetDialogBookend_DialogEvent;             // 0x108(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UDialogueComponent*                    K2Node_CustomEvent_diag;                           // 0x110(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AValeriaCharacter*                     K2Node_CustomEvent_playerParticipant;              // 0x118(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                         CallFunc_GetDialogBookend_DialogEvent_1;           // 0x120(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetOwner_ReturnValue_2;                   // 0x128(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetOwner_ReturnValue_3;                   // 0x130(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class EAkCallbackType                   K2Node_CustomEvent_CallbackType_1;                 // 0x138(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2C19[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAkCallbackInfo*                       K2Node_CustomEvent_CallbackInfo_1;                 // 0x140(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class EAkCallbackType                   K2Node_CustomEvent_CallbackType;                   // 0x148(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2C1A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAkCallbackInfo*                       K2Node_CustomEvent_CallbackInfo;                   // 0x150(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAkComponent*                          CallFunc_Get_Voice_Audio_Component_AkComponent;    // 0x158(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x160(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x170(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_Intro;                          // 0x171(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2C1B[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAkAudioEvent*                         K2Node_CustomEvent_AkEvent;                        // 0x178(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x180(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2C1C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_4;            // 0x184(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_Select_Default;                             // 0x194(0x10)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_AkEventComponentCallback_ReturnValue;     // 0x1A4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


