#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x120 (0x1C0 - 0xA0)
// BlueprintGeneratedClass Comp_PlaceableAudio.Comp_PlaceableAudio_C
class UComp_PlaceableAudio_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class AActor*                                Owner;                                             // 0xA8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ULevelerComponent*                     LevelerComp;                                       // 0xB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UAkRoomComponent*                      AkRoom;                                            // 0xB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UAkLateReverbComponent*                AkReverb;                                          // 0xC0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         RoomAlwaysEnabled;                                 // 0xC8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3A39[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UAkPortalComponent*>            Portals;                                           // 0xD0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	FMulticastInlineDelegateProperty_            AudioHidden;                                       // 0xE0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            AudioShown;                                        // 0xF0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<int32>                                TrackedPersistantSounds;                           // 0x100(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<class UAkComponent*, struct FStruct_PersistentSound> PersistantSoundMap;                                // 0x110(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	FMulticastInlineDelegateProperty_            ResumedLoop;                                       // 0x160(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TSet<class UAkCulledComponent*>              TrackedAkCulledComponents;                         // 0x170(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

	static class UClass* StaticClass();
	static class UComp_PlaceableAudio_C* GetDefaultObj();

	void StopPersistSoundLoopCulled(class UAkCulledComponent* Component, bool CallFunc_Set_Remove_ReturnValue);
	void ResumePersistantLoopsCulled(class UAkComponent* AkComponent, const TArray<struct FStruct_PersistentSound>& LocalValues, const TArray<class UAkComponent*>& LocalKeys, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UAkCulledComponent*>& CallFunc_Set_ToArray_Result, int32 CallFunc_Array_Length_ReturnValue, class UAkCulledComponent* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
	void StopPersistantLoopsCulled(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UAkCulledComponent*>& CallFunc_Set_ToArray_Result, int32 CallFunc_Array_Length_ReturnValue, class UAkCulledComponent* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
	void PlayPersistSoundCulled(class UAkCulledComponent* CulledComponent, bool CallFunc_Am_I_Visible_On_Plot_ReturnValue);
	void PlayPersistSoundLoopCulled(class UAkCulledComponent* AkCulledComponent, const TArray<class UAkAudioEvent*>& AudioEvents, bool CallFunc_IsValid_ReturnValue);
	void ResumePersistantLoops(class UAkComponent* AkComponent, const TArray<struct FStruct_PersistentSound>& LocalValues, const TArray<class UAkComponent*>& LocalKeys, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FStruct_PersistentSound& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UAkComponent* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_1, class UAkAudioEvent* CallFunc_Array_Get_Item_2, int32 CallFunc_PlayPersistSound_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, TArray<class UAkComponent*>& CallFunc_Map_Keys_Keys, TArray<struct FStruct_PersistentSound>& CallFunc_Map_Values_Values);
	void StopPersistantLoops(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue);
	bool Am_I_Visible_On_Plot(class APawn* CallFunc_GetPlayerPawn_ReturnValue, class AValeriaCharacter* K2Node_DynamicCast_AsValeria_Character, bool K2Node_DynamicCast_bSuccess, enum class EHousingPermissionLevel CallFunc_GetOccupiedHousingOwnershipActor_permissionLevel, class AHousingOwnershipActor* CallFunc_GetOccupiedHousingOwnershipActor_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void StopPersistSoundLoop(class UAkComponent* Component, int32& PlayingID, bool CallFunc_Map_Remove_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue);
	int32 PlayPersistSoundLoop(class UAkAudioEvent* AkEvent, class UAkComponent* AkComponent, const TArray<class UAkAudioEvent*>& AudioEvents, int32 CallFunc_PlayPersistSound_ReturnValue, const struct FStruct_PersistentSound& K2Node_MakeStruct_Struct_PersistentSound, TArray<class UAkAudioEvent*>& K2Node_MakeArray_Array, const struct FStruct_PersistentSound& K2Node_MakeStruct_Struct_PersistentSound_1, const struct FStruct_PersistentSound& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue_1);
	int32 PlayPersistSound(class UAkAudioEvent* AkEvent, class UAkComponent* Component, bool CallFunc_Am_I_Visible_On_Plot_ReturnValue, int32 CallFunc_AkEventComponent_ReturnValue);
	void SetSpatialComponents(class AActor* Actor, class ULevelerComponent* CallFunc_GetComponentByClass_ReturnValue, TArray<class UAkPortalComponent*>& CallFunc_K2_GetComponentsByClass_ReturnValue, class UAkLateReverbComponent* CallFunc_GetComponentByClass_ReturnValue_1, class UAkRoomComponent* CallFunc_GetComponentByClass_ReturnValue_2);
	void ReceiveBeginPlay();
	void LevelChanged(class ULevelerComponent* Leveler);
	void Show();
	void Hide();
	void EnableSpatialAudio(bool Enable);
	void HandleOnActiveHousingSlotChanged(class AHousingOwnershipActor* AHousingOwnershipActor, int32 NewId);
	void ExecuteUbergraph_Comp_PlaceableAudio(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsValid_ReturnValue, class ULevelerComponent* K2Node_CustomEvent_Leveler, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_IsAtMaxLevel_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class APawn* CallFunc_GetPlayerPawn_ReturnValue, class AValeriaCharacter* K2Node_DynamicCast_AsValeria_Character, bool K2Node_DynamicCast_bSuccess, enum class EHousingPermissionLevel CallFunc_GetOccupiedHousingOwnershipActor_permissionLevel, class AHousingOwnershipActor* CallFunc_GetOccupiedHousingOwnershipActor_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Am_I_Visible_On_Plot_ReturnValue, bool CallFunc_IsAtMaxLevel_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool K2Node_CustomEvent_Enable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue_3, class UAkPortalComponent* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue_4, int32 CallFunc_Array_Length_ReturnValue, FDelegateProperty_ Temp_delegate_Variable, bool CallFunc_Less_IntInt_ReturnValue, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, bool CallFunc_IsValid_ReturnValue_5, int32 CallFunc_PostAssociatedAkEvent_ReturnValue, class AHousingOwnershipActor* K2Node_CustomEvent_AHousingOwnershipActor, int32 K2Node_CustomEvent_NewId, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsValid_ReturnValue_6, bool CallFunc_Am_I_Visible_On_Plot_ReturnValue_1);
	void ResumedLoop__DelegateSignature(int32 LoopId);
	void AudioShown__DelegateSignature();
	void AudioHidden__DelegateSignature();
};

}


