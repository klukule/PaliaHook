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

enum class EARTrackingState : uint8
{
	EARTrackingState__Unknown      = 0,
	EARTrackingState__Tracking     = 1,
	EARTrackingState__NotTracking  = 2,
	EARTrackingState__StoppedTracking = 3,
	EARTrackingState__EARTrackingState_MAX = 4,
};

enum class EARSessionConfigFlags : uint8
{
	EARSessionConfigFlags__None    = 0,
	EARSessionConfigFlags__GenerateMeshData = 1,
	EARSessionConfigFlags__RenderMeshDataInWireframe = 2,
	EARSessionConfigFlags__GenerateCollisionForMeshData = 4,
	EARSessionConfigFlags__GenerateNavMeshForMeshData = 8,
	EARSessionConfigFlags__UseMeshDataForOcclusion = 16,
	EARSessionConfigFlags__EARSessionConfigFlags_MAX = 17,
};

enum class EPlaneComponentDebugMode : uint8
{
	EPlaneComponentDebugMode__None = 0,
	EPlaneComponentDebugMode__ShowNetworkRole = 1,
	EPlaneComponentDebugMode__ShowClassification = 2,
	EPlaneComponentDebugMode__EPlaneComponentDebugMode_MAX = 3,
};

enum class EFaceComponentDebugMode : uint8
{
	EFaceComponentDebugMode__None  = 0,
	EFaceComponentDebugMode__ShowEyeVectors = 1,
	EFaceComponentDebugMode__ShowFaceMesh = 2,
	EFaceComponentDebugMode__EFaceComponentDebugMode_MAX = 3,
};

enum class EARFaceTransformMixing : uint8
{
	EARFaceTransformMixing__ComponentOnly = 0,
	EARFaceTransformMixing__ComponentLocationTrackedRotation = 1,
	EARFaceTransformMixing__ComponentWithTracked = 2,
	EARFaceTransformMixing__TrackingOnly = 3,
	EARFaceTransformMixing__EARFaceTransformMixing_MAX = 4,
};

enum class EImageComponentDebugMode : uint8
{
	EImageComponentDebugMode__None = 0,
	EImageComponentDebugMode__ShowDetectedImage = 1,
	EImageComponentDebugMode__EImageComponentDebugMode_MAX = 2,
};

enum class EQRCodeComponentDebugMode : uint8
{
	EQRCodeComponentDebugMode__None = 0,
	EQRCodeComponentDebugMode__ShowQRCode = 1,
	EQRCodeComponentDebugMode__EQRCodeComponentDebugMode_MAX = 2,
};

enum class EPoseComponentDebugMode : uint8
{
	EPoseComponentDebugMode__None  = 0,
	EPoseComponentDebugMode__ShowSkeleton = 1,
	EPoseComponentDebugMode__EPoseComponentDebugMode_MAX = 2,
};

enum class EGeoAnchorComponentDebugMode : uint8
{
	EGeoAnchorComponentDebugMode__None = 0,
	EGeoAnchorComponentDebugMode__ShowGeoData = 1,
	EGeoAnchorComponentDebugMode__EGeoAnchorComponentDebugMode_MAX = 2,
};

enum class EARServiceAvailability : uint8
{
	EARServiceAvailability__UnknownError = 0,
	EARServiceAvailability__UnknownChecking = 1,
	EARServiceAvailability__UnknownTimedOut = 2,
	EARServiceAvailability__UnsupportedDeviceNotCapable = 3,
	EARServiceAvailability__SupportedNotInstalled = 4,
	EARServiceAvailability__SupportedVersionTooOld = 5,
	EARServiceAvailability__SupportedInstalled = 6,
	EARServiceAvailability__EARServiceAvailability_MAX = 7,
};

enum class EARServiceInstallRequestResult : uint8
{
	EARServiceInstallRequestResult__Installed = 0,
	EARServiceInstallRequestResult__DeviceNotCompatible = 1,
	EARServiceInstallRequestResult__UserDeclinedInstallation = 2,
	EARServiceInstallRequestResult__FatalError = 3,
	EARServiceInstallRequestResult__EARServiceInstallRequestResult_MAX = 4,
};

enum class EARServicePermissionRequestResult : uint8
{
	EARServicePermissionRequestResult__Granted = 0,
	EARServicePermissionRequestResult__Denied = 1,
	EARServicePermissionRequestResult__EARServicePermissionRequestResult_MAX = 2,
};

enum class EARGeoTrackingState : uint8
{
	EARGeoTrackingState__Initializing = 0,
	EARGeoTrackingState__Localized = 1,
	EARGeoTrackingState__Localizing = 2,
	EARGeoTrackingState__NotAvailable = 3,
	EARGeoTrackingState__EARGeoTrackingState_MAX = 4,
};

enum class EARGeoTrackingStateReason : uint8
{
	EARGeoTrackingStateReason__None = 0,
	EARGeoTrackingStateReason__NotAvailableAtLocation = 1,
	EARGeoTrackingStateReason__NeedLocationPermissions = 2,
	EARGeoTrackingStateReason__DevicePointedTooLow = 3,
	EARGeoTrackingStateReason__WorldTrackingUnstable = 4,
	EARGeoTrackingStateReason__WaitingForLocation = 5,
	EARGeoTrackingStateReason__GeoDataNotLoaded = 6,
	EARGeoTrackingStateReason__VisualLocalizationFailed = 7,
	EARGeoTrackingStateReason__WaitingForAvailabilityCheck = 8,
	EARGeoTrackingStateReason__EARGeoTrackingStateReason_MAX = 9,
};

enum class EARGeoTrackingAccuracy : uint8
{
	EARGeoTrackingAccuracy__Undetermined = 0,
	EARGeoTrackingAccuracy__Low    = 1,
	EARGeoTrackingAccuracy__Medium = 2,
	EARGeoTrackingAccuracy__High   = 3,
	EARGeoTrackingAccuracy__EARGeoTrackingAccuracy_MAX = 4,
};

enum class EARWorldAlignment : uint8
{
	EARWorldAlignment__Gravity     = 0,
	EARWorldAlignment__GravityAndHeading = 1,
	EARWorldAlignment__Camera      = 2,
	EARWorldAlignment__EARWorldAlignment_MAX = 3,
};

enum class EARSessionType : uint8
{
	EARSessionType__None           = 0,
	EARSessionType__Orientation    = 1,
	EARSessionType__World          = 2,
	EARSessionType__Face           = 3,
	EARSessionType__Image          = 4,
	EARSessionType__ObjectScanning = 5,
	EARSessionType__PoseTracking   = 6,
	EARSessionType__GeoTracking    = 7,
	EARSessionType__EARSessionType_MAX = 8,
};

enum class EARPlaneDetectionMode : uint8
{
	EARPlaneDetectionMode__None    = 0,
	EARPlaneDetectionMode__HorizontalPlaneDetection = 1,
	EARPlaneDetectionMode__VerticalPlaneDetection = 2,
	EARPlaneDetectionMode__EARPlaneDetectionMode_MAX = 3,
};

enum class EARLightEstimationMode : uint8
{
	EARLightEstimationMode__None   = 0,
	EARLightEstimationMode__AmbientLightEstimate = 1,
	EARLightEstimationMode__DirectionalLightEstimate = 2,
	EARLightEstimationMode__EARLightEstimationMode_MAX = 3,
};

enum class EARFrameSyncMode : uint8
{
	EARFrameSyncMode__SyncTickWithCameraImage = 0,
	EARFrameSyncMode__SyncTickWithoutCameraImage = 1,
	EARFrameSyncMode__EARFrameSyncMode_MAX = 2,
};

enum class EAREnvironmentCaptureProbeType : uint8
{
	EAREnvironmentCaptureProbeType__None = 0,
	EAREnvironmentCaptureProbeType__Manual = 1,
	EAREnvironmentCaptureProbeType__Automatic = 2,
	EAREnvironmentCaptureProbeType__EAREnvironmentCaptureProbeType_MAX = 3,
};

enum class EARFaceTrackingUpdate : uint8
{
	EARFaceTrackingUpdate__CurvesAndGeo = 0,
	EARFaceTrackingUpdate__CurvesOnly = 1,
	EARFaceTrackingUpdate__EARFaceTrackingUpdate_MAX = 2,
};

enum class EARSessionTrackingFeature : uint8
{
	EARSessionTrackingFeature__None = 0,
	EARSessionTrackingFeature__PoseDetection2D = 1,
	EARSessionTrackingFeature__PersonSegmentation = 2,
	EARSessionTrackingFeature__PersonSegmentationWithDepth = 3,
	EARSessionTrackingFeature__SceneDepth = 4,
	EARSessionTrackingFeature__SmoothedSceneDepth = 5,
	EARSessionTrackingFeature__EARSessionTrackingFeature_MAX = 6,
};

enum class EARSceneReconstruction : uint8
{
	EARSceneReconstruction__None   = 0,
	EARSceneReconstruction__MeshOnly = 1,
	EARSceneReconstruction__MeshWithClassification = 2,
	EARSceneReconstruction__EARSceneReconstruction_MAX = 3,
};

enum class EARTextureType : uint8
{
	EARTextureType__Unknown        = 0,
	EARTextureType__CameraImage    = 1,
	EARTextureType__CameraDepth    = 2,
	EARTextureType__EnvironmentCapture = 3,
	EARTextureType__PersonSegmentationImage = 4,
	EARTextureType__PersonSegmentationDepth = 5,
	EARTextureType__SceneDepthMap  = 6,
	EARTextureType__SceneDepthConfidenceMap = 7,
	EARTextureType__EARTextureType_MAX = 8,
};

enum class EARDepthQuality : uint8
{
	EARDepthQuality__Unkown        = 0,
	EARDepthQuality__Low           = 1,
	EARDepthQuality__High          = 2,
	EARDepthQuality__EARDepthQuality_MAX = 3,
};

enum class EARDepthAccuracy : uint8
{
	EARDepthAccuracy__Unkown       = 0,
	EARDepthAccuracy__Approximate  = 1,
	EARDepthAccuracy__Accurate     = 2,
	EARDepthAccuracy__EARDepthAccuracy_MAX = 3,
};

enum class EARFaceTrackingDirection : uint8
{
	EARFaceTrackingDirection__FaceRelative = 0,
	EARFaceTrackingDirection__FaceMirrored = 1,
	EARFaceTrackingDirection__EARFaceTrackingDirection_MAX = 2,
};

enum class EARFaceBlendShape : uint8
{
	EARFaceBlendShape__EyeBlinkLeft = 0,
	EARFaceBlendShape__EyeLookDownLeft = 1,
	EARFaceBlendShape__EyeLookInLeft = 2,
	EARFaceBlendShape__EyeLookOutLeft = 3,
	EARFaceBlendShape__EyeLookUpLeft = 4,
	EARFaceBlendShape__EyeSquintLeft = 5,
	EARFaceBlendShape__EyeWideLeft = 6,
	EARFaceBlendShape__EyeBlinkRight = 7,
	EARFaceBlendShape__EyeLookDownRight = 8,
	EARFaceBlendShape__EyeLookInRight = 9,
	EARFaceBlendShape__EyeLookOutRight = 10,
	EARFaceBlendShape__EyeLookUpRight = 11,
	EARFaceBlendShape__EyeSquintRight = 12,
	EARFaceBlendShape__EyeWideRight = 13,
	EARFaceBlendShape__JawForward  = 14,
	EARFaceBlendShape__JawLeft     = 15,
	EARFaceBlendShape__JawRight    = 16,
	EARFaceBlendShape__JawOpen     = 17,
	EARFaceBlendShape__MouthClose  = 18,
	EARFaceBlendShape__MouthFunnel = 19,
	EARFaceBlendShape__MouthPucker = 20,
	EARFaceBlendShape__MouthLeft   = 21,
	EARFaceBlendShape__MouthRight  = 22,
	EARFaceBlendShape__MouthSmileLeft = 23,
	EARFaceBlendShape__MouthSmileRight = 24,
	EARFaceBlendShape__MouthFrownLeft = 25,
	EARFaceBlendShape__MouthFrownRight = 26,
	EARFaceBlendShape__MouthDimpleLeft = 27,
	EARFaceBlendShape__MouthDimpleRight = 28,
	EARFaceBlendShape__MouthStretchLeft = 29,
	EARFaceBlendShape__MouthStretchRight = 30,
	EARFaceBlendShape__MouthRollLower = 31,
	EARFaceBlendShape__MouthRollUpper = 32,
	EARFaceBlendShape__MouthShrugLower = 33,
	EARFaceBlendShape__MouthShrugUpper = 34,
	EARFaceBlendShape__MouthPressLeft = 35,
	EARFaceBlendShape__MouthPressRight = 36,
	EARFaceBlendShape__MouthLowerDownLeft = 37,
	EARFaceBlendShape__MouthLowerDownRight = 38,
	EARFaceBlendShape__MouthUpperUpLeft = 39,
	EARFaceBlendShape__MouthUpperUpRight = 40,
	EARFaceBlendShape__BrowDownLeft = 41,
	EARFaceBlendShape__BrowDownRight = 42,
	EARFaceBlendShape__BrowInnerUp = 43,
	EARFaceBlendShape__BrowOuterUpLeft = 44,
	EARFaceBlendShape__BrowOuterUpRight = 45,
	EARFaceBlendShape__CheekPuff   = 46,
	EARFaceBlendShape__CheekSquintLeft = 47,
	EARFaceBlendShape__CheekSquintRight = 48,
	EARFaceBlendShape__NoseSneerLeft = 49,
	EARFaceBlendShape__NoseSneerRight = 50,
	EARFaceBlendShape__TongueOut   = 51,
	EARFaceBlendShape__HeadYaw     = 52,
	EARFaceBlendShape__HeadPitch   = 53,
	EARFaceBlendShape__HeadRoll    = 54,
	EARFaceBlendShape__LeftEyeYaw  = 55,
	EARFaceBlendShape__LeftEyePitch = 56,
	EARFaceBlendShape__LeftEyeRoll = 57,
	EARFaceBlendShape__RightEyeYaw = 58,
	EARFaceBlendShape__RightEyePitch = 59,
	EARFaceBlendShape__RightEyeRoll = 60,
	EARFaceBlendShape__MAX         = 61,
};

enum class EAREye : uint8
{
	EAREye__LeftEye                = 0,
	EAREye__RightEye               = 1,
	EAREye__EAREye_MAX             = 2,
};

enum class EARCaptureType : uint8
{
	EARCaptureType__Camera         = 0,
	EARCaptureType__QRCode         = 1,
	EARCaptureType__SpatialMapping = 2,
	EARCaptureType__SceneUnderstanding = 3,
	EARCaptureType__HandMesh       = 4,
	EARCaptureType__EARCaptureType_MAX = 5,
};

enum class EARLineTraceChannels : uint8
{
	EARLineTraceChannels__None     = 0,
	EARLineTraceChannels__FeaturePoint = 1,
	EARLineTraceChannels__GroundPlane = 2,
	EARLineTraceChannels__PlaneUsingExtent = 4,
	EARLineTraceChannels__PlaneUsingBoundaryPolygon = 8,
	EARLineTraceChannels__EARLineTraceChannels_MAX = 9,
};

enum class EARTrackingQuality : uint8
{
	EARTrackingQuality__NotTracking = 0,
	EARTrackingQuality__OrientationOnly = 1,
	EARTrackingQuality__OrientationAndPosition = 2,
	EARTrackingQuality__EARTrackingQuality_MAX = 3,
};

enum class EARTrackingQualityReason : uint8
{
	EARTrackingQualityReason__None = 0,
	EARTrackingQualityReason__Initializing = 1,
	EARTrackingQualityReason__Relocalizing = 2,
	EARTrackingQualityReason__ExcessiveMotion = 3,
	EARTrackingQualityReason__InsufficientFeatures = 4,
	EARTrackingQualityReason__InsufficientLight = 5,
	EARTrackingQualityReason__BadState = 6,
	EARTrackingQualityReason__EARTrackingQualityReason_MAX = 7,
};

enum class EARSessionStatus : uint8
{
	EARSessionStatus__NotStarted   = 0,
	EARSessionStatus__Running      = 1,
	EARSessionStatus__NotSupported = 2,
	EARSessionStatus__FatalError   = 3,
	EARSessionStatus__PermissionNotGranted = 4,
	EARSessionStatus__UnsupportedConfiguration = 5,
	EARSessionStatus__Other        = 6,
	EARSessionStatus__EARSessionStatus_MAX = 7,
};

enum class EARWorldMappingState : uint8
{
	EARWorldMappingState__NotAvailable = 0,
	EARWorldMappingState__StillMappingNotRelocalizable = 1,
	EARWorldMappingState__StillMappingRelocalizable = 2,
	EARWorldMappingState__Mapped   = 3,
	EARWorldMappingState__EARWorldMappingState_MAX = 4,
};

enum class EARPlaneOrientation : uint8
{
	EARPlaneOrientation__Horizontal = 0,
	EARPlaneOrientation__Vertical  = 1,
	EARPlaneOrientation__Diagonal  = 2,
	EARPlaneOrientation__EARPlaneOrientation_MAX = 3,
};

enum class EARObjectClassification : uint8
{
	EARObjectClassification__NotApplicable = 0,
	EARObjectClassification__Unknown = 1,
	EARObjectClassification__Wall  = 2,
	EARObjectClassification__Ceiling = 3,
	EARObjectClassification__Floor = 4,
	EARObjectClassification__Table = 5,
	EARObjectClassification__Seat  = 6,
	EARObjectClassification__Face  = 7,
	EARObjectClassification__Image = 8,
	EARObjectClassification__World = 9,
	EARObjectClassification__SceneObject = 10,
	EARObjectClassification__HandMesh = 11,
	EARObjectClassification__Door  = 12,
	EARObjectClassification__Window = 13,
	EARObjectClassification__EARObjectClassification_MAX = 14,
};

enum class EARSpatialMeshUsageFlags : uint8
{
	EARSpatialMeshUsageFlags__NotApplicable = 0,
	EARSpatialMeshUsageFlags__Visible = 1,
	EARSpatialMeshUsageFlags__Collision = 2,
	EARSpatialMeshUsageFlags__EARSpatialMeshUsageFlags_MAX = 3,
};

enum class EARJointTransformSpace : uint8
{
	EARJointTransformSpace__Model  = 0,
	EARJointTransformSpace__ParentJoint = 1,
	EARJointTransformSpace__EARJointTransformSpace_MAX = 2,
};

enum class EARAltitudeSource : uint8
{
	EARAltitudeSource__Precise     = 0,
	EARAltitudeSource__Coarse      = 1,
	EARAltitudeSource__UserDefined = 2,
	EARAltitudeSource__Unknown     = 3,
	EARAltitudeSource__EARAltitudeSource_MAX = 4,
};

enum class EARCandidateImageOrientation : uint8
{
	EARCandidateImageOrientation__Landscape = 0,
	EARCandidateImageOrientation__Portrait = 1,
	EARCandidateImageOrientation__EARCandidateImageOrientation_MAX = 2,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x18 - 0x0)
// ScriptStruct AugmentedReality.TrackedGeometryGroup
struct FTrackedGeometryGroup
{
public:
	class AARActor*                              ARActor;                                           // 0x0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UARComponent*                          ARComponent;                                       // 0x8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UARTrackedGeometry*                    TrackedGeometry;                                   // 0x10(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct AugmentedReality.ARSessionPayload
struct FARSessionPayload
{
public:
	int32                                        ConfigFlags;                                       // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CBA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInterface*                    DefaultMeshMaterial;                               // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                    DefaultWireframeMeshMaterial;                      // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xD0 (0xD0 - 0x0)
// ScriptStruct AugmentedReality.ARPlaneUpdatePayload
struct FARPlaneUpdatePayload
{
public:
	struct FARSessionPayload                     SessionPayload;                                    // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CBC[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            WorldTransform;                                    // 0x20(0x60)(BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Center;                                            // 0x80(0x18)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Extents;                                           // 0x98(0x18)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FVector>                       BoundaryVertices;                                  // 0xB0(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	enum class EARObjectClassification           ObjectClassification;                              // 0xC0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CBD[0xF];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// ScriptStruct AugmentedReality.ARPointUpdatePayload
struct FARPointUpdatePayload
{
public:
	uint8                                        Pad_1CBF[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x60 (0x60 - 0x0)
// ScriptStruct AugmentedReality.ARFaceUpdatePayload
struct FARFaceUpdatePayload
{
public:
	struct FARSessionPayload                     SessionPayload;                                    // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               LeftEyePosition;                                   // 0x18(0x18)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               RightEyePosition;                                  // 0x30(0x18)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               LookAtTarget;                                      // 0x48(0x18)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xA0 (0xA0 - 0x0)
// ScriptStruct AugmentedReality.ARImageUpdatePayload
struct FARImageUpdatePayload
{
public:
	struct FARSessionPayload                     SessionPayload;                                    // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CC0[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            WorldTransform;                                    // 0x20(0x60)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UARCandidateImage*                     DetectedImage;                                     // 0x80(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             EstimatedSize;                                     // 0x88(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CC1[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xB0 (0xB0 - 0x0)
// ScriptStruct AugmentedReality.ARQRCodeUpdatePayload
struct FARQRCodeUpdatePayload
{
public:
	struct FARSessionPayload                     SessionPayload;                                    // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CC2[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            WorldTransform;                                    // 0x20(0x60)(BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Extents;                                           // 0x80(0x18)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                QRCode;                                            // 0x98(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CC3[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x70 (0x70 - 0x0)
// ScriptStruct AugmentedReality.ARPoseUpdatePayload
struct FARPoseUpdatePayload
{
public:
	struct FTransform                            WorldTransform;                                    // 0x0(0x60)(BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FTransform>                    JointTransforms;                                   // 0x60(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct AugmentedReality.AREnvironmentProbeUpdatePayload
struct FAREnvironmentProbeUpdatePayload
{
public:
	struct FTransform                            WorldTransform;                                    // 0x0(0x60)(BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct AugmentedReality.ARObjectUpdatePayload
struct FARObjectUpdatePayload
{
public:
	struct FTransform                            WorldTransform;                                    // 0x0(0x60)(BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x90 (0x90 - 0x0)
// ScriptStruct AugmentedReality.ARMeshUpdatePayload
struct FARMeshUpdatePayload
{
public:
	struct FARSessionPayload                     SessionPayload;                                    // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CC8[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            WorldTransform;                                    // 0x20(0x60)(BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EARObjectClassification           ObjectClassification;                              // 0x80(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CC9[0xF];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xA0 (0xA0 - 0x0)
// ScriptStruct AugmentedReality.ARGeoAnchorUpdatePayload
struct FARGeoAnchorUpdatePayload
{
public:
	struct FARSessionPayload                     SessionPayload;                                    // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CCA[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            WorldTransform;                                    // 0x20(0x60)(BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Longitude;                                         // 0x80(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Latitude;                                          // 0x84(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AltitudeMeters;                                    // 0x88(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EARAltitudeSource                 AltitudeSource;                                    // 0x8C(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CCB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                AnchorName;                                        // 0x90(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct AugmentedReality.ARSharedWorldReplicationState
struct FARSharedWorldReplicationState
{
public:
	int32                                        PreviewImageOffset;                                // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ARWorldOffset;                                     // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x90 (0x90 - 0x0)
// ScriptStruct AugmentedReality.ARTraceResult
struct FARTraceResult
{
public:
	float                                        DistanceFromCamera;                                // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class EARLineTraceChannels              TraceChannel;                                      // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1CCD[0xB];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            LocalTransform;                                    // 0x10(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UARTrackedGeometry*                    TrackedGeometry;                                   // 0x70(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1CCE[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct AugmentedReality.ARSessionStatus
struct FARSessionStatus
{
public:
	class FString                                AdditionalInfo;                                    // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EARSessionStatus                  Status;                                            // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CD0[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// ScriptStruct AugmentedReality.ARVideoFormat
struct FARVideoFormat
{
public:
	int32                                        Fps;                                               // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Width;                                             // 0x4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Height;                                            // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct AugmentedReality.ARSkeletonDefinition
struct FARSkeletonDefinition
{
public:
	int32                                        NumJoints;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CD2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          JointNames;                                        // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                ParentIndices;                                     // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct AugmentedReality.ARPose2D
struct FARPose2D
{
public:
	struct FARSkeletonDefinition                 SkeletonDefinition;                                // 0x0(0x28)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TArray<struct FVector2D>                     JointLocations;                                    // 0x28(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<bool>                                 IsJointTracked;                                    // 0x38(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct AugmentedReality.ARPose3D
struct FARPose3D
{
public:
	struct FARSkeletonDefinition                 SkeletonDefinition;                                // 0x0(0x28)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TArray<struct FTransform>                    JointTransforms;                                   // 0x28(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<bool>                                 IsJointTracked;                                    // 0x38(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	enum class EARJointTransformSpace            JointTransformSpace;                               // 0x48(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CD6[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct AugmentedReality.ARCameraIntrinsics
struct FARCameraIntrinsics
{
public:
	struct FIntPoint                             ImageResolution;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             FocalLength;                                       // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             PrincipalPoint;                                    // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
