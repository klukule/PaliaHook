#pragma once

// Dumped with Dumper-7!


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
	uint8                                        Pad_514[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x540(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class AActor*                                BP_seed;                                           // 0x548(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGA_Gardening_Seed_C* GetDefaultObj();

	void Event_vfx_throwSeeds();
	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);
	void ExecuteUbergraph_GA_Gardening_Seed(int32 EntryPoint, bool K2Node_Event_bWasCancelled, class AValeriaCharacter* CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue, class AValeriaCharacter* CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue_1, class UGardenPlantingComponent* CallFunc_GetGardenPlanting_ReturnValue, class UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue, float CallFunc_GetDesiredCharacterYaw_outYaw, bool CallFunc_GetDesiredCharacterYaw_ReturnValue, class AValeriaCharacter* CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue_2, class UGardenPlantingComponent* CallFunc_GetGardenPlanting_ReturnValue_1, bool CallFunc_IsServer_ReturnValue, class AValeriaCharacter* CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue_3, class UGardenPlantingComponent* CallFunc_GetGardenPlanting_ReturnValue_2, bool CallFunc_IsServer_ReturnValue_1, class AValeriaCharacter* CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue_4, class UGardenPlantingComponent* CallFunc_GetGardenPlanting_ReturnValue_3, double K2Node_VariableSet_EnforcedYaw_ImplicitCast);
};

}


