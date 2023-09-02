#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_Cooking_OneOff_RecipeSuccess.GA_Cooking_OneOff_RecipeSuccess_C
// (None)

class UClass* UGA_Cooking_OneOff_RecipeSuccess_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_Cooking_OneOff_RecipeSuccess_C");

	return Clss;
}


// GA_Cooking_OneOff_RecipeSuccess_C GA_Cooking_OneOff_RecipeSuccess.Default__GA_Cooking_OneOff_RecipeSuccess_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_Cooking_OneOff_RecipeSuccess_C* UGA_Cooking_OneOff_RecipeSuccess_C::GetDefaultObj()
{
	static class UGA_Cooking_OneOff_RecipeSuccess_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_Cooking_OneOff_RecipeSuccess_C*>(UGA_Cooking_OneOff_RecipeSuccess_C::StaticClass()->DefaultObject);

	return Default;
}

}


