#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xD (0x4F0 - 0x4E3)
// BlueprintGeneratedClass GA_Cooking_OneOff_CollectAnim.GA_Cooking_OneOff_CollectAnim_C
class UGA_Cooking_OneOff_CollectAnim_C : public UGA_Cooking_OneOff_Base_C
{
public:
	uint8                                        Pad_2F59[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4E8(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UGA_Cooking_OneOff_CollectAnim_C* GetDefaultObj();

	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData);
	void ExecuteUbergraph_GA_Cooking_OneOff_CollectAnim(int32 EntryPoint, const struct FGameplayEventData& K2Node_Event_EventData, bool CallFunc_IsValid_ReturnValue, class UCrafterComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FCrafterConfig& CallFunc_GetCrafterConfig_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
};

}


