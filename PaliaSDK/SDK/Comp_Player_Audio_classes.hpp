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

// 0xF8 (0x198 - 0xA0)
// BlueprintGeneratedClass Comp_Player_Audio.Comp_Player_Audio_C
class UComp_Player_Audio_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class AValeriaCharacter*                     Character;                                         // 0xA8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         IsLocal;                                           // 0xB0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_31B9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAkAudioEvent*                         DefaultItemAddedSound;                             // 0xB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         IsFalling;                                         // 0xC0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_31BB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAkRtpc*                               FallingRTPC;                                       // 0xC8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	class UAkAudioEvent*                         FallingSound;                                      // 0xD0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                         CloseToGroundSound;                                // 0xD8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       FalltimeThreshold;                                 // 0xE0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       FallRampDistance;                                  // 0xE8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       LastRotationYaw;                                   // 0xF0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       NewRotationYaw;                                    // 0xF8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CloseToGroundSoundID;                              // 0x100(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        GliderLoopID;                                      // 0x104(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                         GlidingLoopSound;                                  // 0x108(0x8)(Edit, BlueprintVisible, ZeroConstructor, Interp, NoDestructor, HasGetValueTypeHash)
	double                                       RTPC_UpdateTime;                                   // 0x110(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                         GliderEndSound;                                    // 0x118(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                         DefaultItemPlacedSound;                            // 0x120(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<struct FValeriaItem>                  Item;                                              // 0x128(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        GroupItemPickupThreshold;                          // 0x138(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_31BD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAkAudioEvent*                         GroupItemAddedSound;                               // 0x140(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       ListenerDistance;                                  // 0x148(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       ListenerPadding;                                   // 0x150(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsSprinting;                                       // 0x158(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Moved;                                             // 0x159(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_31BE[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAkAudioEvent*                         BeginSprintSound;                                  // 0x160(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                         BeginRunSound;                                     // 0x168(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                         ForceUnequipSound;                                 // 0x170(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UEquipmentComponent*                   EquipmentComponent;                                // 0x178(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                       FallVelocity;                                      // 0x180(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          GlidingTimerHandle;                                // 0x188(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          FallingTimerHandle;                                // 0x190(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Comp_Player_Audio_C");
		return Clss;
	}

	void PlayPickWiffFX(TSoftObjectPtr<class UVAL_ItemTypeDefinitionAsset> InItemType, class AActor* InInstigator, int32 InTemp_int_Variable, int32 InTemp_int_Variable_1, int32 InTemp_int_Variable_2, int32 InTemp_int_Variable_3, int32 InTemp_int_Variable_4, int32 InTemp_int_Variable_5, int32 InTemp_int_Variable_6, int32 InTemp_int_Variable_7, int32 InTemp_int_Variable_8, int32 InTemp_int_Variable_9, int32 InTemp_int_Variable_10, int32 InTemp_int_Variable_11, int32 InTemp_int_Variable_12, int32 InTemp_int_Variable_13, int32 InTemp_int_Variable_14, int32 InTemp_int_Variable_15, int32 InTemp_int_Variable_16, TArray<class AActor*>& InTemp_object_Variable, bool InTemp_bool_Variable, int32 InTemp_int_Variable_17, class UObject* InCallFunc_LoadAsset_Blocking_ReturnValue, class UVAL_ItemTypeDefinitionAsset* InK2Node_DynamicCast_AsItem_Type_Definition, bool InK2Node_DynamicCast_bSuccess, int32 InTemp_int_Variable_18, bool InCallFunc_IsValid_ReturnValue, bool InCallFunc_HasTag_ReturnValue, int32 InTemp_int_Variable_19, enum class EPhysicalSurface InTemp_byte_Variable, TArray<enum class EObjectTypeQuery>& InK2Node_MakeArray_Array, class USkeletalMeshComponent* InCallFunc_GetComponentByClass_ReturnValue, class UPhysicalMaterial* InTemp_object_Variable_1, class UNiagaraComponent* InCallFunc_SpawnSystemAttached_ReturnValue, bool InCallFunc_IsValid_ReturnValue_1, const struct FVector& InCallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& InCallFunc_Add_VectorVector_ReturnValue, const struct FVector& InCallFunc_Add_VectorVector_ReturnValue_1, const struct FHitResult& InCallFunc_LineTraceSingleForObjects_OutHit, bool InCallFunc_LineTraceSingleForObjects_ReturnValue, bool InCallFunc_BreakHitResult_bBlockingHit, bool InCallFunc_BreakHitResult_bInitialOverlap, float InCallFunc_BreakHitResult_Time, float InCallFunc_BreakHitResult_Distance, const struct FVector& InCallFunc_BreakHitResult_Location, const struct FVector& InCallFunc_BreakHitResult_ImpactPoint, const struct FVector& InCallFunc_BreakHitResult_Normal, const struct FVector& InCallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* InCallFunc_BreakHitResult_PhysMat, class AActor* InCallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* InCallFunc_BreakHitResult_HitComponent, class FName InCallFunc_BreakHitResult_HitBoneName, class FName InCallFunc_BreakHitResult_BoneName, int32 InCallFunc_BreakHitResult_HitItem, int32 InCallFunc_BreakHitResult_ElementIndex, int32 InCallFunc_BreakHitResult_FaceIndex, const struct FVector& InCallFunc_BreakHitResult_TraceStart, const struct FVector& InCallFunc_BreakHitResult_TraceEnd, class UNiagaraComponent* InCallFunc_SpawnSystemAtLocation_ReturnValue, bool InCallFunc_IsValid_ReturnValue_2, bool InCallFunc_IsValid_ReturnValue_3, class UPhysicalMaterial* InK2Node_Select_Default, class UAkAudioEvent* InCallFunc_Surface_DT_Sound, class UMaterialInstance* InCallFunc_Surface_DT_Decal_Left_Foot, class UMaterialInstance* InCallFunc_Surface_DT_Decal_Right_Foot, class UNiagaraSystem* InCallFunc_Surface_DT_NiagaraSystem, class UAkComponent* InCallFunc_AkEventLocation_AkComponent, int32 InCallFunc_AkEventLocation_Playing_ID, int32 InK2Node_Select_Default_1);
	void PlayEquipSound(TSubclassOf<class AEquipViewActor> InClass, bool InUnequip, class UClass* InK2Node_ClassDynamicCast_AsBP_Equip_View_Actor, bool InK2Node_ClassDynamicCast_bSuccess, bool InCallFunc_IsValidClass_ReturnValue, bool InCallFunc_IsValid_ReturnValue, class UAkAudioEvent* InCallFunc_Get_Audio_Event_AudioEvent, bool InCallFunc_Get_Audio_Event_Found, class UAkAudioEvent* InCallFunc_Get_Audio_Event_AudioEvent_1, bool InCallFunc_Get_Audio_Event_Found_1, bool InTemp_bool_Variable, class UAkAudioEvent* InK2Node_Select_Default, int32 InCallFunc_AkEventActor_ReturnValue);
	void Find_Distance_to_Ground(class AValeriaMoveablePawn* InCharacter, bool* InHit, double* InDistance, TArray<class AActor*>& InTemp_object_Variable, const struct FVector& InCallFunc_K2_GetComponentLocation_ReturnValue, double InCallFunc_BreakVector_X, double InCallFunc_BreakVector_Y, double InCallFunc_BreakVector_Z, double InCallFunc_Subtract_DoubleDouble_ReturnValue, const struct FVector& InCallFunc_MakeVector_ReturnValue, const struct FHitResult& InCallFunc_LineTraceSingle_OutHit, bool InCallFunc_LineTraceSingle_ReturnValue, bool InCallFunc_BreakHitResult_bBlockingHit, bool InCallFunc_BreakHitResult_bInitialOverlap, float InCallFunc_BreakHitResult_Time, float InCallFunc_BreakHitResult_Distance, const struct FVector& InCallFunc_BreakHitResult_Location, const struct FVector& InCallFunc_BreakHitResult_ImpactPoint, const struct FVector& InCallFunc_BreakHitResult_Normal, const struct FVector& InCallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* InCallFunc_BreakHitResult_PhysMat, class AActor* InCallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* InCallFunc_BreakHitResult_HitComponent, class FName InCallFunc_BreakHitResult_HitBoneName, class FName InCallFunc_BreakHitResult_BoneName, int32 InCallFunc_BreakHitResult_HitItem, int32 InCallFunc_BreakHitResult_ElementIndex, int32 InCallFunc_BreakHitResult_FaceIndex, const struct FVector& InCallFunc_BreakHitResult_TraceStart, const struct FVector& InCallFunc_BreakHitResult_TraceEnd, double InK2Node_FunctionResult_Distance_ImplicitCast);
	void ItemAddedSFX(const struct FValeriaItem& InItem);
	void BindItemAudio();
	void UnbindItemAudio();
	void EquippedItemChanged(class UEquipmentComponent* InEquipmentComponent, const struct FEquipmentItem& InItem);
	void EquippedItemVisibilityChanged(class UEquipmentComponent* InEquipmentComponent, bool InbNewVisibility);
	void BindItemAudioLocal();
	void Falling();
	void GlidingStart();
	void GlidingEnd();
	void Gliding();
	void MovementModeChanged(class AValeriaMoveablePawn* InPawn, enum class EMovementMode InPrevMovementMode, uint8 InPreviousCustomMode);
	void BindMovementAudio();
	void BeginFalling();
	void EndFalling();
	void GliderChanged(bool InIsGliding);
	void ClimbChanged(bool InIsClimbing);
	void ClimbDash(bool InIsClimbing, enum class EValeriaClimbDashDirection InDirection);
	void ClimbOutro(const struct FVector& InLocation);
	void BeginRun();
	void BeginSprint();
	void MovementUpdate(float InDeltaSeconds, const struct FVector& InOldLocation, const struct FVector& InOldVelocity);
	void SprintChange(class AValeriaCharacter* InCharacter, bool InIsSprinting);
	void UnbindMovementAudio();
	void ReceiveBeginPlay();
	void ReplicatedAudioEvent(class AActor* InActor, bool InWasDamaged, TSoftObjectPtr<class UVAL_ItemTypeDefinitionAsset> InItemType, class AActor* InInstigator);
	void SetDefaultMixState();
	void ReceiveEndPlay(enum class EEndPlayReason InEndPlayReason);
	void OnPossessionChanged();
	void ExecuteUbergraph_Comp_Player_Audio(int32 InEntryPoint, bool InCallFunc_IsValid_ReturnValue, const struct FValeriaItem& InK2Node_CustomEvent_Item_1, int32 InCallFunc_AkEventActor_ReturnValue, int32 InCallFunc_Array_AddUnique_ReturnValue, int32 InCallFunc_Array_Length_ReturnValue, bool InCallFunc_GreaterEqual_IntInt_ReturnValue, int32 InCallFunc_Array_Length_ReturnValue_1, bool InCallFunc_Not_PreBool_ReturnValue, int32 InCallFunc_AkEventActor_ReturnValue_1, bool InTemp_bool_Has_Been_Initd_Variable, bool InCallFunc_IsValid_ReturnValue_1, bool InCallFunc_IsValid_ReturnValue_2, FDelegateProperty_ InK2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ InK2Node_CreateDelegate_OutputDelegate_1, bool InTemp_bool_IsClosed_Variable, bool InCallFunc_IsValid_ReturnValue_3, class UEquipmentComponent* InCallFunc_GetEquipment_ReturnValue, bool InCallFunc_IsValid_ReturnValue_4, bool InTemp_bool_Has_Been_Initd_Variable_1, class UEquipmentComponent* InK2Node_CustomEvent_EquipmentComponent_1, const struct FEquipmentItem& InK2Node_CustomEvent_Item, FDelegateProperty_ InK2Node_CreateDelegate_OutputDelegate_2, class UEquipmentComponent* InK2Node_CustomEvent_EquipmentComponent, bool InK2Node_CustomEvent_bNewVisibility, FDelegateProperty_ InK2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ InK2Node_CreateDelegate_OutputDelegate_4, class UValeriaCharacterMoveComponent* InCallFunc_GetValeriaCharacterMovementComponent_ReturnValue, FDelegateProperty_ InK2Node_CreateDelegate_OutputDelegate_5, bool InCallFunc_EqualEqual_ByteByte_ReturnValue, const struct FEquipmentItem& InCallFunc_GetEquippedItem_ReturnValue, class UValeriaCharacterMoveComponent* InCallFunc_GetValeriaCharacterMovementComponent_ReturnValue_1, class AEquipViewActor* InCallFunc_Array_Get_Item, bool InCallFunc_EqualEqual_ByteByte_ReturnValue_1, class UClass* InCallFunc_GetObjectClass_ReturnValue, bool InTemp_bool_IsClosed_Variable_1, double InCallFunc_Subtract_DoubleDouble_ReturnValue, double InCallFunc_Subtract_DoubleDouble_ReturnValue_1, int32 InCallFunc_AkEventActor_ReturnValue_2, const struct FRotator& InCallFunc_K2_GetActorRotation_ReturnValue, float InCallFunc_BreakRotator_Roll, float InCallFunc_BreakRotator_Pitch, float InCallFunc_BreakRotator_Yaw, int32 InCallFunc_AkEventActor_ReturnValue_3, class AValeriaMoveablePawn* InK2Node_CustomEvent_Pawn, enum class EMovementMode InK2Node_CustomEvent_PrevMovementMode, uint8 InK2Node_CustomEvent_PreviousCustomMode, bool InK2Node_SwitchEnum_CmpSuccess, const struct FVector& InCallFunc_GetVelocity_ReturnValue, bool InCallFunc_Find_Distance_to_Ground_Hit, double InCallFunc_Find_Distance_to_Ground_Distance, double InCallFunc_VSize_ReturnValue, bool InCallFunc_InRange_FloatFloat_ReturnValue, const struct FVector& InCallFunc_GetVelocity_ReturnValue_1, double InCallFunc_BreakVector_X, double InCallFunc_BreakVector_Y, double InCallFunc_BreakVector_Z, const struct FVector& InCallFunc_MakeVector_ReturnValue, double InCallFunc_VSize_ReturnValue_1, bool InTemp_bool_Whether_the_gate_is_currently_open_or_close_Variable, int32 InCallFunc_AkEventActor_ReturnValue_4, const struct FTimerHandle& InCallFunc_K2_SetTimer_ReturnValue, const struct FTimerHandle& InCallFunc_K2_SetTimer_ReturnValue_1, bool InK2Node_CustomEvent_isGliding, int32 InCallFunc_AkEventActor_ReturnValue_5, int32 InCallFunc_AkEventActor_ReturnValue_6, int32 InTemp_int_Loop_Counter_Variable, bool InCallFunc_Less_IntInt_ReturnValue, FDelegateProperty_ InK2Node_CreateDelegate_OutputDelegate_6, int32 InCallFunc_Add_IntInt_ReturnValue, bool InK2Node_CustomEvent_isClimbing_1, bool InK2Node_CustomEvent_isClimbing, enum class EValeriaClimbDashDirection InK2Node_CustomEvent_direction, class UValeriaCharacterMoveComponent* InK2Node_DynamicCast_AsValeria_Character_Move_Component, bool InK2Node_DynamicCast_bSuccess, bool InCallFunc_NotEqual_ByteByte_ReturnValue, const struct FVector& InK2Node_CustomEvent_Location, bool InCallFunc_BooleanAND_ReturnValue, bool InTemp_bool_Has_Been_Initd_Variable_2, int32 InCallFunc_AkEventActor_ReturnValue_7, float InK2Node_CustomEvent_DeltaSeconds, const struct FVector& InK2Node_CustomEvent_OldLocation, const struct FVector& InK2Node_CustomEvent_OldVelocity, class AValeriaCharacter* InK2Node_CustomEvent_Character, bool InK2Node_CustomEvent_isSprinting, int32 InCallFunc_AkEventActor_ReturnValue_8, int32 InCallFunc_AkEventActor_ReturnValue_9, const struct FVector& InCallFunc_GetVelocity_ReturnValue_2, bool InCallFunc_IsValid_ReturnValue_5, double InCallFunc_VSize_ReturnValue_2, bool InCallFunc_Greater_DoubleDouble_ReturnValue, bool InCallFunc_IsValid_ReturnValue_6, bool InTemp_bool_IsClosed_Variable_2, class UValeriaCharacterMoveComponent* InCallFunc_GetValeriaCharacterMovementComponent_ReturnValue_2, bool InCallFunc_Find_Distance_to_Ground_Hit_1, double InCallFunc_Find_Distance_to_Ground_Distance_1, FDelegateProperty_ InK2Node_CreateDelegate_OutputDelegate_7, FDelegateProperty_ InK2Node_CreateDelegate_OutputDelegate_8, FDelegateProperty_ InK2Node_CreateDelegate_OutputDelegate_9, FDelegateProperty_ InK2Node_CreateDelegate_OutputDelegate_10, FDelegateProperty_ InK2Node_CreateDelegate_OutputDelegate_11, FDelegateProperty_ InK2Node_CreateDelegate_OutputDelegate_12, bool InCallFunc_IsValid_ReturnValue_7, class UEquipmentComponent* InCallFunc_GetEquipment_ReturnValue_1, bool InCallFunc_IsValid_ReturnValue_8, FDelegateProperty_ InK2Node_CreateDelegate_OutputDelegate_13, bool InCallFunc_IsLocallyControlled_ReturnValue, bool InCallFunc_K2_IsValidTimerHandle_ReturnValue, bool InCallFunc_K2_IsValidTimerHandle_ReturnValue_1, bool InCallFunc_IsValid_ReturnValue_9, bool InCallFunc_IsValid_ReturnValue_10, bool InCallFunc_IsValid_ReturnValue_11, class UValeriaCharacterMoveComponent* InCallFunc_GetValeriaCharacterMovementComponent_ReturnValue_3, class UValeriaCharacterMoveComponent* InK2Node_DynamicCast_AsValeria_Character_Move_Component_1, bool InK2Node_DynamicCast_bSuccess_1, class UValeriaCharacterMoveComponent* InCallFunc_GetValeriaCharacterMovementComponent_ReturnValue_4, bool InCallFunc_IsSprinting_ReturnValue, class AActor* InCallFunc_GetOwner_ReturnValue, bool InCallFunc_IsServer_ReturnValue, class AValeriaCharacter* InK2Node_DynamicCast_AsValeria_Character, bool InK2Node_DynamicCast_bSuccess_2, bool InCallFunc_Not_PreBool_ReturnValue_1, int32 InTemp_int_Array_Index_Variable, class AActor* InK2Node_CustomEvent_actor, bool InK2Node_CustomEvent_WasDamaged, TSoftObjectPtr<class UVAL_ItemTypeDefinitionAsset> InK2Node_CustomEvent_ItemType, class AActor* InK2Node_CustomEvent_Instigator, const struct FValeriaItem& InCallFunc_Array_Get_Item_1, class ABP_ValeriaGatherableLoot_C* InK2Node_DynamicCast_AsBP_Valeria_Gatherable_Loot, bool InK2Node_DynamicCast_bSuccess_3, class UObject* InCallFunc_LoadAsset_Blocking_ReturnValue, class UVAL_ItemTypeDefinitionAsset* InK2Node_DynamicCast_AsItem_Type_Definition, bool InK2Node_DynamicCast_bSuccess_4, bool InCallFunc_IsValid_ReturnValue_12, class UObject* InCallFunc_LoadAsset_Blocking_ReturnValue_1, class UVAL_ItemTypeDefinitionAsset* InK2Node_DynamicCast_AsItem_Type_Definition_1, bool InK2Node_DynamicCast_bSuccess_5, bool InCallFunc_IsValid_ReturnValue_13, const struct FItemAudioConfig& InCallFunc_GetDataTableRowFromName_OutRow, bool InCallFunc_GetDataTableRowFromName_ReturnValue, bool InCallFunc_IsValid_ReturnValue_14, bool InCallFunc_IsValid_ReturnValue_15, int32 InCallFunc_AkEventActor_ReturnValue_10, bool InCallFunc_IsValid_ReturnValue_16, FDelegateProperty_ InK2Node_CreateDelegate_OutputDelegate_14, FDelegateProperty_ InK2Node_CreateDelegate_OutputDelegate_15, FDelegateProperty_ InK2Node_CreateDelegate_OutputDelegate_16, FDelegateProperty_ InK2Node_CreateDelegate_OutputDelegate_17, FDelegateProperty_ InK2Node_CreateDelegate_OutputDelegate_18, enum class EEndPlayReason InK2Node_Event_EndPlayReason, bool InCallFunc_IsServer_ReturnValue_1, bool InCallFunc_Not_PreBool_ReturnValue_2, FDelegateProperty_ InK2Node_CreateDelegate_OutputDelegate_19, bool InCallFunc_IsLocallyControlled_ReturnValue_1, float InCallFunc_RetriggerableDelay_Duration_ImplicitCast, double InK2Node_VariableSet_NewRotationYaw_ImplicitCast, float InCallFunc_K2_SetTimer_Time_ImplicitCast, float InCallFunc_K2_SetTimer_Time_ImplicitCast_1);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
