#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PhotographyFunctionLibrary.PhotographyFunctionLibrary_C
// (None)

class UClass* UPhotographyFunctionLibrary_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PhotographyFunctionLibrary_C");

	return Clss;
}


// PhotographyFunctionLibrary_C PhotographyFunctionLibrary.Default__PhotographyFunctionLibrary_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPhotographyFunctionLibrary_C* UPhotographyFunctionLibrary_C::GetDefaultObj()
{
	static class UPhotographyFunctionLibrary_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPhotographyFunctionLibrary_C*>(UPhotographyFunctionLibrary_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PhotographyFunctionLibrary.PhotographyFunctionLibrary_C.OpenPhotoCameraScreen
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           OwningPlayer                                                     (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_ClassDynamicCast_AsUser_Widget                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class US6UI_StateUserWidget*       K2Node_DynamicCast_AsS6UI_State_User_Widget                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPhotographyFunctionLibrary_C::OpenPhotoCameraScreen(class APlayerController*& OwningPlayer, class UObject* __WorldContext, class UClass* K2Node_ClassDynamicCast_AsUser_Widget, bool K2Node_ClassDynamicCast_bSuccess, class UUserWidget* CallFunc_Create_ReturnValue, class US6UI_StateUserWidget* K2Node_DynamicCast_AsS6UI_State_User_Widget, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotographyFunctionLibrary_C", "OpenPhotoCameraScreen");

	Params::UPhotographyFunctionLibrary_C_OpenPhotoCameraScreen_Params Parms{};

	Parms.OwningPlayer = OwningPlayer;
	Parms.__WorldContext = __WorldContext;
	Parms.K2Node_ClassDynamicCast_AsUser_Widget = K2Node_ClassDynamicCast_AsUser_Widget;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_DynamicCast_AsS6UI_State_User_Widget = K2Node_DynamicCast_AsS6UI_State_User_Widget;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


