#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x2A8 - 0x298)
// BlueprintGeneratedClass MAP_Character_Lighting_CharacterCreation_LevelInstance_3.MAP_Character_Lighting_CharacterCreation_C
class AMAP_Character_Lighting_CharacterCreation_C : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x298(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class ADirectionalLight*                     DirectionalLight_0_ExecuteUbergraph_MAP_Character_Lighting_CharacterCreation_RefProperty; // 0x2A0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AMAP_Character_Lighting_CharacterCreation_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void ExecuteUbergraph_MAP_Character_Lighting_CharacterCreation(int32 EntryPoint, const struct FVector& CallFunc_GetForwardVector_ReturnValue, const struct FLinearColor& CallFunc_GetLightColor_ReturnValue, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue, enum class EEndPlayReason K2Node_Event_EndPlayReason);
};

}


