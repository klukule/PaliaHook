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

// 0x0 (0x0 - 0x0)
// Function S6Persist.S6PersistSubsystem.ProcessPersistQueue
struct US6PersistSubsystem_ProcessPersistQueue_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function S6Persist.S6PersistSubsystem.HandlePendingOpSetComplete
struct US6PersistSubsystem_HandlePendingOpSetComplete_Params
{
public:
	bool                                         bSuccess;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
