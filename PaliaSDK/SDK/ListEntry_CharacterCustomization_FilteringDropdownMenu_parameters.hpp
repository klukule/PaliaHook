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

// 0x9 (0x9 - 0x0)
// Function ListEntry_CharacterCustomization_FilteringDropdownMenu.ListEntry_CharacterCustomization_FilteringDropdownMenu_C.HasTagOptions
struct UListEntry_CharacterCustomization_FilteringDropdownMenu_C_HasTagOptions_Params
{
public:
	bool                                         HasOptions;                                        // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_19E5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function ListEntry_CharacterCustomization_FilteringDropdownMenu.ListEntry_CharacterCustomization_FilteringDropdownMenu_C.OnSelectionChanged__DelegateSignature
struct UListEntry_CharacterCustomization_FilteringDropdownMenu_C_OnSelectionChanged__DelegateSignature_Params
{
public:
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
