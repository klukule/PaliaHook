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
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("AndroidFileServerBPLibrary");

		return Clss;
	}

	bool StopFileServer(bool bUSB, bool bNetwork);
	bool StartFileServer(bool bUSB, bool bNetwork, int32 Port);
	enum class EAFSActiveType IsFileServerRunning();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
