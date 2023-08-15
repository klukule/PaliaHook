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

// 0x10 (0x38 - 0x28)
// Class DeveloperSettings.DeveloperSettings
class UDeveloperSettings : public UObject
{
public:
	uint8                                        Pad_35E[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("DeveloperSettings");

		return Clss;
	}

};

// 0x0 (0x38 - 0x38)
// Class DeveloperSettings.DeveloperSettingsBackedByCVars
class UDeveloperSettingsBackedByCVars : public UDeveloperSettings
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("DeveloperSettingsBackedByCVars");

		return Clss;
	}

};

// 0x18 (0x40 - 0x28)
// Class DeveloperSettings.PlatformSettings
class UPlatformSettings : public UObject
{
public:
	uint8                                        Pad_362[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("PlatformSettings");

		return Clss;
	}

};

// 0x58 (0x80 - 0x28)
// Class DeveloperSettings.PlatformSettingsManager
class UPlatformSettingsManager : public UObject
{
public:
	TMap<TSubclassOf<class UPlatformSettings>, struct FPlatformSettingsInstances> SettingsMap;                                       // 0x28(0x50)(Transient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_364[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("PlatformSettingsManager");

		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
