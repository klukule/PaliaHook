#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ListItem_RequestableItemType.ListItem_RequestableItemType_C
// (None)

class UClass* UListItem_RequestableItemType_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ListItem_RequestableItemType_C");

	return Clss;
}


// ListItem_RequestableItemType_C ListItem_RequestableItemType.Default__ListItem_RequestableItemType_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UListItem_RequestableItemType_C* UListItem_RequestableItemType_C::GetDefaultObj()
{
	static class UListItem_RequestableItemType_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UListItem_RequestableItemType_C*>(UListItem_RequestableItemType_C::StaticClass()->DefaultObject);

	return Default;
}

}


