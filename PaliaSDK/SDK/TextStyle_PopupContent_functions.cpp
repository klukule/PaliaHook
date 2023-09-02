#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle_PopupContent.TextStyle_PopupContent_C
// (None)

class UClass* UTextStyle_PopupContent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle_PopupContent_C");

	return Clss;
}


// TextStyle_PopupContent_C TextStyle_PopupContent.Default__TextStyle_PopupContent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyle_PopupContent_C* UTextStyle_PopupContent_C::GetDefaultObj()
{
	static class UTextStyle_PopupContent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyle_PopupContent_C*>(UTextStyle_PopupContent_C::StaticClass()->DefaultObject);

	return Default;
}

}


