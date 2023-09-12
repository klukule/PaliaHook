#pragma once

// Dumped with Dumper-7!


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
	uint8                                        Pad_4304[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  Socket;                                            // 0x3C(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Follow;                                            // 0x44(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAk_EquippedEffect_C* GetDefaultObj();

	class FString GetNotifyName(const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue);
	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, struct FAnimNotifyEventReference& EventReference, int32 Temp_int_Array_Index_Variable, class AActor* CallFunc_GetOwner_ReturnValue, class UEquipmentComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FEquipmentItem& CallFunc_GetEquippedItem_ReturnValue, class AActor* CallFunc_Array_Get_Item, class AActor* CallFunc_GetOwner_ReturnValue_1, class ABP_EquipViewActor_C* K2Node_DynamicCast_AsBP_Equip_View_Actor, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class AActor* CallFunc_GetOwner_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, class UAkAudioEvent* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UAkComponent* CallFunc_AkEventSpawnAttached_Ak, int32 CallFunc_AkEventSpawnAttached_Id, class UAkComponent* CallFunc_AkEventLocationWithActor_AkComponent, int32 CallFunc_AkEventLocationWithActor_Playing_ID);
};

}


