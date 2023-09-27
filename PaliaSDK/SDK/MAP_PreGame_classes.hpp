#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x2C8 - 0x2A8)
// BlueprintGeneratedClass MAP_PreGame.MAP_PreGame_C
class AMAP_PreGame_C : public ALevelScriptActor
{
public:
	class FString                                CharacterSelectMap;                                // 0x2A8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class AVAL_CharacterPreviewer*               CharacterPreviewer;                                // 0x2B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ABP_CharacterRenderStudio_C*           BP_CharacterRenderStudio_0_GetCharacterRenderStudio_MERGED_RefProperty; // 0x2C0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AMAP_PreGame_C* GetDefaultObj();

	struct FVector GetRenderStudioSpawnLocation();
	class AVAL_CharacterPreviewer* GetCharacterInventoryPreviewer();
	class AVAL_CharacterPreviewer* GetCharacterPreviewer(bool CallFunc_IsValid_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_CharacterPreview_C* CallFunc_FinishSpawningActor_ReturnValue);
	class AVAL_CharacterRenderStudio* GetCharacterRenderStudio();
	struct FVector GetItemPreviewerSpawnLocation();
	class AValeriaCharacter* GetLobbyCharacter();
};

}


