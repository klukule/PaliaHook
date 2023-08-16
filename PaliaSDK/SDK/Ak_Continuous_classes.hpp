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

// 0x19 (0x49 - 0x30)
// BlueprintGeneratedClass Ak_Continuous.Ak_Continuous_C
class UAk_Continuous_C : public UAnimNotifyState
{
public:
	class UAkAudioEvent*                         AkEvent_Begin;                                     // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                  Attach_Name;                                       // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EAkActionOnEventType              Action_Type;                                       // 0x40(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_402B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Transition_Duration;                               // 0x44(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EAkCurveInterpolation             Fade_Curve;                                        // 0x48(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Ak_Continuous_C");
		return Clss;
	}

	bool Received_NotifyEnd(class USkeletalMeshComponent* InMeshComp, class UAnimSequenceBase* InAnimation, struct FAnimNotifyEventReference& InEventReference, class UGameInstance* InCallFunc_GetGameInstance_ReturnValue, bool InCallFunc_IsServer_ReturnValue, bool InCallFunc_IsValid_ReturnValue, bool InCallFunc_Not_PreBool_ReturnValue, int32 InCallFunc_GetAkNotifyId_ReturnValue, bool InCallFunc_IsValid_ReturnValue_1);
	bool Received_NotifyBegin(class USkeletalMeshComponent* InMeshComp, class UAnimSequenceBase* InAnimation, float InTotalDuration, struct FAnimNotifyEventReference& InEventReference, bool InCallFunc_IsServer_ReturnValue, class UGameInstance* InCallFunc_GetGameInstance_ReturnValue, bool InCallFunc_Not_PreBool_ReturnValue, bool InCallFunc_IsValid_ReturnValue, bool InCallFunc_IsValid_ReturnValue_1, bool InCallFunc_AkGetComponent_ComponentCreated, class UAkComponent* InCallFunc_AkGetComponent_AkComponent, bool InCallFunc_IsValid_ReturnValue_2, int32 InCallFunc_AkEventComponent_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
