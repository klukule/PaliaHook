#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MAP_CharacterCreation_Sequence_LevelInstance_2.MAP_CharacterCreation_Sequence_C
// (Actor)

class UClass* AMAP_CharacterCreation_Sequence_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MAP_CharacterCreation_Sequence_C");

	return Clss;
}


// MAP_CharacterCreation_Sequence_C MAP_CharacterCreation_Sequence_LevelInstance_2.Default__MAP_CharacterCreation_Sequence_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AMAP_CharacterCreation_Sequence_C* AMAP_CharacterCreation_Sequence_C::GetDefaultObj()
{
	static class AMAP_CharacterCreation_Sequence_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AMAP_CharacterCreation_Sequence_C*>(AMAP_CharacterCreation_Sequence_C::StaticClass()->DefaultObject);

	return Default;
}

}


