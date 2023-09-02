#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class S6MQTT.S6MQTTClientSettings
// (None)

class UClass* US6MQTTClientSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("S6MQTTClientSettings");

	return Clss;
}


// S6MQTTClientSettings S6MQTT.Default__S6MQTTClientSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class US6MQTTClientSettings* US6MQTTClientSettings::GetDefaultObj()
{
	static class US6MQTTClientSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<US6MQTTClientSettings*>(US6MQTTClientSettings::StaticClass()->DefaultObject);

	return Default;
}

}


