#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass TeleporterInterface.TeleporterInterface_C
class ITeleporterInterface_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class ITeleporterInterface_C* GetDefaultObj();

	void GetTeleportEntrance(class UTeleportFromComponent** TeleportEntrance);
	void GetTeleporterExitNode(class UTeleportToComponent** TeleporterExitNode);
};

}


