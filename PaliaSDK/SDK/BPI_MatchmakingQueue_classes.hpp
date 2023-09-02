#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPI_MatchmakingQueue.BPI_MatchmakingQueue_C
class IBPI_MatchmakingQueue_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBPI_MatchmakingQueue_C* GetDefaultObj();

	void ResetQueue();
	void UpdateNumber(int32 Number);
};

}


