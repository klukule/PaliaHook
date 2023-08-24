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
// BlueprintGeneratedClass Ak_EquippedEffect.Ak_EquippedEffect_C
class UAk_EquippedEffect_C : public UAnimNotify
{
public:
	enum class E_EquippedEvents                  ToolEvent;                                         // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3181[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  Socket;                                            // 0x3C(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Follow;                                            // 0x44(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Ak_EquippedEffect_C");
		return Clss;
	}

	class FString GetNotifyName(const class FString& InCallFunc_GetEnumeratorUserFriendlyName_ReturnValue, const class FString& InCallFunc_Concat_StrStr_ReturnValue);
	bool Received_Notify(class USkeletalMeshComponent* InMeshComp, class UAnimSequenceBase* InAnimation, struct FAnimNotifyEventReference& InEventReference, int32 InTemp_int_Array_Index_Variable, class AActor* InCallFunc_GetOwner_ReturnValue, class UEquipmentComponent* InCallFunc_GetComponentByClass_ReturnValue, bool InCallFunc_IsValid_ReturnValue, const struct FEquipmentItem& InCallFunc_GetEquippedItem_ReturnValue, class AActor* InCallFunc_Array_Get_Item, class AActor* InCallFunc_GetOwner_ReturnValue_1, class ABP_EquipViewActor_C* InK2Node_DynamicCast_AsBP_Equip_View_Actor, bool InK2Node_DynamicCast_bSuccess, int32 InCallFunc_Array_Length_ReturnValue, bool InCallFunc_IsValid_ReturnValue_1, const struct FVector& InCallFunc_GetSocketLocation_ReturnValue, int32 InTemp_int_Loop_Counter_Variable, class AActor* InCallFunc_GetOwner_ReturnValue_2, bool InCallFunc_Less_IntInt_ReturnValue, int32 InCallFunc_Add_IntInt_ReturnValue, bool InCallFunc_IsDedicatedServer_ReturnValue, class UAkAudioEvent* InCallFunc_Map_Find_Value, bool InCallFunc_Map_Find_ReturnValue, class UAkComponent* InCallFunc_AkEventSpawnAttached_Ak, int32 InCallFunc_AkEventSpawnAttached_Id, class UAkComponent* InCallFunc_AkEventLocationWithActor_AkComponent, int32 InCallFunc_AkEventLocationWithActor_Playing_ID);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
