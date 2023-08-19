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

enum class ESetMaskConditionType : uint8
{
	Field_Set_Always               = 0,
	Field_Set_IFF_NOT_Interior     = 1,
	Field_Set_IFF_NOT_Exterior     = 2,
	Field_MaskCondition_Max        = 3,
	Field_MAX                      = 4,
};

enum class EWaveFunctionType : uint8
{
	Field_Wave_Cosine              = 0,
	Field_Wave_Gaussian            = 1,
	Field_Wave_Falloff             = 2,
	Field_Wave_Decay               = 3,
	Field_Wave_Max                 = 4,
};

enum class EFieldOperationType : uint8
{
	Field_Multiply                 = 0,
	Field_Divide                   = 1,
	Field_Add                      = 2,
	Field_Substract                = 3,
	Field_Operation_Max            = 4,
};

enum class EFieldCullingOperationType : uint8
{
	Field_Culling_Inside           = 0,
	Field_Culling_Outside          = 1,
	Field_Culling_Operation_Max    = 2,
	Field_Culling_MAX              = 3,
};

enum class EFieldResolutionType : uint8
{
	Field_Resolution_Minimal       = 0,
	Field_Resolution_DisabledParents = 1,
	Field_Resolution_Maximum       = 2,
	Field_Resolution_Max           = 3,
};

enum class EFieldFilterType : uint8
{
	Field_Filter_Dynamic           = 0,
	Field_Filter_Kinematic         = 1,
	Field_Filter_Static            = 2,
	Field_Filter_All               = 3,
	Field_Filter_Sleeping          = 4,
	Field_Filter_Disabled          = 5,
	Field_Filter_Max               = 6,
};

enum class EFieldObjectType : uint8
{
	Field_Object_Rigid             = 0,
	Field_Object_Cloth             = 1,
	Field_Object_Destruction       = 2,
	Field_Object_Character         = 3,
	Field_Object_All               = 4,
	Field_Object_Max               = 5,
};

enum class EFieldPositionType : uint8
{
	Field_Position_CenterOfMass    = 0,
	Field_Position_PivotPoint      = 1,
	Field_Position_Max             = 2,
};

enum class EFieldFalloffType : uint8
{
	Field_FallOff_None             = 0,
	Field_Falloff_Linear           = 1,
	Field_Falloff_Inverse          = 2,
	Field_Falloff_Squared          = 3,
	Field_Falloff_Logarithmic      = 4,
	Field_Falloff_Max              = 5,
};

enum class EFieldPhysicsType : uint8
{
	Field_None                     = 0,
	Field_DynamicState             = 1,
	Field_LinearForce              = 2,
	Field_ExternalClusterStrain    = 3,
	Field_Kill                     = 4,
	Field_LinearVelocity           = 5,
	Field_AngularVelociy           = 6,
	Field_AngularTorque            = 7,
	Field_InternalClusterStrain    = 8,
	Field_DisableThreshold         = 9,
	Field_SleepingThreshold        = 10,
	Field_PositionStatic           = 11,
	Field_PositionAnimated         = 12,
	Field_PositionTarget           = 13,
	Field_DynamicConstraint        = 14,
	Field_CollisionGroup           = 15,
	Field_ActivateDisabled         = 16,
	Field_InitialLinearVelocity    = 17,
	Field_InitialAngularVelocity   = 18,
	Field_LinearImpulse            = 19,
	Field_PhysicsType_Max          = 20,
};

enum class EFieldVectorType : uint8
{
	Vector_LinearForce             = 0,
	Vector_LinearVelocity          = 1,
	Vector_AngularVelocity         = 2,
	Vector_AngularTorque           = 3,
	Vector_PositionTarget          = 4,
	Vector_InitialLinearVelocity   = 5,
	Vector_InitialAngularVelocity  = 6,
	Vector_LinearImpulse           = 7,
	Vector_TargetMax               = 8,
	Vector_MAX                     = 9,
};

enum class EFieldScalarType : uint8
{
	Scalar_ExternalClusterStrain   = 0,
	Scalar_Kill                    = 1,
	Scalar_DisableThreshold        = 2,
	Scalar_SleepingThreshold       = 3,
	Scalar_InternalClusterStrain   = 4,
	Scalar_DynamicConstraint       = 5,
	Scalar_TargetMax               = 6,
	Scalar_MAX                     = 7,
};

enum class EFieldIntegerType : uint8
{
	Integer_DynamicState           = 0,
	Integer_ActivateDisabled       = 1,
	Integer_CollisionGroup         = 2,
	Integer_PositionAnimated       = 3,
	Integer_PositionStatic         = 4,
	Integer_TargetMax              = 5,
	Integer_MAX                    = 6,
};

enum class EFieldOutputType : uint8
{
	Field_Output_Vector            = 0,
	Field_Output_Scalar            = 1,
	Field_Output_Integer           = 2,
	Field_Output_Max               = 3,
};

enum class EFieldPhysicsDefaultFields : uint8
{
	Field_RadialIntMask            = 0,
	Field_RadialFalloff            = 1,
	Field_UniformVector            = 2,
	Field_RadialVector             = 3,
	Field_RadialVectorFalloff      = 4,
	Field_EFieldPhysicsDefaultFields_Max = 5,
};

enum class EConvexOverlapRemoval : uint8
{
	EConvexOverlapRemoval__None    = 0,
	EConvexOverlapRemoval__All     = 1,
	EConvexOverlapRemoval__OnlyClusters = 2,
	EConvexOverlapRemoval__OnlyClustersVsClusters = 3,
	EConvexOverlapRemoval__EConvexOverlapRemoval_MAX = 4,
};

enum class ECollisionTypeEnum : uint8
{
	ECollisionTypeEnum__Chaos_Volumetric = 0,
	ECollisionTypeEnum__Chaos_Surface_Volumetric = 1,
	ECollisionTypeEnum__Chaos_Max  = 2,
};

enum class EImplicitTypeEnum : uint8
{
	EImplicitTypeEnum__Chaos_Implicit_Box = 0,
	EImplicitTypeEnum__Chaos_Implicit_Sphere = 1,
	EImplicitTypeEnum__Chaos_Implicit_Capsule = 2,
	EImplicitTypeEnum__Chaos_Implicit_LevelSet = 3,
	EImplicitTypeEnum__Chaos_Implicit_None = 4,
	EImplicitTypeEnum__Chaos_Implicit_Convex = 5,
	EImplicitTypeEnum__Chaos_Max   = 6,
};

enum class EObjectStateTypeEnum : uint8
{
	EObjectStateTypeEnum__Chaos_NONE = 0,
	EObjectStateTypeEnum__Chaos_Object_Sleeping = 1,
	EObjectStateTypeEnum__Chaos_Object_Kinematic = 2,
	EObjectStateTypeEnum__Chaos_Object_Static = 3,
	EObjectStateTypeEnum__Chaos_Object_Dynamic = 4,
	EObjectStateTypeEnum__Chaos_Object_UserDefined = 100,
	EObjectStateTypeEnum__Chaos_Max = 101,
};

enum class EGeometryCollectionPhysicsTypeEnum : uint8
{
	EGeometryCollectionPhysicsTypeEnum__Chaos_AngularVelocity = 0,
	EGeometryCollectionPhysicsTypeEnum__Chaos_DynamicState = 1,
	EGeometryCollectionPhysicsTypeEnum__Chaos_LinearVelocity = 2,
	EGeometryCollectionPhysicsTypeEnum__Chaos_InitialAngularVelocity = 3,
	EGeometryCollectionPhysicsTypeEnum__Chaos_InitialLinearVelocity = 4,
	EGeometryCollectionPhysicsTypeEnum__Chaos_CollisionGroup = 5,
	EGeometryCollectionPhysicsTypeEnum__Chaos_LinearForce = 6,
	EGeometryCollectionPhysicsTypeEnum__Chaos_AngularTorque = 7,
	EGeometryCollectionPhysicsTypeEnum__Chaos_DisableThreshold = 8,
	EGeometryCollectionPhysicsTypeEnum__Chaos_SleepingThreshold = 9,
	EGeometryCollectionPhysicsTypeEnum__Chaos_ExternalClusterStrain = 10,
	EGeometryCollectionPhysicsTypeEnum__Chaos_InternalClusterStrain = 11,
	EGeometryCollectionPhysicsTypeEnum__Chaos_LinearImpulse = 12,
	EGeometryCollectionPhysicsTypeEnum__Chaos_Max = 13,
};

enum class EInitialVelocityTypeEnum : uint8
{
	EInitialVelocityTypeEnum__Chaos_Initial_Velocity_User_Defined = 0,
	EInitialVelocityTypeEnum__Chaos_Initial_Velocity_None = 1,
	EInitialVelocityTypeEnum__Chaos_Max = 2,
};

enum class EEmissionPatternTypeEnum : uint8
{
	EEmissionPatternTypeEnum__Chaos_Emission_Pattern_First_Frame = 0,
	EEmissionPatternTypeEnum__Chaos_Emission_Pattern_On_Demand = 1,
	EEmissionPatternTypeEnum__Chaos_Max = 2,
};

enum class EChaosSolverTickMode : uint8
{
	EChaosSolverTickMode__Fixed    = 0,
	EChaosSolverTickMode__Variable = 1,
	EChaosSolverTickMode__VariableCapped = 2,
	EChaosSolverTickMode__VariableCappedWithTarget = 3,
	EChaosSolverTickMode__EChaosSolverTickMode_MAX = 4,
};

enum class EChaosThreadingMode : uint8
{
	EChaosThreadingMode__DedicatedThread = 0,
	EChaosThreadingMode__TaskGraph = 1,
	EChaosThreadingMode__SingleThread = 2,
	EChaosThreadingMode__Num       = 3,
	EChaosThreadingMode__Invalid   = 4,
	EChaosThreadingMode__EChaosThreadingMode_MAX = 5,
};

enum class EChaosBufferMode : uint8
{
	EChaosBufferMode__Double       = 0,
	EChaosBufferMode__Triple       = 1,
	EChaosBufferMode__Num          = 2,
	EChaosBufferMode__Invalid      = 3,
	EChaosBufferMode__EChaosBufferMode_MAX = 4,
};

enum class EClusterUnionMethod : uint8
{
	EClusterUnionMethod__PointImplicit = 0,
	EClusterUnionMethod__DelaunayTriangulation = 1,
	EClusterUnionMethod__MinimalSpanningSubsetDelaunayTriangulation = 2,
	EClusterUnionMethod__PointImplicitAugmentedWithMinimalDelaunay = 3,
	EClusterUnionMethod__BoundsOverlapFilteredDelaunayTriangulation = 4,
	EClusterUnionMethod__None      = 5,
	EClusterUnionMethod__EClusterUnionMethod_MAX = 6,
};

enum class EGeometryCollectionCacheType : uint8
{
	EGeometryCollectionCacheType__None = 0,
	EGeometryCollectionCacheType__Record = 1,
	EGeometryCollectionCacheType__Play = 2,
	EGeometryCollectionCacheType__RecordAndPlay = 3,
	EGeometryCollectionCacheType__EGeometryCollectionCacheType_MAX = 4,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0xB0 (0xB0 - 0x0)
// ScriptStruct Chaos.ManagedArrayCollection
struct FManagedArrayCollection
{
public:
	uint8                                        Pad_266F[0xB0];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Chaos.SolverCollisionFilterSettings
struct FSolverCollisionFilterSettings
{
public:
	bool                                         FilterEnabled;                                     // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2671[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MinMass;                                           // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinSpeed;                                          // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinImpulse;                                        // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Chaos.SolverBreakingFilterSettings
struct FSolverBreakingFilterSettings
{
public:
	bool                                         FilterEnabled;                                     // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2675[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MinMass;                                           // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinSpeed;                                          // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinVolume;                                         // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Chaos.SolverTrailingFilterSettings
struct FSolverTrailingFilterSettings
{
public:
	bool                                         FilterEnabled;                                     // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_267C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MinMass;                                           // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinSpeed;                                          // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinVolume;                                         // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// ScriptStruct Chaos.ChaosSolverConfiguration
struct FChaosSolverConfiguration
{
public:
	int32                                        PositionIterations;                                // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        VelocityIterations;                                // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ProjectionIterations;                              // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CollisionMarginFraction;                           // 0xC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CollisionMarginMax;                                // 0x10(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CollisionCullDistance;                             // 0x14(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CollisionMaxPushOutVelocity;                       // 0x18(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ClusterConnectionFactor;                           // 0x1C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EClusterUnionMethod               ClusterUnionConnectionType;                        // 0x20(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bGenerateCollisionData;                            // 0x21(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2685[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSolverCollisionFilterSettings        CollisionFilterSettings;                           // 0x24(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bGenerateBreakData;                                // 0x34(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2689[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSolverBreakingFilterSettings         BreakingFilterSettings;                            // 0x38(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bGenerateTrailingData;                             // 0x48(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_268B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSolverTrailingFilterSettings         TrailingFilterSettings;                            // 0x4C(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        Iterations;                                        // 0x5C(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        PushOutIterations;                                 // 0x60(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bGenerateContactGraph;                             // 0x64(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_268C[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC0 (0xC0 - 0x0)
// ScriptStruct Chaos.SolverCollisionData
struct FSolverCollisionData
{
public:
	struct FVector                               Location;                                          // 0x0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               AccumulatedImpulse;                                // 0x18(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Normal;                                            // 0x30(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Velocity1;                                         // 0x48(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Velocity2;                                         // 0x60(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               AngularVelocity1;                                  // 0x78(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               AngularVelocity2;                                  // 0x90(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Mass1;                                             // 0xA8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Mass2;                                             // 0xAC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ParticleIndex;                                     // 0xB0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LevelsetIndex;                                     // 0xB4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ParticleIndexMesh;                                 // 0xB8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LevelsetIndexMesh;                                 // 0xBC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct Chaos.SolverBreakingData
struct FSolverBreakingData
{
public:
	struct FVector                               Location;                                          // 0x0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Velocity;                                          // 0x18(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               AngularVelocity;                                   // 0x30(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Mass;                                              // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ParticleIndex;                                     // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ParticleIndexMesh;                                 // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_269A[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x58 - 0x0)
// ScriptStruct Chaos.SolverTrailingData
struct FSolverTrailingData
{
public:
	struct FVector                               Location;                                          // 0x0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Velocity;                                          // 0x18(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               AngularVelocity;                                   // 0x30(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Mass;                                              // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ParticleIndex;                                     // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ParticleIndexMesh;                                 // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_269D[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xB8 (0xB8 - 0x0)
// ScriptStruct Chaos.RecordedFrame
struct FRecordedFrame
{
public:
	TArray<struct FTransform>                    Transforms;                                        // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                TransformIndices;                                  // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                PreviousTransformIndices;                          // 0x20(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<bool>                                 DisabledFlags;                                     // 0x30(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FSolverCollisionData>          Collisions;                                        // 0x40(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FSolverBreakingData>           Breakings;                                         // 0x50(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TSet<struct FSolverTrailingData>             Trailings;                                         // 0x60(0x50)(NativeAccessSpecifierPublic)
	float                                        Timestamp;                                         // 0xB0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_26AD[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Chaos.RecordedTransformTrack
struct FRecordedTransformTrack
{
public:
	TArray<struct FRecordedFrame>                Records;                                           // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct Chaos.SolverRemovalFilterSettings
struct FSolverRemovalFilterSettings
{
public:
	bool                                         FilterEnabled;                                     // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_26AF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MinMass;                                           // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinVolume;                                         // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
