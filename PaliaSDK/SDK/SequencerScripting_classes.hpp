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

// 0x18 (0x40 - 0x28)
// Class SequencerScripting.MovieSceneScriptingKey
class UMovieSceneScriptingKey : public UObject
{
public:
	uint8                                        Pad_1320[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneScriptingKey");
		return Clss;
	}

};

// 0x20 (0x60 - 0x40)
// Class SequencerScripting.MovieSceneScriptingActorReferenceKey
class UMovieSceneScriptingActorReferenceKey : public UMovieSceneScriptingKey
{
public:
	uint8                                        Pad_1334[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneScriptingActorReferenceKey");
		return Clss;
	}

	void SetValue(struct FMovieSceneObjectBindingID& InInNewValue);
	void SetTime(struct FFrameNumber& InNewFrameNumber, float InSubFrame, enum class ESequenceTimeUnit InTimeUnit);
	struct FMovieSceneObjectBindingID GetValue();
	struct FFrameTime GetTime(enum class ESequenceTimeUnit InTimeUnit);
};

// 0x8 (0x30 - 0x28)
// Class SequencerScripting.MovieSceneScriptingChannel
class UMovieSceneScriptingChannel : public UObject
{
public:
	class FName                                  ChannelName;                                       // 0x28(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneScriptingChannel");
		return Clss;
	}

};

// 0x30 (0x60 - 0x30)
// Class SequencerScripting.MovieSceneScriptingActorReferenceChannel
class UMovieSceneScriptingActorReferenceChannel : public UMovieSceneScriptingChannel
{
public:
	uint8                                        Pad_134A[0x30];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneScriptingActorReferenceChannel");
		return Clss;
	}

	void SetDefault(const struct FMovieSceneObjectBindingID& InInDefaultValue);
	void RemoveKey(class UMovieSceneScriptingKey* InKey);
	void RemoveDefault();
	bool HasDefault();
	TArray<class UMovieSceneScriptingKey*> GetKeys();
	struct FMovieSceneObjectBindingID GetDefault();
	class UMovieSceneScriptingActorReferenceKey* AddKey(const struct FFrameNumber& InInTime, const struct FMovieSceneObjectBindingID& InNewValue, float InSubFrame, enum class ESequenceTimeUnit InTimeUnit);
};

// 0x20 (0x60 - 0x40)
// Class SequencerScripting.MovieSceneScriptingBoolKey
class UMovieSceneScriptingBoolKey : public UMovieSceneScriptingKey
{
public:
	uint8                                        Pad_1364[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneScriptingBoolKey");
		return Clss;
	}

	void SetValue(bool InInNewValue);
	void SetTime(struct FFrameNumber& InNewFrameNumber, float InSubFrame, enum class ESequenceTimeUnit InTimeUnit);
	bool GetValue();
	struct FFrameTime GetTime(enum class ESequenceTimeUnit InTimeUnit);
};

// 0x30 (0x60 - 0x30)
// Class SequencerScripting.MovieSceneScriptingBoolChannel
class UMovieSceneScriptingBoolChannel : public UMovieSceneScriptingChannel
{
public:
	uint8                                        Pad_138B[0x30];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneScriptingBoolChannel");
		return Clss;
	}

	void SetDefault(bool InInDefaultValue);
	void RemoveKey(class UMovieSceneScriptingKey* InKey);
	void RemoveDefault();
	bool HasDefault();
	int32 GetNumKeys();
	TArray<class UMovieSceneScriptingKey*> GetKeys();
	bool GetDefault();
	TArray<bool> EvaluateKeys(const struct FSequencerScriptingRange& InRange, const struct FFrameRate& InFrameRate);
	struct FSequencerScriptingRange ComputeEffectiveRange();
	class UMovieSceneScriptingBoolKey* AddKey(struct FFrameNumber& InInTime, bool InNewValue, float InSubFrame, enum class ESequenceTimeUnit InTimeUnit);
};

// 0x20 (0x60 - 0x40)
// Class SequencerScripting.MovieSceneScriptingByteKey
class UMovieSceneScriptingByteKey : public UMovieSceneScriptingKey
{
public:
	uint8                                        Pad_139A[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneScriptingByteKey");
		return Clss;
	}

	void SetValue(uint8 InInNewValue);
	void SetTime(struct FFrameNumber& InNewFrameNumber, float InSubFrame, enum class ESequenceTimeUnit InTimeUnit);
	uint8 GetValue();
	struct FFrameTime GetTime(enum class ESequenceTimeUnit InTimeUnit);
};

// 0x30 (0x60 - 0x30)
// Class SequencerScripting.MovieSceneScriptingByteChannel
class UMovieSceneScriptingByteChannel : public UMovieSceneScriptingChannel
{
public:
	uint8                                        Pad_13C2[0x30];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneScriptingByteChannel");
		return Clss;
	}

	void SetDefault(uint8 InInDefaultValue);
	void RemoveKey(class UMovieSceneScriptingKey* InKey);
	void RemoveDefault();
	bool HasDefault();
	TArray<class UMovieSceneScriptingKey*> GetKeys();
	uint8 GetDefault();
	class UMovieSceneScriptingByteKey* AddKey(struct FFrameNumber& InInTime, uint8 InNewValue, float InSubFrame, enum class ESequenceTimeUnit InTimeUnit, enum class EMovieSceneKeyInterpolation InInInterpolation);
};

// 0x20 (0x60 - 0x40)
// Class SequencerScripting.MovieSceneScriptingDoubleKey
class UMovieSceneScriptingDoubleKey : public UMovieSceneScriptingKey
{
public:
	uint8                                        Pad_1416[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneScriptingDoubleKey");
		return Clss;
	}

	void SetValue(double InInNewValue);
	void SetTime(struct FFrameNumber& InNewFrameNumber, float InSubFrame, enum class ESequenceTimeUnit InTimeUnit);
	void SetTangentWeightMode(enum class ERichCurveTangentWeightMode InInNewValue);
	void SetTangentMode(enum class ERichCurveTangentMode InInNewValue);
	void SetLeaveTangentWeight(float InInNewValue);
	void SetLeaveTangent(float InInNewValue);
	void SetInterpolationMode(enum class ERichCurveInterpMode InInNewValue);
	void SetArriveTangentWeight(float InInNewValue);
	void SetArriveTangent(float InInNewValue);
	double GetValue();
	struct FFrameTime GetTime(enum class ESequenceTimeUnit InTimeUnit);
	enum class ERichCurveTangentWeightMode GetTangentWeightMode();
	enum class ERichCurveTangentMode GetTangentMode();
	float GetLeaveTangentWeight();
	float GetLeaveTangent();
	enum class ERichCurveInterpMode GetInterpolationMode();
	float GetArriveTangentWeight();
	float GetArriveTangent();
};

// 0x30 (0x60 - 0x30)
// Class SequencerScripting.MovieSceneScriptingDoubleChannel
class UMovieSceneScriptingDoubleChannel : public UMovieSceneScriptingChannel
{
public:
	uint8                                        Pad_1482[0x30];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneScriptingDoubleChannel");
		return Clss;
	}

	void SetPreInfinityExtrapolation(enum class ERichCurveExtrapolation InInExtrapolation);
	void SetPostInfinityExtrapolation(enum class ERichCurveExtrapolation InInExtrapolation);
	void SetDefault(double InInDefaultValue);
	void RemoveKey(class UMovieSceneScriptingKey* InKey);
	void RemoveDefault();
	bool HasDefault();
	enum class ERichCurveExtrapolation GetPreInfinityExtrapolation();
	enum class ERichCurveExtrapolation GetPostInfinityExtrapolation();
	int32 GetNumKeys();
	TArray<class UMovieSceneScriptingKey*> GetKeys();
	double GetDefault();
	TArray<double> EvaluateKeys(const struct FSequencerScriptingRange& InRange, const struct FFrameRate& InFrameRate);
	struct FSequencerScriptingRange ComputeEffectiveRange();
	class UMovieSceneScriptingDoubleKey* AddKey(struct FFrameNumber& InInTime, double InNewValue, float InSubFrame, enum class ESequenceTimeUnit InTimeUnit, enum class EMovieSceneKeyInterpolation InInInterpolation);
};

// 0x20 (0x60 - 0x40)
// Class SequencerScripting.MovieSceneScriptingEventKey
class UMovieSceneScriptingEventKey : public UMovieSceneScriptingKey
{
public:
	uint8                                        Pad_14AC[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneScriptingEventKey");
		return Clss;
	}

	void SetValue(struct FMovieSceneEvent& InInNewValue);
	void SetTime(struct FFrameNumber& InNewFrameNumber, float InSubFrame, enum class ESequenceTimeUnit InTimeUnit);
	struct FMovieSceneEvent GetValue();
	struct FFrameTime GetTime(enum class ESequenceTimeUnit InTimeUnit);
};

// 0x30 (0x60 - 0x30)
// Class SequencerScripting.MovieSceneScriptingEventChannel
class UMovieSceneScriptingEventChannel : public UMovieSceneScriptingChannel
{
public:
	uint8                                        Pad_14D4[0x30];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneScriptingEventChannel");
		return Clss;
	}

	void RemoveKey(class UMovieSceneScriptingKey* InKey);
	TArray<class UMovieSceneScriptingKey*> GetKeys();
	class UMovieSceneScriptingEventKey* AddKey(struct FFrameNumber& InInTime, const struct FMovieSceneEvent& InNewValue, float InSubFrame, enum class ESequenceTimeUnit InTimeUnit);
};

// 0x0 (0x40 - 0x40)
// Class SequencerScripting.MovieSceneScriptingFloatKey
class UMovieSceneScriptingFloatKey : public UMovieSceneScriptingKey
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneScriptingFloatKey");
		return Clss;
	}

	void SetValue(float InInNewValue);
	void SetTime(struct FFrameNumber& InNewFrameNumber, float InSubFrame, enum class ESequenceTimeUnit InTimeUnit);
	void SetTangentWeightMode(enum class ERichCurveTangentWeightMode InInNewValue);
	void SetTangentMode(enum class ERichCurveTangentMode InInNewValue);
	void SetLeaveTangentWeight(float InInNewValue);
	void SetLeaveTangent(float InInNewValue);
	void SetInterpolationMode(enum class ERichCurveInterpMode InInNewValue);
	void SetArriveTangentWeight(float InInNewValue);
	void SetArriveTangent(float InInNewValue);
	float GetValue();
	struct FFrameTime GetTime(enum class ESequenceTimeUnit InTimeUnit);
	enum class ERichCurveTangentWeightMode GetTangentWeightMode();
	enum class ERichCurveTangentMode GetTangentMode();
	float GetLeaveTangentWeight();
	float GetLeaveTangent();
	enum class ERichCurveInterpMode GetInterpolationMode();
	float GetArriveTangentWeight();
	float GetArriveTangent();
};

// 0x20 (0x60 - 0x40)
// Class SequencerScripting.MovieSceneScriptingActualFloatKey
class UMovieSceneScriptingActualFloatKey : public UMovieSceneScriptingFloatKey
{
public:
	uint8                                        Pad_151D[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneScriptingActualFloatKey");
		return Clss;
	}

};

// 0x20 (0x60 - 0x40)
// Class SequencerScripting.MovieSceneScriptingDoubleAsFloatKey
class UMovieSceneScriptingDoubleAsFloatKey : public UMovieSceneScriptingFloatKey
{
public:
	uint8                                        Pad_1520[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneScriptingDoubleAsFloatKey");
		return Clss;
	}

};

// 0x50 (0x80 - 0x30)
// Class SequencerScripting.MovieSceneScriptingFloatChannel
class UMovieSceneScriptingFloatChannel : public UMovieSceneScriptingChannel
{
public:
	uint8                                        Pad_1566[0x50];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneScriptingFloatChannel");
		return Clss;
	}

	void SetPreInfinityExtrapolation(enum class ERichCurveExtrapolation InInExtrapolation);
	void SetPostInfinityExtrapolation(enum class ERichCurveExtrapolation InInExtrapolation);
	void SetDefault(float InInDefaultValue);
	void RemoveKey(class UMovieSceneScriptingKey* InKey);
	void RemoveDefault();
	bool HasDefault();
	enum class ERichCurveExtrapolation GetPreInfinityExtrapolation();
	enum class ERichCurveExtrapolation GetPostInfinityExtrapolation();
	int32 GetNumKeys();
	TArray<class UMovieSceneScriptingKey*> GetKeys();
	float GetDefault();
	TArray<float> EvaluateKeys(const struct FSequencerScriptingRange& InRange, const struct FFrameRate& InFrameRate);
	struct FSequencerScriptingRange ComputeEffectiveRange();
	class UMovieSceneScriptingFloatKey* AddKey(struct FFrameNumber& InInTime, float InNewValue, float InSubFrame, enum class ESequenceTimeUnit InTimeUnit, enum class EMovieSceneKeyInterpolation InInInterpolation);
};

// 0x20 (0x60 - 0x40)
// Class SequencerScripting.MovieSceneScriptingIntegerKey
class UMovieSceneScriptingIntegerKey : public UMovieSceneScriptingKey
{
public:
	uint8                                        Pad_15A7[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneScriptingIntegerKey");
		return Clss;
	}

	void SetValue(int32 InInNewValue);
	void SetTime(struct FFrameNumber& InNewFrameNumber, float InSubFrame, enum class ESequenceTimeUnit InTimeUnit);
	int32 GetValue();
	struct FFrameTime GetTime(enum class ESequenceTimeUnit InTimeUnit);
};

// 0x30 (0x60 - 0x30)
// Class SequencerScripting.MovieSceneScriptingIntegerChannel
class UMovieSceneScriptingIntegerChannel : public UMovieSceneScriptingChannel
{
public:
	uint8                                        Pad_15D9[0x30];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneScriptingIntegerChannel");
		return Clss;
	}

	void SetDefault(int32 InInDefaultValue);
	void RemoveKey(class UMovieSceneScriptingKey* InKey);
	void RemoveDefault();
	bool HasDefault();
	TArray<class UMovieSceneScriptingKey*> GetKeys();
	int32 GetDefault();
	class UMovieSceneScriptingIntegerKey* AddKey(struct FFrameNumber& InInTime, int32 InNewValue, float InSubFrame, enum class ESequenceTimeUnit InTimeUnit);
};

// 0x20 (0x60 - 0x40)
// Class SequencerScripting.MovieSceneScriptingObjectPathKey
class UMovieSceneScriptingObjectPathKey : public UMovieSceneScriptingKey
{
public:
	uint8                                        Pad_15F8[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneScriptingObjectPathKey");
		return Clss;
	}

	void SetValue(class UObject* InInNewValue);
	void SetTime(struct FFrameNumber& InNewFrameNumber, float InSubFrame, enum class ESequenceTimeUnit InTimeUnit);
	class UObject* GetValue();
	struct FFrameTime GetTime(enum class ESequenceTimeUnit InTimeUnit);
};

// 0x30 (0x60 - 0x30)
// Class SequencerScripting.MovieSceneScriptingObjectPathChannel
class UMovieSceneScriptingObjectPathChannel : public UMovieSceneScriptingChannel
{
public:
	uint8                                        Pad_1637[0x30];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneScriptingObjectPathChannel");
		return Clss;
	}

	void SetDefault(class UObject* InInDefaultValue);
	void RemoveKey(class UMovieSceneScriptingKey* InKey);
	void RemoveDefault();
	bool HasDefault();
	TArray<class UMovieSceneScriptingKey*> GetKeys();
	class UObject* GetDefault();
	class UMovieSceneScriptingObjectPathKey* AddKey(const struct FFrameNumber& InInTime, class UObject* InNewValue, float InSubFrame, enum class ESequenceTimeUnit InTimeUnit);
};

// 0x20 (0x60 - 0x40)
// Class SequencerScripting.MovieSceneScriptingStringKey
class UMovieSceneScriptingStringKey : public UMovieSceneScriptingKey
{
public:
	uint8                                        Pad_1664[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneScriptingStringKey");
		return Clss;
	}

	void SetValue(const class FString& InInNewValue);
	void SetTime(struct FFrameNumber& InNewFrameNumber, float InSubFrame, enum class ESequenceTimeUnit InTimeUnit);
	class FString GetValue();
	struct FFrameTime GetTime(enum class ESequenceTimeUnit InTimeUnit);
};

// 0x30 (0x60 - 0x30)
// Class SequencerScripting.MovieSceneScriptingStringChannel
class UMovieSceneScriptingStringChannel : public UMovieSceneScriptingChannel
{
public:
	uint8                                        Pad_1684[0x30];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneScriptingStringChannel");
		return Clss;
	}

	void SetDefault(const class FString& InInDefaultValue);
	void RemoveKey(class UMovieSceneScriptingKey* InKey);
	void RemoveDefault();
	bool HasDefault();
	TArray<class UMovieSceneScriptingKey*> GetKeys();
	class FString GetDefault();
	class UMovieSceneScriptingStringKey* AddKey(struct FFrameNumber& InInTime, const class FString& InNewValue, float InSubFrame, enum class ESequenceTimeUnit InTimeUnit);
};

// 0x0 (0x28 - 0x28)
// Class SequencerScripting.MovieSceneBindingExtensions
class UMovieSceneBindingExtensions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneBindingExtensions");
		return Clss;
	}

	void SetParent(struct FMovieSceneBindingProxy& InInBinding, struct FMovieSceneBindingProxy& InInParentBinding);
	void SetName(struct FMovieSceneBindingProxy& InInBinding, const class FString& InInName);
	void SetDisplayName(struct FMovieSceneBindingProxy& InInBinding, class FText& InInDisplayName);
	void RemoveTrack(struct FMovieSceneBindingProxy& InInBinding, class UMovieSceneTrack* InTrackToRemove);
	void Remove(struct FMovieSceneBindingProxy& InInBinding);
	void MoveBindingContents(struct FMovieSceneBindingProxy& InSourceBindingId, struct FMovieSceneBindingProxy& InDestinationBindingId);
	bool IsValid(struct FMovieSceneBindingProxy& InInBinding);
	TArray<class UMovieSceneTrack*> GetTracks(struct FMovieSceneBindingProxy& InInBinding);
	class UClass* GetPossessedObjectClass(struct FMovieSceneBindingProxy& InInBinding);
	struct FMovieSceneBindingProxy GetParent(struct FMovieSceneBindingProxy& InInBinding);
	class UObject* GetObjectTemplate(struct FMovieSceneBindingProxy& InInBinding);
	class FString GetName(struct FMovieSceneBindingProxy& InInBinding);
	struct FGuid GetId(struct FMovieSceneBindingProxy& InInBinding);
	class FText GetDisplayName(struct FMovieSceneBindingProxy& InInBinding);
	TArray<struct FMovieSceneBindingProxy> GetChildPossessables(struct FMovieSceneBindingProxy& InInBinding);
	TArray<class UMovieSceneTrack*> FindTracksByType(struct FMovieSceneBindingProxy& InInBinding, TSubclassOf<class UMovieSceneTrack> InTrackType);
	TArray<class UMovieSceneTrack*> FindTracksByExactType(struct FMovieSceneBindingProxy& InInBinding, TSubclassOf<class UMovieSceneTrack> InTrackType);
	class UMovieSceneTrack* AddTrack(struct FMovieSceneBindingProxy& InInBinding, TSubclassOf<class UMovieSceneTrack> InTrackType);
};

// 0x0 (0x28 - 0x28)
// Class SequencerScripting.MovieSceneEventTrackExtensions
class UMovieSceneEventTrackExtensions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneEventTrackExtensions");
		return Clss;
	}

	class UClass* GetBoundObjectPropertyClass(struct FMovieSceneEvent& InEventKey);
	class UMovieSceneEventTriggerSection* AddEventTriggerSection(class UMovieSceneEventTrack* InInTrack);
	class UMovieSceneEventRepeaterSection* AddEventRepeaterSection(class UMovieSceneEventTrack* InInTrack);
};

// 0x0 (0x28 - 0x28)
// Class SequencerScripting.MovieSceneFolderExtensions
class UMovieSceneFolderExtensions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneFolderExtensions");
		return Clss;
	}

	bool SetFolderName(class UMovieSceneFolder* InFolder, class FName InInFolderName);
	bool SetFolderColor(class UMovieSceneFolder* InFolder, const struct FColor& InInFolderColor);
	bool RemoveChildObjectBinding(class UMovieSceneFolder* InFolder, const struct FMovieSceneBindingProxy& InInObjectBinding);
	bool RemoveChildMasterTrack(class UMovieSceneFolder* InFolder, class UMovieSceneTrack* InInMasterTrack);
	bool RemoveChildFolder(class UMovieSceneFolder* InTargetFolder, class UMovieSceneFolder* InFolderToRemove);
	class FName GetFolderName(class UMovieSceneFolder* InFolder);
	struct FColor GetFolderColor(class UMovieSceneFolder* InFolder);
	TArray<struct FMovieSceneBindingProxy> GetChildObjectBindings(class UMovieSceneFolder* InFolder);
	TArray<class UMovieSceneTrack*> GetChildMasterTracks(class UMovieSceneFolder* InFolder);
	TArray<class UMovieSceneFolder*> GetChildFolders(class UMovieSceneFolder* InFolder);
	bool AddChildObjectBinding(class UMovieSceneFolder* InFolder, const struct FMovieSceneBindingProxy& InInObjectBinding);
	bool AddChildMasterTrack(class UMovieSceneFolder* InFolder, class UMovieSceneTrack* InInMasterTrack);
	bool AddChildFolder(class UMovieSceneFolder* InTargetFolder, class UMovieSceneFolder* InFolderToAdd);
};

// 0x0 (0x28 - 0x28)
// Class SequencerScripting.MovieSceneMaterialTrackExtensions
class UMovieSceneMaterialTrackExtensions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneMaterialTrackExtensions");
		return Clss;
	}

	void SetMaterialIndex(class UMovieSceneComponentMaterialTrack* InTrack, int32 InMaterialIndex);
	int32 GetMaterialIndex(class UMovieSceneComponentMaterialTrack* InTrack);
};

// 0x0 (0x28 - 0x28)
// Class SequencerScripting.MovieScenePrimitiveMaterialTrackExtensions
class UMovieScenePrimitiveMaterialTrackExtensions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieScenePrimitiveMaterialTrackExtensions");
		return Clss;
	}

	void SetMaterialIndex(class UMovieScenePrimitiveMaterialTrack* InTrack, int32 InMaterialIndex);
	int32 GetMaterialIndex(class UMovieScenePrimitiveMaterialTrack* InTrack);
};

// 0x0 (0x28 - 0x28)
// Class SequencerScripting.MovieScenePropertyTrackExtensions
class UMovieScenePropertyTrackExtensions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieScenePropertyTrackExtensions");
		return Clss;
	}

	void SetPropertyNameAndPath(class UMovieScenePropertyTrack* InTrack, class FName& InInPropertyName, const class FString& InInPropertyPath);
	void SetObjectPropertyClass(class UMovieSceneObjectPropertyTrack* InTrack, class UClass* InPropertyClass);
	void SetByteTrackEnum(class UMovieSceneByteTrack* InTrack, class UEnum* InInEnum);
	class FName GetUniqueTrackName(class UMovieScenePropertyTrack* InTrack);
	class FString GetPropertyPath(class UMovieScenePropertyTrack* InTrack);
	class FName GetPropertyName(class UMovieScenePropertyTrack* InTrack);
	class UClass* GetObjectPropertyClass(class UMovieSceneObjectPropertyTrack* InTrack);
	class UEnum* GetByteTrackEnum(class UMovieSceneByteTrack* InTrack);
};

// 0x0 (0x28 - 0x28)
// Class SequencerScripting.MovieSceneSectionExtensions
class UMovieSceneSectionExtensions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneSectionExtensions");
		return Clss;
	}

	void SetStartFrameSeconds(class UMovieSceneSection* InSection, float InStartTime);
	void SetStartFrameBounded(class UMovieSceneSection* InSection, bool InbIsBounded);
	void SetStartFrame(class UMovieSceneSection* InSection, int32 InStartFrame);
	void SetRangeSeconds(class UMovieSceneSection* InSection, float InStartTime, float InEndTime);
	void SetRange(class UMovieSceneSection* InSection, int32 InStartFrame, int32 InEndFrame);
	void SetEndFrameSeconds(class UMovieSceneSection* InSection, float InEndTime);
	void SetEndFrameBounded(class UMovieSceneSection* InSection, bool InbIsBounded);
	void SetEndFrame(class UMovieSceneSection* InSection, int32 InEndFrame);
	bool HasStartFrame(class UMovieSceneSection* InSection);
	bool HasEndFrame(class UMovieSceneSection* InSection);
	float GetStartFrameSeconds(class UMovieSceneSection* InSection);
	int32 GetStartFrame(class UMovieSceneSection* InSection);
	int32 GetParentSequenceFrame(class UMovieSceneSubSection* InSection, int32 InInFrame, class UMovieSceneSequence* InParentSequence);
	float GetEndFrameSeconds(class UMovieSceneSection* InSection);
	int32 GetEndFrame(class UMovieSceneSection* InSection);
	TArray<class UMovieSceneScriptingChannel*> GetChannelsByType(class UMovieSceneSection* InSection, TSubclassOf<class UMovieSceneScriptingChannel> InChannelType);
	TArray<class UMovieSceneScriptingChannel*> GetChannels(class UMovieSceneSection* InSection);
	float GetAutoSizeStartFrameSeconds(class UMovieSceneSection* InSection);
	int32 GetAutoSizeStartFrame(class UMovieSceneSection* InSection);
	bool GetAutoSizeHasStartFrame(class UMovieSceneSection* InSection);
	bool GetAutoSizeHasEndFrame(class UMovieSceneSection* InSection);
	float GetAutoSizeEndFrameSeconds(class UMovieSceneSection* InSection);
	int32 GetAutoSizeEndFrame(class UMovieSceneSection* InSection);
	TArray<class UMovieSceneScriptingChannel*> GetAllChannels(class UMovieSceneSection* InSection);
	TArray<class UMovieSceneScriptingChannel*> FindChannelsByType(class UMovieSceneSection* InSection, TSubclassOf<class UMovieSceneScriptingChannel> InChannelType);
};

// 0x0 (0x28 - 0x28)
// Class SequencerScripting.MovieSceneSequenceExtensions
class UMovieSceneSequenceExtensions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneSequenceExtensions");
		return Clss;
	}

	void SortMarkedFrames(class UMovieSceneSequence* InSequence);
	void SetWorkRangeStart(class UMovieSceneSequence* InInSequence, float InStartTimeInSeconds);
	void SetWorkRangeEnd(class UMovieSceneSequence* InInSequence, float InEndTimeInSeconds);
	void SetViewRangeStart(class UMovieSceneSequence* InInSequence, float InStartTimeInSeconds);
	void SetViewRangeEnd(class UMovieSceneSequence* InInSequence, float InEndTimeInSeconds);
	void SetTickResolutionDirectly(class UMovieSceneSequence* InSequence, const struct FFrameRate& InTickResolution);
	void SetTickResolution(class UMovieSceneSequence* InSequence, const struct FFrameRate& InTickResolution);
	void SetReadOnly(class UMovieSceneSequence* InSequence, bool InbInReadOnly);
	void SetPlaybackStartSeconds(class UMovieSceneSequence* InSequence, float InStartTime);
	void SetPlaybackStart(class UMovieSceneSequence* InSequence, int32 InStartFrame);
	void SetPlaybackEndSeconds(class UMovieSceneSequence* InSequence, float InEndTime);
	void SetPlaybackEnd(class UMovieSceneSequence* InSequence, int32 InEndFrame);
	void SetMarkedFrame(class UMovieSceneSequence* InSequence, int32 InInMarkIndex, const struct FFrameNumber& InInFrameNumber);
	void SetEvaluationType(class UMovieSceneSequence* InInSequence, enum class EMovieSceneEvaluationType InInEvaluationType);
	void SetDisplayRate(class UMovieSceneSequence* InSequence, const struct FFrameRate& InDisplayRate);
	void SetClockSource(class UMovieSceneSequence* InInSequence, enum class EUpdateClockSource InInClockSource);
	struct FMovieSceneBindingProxy ResolveBindingID(class UMovieSceneSequence* InMasterSequence, const struct FMovieSceneObjectBindingID& InInObjectBindingID);
	void RemoveRootFolderFromSequence(class UMovieSceneSequence* InSequence, class UMovieSceneFolder* InFolder);
	bool RemoveMasterTrack(class UMovieSceneSequence* InSequence, class UMovieSceneTrack* InMasterTrack);
	struct FSequencerScriptingRange MakeRangeSeconds(class UMovieSceneSequence* InSequence, float InStartTime, float InDuration);
	struct FSequencerScriptingRange MakeRange(class UMovieSceneSequence* InSequence, int32 InStartFrame, int32 InDuration);
	struct FMovieSceneObjectBindingID MakeBindingID(class UMovieSceneSequence* InMasterSequence, struct FMovieSceneBindingProxy& InInBinding, enum class EMovieSceneObjectBindingSpace InSpace);
	TArray<class UObject*> LocateBoundObjects(class UMovieSceneSequence* InSequence, struct FMovieSceneBindingProxy& InInBinding, class UObject* InContext);
	bool IsReadOnly(class UMovieSceneSequence* InSequence);
	float GetWorkRangeStart(class UMovieSceneSequence* InInSequence);
	float GetWorkRangeEnd(class UMovieSceneSequence* InInSequence);
	float GetViewRangeStart(class UMovieSceneSequence* InInSequence);
	float GetViewRangeEnd(class UMovieSceneSequence* InInSequence);
	struct FTimecode GetTimecodeSource(class UMovieSceneSequence* InSequence);
	struct FFrameRate GetTickResolution(class UMovieSceneSequence* InSequence);
	TArray<struct FMovieSceneBindingProxy> GetSpawnables(class UMovieSceneSequence* InSequence);
	TArray<class UMovieSceneFolder*> GetRootFoldersInSequence(class UMovieSceneSequence* InSequence);
	TArray<struct FMovieSceneBindingProxy> GetPossessables(class UMovieSceneSequence* InSequence);
	struct FMovieSceneObjectBindingID GetPortableBindingID(class UMovieSceneSequence* InMasterSequence, class UMovieSceneSequence* InDestinationSequence, struct FMovieSceneBindingProxy& InInBinding);
	float GetPlaybackStartSeconds(class UMovieSceneSequence* InSequence);
	int32 GetPlaybackStart(class UMovieSceneSequence* InSequence);
	struct FSequencerScriptingRange GetPlaybackRange(class UMovieSceneSequence* InSequence);
	float GetPlaybackEndSeconds(class UMovieSceneSequence* InSequence);
	int32 GetPlaybackEnd(class UMovieSceneSequence* InSequence);
	class UMovieScene* GetMovieScene(class UMovieSceneSequence* InSequence);
	TArray<class UMovieSceneTrack*> GetMasterTracks(class UMovieSceneSequence* InSequence);
	TArray<struct FMovieSceneMarkedFrame> GetMarkedFrames(class UMovieSceneSequence* InSequence);
	enum class EMovieSceneEvaluationType GetEvaluationType(class UMovieSceneSequence* InInSequence);
	struct FFrameRate GetDisplayRate(class UMovieSceneSequence* InSequence);
	enum class EUpdateClockSource GetClockSource(class UMovieSceneSequence* InInSequence);
	TArray<struct FMovieSceneBindingProxy> GetBindings(class UMovieSceneSequence* InSequence);
	struct FMovieSceneObjectBindingID GetBindingID(struct FMovieSceneBindingProxy& InInBinding);
	int32 FindNextMarkedFrame(class UMovieSceneSequence* InSequence, const struct FFrameNumber& InInFrameNumber, bool InbForward);
	TArray<class UMovieSceneTrack*> FindMasterTracksByType(class UMovieSceneSequence* InSequence, TSubclassOf<class UMovieSceneTrack> InTrackType);
	TArray<class UMovieSceneTrack*> FindMasterTracksByExactType(class UMovieSceneSequence* InSequence, TSubclassOf<class UMovieSceneTrack> InTrackType);
	int32 FindMarkedFrameByLabel(class UMovieSceneSequence* InSequence, const class FString& InInLabel);
	int32 FindMarkedFrameByFrameNumber(class UMovieSceneSequence* InSequence, const struct FFrameNumber& InInFrameNumber);
	struct FMovieSceneBindingProxy FindBindingByName(class UMovieSceneSequence* InSequence, const class FString& InName);
	struct FMovieSceneBindingProxy FindBindingById(class UMovieSceneSequence* InSequence, const struct FGuid& InBindingId);
	void DeleteMarkedFrames(class UMovieSceneSequence* InSequence);
	void DeleteMarkedFrame(class UMovieSceneSequence* InSequence, int32 InDeleteIndex);
	struct FMovieSceneBindingProxy AddSpawnableFromInstance(class UMovieSceneSequence* InSequence, class UObject* InObjectToSpawn);
	struct FMovieSceneBindingProxy AddSpawnableFromClass(class UMovieSceneSequence* InSequence, class UClass* InClassToSpawn);
	class UMovieSceneFolder* AddRootFolderToSequence(class UMovieSceneSequence* InSequence, const class FString& InNewFolderName);
	struct FMovieSceneBindingProxy AddPossessable(class UMovieSceneSequence* InSequence, class UObject* InObjectToPossess);
	class UMovieSceneTrack* AddMasterTrack(class UMovieSceneSequence* InSequence, TSubclassOf<class UMovieSceneTrack> InTrackType);
	int32 AddMarkedFrame(class UMovieSceneSequence* InSequence, struct FMovieSceneMarkedFrame& InInMarkedFrame);
};

// 0x0 (0x28 - 0x28)
// Class SequencerScripting.MovieSceneTrackExtensions
class UMovieSceneTrackExtensions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneTrackExtensions");
		return Clss;
	}

	void SetTrackRowDisplayName(class UMovieSceneTrack* InTrack, class FText& InInName, int32 InRowIndex);
	void SetSortingOrder(class UMovieSceneTrack* InTrack, int32 InSortingOrder);
	void SetSectionToKey(class UMovieSceneTrack* InTrack, class UMovieSceneSection* InSection);
	void SetDisplayName(class UMovieSceneTrack* InTrack, class FText& InInName);
	void SetColorTint(class UMovieSceneTrack* InTrack, struct FColor& InColorTint);
	void RemoveSection(class UMovieSceneTrack* InTrack, class UMovieSceneSection* InSection);
	class FText GetTrackRowDisplayName(class UMovieSceneTrack* InTrack, int32 InRowIndex);
	int32 GetSortingOrder(class UMovieSceneTrack* InTrack);
	class UMovieSceneSection* GetSectionToKey(class UMovieSceneTrack* InTrack);
	TArray<class UMovieSceneSection*> GetSections(class UMovieSceneTrack* InTrack);
	class FText GetDisplayName(class UMovieSceneTrack* InTrack);
	struct FColor GetColorTint(class UMovieSceneTrack* InTrack);
	class UMovieSceneSection* AddSection(class UMovieSceneTrack* InTrack);
};

// 0x0 (0x28 - 0x28)
// Class SequencerScripting.MovieSceneFloatVectorTrackExtensions
class UMovieSceneFloatVectorTrackExtensions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneFloatVectorTrackExtensions");
		return Clss;
	}

	void SetNumChannelsUsed(class UMovieSceneFloatVectorTrack* InTrack, int32 InInNumChannelsUsed);
	int32 GetNumChannelsUsed(class UMovieSceneFloatVectorTrack* InTrack);
};

// 0x0 (0x28 - 0x28)
// Class SequencerScripting.MovieSceneDoubleVectorTrackExtensions
class UMovieSceneDoubleVectorTrackExtensions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneDoubleVectorTrackExtensions");
		return Clss;
	}

	void SetNumChannelsUsed(class UMovieSceneDoubleVectorTrack* InTrack, int32 InInNumChannelsUsed);
	int32 GetNumChannelsUsed(class UMovieSceneDoubleVectorTrack* InTrack);
};

// 0x0 (0x28 - 0x28)
// Class SequencerScripting.SequencerScriptingRangeExtensions
class USequencerScriptingRangeExtensions : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SequencerScriptingRangeExtensions");
		return Clss;
	}

	void SetStartSeconds(struct FSequencerScriptingRange& InRange, float InStart);
	void SetStartFrame(struct FSequencerScriptingRange& InRange, int32 InStart);
	void SetEndSeconds(struct FSequencerScriptingRange& InRange, float InEnd);
	void SetEndFrame(struct FSequencerScriptingRange& InRange, int32 InEnd);
	void RemoveStart(struct FSequencerScriptingRange& InRange);
	void RemoveEnd(struct FSequencerScriptingRange& InRange);
	bool HasStart(struct FSequencerScriptingRange& InRange);
	bool HasEnd(struct FSequencerScriptingRange& InRange);
	float GetStartSeconds(struct FSequencerScriptingRange& InRange);
	int32 GetStartFrame(struct FSequencerScriptingRange& InRange);
	float GetEndSeconds(struct FSequencerScriptingRange& InRange);
	int32 GetEndFrame(struct FSequencerScriptingRange& InRange);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
