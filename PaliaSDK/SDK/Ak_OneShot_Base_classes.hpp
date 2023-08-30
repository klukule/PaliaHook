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

// 0x9 (0x41 - 0x38)
// BlueprintGeneratedClass Ak_OneShot_Base.Ak_OneShot_Base_C
class UAk_OneShot_Base_C : public UAnimNotify
{
public:
	class UAkAudioEvent*                         AkEvent;                                           // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Local_Only;                                        // 0x40(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Ak_OneShot_Base_C");
		return Clss;
	}

	class FString GetNotifyName(const class FString& InCallFunc_GetDisplayName_ReturnValue);
	void PlayAudio(class USkeletalMeshComponent* InMeshComp, bool* InSuccess, class UAkAudioEvent* InUsedAkEvent, class AActor* InOwner, class UAkComponent* InAk, bool InCallFunc_AkGetComponent_ComponentCreated, class UAkComponent* InCallFunc_AkGetComponent_AkComponent, int32 InCallFunc_AkEventComponent_ReturnValue);
	void ShouldPlay(class USkeletalMeshComponent* InMeshComp, bool* InShould, bool InCallFunc_IsServer_ReturnValue, bool InCallFunc_Not_PreBool_ReturnValue, class AActor* InCallFunc_GetOwner_ReturnValue, class AValeriaCharacter* InK2Node_DynamicCast_AsValeria_Character, bool InK2Node_DynamicCast_bSuccess, class UGameInstance* InCallFunc_GetGameInstance_ReturnValue, bool InCallFunc_IsLocallyControlled_ReturnValue, bool InCallFunc_IsValid_ReturnValue, bool InCallFunc_IsValid_ReturnValue_1);
	bool Received_Notify(class USkeletalMeshComponent* InMeshComp, class UAnimSequenceBase* InAnimation, struct FAnimNotifyEventReference& InEventReference, class UAkComponent* InAk, bool InCallFunc_PlayAudio_Success, bool InCallFunc_ShouldPlay_Should);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
