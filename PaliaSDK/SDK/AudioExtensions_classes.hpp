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
// Class AudioExtensions.SoundfieldEncodingSettingsBase
class USoundfieldEncodingSettingsBase : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SoundfieldEncodingSettingsBase");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class AudioExtensions.SpatializationPluginSourceSettingsBase
class USpatializationPluginSourceSettingsBase : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SpatializationPluginSourceSettingsBase");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class AudioExtensions.SourceDataOverridePluginSourceSettingsBase
class USourceDataOverridePluginSourceSettingsBase : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SourceDataOverridePluginSourceSettingsBase");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class AudioExtensions.OcclusionPluginSourceSettingsBase
class UOcclusionPluginSourceSettingsBase : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("OcclusionPluginSourceSettingsBase");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class AudioExtensions.ReverbPluginSourceSettingsBase
class UReverbPluginSourceSettingsBase : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ReverbPluginSourceSettingsBase");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class AudioExtensions.AudioParameterControllerInterface
class IAudioParameterControllerInterface : public IInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AudioParameterControllerInterface");
		return Clss;
	}

	void SetTriggerParameter(class FName InInName);
	void SetStringParameter(class FName InInName, const class FString& InInValue);
	void SetStringArrayParameter(class FName InInName, TArray<class FString>& InInValue);
	void SetParameters_Blueprint(TArray<struct FAudioParameter>& InInParameters);
	void SetObjectParameter(class FName InInName, class UObject* InInValue);
	void SetObjectArrayParameter(class FName InInName, TArray<class UObject*>& InInValue);
	void SetIntParameter(class FName InInName, int32 InInInt);
	void SetIntArrayParameter(class FName InInName, TArray<int32>& InInValue);
	void SetFloatParameter(class FName InInName, float InInFloat);
	void SetFloatArrayParameter(class FName InInName, TArray<float>& InInValue);
	void SetBoolParameter(class FName InInName, bool InInBool);
	void SetBoolArrayParameter(class FName InInName, TArray<bool>& InInValue);
	void ResetParameters();
};

// 0x8 (0x30 - 0x28)
// Class AudioExtensions.AudioCodecEncoderSettings
class UAudioCodecEncoderSettings : public UObject
{
public:
	int32                                        Version;                                           // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C43[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AudioCodecEncoderSettings");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class AudioExtensions.AudioEndpointSettingsBase
class UAudioEndpointSettingsBase : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AudioEndpointSettingsBase");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class AudioExtensions.DummyEndpointSettings
class UDummyEndpointSettings : public UAudioEndpointSettingsBase
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("DummyEndpointSettings");
		return Clss;
	}

};

// 0x8 (0x30 - 0x28)
// Class AudioExtensions.SoundModulatorBase
class USoundModulatorBase : public UObject
{
public:
	uint8                                        Pad_1C47[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SoundModulatorBase");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class AudioExtensions.SoundfieldEndpointSettingsBase
class USoundfieldEndpointSettingsBase : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SoundfieldEndpointSettingsBase");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class AudioExtensions.SoundfieldEffectSettingsBase
class USoundfieldEffectSettingsBase : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SoundfieldEffectSettingsBase");
		return Clss;
	}

};

// 0x8 (0x30 - 0x28)
// Class AudioExtensions.SoundfieldEffectBase
class USoundfieldEffectBase : public UObject
{
public:
	class USoundfieldEffectSettingsBase*         Settings;                                          // 0x28(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SoundfieldEffectBase");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class AudioExtensions.WaveformTransformationBase
class UWaveformTransformationBase : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("WaveformTransformationBase");
		return Clss;
	}

};

// 0x10 (0x38 - 0x28)
// Class AudioExtensions.WaveformTransformationChain
class UWaveformTransformationChain : public UObject
{
public:
	TArray<class UWaveformTransformationBase*>   Transformations;                                   // 0x28(0x10)(Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("WaveformTransformationChain");
		return Clss;
	}

};

// 0x8 (0x38 - 0x30)
// Class AudioExtensions.AudioPcmEncoderSettings
class UAudioPcmEncoderSettings : public UAudioCodecEncoderSettings
{
public:
	enum class EPcmBitDepthConversion            BitDepthConversion;                                // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C57[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AudioPcmEncoderSettings");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
