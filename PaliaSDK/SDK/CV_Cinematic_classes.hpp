#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x98 (0x148 - 0xB0)
// BlueprintGeneratedClass CV_Cinematic.CV_Cinematic_C
class UCV_Cinematic_C : public UComp_CV_Overlaps_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         Enabled;                                           // 0xB8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_319B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ALevelSequenceActor*                   LevelSequence_Default;                             // 0xC0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	class FName                                  BP_Player;                                         // 0xC8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsRealTime;                                        // 0xD0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_319C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                MovieWidget;                                       // 0xD8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                           FullScreenWidget;                                  // 0xE0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         ValidSequence;                                     // 0xE8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_319E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnCinematicEnded;                                  // 0xF0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UWBP_Cinematic_WIP_C*                  TempCineUi;                                        // 0x100(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<class UClass*>                        Widget_Array;                                      // 0x108(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_            OnCinematicBegin;                                  // 0x118(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         IsCinePlaying;                                     // 0x128(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_31A0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ALevelSequenceActor*                   ActiveSequence;                                    // 0x130(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ALevelSequenceActor*                   LevelSequence_LowSpec;                             // 0x138(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	class UCinematicSequenceConfig*              CinematicConfig;                                   // 0x140(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UCV_Cinematic_C* GetDefaultObj();

	void Set_NPCVisibility(bool IsVisible, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class ABP_ValeriaVillagerCharacter_C*>& CallFunc_GetAllActorsOfClass_OutActors, int32 CallFunc_Array_Length_ReturnValue, class AActor* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class ABP_ValeriaVillagerCharacter_C* K2Node_DynamicCast_AsBP_Valeria_Villager_Character, bool K2Node_DynamicCast_bSuccess);
	void BindToSequencePlayerEvents(bool Bind, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class ULevelSequencePlayer* CallFunc_GetSequencePlayer_ReturnValue, class ULevelSequencePlayer* CallFunc_GetSequencePlayer_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3);
	void HandleScriptStartRequest(TSoftObjectPtr<class ULevelSequence> DesiredSequence, bool CallFunc_IsValid_ReturnValue, TSoftObjectPtr<class ULevelSequence> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue, bool CallFunc_EqualEqual_SoftObjectReference_ReturnValue);
	void OnEndCinMus(class UValeriaTimeManager* CallFunc_GetGameInstanceSubsystem_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FTimeOfDayFilter& K2Node_MakeStruct_TimeOfDayFilter, bool CallFunc_IsWithinTimeOfDayFilter_ReturnValue);
	void FastForwardToEnd(double DesiredTime, class ULevelSequencePlayer* CallFunc_GetSequencePlayer_ReturnValue, const struct FQualifiedFrameTime& CallFunc_GetCurrentTime_ReturnValue, class ULevelSequencePlayer* CallFunc_GetSequencePlayer_ReturnValue_1, float CallFunc_Conv_QualifiedFrameTimeToSeconds_ReturnValue, const struct FQualifiedFrameTime& CallFunc_GetEndTime_ReturnValue, float CallFunc_Conv_QualifiedFrameTimeToSeconds_ReturnValue_1, class ULevelSequencePlayer* CallFunc_GetSequencePlayer_ReturnValue_2, double CallFunc_Subtract_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, const struct FMovieSceneSequencePlaybackParams& K2Node_MakeStruct_MovieSceneSequencePlaybackParams, class ULevelSequencePlayer* CallFunc_GetSequencePlayer_ReturnValue_3, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, double CallFunc_Greater_DoubleDouble_B_ImplicitCast, double CallFunc_Subtract_DoubleDouble_A_ImplicitCast, float K2Node_MakeStruct_Time_ImplicitCast);
	void SetAudioListener(bool ListenerToCamera, class APawn* CallFunc_GetPlayerPawn_ReturnValue, class AValeriaCharacter* K2Node_DynamicCast_AsValeria_Character, bool K2Node_DynamicCast_bSuccess, class UComp_Listener_Padding_C* CallFunc_GetComponentByClass_ReturnValue, class AController* CallFunc_GetController_ReturnValue, class APlayerController* K2Node_DynamicCast_AsPlayer_Controller, bool K2Node_DynamicCast_bSuccess_1);
	void Start_Cinematic();
	void OnCinBegin();
	void OnCinEnd();
	void Stop_Cinematic();
	void ReceiveBeginPlay();
	void OnSkipCutsceneCnsleCmd();
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void BeginOverlap(class AActor* OverlappedActor, class AActor* OtherActor);
	void OnScriptStartCinematic(TSoftObjectPtr<class ULevelSequence> LevelSequence);
	void ExecuteUbergraph_CV_Cinematic(int32 EntryPoint, class ULevelSequencePlayer* CallFunc_GetSequencePlayer_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class AValeriaCharacter* K2Node_DynamicCast_AsValeria_Character, bool K2Node_DynamicCast_bSuccess, class UCharacterStateMachineComponent* CallFunc_GetCSM_ReturnValue, class UValeriaCharacterMoveComponent* CallFunc_GetValeriaCharacterMovementComponent_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, class UUserWidget* CallFunc_Create_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_3, bool CallFunc_IsValid_ReturnValue, class AValeriaPlayerController* K2Node_DynamicCast_AsValeria_Player_Controller, bool K2Node_DynamicCast_bSuccess_1, class UCinematicManagerComponent* CallFunc_GetCinematicManager_ReturnValue, class ULevelSequence* CallFunc_GetSequence_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_4, class APawn* CallFunc_K2_GetPawn_ReturnValue_1, class AValeriaCharacter* K2Node_DynamicCast_AsValeria_Character_1, bool K2Node_DynamicCast_bSuccess_2, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_5, class APawn* CallFunc_K2_GetPawn_ReturnValue_2, class APlayerController* CallFunc_GetPlayerController_ReturnValue_6, class AValeriaCharacter* K2Node_DynamicCast_AsValeria_Character_2, bool K2Node_DynamicCast_bSuccess_3, class UWBP_Cinematic_WIP_C* CallFunc_Create_ReturnValue_1, class UValeriaCharacterMoveComponent* CallFunc_GetValeriaCharacterMovementComponent_ReturnValue_1, class UClass* CallFunc_Array_Get_Item, class UClass* CallFunc_Array_Get_Item_1, TArray<class UUserWidget*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, TArray<class UUserWidget*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets_1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_2, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UValeriaGameInstance* K2Node_DynamicCast_AsValeria_Game_Instance, bool K2Node_DynamicCast_bSuccess_4, enum class EEndPlayReason K2Node_Event_EndPlayReason, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, class UValeriaGameInstance* K2Node_DynamicCast_AsValeria_Game_Instance_1, bool K2Node_DynamicCast_bSuccess_5, class AActor* K2Node_Event_OverlappedActor, class AActor* K2Node_Event_OtherActor, class AValeriaCharacter* K2Node_DynamicCast_AsValeria_Character_3, bool K2Node_DynamicCast_bSuccess_6, bool CallFunc_IsLocallyControlled_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_AkEventGlobal_ReturnValue, class UValeriaWeather* CallFunc_GetWorldSubsystem_ReturnValue, class AValEnvironmentManager* CallFunc_GetCurrentEnvManager_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue_1, class UUserWidget* CallFunc_Array_Get_Item_2, bool CallFunc_Less_IntInt_ReturnValue_1, TSoftObjectPtr<class ULevelSequence> K2Node_CustomEvent_LevelSequence, class APlayerController* CallFunc_GetPlayerController_ReturnValue_7, class APawn* CallFunc_K2_GetPawn_ReturnValue_3, class AValeriaCharacter* K2Node_DynamicCast_AsValeria_Character_4, bool K2Node_DynamicCast_bSuccess_7, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Client_TryUnequip_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_2, class APlayerController* CallFunc_GetPlayerController_ReturnValue_8, class APlayerController* CallFunc_GetPlayerController_ReturnValue_9, class AValeriaPlayerController* K2Node_DynamicCast_AsValeria_Player_Controller_1, bool K2Node_DynamicCast_bSuccess_8, class AValeriaPlayerController* K2Node_DynamicCast_AsValeria_Player_Controller_2, bool K2Node_DynamicCast_bSuccess_9, class UCinematicManagerComponent* CallFunc_GetCinematicManager_ReturnValue_1, class UCinematicManagerComponent* CallFunc_GetCinematicManager_ReturnValue_2, int32 Temp_int_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_3, class UUserWidget* CallFunc_Array_Get_Item_3, bool CallFunc_Less_IntInt_ReturnValue_3, int32 CallFunc_GetTagValue_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue_3);
	void OnCinematicBegin__DelegateSignature();
	void OnCinematicEnded__DelegateSignature();
};

}


