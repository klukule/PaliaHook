#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x19 (0x5A - 0x41)
// BlueprintGeneratedClass Ak_OneShot.Ak_OneShot_C
class UAk_OneShot_C : public UAk_OneShot_Base_C
{
public:
	uint8                                        Pad_2FB6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Attach_Name;                                       // 0x48(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	bool                                         Follow;                                            // 0x58(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         TryCallOnOwner;                                    // 0x59(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAk_OneShot_C* GetDefaultObj();

	void PlayAudio(class USkeletalMeshComponent* MeshComp, bool* Success, class UAkComponent* Ak, class AActor* Owner, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_AkEventComponent_ReturnValue, int32 CallFunc_AkEventComponent_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, class UAkComponent* CallFunc_AkEventLocationWithActor_AkComponent, int32 CallFunc_AkEventLocationWithActor_Playing_ID, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class AActor* CallFunc_GetOwner_ReturnValue_1, class FName CallFunc_Conv_StringToName_ReturnValue, bool CallFunc_AkGetComponent_ComponentCreated, class UAkComponent* CallFunc_AkGetComponent_AkComponent, class AActor* CallFunc_GetOwner_ReturnValue_2, class AActor* CallFunc_GetOwner_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_3, class FName CallFunc_Conv_StringToName_ReturnValue_1, bool CallFunc_AkGetComponent_ComponentCreated_1, class UAkComponent* CallFunc_AkGetComponent_AkComponent_1, class FName CallFunc_Conv_StringToName_ReturnValue_2, class AActor* CallFunc_GetOwner_ReturnValue_4, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, class UAkComponent* CallFunc_AkEventLocationWithActor_AkComponent_1, int32 CallFunc_AkEventLocationWithActor_Playing_ID_1);
};

}


