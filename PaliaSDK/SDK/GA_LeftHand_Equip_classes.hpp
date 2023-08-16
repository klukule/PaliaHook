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

// 0x8 (0x440 - 0x438)
// BlueprintGeneratedClass GA_LeftHand_Equip.GA_LeftHand_Equip_C
class UGA_LeftHand_Equip_C : public UValeriaGASGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x438(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GA_LeftHand_Equip_C");
		return Clss;
	}

	void OnCancelled_71CDA2D148065AE041450D9D992BCE5D();
	void OnInterrupted_71CDA2D148065AE041450D9D992BCE5D();
	void OnBlendOut_71CDA2D148065AE041450D9D992BCE5D();
	void OnCompleted_71CDA2D148065AE041450D9D992BCE5D();
	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_LeftHand_Equip(int32 InEntryPoint, class AActor* InCallFunc_GetOwningActorFromActorInfo_ReturnValue, class UAnimMontage* InCallFunc_GetMontageByAbility_Montage, FDelegateProperty_ InK2Node_CreateDelegate_OutputDelegate, class UAbilityTask_PlayMontageAndWait* InCallFunc_CreatePlayMontageAndWaitProxy_ReturnValue, bool InCallFunc_IsValid_ReturnValue, FDelegateProperty_ InK2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ InK2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ InK2Node_CreateDelegate_OutputDelegate_3, bool InCallFunc_K2_CommitAbility_ReturnValue, const struct FGameplayEventData& InK2Node_MakeStruct_GameplayEventData);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
