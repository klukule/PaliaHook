#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class S6Telemetry.S6Telemetry
// (None)

class UClass* US6Telemetry::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("S6Telemetry");

	return Clss;
}


// S6Telemetry S6Telemetry.Default__S6Telemetry
// (Public, ClassDefaultObject, ArchetypeObject)

class US6Telemetry* US6Telemetry::GetDefaultObj()
{
	static class US6Telemetry* Default = nullptr;

	if (!Default)
		Default = static_cast<US6Telemetry*>(US6Telemetry::StaticClass()->DefaultObject);

	return Default;
}

}


