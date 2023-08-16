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

// 0x20 (0x58 - 0x38)
// BlueprintGeneratedClass Ak_OneShotByMapping.Ak_OneShotByMapping_C
class UAk_OneShotByMapping_C : public UAnimNotify
{
public:
	class FName                                  DEPRECATED_MappingName;                            // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_AudioMappingName                MappingName;                                       // 0x40(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Follow;                                            // 0x41(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1643[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  SpecificMappingQualifier;                          // 0x44(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1645[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UDataTable*                            FallbackTable;                                     // 0x50(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Ak_OneShotByMapping_C");
		return Clss;
	}

	bool Received_Notify(class USkeletalMeshComponent* InMeshComp, class UAnimSequenceBase* InAnimation, struct FAnimNotifyEventReference& InEventReference, bool InCallFunc_IsDedicatedServer_ReturnValue, bool InCallFunc_PlayAudio_Success);
	class FString GetNotifyName(const class FString& InCallFunc_GetEnumeratorUserFriendlyName_ReturnValue, const class FString& InCallFunc_Concat_StrStr_ReturnValue);
	void PlayAudioMappingHelper(class UAbilityAnimationComponent* InAbilityAnimComp, class USceneComponent* InAttachToComponent, class FName InMappingQualifier, bool* InSuccess, enum class EAttachLocation InAttachRule, const struct FVector& InAttachOffset, class FName InSocketName, class UAkAudioEvent* InAkEvent, const struct FAudioMappingConfig& InCallFunc_FindAudioMapping_ReturnValue, bool InCallFunc_IsValid_ReturnValue, class AActor* InCallFunc_GetOwner_ReturnValue, bool InCallFunc_AkGetComponent_ComponentCreated, class UAkComponent* InCallFunc_AkGetComponent_AkComponent, const struct FTransform& InCallFunc_GetSocketTransform_ReturnValue, int32 InCallFunc_AkEventComponent_ReturnValue, const struct FVector& InCallFunc_BreakTransform_Location, const struct FRotator& InCallFunc_BreakTransform_Rotation, const struct FVector& InCallFunc_BreakTransform_Scale, const struct FVector& InCallFunc_Add_VectorVector_ReturnValue, class UAkComponent* InCallFunc_AkEventLocationWithActor_AkComponent, int32 InCallFunc_AkEventLocationWithActor_Playing_ID);
	void PlayAudio(class USkeletalMeshComponent* InMeshComp, bool* InSuccess, enum class EAttachLocation InAttachRule, const struct FVector& InAttachOffset, class FName InSocketName, class UAkAudioEvent* InAkEvent, class UAbilityAnimationComponent* InAbilityAnimComp, bool InSuccessfulPlay, int32 InTemp_int_Array_Index_Variable, class AActor* InCallFunc_GetOwner_ReturnValue, class AValeriaCharacter* InK2Node_DynamicCast_AsValeria_Character, bool InK2Node_DynamicCast_bSuccess, class UAbilityAnimationComponent* InCallFunc_GetAbilityAnimation_ReturnValue, int32 InTemp_int_Loop_Counter_Variable, class AActor* InCallFunc_GetOwner_ReturnValue_1, int32 InCallFunc_Add_IntInt_ReturnValue, bool InCallFunc_IsValid_ReturnValue, bool InCallFunc_AkGetComponent_ComponentCreated, class UAkComponent* InCallFunc_AkGetComponent_AkComponent, int32 InCallFunc_AkEventComponent_ReturnValue, const struct FTransform& InCallFunc_GetSocketTransform_ReturnValue, bool InCallFunc_IsValid_ReturnValue_1, const struct FVector& InCallFunc_BreakTransform_Location, const struct FRotator& InCallFunc_BreakTransform_Rotation, const struct FVector& InCallFunc_BreakTransform_Scale, const struct FVector& InCallFunc_Add_VectorVector_ReturnValue, class UAkComponent* InCallFunc_AkEventLocationWithActor_AkComponent, int32 InCallFunc_AkEventLocationWithActor_Playing_ID, const class FString& InCallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class FName InCallFunc_Conv_StringToName_ReturnValue, const struct FAudioMappingConfig& InCallFunc_GetDataTableRowFromName_OutRow, bool InCallFunc_GetDataTableRowFromName_ReturnValue, TArray<class FName>& InCallFunc_Map_Keys_Keys, class FName InCallFunc_Array_Get_Item, int32 InCallFunc_Array_Length_ReturnValue, bool InCallFunc_Less_IntInt_ReturnValue, bool InCallFunc_PlayAudioMappingHelper_Success, bool InCallFunc_PlayAudioMappingHelper_Success_1, bool InCallFunc_NotEqual_NameName_ReturnValue);
	struct FAudioMappingConfig FindAudioMapping(class UAbilityAnimationComponent* InAbilityAnimComp, class FName InMappingQualifier, class UDataTable* InMappingTable, const class FString& InCallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class UDataTable* InCallFunc_Map_Find_Value, bool InCallFunc_Map_Find_ReturnValue, class FName InCallFunc_Conv_StringToName_ReturnValue, const struct FAudioMappingConfig& InCallFunc_GetDataTableRowFromName_OutRow, bool InCallFunc_GetDataTableRowFromName_ReturnValue, bool InCallFunc_IsValid_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
