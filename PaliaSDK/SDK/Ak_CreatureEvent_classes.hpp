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

// 0xD (0x45 - 0x38)
// BlueprintGeneratedClass Ak_CreatureEvent.Ak_CreatureEvent_C
class UAk_CreatureEvent_C : public UAnimNotify
{
public:
	enum class E_CreatureAudioEvents             CreatureEvent;                                     // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_43AB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  Socket;                                            // 0x3C(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Follow;                                            // 0x44(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Ak_CreatureEvent_C");
		return Clss;
	}

	class FString GetNotifyName(const class FString& InCallFunc_GetEnumeratorUserFriendlyName_ReturnValue, const class FString& InCallFunc_Concat_StrStr_ReturnValue);
	bool Received_Notify(class USkeletalMeshComponent* InMeshComp, class UAnimSequenceBase* InAnimation, struct FAnimNotifyEventReference& InEventReference, class AActor* InOwner, class UAkAudioEvent* InAkEvent, class AActor* InCallFunc_GetOwner_ReturnValue, class AActor* InCallFunc_GetOwner_ReturnValue_1, const class FString& InCallFunc_GetDisplayName_ReturnValue, const class FString& InCallFunc_Concat_StrStr_ReturnValue, bool InCallFunc_BuildIsShipping_ReturnValue, const class FString& InCallFunc_GetDisplayName_ReturnValue_1, const class FString& InCallFunc_Concat_StrStr_ReturnValue_1, bool InCallFunc_EqualEqual_ByteByte_ReturnValue, bool InCallFunc_Not_PreBool_ReturnValue, class UGameInstance* InCallFunc_GetGameInstance_ReturnValue, bool InCallFunc_IsValid_ReturnValue, bool InCallFunc_BuildIsShipping_ReturnValue_1, bool InCallFunc_IsDedicatedServer_ReturnValue, class UComp_CreatureAudio_C* InCallFunc_GetComponentByClass_ReturnValue, bool InCallFunc_IsValid_ReturnValue_1, class UAkAudioEvent* InCallFunc_GetCreatureAudioEvent_AkEvent, bool InCallFunc_GetCreatureAudioEvent_Found, class UAkComponent* InCallFunc_AkEventSpawnAttached_Ak, int32 InCallFunc_AkEventSpawnAttached_Id, const struct FVector& InCallFunc_GetSocketLocation_ReturnValue, class UAkComponent* InCallFunc_AkEventLocationWithActor_AkComponent, int32 InCallFunc_AkEventLocationWithActor_Playing_ID);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
