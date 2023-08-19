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

enum class EOrientPositionSelector : uint8
{
	EOrientPositionSelector__Orientation = 0,
	EOrientPositionSelector__Position = 1,
	EOrientPositionSelector__OrientationAndPosition = 2,
	EOrientPositionSelector__EOrientPositionSelector_MAX = 3,
};

enum class EHMDTrackingOrigin : uint8
{
	EHMDTrackingOrigin__Floor      = 0,
	EHMDTrackingOrigin__Eye        = 1,
	EHMDTrackingOrigin__Stage      = 2,
	EHMDTrackingOrigin__EHMDTrackingOrigin_MAX = 3,
};

enum class EHMDWornState : uint8
{
	EHMDWornState__Unknown         = 0,
	EHMDWornState__Worn            = 1,
	EHMDWornState__NotWorn         = 2,
	EHMDWornState__EHMDWornState_MAX = 3,
};

enum class EXRDeviceConnectionResult : uint8
{
	EXRDeviceConnectionResult__NoTrackingSystem = 0,
	EXRDeviceConnectionResult__FeatureNotSupported = 1,
	EXRDeviceConnectionResult__NoValidViewport = 2,
	EXRDeviceConnectionResult__MiscFailure = 3,
	EXRDeviceConnectionResult__Success = 4,
	EXRDeviceConnectionResult__EXRDeviceConnectionResult_MAX = 5,
};

enum class EXRSystemFlags : uint8
{
	EXRSystemFlags__NoFlags        = 0,
	EXRSystemFlags__IsAR           = 1,
	EXRSystemFlags__IsTablet       = 2,
	EXRSystemFlags__IsHeadMounted  = 4,
	EXRSystemFlags__SupportsHandTracking = 8,
	EXRSystemFlags__EXRSystemFlags_MAX = 9,
};

enum class ESpectatorScreenMode : uint8
{
	ESpectatorScreenMode__Disabled = 0,
	ESpectatorScreenMode__SingleEyeLetterboxed = 1,
	ESpectatorScreenMode__Undistorted = 2,
	ESpectatorScreenMode__Distorted = 3,
	ESpectatorScreenMode__SingleEye = 4,
	ESpectatorScreenMode__SingleEyeCroppedToFill = 5,
	ESpectatorScreenMode__Texture  = 6,
	ESpectatorScreenMode__TexturePlusEye = 7,
	ESpectatorScreenMode__ESpectatorScreenMode_MAX = 8,
};

enum class EXRTrackedDeviceType : uint8
{
	EXRTrackedDeviceType__HeadMountedDisplay = 0,
	EXRTrackedDeviceType__Controller = 1,
	EXRTrackedDeviceType__TrackingReference = 2,
	EXRTrackedDeviceType__Other    = 3,
	EXRTrackedDeviceType__Invalid  = 254,
	EXRTrackedDeviceType__Any      = 255,
	EXRTrackedDeviceType__EXRTrackedDeviceType_MAX = 256,
};

enum class EHandKeypoint : uint8
{
	EHandKeypoint__Palm            = 0,
	EHandKeypoint__Wrist           = 1,
	EHandKeypoint__ThumbMetacarpal = 2,
	EHandKeypoint__ThumbProximal   = 3,
	EHandKeypoint__ThumbDistal     = 4,
	EHandKeypoint__ThumbTip        = 5,
	EHandKeypoint__IndexMetacarpal = 6,
	EHandKeypoint__IndexProximal   = 7,
	EHandKeypoint__IndexIntermediate = 8,
	EHandKeypoint__IndexDistal     = 9,
	EHandKeypoint__IndexTip        = 10,
	EHandKeypoint__MiddleMetacarpal = 11,
	EHandKeypoint__MiddleProximal  = 12,
	EHandKeypoint__MiddleIntermediate = 13,
	EHandKeypoint__MiddleDistal    = 14,
	EHandKeypoint__MiddleTip       = 15,
	EHandKeypoint__RingMetacarpal  = 16,
	EHandKeypoint__RingProximal    = 17,
	EHandKeypoint__RingIntermediate = 18,
	EHandKeypoint__RingDistal      = 19,
	EHandKeypoint__RingTip         = 20,
	EHandKeypoint__LittleMetacarpal = 21,
	EHandKeypoint__LittleProximal  = 22,
	EHandKeypoint__LittleIntermediate = 23,
	EHandKeypoint__LittleDistal    = 24,
	EHandKeypoint__LittleTip       = 25,
	EHandKeypoint__EHandKeypoint_MAX = 26,
};

enum class EXRVisualType : uint8
{
	EXRVisualType__Controller      = 0,
	EXRVisualType__Hand            = 1,
	EXRVisualType__EXRVisualType_MAX = 2,
};

enum class ETrackingStatus : uint8
{
	ETrackingStatus__NotTracked    = 0,
	ETrackingStatus__InertialOnly  = 1,
	ETrackingStatus__Tracked       = 2,
	ETrackingStatus__ETrackingStatus_MAX = 3,
};

enum class ESpatialInputGestureAxis : uint8
{
	ESpatialInputGestureAxis__None = 0,
	ESpatialInputGestureAxis__Manipulation = 1,
	ESpatialInputGestureAxis__Navigation = 2,
	ESpatialInputGestureAxis__NavigationRails = 3,
	ESpatialInputGestureAxis__ESpatialInputGestureAxis_MAX = 4,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x60 (0x60 - 0x0)
// ScriptStruct HeadMountedDisplay.XRHMDData
struct FXRHMDData
{
public:
	bool                                         bValid;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DC5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  DeviceName;                                        // 0x4(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 ApplicationInstanceID;                             // 0xC(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETrackingStatus                   TrackingStatus;                                    // 0x1C(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DC6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Position;                                          // 0x20(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DC7[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 Rotation;                                          // 0x40(0x20)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xE0 (0xE0 - 0x0)
// ScriptStruct HeadMountedDisplay.XRMotionControllerData
struct FXRMotionControllerData
{
public:
	bool                                         bValid;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DC8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  DeviceName;                                        // 0x4(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 ApplicationInstanceID;                             // 0xC(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EXRVisualType                     DeviceVisualType;                                  // 0x1C(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EControllerHand                   HandIndex;                                         // 0x1D(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETrackingStatus                   TrackingStatus;                                    // 0x1E(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DC9[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               GripPosition;                                      // 0x20(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DCB[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 GripRotation;                                      // 0x40(0x20)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               AimPosition;                                       // 0x60(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DCC[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuat                                 AimRotation;                                       // 0x80(0x20)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FVector>                       HandKeyPositions;                                  // 0xA0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FQuat>                         HandKeyRotations;                                  // 0xB0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                HandKeyRadii;                                      // 0xC0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bIsGrasped;                                        // 0xD0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DCF[0xF];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x6 (0x6 - 0x0)
// ScriptStruct HeadMountedDisplay.XRGestureConfig
struct FXRGestureConfig
{
public:
	bool                                         bTap;                                              // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHold;                                             // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESpatialInputGestureAxis          AxisGesture;                                       // 0x2(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bNavigationAxisX;                                  // 0x3(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bNavigationAxisY;                                  // 0x4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bNavigationAxisZ;                                  // 0x5(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct HeadMountedDisplay.XRDeviceId
struct FXRDeviceId
{
public:
	class FName                                  SystemName;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DeviceID;                                          // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
