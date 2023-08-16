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

// 0xE (0x4F1 - 0x4E3)
// BlueprintGeneratedClass GA_Cooking_OneOff_AddIngredient_Base.GA_Cooking_OneOff_AddIngredient_Base_C
class UGA_Cooking_OneOff_AddIngredient_Base_C : public UGA_Cooking_OneOff_Base_C
{
public:
	uint8                                        Pad_205D[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4E8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         TriggeredEndingInteract;                           // 0x4F0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GA_Cooking_OneOff_AddIngredient_Base_C");
		return Clss;
	}

	void SetMovementBlock(bool InbLock, bool* InChanged, bool InCallFunc_SetMovementBlock_Changed, bool InCallFunc_Not_PreBool_ReturnValue);
	void ConsiderTriggeringMinigame(bool InCallFunc_IsServer_ReturnValue, class AValeriaPlayerController* InCallFunc_GetValeriaPlayerControllerFromActorInfo_ReturnValue, enum class ECrafterEngageResult InCallFunc_SetIsEngaging_ReturnValue, bool InCallFunc_Not_PreBool_ReturnValue, bool InCallFunc_IsValid_ReturnValue, bool InCallFunc_IsInteractingMode_ReturnValue, bool InCallFunc_ContainsAllIngredients_ReturnValue, bool InCallFunc_BooleanAND_ReturnValue);
	void K2_OnEndAbility(bool InbWasCancelled);
	void ExecuteUbergraph_GA_Cooking_OneOff_AddIngredient_Base(int32 InEntryPoint, bool InK2Node_Event_bWasCancelled);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
