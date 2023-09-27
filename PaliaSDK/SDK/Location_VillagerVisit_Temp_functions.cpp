#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Location_VillagerVisit_Temp.Location_VillagerVisit_Temp_C
// (Actor)

class UClass* ALocation_VillagerVisit_Temp_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Location_VillagerVisit_Temp_C");

	return Clss;
}


// Location_VillagerVisit_Temp_C Location_VillagerVisit_Temp.Default__Location_VillagerVisit_Temp_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ALocation_VillagerVisit_Temp_C* ALocation_VillagerVisit_Temp_C::GetDefaultObj()
{
	static class ALocation_VillagerVisit_Temp_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ALocation_VillagerVisit_Temp_C*>(ALocation_VillagerVisit_Temp_C::StaticClass()->DefaultObject);

	return Default;
}

}


