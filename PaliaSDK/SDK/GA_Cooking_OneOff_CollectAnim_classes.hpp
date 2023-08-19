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

// 0xD (0x4F0 - 0x4E3)
// BlueprintGeneratedClass GA_Cooking_OneOff_CollectAnim.GA_Cooking_OneOff_CollectAnim_C
class UGA_Cooking_OneOff_CollectAnim_C : public UGA_Cooking_OneOff_Base_C
{
public:
	uint8                                        Pad_135F[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4E8(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GA_Cooking_OneOff_CollectAnim_C");
		return Clss;
	}

	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& InEventData);
	void ExecuteUbergraph_GA_Cooking_OneOff_CollectAnim(int32 InEntryPoint, const struct FGameplayEventData& InK2Node_Event_EventData, bool InCallFunc_IsValid_ReturnValue, class UCrafterComponent* InCallFunc_GetComponentByClass_ReturnValue, bool InCallFunc_IsValid_ReturnValue_1, const struct FCrafterConfig& InCallFunc_GetCrafterConfig_ReturnValue, bool InCallFunc_EqualEqual_ByteByte_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
