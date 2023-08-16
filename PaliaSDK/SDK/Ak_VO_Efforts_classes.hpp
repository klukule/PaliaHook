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

// 0x10 (0x48 - 0x38)
// BlueprintGeneratedClass Ak_VO_Efforts.Ak_VO_Efforts_C
class UAk_VO_Efforts_C : public UAnimNotify
{
public:
	enum class E_VoiceEffortEvent                VoiceEvent;                                        // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_31CE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UVoiceSet_C*                           DummyData;                                         // 0x40(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Ak_VO_Efforts_C");
		return Clss;
	}

	class UAkComponent* PrepVoAkComponent(class USceneComponent* InAttachToComponent, class UAkComponent* InAkComp, class UVAL_CharacterCustomizationComponent* InCustomizationComp, int32 InTemp_int_Array_Index_Variable, bool InCallFunc_AkGetComponent_ComponentCreated, class UAkComponent* InCallFunc_AkGetComponent_AkComponent, bool InCallFunc_IsValid_ReturnValue, bool InCallFunc_IsValid_ReturnValue_1, class UAkRtpc* InCallFunc_Array_Get_Item, int32 InCallFunc_Array_Length_ReturnValue, int32 InTemp_int_Loop_Counter_Variable, class AActor* InCallFunc_GetOwner_ReturnValue, bool InCallFunc_Less_IntInt_ReturnValue, class UVAL_CharacterCustomizationComponent* InCallFunc_GetComponentByClass_ReturnValue, int32 InCallFunc_Add_IntInt_ReturnValue);
	class FString GetNotifyName(const class FString& InCallFunc_GetEnumeratorUserFriendlyName_ReturnValue, const class FString& InCallFunc_Concat_StrStr_ReturnValue);
	bool Received_Notify(class USkeletalMeshComponent* InMeshComp, class UAnimSequenceBase* InAnimation, struct FAnimNotifyEventReference& InEventReference, class UAkAudioEvent* InVoiceSetEvent, class UAkAudioEvent* InCallFunc_GetVoiceEvent_Value, class AActor* InCallFunc_GetOwner_ReturnValue, int32 InCallFunc_AkEventGlobal_ReturnValue, class UBP_CharacterCustomizationComponent_C* InCallFunc_GetComponentByClass_ReturnValue, class UGameInstance* InCallFunc_GetGameInstance_ReturnValue, class UVAL_VoiceSet* InCallFunc_GetVoiceSet_ReturnValue, bool InCallFunc_IsValid_ReturnValue, class UVoiceSet_C* InK2Node_DynamicCast_AsVoice_Set, bool InK2Node_DynamicCast_bSuccess, class UAkAudioEvent* InCallFunc_GetVoiceEvent_Value_1, bool InCallFunc_IsValid_ReturnValue_1, bool InCallFunc_IsServer_ReturnValue, bool InCallFunc_Not_PreBool_ReturnValue, class UAkComponent* InCallFunc_PrepVoAkComponent_ReturnValue, int32 InCallFunc_AkEventComponent_ReturnValue, bool InCallFunc_IsValid_ReturnValue_2, bool InCallFunc_IsValid_ReturnValue_3);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
