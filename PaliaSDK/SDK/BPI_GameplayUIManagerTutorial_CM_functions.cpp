#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_GameplayUIManagerTutorial_CM.BPI_GameplayUIManagerTutorial_CM_C
// (None)

class UClass* IBPI_GameplayUIManagerTutorial_CM_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_GameplayUIManagerTutorial_CM_C");

	return Clss;
}


// BPI_GameplayUIManagerTutorial_CM_C BPI_GameplayUIManagerTutorial_CM.Default__BPI_GameplayUIManagerTutorial_CM_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_GameplayUIManagerTutorial_CM_C* IBPI_GameplayUIManagerTutorial_CM_C::GetDefaultObj()
{
	static class IBPI_GameplayUIManagerTutorial_CM_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_GameplayUIManagerTutorial_CM_C*>(IBPI_GameplayUIManagerTutorial_CM_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_GameplayUIManagerTutorial_CM.BPI_GameplayUIManagerTutorial_CM_C.RedirectType
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FName                        DefaultFTUEPopinType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Title                                                            (Parm, OutParm)
// class FText                        Content                                                          (Parm, OutParm)
// bool                               EnableFound                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        TutorialModalName                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_GameplayUIManagerTutorial_CM_C::RedirectType(class FName DefaultFTUEPopinType, class FText* Title, class FText* Content, bool* EnableFound, class FName TutorialModalName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_GameplayUIManagerTutorial_CM_C", "RedirectType");

	Params::IBPI_GameplayUIManagerTutorial_CM_C_RedirectType_Params Parms{};

	Parms.DefaultFTUEPopinType = DefaultFTUEPopinType;
	Parms.TutorialModalName = TutorialModalName;

	UObject::ProcessEvent(Func, &Parms);

	if (Title != nullptr)
		*Title = Parms.Title;

	if (Content != nullptr)
		*Content = Parms.Content;

	if (EnableFound != nullptr)
		*EnableFound = Parms.EnableFound;

}


// Function BPI_GameplayUIManagerTutorial_CM.BPI_GameplayUIManagerTutorial_CM_C.Redirect FTUEPopin Type
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        DefaultFTUEPopinType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_FTUEPopin_CM_C*         FTUEPopin                                                        (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                        TutorialModalName                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_GameplayUIManagerTutorial_CM_C::Redirect_FTUEPopin_Type(class FName DefaultFTUEPopinType, class UWBP_FTUEPopin_CM_C** FTUEPopin, class FName TutorialModalName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_GameplayUIManagerTutorial_CM_C", "Redirect FTUEPopin Type");

	Params::IBPI_GameplayUIManagerTutorial_CM_C_Redirect_FTUEPopin_Type_Params Parms{};

	Parms.DefaultFTUEPopinType = DefaultFTUEPopinType;
	Parms.TutorialModalName = TutorialModalName;

	UObject::ProcessEvent(Func, &Parms);

	if (FTUEPopin != nullptr)
		*FTUEPopin = Parms.FTUEPopin;

}


// Function BPI_GameplayUIManagerTutorial_CM.BPI_GameplayUIManagerTutorial_CM_C.RedirectTutorialModalType
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FName                        DefaultTutorialModalName                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 OpenModalDelegate                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               bSuccess                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        TutorialModalName                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBPI_GameplayUIManagerTutorial_CM_C::RedirectTutorialModalType(class FName DefaultTutorialModalName, FDelegateProperty_ OpenModalDelegate, bool* bSuccess, class FName TutorialModalName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_GameplayUIManagerTutorial_CM_C", "RedirectTutorialModalType");

	Params::IBPI_GameplayUIManagerTutorial_CM_C_RedirectTutorialModalType_Params Parms{};

	Parms.DefaultTutorialModalName = DefaultTutorialModalName;
	Parms.OpenModalDelegate = OpenModalDelegate;
	Parms.TutorialModalName = TutorialModalName;

	UObject::ProcessEvent(Func, &Parms);

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;

}

}


