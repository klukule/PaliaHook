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

// 0x68 (0x90 - 0x28)
// Class VariantManagerContent.LevelVariantSets
class ULevelVariantSets : public UObject
{
public:
	TSubclassOf<class UObject>                   DirectorClass;                                     // 0x28(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UVariantSet*>                   VariantSets;                                       // 0x30(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1A85[0x50];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("LevelVariantSets");

		return Clss;
	}

	class UVariantSet* GetVariantSetByName(const class FString& VariantSetName);
	class UVariantSet* GetVariantSet(int32 VariantSetIndex);
	int32 GetNumVariantSets();
};

// 0x70 (0x300 - 0x290)
// Class VariantManagerContent.LevelVariantSetsActor
class ALevelVariantSetsActor : public AActor
{
public:
	struct FSoftObjectPath                       LevelVariantSets;                                  // 0x290(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<TSubclassOf<class UObject>, class ULevelVariantSetsFunctionDirector*> DirectorInstances;                                 // 0x2B0(0x50)(Transient, UObjectWrapper, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("LevelVariantSetsActor");

		return Clss;
	}

	bool SwitchOnVariantByName(const class FString& VariantSetName, const class FString& VariantName);
	bool SwitchOnVariantByIndex(int32 VariantSetIndex, int32 VariantIndex);
	void SetLevelVariantSets(class ULevelVariantSets* InVariantSets);
	class ULevelVariantSets* GetLevelVariantSets(bool bLoad);
};

// 0x18 (0x40 - 0x28)
// Class VariantManagerContent.LevelVariantSetsFunctionDirector
class ULevelVariantSetsFunctionDirector : public UObject
{
public:
	uint8                                        Pad_1A9F[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("LevelVariantSetsFunctionDirector");

		return Clss;
	}

};

// 0x198 (0x1C0 - 0x28)
// Class VariantManagerContent.PropertyValue
class UPropertyValue : public UObject
{
public:
	uint8                                        Pad_1AB2[0x60];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<FFieldPathProperty_>                  Properties;                                        // 0x88(0x10)(ZeroConstructor, Deprecated, Protected, NativeAccessSpecifierProtected)
	TArray<int32>                                PropertyIndices;                                   // 0x98(0x10)(ZeroConstructor, Deprecated, Protected, NativeAccessSpecifierProtected)
	TArray<struct FCapturedPropSegment>          CapturedPropSegments;                              // 0xA8(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	class FString                                FullDisplayString;                                 // 0xB8(0x10)(ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  PropertySetterName;                                // 0xC8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TMap<class FString, class FString>           PropertySetterParameterDefaults;                   // 0xD0(0x50)(Protected, NativeAccessSpecifierProtected)
	bool                                         bHasRecordedData;                                  // 0x120(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1AB9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UObject>                   LeafPropertyClass;                                 // 0x128(0x8)(ZeroConstructor, Deprecated, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1ABB[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<uint8>                                ValueBytes;                                        // 0x138(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	enum class EPropertyValueCategory            PropCategory;                                      // 0x148(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1ABC[0x77];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("PropertyValue");

		return Clss;
	}

	bool HasRecordedData();
	class FText GetPropertyTooltip();
	class FString GetFullDisplayString();
};

// 0x0 (0x1C0 - 0x1C0)
// Class VariantManagerContent.PropertyValueTransform
class UPropertyValueTransform : public UPropertyValue
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("PropertyValueTransform");

		return Clss;
	}

};

// 0x0 (0x1C0 - 0x1C0)
// Class VariantManagerContent.PropertyValueVisibility
class UPropertyValueVisibility : public UPropertyValue
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("PropertyValueVisibility");

		return Clss;
	}

};

// 0x0 (0x1C0 - 0x1C0)
// Class VariantManagerContent.PropertyValueColor
class UPropertyValueColor : public UPropertyValue
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("PropertyValueColor");

		return Clss;
	}

};

// 0x0 (0x1C0 - 0x1C0)
// Class VariantManagerContent.PropertyValueMaterial
class UPropertyValueMaterial : public UPropertyValue
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("PropertyValueMaterial");

		return Clss;
	}

};

// 0x0 (0x1C0 - 0x1C0)
// Class VariantManagerContent.PropertyValueOption
class UPropertyValueOption : public UPropertyValue
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("PropertyValueOption");

		return Clss;
	}

};

// 0x0 (0x1C0 - 0x1C0)
// Class VariantManagerContent.PropertyValueSoftObject
class UPropertyValueSoftObject : public UPropertyValue
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("PropertyValueSoftObject");

		return Clss;
	}

};

// 0x28 (0x2B8 - 0x290)
// Class VariantManagerContent.SwitchActor
class ASwitchActor : public AActor
{
public:
	uint8                                        Pad_1AD9[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class USceneComponent*                       SceneComponent;                                    // 0x2A8(0x8)(Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        LastSelectedOption;                                // 0x2B0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1ADB[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("SwitchActor");

		return Clss;
	}

	void SelectOption(int32 OptionIndex);
	int32 GetSelectedOption();
	TArray<class AActor*> GetOptions();
};

// 0x58 (0x80 - 0x28)
// Class VariantManagerContent.Variant
class UVariant : public UObject
{
public:
	TArray<struct FVariantDependency>            Dependencies;                                      // 0x28(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	class FText                                  DisplayText;                                       // 0x38(0x18)(Deprecated, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1B48[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UVariantObjectBinding*>         ObjectBindings;                                    // 0x68(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate)
	class UTexture2D*                            Thumbnail;                                         // 0x78(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("Variant");

		return Clss;
	}

	void SwitchOn();
	void SetThumbnailFromTexture(class UTexture2D* NewThumbnail);
	void SetThumbnailFromFile(const class FString& FilePath);
	void SetThumbnailFromEditorViewport();
	void SetThumbnailFromCamera(class UObject* WorldContextObject, struct FTransform& CameraTransform, float FOVDegrees, float MinZ, float Gamma);
	void SetDisplayText(class FText& NewDisplayText);
	void SetDependency(int32 Index, struct FVariantDependency* Dependency);
	bool IsActive();
	class UTexture2D* GetThumbnail();
	class UVariantSet* GetParent();
	int32 GetNumDependencies();
	int32 GetNumActors();
	class FText GetDisplayText();
	TArray<class UVariant*> GetDependents(class ULevelVariantSets* LevelVariantSets, bool bOnlyEnabledDependencies);
	struct FVariantDependency GetDependency(int32 Index);
	class AActor* GetActor(int32 ActorIndex);
	void DeleteDependency(int32 Index);
	int32 AddDependency(struct FVariantDependency* Dependency);
};

// 0x70 (0x98 - 0x28)
// Class VariantManagerContent.VariantObjectBinding
class UVariantObjectBinding : public UObject
{
public:
	class FString                                CachedActorLabel;                                  // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FSoftObjectPath                       ObjectPtr;                                         // 0x38(0x20)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TLazyObjectPtr<class UObject>                LazyObjectPtr;                                     // 0x58(0x1C)(IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1B53[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UPropertyValue*>                CapturedProperties;                                // 0x78(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate)
	TArray<struct FFunctionCaller>               FunctionCallers;                                   // 0x88(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("VariantObjectBinding");

		return Clss;
	}

};

// 0x50 (0x78 - 0x28)
// Class VariantManagerContent.VariantSet
class UVariantSet : public UObject
{
public:
	class FText                                  DisplayText;                                       // 0x28(0x18)(Deprecated, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1B88[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bExpanded;                                         // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1B8B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UVariant*>                      Variants;                                          // 0x60(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate)
	class UTexture2D*                            Thumbnail;                                         // 0x70(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("VariantSet");

		return Clss;
	}

	void SetThumbnailFromTexture(class UTexture2D* NewThumbnail);
	void SetThumbnailFromFile(const class FString& FilePath);
	void SetThumbnailFromEditorViewport();
	void SetThumbnailFromCamera(class UObject* WorldContextObject, struct FTransform& CameraTransform, float FOVDegrees, float MinZ, float Gamma);
	void SetDisplayText(class FText& NewDisplayText);
	class UVariant* GetVariantByName(const class FString& VariantName);
	class UVariant* GetVariant(int32 VariantIndex);
	class UTexture2D* GetThumbnail();
	class ULevelVariantSets* GetParent();
	int32 GetNumVariants();
	class FText GetDisplayText();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
