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
// Class AudioLinkEngine.AudioLinkBlueprintInterface
class IAudioLinkBlueprintInterface : public IInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AudioLinkBlueprintInterface");
		return Clss;
	}

	void StopLink();
	void SetLinkSound(class USoundBase* InNewSound);
	void PlayLink(float InStartTime);
	bool IsLinkPlaying();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
