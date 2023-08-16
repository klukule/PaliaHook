#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x40 - 0x0)
// Function ListEntry_CharacterCustomization_FilterOption.ListEntry_CharacterCustomization_FilterOption_C.OnOptionSelected__DelegateSignature
struct UListEntry_CharacterCustomization_FilterOption_C_OnOptionSelected__DelegateSignature_Params
{
public:
	bool                                         IsSelected;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1F39[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVAL_CharacterCustomization_CosmeticTagFilterStruct SelectedCosmeticTag;                               // 0x8(0x38)(BlueprintVisible, BlueprintReadOnly, Parm)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
