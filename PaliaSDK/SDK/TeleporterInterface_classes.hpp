#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

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

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("TeleporterInterface_C");

		return Clss;
	}

	void GetTeleportEntrance(class UTeleportFromComponent** TeleportEntrance);
	void GetTeleporterExitNode(class UTeleportToComponent** TeleporterExitNode);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
