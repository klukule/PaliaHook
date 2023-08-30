#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ES6Vivox_LoginState : uint8
{
	ES6Vivox_LoginState__LoggedOut = 0,
	ES6Vivox_LoginState__LoggingIn = 1,
	ES6Vivox_LoginState__LoggedIn  = 2,
	ES6Vivox_LoginState__LoggingOut = 3,
	ES6Vivox_LoginState__ES6Vivox_MAX = 4,
};

enum class ES6Vivox_OperationType : uint8
{
	ES6Vivox_OperationType__ChannelConnect = 0,
	ES6Vivox_OperationType__ChannelDisconnect = 1,
	ES6Vivox_OperationType__ChannelSendTextMsg = 2,
	ES6Vivox_OperationType__DirectTextMsg = 3,
	ES6Vivox_OperationType__ES6Vivox_MAX = 4,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x48 - 0x0)
// ScriptStruct S6VivoxShared.S6Vivox_AccountId
struct FS6Vivox_AccountId
{
public:
	class FString                                Domain;                                            // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Issuer;                                            // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                UniqueId;                                          // 0x20(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                DisplayName;                                       // 0x30(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ES6Vivox_LoginState               LoginState;                                        // 0x40(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_24F8[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x98 (0x98 - 0x0)
// ScriptStruct S6VivoxShared.S6Vivox_Msg
struct FS6Vivox_Msg
{
public:
	struct FS6Vivox_AccountId                    Sender;                                            // 0x0(0x48)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NativeAccessSpecifierPublic)
	struct FS6Vivox_AccountId                    Recipient;                                         // 0x48(0x48)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NativeAccessSpecifierPublic)
	struct FDateTime                             Timestamp;                                         // 0x90(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0xA8 - 0x98)
// ScriptStruct S6VivoxShared.S6Vivox_TextMsg
struct FS6Vivox_TextMsg : public FS6Vivox_Msg
{
public:
	class FString                                Msg;                                               // 0x98(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0xB8 - 0xA8)
// ScriptStruct S6VivoxShared.S6Vivox_ChannelTextMsg
struct FS6Vivox_ChannelTextMsg : public FS6Vivox_TextMsg
{
public:
	class FString                                ChannelName;                                       // 0xA8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
