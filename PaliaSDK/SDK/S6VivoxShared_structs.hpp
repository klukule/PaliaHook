#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ES6Vivox_LoginState : uint8
{
	LoggedOut                      = 0,
	LoggingIn                      = 1,
	LoggedIn                       = 2,
	LoggingOut                     = 3,
	ES6Vivox_MAX                   = 4,
};

enum class ES6Vivox_OperationType : uint8
{
	ChannelConnect                 = 0,
	ChannelDisconnect              = 1,
	ChannelSendTextMsg             = 2,
	DirectTextMsg                  = 3,
	ES6Vivox_MAX                   = 4,
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
	uint8                                        Pad_171[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
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

// 0x30 (0x30 - 0x0)
// ScriptStruct S6VivoxShared.S6Vivox_MsgPayload
struct FS6Vivox_MsgPayload
{
public:
	class FString                                Msg;                                               // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                StanzaName;                                        // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                StanzaBody;                                        // 0x20(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0xC8 - 0x98)
// ScriptStruct S6VivoxShared.S6Vivox_TextMsg
struct FS6Vivox_TextMsg : public FS6Vivox_Msg
{
public:
	struct FS6Vivox_MsgPayload                   Message;                                           // 0x98(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NativeAccessSpecifierPublic)
};

// 0x10 (0xD8 - 0xC8)
// ScriptStruct S6VivoxShared.S6Vivox_ChannelTextMsg
struct FS6Vivox_ChannelTextMsg : public FS6Vivox_TextMsg
{
public:
	class FString                                ChannelName;                                       // 0xC8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}


