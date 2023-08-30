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

// 0x0 (0x620 - 0x620)
// Class Paper2D.PaperCharacter
class APaperCharacter : public ACharacter
{
public:
	class UPaperFlipbookComponent*               Sprite;                                            // 0x618(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PaperCharacter");
		return Clss;
	}

};

// 0x28 (0x50 - 0x28)
// Class Paper2D.PaperFlipbook
class UPaperFlipbook : public UObject
{
public:
	float                                        FramesPerSecond;                                   // 0x28(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_139E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FPaperFlipbookKeyFrame>        KeyFrames;                                         // 0x30(0x10)(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	class UMaterialInterface*                    DefaultMaterial;                                   // 0x40(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EFlipbookCollisionMode            CollisionSource;                                   // 0x48(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_13A1[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PaperFlipbook");
		return Clss;
	}

	bool IsValidKeyFrameIndex(int32 InIndex);
	float GetTotalDuration();
	class UPaperSprite* GetSpriteAtTime(float InTime, bool InbClampToEnds);
	class UPaperSprite* GetSpriteAtFrame(int32 InFrameIndex);
	int32 GetNumKeyFrames();
	int32 GetNumFrames();
	int32 GetKeyFrameIndexAtTime(float InTime, bool InbClampToEnds);
};

// 0x8 (0x298 - 0x290)
// Class Paper2D.PaperFlipbookActor
class APaperFlipbookActor : public AActor
{
public:
	class UPaperFlipbookComponent*               RenderComponent;                                   // 0x290(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PaperFlipbookActor");
		return Clss;
	}

};

// 0x50 (0x5C0 - 0x570)
// Class Paper2D.PaperFlipbookComponent
class UPaperFlipbookComponent : public UMeshComponent
{
public:
	class UPaperFlipbook*                        SourceFlipbook;                                    // 0x570(0x8)(Edit, Net, ZeroConstructor, RepNotify, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInterface*                    Material;                                          // 0x578(0x8)(ZeroConstructor, Deprecated, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        PlayRate;                                          // 0x580(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bLooping : 1;                                      // Mask: 0x1, PropSize: 0x10x584(0x1)(NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bReversePlayback : 1;                              // Mask: 0x2, PropSize: 0x10x584(0x1)(NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bPlaying : 1;                                      // Mask: 0x4, PropSize: 0x10x584(0x1)(NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        BitPad_AC : 5;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_1400[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        AccumulatedTime;                                   // 0x588(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        CachedFrameIndex;                                  // 0x58C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                          SpriteColor;                                       // 0x590(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UBodySetup*                            CachedBodySetup;                                   // 0x5A0(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnFinishedPlaying;                                 // 0x5A8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1403[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PaperFlipbookComponent");
		return Clss;
	}

	void Stop();
	void SetSpriteColor(const struct FLinearColor& InNewColor);
	void SetPlayRate(float InNewRate);
	void SetPlaybackPositionInFrames(int32 InNewFramePosition, bool InbFireEvents);
	void SetPlaybackPosition(float InNewPosition, bool InbFireEvents);
	void SetNewTime(float InNewTime);
	void SetLooping(bool InbNewLooping);
	bool SetFlipbook(class UPaperFlipbook* InNewFlipbook);
	void ReverseFromEnd();
	void Reverse();
	void PlayFromStart();
	void Play();
	void OnRep_SourceFlipbook(class UPaperFlipbook* InOldFlipbook);
	bool IsReversing();
	bool IsPlaying();
	bool IsLooping();
	struct FLinearColor GetSpriteColor();
	float GetPlayRate();
	int32 GetPlaybackPositionInFrames();
	float GetPlaybackPosition();
	int32 GetFlipbookLengthInFrames();
	float GetFlipbookLength();
	float GetFlipbookFramerate();
	class UPaperFlipbook* GetFlipbook();
};

// 0x8 (0x298 - 0x290)
// Class Paper2D.PaperGroupedSpriteActor
class APaperGroupedSpriteActor : public AActor
{
public:
	class UPaperGroupedSpriteComponent*          RenderComponent;                                   // 0x290(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PaperGroupedSpriteActor");
		return Clss;
	}

};

// 0x30 (0x5A0 - 0x570)
// Class Paper2D.PaperGroupedSpriteComponent
class UPaperGroupedSpriteComponent : public UMeshComponent
{
public:
	TArray<class UMaterialInterface*>            InstanceMaterials;                                 // 0x570(0x10)(ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TArray<struct FSpriteInstanceData>           PerInstanceSpriteData;                             // 0x580(0x10)(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_1451[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PaperGroupedSpriteComponent");
		return Clss;
	}

	bool UpdateInstanceTransform(int32 InInstanceIndex, struct FTransform& InNewInstanceTransform, bool InbWorldSpace, bool InbMarkRenderStateDirty, bool InbTeleport);
	bool UpdateInstanceColor(int32 InInstanceIndex, const struct FLinearColor& InNewInstanceColor, bool InbMarkRenderStateDirty);
	void SortInstancesAlongAxis(const struct FVector& InWorldSpaceSortAxis);
	bool RemoveInstance(int32 InInstanceIndex);
	bool GetInstanceTransform(int32 InInstanceIndex, struct FTransform* InOutInstanceTransform, bool InbWorldSpace);
	int32 GetInstanceCount();
	void ClearInstances();
	int32 AddInstance(struct FTransform& InTransform, class UPaperSprite* InSprite, bool InbWorldSpace, const struct FLinearColor& InColor);
};

// 0x8 (0x30 - 0x28)
// Class Paper2D.PaperRuntimeSettings
class UPaperRuntimeSettings : public UObject
{
public:
	bool                                         bEnableSpriteAtlasGroups;                          // 0x28(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableTerrainSplineEditing;                       // 0x29(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bResizeSpriteDataToMatchTextures;                  // 0x2A(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_145E[0x5];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PaperRuntimeSettings");
		return Clss;
	}

};

// 0x90 (0xB8 - 0x28)
// Class Paper2D.PaperSprite
class UPaperSprite : public UObject
{
public:
	uint8                                        Pad_1460[0x10];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UTexture*>                      AdditionalSourceTextures;                          // 0x38(0x10)(Edit, ZeroConstructor, AssetRegistrySearchable, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	struct FVector2D                             BakedSourceUV;                                     // 0x48(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector2D                             BakedSourceDimension;                              // 0x58(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTexture2D*                            BakedSourceTexture;                                // 0x68(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInterface*                    DefaultMaterial;                                   // 0x70(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInterface*                    AlternateMaterial;                                 // 0x78(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FPaperSpriteSocket>            Sockets;                                           // 0x80(0x10)(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	enum class ESpriteCollisionMode              SpriteCollisionDomain;                             // 0x90(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1464[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        PixelsPerUnrealUnit;                               // 0x94(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UBodySetup*                            BodySetup;                                         // 0x98(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        AlternateMaterialSplitIndex;                       // 0xA0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1465[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FVector4>                      BakedRenderData;                                   // 0xA8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PaperSprite");
		return Clss;
	}

};

// 0x8 (0x298 - 0x290)
// Class Paper2D.PaperSpriteActor
class APaperSpriteActor : public AActor
{
public:
	class UPaperSpriteComponent*                 RenderComponent;                                   // 0x290(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PaperSpriteActor");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class Paper2D.PaperSpriteAtlas
class UPaperSpriteAtlas : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PaperSpriteAtlas");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class Paper2D.PaperSpriteBlueprintLibrary
class UPaperSpriteBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PaperSpriteBlueprintLibrary");
		return Clss;
	}

	struct FSlateBrush MakeBrushFromSprite(class UPaperSprite* InSprite, int32 InWidth, int32 InHeight);
};

// 0x20 (0x590 - 0x570)
// Class Paper2D.PaperSpriteComponent
class UPaperSpriteComponent : public UMeshComponent
{
public:
	class UPaperSprite*                          SourceSprite;                                      // 0x570(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInterface*                    MaterialOverride;                                  // 0x578(0x8)(ZeroConstructor, Deprecated, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                          SpriteColor;                                       // 0x580(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PaperSpriteComponent");
		return Clss;
	}

	void SetSpriteColor(const struct FLinearColor& InNewColor);
	bool SetSprite(class UPaperSprite* InNewSprite);
	class UPaperSprite* GetSprite();
};

// 0x70 (0x98 - 0x28)
// Class Paper2D.PaperTileLayer
class UPaperTileLayer : public UObject
{
public:
	class FText                                  LayerName;                                         // 0x28(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	int32                                        LayerWidth;                                        // 0x40(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        LayerHeight;                                       // 0x44(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bHiddenInGame : 1;                                 // Mask: 0x1, PropSize: 0x10x48(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bLayerCollides : 1;                                // Mask: 0x2, PropSize: 0x10x48(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bOverrideCollisionThickness : 1;                   // Mask: 0x4, PropSize: 0x10x48(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bOverrideCollisionOffset : 1;                      // Mask: 0x8, PropSize: 0x10x48(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        BitPad_AD : 4;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_147C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CollisionThicknessOverride;                        // 0x4C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        CollisionOffsetOverride;                           // 0x50(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FLinearColor                          LayerColor;                                        // 0x54(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        AllocatedWidth;                                    // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        AllocatedHeight;                                   // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1480[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FPaperTileInfo>                AllocatedCells;                                    // 0x70(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	class UPaperTileSet*                         TileSet;                                           // 0x80(0x8)(ZeroConstructor, Deprecated, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<int32>                                AllocatedGrid;                                     // 0x88(0x10)(ZeroConstructor, Deprecated, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PaperTileLayer");
		return Clss;
	}

};

// 0x88 (0xB0 - 0x28)
// Class Paper2D.PaperTileMap
class UPaperTileMap : public UObject
{
public:
	int32                                        MapWidth;                                          // 0x28(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MapHeight;                                         // 0x2C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TileWidth;                                         // 0x30(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TileHeight;                                        // 0x34(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PixelsPerUnrealUnit;                               // 0x38(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SeparationPerTileX;                                // 0x3C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SeparationPerTileY;                                // 0x40(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SeparationPerLayer;                                // 0x44(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UPaperTileSet>          SelectedTileSet;                                   // 0x48(0x30)(UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                    Material;                                          // 0x78(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UPaperTileLayer*>               TileLayers;                                        // 0x80(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic)
	float                                        CollisionThickness;                                // 0x90(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ESpriteCollisionMode              SpriteCollisionDomain;                             // 0x94(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ETileMapProjectionMode            ProjectionMode;                                    // 0x95(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1494[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        HexSideLength;                                     // 0x98(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1495[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBodySetup*                            BodySetup;                                         // 0xA0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LayerNameIndex;                                    // 0xA8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1496[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PaperTileMap");
		return Clss;
	}

};

// 0x8 (0x298 - 0x290)
// Class Paper2D.PaperTileMapActor
class APaperTileMapActor : public AActor
{
public:
	class UPaperTileMapComponent*                RenderComponent;                                   // 0x290(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PaperTileMapActor");
		return Clss;
	}

};

// 0x50 (0x5C0 - 0x570)
// Class Paper2D.PaperTileMapComponent
class UPaperTileMapComponent : public UMeshComponent
{
public:
	int32                                        MapWidth;                                          // 0x570(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        MapHeight;                                         // 0x574(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        TileWidth;                                         // 0x578(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        TileHeight;                                        // 0x57C(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UPaperTileSet*                         DefaultLayerTileSet;                               // 0x580(0x8)(ZeroConstructor, Deprecated, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMaterialInterface*                    Material;                                          // 0x588(0x8)(ZeroConstructor, Deprecated, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UPaperTileLayer*>               TileLayers;                                        // 0x590(0x10)(ZeroConstructor, Deprecated, UObjectWrapper, NativeAccessSpecifierPrivate)
	struct FLinearColor                          TileMapColor;                                      // 0x5A0(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        UseSingleLayerIndex;                               // 0x5B0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bUseSingleLayer;                                   // 0x5B4(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1514[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPaperTileMap*                         TileMap;                                           // 0x5B8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PaperTileMapComponent");
		return Clss;
	}

	void SetTileMapColor(const struct FLinearColor& InNewColor);
	bool SetTileMap(class UPaperTileMap* InNewTileMap);
	void SetTile(int32 InX, int32 InY, int32 InLayer, const struct FPaperTileInfo& InNewValue);
	void SetLayerColor(const struct FLinearColor& InNewColor, int32 InLayer);
	void SetLayerCollision(int32 InLayer, bool InbHasCollision, bool InbOverrideThickness, float InCustomThickness, bool InbOverrideOffset, float InCustomOffset, bool InbRebuildCollision);
	void SetDefaultCollisionThickness(float InThickness, bool InbRebuildCollision);
	void ResizeMap(int32 InNewWidthInTiles, int32 InNewHeightInTiles);
	void RebuildCollision();
	bool OwnsTileMap();
	void MakeTileMapEditable();
	void GetTilePolygon(int32 InTileX, int32 InTileY, TArray<struct FVector>* InPoints, int32 InLayerIndex, bool InbWorldSpace);
	struct FLinearColor GetTileMapColor();
	struct FVector GetTileCornerPosition(int32 InTileX, int32 InTileY, int32 InLayerIndex, bool InbWorldSpace);
	struct FVector GetTileCenterPosition(int32 InTileX, int32 InTileY, int32 InLayerIndex, bool InbWorldSpace);
	struct FPaperTileInfo GetTile(int32 InX, int32 InY, int32 InLayer);
	void GetMapSize(int32* InMapWidth, int32* InMapHeight, int32* InNumLayers);
	struct FLinearColor GetLayerColor(int32 InLayer);
	void CreateNewTileMap(int32 InMapWidth, int32 InMapHeight, int32 InTileWidth, int32 InTileHeight, float InPixelsPerUnrealUnit, bool InbCreateLayer);
	class UPaperTileLayer* AddNewLayer();
};

// 0x80 (0xA8 - 0x28)
// Class Paper2D.PaperTileSet
class UPaperTileSet : public UObject
{
public:
	struct FIntPoint                             TileSize;                                          // 0x28(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UTexture2D*                            TileSheet;                                         // 0x30(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UTexture*>                      AdditionalSourceTextures;                          // 0x38(0x10)(Edit, ZeroConstructor, AssetRegistrySearchable, UObjectWrapper, NativeAccessSpecifierPrivate)
	struct FIntMargin                            BorderMargin;                                      // 0x48(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPrivate)
	struct FIntPoint                             PerTileSpacing;                                    // 0x58(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FIntPoint                             DrawingOffset;                                     // 0x60(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        WidthInTiles;                                      // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        HeightInTiles;                                     // 0x6C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        AllocatedWidth;                                    // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        AllocatedHeight;                                   // 0x74(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FPaperTileMetadata>            PerTileData;                                       // 0x78(0x10)(Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FPaperTileSetTerrain>          Terrains;                                          // 0x88(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	int32                                        TileWidth;                                         // 0x98(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        TileHeight;                                        // 0x9C(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        Margin;                                            // 0xA0(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        Spacing;                                           // 0xA4(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PaperTileSet");
		return Clss;
	}

};

// 0x20 (0x260 - 0x240)
// Class Paper2D.MaterialExpressionSpriteTextureSampler
class UMaterialExpressionSpriteTextureSampler : public UMaterialExpressionTextureSampleParameter2D
{
public:
	bool                                         bSampleAdditionalTextures;                         // 0x240(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_152D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        AdditionalSlotIndex;                               // 0x244(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  SlotDisplayName;                                   // 0x248(0x18)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MaterialExpressionSpriteTextureSampler");
		return Clss;
	}

};

// 0x18 (0x2A8 - 0x290)
// Class Paper2D.PaperTerrainActor
class APaperTerrainActor : public AActor
{
public:
	class USceneComponent*                       DummyRoot;                                         // 0x290(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UPaperTerrainSplineComponent*          SplineComponent;                                   // 0x298(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UPaperTerrainComponent*                RenderComponent;                                   // 0x2A0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PaperTerrainActor");
		return Clss;
	}

};

// 0x58 (0x590 - 0x538)
// Class Paper2D.PaperTerrainComponent
class UPaperTerrainComponent : public UPrimitiveComponent
{
public:
	class UPaperTerrainMaterial*                 TerrainMaterial;                                   // 0x538(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bClosedSpline;                                     // 0x540(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFilledSpline;                                     // 0x541(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1542[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPaperTerrainSplineComponent*          AssociatedSpline;                                  // 0x548(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RandomSeed;                                        // 0x550(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SegmentOverlapAmount;                              // 0x554(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          TerrainColor;                                      // 0x558(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        ReparamStepsPerSegment;                            // 0x568(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ESpriteCollisionMode              SpriteCollisionDomain;                             // 0x56C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1546[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CollisionThickness;                                // 0x570(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1548[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBodySetup*                            CachedBodySetup;                                   // 0x578(0x8)(ZeroConstructor, Transient, DuplicateTransient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1549[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PaperTerrainComponent");
		return Clss;
	}

	void SetTerrainColor(const struct FLinearColor& InNewColor);
};

// 0x18 (0x48 - 0x30)
// Class Paper2D.PaperTerrainMaterial
class UPaperTerrainMaterial : public UDataAsset
{
public:
	TArray<struct FPaperTerrainMaterialRule>     Rules;                                             // 0x30(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	class UPaperSprite*                          InteriorFill;                                      // 0x40(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PaperTerrainMaterial");
		return Clss;
	}

};

// 0x18 (0x650 - 0x638)
// Class Paper2D.PaperTerrainSplineComponent
class UPaperTerrainSplineComponent : public USplineComponent
{
public:
	uint8                                        Pad_154D[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PaperTerrainSplineComponent");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class Paper2D.TileMapBlueprintLibrary
class UTileMapBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TileMapBlueprintLibrary");
		return Clss;
	}

	struct FPaperTileInfo MakeTile(int32 InTileIndex, class UPaperTileSet* InTileSet, bool InbFlipH, bool InbFlipV, bool InbFlipD);
	class FName GetTileUserData(const struct FPaperTileInfo& InTile);
	struct FTransform GetTileTransform(const struct FPaperTileInfo& InTile);
	void BreakTile(const struct FPaperTileInfo& InTile, int32* InTileIndex, class UPaperTileSet** InTileSet, bool* InbFlipH, bool* InbFlipV, bool* InbFlipD);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
