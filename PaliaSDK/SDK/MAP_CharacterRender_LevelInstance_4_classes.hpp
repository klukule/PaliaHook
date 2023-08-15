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

// 0x18 (0x2B0 - 0x298)
// BlueprintGeneratedClass MAP_CharacterRender_LevelInstance_4.MAP_CharacterRender_C
class AMAP_CharacterRender_C : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x298(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class ACameraActor*                          CameraActor_0_GetDefaultCameraActor_MERGED_RefProperty; // 0x2A0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_ValeriaCharacter_C*                BP_ValeriaCharacter_2_GetCharacter_MERGED_RefProperty; // 0x2A8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("MAP_CharacterRender_C");

		return Clss;
	}

	TSet<class AActor*> GetAllTaggedActors();
	TSet<class AActor*> GetAllCameraActors();
	class AActor* GetCameraActorForCosmeticAsset(class UVAL_CharacterCustomizationItemBase* Item, enum class EVAL_CharacterBodyType BodyType);
	class AValeriaCharacter* GetCharacter();
	class AActor* GetDefaultCameraActor();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_MAP_CharacterRender(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
