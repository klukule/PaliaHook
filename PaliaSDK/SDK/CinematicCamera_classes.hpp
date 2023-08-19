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

// 0x118 (0xB48 - 0xA30)
// Class CinematicCamera.CineCameraComponent
class UCineCameraComponent : public UCameraComponent
{
public:
	struct FCameraFilmbackSettings               FilmbackSettings;                                  // 0xA30(0xC)(Deprecated, NoDestructor, NativeAccessSpecifierPublic)
	struct FCameraFilmbackSettings               Filmback;                                          // 0xA3C(0xC)(Edit, BlueprintVisible, Interp, NoDestructor, NativeAccessSpecifierPublic)
	struct FCameraLensSettings                   LensSettings;                                      // 0xA48(0x1C)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E32[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCameraFocusSettings                  FocusSettings;                                     // 0xA68(0x68)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FPlateCropSettings                    CropSettings;                                      // 0xAD0(0x4)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	float                                        CurrentFocalLength;                                // 0xAD4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CurrentAperture;                                   // 0xAD8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CurrentFocusDistance;                              // 0xADC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_CustomNearClippingPlane : 1;             // Mask: 0x1, PropSize: 0x10xAE0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_101 : 7;                                    // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_1E36[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CustomNearClippingPlane;                           // 0xAE4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E37[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FNamedFilmbackPreset>          FilmbackPresets;                                   // 0xAF0(0x10)(ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected)
	TArray<struct FNamedLensPreset>              LensPresets;                                       // 0xB00(0x10)(ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected)
	class FString                                DefaultFilmbackPresetName;                         // 0xB10(0x10)(ZeroConstructor, Config, Deprecated, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FString                                DefaultFilmbackPreset;                             // 0xB20(0x10)(ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FString                                DefaultLensPresetName;                             // 0xB30(0x10)(ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        DefaultLensFocalLength;                            // 0xB40(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        DefaultLensFStop;                                  // 0xB44(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CineCameraComponent");
		return Clss;
	}

	void SetLensSettings(struct FCameraLensSettings& InNewLensSettings);
	void SetLensPresetByName(const class FString& InInPresetName);
	void SetFocusSettings(struct FCameraFocusSettings& InNewFocusSettings);
	void SetFilmbackPresetByName(const class FString& InInPresetName);
	void SetFilmback(struct FCameraFilmbackSettings& InNewFilmback);
	void SetCurrentFocalLength(float InInFocalLength);
	void SetCurrentAperture(float InNewCurrentAperture);
	void SetCropSettings(struct FPlateCropSettings& InNewCropSettings);
	void SetCropPresetByName(const class FString& InInPresetName);
	float GetVerticalFieldOfView();
	TArray<struct FNamedLensPreset> GetLensPresetsCopy();
	class FString GetLensPresetName();
	float GetHorizontalFieldOfView();
	TArray<struct FNamedFilmbackPreset> GetFilmbackPresetsCopy();
	class FString GetFilmbackPresetName();
	class FString GetDefaultFilmbackPresetName();
	class FString GetCropPresetName();
};

// 0x78 (0xB0 - 0x38)
// Class CinematicCamera.CineCameraSettings
class UCineCameraSettings : public UDeveloperSettings
{
public:
	class FString                                DefaultLensPresetName;                             // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DefaultLensFocalLength;                            // 0x48(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DefaultLensFStop;                                  // 0x4C(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FNamedLensPreset>              LensPresets;                                       // 0x50(0x10)(Edit, BlueprintVisible, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	class FString                                DefaultFilmbackPreset;                             // 0x60(0x10)(Edit, BlueprintVisible, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FNamedFilmbackPreset>          FilmbackPresets;                                   // 0x70(0x10)(Edit, BlueprintVisible, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	class FString                                DefaultCropPresetName;                             // 0x80(0x10)(Edit, BlueprintVisible, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FNamedPlateCropPreset>         CropPresets;                                       // 0x90(0x10)(Edit, BlueprintVisible, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E74[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CineCameraSettings");
		return Clss;
	}

	void SetLensPresets(TArray<struct FNamedLensPreset>& InInLensPresets);
	void SetFilmbackPresets(TArray<struct FNamedFilmbackPreset>& InInFilmbackPresets);
	void SetDefaultLensPresetName(const class FString& InInDefaultLensPresetName);
	void SetDefaultLensFStop(float InInDefaultLensFStop);
	void SetDefaultLensFocalLength(float InInDefaultLensFocalLength);
	void SetDefaultFilmbackPreset(const class FString& InInDefaultFilmbackPreset);
	void SetDefaultCropPresetName(const class FString& InInDefaultCropPresetName);
	void SetCropPresets(TArray<struct FNamedPlateCropPreset>& InInCropPresets);
	TArray<class FString> GetLensPresetNames();
	bool GetLensPresetByName(const class FString& InPresetName, struct FCameraLensSettings* InLensSettings);
	TArray<class FString> GetFilmbackPresetNames();
	bool GetFilmbackPresetByName(const class FString& InPresetName, struct FCameraFilmbackSettings* InFilmbackSettings);
	TArray<class FString> GetCropPresetNames();
	bool GetCropPresetByName(const class FString& InPresetName, struct FPlateCropSettings* InCropSettings);
	class UCineCameraSettings* GetCineCameraSettings();
};

// 0x30 (0x2C0 - 0x290)
// Class CinematicCamera.CameraRig_Crane
class ACameraRig_Crane : public AActor
{
public:
	float                                        CranePitch;                                        // 0x290(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CraneYaw;                                          // 0x294(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CraneArmLength;                                    // 0x298(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLockMountPitch;                                   // 0x29C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLockMountYaw;                                     // 0x29D(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E79[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USceneComponent*                       TransformComponent;                                // 0x2A0(0x8)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USceneComponent*                       CraneYawControl;                                   // 0x2A8(0x8)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USceneComponent*                       CranePitchControl;                                 // 0x2B0(0x8)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USceneComponent*                       CraneCameraMount;                                  // 0x2B8(0x8)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CameraRig_Crane");
		return Clss;
	}

};

// 0x20 (0x2B0 - 0x290)
// Class CinematicCamera.CameraRig_Rail
class ACameraRig_Rail : public AActor
{
public:
	float                                        CurrentPositionOnRail;                             // 0x290(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLockOrientationToRail;                            // 0x294(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E80[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USceneComponent*                       TransformComponent;                                // 0x298(0x8)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USplineComponent*                      RailSplineComponent;                               // 0x2A0(0x8)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USceneComponent*                       RailCameraMount;                                   // 0x2A8(0x8)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CameraRig_Rail");
		return Clss;
	}

	class USplineComponent* GetRailSplineComponent();
};

// 0x80 (0xA20 - 0x9A0)
// Class CinematicCamera.CineCameraActor
class ACineCameraActor : public ACameraActor
{
public:
	struct FCameraLookatTrackingSettings         LookatTrackingSettings;                            // 0x9A0(0x70)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E8B[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CineCameraActor");
		return Clss;
	}

	class UCineCameraComponent* GetCineCameraComponent();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
