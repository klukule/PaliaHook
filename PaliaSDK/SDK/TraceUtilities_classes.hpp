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
// Class TraceUtilities.TraceUtilLibrary
class UTraceUtilLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TraceUtilLibrary");
		return Clss;
	}

	void TraceMarkRegionStart(const class FString& InName);
	void TraceMarkRegionEnd(const class FString& InName);
	void TraceBookmark(const class FString& InName);
	bool ToggleChannel(const class FString& InChannelName, bool InEnabled);
	bool StopTracing();
	bool StartTraceToFile(const class FString& InFilename, TArray<class FString>& InChannels);
	bool StartTraceSendTo(const class FString& InTarget, TArray<class FString>& InChannels);
	bool ResumeTracing();
	bool PauseTracing();
	bool IsTracing();
	bool IsChannelEnabled(const class FString& InChannelName);
	TArray<class FString> GetEnabledChannels();
	TArray<class FString> GetAllChannels();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
