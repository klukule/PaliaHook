#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class CommonWidgetInputExtended.CommonActivatableWidgetInputExtended
// (None)

class UClass* UCommonActivatableWidgetInputExtended::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CommonActivatableWidgetInputExtended");

	return Clss;
}


// CommonActivatableWidgetInputExtended CommonWidgetInputExtended.Default__CommonActivatableWidgetInputExtended
// (Public, ClassDefaultObject, ArchetypeObject)

class UCommonActivatableWidgetInputExtended* UCommonActivatableWidgetInputExtended::GetDefaultObj()
{
	static class UCommonActivatableWidgetInputExtended* Default = nullptr;

	if (!Default)
		Default = static_cast<UCommonActivatableWidgetInputExtended*>(UCommonActivatableWidgetInputExtended::StaticClass()->DefaultObject);

	return Default;
}


// Class CommonWidgetInputExtended.CommonButtonBaseInputExtended
// (None)

class UClass* UCommonButtonBaseInputExtended::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CommonButtonBaseInputExtended");

	return Clss;
}


// CommonButtonBaseInputExtended CommonWidgetInputExtended.Default__CommonButtonBaseInputExtended
// (Public, ClassDefaultObject, ArchetypeObject)

class UCommonButtonBaseInputExtended* UCommonButtonBaseInputExtended::GetDefaultObj()
{
	static class UCommonButtonBaseInputExtended* Default = nullptr;

	if (!Default)
		Default = static_cast<UCommonButtonBaseInputExtended*>(UCommonButtonBaseInputExtended::StaticClass()->DefaultObject);

	return Default;
}


// Class CommonWidgetInputExtended.CommonUserWidgetInputExtended
// (None)

class UClass* UCommonUserWidgetInputExtended::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CommonUserWidgetInputExtended");

	return Clss;
}


// CommonUserWidgetInputExtended CommonWidgetInputExtended.Default__CommonUserWidgetInputExtended
// (Public, ClassDefaultObject, ArchetypeObject)

class UCommonUserWidgetInputExtended* UCommonUserWidgetInputExtended::GetDefaultObj()
{
	static class UCommonUserWidgetInputExtended* Default = nullptr;

	if (!Default)
		Default = static_cast<UCommonUserWidgetInputExtended*>(UCommonUserWidgetInputExtended::StaticClass()->DefaultObject);

	return Default;
}

}


