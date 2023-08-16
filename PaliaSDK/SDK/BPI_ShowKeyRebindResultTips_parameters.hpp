#pragma once

// Dumped with Dumper-7!

#include "SDK.hpp"

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x40 - 0x0)
// Function BPI_ShowKeyRebindResultTips.BPI_ShowKeyRebindResultTips_C.UpdateKeyRebindTips
struct IBPI_ShowKeyRebindResultTips_C_UpdateKeyRebindTips_Params
{
public:
	class FText                                  ConflictActionNameDesc;                            // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                  RebindActionNameDesc;                              // 0x18(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	TArray<class UTexture2D*>                    InputKeyIcons;                                     // 0x30(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
