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

// 0x80 (0x318 - 0x298)
// BlueprintGeneratedClass MAP_CharacterCreation_LevelInstance_1.MAP_CharacterCreation_C
class AMAP_CharacterCreation_C : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x298(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                  CinematicActorKeyName_Intro;                       // 0x2A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CinematicActorKeyName_Outro;                       // 0x2A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_CinematicSequenceActor_C*          BP_CinematicSequenceActor_Intro_ExecuteUbergraph_MAP_CharacterCreation_RefProperty; // 0x2B0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_CinematicSequenceActor_C*          BP_CinematicSequenceActor_Outro_ExecuteUbergraph_MAP_CharacterCreation_RefProperty; // 0x2B8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_ValeriaCharacter_C*                BP_ValeriaCharacter_2_GetCharacter_MERGED_RefProperty; // 0x2C0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ACineCameraActor*                      CharacterSelect_Body_Main_GetDefaultCameraActor_MERGED_RefProperty; // 0x2C8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ACineCameraActor*                      CharacterSelect_Body_Main_0_GetAllCameraActors_MERGED_RefProperty; // 0x2D0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ACineCameraActor*                      CharacterSelect_Body_Main_GetAllCameraActors_MERGED_RefProperty; // 0x2D8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ACineCameraActor*                      CineCameraActor_50_GetAllCameraActors_MERGED_RefProperty; // 0x2E0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ACineCameraActor*                      CharacterSelect_Face_Male_Main_GetCameraActorForCosmeticAsset_MERGED_RefProperty; // 0x2E8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ACineCameraActor*                      CharacterSelect_Face_Main_GetCameraActorForCosmeticAsset_MERGED_RefProperty; // 0x2F0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ANiagaraActor*                         NiagaraActor_1_GetAllTaggedActors_MERGED_RefProperty; // 0x2F8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ACineCameraActor*                      CharacterSelect_Body_Main_0_GetAllTaggedActors_MERGED_RefProperty; // 0x300(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ACineCameraActor*                      CharacterSelect_Body_Main_GetAllTaggedActors_MERGED_RefProperty; // 0x308(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ACineCameraActor*                      CineCameraActor_50_GetAllTaggedActors_MERGED_RefProperty; // 0x310(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("MAP_CharacterCreation_C");

		return Clss;
	}

	TSet<class AActor*> GetAllTaggedActors(TSet<class AActor*> K2Node_MakeSet_Set);
	class AActor* GetCameraActorForCosmeticAsset(class UVAL_CharacterCustomizationItemBase* Item, enum class EVAL_CharacterBodyType BodyType, TSet<class UClass*> FacialCamClassTargets, class AActor* Actor, class AActor* Temp_object_Variable, bool CallFunc_IsValid_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue, TSet<class UClass*> K2Node_MakeVariable_MakeVariableOutput, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Set_Contains_ReturnValue, class AActor* CallFunc_GetDefaultCameraActor_ReturnValue, class AActor* Temp_object_Variable_1, enum class EVAL_CharacterBodyType Temp_byte_Variable, class AActor* K2Node_Select_Default);
	TSet<class AActor*> GetAllCameraActors(TSet<class AActor*> K2Node_MakeSet_Set);
	class AActor* GetDefaultCameraActor();
	class AValeriaCharacter* GetCharacter();
	void ReceiveBeginPlay();
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void ExecuteUbergraph_MAP_CharacterCreation(int32 EntryPoint, enum class EEndPlayReason K2Node_Event_EndPlayReason, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class UCharacterCustomManager* CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue, class UCharacterCustomManager* CallFunc_GetLocalPlayerSubSystemFromPlayerController_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class AVAL_CharacterRenderStudio* CallFunc_GetCharacterRenderStudio_ReturnValue, class AVAL_CharacterRenderStudio* CallFunc_GetCharacterRenderStudio_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_5);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
