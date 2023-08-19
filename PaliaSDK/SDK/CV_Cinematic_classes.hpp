#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x9B (0x14B - 0xB0)
// BlueprintGeneratedClass CV_Cinematic.CV_Cinematic_C
class UCV_Cinematic_C : public UComp_CV_Overlaps_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         Enabled;                                           // 0xB8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_415B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ALevelSequenceActor*                   Sequence;                                          // 0xC0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	class FName                                  BP_Player;                                         // 0xC8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsRealTime;                                        // 0xD0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_415C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                MovieWidget;                                       // 0xD8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                           FullScreenWidget;                                  // 0xE0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         ValidSequence;                                     // 0xE8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_415D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTag                          AlreadyDone;                                       // 0xEC(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_415E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnCinematicEnded;                                  // 0xF8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UWBP_Cinematic_WIP_C*                  TempCineUi;                                        // 0x108(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<class UClass*>                        Widget_Array;                                      // 0x110(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_            OnCinematicBegin;                                  // 0x120(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         Skippable;                                         // 0x130(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_415F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAkSwitchValue*                        OnEndCinReturnMus;                                 // 0x138(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAkStateValue*                         OnStartCinState;                                   // 0x140(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         IsCinePlaying;                                     // 0x148(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HideOtherPlayers;                                  // 0x149(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HideNPCs;                                          // 0x14A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CV_Cinematic_C");
		return Clss;
	}

	void Set_NPCVisibility(bool InIsVisible, int32 InTemp_int_Array_Index_Variable, int32 InTemp_int_Loop_Counter_Variable, int32 InCallFunc_Add_IntInt_ReturnValue, TArray<class ABP_ValeriaVillagerCharacter_C*>& InCallFunc_GetAllActorsOfClass_OutActors, int32 InCallFunc_Array_Length_ReturnValue, class AActor* InCallFunc_Array_Get_Item, bool InCallFunc_Less_IntInt_ReturnValue, class ABP_ValeriaVillagerCharacter_C* InK2Node_DynamicCast_AsBP_Valeria_Villager_Character, bool InK2Node_DynamicCast_bSuccess);
	void BindToSequencePlayerEvents(bool InBind, FDelegateProperty_ InK2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ InK2Node_CreateDelegate_OutputDelegate_1, class ULevelSequencePlayer* InCallFunc_GetSequencePlayer_ReturnValue, class ULevelSequencePlayer* InCallFunc_GetSequencePlayer_ReturnValue_1, FDelegateProperty_ InK2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ InK2Node_CreateDelegate_OutputDelegate_3);
	void HandleScriptStartRequest(TSoftObjectPtr<class ULevelSequence> InDesiredSequence, bool InCallFunc_IsValid_ReturnValue, TSoftObjectPtr<class ULevelSequence> InCallFunc_Conv_ObjectToSoftObjectReference_ReturnValue, bool InCallFunc_EqualEqual_SoftObjectReference_ReturnValue);
	void OnEndCinMus(bool InCallFunc_IsValid_ReturnValue, const struct FTimeOfDayFilter& InK2Node_MakeStruct_TimeOfDayFilter, class UValeriaTimeManager* InCallFunc_GetGameInstanceSubsystem_ReturnValue, bool InCallFunc_IsWithinTimeOfDayFilter_ReturnValue);
	void FastForwardToEnd(double InDesiredTime, class ULevelSequencePlayer* InCallFunc_GetSequencePlayer_ReturnValue, const struct FQualifiedFrameTime& InCallFunc_GetCurrentTime_ReturnValue, class ULevelSequencePlayer* InCallFunc_GetSequencePlayer_ReturnValue_1, float InCallFunc_Conv_QualifiedFrameTimeToSeconds_ReturnValue, const struct FQualifiedFrameTime& InCallFunc_GetEndTime_ReturnValue, float InCallFunc_Conv_QualifiedFrameTimeToSeconds_ReturnValue_1, class ULevelSequencePlayer* InCallFunc_GetSequencePlayer_ReturnValue_2, double InCallFunc_Subtract_DoubleDouble_ReturnValue, bool InCallFunc_Greater_DoubleDouble_ReturnValue, const struct FMovieSceneSequencePlaybackParams& InK2Node_MakeStruct_MovieSceneSequencePlaybackParams, class ULevelSequencePlayer* InCallFunc_GetSequencePlayer_ReturnValue_3, bool InCallFunc_IsValid_ReturnValue, bool InCallFunc_IsValid_ReturnValue_1, double InCallFunc_Greater_DoubleDouble_B_ImplicitCast, double InCallFunc_Subtract_DoubleDouble_A_ImplicitCast, float InK2Node_MakeStruct_Time_ImplicitCast);
	void SetAudioListener(bool InListenerToCamera, class APawn* InCallFunc_GetPlayerPawn_ReturnValue, class AValeriaCharacter* InK2Node_DynamicCast_AsValeria_Character, bool InK2Node_DynamicCast_bSuccess, class UComp_Listener_Padding_C* InCallFunc_GetComponentByClass_ReturnValue, class AController* InCallFunc_GetController_ReturnValue, class APlayerController* InK2Node_DynamicCast_AsPlayer_Controller, bool InK2Node_DynamicCast_bSuccess_1);
	void Start_Cinematic();
	void OnCinBegin();
	void OnCinEnd();
	void Stop_Cinematic();
	void ReceiveBeginPlay();
	void OnSkipCutsceneCnsleCmd();
	void ReceiveEndPlay(enum class EEndPlayReason InEndPlayReason);
	void BeginOverlap(class AActor* InOverlappedActor, class AActor* InOtherActor);
	void OnScriptStartCinematic(TSoftObjectPtr<class ULevelSequence> InLevelSequence);
	void ExecuteUbergraph_CV_Cinematic(int32 InEntryPoint, int32 InTemp_int_Variable, int32 InCallFunc_Add_IntInt_ReturnValue, int32 InTemp_int_Array_Index_Variable, class ULevelSequencePlayer* InCallFunc_GetSequencePlayer_ReturnValue, class APlayerController* InCallFunc_GetPlayerController_ReturnValue, class APawn* InCallFunc_K2_GetPawn_ReturnValue, class APlayerController* InCallFunc_GetPlayerController_ReturnValue_1, class AValeriaCharacter* InK2Node_DynamicCast_AsValeria_Character, bool InK2Node_DynamicCast_bSuccess, class UCharacterStateMachineComponent* InCallFunc_GetCSM_ReturnValue, class UValeriaCharacterMoveComponent* InCallFunc_GetValeriaCharacterMovementComponent_ReturnValue, class APlayerController* InCallFunc_GetPlayerController_ReturnValue_2, class UUserWidget* InCallFunc_Create_ReturnValue, bool InCallFunc_IsValid_ReturnValue, class ULevelSequence* InCallFunc_GetSequence_ReturnValue, bool InCallFunc_IsValid_ReturnValue_1, class APlayerController* InCallFunc_GetPlayerController_ReturnValue_3, class AValeriaPlayerController* InK2Node_DynamicCast_AsValeria_Player_Controller, bool InK2Node_DynamicCast_bSuccess_1, class APlayerController* InCallFunc_GetPlayerController_ReturnValue_4, class APawn* InCallFunc_K2_GetPawn_ReturnValue_1, class AValeriaCharacter* InK2Node_DynamicCast_AsValeria_Character_1, bool InK2Node_DynamicCast_bSuccess_2, int32 InTemp_int_Array_Index_Variable_1, class APlayerController* InCallFunc_GetPlayerController_ReturnValue_5, class APlayerController* InCallFunc_GetPlayerController_ReturnValue_6, class APawn* InCallFunc_K2_GetPawn_ReturnValue_2, class UWBP_Cinematic_WIP_C* InCallFunc_Create_ReturnValue_1, class AValeriaCharacter* InK2Node_DynamicCast_AsValeria_Character_2, bool InK2Node_DynamicCast_bSuccess_3, class UValeriaCharacterMoveComponent* InCallFunc_GetValeriaCharacterMovementComponent_ReturnValue_1, class UClass* InCallFunc_Array_Get_Item, int32 InCallFunc_Array_Length_ReturnValue, TArray<class UUserWidget*>& InCallFunc_GetAllWidgetsOfClass_FoundWidgets, class UUserWidget* InCallFunc_Array_Get_Item_1, class UClass* InCallFunc_Array_Get_Item_2, TArray<class UUserWidget*>& InCallFunc_GetAllWidgetsOfClass_FoundWidgets_1, int32 InCallFunc_Array_Length_ReturnValue_1, int32 InCallFunc_Array_Length_ReturnValue_2, int32 InCallFunc_Array_Length_ReturnValue_3, bool InCallFunc_Less_IntInt_ReturnValue, bool InCallFunc_IsValid_ReturnValue_2, class UGameInstance* InCallFunc_GetGameInstance_ReturnValue, class UValeriaGameInstance* InK2Node_DynamicCast_AsValeria_Game_Instance, bool InK2Node_DynamicCast_bSuccess_4, enum class EEndPlayReason InK2Node_Event_EndPlayReason, class UGameInstance* InCallFunc_GetGameInstance_ReturnValue_1, class UValeriaGameInstance* InK2Node_DynamicCast_AsValeria_Game_Instance_1, bool InK2Node_DynamicCast_bSuccess_5, class AActor* InK2Node_Event_OverlappedActor, class AActor* InK2Node_Event_OtherActor, int32 InTemp_int_Loop_Counter_Variable, class AValeriaCharacter* InK2Node_DynamicCast_AsValeria_Character_3, bool InK2Node_DynamicCast_bSuccess_6, bool InCallFunc_IsLocallyControlled_ReturnValue, int32 InCallFunc_GetTagValue_ReturnValue, bool InCallFunc_Greater_IntInt_ReturnValue, bool InCallFunc_Less_IntInt_ReturnValue_1, int32 InCallFunc_Add_IntInt_ReturnValue_1, int32 InCallFunc_AkEventGlobal_ReturnValue, class UValeriaWeather* InCallFunc_GetWorldSubsystem_ReturnValue, class AValEnvironmentManager* InCallFunc_GetCurrentEnvManager_ReturnValue, FDelegateProperty_ InK2Node_CreateDelegate_OutputDelegate, bool InCallFunc_IsValid_ReturnValue_3, int32 InTemp_int_Variable_1, FDelegateProperty_ InK2Node_CreateDelegate_OutputDelegate_1, int32 InCallFunc_Add_IntInt_ReturnValue_2, class UUserWidget* InCallFunc_Array_Get_Item_3, bool InCallFunc_Less_IntInt_ReturnValue_2, TSoftObjectPtr<class ULevelSequence> InK2Node_CustomEvent_LevelSequence, class APlayerController* InCallFunc_GetPlayerController_ReturnValue_7, int32 InTemp_int_Loop_Counter_Variable_1, class APawn* InCallFunc_K2_GetPawn_ReturnValue_3, class AValeriaCharacter* InK2Node_DynamicCast_AsValeria_Character_4, bool InK2Node_DynamicCast_bSuccess_7, bool InCallFunc_Less_IntInt_ReturnValue_3, bool InCallFunc_Client_TryUnequip_ReturnValue, int32 InCallFunc_Add_IntInt_ReturnValue_3, class APlayerController* InCallFunc_GetPlayerController_ReturnValue_8, class APlayerController* InCallFunc_GetPlayerController_ReturnValue_9, class AValeriaPlayerController* InK2Node_DynamicCast_AsValeria_Player_Controller_1, bool InK2Node_DynamicCast_bSuccess_8, class AValeriaPlayerController* InK2Node_DynamicCast_AsValeria_Player_Controller_2, bool InK2Node_DynamicCast_bSuccess_9);
	void OnCinematicBegin__DelegateSignature();
	void OnCinematicEnded__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
