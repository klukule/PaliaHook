#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x65 (0x105 - 0xA0)
// BlueprintGeneratedClass Comp_Actor_Audio_Data.Comp_Actor_Audio_Data_C
class UComp_Actor_Audio_Data_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	enum class E_WaterEffect                     E_Water_Effects;                                   // 0xA8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_Footwear                        E_Footwear;                                        // 0xA9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_26F3[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       WetRTPC;                                           // 0xB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       WetExterior;                                       // 0xB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          Handle;                                            // 0xC0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         IsInside;                                          // 0xC8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_26F4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       WetInterior;                                       // 0xD0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       WetDecayValue;                                     // 0xD8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       WetAccelerateValue;                                // 0xE0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       StepDecayValue;                                    // 0xE8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       UpdateFrequency;                                   // 0xF0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                     StoredPhysmat;                                     // 0xF8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         IsInWater;                                         // 0x100(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsRaining;                                         // 0x101(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsInWetArea;                                       // 0x102(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsPlayingIntro;                                    // 0x103(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsPlayingOutro;                                    // 0x104(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UComp_Actor_Audio_Data_C* GetDefaultObj();

	void WeatherManagerIsRaining(bool* bIsRaining, class UValeriaWeather* CallFunc_GetWorldSubsystem_ReturnValue, const struct FWeatherStateProperties& CallFunc_GetCurrentWorldWeatherState_ReturnValue, bool CallFunc_HasTag_ReturnValue);
	void UpdatePhysmat(class UPhysicalMaterial* PhysMat, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue);
	void SetDialogIntro(bool IsPlayingIntro);
	void SetDialogOutro(bool IsPlayingOutro);
	void RainStop();
	void ReceiveBeginPlay();
	void DistanceFade_Exterior_Overlap();
	void DistanceFadeInteriorOverlap();
	void HasEnteredWater(bool TURR);
	void HasEnteredWetArea(bool TURR);
	void WeatherChanged(const struct FWeatherStateProperties& State);
	void RainStart();
	void Raining();
	void NotRaining();
	void DecreaseWetness();
	void ExecuteUbergraph_Comp_Actor_Audio_Data(int32 EntryPoint, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, double CallFunc_FClamp_ReturnValue, double CallFunc_FClamp_ReturnValue_1, bool K2Node_CustomEvent_True_1, bool CallFunc_BooleanOR_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, bool K2Node_CustomEvent_True, double CallFunc_FClamp_ReturnValue_2, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_WeatherManagerIsRaining_bIsRaining, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, const struct FWeatherStateProperties& K2Node_CustomEvent_state, double CallFunc_Subtract_DoubleDouble_ReturnValue, bool CallFunc_WeatherManagerIsRaining_bIsRaining_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UValeriaWeather* CallFunc_GetWorldSubsystem_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue_1, double CallFunc_FClamp_ReturnValue_3, class AActor* CallFunc_GetOwner_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsInside_IsInside, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1);
};

}


