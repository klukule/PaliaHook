#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x58 - 0x38)
// BlueprintGeneratedClass Ak_OneShotByMapping.Ak_OneShotByMapping_C
class UAk_OneShotByMapping_C : public UAnimNotify
{
public:
	class FName                                  DEPRECATED_MappingName;                            // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_AudioMappingName                MappingName;                                       // 0x40(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Follow;                                            // 0x41(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4542[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  SpecificMappingQualifier;                          // 0x44(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4543[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UDataTable*                            FallbackTable;                                     // 0x50(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAk_OneShotByMapping_C* GetDefaultObj();

	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, struct FAnimNotifyEventReference& EventReference, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_PlayAudio_Success);
	class FString GetNotifyName(const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue);
	void PlayAudioMappingHelper(class UAbilityAnimationComponent* AbilityAnimComp, class USceneComponent* AttachToComponent, class FName MappingQualifier, bool* Success, enum class EAttachLocation AttachRule, const struct FVector& AttachOffset, class FName SocketName, class UAkAudioEvent* AkEvent, const struct FAudioMappingConfig& CallFunc_FindAudioMapping_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_AkGetComponent_ComponentCreated, class UAkComponent* CallFunc_AkGetComponent_AkComponent, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, int32 CallFunc_AkEventComponent_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, class UAkComponent* CallFunc_AkEventLocationWithActor_AkComponent, int32 CallFunc_AkEventLocationWithActor_Playing_ID);
	void PlayAudio(class USkeletalMeshComponent* MeshComp, bool* Success, enum class EAttachLocation AttachRule, const struct FVector& AttachOffset, class FName SocketName, class UAkAudioEvent* AkEvent, class UAbilityAnimationComponent* AbilityAnimComp, bool SuccessfulPlay, int32 Temp_int_Array_Index_Variable, class AActor* CallFunc_GetOwner_ReturnValue, class AValeriaCharacter* K2Node_DynamicCast_AsValeria_Character, bool K2Node_DynamicCast_bSuccess, class UAbilityAnimationComponent* CallFunc_GetAbilityAnimation_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class AActor* CallFunc_GetOwner_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_AkGetComponent_ComponentCreated, class UAkComponent* CallFunc_AkGetComponent_AkComponent, int32 CallFunc_AkEventComponent_ReturnValue, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, class UAkComponent* CallFunc_AkEventLocationWithActor_AkComponent, int32 CallFunc_AkEventLocationWithActor_Playing_ID, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, const struct FAudioMappingConfig& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, TArray<class FName>& CallFunc_Map_Keys_Keys, class FName CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_PlayAudioMappingHelper_Success, bool CallFunc_PlayAudioMappingHelper_Success_1, bool CallFunc_NotEqual_NameName_ReturnValue);
	struct FAudioMappingConfig FindAudioMapping(class UAbilityAnimationComponent* AbilityAnimComp, class FName MappingQualifier, class UDataTable* MappingTable, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class UDataTable* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, const struct FAudioMappingConfig& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_IsValid_ReturnValue);
};

}


