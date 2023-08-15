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

// 0xB2 (0xDA - 0x28)
// BlueprintGeneratedClass ListEntry_CharacterCustomization_VariantOption.ListEntry_CharacterCustomization_VariantOption_C
class UListEntry_CharacterCustomization_VariantOption_C : public UObject
{
public:
	struct FVAL_CharacterCustomizationVariantOptionBase VariantOptionBase;                                 // 0x28(0xA0)(Edit, BlueprintVisible, ExposeOnSpawn)
	class UVAL_CharacterCustomizationItemBase*   Item;                                              // 0xC8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FName                                  VariantChannelName;                                // 0xD0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         Selected;                                          // 0xD8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	enum class EVAL_CharacterBodyType            BodyType;                                          // 0xD9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("ListEntry_CharacterCustomization_VariantOption_C");

		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
