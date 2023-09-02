#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class ValeriaDTOs.VALDTOS_MetaCharacterCustomizationFuncLib
// (None)

class UClass* UVALDTOS_MetaCharacterCustomizationFuncLib::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VALDTOS_MetaCharacterCustomizationFuncLib");

	return Clss;
}


// VALDTOS_MetaCharacterCustomizationFuncLib ValeriaDTOs.Default__VALDTOS_MetaCharacterCustomizationFuncLib
// (Public, ClassDefaultObject, ArchetypeObject)

class UVALDTOS_MetaCharacterCustomizationFuncLib* UVALDTOS_MetaCharacterCustomizationFuncLib::GetDefaultObj()
{
	static class UVALDTOS_MetaCharacterCustomizationFuncLib* Default = nullptr;

	if (!Default)
		Default = static_cast<UVALDTOS_MetaCharacterCustomizationFuncLib*>(UVALDTOS_MetaCharacterCustomizationFuncLib::StaticClass()->DefaultObject);

	return Default;
}


// Function ValeriaDTOs.VALDTOS_MetaCharacterCustomizationFuncLib.MetaCharacterFormat_EqualEqual
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVALDTOS_MetaCharacterFormatA                                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FVALDTOS_MetaCharacterFormatB                                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVALDTOS_MetaCharacterCustomizationFuncLib::MetaCharacterFormat_EqualEqual(struct FVALDTOS_MetaCharacterFormat& A, struct FVALDTOS_MetaCharacterFormat& B)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALDTOS_MetaCharacterCustomizationFuncLib", "MetaCharacterFormat_EqualEqual");

	Params::UVALDTOS_MetaCharacterCustomizationFuncLib_MetaCharacterFormat_EqualEqual_Params Parms{};

	Parms.A = A;
	Parms.B = B;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ValeriaDTOs.VALDTOS_MetaCharacterCustomizationFuncLib.CharacterCustomizationOptions_EqualEqual
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVALDTOS_CharacterCustomizationLoadout_PersistDTO_VolatileA                                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FVALDTOS_CharacterCustomizationLoadout_PersistDTO_VolatileB                                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVALDTOS_MetaCharacterCustomizationFuncLib::CharacterCustomizationOptions_EqualEqual(struct FVALDTOS_CharacterCustomizationLoadout_PersistDTO_Volatile& A, struct FVALDTOS_CharacterCustomizationLoadout_PersistDTO_Volatile& B)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALDTOS_MetaCharacterCustomizationFuncLib", "CharacterCustomizationOptions_EqualEqual");

	Params::UVALDTOS_MetaCharacterCustomizationFuncLib_CharacterCustomizationOptions_EqualEqual_Params Parms{};

	Parms.A = A;
	Parms.B = B;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ValeriaDTOs.VALDTOS_MetaCharacterCustomizationFuncLib.CharacterCreationOptions_EqualEqual
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVALDTOS_CharacterCustomizationLoadout_PersistDTO_StableA                                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FVALDTOS_CharacterCustomizationLoadout_PersistDTO_StableB                                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVALDTOS_MetaCharacterCustomizationFuncLib::CharacterCreationOptions_EqualEqual(struct FVALDTOS_CharacterCustomizationLoadout_PersistDTO_Stable& A, struct FVALDTOS_CharacterCustomizationLoadout_PersistDTO_Stable& B)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALDTOS_MetaCharacterCustomizationFuncLib", "CharacterCreationOptions_EqualEqual");

	Params::UVALDTOS_MetaCharacterCustomizationFuncLib_CharacterCreationOptions_EqualEqual_Params Parms{};

	Parms.A = A;
	Parms.B = B;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


