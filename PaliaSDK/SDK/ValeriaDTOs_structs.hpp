#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x420 (0x420 - 0x0)
// ScriptStruct ValeriaDTOs.VALDTOS_CharacterCustomizationLoadout_PersistDTO_Volatile
struct FVALDTOS_CharacterCustomizationLoadout_PersistDTO_Volatile
{
public:
	struct FGuid                                 TorsoId;                                           // 0x0(0x10)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FString, struct FGuid>            Torso_VariantSelections;                           // 0x10(0x50)(BlueprintVisible, RepSkip, NativeAccessSpecifierPublic)
	struct FGuid                                 LegsId;                                            // 0x60(0x10)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FString, struct FGuid>            Legs_VariantSelections;                            // 0x70(0x50)(BlueprintVisible, RepSkip, NativeAccessSpecifierPublic)
	struct FGuid                                 HatId;                                             // 0xC0(0x10)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FString, struct FGuid>            Hat_VariantSelections;                             // 0xD0(0x50)(BlueprintVisible, RepSkip, NativeAccessSpecifierPublic)
	struct FGuid                                 FaceMaskId;                                        // 0x120(0x10)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FString, struct FGuid>            FaceMask_VariantSelections;                        // 0x130(0x50)(BlueprintVisible, RepSkip, NativeAccessSpecifierPublic)
	struct FGuid                                 FaceTattooId;                                      // 0x180(0x10)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FString, struct FGuid>            FaceTattoo_VariantSelections;                      // 0x190(0x50)(BlueprintVisible, RepSkip, NativeAccessSpecifierPublic)
	struct FGuid                                 BodyTattooId;                                      // 0x1E0(0x10)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FString, struct FGuid>            BodyTattoo_VariantSelections;                      // 0x1F0(0x50)(BlueprintVisible, RepSkip, NativeAccessSpecifierPublic)
	struct FGuid                                 MakeupId;                                          // 0x240(0x10)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FString, struct FGuid>            Makeup_VariantSelections;                          // 0x250(0x50)(BlueprintVisible, RepSkip, NativeAccessSpecifierPublic)
	struct FGuid                                 FaceComplexionId;                                  // 0x2A0(0x10)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FString, struct FGuid>            FaceComplexion_VariantSelections;                  // 0x2B0(0x50)(BlueprintVisible, RepSkip, NativeAccessSpecifierPublic)
	struct FGuid                                 BodyComplexionId;                                  // 0x300(0x10)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FString, struct FGuid>            BodyComplexion_VariantSelections;                  // 0x310(0x50)(BlueprintVisible, RepSkip, NativeAccessSpecifierPublic)
	struct FGuid                                 GliderId;                                          // 0x360(0x10)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FString, struct FGuid>            Glider_VariantSelections;                          // 0x370(0x50)(BlueprintVisible, RepSkip, NativeAccessSpecifierPublic)
	struct FGuid                                 PetId;                                             // 0x3C0(0x10)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FString, struct FGuid>            Pet_VariantSelections;                             // 0x3D0(0x50)(BlueprintVisible, RepSkip, NativeAccessSpecifierPublic)
};

// 0x2B8 (0x2B8 - 0x0)
// ScriptStruct ValeriaDTOs.VALDTOS_CharacterCustomizationLoadout_PersistDTO_Stable
struct FVALDTOS_CharacterCustomizationLoadout_PersistDTO_Stable
{
public:
	uint8                                        BodyType;                                          // 0x0(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_26A0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Thickness;                                         // 0x4(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Height;                                            // 0x8(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GenderExpression;                                  // 0xC(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MuscularExpression;                                // 0x10(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 AnimSetId;                                         // 0x14(0x10)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_26A5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class FString, struct FGuid>            AnimSet_VariantSelections;                         // 0x28(0x50)(BlueprintVisible, RepSkip, NativeAccessSpecifierPublic)
	struct FGuid                                 SkinToneId;                                        // 0x78(0x10)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FString, struct FGuid>            SkinTone_VariantSelections;                        // 0x88(0x50)(BlueprintVisible, RepSkip, NativeAccessSpecifierPublic)
	struct FGuid                                 EyesId;                                            // 0xD8(0x10)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FString, struct FGuid>            Eyes_VariantSelections;                            // 0xE8(0x50)(BlueprintVisible, RepSkip, NativeAccessSpecifierPublic)
	struct FGuid                                 HairStyleId;                                       // 0x138(0x10)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FString, struct FGuid>            HairStyle_VariantSelections;                       // 0x148(0x50)(BlueprintVisible, RepSkip, NativeAccessSpecifierPublic)
	struct FGuid                                 HeadId;                                            // 0x198(0x10)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FString, struct FGuid>            Head_VariantSelections;                            // 0x1A8(0x50)(BlueprintVisible, RepSkip, NativeAccessSpecifierPublic)
	struct FGuid                                 FacialHairStyleId;                                 // 0x1F8(0x10)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FString, struct FGuid>            FacialHairStyle_VariantSelections;                 // 0x208(0x50)(BlueprintVisible, RepSkip, NativeAccessSpecifierPublic)
	struct FGuid                                 VoiceId;                                           // 0x258(0x10)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FString, struct FGuid>            Voice_VariantSelections;                           // 0x268(0x50)(BlueprintVisible, RepSkip, NativeAccessSpecifierPublic)
};

// 0x718 (0x718 - 0x0)
// ScriptStruct ValeriaDTOs.VALDTOS_MetaCharacterFormat
struct FVALDTOS_MetaCharacterFormat
{
public:
	struct FGuid                                 UserAccountId;                                     // 0x0(0x10)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 CharacterId;                                       // 0x10(0x10)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                CharacterName;                                     // 0x20(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PreferredName;                                     // 0x30(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVALDTOS_CharacterCustomizationLoadout_PersistDTO_Stable Loadout_Stable;                                    // 0x40(0x2B8)(BlueprintVisible, RepSkip, NativeAccessSpecifierPublic)
	struct FVALDTOS_CharacterCustomizationLoadout_PersistDTO_Volatile Loadout_Volatile;                                  // 0x2F8(0x420)(BlueprintVisible, RepSkip, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
