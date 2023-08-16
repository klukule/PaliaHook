#pragma once

// Dumped with Dumper-7!

#include "SDK.hpp"

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function ValeriaDTOs.VALDTOS_MetaCharacterCustomizationFuncLib.MetaCharacterFormat_EqualEqual
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVALDTOS_MetaCharacterFormatA                                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FVALDTOS_MetaCharacterFormatB                                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVALDTOS_MetaCharacterCustomizationFuncLib::MetaCharacterFormat_EqualEqual(struct FVALDTOS_MetaCharacterFormat& InA, struct FVALDTOS_MetaCharacterFormat& InB)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALDTOS_MetaCharacterCustomizationFuncLib", "MetaCharacterFormat_EqualEqual");

	Params::UVALDTOS_MetaCharacterCustomizationFuncLib_MetaCharacterFormat_EqualEqual_Params Parms{};

	Parms.A = InA;
	Parms.B = InB;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ValeriaDTOs.VALDTOS_MetaCharacterCustomizationFuncLib.CharacterCustomizationOptions_EqualEqual
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVALDTOS_CharacterCustomizationLoadout_PersistDTO_VolatileA                                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FVALDTOS_CharacterCustomizationLoadout_PersistDTO_VolatileB                                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVALDTOS_MetaCharacterCustomizationFuncLib::CharacterCustomizationOptions_EqualEqual(struct FVALDTOS_CharacterCustomizationLoadout_PersistDTO_Volatile& InA, struct FVALDTOS_CharacterCustomizationLoadout_PersistDTO_Volatile& InB)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALDTOS_MetaCharacterCustomizationFuncLib", "CharacterCustomizationOptions_EqualEqual");

	Params::UVALDTOS_MetaCharacterCustomizationFuncLib_CharacterCustomizationOptions_EqualEqual_Params Parms{};

	Parms.A = InA;
	Parms.B = InB;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ValeriaDTOs.VALDTOS_MetaCharacterCustomizationFuncLib.CharacterCreationOptions_EqualEqual
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVALDTOS_CharacterCustomizationLoadout_PersistDTO_StableA                                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FVALDTOS_CharacterCustomizationLoadout_PersistDTO_StableB                                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVALDTOS_MetaCharacterCustomizationFuncLib::CharacterCreationOptions_EqualEqual(struct FVALDTOS_CharacterCustomizationLoadout_PersistDTO_Stable& InA, struct FVALDTOS_CharacterCustomizationLoadout_PersistDTO_Stable& InB)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VALDTOS_MetaCharacterCustomizationFuncLib", "CharacterCreationOptions_EqualEqual");

	Params::UVALDTOS_MetaCharacterCustomizationFuncLib_CharacterCreationOptions_EqualEqual_Params Parms{};

	Parms.A = InA;
	Parms.B = InB;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
