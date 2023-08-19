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

enum class ESpriteCollisionMode : uint8
{
	ESpriteCollisionMode__None     = 0,
	ESpriteCollisionMode__Use2DPhysics = 1,
	ESpriteCollisionMode__Use3DPhysics = 2,
	ESpriteCollisionMode__ESpriteCollisionMode_MAX = 3,
};

enum class ESpriteShapeType : uint8
{
	ESpriteShapeType__Box          = 0,
	ESpriteShapeType__Circle       = 1,
	ESpriteShapeType__Polygon      = 2,
	ESpriteShapeType__ESpriteShapeType_MAX = 3,
};

enum class ESpritePolygonMode : uint8
{
	ESpritePolygonMode__SourceBoundingBox = 0,
	ESpritePolygonMode__TightBoundingBox = 1,
	ESpritePolygonMode__ShrinkWrapped = 2,
	ESpritePolygonMode__FullyCustom = 3,
	ESpritePolygonMode__Diced      = 4,
	ESpritePolygonMode__ESpritePolygonMode_MAX = 5,
};

enum class ESpritePivotMode : uint8
{
	ESpritePivotMode__Top_Left     = 0,
	ESpritePivotMode__Top_Center   = 1,
	ESpritePivotMode__Top_Right    = 2,
	ESpritePivotMode__Center_Left  = 3,
	ESpritePivotMode__Center_Center = 4,
	ESpritePivotMode__Center_Right = 5,
	ESpritePivotMode__Bottom_Left  = 6,
	ESpritePivotMode__Bottom_Center = 7,
	ESpritePivotMode__Bottom_Right = 8,
	ESpritePivotMode__Custom       = 9,
	ESpritePivotMode__ESpritePivotMode_MAX = 10,
};

enum class EFlipbookCollisionMode : uint8
{
	EFlipbookCollisionMode__NoCollision = 0,
	EFlipbookCollisionMode__FirstFrameCollision = 1,
	EFlipbookCollisionMode__EachFrameCollision = 2,
	EFlipbookCollisionMode__EFlipbookCollisionMode_MAX = 3,
};

enum class EPaperSpriteAtlasPadding : uint8
{
	EPaperSpriteAtlasPadding__DilateBorder = 0,
	EPaperSpriteAtlasPadding__PadWithZero = 1,
	EPaperSpriteAtlasPadding__EPaperSpriteAtlasPadding_MAX = 2,
};

enum class ETileMapProjectionMode : uint8
{
	ETileMapProjectionMode__Orthogonal = 0,
	ETileMapProjectionMode__IsometricDiamond = 1,
	ETileMapProjectionMode__IsometricStaggered = 2,
	ETileMapProjectionMode__HexagonalStaggered = 3,
	ETileMapProjectionMode__ETileMapProjectionMode_MAX = 4,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x10 - 0x0)
// ScriptStruct Paper2D.IntMargin
struct FIntMargin
{
public:
	int32                                        Left;                                              // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Top;                                               // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Right;                                             // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Bottom;                                            // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x140 (0x140 - 0x0)
// ScriptStruct Paper2D.SpriteDrawCallRecord
struct FSpriteDrawCallRecord
{
public:
	struct FVector                               Destination;                                       // 0x0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture*                              BaseTexture;                                       // 0x18(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18AA[0x30];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FColor                                Color;                                             // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18AB[0xEC];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct Paper2D.SpriteGeometryShape
struct FSpriteGeometryShape
{
public:
	enum class ESpriteShapeType                  ShapeType;                                         // 0x0(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18AC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FVector2D>                     Vertices;                                          // 0x8(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FVector2D                             BoxSize;                                           // 0x18(0x10)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             BoxPosition;                                       // 0x28(0x10)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Rotation;                                          // 0x38(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bNegativeWinding;                                  // 0x3C(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18AE[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Paper2D.SpriteGeometryCollection
struct FSpriteGeometryCollection
{
public:
	TArray<struct FSpriteGeometryShape>          Shapes;                                            // 0x0(0x10)(Edit, ZeroConstructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	enum class ESpritePolygonMode                GeometryType;                                      // 0x10(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18AF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        PixelsPerSubdivisionX;                             // 0x14(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PixelsPerSubdivisionY;                             // 0x18(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAvoidVertexMerging;                               // 0x1C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18B1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        AlphaThreshold;                                    // 0x20(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DetailAmount;                                      // 0x24(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SimplifyEpsilon;                                   // 0x28(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18B2[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct Paper2D.SpriteAssetInitParameters
struct FSpriteAssetInitParameters
{
public:
	uint8                                        Pad_18B4[0x40];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Paper2D.PaperFlipbookKeyFrame
struct FPaperFlipbookKeyFrame
{
public:
	class UPaperSprite*                          Sprite;                                            // 0x0(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FrameRun;                                          // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18B5[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x90 (0x90 - 0x0)
// ScriptStruct Paper2D.SpriteInstanceData
struct FSpriteInstanceData
{
public:
	struct FMatrix                               Transform;                                         // 0x0(0x80)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class UPaperSprite*                          SourceSprite;                                      // 0x80(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                VertexColor;                                       // 0x88(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaterialIndex;                                     // 0x8C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// ScriptStruct Paper2D.PaperSpriteSocket
struct FPaperSpriteSocket
{
public:
	struct FTransform                            LocalTransform;                                    // 0x0(0x60)(Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SocketName;                                        // 0x60(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18B9[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// ScriptStruct Paper2D.PaperSpriteAtlasSlot
struct FPaperSpriteAtlasSlot
{
public:
	TSoftObjectPtr<class UPaperSprite>           SpriteRef;                                         // 0x0(0x30)(UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        AtlasIndex;                                        // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        X;                                                 // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Y;                                                 // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Width;                                             // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Height;                                            // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18BC[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Paper2D.PaperTileInfo
struct FPaperTileInfo
{
public:
	class UPaperTileSet*                         TileSet;                                           // 0x0(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PackedTileIndex;                                   // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18BE[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct Paper2D.PaperTileMetadata
struct FPaperTileMetadata
{
public:
	class FName                                  UserDataName;                                      // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSpriteGeometryCollection             CollisionData;                                     // 0x8(0x30)(Edit, NativeAccessSpecifierPublic)
	uint8                                        TerrainMembership[0x4];                            // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18BF[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Paper2D.PaperTileSetTerrain
struct FPaperTileSetTerrain
{
public:
	class FString                                TerrainName;                                       // 0x0(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CenterTileIndex;                                   // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18C2[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Paper2D.PaperTerrainMaterialRule
struct FPaperTerrainMaterialRule
{
public:
	class UPaperSprite*                          StartCap;                                          // 0x0(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UPaperSprite*>                  Body;                                              // 0x8(0x10)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	class UPaperSprite*                          EndCap;                                            // 0x18(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinimumAngle;                                      // 0x20(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaximumAngle;                                      // 0x24(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableCollision;                                  // 0x28(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18C5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CollisionOffset;                                   // 0x2C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DrawOrder;                                         // 0x30(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18C6[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
