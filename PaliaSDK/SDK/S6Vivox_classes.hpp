#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xE0 (0x110 - 0x30)
// Class S6Vivox.S6VivoxSubsystem
class US6VivoxSubsystem : public ULocalPlayerSubsystem
{
public:
	uint8                                        Pad_5A1[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnLoggedIn;                                        // 0x38(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnLoginFailed;                                     // 0x48(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnLoggedOut;                                       // 0x58(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnChannelMsgReceived;                              // 0x68(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnDirectMsgReceived;                               // 0x78(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_5A3[0x18];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS6Vivox_AccountId                    VivoxAccountId;                                    // 0xA0(0x48)(Transient, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_5A4[0x28];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class US6VivoxSubsystem* GetDefaultObj();

};

}


