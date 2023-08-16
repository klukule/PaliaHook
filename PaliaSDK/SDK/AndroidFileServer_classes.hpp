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
// Class AndroidFileServer.AndroidFileServerBPLibrary
class UAndroidFileServerBPLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AndroidFileServerBPLibrary");
		return Clss;
	}

	bool StopFileServer(bool InbUSB, bool InbNetwork);
	bool StartFileServer(bool InbUSB, bool InbNetwork, int32 InPort);
	enum class EAFSActiveType IsFileServerRunning();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
