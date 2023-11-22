#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x44 (0x44 - 0x0)
// Function BPI_GameplayUIManagerTutorial_CM.BPI_GameplayUIManagerTutorial_CM_C.RedirectType
struct IBPI_GameplayUIManagerTutorial_CM_C_RedirectType_Params
{
public:
	class FName                                  DefaultFTUEPopinType;                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  Title;                                             // 0x8(0x18)(Parm, OutParm)
	class FText                                  Content;                                           // 0x20(0x18)(Parm, OutParm)
	bool                                         EnableFound;                                       // 0x38(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1978[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  TutorialModalName;                                 // 0x3C(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BPI_GameplayUIManagerTutorial_CM.BPI_GameplayUIManagerTutorial_CM_C.Redirect FTUEPopin Type
struct IBPI_GameplayUIManagerTutorial_CM_C_Redirect_FTUEPopin_Type_Params
{
public:
	class FName                                  DefaultFTUEPopinType;                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_FTUEPopin_CM_C*                   FTUEPopin;                                         // 0x8(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                  TutorialModalName;                                 // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x24 (0x24 - 0x0)
// Function BPI_GameplayUIManagerTutorial_CM.BPI_GameplayUIManagerTutorial_CM_C.RedirectTutorialModalType
struct IBPI_GameplayUIManagerTutorial_CM_C_RedirectTutorialModalType_Params
{
public:
	class FName                                  DefaultTutorialModalName;                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           OpenModalDelegate;                                 // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         bSuccess;                                          // 0x18(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1980[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  TutorialModalName;                                 // 0x1C(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


