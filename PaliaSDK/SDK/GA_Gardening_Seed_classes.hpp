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

// 0x14 (0x550 - 0x53C)
// BlueprintGeneratedClass GA_Gardening_Seed.GA_Gardening_Seed_C
class UGA_Gardening_Seed_C : public UGA_LoopableEvent_Base_C
{
public:
	uint8                                        Pad_5F7[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x540(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class AActor*                                BP_seed;                                           // 0x548(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GA_Gardening_Seed_C");
		return Clss;
	}

	void Event_vfx_throwSeeds();
	void K2_ActivateAbility();
	void K2_OnEndAbility(bool InbWasCancelled);
	void ExecuteUbergraph_GA_Gardening_Seed(int32 InEntryPoint, bool InK2Node_Event_bWasCancelled, class AValeriaCharacter* InCallFunc_GetValeriaCharacterFromActorInfo_ReturnValue, class AValeriaCharacter* InCallFunc_GetValeriaCharacterFromActorInfo_ReturnValue_1, class UGardenPlantingComponent* InCallFunc_GetGardenPlanting_ReturnValue, class UNiagaraComponent* InCallFunc_SpawnSystemAttached_ReturnValue, float InCallFunc_GetDesiredCharacterYaw_outYaw, bool InCallFunc_GetDesiredCharacterYaw_ReturnValue, class AValeriaCharacter* InCallFunc_GetValeriaCharacterFromActorInfo_ReturnValue_2, class UGardenPlantingComponent* InCallFunc_GetGardenPlanting_ReturnValue_1, bool InCallFunc_IsServer_ReturnValue, class AValeriaCharacter* InCallFunc_GetValeriaCharacterFromActorInfo_ReturnValue_3, bool InCallFunc_Not_PreBool_ReturnValue, class UGardenPlantingComponent* InCallFunc_GetGardenPlanting_ReturnValue_2, bool InCallFunc_IsServer_ReturnValue_1, class AValeriaCharacter* InCallFunc_GetValeriaCharacterFromActorInfo_ReturnValue_4, class UGardenPlantingComponent* InCallFunc_GetGardenPlanting_ReturnValue_3, double InK2Node_VariableSet_EnforcedYaw_ImplicitCast);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
