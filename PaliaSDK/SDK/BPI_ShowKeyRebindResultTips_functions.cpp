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


// Function BPI_ShowKeyRebindResultTips.BPI_ShowKeyRebindResultTips_C.UpdateKeyRebindTips
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        ConflictActionNameDesc                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        RebindActionNameDesc                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// TArray<class UTexture2D*>          InputKeyIcons                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void IBPI_ShowKeyRebindResultTips_C::UpdateKeyRebindTips(class FText InConflictActionNameDesc, class FText InRebindActionNameDesc, TArray<class UTexture2D*>& InInputKeyIcons)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_ShowKeyRebindResultTips_C", "UpdateKeyRebindTips");

	Params::IBPI_ShowKeyRebindResultTips_C_UpdateKeyRebindTips_Params Parms{};

	Parms.ConflictActionNameDesc = InConflictActionNameDesc;
	Parms.RebindActionNameDesc = InRebindActionNameDesc;
	Parms.InputKeyIcons = InInputKeyIcons;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
