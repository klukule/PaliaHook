#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ListItem_Request.ListItem_Request_C
// (None)

class UClass* UListItem_Request_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ListItem_Request_C");

	return Clss;
}


// ListItem_Request_C ListItem_Request.Default__ListItem_Request_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UListItem_Request_C* UListItem_Request_C::GetDefaultObj()
{
	static class UListItem_Request_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UListItem_Request_C*>(UListItem_Request_C::StaticClass()->DefaultObject);

	return Default;
}

}


