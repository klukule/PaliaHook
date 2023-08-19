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

// 0x19 (0x5A - 0x41)
// BlueprintGeneratedClass Ak_OneShot.Ak_OneShot_C
class UAk_OneShot_C : public UAk_OneShot_Base_C
{
public:
	uint8                                        Pad_313D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Attach_Name;                                       // 0x48(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	bool                                         Follow;                                            // 0x58(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         TryCallOnOwner;                                    // 0x59(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Ak_OneShot_C");
		return Clss;
	}

	void PlayAudio(class USkeletalMeshComponent* InMeshComp, bool* InSuccess, class UAkComponent* InAK, class AActor* InOwner, bool InCallFunc_IsValid_ReturnValue, bool InCallFunc_IsValid_ReturnValue_1, int32 InCallFunc_AkEventComponent_ReturnValue, int32 InCallFunc_AkEventComponent_ReturnValue_1, const struct FVector& InCallFunc_K2_GetActorLocation_ReturnValue, class USceneComponent* InCallFunc_K2_GetRootComponent_ReturnValue, class UAkComponent* InCallFunc_AkEventLocationWithActor_AkComponent, int32 InCallFunc_AkEventLocationWithActor_Playing_ID, class AActor* InCallFunc_GetOwner_ReturnValue, bool InCallFunc_IsValid_ReturnValue_2, class AActor* InCallFunc_GetOwner_ReturnValue_1, class FName InCallFunc_Conv_StringToName_ReturnValue, bool InCallFunc_AkGetComponent_ComponentCreated, class UAkComponent* InCallFunc_AkGetComponent_AkComponent, class AActor* InCallFunc_GetOwner_ReturnValue_2, class AActor* InCallFunc_GetOwner_ReturnValue_3, bool InCallFunc_IsValid_ReturnValue_3, class FName InCallFunc_Conv_StringToName_ReturnValue_1, bool InCallFunc_AkGetComponent_ComponentCreated_1, class UAkComponent* InCallFunc_AkGetComponent_AkComponent_1, class FName InCallFunc_Conv_StringToName_ReturnValue_2, class AActor* InCallFunc_GetOwner_ReturnValue_4, const struct FVector& InCallFunc_GetSocketLocation_ReturnValue, class UAkComponent* InCallFunc_AkEventLocationWithActor_AkComponent_1, int32 InCallFunc_AkEventLocationWithActor_Playing_ID_1);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
