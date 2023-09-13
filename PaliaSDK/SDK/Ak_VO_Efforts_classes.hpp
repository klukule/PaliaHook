#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x48 - 0x38)
// BlueprintGeneratedClass Ak_VO_Efforts.Ak_VO_Efforts_C
class UAk_VO_Efforts_C : public UAnimNotify
{
public:
	enum class E_VoiceEffortEvent                VoiceEvent;                                        // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_30BF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UVoiceSet_C*                           DummyData;                                         // 0x40(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAk_VO_Efforts_C* GetDefaultObj();

	class UAkComponent* PrepVoAkComponent(class USceneComponent* AttachToComponent, class UAkComponent* AkComp, class UVAL_CharacterCustomizationComponent* CustomizationComp, int32 Temp_int_Array_Index_Variable, bool CallFunc_AkGetComponent_ComponentCreated, class UAkComponent* CallFunc_AkGetComponent_AkComponent, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UAkRtpc* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UVAL_CharacterCustomizationComponent* CallFunc_GetComponentByClass_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	class FString GetNotifyName(const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue);
	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, struct FAnimNotifyEventReference& EventReference, class UAkAudioEvent* VoiceSetEvent, class UAkAudioEvent* CallFunc_GetVoiceEvent_Value, class AActor* CallFunc_GetOwner_ReturnValue, int32 CallFunc_AkEventGlobal_ReturnValue, class UBP_CharacterCustomizationComponent_C* CallFunc_GetComponentByClass_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UVAL_VoiceSet* CallFunc_GetVoiceSet_ReturnValue, bool CallFunc_IsServer_ReturnValue, class UVoiceSet_C* K2Node_DynamicCast_AsVoice_Set, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Not_PreBool_ReturnValue, class UAkAudioEvent* CallFunc_GetVoiceEvent_Value_1, bool CallFunc_IsValid_ReturnValue_2, class UAkComponent* CallFunc_PrepVoAkComponent_ReturnValue, int32 CallFunc_AkEventComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4);
};

}


