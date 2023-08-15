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

enum class ERecomputeUVsPropertiesUnwrapType : int32
{
	ERecomputeUVsPropertiesUnwrapType__ExpMap = 0,
	ERecomputeUVsPropertiesUnwrapType__Conformal = 1,
	ERecomputeUVsPropertiesUnwrapType__SpectralConformal = 2,
	ERecomputeUVsPropertiesUnwrapType__IslandMerging = 3,
	ERecomputeUVsPropertiesUnwrapType__ERecomputeUVsPropertiesUnwrapType_MAX = 4,
};

enum class ERecomputeUVsPropertiesIslandMode : int32
{
	ERecomputeUVsPropertiesIslandMode__PolyGroups = 0,
	ERecomputeUVsPropertiesIslandMode__ExistingUVs = 1,
	ERecomputeUVsPropertiesIslandMode__ERecomputeUVsPropertiesIslandMode_MAX = 2,
};

enum class ERecomputeUVsToolOrientationMode : int32
{
	ERecomputeUVsToolOrientationMode__None = 0,
	ERecomputeUVsToolOrientationMode__MinBounds = 1,
	ERecomputeUVsToolOrientationMode__ERecomputeUVsToolOrientationMode_MAX = 2,
};

enum class ERecomputeUVsPropertiesLayoutType : int32
{
	ERecomputeUVsPropertiesLayoutType__None = 0,
	ERecomputeUVsPropertiesLayoutType__Repack = 1,
	ERecomputeUVsPropertiesLayoutType__NormalizeToBounds = 2,
	ERecomputeUVsPropertiesLayoutType__NormalizeToWorld = 3,
	ERecomputeUVsPropertiesLayoutType__ERecomputeUVsPropertiesLayoutType_MAX = 4,
};

enum class EUVLayoutType : int32
{
	EUVLayoutType__Transform       = 0,
	EUVLayoutType__Stack           = 1,
	EUVLayoutType__Repack          = 2,
	EUVLayoutType__EUVLayoutType_MAX = 3,
};

enum class ENormalCalculationMethod : uint8
{
	ENormalCalculationMethod__AreaWeighted = 0,
	ENormalCalculationMethod__AngleWeighted = 1,
	ENormalCalculationMethod__AreaAngleWeighting = 2,
	ENormalCalculationMethod__ENormalCalculationMethod_MAX = 3,
};

enum class ESplitNormalMethod : uint8
{
	ESplitNormalMethod__UseExistingTopology = 0,
	ESplitNormalMethod__FaceNormalThreshold = 1,
	ESplitNormalMethod__FaceGroupID = 2,
	ESplitNormalMethod__PerTriangle = 3,
	ESplitNormalMethod__PerVertex  = 4,
	ESplitNormalMethod__ESplitNormalMethod_MAX = 5,
};

enum class EHoleFillOpFillType : uint8
{
	EHoleFillOpFillType__TriangleFan = 0,
	EHoleFillOpFillType__PolygonEarClipping = 1,
	EHoleFillOpFillType__Planar    = 2,
	EHoleFillOpFillType__Minimal   = 3,
	EHoleFillOpFillType__Smooth    = 4,
	EHoleFillOpFillType__EHoleFillOpFillType_MAX = 5,
};

enum class ERemeshType : uint8
{
	ERemeshType__Standard          = 0,
	ERemeshType__FullPass          = 1,
	ERemeshType__NormalFlow        = 2,
	ERemeshType__ERemeshType_MAX   = 3,
};

enum class ERemeshSmoothingType : uint8
{
	ERemeshSmoothingType__Uniform  = 0,
	ERemeshSmoothingType__Cotangent = 1,
	ERemeshSmoothingType__MeanValue = 2,
	ERemeshSmoothingType__ERemeshSmoothingType_MAX = 3,
};

enum class ECSGOperation : uint8
{
	ECSGOperation__DifferenceAB    = 0,
	ECSGOperation__DifferenceBA    = 1,
	ECSGOperation__Intersect       = 2,
	ECSGOperation__Union           = 3,
	ECSGOperation__ECSGOperation_MAX = 4,
};

enum class ETrimOperation : uint8
{
	ETrimOperation__TrimA          = 0,
	ETrimOperation__TrimB          = 1,
	ETrimOperation__ETrimOperation_MAX = 2,
};

enum class ETrimSide : uint8
{
	ETrimSide__RemoveInside        = 0,
	ETrimSide__RemoveOutside       = 1,
	ETrimSide__ETrimSide_MAX       = 2,
};

enum class EMorphologyOperation : uint8
{
	EMorphologyOperation__Dilate   = 0,
	EMorphologyOperation__Contract = 1,
	EMorphologyOperation__Close    = 2,
	EMorphologyOperation__Open     = 3,
	EMorphologyOperation__EMorphologyOperation_MAX = 4,
};

enum class EUVProjectionMethod : uint8
{
	EUVProjectionMethod__Box       = 0,
	EUVProjectionMethod__Cylinder  = 1,
	EUVProjectionMethod__Plane     = 2,
	EUVProjectionMethod__ExpMap    = 3,
	EUVProjectionMethod__EUVProjectionMethod_MAX = 4,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
