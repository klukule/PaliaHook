#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_Cooking_OneOff_RecipeHugeSuccess.GA_Cooking_OneOff_RecipeHugeSuccess_C
// (None)

class UClass* UGA_Cooking_OneOff_RecipeHugeSuccess_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_Cooking_OneOff_RecipeHugeSuccess_C");

	return Clss;
}


// GA_Cooking_OneOff_RecipeHugeSuccess_C GA_Cooking_OneOff_RecipeHugeSuccess.Default__GA_Cooking_OneOff_RecipeHugeSuccess_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_Cooking_OneOff_RecipeHugeSuccess_C* UGA_Cooking_OneOff_RecipeHugeSuccess_C::GetDefaultObj()
{
	static class UGA_Cooking_OneOff_RecipeHugeSuccess_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_Cooking_OneOff_RecipeHugeSuccess_C*>(UGA_Cooking_OneOff_RecipeHugeSuccess_C::StaticClass()->DefaultObject);

	return Default;
}

}


