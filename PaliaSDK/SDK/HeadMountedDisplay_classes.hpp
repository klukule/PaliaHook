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
// Class HeadMountedDisplay.HandKeypointConversion
class UHandKeypointConversion : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("HandKeypointConversion");
		return Clss;
	}

	int32 Conv_HandKeypointToInt32(enum class EHandKeypoint InInput);
};

// 0x0 (0x28 - 0x28)
// Class HeadMountedDisplay.HeadMountedDisplayFunctionLibrary
class UHeadMountedDisplayFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("HeadMountedDisplayFunctionLibrary");
		return Clss;
	}

	void UpdateExternalTrackingHMDPosition(struct FTransform& InExternalTrackingTransform);
	void SetXRTimedInputActionDelegate(class FName& InActionName, FDelegateProperty_& InInDelegate);
	void SetXRDisconnectDelegate(FDelegateProperty_& InInDisconnectedDelegate);
	void SetWorldToMetersScale(class UObject* InWorldContext, float InNewScale);
	void SetTrackingOrigin(enum class EHMDTrackingOrigin InOrigin);
	void SetSpectatorScreenTexture(class UTexture* InInTexture);
	void SetSpectatorScreenModeTexturePlusEyeLayout(const struct FVector2D& InEyeRectMin, const struct FVector2D& InEyeRectMax, const struct FVector2D& InTextureRectMin, const struct FVector2D& InTextureRectMax, bool InbDrawEyeFirst, bool InbClearBlack, bool InbUseAlpha);
	void SetSpectatorScreenMode(enum class ESpectatorScreenMode InMode);
	void SetClippingPlanes(float InNear, float InFar);
	void ResetOrientationAndPosition(float InYaw, enum class EOrientPositionSelector InOptions);
	bool IsSpectatorScreenModeControllable();
	bool IsInLowPersistenceMode();
	bool IsHeadMountedDisplayEnabled();
	bool IsHeadMountedDisplayConnected();
	bool IsDeviceTracking(struct FXRDeviceId& InXRDeviceId);
	bool HasValidTrackingPosition();
	int32 GetXRSystemFlags();
	float GetWorldToMetersScale(class UObject* InWorldContext);
	void GetVRFocusState(bool* InbUseFocus, bool* InbHasFocus);
	class FString GetVersionString();
	struct FTransform GetTrackingToWorldTransform(class UObject* InWorldContext);
	void GetTrackingSensorParameters(struct FVector* InOrigin, struct FRotator* InRotation, float* InLeftFOV, float* InRightFOV, float* InTopFOV, float* InBottomFOV, float* InDistance, float* InNearPlane, float* InFarPlane, bool* InIsActive, int32 InIndex);
	bool GetTrackingOriginTransform(enum class EHMDTrackingOrigin InOrigin, struct FTransform* InOutTransform);
	enum class EHMDTrackingOrigin GetTrackingOrigin();
	void GetPositionalTrackingCameraParameters(struct FVector* InCameraOrigin, struct FRotator* InCameraRotation, float* InHFOV, float* InVFOV, float* InCameraDistance, float* InNearPlane, float* InFarPlane);
	bool GetPlayAreaRect(struct FTransform* InOutTransform, struct FVector2D* InOutRect);
	struct FVector2D GetPlayAreaBounds(enum class EHMDTrackingOrigin InOrigin);
	float GetPixelDensity();
	void GetOrientationAndPosition(struct FRotator* InDeviceRotation, struct FVector* InDevicePosition);
	int32 GetNumOfTrackingSensors();
	void GetMotionControllerData(class UObject* InWorldContext, enum class EControllerHand InHand, struct FXRMotionControllerData* InMotionControllerData);
	enum class EHMDWornState GetHMDWornState();
	class FName GetHMDDeviceName();
	void GetHMDData(class UObject* InWorldContext, struct FXRHMDData* InHMDData);
	void GetDeviceWorldPose(class UObject* InWorldContext, struct FXRDeviceId& InXRDeviceId, bool* InbIsTracked, struct FRotator* InOrientation, bool* InbHasPositionalTracking, struct FVector* InPosition);
	void GetDevicePose(struct FXRDeviceId& InXRDeviceId, bool* InbIsTracked, struct FRotator* InOrientation, bool* InbHasPositionalTracking, struct FVector* InPosition);
	bool GetCurrentInteractionProfile(enum class EControllerHand InHand, class FString* InInteractionProfile);
	bool GetControllerTransformForTime(class UObject* InWorldContext, int32 InControllerIndex, class FName InMotionSource, const struct FTimespan& InTime, bool* InbTimeWasUsed, struct FRotator* InOrientation, struct FVector* InPosition, bool* InbProvidedLinearVelocity, struct FVector* InLinearVelocity, bool* InbProvidedAngularVelocity, struct FVector* InAngularVelocityRadPerSec, bool* InbProvidedLinearAcceleration, struct FVector* InLinearAcceleration);
	TArray<struct FXRDeviceId> EnumerateTrackedDevices(class FName InSystemId, enum class EXRTrackedDeviceType InDeviceType);
	void EnableLowPersistenceMode(bool InbEnable);
	bool EnableHMD(bool InbEnable);
	void DisconnectRemoteXRDevice();
	enum class EXRDeviceConnectionResult ConnectRemoteXRDevice(const class FString& InIpAddress, int32 InBitRate);
	bool ConfigureGestures(struct FXRGestureConfig& InGestureConfig);
	void ClearXRTimedInputActionDelegate(class FName& InActionPath);
	void CalibrateExternalTrackingToHMD(struct FTransform& InExternalTrackingTransform);
	void BreakKey(const struct FKey& InInKey, class FString* InInteractionProfile, enum class EControllerHand* InHand, class FName* InMotionSource, class FString* InIndentifier, class FString* InComponent);
};

// 0x128 (0x660 - 0x538)
// Class HeadMountedDisplay.MotionControllerComponent
class UMotionControllerComponent : public UPrimitiveComponent
{
public:
	int32                                        PlayerIndex;                                       // 0x538(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EControllerHand                   Hand;                                              // 0x53C(0x1)(BlueprintVisible, ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F55[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  MotionSource;                                      // 0x540(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bDisableLowLatencyUpdate : 1;                      // Mask: 0x1, PropSize: 0x10x548(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_11F : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_1F56[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class ETrackingStatus                   CurrentTrackingStatus;                             // 0x54C(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDisplayDeviceModel;                               // 0x54D(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F57[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  DisplayModelSource;                                // 0x550(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMesh*                           CustomDisplayMesh;                                 // 0x558(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UMaterialInterface*>            DisplayMeshMaterialOverrides;                      // 0x560(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F59[0xD8];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UPrimitiveComponent*                   DisplayComponent;                                  // 0x648(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1F5A[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MotionControllerComponent");
		return Clss;
	}

	void SetTrackingSource(enum class EControllerHand InNewSource);
	void SetTrackingMotionSource(class FName InNewSource);
	void SetShowDeviceModel(bool InbShowControllerModel);
	void SetDisplayModelSource(class FName InNewDisplayModelSource);
	void SetCustomDisplayMesh(class UStaticMesh* InNewDisplayMesh);
	void SetAssociatedPlayerIndex(int32 InNewPlayer);
	void OnMotionControllerUpdated();
	bool IsTracked();
	enum class EControllerHand GetTrackingSource();
	float GetParameterValue(class FName InInName, bool* InbValueFound);
	struct FVector GetHandJointPosition(int32 InJointIndex, bool* InbValueFound);
};

// 0x0 (0x28 - 0x28)
// Class HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary
class UMotionTrackedDeviceFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MotionTrackedDeviceFunctionLibrary");
		return Clss;
	}

	void SetIsControllerMotionTrackingEnabledByDefault(bool InEnable);
	bool IsMotionTrackingEnabledForSource(int32 InPlayerIndex, class FName InSourceName);
	bool IsMotionTrackingEnabledForDevice(int32 InPlayerIndex, enum class EControllerHand InHand);
	bool IsMotionTrackingEnabledForComponent(class UMotionControllerComponent* InMotionControllerComponent);
	bool IsMotionTrackedDeviceCountManagementNecessary();
	bool IsMotionSourceTracking(int32 InPlayerIndex, class FName InSourceName);
	int32 GetMotionTrackingEnabledControllerCount();
	int32 GetMaximumMotionTrackedControllerCount();
	class FName GetActiveTrackingSystemName();
	TArray<class FName> EnumerateMotionSources();
	bool EnableMotionTrackingOfSource(int32 InPlayerIndex, class FName InSourceName);
	bool EnableMotionTrackingOfDevice(int32 InPlayerIndex, enum class EControllerHand InHand);
	bool EnableMotionTrackingForComponent(class UMotionControllerComponent* InMotionControllerComponent);
	void DisableMotionTrackingOfSource(int32 InPlayerIndex, class FName InSourceName);
	void DisableMotionTrackingOfDevice(int32 InPlayerIndex, enum class EControllerHand InHand);
	void DisableMotionTrackingOfControllersForPlayer(int32 InPlayerIndex);
	void DisableMotionTrackingOfAllControllers();
	void DisableMotionTrackingForComponent(class UMotionControllerComponent* InMotionControllerComponent);
};

// 0xB0 (0x150 - 0xA0)
// Class HeadMountedDisplay.VRNotificationsComponent
class UVRNotificationsComponent : public UActorComponent
{
public:
	FMulticastInlineDelegateProperty_            HMDTrackingInitializingAndNeedsHMDToBeTrackedDelegate; // 0xA0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            HMDTrackingInitializedDelegate;                    // 0xB0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            HMDRecenteredDelegate;                             // 0xC0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            HMDLostDelegate;                                   // 0xD0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            HMDReconnectedDelegate;                            // 0xE0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            HMDConnectCanceledDelegate;                        // 0xF0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            HMDPutOnHeadDelegate;                              // 0x100(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            HMDRemovedFromHeadDelegate;                        // 0x110(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            VRControllerRecenteredDelegate;                    // 0x120(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            XRTrackingOriginChangedDelegate;                   // 0x130(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            XRPlayAreaChangedDelegate;                         // 0x140(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VRNotificationsComponent");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class HeadMountedDisplay.XRAssetFunctionLibrary
class UXRAssetFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("XRAssetFunctionLibrary");
		return Clss;
	}

	class UPrimitiveComponent* AddNamedDeviceVisualizationComponentBlocking(class AActor* InTarget, class FName InSystemName, class FName InDeviceName, bool InbManualAttachment, struct FTransform& InRelativeTransform, struct FXRDeviceId* InXRDeviceId);
	class UPrimitiveComponent* AddDeviceVisualizationComponentBlocking(class AActor* InTarget, struct FXRDeviceId& InXRDeviceId, bool InbManualAttachment, struct FTransform& InRelativeTransform);
};

// 0x30 (0x60 - 0x30)
// Class HeadMountedDisplay.AsyncTask_LoadXRDeviceVisComponent
class UAsyncTask_LoadXRDeviceVisComponent : public UBlueprintAsyncActionBase
{
public:
	FMulticastInlineDelegateProperty_            OnModelLoaded;                                     // 0x30(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnLoadFailure;                                     // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FEA[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPrimitiveComponent*                   SpawnedComponent;                                  // 0x58(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AsyncTask_LoadXRDeviceVisComponent");
		return Clss;
	}

	class UAsyncTask_LoadXRDeviceVisComponent* AddNamedDeviceVisualizationComponentAsync(class AActor* InTarget, class FName InSystemName, class FName InDeviceName, bool InbManualAttachment, struct FTransform& InRelativeTransform, struct FXRDeviceId* InXRDeviceId, class UPrimitiveComponent** InNewComponent);
	class UAsyncTask_LoadXRDeviceVisComponent* AddDeviceVisualizationComponentAsync(class AActor* InTarget, struct FXRDeviceId& InXRDeviceId, bool InbManualAttachment, struct FTransform& InRelativeTransform, class UPrimitiveComponent** InNewComponent);
};

// 0x0 (0x28 - 0x28)
// Class HeadMountedDisplay.XRLoadingScreenFunctionLibrary
class UXRLoadingScreenFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("XRLoadingScreenFunctionLibrary");
		return Clss;
	}

	void ShowLoadingScreen();
	void SetLoadingScreen(class UTexture* InTexture, const struct FVector2D& InScale, const struct FVector& InOffset, bool InbShowLoadingMovie, bool InbShowOnSet);
	void HideLoadingScreen();
	void ClearLoadingScreenSplashes();
	void AddLoadingScreenSplash(class UTexture* InTexture, const struct FVector& InTranslation, const struct FRotator& InRotation, const struct FVector2D& InSize, const struct FRotator& InDeltaRotation, bool InbClearBeforeAdd);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
