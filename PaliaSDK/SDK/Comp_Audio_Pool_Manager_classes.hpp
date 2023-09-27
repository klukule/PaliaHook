#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x209 (0x2A9 - 0xA0)
// BlueprintGeneratedClass Comp_Audio_Pool_Manager.Comp_Audio_Pool_Manager_C
class UComp_Audio_Pool_Manager_C : public UAudioFoliageManagerComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         ShowDebug;                                         // 0xA8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3263[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Tick_Interval;                                     // 0xB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        WindPoolSize;                                      // 0xB8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        InsectPoolSize;                                    // 0xBC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        OneShotObjectPoolSize;                             // 0xC0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        OneShotObjectsPerFoliage;                          // 0xC4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       InitialStartDelayMin;                              // 0xC8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       InitialStartDelayMax;                              // 0xD0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       MinRetriggerTime;                                  // 0xD8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       MaxRetriggerTime;                                  // 0xE0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSet<class ABP_AudioPool_StaticLoop_C*>      StaticLoopAkObjects;                               // 0xE8(0x50)(Edit, BlueprintVisible, DisableEditOnTemplate, Transient, DisableEditOnInstance)
	TSet<class ABP_AudioPool_StaticLoop_C*>      AvailableStaticLoopObj;                            // 0x138(0x50)(Edit, BlueprintVisible, DisableEditOnTemplate, Transient, DisableEditOnInstance)
	TSet<class ABP_AudioPool_RandomLoop_C*>      RandomLoopAkObjects;                               // 0x188(0x50)(Edit, BlueprintVisible, DisableEditOnTemplate, Transient, DisableEditOnInstance)
	TSet<class ABP_AudioPool_OneShot_C*>         OneShotAkObjects;                                  // 0x1D8(0x50)(Edit, BlueprintVisible, DisableEditOnTemplate, Transient, DisableEditOnInstance)
	class APawn*                                 PlayerCharacter;                                   // 0x228(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FVector                               CachedListenerLocation;                            // 0x230(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSet<class ABP_Env_Audio_Pool_Base_C*>       PoolObjectsInRange;                                // 0x248(0x50)(Edit, BlueprintVisible, DisableEditOnTemplate, Transient, DisableEditOnInstance)
	TArray<class ABP_Env_Audio_Pool_Base_C*>     ClosestPoolObjects;                                // 0x298(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, Transient, DisableEditOnInstance)
	bool                                         Initialized;                                       // 0x2A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UComp_Audio_Pool_Manager_C* GetDefaultObj();

	void StaticLoopStopped(class ABP_AudioPool_StaticLoop_C* PoolObject);
	void GetCritterValidFoliage(TArray<class ABP_Env_Audio_Pool_Base_C*>* CritterValidFoliage, const TArray<class ABP_Env_Audio_Pool_Base_C*>& LocalCritterValidFoliage, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class ABP_Env_Audio_Pool_Base_C*>& CallFunc_Set_ToArray_Result, int32 CallFunc_Array_Length_ReturnValue, class ABP_Env_Audio_Pool_Base_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void GetAvailableInsectEmitter(class ABP_AudioPool_RandomLoop_C** Emitter, bool* Found, TMap<struct FVector, class UObject*> InsectLocations, bool EmitterFound, class ABP_AudioPool_RandomLoop_C* EmitterLocal, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class ABP_AudioPool_RandomLoop_C*>& CallFunc_Set_ToArray_Result, TArray<class ABP_AudioPool_RandomLoop_C*>& CallFunc_Set_ToArray_Result_1, TArray<class AActor*>& CallFunc_SortActorsByClosest_ReturnValue, class ABP_AudioPool_RandomLoop_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_LastIndex_ReturnValue, class AActor* CallFunc_Array_Get_Item_1, class ABP_AudioPool_RandomLoop_C* K2Node_DynamicCast_AsBP_Audio_Pool_Random_Loop, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void GetAvailableStaticLoopEmitter(class ABP_AudioPool_StaticLoop_C** Output, bool* Available, bool Break, class ABP_AudioPool_StaticLoop_C* FoliageActor, double LDistance, int32 Temp_int_Array_Index_Variable, bool CallFunc_Greater_DoubleDouble_ReturnValue, TArray<class ABP_AudioPool_StaticLoop_C*>& CallFunc_Set_ToArray_Result, class ABP_AudioPool_StaticLoop_C* CallFunc_Array_Get_Item, int32 CallFunc_Set_Length_ReturnValue, const struct FVector& CallFunc_GetValeriaAudioListenerPosition_OutLocation, const struct FVector& CallFunc_GetValeriaAudioListenerPosition_OutFrontDir, const struct FVector& CallFunc_GetValeriaAudioListenerPosition_OutRightDir, bool CallFunc_Greater_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, TArray<class ABP_AudioPool_StaticLoop_C*>& CallFunc_Set_ToArray_Result_1, int32 CallFunc_Array_Length_ReturnValue, class ABP_AudioPool_StaticLoop_C* CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue, float CallFunc_GetMaxAttenuationRadius_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, double CallFunc_Vector_Distance_ReturnValue, double CallFunc_SafeDivide_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, double CallFunc_SafeDivide_B_ImplicitCast);
	void GetClosestInsectObjects(TArray<class ABP_Env_Audio_Pool_Base_C*>* ClosestInsectObjects, const TArray<class ABP_Env_Audio_Pool_Base_C*>& LClosestInsectObjects, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class ABP_Env_Audio_Pool_Base_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue);
	void GetClosestStaticLoopObjects(TArray<class ABP_Env_Audio_Pool_Base_C*>* ClosestStaticLoopObjects, const TArray<class ABP_Env_Audio_Pool_Base_C*>& LClosestWindObjects, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Variable, class ABP_Env_Audio_Pool_Base_C* CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_SelectInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue);
	void GetClosestObjects(TArray<class ABP_Env_Audio_Pool_Base_C*>* ClosestFoliage, const TArray<class ABP_Env_Audio_Pool_Base_C*>& SortedObjectsNear, TSet<class ABP_Env_Audio_Pool_Base_C*> LocalAllObjectsNear, const TArray<struct FVector>& Closest, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class ABP_Env_Audio_Pool_Base_C*>& CallFunc_Set_ToArray_Result, const struct FVector& CallFunc_GetValeriaAudioListenerPosition_OutLocation, const struct FVector& CallFunc_GetValeriaAudioListenerPosition_OutFrontDir, const struct FVector& CallFunc_GetValeriaAudioListenerPosition_OutRightDir, TArray<class AActor*>& CallFunc_SortActorsByClosest_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class AActor* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class ABP_Env_Audio_Pool_Base_C* K2Node_DynamicCast_AsBP_Env_Audio_Pool_Base, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Add_ReturnValue);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void OnPossessionChanged();
	void DrawDebugText();
	void AudioDebugFoliage(bool On);
	void ExecuteUbergraph_Comp_Audio_Pool_Manager(int32 EntryPoint, TArray<class AActor*>& Temp_object_Variable, class ABP_AudioPool_StaticLoop_C* CallFunc_GetAvailableStaticLoopEmitter_Output, bool CallFunc_GetAvailableStaticLoopEmitter_Available, bool CallFunc_Set_Remove_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class ABP_Env_Audio_Pool_Base_C*>& CallFunc_GetClosestObjects_ClosestFoliage, int32 Temp_int_Loop_Counter_Variable, TArray<class ABP_Env_Audio_Pool_Base_C*>& CallFunc_GetClosestStaticLoopObjects_ClosestStaticLoopObjects, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FVector& CallFunc_GetValeriaAudioListenerPosition_OutLocation, const struct FVector& CallFunc_GetValeriaAudioListenerPosition_OutFrontDir, const struct FVector& CallFunc_GetValeriaAudioListenerPosition_OutRightDir, TArray<enum class EObjectTypeQuery>& K2Node_MakeArray_Array, int32 Temp_int_Array_Index_Variable, TArray<class AActor*>& CallFunc_SphereOverlapActors_OutActors, bool CallFunc_SphereOverlapActors_ReturnValue, class AActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, class ABP_Env_Audio_Pool_Base_C* K2Node_DynamicCast_AsBP_Env_Audio_Pool_Base, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_4, int32 Temp_int_Array_Index_Variable_2, float K2Node_Event_DeltaSeconds, class AActor* CallFunc_GetOwner_ReturnValue, class APawn* K2Node_DynamicCast_AsPawn, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsLocallyControlled_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_AudioPool_OneShot_C* CallFunc_FinishSpawningActor_ReturnValue, bool CallFunc_IsServer_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 Temp_int_Variable_2, int32 CallFunc_Multiply_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_5, bool CallFunc_LessEqual_IntInt_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_3, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_6, bool CallFunc_LessEqual_IntInt_ReturnValue_2, const struct FTransform& CallFunc_MakeTransform_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1, class ABP_AudioPool_RandomLoop_C* CallFunc_FinishSpawningActor_ReturnValue_1, int32 Temp_int_Array_Index_Variable_3, class ABP_Env_Audio_Pool_Base_C* CallFunc_Array_Get_Item_1, bool CallFunc_IsValid_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue_2, const class FString& CallFunc_Conv_IntToString_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2, int32 CallFunc_Set_Length_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, class ABP_AudioPool_StaticLoop_C* CallFunc_FinishSpawningActor_ReturnValue_2, TArray<class ABP_Env_Audio_Pool_Base_C*>& CallFunc_Set_ToArray_Result, class ABP_Env_Audio_Pool_Base_C* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_Set_Length_ReturnValue_1, TArray<class ABP_AudioPool_RandomLoop_C*>& CallFunc_Set_ToArray_Result_1, const class FString& CallFunc_Conv_IntToString_ReturnValue_2, class ABP_AudioPool_RandomLoop_C* CallFunc_Array_Get_Item_3, const class FString& CallFunc_Concat_StrStr_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, int32 CallFunc_Array_Length_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, bool CallFunc_Less_IntInt_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, bool K2Node_CustomEvent_On, double CallFunc_SelectFloat_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, float CallFunc_SetComponentTickInterval_TickInterval_ImplicitCast, float CallFunc_DrawDebugSphere_Duration_ImplicitCast, float CallFunc_K2_SetTimer_Time_ImplicitCast, float CallFunc_DrawDebugSphere_Duration_ImplicitCast_1);
};

}


