#pragma once

// Dumped with Dumper-7!


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

	static class UClass* StaticClass();
	static class UAk_OneShot_Base_C* GetDefaultObj();

	class FString GetNotifyName(const class FString& CallFunc_GetDisplayName_ReturnValue);
	void PlayAudio(class USkeletalMeshComponent* MeshComp, bool* Success, class UAkAudioEvent* UsedAkEvent, class AActor* Owner, class UAkComponent* Ak, bool CallFunc_AkGetComponent_ComponentCreated, class UAkComponent* CallFunc_AkGetComponent_AkComponent, int32 CallFunc_AkEventComponent_ReturnValue);
	void ShouldPlay(class USkeletalMeshComponent* MeshComp, bool* Should, bool CallFunc_IsServer_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class AValeriaCharacter* K2Node_DynamicCast_AsValeria_Character, bool K2Node_DynamicCast_bSuccess, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, struct FAnimNotifyEventReference& EventReference, class UAkComponent* Ak, bool CallFunc_PlayAudio_Success, bool CallFunc_ShouldPlay_Should);
};

}


