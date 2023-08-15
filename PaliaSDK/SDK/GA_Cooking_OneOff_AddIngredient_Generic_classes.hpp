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

// 0x13 (0x504 - 0x4F1)
// BlueprintGeneratedClass GA_Cooking_OneOff_AddIngredient_Generic.GA_Cooking_OneOff_AddIngredient_Generic_C
class UGA_Cooking_OneOff_AddIngredient_Generic_C : public UGA_Cooking_OneOff_AddIngredient_Base_C
{
public:
	uint8                                        Pad_2A9C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4F8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                        NumberOfSections;                                  // 0x500(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("GA_Cooking_OneOff_AddIngredient_Generic_C");

		return Clss;
	}

	void Event_OnActivateAbility();
	void ExecuteUbergraph_GA_Cooking_OneOff_AddIngredient_Generic(int32 EntryPoint, int32 CallFunc_RandomInteger_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
