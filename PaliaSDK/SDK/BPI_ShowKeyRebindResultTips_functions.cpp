#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_ShowKeyRebindResultTips.BPI_ShowKeyRebindResultTips_C
// (None)

class UClass* IBPI_ShowKeyRebindResultTips_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_ShowKeyRebindResultTips_C");

	return Clss;
}


// BPI_ShowKeyRebindResultTips_C BPI_ShowKeyRebindResultTips.Default__BPI_ShowKeyRebindResultTips_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_ShowKeyRebindResultTips_C* IBPI_ShowKeyRebindResultTips_C::GetDefaultObj()
{
	static class IBPI_ShowKeyRebindResultTips_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_ShowKeyRebindResultTips_C*>(IBPI_ShowKeyRebindResultTips_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_ShowKeyRebindResultTips.BPI_ShowKeyRebindResultTips_C.UpdateKeyRebindTips
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        ConflictActionNameDesc                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        RebindActionNameDesc                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// TArray<class UTexture2D*>          InputKeyIcons                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void IBPI_ShowKeyRebindResultTips_C::UpdateKeyRebindTips(class FText ConflictActionNameDesc, class FText RebindActionNameDesc, TArray<class UTexture2D*>& InputKeyIcons)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_ShowKeyRebindResultTips_C", "UpdateKeyRebindTips");

	Params::IBPI_ShowKeyRebindResultTips_C_UpdateKeyRebindTips_Params Parms{};

	Parms.ConflictActionNameDesc = ConflictActionNameDesc;
	Parms.RebindActionNameDesc = RebindActionNameDesc;
	Parms.InputKeyIcons = InputKeyIcons;

	UObject::ProcessEvent(Func, &Parms);

}

}


