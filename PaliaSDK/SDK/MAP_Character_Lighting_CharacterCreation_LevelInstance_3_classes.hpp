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

// 0x10 (0x2A8 - 0x298)
// BlueprintGeneratedClass MAP_Character_Lighting_CharacterCreation_LevelInstance_3.MAP_Character_Lighting_CharacterCreation_C
class AMAP_Character_Lighting_CharacterCreation_C : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x298(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class ADirectionalLight*                     DirectionalLight_0_ExecuteUbergraph_MAP_Character_Lighting_CharacterCreation_RefProperty; // 0x2A0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MAP_Character_Lighting_CharacterCreation_C");
		return Clss;
	}

	void ReceiveBeginPlay();
	void ReceiveEndPlay(enum class EEndPlayReason InEndPlayReason);
	void ExecuteUbergraph_MAP_Character_Lighting_CharacterCreation(int32 InEntryPoint, const struct FVector& InCallFunc_GetForwardVector_ReturnValue, const struct FLinearColor& InCallFunc_GetLightColor_ReturnValue, const struct FLinearColor& InCallFunc_Conv_VectorToLinearColor_ReturnValue, enum class EEndPlayReason InK2Node_Event_EndPlayReason);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
