#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x70 (0x110 - 0xA0)
// BlueprintGeneratedClass Comp_Actor_Audio_Data.Comp_Actor_Audio_Data_C
class UComp_Actor_Audio_Data_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	enum class E_WaterEffect                     E_Water_Effects;                                   // 0xA8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_Footwear                        E_Footwear;                                        // 0xA9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2C1F[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       WetRTPC;                                           // 0xB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       WetExterior;                                       // 0xB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          Handle;                                            // 0xC0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         IsInside;                                          // 0xC8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2C20[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
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
	bool                                         IsOnQuest;                                         // 0x105(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2C22[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UDialogBookendConfig_C*                DialogBookendConfig;                               // 0x108(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UComp_Actor_Audio_Data_C* GetDefaultObj();

	void Get_Voice_Audio_Component(class UAkComponent** AkComponent, class AActor* CallFunc_GetOwner_ReturnValue, class AValeriaVillagerCharacter* K2Node_DynamicCast_AsValeria_Villager_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_AkGetComponent_ComponentCreated, class UAkComponent* CallFunc_AkGetComponent_AkComponent);
	void GetDialogBookend(bool Intro, class UDialogueComponent* Dialog, class AValeriaCharacter* Player, class UAkAudioEvent** DialogEvent, class AValeriaVillagerCharacter* Villager, class UDialogBookendAudioSet_C* CurrentDialogSet, const TArray<struct FStruct_DialogBookendConfig>& Config, bool CallFunc_IsLocallyControlled_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsDedicatedServer_ReturnValue, bool Temp_bool_Variable, class UAkAudioEvent* CallFunc_GetRandomDialogEvent_DialogEvent, const struct FStruct_DialogBookendConfig& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class AValeriaVillagerCharacter* K2Node_DynamicCast_AsValeria_Villager_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsDialogueRequirementMetForWorldVillager_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UAkAudioEvent* CallFunc_GetRandomDialogEvent_DialogEvent_1, TArray<struct FStruct_DialogBookendConfig>& K2Node_Select_Default);
	void WeatherManagerIsRaining(bool* bIsRaining, class UValeriaWeather* CallFunc_GetWorldSubsystem_ReturnValue, const struct FWeatherStateProperties& CallFunc_GetCurrentWorldWeatherState_ReturnValue, bool CallFunc_HasTag_ReturnValue);
	void UpdatePhysmat(class UPhysicalMaterial* PhysMat, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue);
	void SetDialogIntro(bool IsPlayingIntro);
	void SetDialogOutro(bool IsPlayingOutro);
	void RainStop();
	void DistanceFade_Exterior_Overlap();
	void DistanceFadeInteriorOverlap();
	void HasEnteredWater(bool TURR);
	void HasEnteredWetArea(bool TURR);
	void Raining();
	void WeatherChanged(const struct FWeatherStateProperties& State);
	void NotRaining();
	void RainStart();
	void ReceiveBeginPlay();
	void DecreaseWetness();
	void DialogStarted(class UDialogueComponent* Diag, class AValeriaCharacter* PlayerParticipant);
	void DialogEnded(class UDialogueComponent* Diag, class AValeriaCharacter* PlayerParticipant);
	void IntroAudioFinished(enum class EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo);
	void OutroAudioFinished(enum class EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo);
	void PlayDialogBookend(bool Intro, class UAkAudioEvent* AkEvent);
	void ExecuteUbergraph_Comp_Actor_Audio_Data(int32 EntryPoint, bool CallFunc_IsDedicatedServer_ReturnValue, double CallFunc_FClamp_ReturnValue, double CallFunc_FClamp_ReturnValue_1, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, bool K2Node_CustomEvent_True_1, bool CallFunc_BooleanOR_ReturnValue, bool K2Node_CustomEvent_True, bool CallFunc_WeatherManagerIsRaining_bIsRaining, bool CallFunc_BooleanOR_ReturnValue_1, const struct FWeatherStateProperties& K2Node_CustomEvent_state, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_FClamp_ReturnValue_2, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, bool CallFunc_WeatherManagerIsRaining_bIsRaining_1, class UValeriaWeather* CallFunc_GetWorldSubsystem_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue_1, double CallFunc_FClamp_ReturnValue_3, class AActor* CallFunc_GetOwner_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsInside_IsInside, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1, class UDialogueComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UDialogueComponent* K2Node_CustomEvent_diag_1, class AValeriaCharacter* K2Node_CustomEvent_playerParticipant_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UAkAudioEvent* CallFunc_GetDialogBookend_DialogEvent, class UDialogueComponent* K2Node_CustomEvent_diag, class AValeriaCharacter* K2Node_CustomEvent_playerParticipant, class UAkAudioEvent* CallFunc_GetDialogBookend_DialogEvent_1, class AActor* CallFunc_GetOwner_ReturnValue_2, class AActor* CallFunc_GetOwner_ReturnValue_3, enum class EAkCallbackType K2Node_CustomEvent_CallbackType_1, class UAkCallbackInfo* K2Node_CustomEvent_CallbackInfo_1, enum class EAkCallbackType K2Node_CustomEvent_CallbackType, class UAkCallbackInfo* K2Node_CustomEvent_CallbackInfo, class UAkComponent* CallFunc_Get_Voice_Audio_Component_AkComponent, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool CallFunc_IsValid_ReturnValue_1, bool K2Node_CustomEvent_Intro, class UAkAudioEvent* K2Node_CustomEvent_AkEvent, bool Temp_bool_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_Select_Default, int32 CallFunc_AkEventComponentCallback_ReturnValue);
};

}


