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

// 0x130 (0x158 - 0x28)
// BlueprintGeneratedClass TileItem_CharacterCustomizationItem.TileItem_CharacterCustomizationItem_C
class UTileItem_CharacterCustomizationItem_C : public UObject
{
public:
	enum class EVAL_CharacterBodyType            BodyType;                                          // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         New;                                               // 0x29(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Owned;                                             // 0x2A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_4349[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVAL_CharCustomization_AssetData      AssetData;                                         // 0x30(0x128)(Edit, BlueprintVisible, ExposeOnSpawn)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TileItem_CharacterCustomizationItem_C");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
