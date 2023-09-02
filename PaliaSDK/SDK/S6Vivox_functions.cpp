#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class S6Vivox.S6VivoxSubsystem
// (None)

class UClass* US6VivoxSubsystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("S6VivoxSubsystem");

	return Clss;
}


// S6VivoxSubsystem S6Vivox.Default__S6VivoxSubsystem
// (Public, ClassDefaultObject, ArchetypeObject)

class US6VivoxSubsystem* US6VivoxSubsystem::GetDefaultObj()
{
	static class US6VivoxSubsystem* Default = nullptr;

	if (!Default)
		Default = static_cast<US6VivoxSubsystem*>(US6VivoxSubsystem::StaticClass()->DefaultObject);

	return Default;
}

}


