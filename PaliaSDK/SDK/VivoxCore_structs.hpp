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

enum class EDeviceType : uint8
{
	DeviceType__NullDevice         = 0,
	DeviceType__SpecificDevice     = 1,
	DeviceType__DefaultSystemDevice = 2,
	DeviceType__DefaultCommunicationDevice = 3,
	DeviceType__DeviceType_MAX     = 4,
};

enum class EAudioFadeModel : uint8
{
	EAudioFadeModel__InverseByDistance = 0,
	EAudioFadeModel__LinearByDistance = 1,
	EAudioFadeModel__ExponentialByDistance = 2,
	EAudioFadeModel__EAudioFadeModel_MAX = 3,
};

enum class EChannelType : uint8
{
	ChannelType__NonPositional     = 0,
	ChannelType__Positional        = 1,
	ChannelType__Echo              = 2,
	ChannelType__ChannelType_MAX   = 3,
};

enum class EConnectionState : uint8
{
	ConnectionState__Disconnected  = 0,
	ConnectionState__Connecting    = 1,
	ConnectionState__Connected     = 2,
	ConnectionState__Disconnecting = 3,
	ConnectionState__ConnectionState_MAX = 4,
};

enum class ELoginState : uint8
{
	LoginState__LoggedOut          = 0,
	LoginState__LoggingIn          = 1,
	LoginState__LoggedIn           = 2,
	LoginState__LoggingOut         = 3,
	LoginState__LoginState_MAX     = 4,
};

enum class ESubscriptionMode : uint8
{
	SubscriptionMode__Accept       = 0,
	SubscriptionMode__Block        = 1,
	SubscriptionMode__Defer        = 2,
	SubscriptionMode__SubscriptionMode_MAX = 3,
};

enum class ESubscriptionReply : uint8
{
	SubscriptionReply__Allow       = 0,
	SubscriptionReply__Block       = 1,
	SubscriptionReply__SubscriptionReply_MAX = 2,
};

enum class ETransmissionMode : uint8
{
	TransmissionMode__None         = 0,
	TransmissionMode__Single       = 1,
	TransmissionMode__All          = 2,
	TransmissionMode__TransmissionMode_MAX = 3,
};

enum class EParticipantSpeakingUpdateRate : uint8
{
	ParticipantSpeakingUpdateRate__StateChange = 0,
	ParticipantSpeakingUpdateRate__Never = 1,
	ParticipantSpeakingUpdateRate__Update1Hz = 2,
	ParticipantSpeakingUpdateRate__Update5Hz = 3,
	ParticipantSpeakingUpdateRate__Update10Hz = 4,
	ParticipantSpeakingUpdateRate__ParticipantSpeakingUpdateRate_MAX = 5,
};

enum class ETTSDestination : uint8
{
	TTSDestination__Default        = 0,
	TTSDestination__RemoteTransmission = 0,
	TTSDestination__LocalPlayback  = 1,
	TTSDestination__RemoteTransmissionWithLocalPlayback = 2,
	TTSDestination__QueuedRemoteTransmission = 3,
	TTSDestination__QueuedLocalPlayback = 4,
	TTSDestination__QueuedRemoteTransmissionWithLocalPlayback = 5,
	TTSDestination__ScreenReader   = 6,
	TTSDestination__TTSDestination_MAX = 7,
};

enum class ETTSMessageState : uint8
{
	TTSMessageState__Playing       = 0,
	TTSMessageState__Enqueued      = 1,
	TTSMessageState__TTSMessageState_MAX = 2,
};

enum class EPresenceStatus : uint8
{
	PresenceStatus__Unavailable    = 0,
	PresenceStatus__Available      = 1,
	PresenceStatus__Chat           = 2,
	PresenceStatus__DoNotDisturb   = 3,
	PresenceStatus__Away           = 4,
	PresenceStatus__ExtendedAway   = 5,
	PresenceStatus__PresenceStatus_MAX = 6,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
