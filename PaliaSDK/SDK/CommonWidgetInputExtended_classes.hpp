#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC8 (0x4A0 - 0x3D8)
// Class CommonWidgetInputExtended.CommonActivatableWidgetInputExtended
class UCommonActivatableWidgetInputExtended : public UCommonActivatableWidget
{
public:
	TMap<class UInputAction*, float>             StartOrCompleteSecondsMap;                         // 0x3D8(0x50)(Transient, Protected, NativeAccessSpecifierProtected)
	TSet<class UInputAction*>                    StartFlagMap;                                      // 0x428(0x50)(Transient, Protected, NativeAccessSpecifierProtected)
	bool                                         bIsPersistentBinding;                              // 0x478(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ECommonInputMode                  InputModeOverride;                                 // 0x479(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_4A1[0x16];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UInputMappingContext*>          AdditionInputMappings;                             // 0x490(0x10)(Edit, ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UCommonActivatableWidgetInputExtended* GetDefaultObj();

};

// 0x0 (0x14F0 - 0x14F0)
// Class CommonWidgetInputExtended.CommonButtonBaseInputExtended
class UCommonButtonBaseInputExtended : public UCommonButtonBase
{
public:

	static class UClass* StaticClass();
	static class UCommonButtonBaseInputExtended* GetDefaultObj();

};

// 0xB8 (0x358 - 0x2A0)
// Class CommonWidgetInputExtended.CommonUserWidgetInputExtended
class UCommonUserWidgetInputExtended : public UCommonUserWidget
{
public:
	TMap<class UInputAction*, float>             StartOrCompleteSecondsMap;                         // 0x2A0(0x50)(Transient, Protected, NativeAccessSpecifierProtected)
	TSet<class UInputAction*>                    StartFlagMap;                                      // 0x2F0(0x50)(Transient, Protected, NativeAccessSpecifierProtected)
	bool                                         bIsPersistentBinding;                              // 0x340(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ECommonInputMode                  InputModeOverride;                                 // 0x341(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_4A6[0x16];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCommonUserWidgetInputExtended* GetDefaultObj();

};

}


