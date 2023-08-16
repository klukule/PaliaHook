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

// 0x0 (0x28 - 0x28)
// Class ValeriaDTOs.VALDTOS_MetaCharacterCustomizationFuncLib
class UVALDTOS_MetaCharacterCustomizationFuncLib : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VALDTOS_MetaCharacterCustomizationFuncLib");
		return Clss;
	}

	bool MetaCharacterFormat_EqualEqual(struct FVALDTOS_MetaCharacterFormat& InA, struct FVALDTOS_MetaCharacterFormat& InB);
	bool CharacterCustomizationOptions_EqualEqual(struct FVALDTOS_CharacterCustomizationLoadout_PersistDTO_Volatile& InA, struct FVALDTOS_CharacterCustomizationLoadout_PersistDTO_Volatile& InB);
	bool CharacterCreationOptions_EqualEqual(struct FVALDTOS_CharacterCustomizationLoadout_PersistDTO_Stable& InA, struct FVALDTOS_CharacterCustomizationLoadout_PersistDTO_Stable& InB);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
