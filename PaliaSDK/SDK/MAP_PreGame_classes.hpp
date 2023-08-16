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

// 0x20 (0x2B8 - 0x298)
// BlueprintGeneratedClass MAP_PreGame.MAP_PreGame_C
class AMAP_PreGame_C : public ALevelScriptActor
{
public:
	class FString                                CharacterSelectMap;                                // 0x298(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class AVAL_CharacterPreviewer*               CharacterPreviewer;                                // 0x2A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ABP_CharacterRenderStudio_C*           BP_CharacterRenderStudio_0_GetCharacterRenderStudio_MERGED_RefProperty; // 0x2B0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MAP_PreGame_C");
		return Clss;
	}

	struct FVector GetRenderStudioSpawnLocation();
	class AVAL_CharacterPreviewer* GetCharacterInventoryPreviewer();
	class AVAL_CharacterPreviewer* GetCharacterPreviewer(bool InCallFunc_IsValid_ReturnValue, const struct FTransform& InCallFunc_MakeTransform_ReturnValue, class AActor* InCallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_CharacterPreview_C* InCallFunc_FinishSpawningActor_ReturnValue);
	class AVAL_CharacterRenderStudio* GetCharacterRenderStudio();
	struct FVector GetItemPreviewerSpawnLocation();
	class AValeriaCharacter* GetLobbyCharacter();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
