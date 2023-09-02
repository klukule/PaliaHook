#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class S6Sentry.S6SentryConfig
// (None)

class UClass* US6SentryConfig::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("S6SentryConfig");

	return Clss;
}


// S6SentryConfig S6Sentry.Default__S6SentryConfig
// (Public, ClassDefaultObject, ArchetypeObject)

class US6SentryConfig* US6SentryConfig::GetDefaultObj()
{
	static class US6SentryConfig* Default = nullptr;

	if (!Default)
		Default = static_cast<US6SentryConfig*>(US6SentryConfig::StaticClass()->DefaultObject);

	return Default;
}

}


