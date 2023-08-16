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

// 0x8 (0x8 - 0x0)
// Function TeleporterInterface.TeleporterInterface_C.GetTeleportEntrance
struct ITeleporterInterface_C_GetTeleportEntrance_Params
{
public:
	class UTeleportFromComponent*                TeleportEntrance;                                  // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function TeleporterInterface.TeleporterInterface_C.GetTeleporterExitNode
struct ITeleporterInterface_C_GetTeleporterExitNode_Params
{
public:
	class UTeleportToComponent*                  TeleporterExitNode;                                // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
