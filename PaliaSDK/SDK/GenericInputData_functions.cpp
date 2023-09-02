#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GenericInputData.GenericInputData_C
// (None)

class UClass* UGenericInputData_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GenericInputData_C");

	return Clss;
}


// GenericInputData_C GenericInputData.Default__GenericInputData_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGenericInputData_C* UGenericInputData_C::GetDefaultObj()
{
	static class UGenericInputData_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGenericInputData_C*>(UGenericInputData_C::StaticClass()->DefaultObject);

	return Default;
}

}


