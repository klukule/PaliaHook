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

// 0x50 (0x78 - 0x28)
// BlueprintGeneratedClass ListEntry_CharacterCustomization_FilterOption.ListEntry_CharacterCustomization_FilterOption_C
class UListEntry_CharacterCustomization_FilterOption_C : public UObject
{
public:
	int32                                        Index;                                             // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_1E9E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVAL_CharacterCustomization_CosmeticTagFilterStruct Tag;                                               // 0x30(0x38)(Edit, BlueprintVisible, ExposeOnSpawn)
	FMulticastInlineDelegateProperty_            OnOptionSelected;                                  // 0x68(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ListEntry_CharacterCustomization_FilterOption_C");
		return Clss;
	}

	void OnOptionSelected__DelegateSignature(bool InIsSelected, const struct FVAL_CharacterCustomization_CosmeticTagFilterStruct& InSelectedCosmeticTag);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
