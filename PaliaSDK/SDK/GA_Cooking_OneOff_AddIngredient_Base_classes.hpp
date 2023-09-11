#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xE (0x4F1 - 0x4E3)
// BlueprintGeneratedClass GA_Cooking_OneOff_AddIngredient_Base.GA_Cooking_OneOff_AddIngredient_Base_C
class UGA_Cooking_OneOff_AddIngredient_Base_C : public UGA_Cooking_OneOff_Base_C
{
public:
	uint8                                        Pad_30F1[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4E8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         TriggeredEndingInteract;                           // 0x4F0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGA_Cooking_OneOff_AddIngredient_Base_C* GetDefaultObj();

	void SetMovementBlock(bool bLock, bool* Changed, bool CallFunc_SetMovementBlock_Changed, bool CallFunc_Not_PreBool_ReturnValue);
	void ConsiderTriggeringMinigame(bool CallFunc_GetWasCancelled_WasCancelled, class AValeriaCharacter* CallFunc_GetValeriaCharacterFromActorInfo_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_HasBegunPlay_ReturnValue, bool CallFunc_IsServer_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class AValeriaPlayerController* CallFunc_GetValeriaPlayerControllerFromActorInfo_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, enum class ECrafterEngageResult CallFunc_SetIsEngaging_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsInteractingMode_ReturnValue, bool CallFunc_ContainsAllIngredients_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_2);
	void K2_OnEndAbility(bool bWasCancelled);
	void ExecuteUbergraph_GA_Cooking_OneOff_AddIngredient_Base(int32 EntryPoint, bool K2Node_Event_bWasCancelled);
};

}


