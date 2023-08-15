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
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("VALDTOS_MetaCharacterCustomizationFuncLib");

		return Clss;
	}

	bool MetaCharacterFormat_EqualEqual(struct FVALDTOS_MetaCharacterFormat& A, struct FVALDTOS_MetaCharacterFormat& B);
	bool CharacterCustomizationOptions_EqualEqual(struct FVALDTOS_CharacterCustomizationLoadout_PersistDTO_Volatile& A, struct FVALDTOS_CharacterCustomizationLoadout_PersistDTO_Volatile& B);
	bool CharacterCreationOptions_EqualEqual(struct FVALDTOS_CharacterCustomizationLoadout_PersistDTO_Stable& A, struct FVALDTOS_CharacterCustomizationLoadout_PersistDTO_Stable& B);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
