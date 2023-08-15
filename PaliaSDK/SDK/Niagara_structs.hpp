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

enum class ENiagaraSimCacheAttributeCaptureMode : uint8
{
	ENiagaraSimCacheAttributeCaptureMode__All = 0,
	ENiagaraSimCacheAttributeCaptureMode__RenderingOnly = 1,
	ENiagaraSimCacheAttributeCaptureMode__ExplicitAttributes = 2,
	ENiagaraSimCacheAttributeCaptureMode__ENiagaraSimCacheAttributeCaptureMode_MAX = 3,
};

enum class ENiagaraCollisionMode : uint8
{
	ENiagaraCollisionMode__None    = 0,
	ENiagaraCollisionMode__SceneGeometry = 1,
	ENiagaraCollisionMode__DepthBuffer = 2,
	ENiagaraCollisionMode__DistanceField = 3,
	ENiagaraCollisionMode__ENiagaraCollisionMode_MAX = 4,
};

enum class ENiagaraTickBehavior : uint8
{
	ENiagaraTickBehavior__UsePrereqs = 0,
	ENiagaraTickBehavior__UseComponentTickGroup = 1,
	ENiagaraTickBehavior__ForceTickFirst = 2,
	ENiagaraTickBehavior__ForceTickLast = 3,
	ENiagaraTickBehavior__ENiagaraTickBehavior_MAX = 4,
};

enum class ENiagaraGpuBufferFormat : uint8
{
	ENiagaraGpuBufferFormat__Float = 0,
	ENiagaraGpuBufferFormat__HalfFloat = 1,
	ENiagaraGpuBufferFormat__UnsignedNormalizedByte = 2,
	ENiagaraGpuBufferFormat__Max   = 3,
};

enum class ENiagaraGpuSyncMode : int32
{
	ENiagaraGpuSyncMode__None      = 0,
	ENiagaraGpuSyncMode__SyncCpuToGpu = 1,
	ENiagaraGpuSyncMode__SyncGpuToCpu = 2,
	ENiagaraGpuSyncMode__SyncBoth  = 3,
	ENiagaraGpuSyncMode__ENiagaraGpuSyncMode_MAX = 4,
};

enum class ENiagaraMipMapGeneration : uint8
{
	ENiagaraMipMapGeneration__Disabled = 0,
	ENiagaraMipMapGeneration__PostStage = 1,
	ENiagaraMipMapGeneration__PostSimulate = 2,
	ENiagaraMipMapGeneration__ENiagaraMipMapGeneration_MAX = 3,
};

enum class ENiagaraDefaultMode : uint8
{
	ENiagaraDefaultMode__Value     = 0,
	ENiagaraDefaultMode__Binding   = 1,
	ENiagaraDefaultMode__Custom    = 2,
	ENiagaraDefaultMode__FailIfPreviouslyNotSet = 3,
	ENiagaraDefaultMode__ENiagaraDefaultMode_MAX = 4,
};

enum class ENiagaraDefaultRendererMotionVectorSetting : int32
{
	ENiagaraDefaultRendererMotionVectorSetting__Precise = 0,
	ENiagaraDefaultRendererMotionVectorSetting__Approximate = 1,
	ENiagaraDefaultRendererMotionVectorSetting__ENiagaraDefaultRendererMotionVectorSetting_MAX = 2,
};

enum class ENiagaraRendererMotionVectorSetting : int32
{
	ENiagaraRendererMotionVectorSetting__AutoDetect = 0,
	ENiagaraRendererMotionVectorSetting__Precise = 1,
	ENiagaraRendererMotionVectorSetting__Approximate = 2,
	ENiagaraRendererMotionVectorSetting__Disable = 3,
	ENiagaraRendererMotionVectorSetting__ENiagaraRendererMotionVectorSetting_MAX = 4,
};

enum class ENiagaraSimTarget : uint8
{
	ENiagaraSimTarget__CPUSim      = 0,
	ENiagaraSimTarget__GPUComputeSim = 1,
	ENiagaraSimTarget__ENiagaraSimTarget_MAX = 2,
};

enum class ENiagaraAgeUpdateMode : uint8
{
	ENiagaraAgeUpdateMode__TickDeltaTime = 0,
	ENiagaraAgeUpdateMode__DesiredAge = 1,
	ENiagaraAgeUpdateMode__DesiredAgeNoSeek = 2,
	ENiagaraAgeUpdateMode__ENiagaraAgeUpdateMode_MAX = 3,
};

enum class ENiagaraStatEvaluationType : uint8
{
	ENiagaraStatEvaluationType__Average = 0,
	ENiagaraStatEvaluationType__Maximum = 1,
	ENiagaraStatEvaluationType__ENiagaraStatEvaluationType_MAX = 2,
};

enum class ENiagaraStatDisplayMode : uint8
{
	ENiagaraStatDisplayMode__Percent = 0,
	ENiagaraStatDisplayMode__Absolute = 1,
	ENiagaraStatDisplayMode__ENiagaraStatDisplayMode_MAX = 2,
};

enum class ENiagaraDataSetType : uint8
{
	ENiagaraDataSetType__ParticleData = 0,
	ENiagaraDataSetType__Shared    = 1,
	ENiagaraDataSetType__Event     = 2,
	ENiagaraDataSetType__ENiagaraDataSetType_MAX = 3,
};

enum class ENiagaraInputNodeUsage : uint8
{
	ENiagaraInputNodeUsage__Undefined = 0,
	ENiagaraInputNodeUsage__Parameter = 1,
	ENiagaraInputNodeUsage__Attribute = 2,
	ENiagaraInputNodeUsage__SystemConstant = 3,
	ENiagaraInputNodeUsage__TranslatorConstant = 4,
	ENiagaraInputNodeUsage__RapidIterationParameter = 5,
	ENiagaraInputNodeUsage__ENiagaraInputNodeUsage_MAX = 6,
};

enum class ENiagaraScriptCompileStatus : uint8
{
	ENiagaraScriptCompileStatus__NCS_Unknown = 0,
	ENiagaraScriptCompileStatus__NCS_Dirty = 1,
	ENiagaraScriptCompileStatus__NCS_Error = 2,
	ENiagaraScriptCompileStatus__NCS_UpToDate = 3,
	ENiagaraScriptCompileStatus__NCS_BeingCreated = 4,
	ENiagaraScriptCompileStatus__NCS_UpToDateWithWarnings = 5,
	ENiagaraScriptCompileStatus__NCS_ComputeUpToDateWithWarnings = 6,
	ENiagaraScriptCompileStatus__NCS_MAX = 7,
};

enum class ENiagaraScriptUsage : uint8
{
	ENiagaraScriptUsage__Function  = 0,
	ENiagaraScriptUsage__Module    = 1,
	ENiagaraScriptUsage__DynamicInput = 2,
	ENiagaraScriptUsage__ParticleSpawnScript = 3,
	ENiagaraScriptUsage__ParticleSpawnScriptInterpolated = 4,
	ENiagaraScriptUsage__ParticleUpdateScript = 5,
	ENiagaraScriptUsage__ParticleEventScript = 6,
	ENiagaraScriptUsage__ParticleSimulationStageScript = 7,
	ENiagaraScriptUsage__ParticleGPUComputeScript = 8,
	ENiagaraScriptUsage__EmitterSpawnScript = 9,
	ENiagaraScriptUsage__EmitterUpdateScript = 10,
	ENiagaraScriptUsage__SystemSpawnScript = 11,
	ENiagaraScriptUsage__SystemUpdateScript = 12,
	ENiagaraScriptUsage__ENiagaraScriptUsage_MAX = 13,
};

enum class ENiagaraCompileUsageStaticSwitch : uint8
{
	ENiagaraCompileUsageStaticSwitch__Spawn = 0,
	ENiagaraCompileUsageStaticSwitch__Update = 1,
	ENiagaraCompileUsageStaticSwitch__Event = 2,
	ENiagaraCompileUsageStaticSwitch__SimulationStage = 3,
	ENiagaraCompileUsageStaticSwitch__Default = 4,
	ENiagaraCompileUsageStaticSwitch__ENiagaraCompileUsageStaticSwitch_MAX = 5,
};

enum class ENiagaraScriptContextStaticSwitch : uint8
{
	ENiagaraScriptContextStaticSwitch__System = 0,
	ENiagaraScriptContextStaticSwitch__Emitter = 1,
	ENiagaraScriptContextStaticSwitch__Particle = 2,
	ENiagaraScriptContextStaticSwitch__ENiagaraScriptContextStaticSwitch_MAX = 3,
};

enum class ENiagaraScriptGroup : uint8
{
	ENiagaraScriptGroup__Particle  = 0,
	ENiagaraScriptGroup__Emitter   = 1,
	ENiagaraScriptGroup__System    = 2,
	ENiagaraScriptGroup__Max       = 3,
};

enum class ENiagaraIterationSource : uint8
{
	ENiagaraIterationSource__Particles = 0,
	ENiagaraIterationSource__DataInterface = 1,
	ENiagaraIterationSource__ENiagaraIterationSource_MAX = 2,
};

enum class ENiagaraBindingSource : uint8
{
	ImplicitFromSource             = 0,
	ExplicitParticles              = 1,
	ExplicitEmitter                = 2,
	ExplicitSystem                 = 3,
	ExplicitUser                   = 4,
	MaxBindingSource               = 5,
	ENiagaraBindingSource_MAX      = 6,
};

enum class ENiagaraRendererSourceDataMode : uint8
{
	ENiagaraRendererSourceDataMode__Particles = 0,
	ENiagaraRendererSourceDataMode__Emitter = 1,
	ENiagaraRendererSourceDataMode__ENiagaraRendererSourceDataMode_MAX = 2,
};

enum class ENiagaraLegacyTrailWidthMode : uint8
{
	ENiagaraLegacyTrailWidthMode__FromCentre = 0,
	ENiagaraLegacyTrailWidthMode__FromFirst = 1,
	ENiagaraLegacyTrailWidthMode__FromSecond = 2,
	ENiagaraLegacyTrailWidthMode__ENiagaraLegacyTrailWidthMode_MAX = 3,
};

enum class ENCPoolMethod : uint8
{
	ENCPoolMethod__None            = 0,
	ENCPoolMethod__AutoRelease     = 1,
	ENCPoolMethod__ManualRelease   = 2,
	ENCPoolMethod__ManualRelease_OnComplete = 3,
	ENCPoolMethod__FreeInPool      = 4,
	ENCPoolMethod__ENCPoolMethod_MAX = 5,
};

enum class ENiagaraSystemInstanceState : uint8
{
	ENiagaraSystemInstanceState__None = 0,
	ENiagaraSystemInstanceState__PendingSpawn = 1,
	ENiagaraSystemInstanceState__PendingSpawnPaused = 2,
	ENiagaraSystemInstanceState__Spawning = 3,
	ENiagaraSystemInstanceState__Running = 4,
	ENiagaraSystemInstanceState__Paused = 5,
	ENiagaraSystemInstanceState__Num = 6,
	ENiagaraSystemInstanceState__ENiagaraSystemInstanceState_MAX = 7,
};

enum class ENiagaraFunctionDebugState : uint8
{
	ENiagaraFunctionDebugState__NoDebug = 0,
	ENiagaraFunctionDebugState__Basic = 1,
	ENiagaraFunctionDebugState__ENiagaraFunctionDebugState_MAX = 2,
};

enum class ENiagaraGpuComputeTickStage : uint8
{
	ENiagaraGpuComputeTickStage__PreInitViews = 0,
	ENiagaraGpuComputeTickStage__PostInitViews = 1,
	ENiagaraGpuComputeTickStage__PostOpaqueRender = 2,
	ENiagaraGpuComputeTickStage__Max = 3,
	ENiagaraGpuComputeTickStage__First = 0,
	ENiagaraGpuComputeTickStage__Last = 2,
};

enum class ENiagaraSortMode : uint8
{
	ENiagaraSortMode__None         = 0,
	ENiagaraSortMode__ViewDepth    = 1,
	ENiagaraSortMode__ViewDistance = 2,
	ENiagaraSortMode__CustomAscending = 3,
	ENiagaraSortMode__CustomDecending = 4,
	ENiagaraSortMode__ENiagaraSortMode_MAX = 5,
};

enum class ENDISkelMesh_GpuMaxInfluences : uint8
{
	ENDISkelMesh_GpuMaxInfluences__AllowMax4 = 0,
	ENDISkelMesh_GpuMaxInfluences__AllowMax8 = 1,
	ENDISkelMesh_GpuMaxInfluences__Unlimited = 2,
	ENDISkelMesh_GpuMaxInfluences__ENDISkelMesh_MAX = 3,
};

enum class ENDISkelMesh_GpuUniformSamplingFormat : uint8
{
	ENDISkelMesh_GpuUniformSamplingFormat__Full = 0,
	ENDISkelMesh_GpuUniformSamplingFormat__Limited_24_8 = 1,
	ENDISkelMesh_GpuUniformSamplingFormat__Limited_23_9 = 2,
	ENDISkelMesh_GpuUniformSamplingFormat__ENDISkelMesh_MAX = 3,
};

enum class ENDISkelMesh_AdjacencyTriangleIndexFormat : uint8
{
	ENDISkelMesh_AdjacencyTriangleIndexFormat__Full = 0,
	ENDISkelMesh_AdjacencyTriangleIndexFormat__Half = 1,
	ENDISkelMesh_AdjacencyTriangleIndexFormat__ENDISkelMesh_MAX = 2,
};

enum class ENiagaraDefaultRendererPixelCoverageMode : uint8
{
	ENiagaraDefaultRendererPixelCoverageMode__Enabled = 0,
	ENiagaraDefaultRendererPixelCoverageMode__Disabled = 1,
	ENiagaraDefaultRendererPixelCoverageMode__ENiagaraDefaultRendererPixelCoverageMode_MAX = 2,
};

enum class ENiagaraDefaultSortPrecision : uint8
{
	ENiagaraDefaultSortPrecision__Low = 0,
	ENiagaraDefaultSortPrecision__High = 1,
	ENiagaraDefaultSortPrecision__ENiagaraDefaultSortPrecision_MAX = 2,
};

enum class ENiagaraDefaultGpuTranslucentLatency : uint8
{
	ENiagaraDefaultGpuTranslucentLatency__Immediate = 0,
	ENiagaraDefaultGpuTranslucentLatency__Latent = 1,
	ENiagaraDefaultGpuTranslucentLatency__ENiagaraDefaultGpuTranslucentLatency_MAX = 2,
};

enum class ENDICollisionQuery_AsyncGpuTraceProvider : uint8
{
	ENDICollisionQuery_AsyncGpuTraceProvider__Default = 0,
	ENDICollisionQuery_AsyncGpuTraceProvider__HWRT = 1,
	ENDICollisionQuery_AsyncGpuTraceProvider__GSDF = 2,
	ENDICollisionQuery_AsyncGpuTraceProvider__None = 3,
	ENDICollisionQuery_AsyncGpuTraceProvider__ENDICollisionQuery_MAX = 4,
};

enum class ENDIActorComponentSourceMode : uint8
{
	ENDIActorComponentSourceMode__Default = 0,
	ENDIActorComponentSourceMode__AttachParent = 1,
	ENDIActorComponentSourceMode__LocalPlayer = 2,
	ENDIActorComponentSourceMode__ENDIActorComponentSourceMode_MAX = 3,
};

enum class ENDIStaticMesh_SourceMode : uint8
{
	ENDIStaticMesh_SourceMode__Default = 0,
	ENDIStaticMesh_SourceMode__Source = 1,
	ENDIStaticMesh_SourceMode__AttachParent = 2,
	ENDIStaticMesh_SourceMode__DefaultMeshOnly = 3,
	ENDIStaticMesh_SourceMode__ENDIStaticMesh_MAX = 4,
};

enum class ENiagaraSystemSpawnSectionStartBehavior : int32
{
	ENiagaraSystemSpawnSectionStartBehavior__Activate = 0,
	ENiagaraSystemSpawnSectionStartBehavior__ENiagaraSystemSpawnSectionStartBehavior_MAX = 1,
};

enum class ENiagaraSystemSpawnSectionEvaluateBehavior : int32
{
	ENiagaraSystemSpawnSectionEvaluateBehavior__ActivateIfInactive = 0,
	ENiagaraSystemSpawnSectionEvaluateBehavior__None = 1,
	ENiagaraSystemSpawnSectionEvaluateBehavior__ENiagaraSystemSpawnSectionEvaluateBehavior_MAX = 2,
};

enum class ENiagaraSystemSpawnSectionEndBehavior : int32
{
	ENiagaraSystemSpawnSectionEndBehavior__SetSystemInactive = 0,
	ENiagaraSystemSpawnSectionEndBehavior__Deactivate = 1,
	ENiagaraSystemSpawnSectionEndBehavior__None = 2,
	ENiagaraSystemSpawnSectionEndBehavior__ENiagaraSystemSpawnSectionEndBehavior_MAX = 3,
};

enum class ENiagaraCompilationState : uint8
{
	ENiagaraCompilationState__CheckDDC = 0,
	ENiagaraCompilationState__Precompile = 1,
	ENiagaraCompilationState__StartCompileJob = 2,
	ENiagaraCompilationState__AwaitResult = 3,
	ENiagaraCompilationState__OptimizeByteCode = 4,
	ENiagaraCompilationState__ProcessResult = 5,
	ENiagaraCompilationState__PutToDDC = 6,
	ENiagaraCompilationState__Finished = 7,
	ENiagaraCompilationState__Aborted = 8,
	ENiagaraCompilationState__ENiagaraCompilationState_MAX = 9,
};

enum class ENiagaraBakerViewMode : int32
{
	ENiagaraBakerViewMode__Perspective = 0,
	ENiagaraBakerViewMode__OrthoFront = 1,
	ENiagaraBakerViewMode__OrthoBack = 2,
	ENiagaraBakerViewMode__OrthoLeft = 3,
	ENiagaraBakerViewMode__OrthoRight = 4,
	ENiagaraBakerViewMode__OrthoTop = 5,
	ENiagaraBakerViewMode__OrthoBottom = 6,
	ENiagaraBakerViewMode__Num     = 7,
	ENiagaraBakerViewMode__ENiagaraBakerViewMode_MAX = 8,
};

enum class ENiagaraDataInterfaceEmitterBindingMode : int32
{
	ENiagaraDataInterfaceEmitterBindingMode__Self = 0,
	ENiagaraDataInterfaceEmitterBindingMode__Other = 1,
	ENiagaraDataInterfaceEmitterBindingMode__ENiagaraDataInterfaceEmitterBindingMode_MAX = 2,
};

enum class ENDIExport_GPUAllocationMode : uint8
{
	ENDIExport_GPUAllocationMode__FixedSize = 0,
	ENDIExport_GPUAllocationMode__PerParticle = 1,
	ENDIExport_GPUAllocationMode__ENDIExport_MAX = 2,
};

enum class ENDILandscape_SourceMode : uint8
{
	ENDILandscape_SourceMode__Default = 0,
	ENDILandscape_SourceMode__Source = 1,
	ENDILandscape_SourceMode__AttachParent = 2,
	ENDILandscape_SourceMode__ENDILandscape_MAX = 3,
};

enum class ESetResolutionMethod : int32
{
	ESetResolutionMethod__Independent = 0,
	ESetResolutionMethod__MaxAxis  = 1,
	ESetResolutionMethod__CellSize = 2,
	ESetResolutionMethod__ESetResolutionMethod_MAX = 3,
};

enum class ENDISkeletalMesh_SourceMode : uint8
{
	ENDISkeletalMesh_SourceMode__Default = 0,
	ENDISkeletalMesh_SourceMode__Source = 1,
	ENDISkeletalMesh_SourceMode__AttachParent = 2,
	ENDISkeletalMesh_SourceMode__ENDISkeletalMesh_MAX = 3,
};

enum class ENDISkeletalMesh_SkinningMode : uint8
{
	ENDISkeletalMesh_SkinningMode__Invalid = 255,
	ENDISkeletalMesh_SkinningMode__None = 0,
	ENDISkeletalMesh_SkinningMode__SkinOnTheFly = 1,
	ENDISkeletalMesh_SkinningMode__PreSkin = 2,
	ENDISkeletalMesh_SkinningMode__ENDISkeletalMesh_MAX = 256,
};

enum class ENiagaraDebugPlaybackMode : uint8
{
	ENiagaraDebugPlaybackMode__Play = 0,
	ENiagaraDebugPlaybackMode__Loop = 1,
	ENiagaraDebugPlaybackMode__Paused = 2,
	ENiagaraDebugPlaybackMode__Step = 3,
	ENiagaraDebugPlaybackMode__ENiagaraDebugPlaybackMode_MAX = 4,
};

enum class ENiagaraDebugHudHAlign : uint8
{
	ENiagaraDebugHudHAlign__Left   = 0,
	ENiagaraDebugHudHAlign__Center = 1,
	ENiagaraDebugHudHAlign__Right  = 2,
	ENiagaraDebugHudHAlign__ENiagaraDebugHudHAlign_MAX = 3,
};

enum class ENiagaraDebugHudVAlign : uint8
{
	ENiagaraDebugHudVAlign__Top    = 0,
	ENiagaraDebugHudVAlign__Center = 1,
	ENiagaraDebugHudVAlign__Bottom = 2,
	ENiagaraDebugHudVAlign__ENiagaraDebugHudVAlign_MAX = 3,
};

enum class ENiagaraDebugHudFont : int32
{
	ENiagaraDebugHudFont__Small    = 0,
	ENiagaraDebugHudFont__Normal   = 1,
	ENiagaraDebugHudFont__ENiagaraDebugHudFont_MAX = 2,
};

enum class ENiagaraDebugHudVerbosity : int32
{
	ENiagaraDebugHudVerbosity__None = 0,
	ENiagaraDebugHudVerbosity__Basic = 1,
	ENiagaraDebugHudVerbosity__Verbose = 2,
	ENiagaraDebugHudVerbosity__ENiagaraDebugHudVerbosity_MAX = 3,
};

enum class ENiagaraDebugHUDOverviewMode : int32
{
	ENiagaraDebugHUDOverviewMode__Overview = 0,
	ENiagaraDebugHUDOverviewMode__Scalability = 1,
	ENiagaraDebugHUDOverviewMode__Performance = 2,
	ENiagaraDebugHUDOverviewMode__GpuComputePerformance = 3,
	ENiagaraDebugHUDOverviewMode__ENiagaraDebugHUDOverviewMode_MAX = 4,
};

enum class ENiagaraDebugHUDPerfGraphMode : int32
{
	ENiagaraDebugHUDPerfGraphMode__None = 0,
	ENiagaraDebugHUDPerfGraphMode__GameThread = 1,
	ENiagaraDebugHUDPerfGraphMode__RenderThread = 2,
	ENiagaraDebugHUDPerfGraphMode__GPU = 3,
	ENiagaraDebugHUDPerfGraphMode__ENiagaraDebugHUDPerfGraphMode_MAX = 4,
};

enum class ENiagaraDebugHUDPerfSampleMode : int32
{
	ENiagaraDebugHUDPerfSampleMode__FrameTotal = 0,
	ENiagaraDebugHUDPerfSampleMode__PerInstanceAverage = 1,
	ENiagaraDebugHUDPerfSampleMode__ENiagaraDebugHUDPerfSampleMode_MAX = 2,
};

enum class ENiagaraCullReaction : int32
{
	ENiagaraCullReaction__Deactivate = 0,
	ENiagaraCullReaction__DeactivateImmediate = 1,
	ENiagaraCullReaction__DeactivateResume = 2,
	ENiagaraCullReaction__DeactivateImmediateResume = 3,
	ENiagaraCullReaction__ENiagaraCullReaction_MAX = 4,
};

enum class ENiagaraScalabilityUpdateFrequency : int32
{
	ENiagaraScalabilityUpdateFrequency__SpawnOnly = 0,
	ENiagaraScalabilityUpdateFrequency__Low = 1,
	ENiagaraScalabilityUpdateFrequency__Medium = 2,
	ENiagaraScalabilityUpdateFrequency__High = 3,
	ENiagaraScalabilityUpdateFrequency__Continuous = 4,
	ENiagaraScalabilityUpdateFrequency__ENiagaraScalabilityUpdateFrequency_MAX = 5,
};

enum class ENiagaraCullProxyMode : int32
{
	ENiagaraCullProxyMode__None    = 0,
	ENiagaraCullProxyMode__Instanced_Rendered = 1,
	ENiagaraCullProxyMode__ENiagaraCullProxyMode_MAX = 2,
};

enum class EScriptExecutionMode : uint8
{
	EScriptExecutionMode__EveryParticle = 0,
	EScriptExecutionMode__SpawnedParticles = 1,
	EScriptExecutionMode__SingleParticle = 2,
	EScriptExecutionMode__EScriptExecutionMode_MAX = 3,
};

enum class EParticleAllocationMode : uint8
{
	EParticleAllocationMode__AutomaticEstimate = 0,
	EParticleAllocationMode__ManualEstimate = 1,
	EParticleAllocationMode__FixedCount = 2,
	EParticleAllocationMode__EParticleAllocationMode_MAX = 3,
};

enum class ENiagaraEmitterCalculateBoundMode : uint8
{
	ENiagaraEmitterCalculateBoundMode__Dynamic = 0,
	ENiagaraEmitterCalculateBoundMode__Fixed = 1,
	ENiagaraEmitterCalculateBoundMode__Programmable = 2,
	ENiagaraEmitterCalculateBoundMode__ENiagaraEmitterCalculateBoundMode_MAX = 3,
};

enum class ENiagaraMeshFacingMode : uint8
{
	ENiagaraMeshFacingMode__Default = 0,
	ENiagaraMeshFacingMode__Velocity = 1,
	ENiagaraMeshFacingMode__CameraPosition = 2,
	ENiagaraMeshFacingMode__CameraPlane = 3,
	ENiagaraMeshFacingMode__ENiagaraMeshFacingMode_MAX = 4,
};

enum class ENiagaraMeshPivotOffsetSpace : uint8
{
	ENiagaraMeshPivotOffsetSpace__Mesh = 0,
	ENiagaraMeshPivotOffsetSpace__Simulation = 1,
	ENiagaraMeshPivotOffsetSpace__World = 2,
	ENiagaraMeshPivotOffsetSpace__Local = 3,
	ENiagaraMeshPivotOffsetSpace__ENiagaraMeshPivotOffsetSpace_MAX = 4,
};

enum class ENiagaraMeshLockedAxisSpace : uint8
{
	ENiagaraMeshLockedAxisSpace__Simulation = 0,
	ENiagaraMeshLockedAxisSpace__World = 1,
	ENiagaraMeshLockedAxisSpace__Local = 2,
	ENiagaraMeshLockedAxisSpace__ENiagaraMeshLockedAxisSpace_MAX = 3,
};

enum class ENiagaraPlatformSelectionState : uint8
{
	ENiagaraPlatformSelectionState__Default = 0,
	ENiagaraPlatformSelectionState__Enabled = 1,
	ENiagaraPlatformSelectionState__Disabled = 2,
	ENiagaraPlatformSelectionState__ENiagaraPlatformSelectionState_MAX = 3,
};

enum class ENiagaraPlatformSetState : uint8
{
	ENiagaraPlatformSetState__Disabled = 0,
	ENiagaraPlatformSetState__Enabled = 1,
	ENiagaraPlatformSetState__Active = 2,
	ENiagaraPlatformSetState__Unknown = 3,
	ENiagaraPlatformSetState__ENiagaraPlatformSetState_MAX = 4,
};

enum class ENiagaraCVarConditionResponse : uint8
{
	ENiagaraCVarConditionResponse__None = 0,
	ENiagaraCVarConditionResponse__Enable = 1,
	ENiagaraCVarConditionResponse__Disable = 2,
	ENiagaraCVarConditionResponse__ENiagaraCVarConditionResponse_MAX = 3,
};

enum class ENiagaraDeviceProfileRedirectMode : uint8
{
	ENiagaraDeviceProfileRedirectMode__CVar = 0,
	ENiagaraDeviceProfileRedirectMode__DeviceProfile = 1,
	ENiagaraDeviceProfileRedirectMode__ENiagaraDeviceProfileRedirectMode_MAX = 2,
};

enum class ENiagaraPreviewGridResetMode : uint8
{
	ENiagaraPreviewGridResetMode__Never = 0,
	ENiagaraPreviewGridResetMode__Individual = 1,
	ENiagaraPreviewGridResetMode__All = 2,
	ENiagaraPreviewGridResetMode__ENiagaraPreviewGridResetMode_MAX = 3,
};

enum class ENiagaraRendererSortPrecision : uint8
{
	ENiagaraRendererSortPrecision__Default = 0,
	ENiagaraRendererSortPrecision__Low = 1,
	ENiagaraRendererSortPrecision__High = 2,
	ENiagaraRendererSortPrecision__ENiagaraRendererSortPrecision_MAX = 3,
};

enum class ENiagaraRendererGpuTranslucentLatency : uint8
{
	ENiagaraRendererGpuTranslucentLatency__ProjectDefault = 0,
	ENiagaraRendererGpuTranslucentLatency__Immediate = 1,
	ENiagaraRendererGpuTranslucentLatency__Latent = 2,
	ENiagaraRendererGpuTranslucentLatency__ENiagaraRendererGpuTranslucentLatency_MAX = 3,
};

enum class ENiagaraRibbonFacingMode : uint8
{
	ENiagaraRibbonFacingMode__Screen = 0,
	ENiagaraRibbonFacingMode__Custom = 1,
	ENiagaraRibbonFacingMode__CustomSideVector = 2,
	ENiagaraRibbonFacingMode__ENiagaraRibbonFacingMode_MAX = 3,
};

enum class ENiagaraRibbonAgeOffsetMode : uint8
{
	ENiagaraRibbonAgeOffsetMode__Scale = 0,
	ENiagaraRibbonAgeOffsetMode__Clip = 1,
	ENiagaraRibbonAgeOffsetMode__ENiagaraRibbonAgeOffsetMode_MAX = 2,
};

enum class ENiagaraRibbonDrawDirection : uint8
{
	ENiagaraRibbonDrawDirection__FrontToBack = 0,
	ENiagaraRibbonDrawDirection__BackToFront = 1,
	ENiagaraRibbonDrawDirection__ENiagaraRibbonDrawDirection_MAX = 2,
};

enum class ENiagaraRibbonShapeMode : uint8
{
	ENiagaraRibbonShapeMode__Plane = 0,
	ENiagaraRibbonShapeMode__MultiPlane = 1,
	ENiagaraRibbonShapeMode__Tube  = 2,
	ENiagaraRibbonShapeMode__Custom = 3,
	ENiagaraRibbonShapeMode__ENiagaraRibbonShapeMode_MAX = 4,
};

enum class ENiagaraRibbonTessellationMode : uint8
{
	ENiagaraRibbonTessellationMode__Automatic = 0,
	ENiagaraRibbonTessellationMode__Custom = 1,
	ENiagaraRibbonTessellationMode__Disabled = 2,
	ENiagaraRibbonTessellationMode__ENiagaraRibbonTessellationMode_MAX = 3,
};

enum class ENiagaraRibbonUVEdgeMode : int32
{
	ENiagaraRibbonUVEdgeMode__SmoothTransition = 0,
	ENiagaraRibbonUVEdgeMode__Locked = 1,
	ENiagaraRibbonUVEdgeMode__ENiagaraRibbonUVEdgeMode_MAX = 2,
};

enum class ENiagaraRibbonUVDistributionMode : int32
{
	ENiagaraRibbonUVDistributionMode__ScaledUniformly = 0,
	ENiagaraRibbonUVDistributionMode__ScaledUsingRibbonSegmentLength = 1,
	ENiagaraRibbonUVDistributionMode__TiledOverRibbonLength = 2,
	ENiagaraRibbonUVDistributionMode__TiledFromStartOverRibbonLength = 3,
	ENiagaraRibbonUVDistributionMode__ENiagaraRibbonUVDistributionMode_MAX = 4,
};

enum class EUnusedAttributeBehaviour : uint8
{
	EUnusedAttributeBehaviour__Copy = 0,
	EUnusedAttributeBehaviour__Zero = 1,
	EUnusedAttributeBehaviour__None = 2,
	EUnusedAttributeBehaviour__MarkInvalid = 3,
	EUnusedAttributeBehaviour__PassThrough = 4,
	EUnusedAttributeBehaviour__EUnusedAttributeBehaviour_MAX = 5,
};

enum class ENiagaraModuleDependencyType : uint8
{
	ENiagaraModuleDependencyType__PreDependency = 0,
	ENiagaraModuleDependencyType__PostDependency = 1,
	ENiagaraModuleDependencyType__ENiagaraModuleDependencyType_MAX = 2,
};

enum class ENiagaraModuleDependencyScriptConstraint : uint8
{
	ENiagaraModuleDependencyScriptConstraint__SameScript = 0,
	ENiagaraModuleDependencyScriptConstraint__AllScripts = 1,
	ENiagaraModuleDependencyScriptConstraint__ENiagaraModuleDependencyScriptConstraint_MAX = 2,
};

enum class ENiagaraScriptLibraryVisibility : uint8
{
	ENiagaraScriptLibraryVisibility__Invalid = 0,
	ENiagaraScriptLibraryVisibility__Unexposed = 1,
	ENiagaraScriptLibraryVisibility__Library = 2,
	ENiagaraScriptLibraryVisibility__Hidden = 3,
	ENiagaraScriptLibraryVisibility__ENiagaraScriptLibraryVisibility_MAX = 4,
};

enum class ENiagaraScriptTemplateSpecification : uint8
{
	ENiagaraScriptTemplateSpecification__None = 0,
	ENiagaraScriptTemplateSpecification__Template = 1,
	ENiagaraScriptTemplateSpecification__Behavior = 2,
	ENiagaraScriptTemplateSpecification__ENiagaraScriptTemplateSpecification_MAX = 3,
};

enum class ENiagaraModuleDependencyUsage : uint8
{
	ENiagaraModuleDependencyUsage__None = 0,
	ENiagaraModuleDependencyUsage__Spawn = 1,
	ENiagaraModuleDependencyUsage__Update = 2,
	ENiagaraModuleDependencyUsage__Event = 3,
	ENiagaraModuleDependencyUsage__SimulationStage = 4,
	ENiagaraModuleDependencyUsage__ENiagaraModuleDependencyUsage_MAX = 5,
};

enum class ENiagaraSpriteAlignment : uint8
{
	ENiagaraSpriteAlignment__Unaligned = 0,
	ENiagaraSpriteAlignment__VelocityAligned = 1,
	ENiagaraSpriteAlignment__CustomAlignment = 2,
	ENiagaraSpriteAlignment__ENiagaraSpriteAlignment_MAX = 3,
};

enum class ENiagaraSpriteFacingMode : uint8
{
	ENiagaraSpriteFacingMode__FaceCamera = 0,
	ENiagaraSpriteFacingMode__FaceCameraPlane = 1,
	ENiagaraSpriteFacingMode__CustomFacingVector = 2,
	ENiagaraSpriteFacingMode__FaceCameraPosition = 3,
	ENiagaraSpriteFacingMode__FaceCameraDistanceBlend = 4,
	ENiagaraSpriteFacingMode__ENiagaraSpriteFacingMode_MAX = 5,
};

enum class ENiagaraRendererPixelCoverageMode : uint8
{
	ENiagaraRendererPixelCoverageMode__Automatic = 0,
	ENiagaraRendererPixelCoverageMode__Disabled = 1,
	ENiagaraRendererPixelCoverageMode__Enabled = 2,
	ENiagaraRendererPixelCoverageMode__Enabled_RGBA = 3,
	ENiagaraRendererPixelCoverageMode__Enabled_RGB = 4,
	ENiagaraRendererPixelCoverageMode__Enabled_A = 5,
	ENiagaraRendererPixelCoverageMode__ENiagaraRendererPixelCoverageMode_MAX = 6,
};

enum class ENiagaraStructConversionType : uint8
{
	ENiagaraStructConversionType__CopyOnly = 0,
	ENiagaraStructConversionType__DoubleToFloat = 1,
	ENiagaraStructConversionType__Vector2 = 2,
	ENiagaraStructConversionType__Vector3 = 3,
	ENiagaraStructConversionType__Vector4 = 4,
	ENiagaraStructConversionType__Quat = 5,
	ENiagaraStructConversionType__ENiagaraStructConversionType_MAX = 6,
};

enum class ENiagaraNumericOutputTypeSelectionMode : uint8
{
	ENiagaraNumericOutputTypeSelectionMode__None = 0,
	ENiagaraNumericOutputTypeSelectionMode__Largest = 1,
	ENiagaraNumericOutputTypeSelectionMode__Smallest = 2,
	ENiagaraNumericOutputTypeSelectionMode__Scalar = 3,
	ENiagaraNumericOutputTypeSelectionMode__Custom = 4,
	ENiagaraNumericOutputTypeSelectionMode__ENiagaraNumericOutputTypeSelectionMode_MAX = 5,
};

enum class ENiagaraExecutionStateSource : uint8
{
	ENiagaraExecutionStateSource__Scalability = 0,
	ENiagaraExecutionStateSource__Internal = 1,
	ENiagaraExecutionStateSource__Owner = 2,
	ENiagaraExecutionStateSource__InternalCompletion = 3,
	ENiagaraExecutionStateSource__ENiagaraExecutionStateSource_MAX = 4,
};

enum class ENiagaraExecutionState : uint32
{
	ENiagaraExecutionState__Active = 0,
	ENiagaraExecutionState__Inactive = 1,
	ENiagaraExecutionState__InactiveClear = 2,
	ENiagaraExecutionState__Complete = 3,
	ENiagaraExecutionState__Disabled = 4,
	ENiagaraExecutionState__Num    = 5,
	ENiagaraExecutionState__ENiagaraExecutionState_MAX = 6,
};

enum class ENiagaraCoordinateSpace : uint8
{
	ENiagaraCoordinateSpace__Simulation = 0,
	ENiagaraCoordinateSpace__World = 1,
	ENiagaraCoordinateSpace__Local = 2,
	ENiagaraCoordinateSpace__ENiagaraCoordinateSpace_MAX = 3,
};

enum class ENiagaraPythonUpdateScriptReference : uint8
{
	ENiagaraPythonUpdateScriptReference__None = 0,
	ENiagaraPythonUpdateScriptReference__ScriptAsset = 1,
	ENiagaraPythonUpdateScriptReference__DirectTextEntry = 2,
	ENiagaraPythonUpdateScriptReference__ENiagaraPythonUpdateScriptReference_MAX = 3,
};

enum class ENiagaraOrientationAxis : uint8
{
	ENiagaraOrientationAxis__XAxis = 0,
	ENiagaraOrientationAxis__YAxis = 1,
	ENiagaraOrientationAxis__ZAxis = 2,
	ENiagaraOrientationAxis__ENiagaraOrientationAxis_MAX = 3,
};

enum class ENiagaraBoolDisplayMode : uint8
{
	ENiagaraBoolDisplayMode__DisplayAlways = 0,
	ENiagaraBoolDisplayMode__DisplayIfTrue = 1,
	ENiagaraBoolDisplayMode__DisplayIfFalse = 2,
	ENiagaraBoolDisplayMode__ENiagaraBoolDisplayMode_MAX = 3,
};

enum class ENiagaraValidationSeverity : uint8
{
	ENiagaraValidationSeverity__Info = 0,
	ENiagaraValidationSeverity__Warning = 1,
	ENiagaraValidationSeverity__Error = 2,
	ENiagaraValidationSeverity__ENiagaraValidationSeverity_MAX = 3,
};

enum class ENiagaraVariantMode : int32
{
	ENiagaraVariantMode__None      = 0,
	ENiagaraVariantMode__Object    = 1,
	ENiagaraVariantMode__DataInterface = 2,
	ENiagaraVariantMode__Bytes     = 3,
	ENiagaraVariantMode__ENiagaraVariantMode_MAX = 4,
};

enum class EVolumeCacheType : uint8
{
	EVolumeCacheType__OpenVDB      = 0,
	EVolumeCacheType__EVolumeCacheType_MAX = 1,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x38 - 0x0)
// ScriptStruct Niagara.NiagaraSimCacheCreateParameters
struct FNiagaraSimCacheCreateParameters
{
public:
	enum class ENiagaraSimCacheAttributeCaptureMode AttributeCaptureMode;                              // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E9[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        bAllowRebasing : 1;                                // Mask: 0x1, PropSize: 0x10x4(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAllowDataInterfaceCaching : 1;                    // Mask: 0x2, PropSize: 0x10x4(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_44 : 6;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_3EA[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          RebaseIncludeAttributes;                           // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FName>                          RebaseExcludeAttributes;                           // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FName>                          ExplicitCaptureAttributes;                         // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct Niagara.NiagaraDataSetID
struct FNiagaraDataSetID
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENiagaraDataSetType               Type;                                              // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_404[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// ScriptStruct Niagara.NiagaraTypeDefinitionHandle
struct FNiagaraTypeDefinitionHandle
{
public:
	int32                                        RegisteredTypeIndex;                               // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0xC (0xC - 0x0)
// ScriptStruct Niagara.NiagaraVariableBase
struct FNiagaraVariableBase
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FNiagaraTypeDefinitionHandle          TypeDefHandle;                                     // 0x8(0x4)(Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
};

// 0x14 (0x20 - 0xC)
// ScriptStruct Niagara.NiagaraVariable
struct FNiagaraVariable : public FNiagaraVariableBase
{
public:
	uint8                                        Pad_408[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<uint8>                                VarData;                                           // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Niagara.NiagaraDataSetProperties
struct FNiagaraDataSetProperties
{
public:
	struct FNiagaraDataSetID                     ID;                                                // 0x0(0xC)(Edit, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_40A[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FNiagaraVariable>              Variables;                                         // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct Niagara.NiagaraScriptDataUsageInfo
struct FNiagaraScriptDataUsageInfo
{
public:
	bool                                         bReadsAttributeData;                               // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x90 (0x90 - 0x0)
// ScriptStruct Niagara.NiagaraFunctionSignature
struct FNiagaraFunctionSignature
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FNiagaraVariable>              Inputs;                                            // 0x8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FNiagaraVariable>              Outputs;                                           // 0x18(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	class FName                                  OwnerName;                                         // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bRequiresContext : 1;                              // Mask: 0x1, PropSize: 0x10x30(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bRequiresExecPin : 1;                              // Mask: 0x2, PropSize: 0x10x30(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bMemberFunction : 1;                               // Mask: 0x4, PropSize: 0x10x30(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bExperimental : 1;                                 // Mask: 0x8, PropSize: 0x10x30(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSupportsCPU : 1;                                  // Mask: 0x10, PropSize: 0x10x30(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSupportsGPU : 1;                                  // Mask: 0x20, PropSize: 0x10x30(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bWriteFunction : 1;                                // Mask: 0x40, PropSize: 0x10x30(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bReadFunction : 1;                                 // Mask: 0x80, PropSize: 0x10x30(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSoftDeprecatedFunction : 1;                       // Mask: 0x1, PropSize: 0x10x31(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bIsCompileTagGenerator : 1;                        // Mask: 0x2, PropSize: 0x10x31(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bHidden : 1;                                       // Mask: 0x4, PropSize: 0x10x31(0x1)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_45 : 5;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_410[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ModuleUsageBitmask;                                // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ContextStageIndex;                                 // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_411[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class FName, class FName>               FunctionSpecifiers;                                // 0x40(0x50)(NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Niagara.NiagaraTypeDefinition
struct FNiagaraTypeDefinition
{
public:
	class UObject*                               ClassStructOrEnum;                                 // 0x0(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       UnderlyingType;                                    // 0x8(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Flags;                                             // 0xA(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_413[0x5];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Niagara.NiagaraScriptDataInterfaceInfo
struct FNiagaraScriptDataInterfaceInfo
{
public:
	class UNiagaraDataInterface*                 DataInterface;                                     // 0x0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Name;                                              // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        UserPtrIdx;                                        // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_415[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FNiagaraTypeDefinition                Type;                                              // 0x18(0x10)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  RegisteredParameterMapRead;                        // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  RegisteredParameterMapWrite;                       // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Niagara.NiagaraScriptDataInterfaceCompileInfo
struct FNiagaraScriptDataInterfaceCompileInfo
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        UserPtrIdx;                                        // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_416[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FNiagaraTypeDefinition                Type;                                              // 0x10(0x10)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  RegisteredParameterMapRead;                        // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  RegisteredParameterMapWrite;                       // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsPlaceholder;                                    // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_418[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Niagara.NiagaraStatScope
struct FNiagaraStatScope
{
public:
	class FName                                  FullName;                                          // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  FriendlyName;                                      // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Niagara.VMFunctionSpecifier
struct FVMFunctionSpecifier
{
public:
	class FName                                  Key;                                               // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Value;                                             // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Niagara.VMExternalFunctionBindingInfo
struct FVMExternalFunctionBindingInfo
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  OwnerName;                                         // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<bool>                                 InputParamLocations;                               // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        NumOutputs;                                        // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_41A[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FVMFunctionSpecifier>          FunctionSpecifiers;                                // 0x28(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// ScriptStruct Niagara.NiagaraSystemUpdateContext
struct FNiagaraSystemUpdateContext
{
public:
	TArray<class UNiagaraComponent*>             ComponentsToReset;                                 // 0x0(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate)
	TArray<class UNiagaraComponent*>             ComponentsToReInit;                                // 0x10(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate)
	TArray<class UNiagaraComponent*>             ComponentsToNotifySimDestroy;                      // 0x20(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate)
	TArray<class UNiagaraSystem*>                SystemSimsToDestroy;                               // 0x30(0x10)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPrivate)
	TArray<class UNiagaraSystem*>                SystemSimsToRecache;                               // 0x40(0x10)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                        Pad_41D[0x28];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct Niagara.NiagaraVariableInfo
struct FNiagaraVariableInfo
{
public:
	struct FNiagaraVariable                      Variable;                                          // 0x0(0x20)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  Definition;                                        // 0x20(0x18)(NativeAccessSpecifierPublic)
	class UNiagaraDataInterface*                 DataInterface;                                     // 0x38(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct Niagara.NiagaraVariableAttributeBinding
struct FNiagaraVariableAttributeBinding
{
public:
	struct FNiagaraVariableBase                  ParamMapVariable;                                  // 0x0(0xC)(NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_41E[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FNiagaraVariable                      DataSetVariable;                                   // 0x10(0x20)(Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FNiagaraVariable                      RootVariable;                                      // 0x30(0x20)(Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ENiagaraBindingSource             BindingSourceMode;                                 // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_41F[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        bBindingExistsOnSource : 1;                        // Mask: 0x1, PropSize: 0x10x54(0x1)(NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bIsCachedParticleValue : 1;                        // Mask: 0x2, PropSize: 0x10x54(0x1)(NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_421[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x2C (0x2C - 0x0)
// ScriptStruct Niagara.NiagaraMaterialAttributeBinding
struct FNiagaraMaterialAttributeBinding
{
public:
	class FName                                  MaterialParameterName;                             // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNiagaraVariableBase                  NiagaraVariable;                                   // 0x8(0xC)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNiagaraVariableBase                  ResolvedNiagaraVariable;                           // 0x14(0xC)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNiagaraVariableBase                  NiagaraChildVariable;                              // 0x20(0xC)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Niagara.NiagaraVariableDataInterfaceBinding
struct FNiagaraVariableDataInterfaceBinding
{
public:
	struct FNiagaraVariable                      BoundVariable;                                     // 0x0(0x20)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Niagara.NiagaraScriptVariableBinding
struct FNiagaraScriptVariableBinding
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Niagara.NiagaraUserParameterBinding
struct FNiagaraUserParameterBinding
{
public:
	struct FNiagaraVariable                      Parameter;                                         // 0x0(0x20)(Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct Niagara.NiagaraCompileDependency
struct FNiagaraCompileDependency
{
public:
	class FString                                LinkerErrorMessage;                                // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 NodeGuid;                                          // 0x10(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 PinGuid;                                           // 0x20(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FGuid>                         StackGuids;                                        // 0x30(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct FNiagaraVariableBase                  DependentVariable;                                 // 0x40(0xC)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDependentVariableFromCustomIterationNamespace;    // 0x4C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_427[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// ScriptStruct Niagara.NiagaraScalabilityState
struct FNiagaraScalabilityState
{
public:
	float                                        Significance;                                      // 0x0(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LastVisibleTime;                                   // 0x4(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_428[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        bCulled : 1;                                       // Mask: 0x1, PropSize: 0x10xA(0x1)(Edit, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bPreviousCulled : 1;                               // Mask: 0x2, PropSize: 0x10xA(0x1)(Edit, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCulledByDistance : 1;                             // Mask: 0x4, PropSize: 0x10xA(0x1)(Edit, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCulledByInstanceCount : 1;                        // Mask: 0x8, PropSize: 0x10xA(0x1)(Edit, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCulledByVisibility : 1;                           // Mask: 0x10, PropSize: 0x10xA(0x1)(Edit, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCulledByGlobalBudget : 1;                         // Mask: 0x20, PropSize: 0x10xA(0x1)(Edit, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_42A[0x1];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Niagara.NiagaraStackSection
struct FNiagaraStackSection
{
public:
	class FName                                  SectionIdentifier;                                 // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  SectionDisplayName;                                // 0x8(0x18)(Edit, NativeAccessSpecifierPublic)
	TArray<class FText>                          Categories;                                        // 0x20(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0x30(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_42B[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Niagara.NDIStaticMeshSectionFilter
struct FNDIStaticMeshSectionFilter
{
public:
	TArray<int32>                                AllowedMaterialSlots;                              // 0x0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Niagara.NiagaraUObjectPropertyReaderRemap
struct FNiagaraUObjectPropertyReaderRemap
{
public:
	class FName                                  GraphName;                                         // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  RemapName;                                         // 0x8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x20 - 0x20)
// ScriptStruct Niagara.MovieSceneNiagaraSystemTrackTemplate
struct FMovieSceneNiagaraSystemTrackTemplate : public FMovieSceneEvalTemplate
{
public:
};

// 0x18 (0x28 - 0x10)
// ScriptStruct Niagara.MovieSceneNiagaraSystemTrackImplementation
struct FMovieSceneNiagaraSystemTrackImplementation : public FMovieSceneTrackImplementation
{
public:
	struct FFrameNumber                          SpawnSectionStartFrame;                            // 0x10(0x4)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FFrameNumber                          SpawnSectionEndFrame;                              // 0x14(0x4)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class ENiagaraSystemSpawnSectionStartBehavior SpawnSectionStartBehavior;                         // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class ENiagaraSystemSpawnSectionEvaluateBehavior SpawnSectionEvaluateBehavior;                      // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class ENiagaraSystemSpawnSectionEndBehavior SpawnSectionEndBehavior;                           // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class ENiagaraAgeUpdateMode             AgeUpdateMode;                                     // 0x24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bAllowScalability;                                 // 0x25(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_42D[0x2];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x40 - 0x20)
// ScriptStruct Niagara.MovieSceneNiagaraParameterSectionTemplate
struct FMovieSceneNiagaraParameterSectionTemplate : public FMovieSceneEvalTemplate
{
public:
	struct FNiagaraVariable                      Parameter;                                         // 0x20(0x20)(HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x100 (0x140 - 0x40)
// ScriptStruct Niagara.MovieSceneNiagaraBoolParameterSectionTemplate
struct FMovieSceneNiagaraBoolParameterSectionTemplate : public FMovieSceneNiagaraParameterSectionTemplate
{
public:
	struct FMovieSceneBoolChannel                BoolChannel;                                       // 0x40(0x100)(NativeAccessSpecifierPrivate)
};

// 0x440 (0x480 - 0x40)
// ScriptStruct Niagara.MovieSceneNiagaraColorParameterSectionTemplate
struct FMovieSceneNiagaraColorParameterSectionTemplate : public FMovieSceneNiagaraParameterSectionTemplate
{
public:
	struct FMovieSceneFloatChannel               RedChannel;                                        // 0x40(0x110)(NativeAccessSpecifierPrivate)
	struct FMovieSceneFloatChannel               GreenChannel;                                      // 0x150(0x110)(NativeAccessSpecifierPrivate)
	struct FMovieSceneFloatChannel               BlueChannel;                                       // 0x260(0x110)(NativeAccessSpecifierPrivate)
	struct FMovieSceneFloatChannel               AlphaChannel;                                      // 0x370(0x110)(NativeAccessSpecifierPrivate)
};

// 0x110 (0x150 - 0x40)
// ScriptStruct Niagara.MovieSceneNiagaraFloatParameterSectionTemplate
struct FMovieSceneNiagaraFloatParameterSectionTemplate : public FMovieSceneNiagaraParameterSectionTemplate
{
public:
	struct FMovieSceneFloatChannel               FloatChannel;                                      // 0x40(0x110)(NativeAccessSpecifierPrivate)
};

// 0x100 (0x140 - 0x40)
// ScriptStruct Niagara.MovieSceneNiagaraIntegerParameterSectionTemplate
struct FMovieSceneNiagaraIntegerParameterSectionTemplate : public FMovieSceneNiagaraParameterSectionTemplate
{
public:
	struct FMovieSceneIntegerChannel             IntegerChannel;                                    // 0x40(0x100)(NativeAccessSpecifierPrivate)
};

// 0x448 (0x488 - 0x40)
// ScriptStruct Niagara.MovieSceneNiagaraVectorParameterSectionTemplate
struct FMovieSceneNiagaraVectorParameterSectionTemplate : public FMovieSceneNiagaraParameterSectionTemplate
{
public:
	struct FMovieSceneFloatChannel               VectorChannels[0x4];                               // 0x40(0x440)(NativeAccessSpecifierPrivate)
	int32                                        ChannelsUsed;                                      // 0x480(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_42E[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x98 (0x98 - 0x0)
// ScriptStruct Niagara.EmitterCompiledScriptPair
struct FEmitterCompiledScriptPair
{
public:
	uint8                                        Pad_42F[0x98];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Niagara.NiagaraBakerTextureSource
struct FNiagaraBakerTextureSource
{
public:
	class FString                                DisplayString;                                     // 0x0(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SourceName;                                        // 0x10(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct Niagara.NiagaraBakerCameraSettings
struct FNiagaraBakerCameraSettings
{
public:
	enum class ENiagaraBakerViewMode             ViewMode;                                          // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_430[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               ViewportLocation;                                  // 0x8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              ViewportRotation;                                  // 0x20(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        OrbitDistance;                                     // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FOV;                                               // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OrthoWidth;                                        // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseAspectRatio;                                   // 0x44(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_431[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        AspectRatio;                                       // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_432[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct Niagara.NiagaraBakerTextureSettings
struct FNiagaraBakerTextureSettings
{
public:
	class FName                                  OutputName;                                        // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNiagaraBakerTextureSource            SourceBinding;                                     // 0x8(0x18)(Edit, NativeAccessSpecifierPublic)
	uint8                                        bUseFrameSize : 1;                                 // Mask: 0x1, PropSize: 0x10x20(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_46 : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_433[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FIntPoint                             FrameSize;                                         // 0x24(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FIntPoint                             TextureSize;                                       // 0x2C(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_434[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            GeneratedTexture;                                  // 0x38(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Niagara.NCPoolElement
struct FNCPoolElement
{
public:
	class UNiagaraComponent*                     Component;                                         // 0x0(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_435[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Niagara.NCPool
struct FNCPool
{
public:
	TArray<struct FNCPoolElement>                FreeElements;                                      // 0x0(0x10)(ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0xC8 (0xC8 - 0x0)
// ScriptStruct Niagara.NiagaraComponentPropertyBinding
struct FNiagaraComponentPropertyBinding
{
public:
	struct FNiagaraVariableAttributeBinding      AttributeBinding;                                  // 0x0(0x58)(NativeAccessSpecifierPublic)
	class FName                                  PropertyName;                                      // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNiagaraTypeDefinition                PropertyType;                                      // 0x60(0x10)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  MetadataSetterName;                                // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FString, class FString>           PropertySetterParameterDefaults;                   // 0x78(0x50)(NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Niagara.NiagaraEmitterNameSettingsRef
struct FNiagaraEmitterNameSettingsRef
{
public:
	class FName                                  SystemName;                                        // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                EmitterName;                                       // 0x8(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Niagara.NiagaraCulledComponentInfo
struct FNiagaraCulledComponentInfo
{
public:
	uint8                                        Pad_436[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Niagara.AKAudioParameter
struct FAKAudioParameter
{
public:
	class UAkRtpc*                               RTPCObject;                                        // 0x0(0x8)(Edit, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        HandleIdx;                                         // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Value;                                             // 0xC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InterpolationTimeMs;                               // 0x10(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_437[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// ScriptStruct Niagara.NiagaraDataInterfaceEmitterBinding
struct FNiagaraDataInterfaceEmitterBinding
{
public:
	enum class ENiagaraDataInterfaceEmitterBindingMode BindingMode;                                       // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  EmitterName;                                       // 0x4(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Niagara.BasicParticleData
struct FBasicParticleData
{
public:
	struct FVector                               Position;                                          // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Size;                                              // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_43B[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Velocity;                                          // 0x20(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Niagara.MeshTriCoordinate
struct FMeshTriCoordinate
{
public:
	int32                                        Tri;                                               // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector3f                             BaryCoord;                                         // 0x4(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct Niagara.NiagaraDataInterfaceSplineLUT
struct FNiagaraDataInterfaceSplineLUT
{
public:
	TArray<struct FVector>                       Positions;                                         // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FVector>                       Scales;                                            // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FQuat>                         Rotations;                                         // 0x20(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        SplineLength;                                      // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SplineDistanceStep;                                // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InvSplineDistanceStep;                             // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxIndex;                                          // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct Niagara.NiagaraTypeLayoutInfo
struct FNiagaraTypeLayoutInfo
{
public:
	TArray<uint32>                               FloatComponentByteOffsets;                         // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<uint32>                               FloatComponentRegisterOffsets;                     // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<uint32>                               Int32ComponentByteOffsets;                         // 0x20(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<uint32>                               Int32ComponentRegisterOffsets;                     // 0x30(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<uint32>                               HalfComponentByteOffsets;                          // 0x40(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<uint32>                               HalfComponentRegisterOffsets;                      // 0x50(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// ScriptStruct Niagara.NiagaraVariableLayoutInfo
struct FNiagaraVariableLayoutInfo
{
public:
	uint32                                       FloatComponentStart;                               // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       Int32ComponentStart;                               // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       HalfComponentStart;                                // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_43D[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FNiagaraTypeLayoutInfo                LayoutInfo;                                        // 0x10(0x60)(NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct Niagara.NiagaraDataSetCompiledData
struct FNiagaraDataSetCompiledData
{
public:
	TArray<struct FNiagaraVariable>              Variables;                                         // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FNiagaraVariableLayoutInfo>    VariableLayouts;                                   // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct FNiagaraDataSetID                     ID;                                                // 0x20(0xC)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       TotalFloatComponents;                              // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       TotalInt32Components;                              // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       TotalHalfComponents;                               // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bRequiresPersistentIDs : 1;                        // Mask: 0x1, PropSize: 0x10x38(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_47 : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_43E[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	enum class ENiagaraSimTarget                 SimTarget;                                         // 0x3C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_43F[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Niagara.NiagaraOutlinerTimingData
struct FNiagaraOutlinerTimingData
{
public:
	float                                        GameThread;                                        // 0x0(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RenderThread;                                      // 0x4(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Niagara.NiagaraOutlinerEmitterInstanceData
struct FNiagaraOutlinerEmitterInstanceData
{
public:
	class FString                                EmitterName;                                       // 0x0(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENiagaraSimTarget                 SimTarget;                                         // 0x10(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_441[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	enum class ENiagaraExecutionState            ExecState;                                         // 0x14(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumParticles;                                      // 0x18(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bRequiresPersistentIDs : 1;                        // Mask: 0x1, PropSize: 0x10x1C(0x1)(Edit, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_442[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x68 (0x68 - 0x0)
// ScriptStruct Niagara.NiagaraOutlinerSystemInstanceData
struct FNiagaraOutlinerSystemInstanceData
{
public:
	class FString                                ComponentName;                                     // 0x0(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector3f                             LWCTile;                                           // 0x10(0xC)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_444[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FNiagaraOutlinerEmitterInstanceData> Emitters;                                          // 0x20(0x10)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	enum class ENiagaraExecutionState            ActualExecutionState;                              // 0x30(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENiagaraExecutionState            RequestedExecutionState;                           // 0x34(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNiagaraScalabilityState              ScalabilityState;                                  // 0x38(0xC)(Edit, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        bPendingKill : 1;                                  // Mask: 0x1, PropSize: 0x10x44(0x1)(Edit, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUsingCullProxy : 1;                               // Mask: 0x2, PropSize: 0x10x44(0x1)(Edit, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_48 : 6;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_445[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	enum class ENCPoolMethod                     PoolMethod;                                        // 0x48(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_446[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FNiagaraOutlinerTimingData            AverageTime;                                       // 0x4C(0x8)(Edit, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	struct FNiagaraOutlinerTimingData            MaxTime;                                           // 0x54(0x8)(Edit, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	enum class ETickingGroup                     TickGroup;                                         // 0x5C(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENiagaraGpuComputeTickStage       GpuTickStage;                                      // 0x5D(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_447[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        bIsSolo : 1;                                       // Mask: 0x1, PropSize: 0x10x60(0x1)(Edit, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bRequiresDistanceFieldData : 1;                    // Mask: 0x2, PropSize: 0x10x60(0x1)(Edit, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bRequiresDepthBuffer : 1;                          // Mask: 0x4, PropSize: 0x10x60(0x1)(Edit, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bRequiresEarlyViewData : 1;                        // Mask: 0x8, PropSize: 0x10x60(0x1)(Edit, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bRequiresViewUniformBuffer : 1;                    // Mask: 0x10, PropSize: 0x10x60(0x1)(Edit, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bRequiresRayTracingScene : 1;                      // Mask: 0x20, PropSize: 0x10x60(0x1)(Edit, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_448[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Niagara.NiagaraOutlinerSystemData
struct FNiagaraOutlinerSystemData
{
public:
	TArray<struct FNiagaraOutlinerSystemInstanceData> SystemInstances;                                   // 0x0(0x10)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	struct FNiagaraOutlinerTimingData            AveragePerFrameTime;                               // 0x10(0x8)(Edit, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	struct FNiagaraOutlinerTimingData            MaxPerFrameTime;                                   // 0x18(0x8)(Edit, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	struct FNiagaraOutlinerTimingData            AveragePerInstanceTime;                            // 0x20(0x8)(Edit, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	struct FNiagaraOutlinerTimingData            MaxPerInstanceTime;                                // 0x28(0x8)(Edit, EditConst, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// ScriptStruct Niagara.NiagaraOutlinerWorldData
struct FNiagaraOutlinerWorldData
{
public:
	TMap<class FString, struct FNiagaraOutlinerSystemData> Systems;                                           // 0x0(0x50)(Edit, EditConst, NativeAccessSpecifierPublic)
	bool                                         bHasBegunPlay;                                     // 0x50(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        WorldType;                                         // 0x51(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        NetMode;                                           // 0x52(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_44E[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FNiagaraOutlinerTimingData            AveragePerFrameTime;                               // 0x54(0x8)(Edit, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	struct FNiagaraOutlinerTimingData            MaxPerFrameTime;                                   // 0x5C(0x8)(Edit, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_44F[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// ScriptStruct Niagara.NiagaraOutlinerData
struct FNiagaraOutlinerData
{
public:
	TMap<class FString, struct FNiagaraOutlinerWorldData> WorldData;                                         // 0x0(0x50)(Edit, EditConst, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Niagara.NiagaraDebuggerRequestConnection
struct FNiagaraDebuggerRequestConnection
{
public:
	struct FGuid                                 SessionId;                                         // 0x0(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 InstanceId;                                        // 0x10(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Niagara.NiagaraDebuggerAcceptConnection
struct FNiagaraDebuggerAcceptConnection
{
public:
	struct FGuid                                 SessionId;                                         // 0x0(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 InstanceId;                                        // 0x10(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Niagara.NiagaraDebuggerConnectionClosed
struct FNiagaraDebuggerConnectionClosed
{
public:
	struct FGuid                                 SessionId;                                         // 0x0(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 InstanceId;                                        // 0x10(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Niagara.NiagaraDebuggerExecuteConsoleCommand
struct FNiagaraDebuggerExecuteConsoleCommand
{
public:
	class FString                                Command;                                           // 0x0(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRequiresWorld;                                    // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_454[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// ScriptStruct Niagara.NiagaraDebuggerOutlinerUpdate
struct FNiagaraDebuggerOutlinerUpdate
{
public:
	struct FNiagaraOutlinerData                  OutlinerData;                                      // 0x0(0x50)(Edit, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Niagara.NiagaraDebugHudTextOptions
struct FNiagaraDebugHudTextOptions
{
public:
	enum class ENiagaraDebugHudFont              Font;                                              // 0x0(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENiagaraDebugHudHAlign            HorizontalAlignment;                               // 0x4(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENiagaraDebugHudVAlign            VerticalAlignment;                                 // 0x5(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_457[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             ScreenOffset;                                      // 0x8(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Niagara.NiagaraDebugHUDVariable
struct FNiagaraDebugHUDVariable
{
public:
	bool                                         bEnabled;                                          // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_458[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Name;                                              // 0x8(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x230 (0x230 - 0x0)
// ScriptStruct Niagara.NiagaraDebugHUDSettingsData
struct FNiagaraDebugHUDSettingsData
{
public:
	bool                                         bHudEnabled;                                       // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHudRenderingEnabled;                              // 0x1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bValidateSystemSimulationDataBuffers;              // 0x2(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bValidateParticleDataBuffers;                      // 0x3(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOverviewEnabled;                                  // 0x4(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_459[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	enum class ENiagaraDebugHUDOverviewMode      OverviewMode;                                      // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENiagaraDebugHudFont              OverviewFont;                                      // 0xC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             OverviewLocation;                                  // 0x10(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowRegisteredComponents;                         // 0x20(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOverviewShowFilteredSystemOnly;                   // 0x21(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_45A[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ActorFilter;                                       // 0x28(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bComponentFilterEnabled;                           // 0x38(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_45B[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ComponentFilter;                                   // 0x40(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSystemFilterEnabled;                              // 0x50(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_45D[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                SystemFilter;                                      // 0x58(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEmitterFilterEnabled;                             // 0x68(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_45E[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                EmitterFilter;                                     // 0x70(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bActorFilterEnabled;                               // 0x80(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_45F[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	enum class ENiagaraDebugHudVerbosity         SystemDebugVerbosity;                              // 0x84(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENiagaraDebugHudVerbosity         SystemEmitterVerbosity;                            // 0x88(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENiagaraDebugHudVerbosity         DataInterfaceVerbosity;                            // 0x8C(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSystemShowBounds;                                 // 0x90(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSystemShowActiveOnlyInWorld;                      // 0x91(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowSystemVariables;                              // 0x92(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_460[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FNiagaraDebugHUDVariable>      SystemVariables;                                   // 0x98(0x10)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	struct FNiagaraDebugHudTextOptions           SystemTextOptions;                                 // 0xA8(0x18)(Edit, Config, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bShowParticleVariables;                            // 0xC0(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableGpuParticleReadback;                        // 0xC1(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowParticleIndex;                                // 0xC2(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_461[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FNiagaraDebugHUDVariable>      ParticlesVariables;                                // 0xC8(0x10)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	struct FNiagaraDebugHudTextOptions           ParticleTextOptions;                               // 0xD8(0x18)(Edit, Config, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bShowParticlesVariablesWithSystem;                 // 0xF0(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowParticleVariablesVertical;                    // 0xF1(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseMaxParticlesToDisplay;                         // 0xF2(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseParticleDisplayClip;                           // 0xF3(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_462[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             ParticleDisplayClip;                               // 0xF8(0x10)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseParticleDisplayCenterRadius;                   // 0x108(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_463[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ParticleDisplayCenterRadius;                       // 0x10C(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxParticlesToDisplay;                             // 0x110(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PerfReportFrames;                                  // 0x114(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENiagaraDebugHUDPerfSampleMode    PerfSampleMode;                                    // 0x118(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENiagaraDebugHUDPerfGraphMode     PerfGraphMode;                                     // 0x11C(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PerfHistoryFrames;                                 // 0x120(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PerfGraphTimeRange;                                // 0x124(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             PerfGraphSize;                                     // 0x128(0x10)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          PerfGraphAxisColor;                                // 0x138(0x10)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableSmoothing;                                  // 0x148(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_464[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        SmoothingWidth;                                    // 0x14C(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          DefaultBackgroundColor;                            // 0x150(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          OverviewHeadingColor;                              // 0x160(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          OverviewDetailColor;                               // 0x170(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          OverviewDetailHighlightColor;                      // 0x180(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          InWorldErrorTextColor;                             // 0x190(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          InWorldTextColor;                                  // 0x1A0(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          MessageInfoTextColor;                              // 0x1B0(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          MessageWarningTextColor;                           // 0x1C0(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          MessageErrorTextColor;                             // 0x1D0(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SystemColorTableOpacity;                           // 0x1E0(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       SystemColorSeed;                                   // 0x1E4(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               SystemColorHSVMin;                                 // 0x1E8(0x18)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               SystemColorHSVMax;                                 // 0x200(0x18)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENiagaraDebugPlaybackMode         PlaybackMode;                                      // 0x218(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPlaybackRateEnabled;                              // 0x219(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_468[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        PlaybackRate;                                      // 0x21C(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLoopTimeEnabled;                                  // 0x220(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_46B[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        LoopTime;                                          // 0x224(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowGlobalBudgetInfo;                             // 0x228(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_46C[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// ScriptStruct Niagara.NiagaraRequestSimpleClientInfoMessage
struct FNiagaraRequestSimpleClientInfoMessage
{
public:
	uint8                                        Pad_46D[0x1];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Niagara.NiagaraOutlinerCaptureSettings
struct FNiagaraOutlinerCaptureSettings
{
public:
	bool                                         bTriggerCapture;                                   // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_46E[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	uint32                                       CaptureDelayFrames;                                // 0x4(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bGatherPerfData;                                   // 0x8(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_46F[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	uint32                                       SimCacheCaptureFrames;                             // 0xC(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct Niagara.NiagaraSimpleClientInfo
struct FNiagaraSimpleClientInfo
{
public:
	TArray<class FString>                        Systems;                                           // 0x0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FString>                        Actors;                                            // 0x10(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FString>                        Components;                                        // 0x20(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FString>                        Emitters;                                          // 0x30(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Niagara.NiagaraSystemSimCacheCaptureRequest
struct FNiagaraSystemSimCacheCaptureRequest
{
public:
	class FName                                  ComponentName;                                     // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       CaptureDelayFrames;                                // 0x8(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       CaptureFrames;                                     // 0xC(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Niagara.NiagaraSystemSimCacheCaptureReply
struct FNiagaraSystemSimCacheCaptureReply
{
public:
	class FName                                  ComponentName;                                     // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<uint8>                                SimCacheData;                                      // 0x8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Niagara.NiagaraGraphViewSettings
struct FNiagaraGraphViewSettings
{
public:
	struct FVector2D                             Location;                                          // 0x0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        Zoom;                                              // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bIsValid;                                          // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_471[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Niagara.NiagaraLinearRamp
struct FNiagaraLinearRamp
{
public:
	float                                        StartX;                                            // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StartY;                                            // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EndX;                                              // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EndY;                                              // 0xC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Niagara.NiagaraGlobalBudgetScaling
struct FNiagaraGlobalBudgetScaling
{
public:
	uint8                                        bCullByGlobalBudget : 1;                           // Mask: 0x1, PropSize: 0x10x0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bScaleMaxDistanceByGlobalBudgetUse : 1;            // Mask: 0x2, PropSize: 0x10x0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bScaleMaxInstanceCountByGlobalBudgetUse : 1;       // Mask: 0x4, PropSize: 0x10x0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bScaleSystemInstanceCountByGlobalBudgetUse : 1;    // Mask: 0x8, PropSize: 0x10x0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_4B : 4;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_472[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MaxGlobalBudgetUsage;                              // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNiagaraLinearRamp                    MaxDistanceScaleByGlobalBudgetUse;                 // 0x8(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FNiagaraLinearRamp                    MaxInstanceCountScaleByGlobalBudgetUse;            // 0x18(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FNiagaraLinearRamp                    MaxSystemInstanceCountScaleByGlobalBudgetUse;      // 0x28(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct Niagara.NiagaraSystemVisibilityCullingSettings
struct FNiagaraSystemVisibilityCullingSettings
{
public:
	uint8                                        bCullWhenNotRendered : 1;                          // Mask: 0x1, PropSize: 0x10x0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCullByViewFrustum : 1;                            // Mask: 0x2, PropSize: 0x10x0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAllowPreCullingByViewFrustum : 1;                 // Mask: 0x4, PropSize: 0x10x0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_4C : 5;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_473[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MaxTimeOutsideViewFrustum;                         // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxTimeWithoutRender;                              // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Niagara.NiagaraDeviceProfileStateEntry
struct FNiagaraDeviceProfileStateEntry
{
public:
	class FName                                  ProfileName;                                       // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       QualityLevelMask;                                  // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       SetQualityLevelMask;                               // 0xC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Niagara.NiagaraPlatformSetCVarCondition
struct FNiagaraPlatformSetCVarCondition
{
public:
	class FName                                  CVarName;                                          // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENiagaraCVarConditionResponse     PassResponse;                                      // 0x8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENiagaraCVarConditionResponse     FailResponse;                                      // 0x9(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Value;                                             // 0xA(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_478[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MinInt;                                            // 0xC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxInt;                                            // 0x10(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinFloat;                                          // 0x14(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxFloat;                                          // 0x18(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUseMinInt : 1;                                    // Mask: 0x1, PropSize: 0x10x1C(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUseMaxInt : 1;                                    // Mask: 0x2, PropSize: 0x10x1C(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUseMinFloat : 1;                                  // Mask: 0x4, PropSize: 0x10x1C(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUseMaxFloat : 1;                                  // Mask: 0x8, PropSize: 0x10x1C(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_47A[0x13];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Niagara.NiagaraPlatformSet
struct FNiagaraPlatformSet
{
public:
	int32                                        QualityLevelMask;                                  // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_47B[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FNiagaraDeviceProfileStateEntry> DeviceProfileStates;                               // 0x8(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FNiagaraPlatformSetCVarCondition> CVarConditions;                                    // 0x18(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_47C[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x98 (0x98 - 0x0)
// ScriptStruct Niagara.NiagaraSystemScalabilitySettings
struct FNiagaraSystemScalabilitySettings
{
public:
	struct FNiagaraPlatformSet                   Platforms;                                         // 0x0(0x30)(Edit, NativeAccessSpecifierPublic)
	uint8                                        bCullByDistance : 1;                               // Mask: 0x1, PropSize: 0x10x30(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCullMaxInstanceCount : 1;                         // Mask: 0x2, PropSize: 0x10x30(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCullPerSystemMaxInstanceCount : 1;                // Mask: 0x4, PropSize: 0x10x30(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_4D : 5;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_480[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MaxDistance;                                       // 0x34(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCullByMaxTimeWithoutRender : 1;                   // Mask: 0x1, PropSize: 0x10x38(0x1)(Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_4E : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_481[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MaxInstances;                                      // 0x3C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxSystemInstances;                                // 0x40(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxTimeWithoutRender;                              // 0x44(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENiagaraCullProxyMode             CullProxyMode;                                     // 0x48(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxSystemProxies;                                  // 0x4C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNiagaraSystemVisibilityCullingSettings VisibilityCulling;                                 // 0x50(0xC)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FNiagaraGlobalBudgetScaling           BudgetScaling;                                     // 0x5C(0x38)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_483[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Niagara.NiagaraSystemScalabilitySettingsArray
struct FNiagaraSystemScalabilitySettingsArray
{
public:
	TArray<struct FNiagaraSystemScalabilitySettings> Settings;                                          // 0x0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x8 (0xA0 - 0x98)
// ScriptStruct Niagara.NiagaraSystemScalabilityOverride
struct FNiagaraSystemScalabilityOverride : public FNiagaraSystemScalabilitySettings
{
public:
	uint8                                        bOverrideDistanceSettings : 1;                     // Mask: 0x1, PropSize: 0x10x98(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverrideInstanceCountSettings : 1;                // Mask: 0x2, PropSize: 0x10x98(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverridePerSystemInstanceCountSettings : 1;       // Mask: 0x4, PropSize: 0x10x98(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverrideVisibilitySettings : 1;                   // Mask: 0x8, PropSize: 0x10x98(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverrideGlobalBudgetScalingSettings : 1;          // Mask: 0x10, PropSize: 0x10x98(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverrideCullProxySettings : 1;                    // Mask: 0x20, PropSize: 0x10x98(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_484[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Niagara.NiagaraSystemScalabilityOverrides
struct FNiagaraSystemScalabilityOverrides
{
public:
	TArray<struct FNiagaraSystemScalabilityOverride> Overrides;                                         // 0x0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Niagara.NiagaraEmitterScalabilitySettings
struct FNiagaraEmitterScalabilitySettings
{
public:
	struct FNiagaraPlatformSet                   Platforms;                                         // 0x0(0x30)(Edit, NativeAccessSpecifierPublic)
	uint8                                        bScaleSpawnCount : 1;                              // Mask: 0x1, PropSize: 0x10x30(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_4F : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_485[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SpawnCountScale;                                   // 0x34(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Niagara.NiagaraEmitterScalabilitySettingsArray
struct FNiagaraEmitterScalabilitySettingsArray
{
public:
	TArray<struct FNiagaraEmitterScalabilitySettings> Settings;                                          // 0x0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x40 - 0x38)
// ScriptStruct Niagara.NiagaraEmitterScalabilityOverride
struct FNiagaraEmitterScalabilityOverride : public FNiagaraEmitterScalabilitySettings
{
public:
	uint8                                        bOverrideSpawnCountScale : 1;                      // Mask: 0x1, PropSize: 0x10x38(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_487[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Niagara.NiagaraEmitterScalabilityOverrides
struct FNiagaraEmitterScalabilityOverrides
{
public:
	TArray<struct FNiagaraEmitterScalabilityOverride> Overrides;                                         // 0x0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Niagara.NiagaraEventReceiverProperties
struct FNiagaraEventReceiverProperties
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SourceEventGenerator;                              // 0x8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SourceEmitter;                                     // 0x10(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct Niagara.NiagaraEventGeneratorProperties
struct FNiagaraEventGeneratorProperties
{
public:
	int32                                        MaxEventsPerFrame;                                 // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ID;                                                // 0x4(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_48A[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FNiagaraDataSetCompiledData           DataSetCompiledData;                               // 0x10(0x40)(NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Niagara.NiagaraEmitterScriptProperties
struct FNiagaraEmitterScriptProperties
{
public:
	class UNiagaraScript*                        Script;                                            // 0x0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FNiagaraEventReceiverProperties> EventReceivers;                                    // 0x8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FNiagaraEventGeneratorProperties> EventGenerators;                                   // 0x18(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x30 (0x58 - 0x28)
// ScriptStruct Niagara.NiagaraEventScriptProperties
struct FNiagaraEventScriptProperties : public FNiagaraEmitterScriptProperties
{
public:
	enum class EScriptExecutionMode              ExecutionMode;                                     // 0x28(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_48B[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	uint32                                       SpawnNumber;                                       // 0x2C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       MaxEventsPerFrame;                                 // 0x30(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 SourceEmitterID;                                   // 0x34(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SourceEventName;                                   // 0x44(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRandomSpawnNumber;                                // 0x4C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_48C[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	uint32                                       MinSpawnNumber;                                    // 0x50(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         UpdateAttributeInitialValues;                      // 0x54(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_48D[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x14 (0x14 - 0x0)
// ScriptStruct Niagara.NiagaraDetailsLevelScaleOverrides
struct FNiagaraDetailsLevelScaleOverrides
{
public:
	float                                        Low;                                               // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Medium;                                            // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        High;                                              // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Epic;                                              // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Cine;                                              // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1C (0x1C - 0x0)
// ScriptStruct Niagara.NiagaraAssetVersion
struct FNiagaraAssetVersion
{
public:
	int32                                        MajorVersion;                                      // 0x0(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MinorVersion;                                      // 0x4(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 VersionGuid;                                       // 0x8(0x10)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsVisibleInVersionSelector;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_48E[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x14 (0x14 - 0x0)
// ScriptStruct Niagara.NiagaraStructConversionStep
struct FNiagaraStructConversionStep
{
public:
	int32                                        SourceBytes;                                       // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SourceOffset;                                      // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SimulationBytes;                                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SimulationOffset;                                  // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENiagaraStructConversionType      ConversionType;                                    // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_490[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Niagara.NiagaraLwcStructConverter
struct FNiagaraLwcStructConverter
{
public:
	TArray<struct FNiagaraStructConversionStep>  ConversionSteps;                                   // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
};

// 0x14 (0x20 - 0xC)
// ScriptStruct Niagara.NiagaraVariableWithOffset
struct FNiagaraVariableWithOffset : public FNiagaraVariableBase
{
public:
	int32                                        Offset;                                            // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNiagaraLwcStructConverter            StructConverter;                                   // 0x10(0x10)(NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Niagara.NiagaraPositionSource
struct FNiagaraPositionSource
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Value;                                             // 0x8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x88 (0x88 - 0x0)
// ScriptStruct Niagara.NiagaraParameterStore
struct FNiagaraParameterStore
{
public:
	uint8                                        Pad_492[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TWeakObjectPtr<class UObject>                Owner;                                             // 0x8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FNiagaraVariableWithOffset>    SortedParameterOffsets;                            // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<uint8>                                ParameterData;                                     // 0x20(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<class UNiagaraDataInterface*>         DataInterfaces;                                    // 0x30(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate)
	TArray<class UObject*>                       UObjects;                                          // 0x40(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate)
	TArray<struct FNiagaraPositionSource>        OriginalPositionData;                              // 0x50(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_493[0x28];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x328 (0x328 - 0x0)
// ScriptStruct Niagara.VersionedNiagaraEmitterData
struct FVersionedNiagaraEmitterData
{
public:
	struct FNiagaraAssetVersion                  Version;                                           // 0x0(0x1C)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_494[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  VersionChangeDescription;                          // 0x20(0x18)(NativeAccessSpecifierPublic)
	enum class ENiagaraPythonUpdateScriptReference UpdateScriptExecution;                             // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_495[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                PythonUpdateScript;                                // 0x40(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFilePath                             ScriptAsset;                                       // 0x50(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDeprecated;                                       // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_496[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  DeprecationMessage;                                // 0x68(0x18)(NativeAccessSpecifierPublic)
	bool                                         bLocalSpace;                                       // 0x80(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDeterminism;                                      // 0x81(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_497[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        RandomSeed;                                        // 0x84(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bInterpolatedSpawning : 1;                         // Mask: 0x1, PropSize: 0x10x88(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_50 : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_498[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	enum class ENiagaraSimTarget                 SimTarget;                                         // 0x8C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENiagaraEmitterCalculateBoundMode CalculateBoundsMode;                               // 0x8D(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_499[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FBox                                  FixedBounds;                                       // 0x90(0x38)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        bRequiresPersistentIDs : 1;                        // Mask: 0x1, PropSize: 0x10xC8(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCombineEventSpawn : 1;                            // Mask: 0x2, PropSize: 0x10xC8(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_51 : 6;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_49C[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FNiagaraEventScriptProperties> EventHandlerScriptProps;                           // 0xD0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct FNiagaraPlatformSet                   Platforms;                                         // 0xE0(0x30)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraEmitterScalabilityOverrides   ScalabilityOverrides;                              // 0x110(0x10)(Edit, NativeAccessSpecifierPublic)
	uint8                                        bLimitDeltaTime : 1;                               // Mask: 0x1, PropSize: 0x10x120(0x1)(Edit, BlueprintVisible, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_52 : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_49D[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MaxGPUParticlesSpawnPerFrame;                      // 0x124(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxDeltaTimePerTick;                               // 0x128(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EParticleAllocationMode           AllocationMode;                                    // 0x12C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_49E[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        PreAllocationCount;                                // 0x130(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_49F[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FNiagaraEmitterScriptProperties       UpdateScriptProps;                                 // 0x138(0x28)(NativeAccessSpecifierPublic)
	struct FNiagaraEmitterScriptProperties       SpawnScriptProps;                                  // 0x160(0x28)(NativeAccessSpecifierPublic)
	struct FNiagaraParameterStore                RendererBindings;                                  // 0x188(0x88)(NativeAccessSpecifierPublic)
	TArray<class UNiagaraRendererProperties*>    RendererProperties;                                // 0x210(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate)
	TArray<class UNiagaraSimulationStageBase*>   SimulationStages;                                  // 0x220(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate)
	class UNiagaraScript*                        GPUComputeScript;                                  // 0x230(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class FName>                          SharedEventGeneratorIds;                           // 0x238(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	struct FNiagaraEmitterScalabilitySettings    CurrentScalabilitySettings;                        // 0x248(0x38)(Transient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_4A1[0xA8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Niagara.VersionedNiagaraEmitter
struct FVersionedNiagaraEmitter
{
public:
	class UNiagaraEmitter*                       Emitter;                                           // 0x0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 Version;                                           // 0x8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct Niagara.NiagaraEmitterHandle
struct FNiagaraEmitterHandle
{
public:
	struct FGuid                                 ID;                                                // 0x0(0x10)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  IdName;                                            // 0x10(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bIsEnabled;                                        // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_4A5[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  Name;                                              // 0x1C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_4A6[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UNiagaraEmitter*                       Instance;                                          // 0x28(0x8)(ZeroConstructor, Deprecated, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FVersionedNiagaraEmitter              VersionedInstance;                                 // 0x30(0x18)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct Niagara.NiagaraCollisionEventPayload
struct FNiagaraCollisionEventPayload
{
public:
	struct FVector                               CollisionPos;                                      // 0x0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               CollisionNormal;                                   // 0x18(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               CollisionVelocity;                                 // 0x30(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ParticleIndex;                                     // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PhysicalMaterialIndex;                             // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Niagara.NiagaraMeshMaterialOverride
struct FNiagaraMeshMaterialOverride
{
public:
	class UMaterialInterface*                    ExplicitMat;                                       // 0x0(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNiagaraUserParameterBinding          UserParamBinding;                                  // 0x8(0x20)(Edit, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// ScriptStruct Niagara.NiagaraMeshRendererMeshProperties
struct FNiagaraMeshRendererMeshProperties
{
public:
	class UStaticMesh*                           Mesh;                                              // 0x0(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNiagaraUserParameterBinding          UserParamBinding;                                  // 0x8(0x20)(Edit, NativeAccessSpecifierPublic)
	struct FVector                               Scale;                                             // 0x28(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              Rotation;                                          // 0x40(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               PivotOffset;                                       // 0x58(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENiagaraMeshPivotOffsetSpace      PivotOffsetSpace;                                  // 0x70(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4A9[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// ScriptStruct Niagara.ParameterDefinitionsSubscription
struct FParameterDefinitionsSubscription
{
public:
	uint8                                        Pad_4AB[0x1];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Niagara.NiagaraParameters
struct FNiagaraParameters
{
public:
	TArray<struct FNiagaraVariable>              Parameters;                                        // 0x0(0x10)(Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Niagara.NiagaraBoundParameter
struct FNiagaraBoundParameter
{
public:
	struct FNiagaraVariable                      Parameter;                                         // 0x0(0x20)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SrcOffset;                                         // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DestOffset;                                        // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Niagara.NiagaraPerfBaselineStats
struct FNiagaraPerfBaselineStats
{
public:
	float                                        PerInstanceAvg_GT;                                 // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PerInstanceAvg_RT;                                 // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PerInstanceMax_GT;                                 // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PerInstanceMax_RT;                                 // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct Niagara.NiagaraPlatformSetConflictEntry
struct FNiagaraPlatformSetConflictEntry
{
public:
	class FName                                  ProfileName;                                       // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        QualityLevelMask;                                  // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Niagara.NiagaraPlatformSetConflictInfo
struct FNiagaraPlatformSetConflictInfo
{
public:
	int32                                        SetAIndex;                                         // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SetBIndex;                                         // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FNiagaraPlatformSetConflictEntry> Conflicts;                                         // 0x8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// ScriptStruct Niagara.NiagaraPlatformSetRedirect
struct FNiagaraPlatformSetRedirect
{
public:
	TArray<class FName>                          ProfileNames;                                      // 0x0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	enum class ENiagaraDeviceProfileRedirectMode Mode;                                              // 0x10(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4B2[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  RedirectProfileName;                               // 0x14(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4B3[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FNiagaraPlatformSetCVarCondition      CVarConditionEnabled;                              // 0x20(0x30)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FNiagaraPlatformSetCVarCondition      CVarConditionDisabled;                             // 0x50(0x30)(Edit, NoDestructor, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct Niagara.NiagaraRendererMaterialScalarParameter
struct FNiagaraRendererMaterialScalarParameter
{
public:
	class FName                                  MaterialParameterName;                             // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Value;                                             // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Niagara.NiagaraRendererMaterialVectorParameter
struct FNiagaraRendererMaterialVectorParameter
{
public:
	class FName                                  MaterialParameterName;                             // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          Value;                                             // 0x8(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Niagara.NiagaraRendererMaterialTextureParameter
struct FNiagaraRendererMaterialTextureParameter
{
public:
	class FName                                  MaterialParameterName;                             // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture*                              Texture;                                           // 0x8(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct Niagara.NiagaraRendererMaterialParameters
struct FNiagaraRendererMaterialParameters
{
public:
	TArray<struct FNiagaraMaterialAttributeBinding> AttributeBindings;                                 // 0x0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FNiagaraRendererMaterialScalarParameter> ScalarParameters;                                  // 0x10(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FNiagaraRendererMaterialVectorParameter> VectorParameters;                                  // 0x20(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FNiagaraRendererMaterialTextureParameter> TextureParameters;                                 // 0x30(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct Niagara.NiagaraRibbonShapeCustomVertex
struct FNiagaraRibbonShapeCustomVertex
{
public:
	struct FVector2f                             Position;                                          // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2f                             Normal;                                            // 0x8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TextureV;                                          // 0x10(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Niagara.NiagaraRibbonUVSettings
struct FNiagaraRibbonUVSettings
{
public:
	enum class ENiagaraRibbonUVDistributionMode  DistributionMode;                                  // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENiagaraRibbonUVEdgeMode          LeadingEdgeMode;                                   // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENiagaraRibbonUVEdgeMode          TrailingEdgeMode;                                  // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TilingLength;                                      // 0xC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             Offset;                                            // 0x10(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             Scale;                                             // 0x20(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnablePerParticleUOverride;                       // 0x30(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnablePerParticleVRangeOverride;                  // 0x31(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4BA[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xD8 (0xD8 - 0x0)
// ScriptStruct Niagara.NiagaraScalabilityManager
struct FNiagaraScalabilityManager
{
public:
	class UNiagaraEffectType*                    EffectType;                                        // 0x0(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UNiagaraComponent*>             ManagedComponents;                                 // 0x8(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic)
	uint8                                        Pad_4BC[0xC0];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x68 (0x68 - 0x0)
// ScriptStruct Niagara.NiagaraModuleDependency
struct FNiagaraModuleDependency
{
public:
	class FName                                  ID;                                                // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENiagaraModuleDependencyType      Type;                                              // 0x8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENiagaraModuleDependencyScriptConstraint ScriptConstraint;                                  // 0x9(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4BD[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                RequiredVersion;                                   // 0x10(0x10)(Edit, ZeroConstructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        OnlyEvaluateInScriptUsage;                         // 0x20(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4BE[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Description;                                       // 0x28(0x18)(Edit, AssetRegistrySearchable, NativeAccessSpecifierPublic)
	uint8                                        Pad_4BF[0x28];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Niagara.NiagaraCompilerTag
struct FNiagaraCompilerTag
{
public:
	struct FNiagaraVariable                      Variable;                                          // 0x0(0x20)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                StringValue;                                       // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct Niagara.NiagaraVMExecutableDataId
struct FNiagaraVMExecutableDataId
{
public:
	struct FGuid                                 CompilerVersionID;                                 // 0x0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENiagaraScriptUsage               ScriptUsageType;                                   // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4C0[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGuid                                 ScriptUsageTypeID;                                 // 0x14(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUsesRapidIterationParams : 1;                     // Mask: 0x1, PropSize: 0x10x24(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bDisableDebugSwitches : 1;                         // Mask: 0x2, PropSize: 0x10x24(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bInterpolatedSpawn : 1;                            // Mask: 0x4, PropSize: 0x10x24(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bRequiresPersistentIDs : 1;                        // Mask: 0x8, PropSize: 0x10x24(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_53 : 4;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_4C1[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGuid                                 BaseScriptID;                                      // 0x28(0x10)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNiagaraCompileHash                   BaseScriptCompileHash;                             // 0x38(0x10)(NativeAccessSpecifierPublic)
	struct FGuid                                 ScriptVersionID;                                   // 0x48(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Niagara.NiagaraVMExecutableByteCode
struct FNiagaraVMExecutableByteCode
{
public:
	TArray<uint8>                                Data;                                              // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	int32                                        UncompressedSize;                                  // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_4C2[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x190 (0x190 - 0x0)
// ScriptStruct Niagara.NiagaraVMExecutableData
struct FNiagaraVMExecutableData
{
public:
	struct FNiagaraVMExecutableByteCode          ByteCode;                                          // 0x0(0x18)(NativeAccessSpecifierPublic)
	struct FNiagaraVMExecutableByteCode          OptimizedByteCode;                                 // 0x18(0x18)(Transient, NativeAccessSpecifierPublic)
	uint8                                        Pad_4C3[0x38];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        NumTempRegisters;                                  // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumUserPtrs;                                       // 0x6C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FNiagaraCompilerTag>           CompileTags;                                       // 0x70(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<uint8>                                ScriptLiterals;                                    // 0x80(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FNiagaraVariable>              Attributes;                                        // 0x90(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct FNiagaraScriptDataUsageInfo           DataUsage;                                         // 0xA0(0x1)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_4C4[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FNiagaraScriptDataInterfaceCompileInfo> DataInterfaceInfo;                                 // 0xA8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FVMExternalFunctionBindingInfo> CalledVMExternalFunctions;                         // 0xB8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_4C5[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FNiagaraDataSetID>             ReadDataSets;                                      // 0xD8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FNiagaraDataSetProperties>     WriteDataSets;                                     // 0xE8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FNiagaraStatScope>             StatScopes;                                        // 0xF8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct FNiagaraShaderScriptParametersMetadata ShaderScriptParametersMetadata;                    // 0x108(0x58)(NativeAccessSpecifierPublic)
	enum class ENiagaraScriptCompileStatus       LastCompileStatus;                                 // 0x160(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4C6[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FSimulationStageMetaData>      SimulationStageMetaData;                           // 0x168(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<uint8>                                ExperimentalContextData;                           // 0x178(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        bReadsSignificanceIndex : 1;                       // Mask: 0x1, PropSize: 0x10x188(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bNeedsGPUContextInit : 1;                          // Mask: 0x2, PropSize: 0x10x188(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4C7[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// ScriptStruct Niagara.VersionedNiagaraScriptData
struct FVersionedNiagaraScriptData
{
public:
	uint8                                        Pad_4C8[0x1];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Niagara.NiagaraScriptExecutionPaddingInfo
struct FNiagaraScriptExecutionPaddingInfo
{
public:
	uint16                                       SrcOffset;                                         // 0x0(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       DestOffset;                                        // 0x2(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       SrcSize;                                           // 0x4(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       DestSize;                                          // 0x6(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0xA8 - 0x88)
// ScriptStruct Niagara.NiagaraScriptExecutionParameterStore
struct FNiagaraScriptExecutionParameterStore : public FNiagaraParameterStore
{
public:
	int32                                        ParameterSize;                                     // 0x88(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       PaddedParameterSize;                               // 0x8C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FNiagaraScriptExecutionPaddingInfo> PaddingInfo;                                       // 0x90(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        bInitialized : 1;                                  // Mask: 0x1, PropSize: 0x10xA0(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4CD[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x98 - 0x88)
// ScriptStruct Niagara.NiagaraScriptInstanceParameterStore
struct FNiagaraScriptInstanceParameterStore : public FNiagaraParameterStore
{
public:
	uint8                                        Pad_4CF[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Niagara.NiagaraScriptHighlight
struct FNiagaraScriptHighlight
{
public:
	struct FLinearColor                          Color;                                             // 0x0(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  DisplayName;                                       // 0x10(0x18)(Edit, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct Niagara.NiagaraSimCacheDataBuffers
struct FNiagaraSimCacheDataBuffers
{
public:
	uint32                                       NumInstances;                                      // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4D1[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<uint8>                                FloatData;                                         // 0x8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<uint8>                                HalfData;                                          // 0x18(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<uint8>                                Int32Data;                                         // 0x28(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                IDToIndexTable;                                    // 0x38(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint32                                       IDAcquireTag;                                      // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4D2[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x90 (0x90 - 0x0)
// ScriptStruct Niagara.NiagaraSimCacheEmitterFrame
struct FNiagaraSimCacheEmitterFrame
{
public:
	struct FBox                                  LocalBounds;                                       // 0x0(0x38)(ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        TotalSpawnedParticles;                             // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4D4[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FNiagaraSimCacheDataBuffers           ParticleDataBuffers;                               // 0x40(0x50)(NativeAccessSpecifierPublic)
};

// 0x88 (0x88 - 0x0)
// ScriptStruct Niagara.NiagaraSimCacheSystemFrame
struct FNiagaraSimCacheSystemFrame
{
public:
	struct FBox                                  LocalBounds;                                       // 0x0(0x38)(ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FNiagaraSimCacheDataBuffers           SystemDataBuffers;                                 // 0x38(0x50)(NativeAccessSpecifierPublic)
};

// 0x110 (0x110 - 0x0)
// ScriptStruct Niagara.NiagaraSimCacheFrame
struct FNiagaraSimCacheFrame
{
public:
	struct FTransform                            LocalToWorld;                                      // 0x0(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector3f                             LWCTile;                                           // 0x60(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4D6[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FNiagaraSimCacheSystemFrame           SystemData;                                        // 0x70(0x88)(NativeAccessSpecifierPublic)
	TArray<struct FNiagaraSimCacheEmitterFrame>  EmitterData;                                       // 0xF8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_4D7[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Niagara.NiagaraSimCacheVariable
struct FNiagaraSimCacheVariable
{
public:
	struct FNiagaraVariableBase                  Variable;                                          // 0x0(0xC)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       FloatOffset;                                       // 0xC(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       FloatCount;                                        // 0xE(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       HalfOffset;                                        // 0x10(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       HalfCount;                                         // 0x12(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       Int32Offset;                                       // 0x14(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       Int32Count;                                        // 0x16(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// ScriptStruct Niagara.NiagaraSimCacheDataBuffersLayout
struct FNiagaraSimCacheDataBuffersLayout
{
public:
	class FName                                  LayoutName;                                        // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENiagaraSimTarget                 SimTarget;                                         // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4D9[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FNiagaraSimCacheVariable>      Variables;                                         // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint16                                       FloatCount;                                        // 0x20(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       HalfCount;                                         // 0x22(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       Int32Count;                                        // 0x24(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLocalSpace;                                       // 0x26(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4DA[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          RebaseVariableNames;                               // 0x28(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_4DB[0x30];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x78 (0x78 - 0x0)
// ScriptStruct Niagara.NiagaraSimCacheLayout
struct FNiagaraSimCacheLayout
{
public:
	struct FNiagaraSimCacheDataBuffersLayout     SystemLayout;                                      // 0x0(0x68)(NativeAccessSpecifierPublic)
	TArray<struct FNiagaraSimCacheDataBuffersLayout> EmitterLayouts;                                    // 0x68(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x130 (0x130 - 0x0)
// ScriptStruct Niagara.NiagaraEmitterCompiledData
struct FNiagaraEmitterCompiledData
{
public:
	TArray<class FName>                          SpawnAttributes;                                   // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct FNiagaraVariable                      EmitterSpawnIntervalVar;                           // 0x10(0x20)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNiagaraVariable                      EmitterInterpSpawnStartDTVar;                      // 0x30(0x20)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNiagaraVariable                      EmitterSpawnGroupVar;                              // 0x50(0x20)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNiagaraVariable                      EmitterAgeVar;                                     // 0x70(0x20)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNiagaraVariable                      EmitterRandomSeedVar;                              // 0x90(0x20)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNiagaraVariable                      EmitterInstanceSeedVar;                            // 0xB0(0x20)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNiagaraVariable                      EmitterTotalSpawnedParticlesVar;                   // 0xD0(0x20)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNiagaraDataSetCompiledData           DataSetCompiledData;                               // 0xF0(0x40)(NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Niagara.NiagaraParameterDataSetBinding
struct FNiagaraParameterDataSetBinding
{
public:
	int32                                        ParameterOffset;                                   // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DataSetComponentOffset;                            // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Niagara.NiagaraParameterDataSetBindingCollection
struct FNiagaraParameterDataSetBindingCollection
{
public:
	TArray<struct FNiagaraParameterDataSetBinding> FloatOffsets;                                      // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FNiagaraParameterDataSetBinding> Int32Offsets;                                      // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x228 (0x228 - 0x0)
// ScriptStruct Niagara.NiagaraSystemCompiledData
struct FNiagaraSystemCompiledData
{
public:
	struct FNiagaraParameterStore                InstanceParamStore;                                // 0x0(0x88)(NativeAccessSpecifierPublic)
	struct FNiagaraDataSetCompiledData           DataSetCompiledData;                               // 0x88(0x40)(NativeAccessSpecifierPublic)
	struct FNiagaraDataSetCompiledData           SpawnInstanceParamsDataSetCompiledData;            // 0xC8(0x40)(NativeAccessSpecifierPublic)
	struct FNiagaraDataSetCompiledData           UpdateInstanceParamsDataSetCompiledData;           // 0x108(0x40)(NativeAccessSpecifierPublic)
	struct FNiagaraParameterDataSetBindingCollection SpawnInstanceGlobalBinding;                        // 0x148(0x20)(NativeAccessSpecifierPublic)
	struct FNiagaraParameterDataSetBindingCollection SpawnInstanceSystemBinding;                        // 0x168(0x20)(NativeAccessSpecifierPublic)
	struct FNiagaraParameterDataSetBindingCollection SpawnInstanceOwnerBinding;                         // 0x188(0x20)(NativeAccessSpecifierPublic)
	TArray<struct FNiagaraParameterDataSetBindingCollection> SpawnInstanceEmitterBindings;                      // 0x1A8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct FNiagaraParameterDataSetBindingCollection UpdateInstanceGlobalBinding;                       // 0x1B8(0x20)(NativeAccessSpecifierPublic)
	struct FNiagaraParameterDataSetBindingCollection UpdateInstanceSystemBinding;                       // 0x1D8(0x20)(NativeAccessSpecifierPublic)
	struct FNiagaraParameterDataSetBindingCollection UpdateInstanceOwnerBinding;                        // 0x1F8(0x20)(NativeAccessSpecifierPublic)
	TArray<struct FNiagaraParameterDataSetBindingCollection> UpdateInstanceEmitterBindings;                     // 0x218(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Niagara.NiagaraSystemCompileRequest
struct FNiagaraSystemCompileRequest
{
public:
	uint8                                        Pad_4DF[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UObject*>                       RootObjects;                                       // 0x8(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	uint8                                        Pad_4E0[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// ScriptStruct Niagara.NiagaraWildcard
struct FNiagaraWildcard
{
public:
	uint8                                        Pad_4E1[0x1];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// ScriptStruct Niagara.NiagaraFloat
struct FNiagaraFloat
{
public:
	float                                        Value;                                             // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct Niagara.NiagaraInt32
struct FNiagaraInt32
{
public:
	int32                                        Value;                                             // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct Niagara.NiagaraBool
struct FNiagaraBool
{
public:
	int32                                        Value;                                             // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x0 (0xC - 0xC)
// ScriptStruct Niagara.NiagaraPosition
struct FNiagaraPosition : public FVector3f
{
public:
};

// 0x2 (0x2 - 0x0)
// ScriptStruct Niagara.NiagaraHalf
struct FNiagaraHalf
{
public:
	uint16                                       Value;                                             // 0x0(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct Niagara.NiagaraHalfVector2
struct FNiagaraHalfVector2
{
public:
	uint16                                       X;                                                 // 0x0(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       Y;                                                 // 0x2(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x6 (0x6 - 0x0)
// ScriptStruct Niagara.NiagaraHalfVector3
struct FNiagaraHalfVector3
{
public:
	uint16                                       X;                                                 // 0x0(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       Y;                                                 // 0x2(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       Z;                                                 // 0x4(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Niagara.NiagaraHalfVector4
struct FNiagaraHalfVector4
{
public:
	uint16                                       X;                                                 // 0x0(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       Y;                                                 // 0x2(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       Z;                                                 // 0x4(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       W;                                                 // 0x6(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct Niagara.NiagaraNumeric
struct FNiagaraNumeric
{
public:
	uint8                                        Pad_4E4[0x1];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// ScriptStruct Niagara.NiagaraParameterMap
struct FNiagaraParameterMap
{
public:
	uint8                                        Pad_4E6[0x1];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct Niagara.NiagaraMatrix
struct FNiagaraMatrix
{
public:
	struct FVector4f                             Row0;                                              // 0x0(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector4f                             Row1;                                              // 0x10(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector4f                             Row2;                                              // 0x20(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector4f                             Row3;                                              // 0x30(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Niagara.NiagaraSpawnInfo
struct FNiagaraSpawnInfo
{
public:
	int32                                        Count;                                             // 0x0(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InterpStartDt;                                     // 0x4(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        IntervalDt;                                        // 0x8(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SpawnGroup;                                        // 0xC(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Niagara.NiagaraID
struct FNiagaraID
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        AcquireTag;                                        // 0x4(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct Niagara.NiagaraRandInfo
struct FNiagaraRandInfo
{
public:
	int32                                        Seed1;                                             // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Seed2;                                             // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Seed3;                                             // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Niagara.NiagaraCompileHashVisitorDebugInfo
struct FNiagaraCompileHashVisitorDebugInfo
{
public:
	class FString                                Object;                                            // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        PropertyKeys;                                      // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FString>                        PropertyValues;                                    // 0x20(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Niagara.NiagaraInputConditionMetadata
struct FNiagaraInputConditionMetadata
{
public:
	class FName                                  InputName;                                         // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        TargetValues;                                      // 0x8(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Niagara.NiagaraEnumParameterMetaData
struct FNiagaraEnumParameterMetaData
{
public:
	class FName                                  OverrideName;                                      // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                            IconOverride;                                      // 0x8(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseColorOverride;                                 // 0x10(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4ED[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          ColorOverride;                                     // 0x14(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4EE[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Niagara.NiagaraBoolParameterMetaData
struct FNiagaraBoolParameterMetaData
{
public:
	enum class ENiagaraBoolDisplayMode           DisplayMode;                                       // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4F0[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  OverrideNameTrue;                                  // 0x4(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  OverrideNameFalse;                                 // 0xC(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4F1[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            IconOverrideTrue;                                  // 0x18(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                            IconOverrideFalse;                                 // 0x20(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x148 (0x148 - 0x0)
// ScriptStruct Niagara.NiagaraVariableMetaData
struct FNiagaraVariableMetaData
{
public:
	class FText                                  Description;                                       // 0x0(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  CategoryName;                                      // 0x18(0x18)(Edit, NativeAccessSpecifierPublic)
	bool                                         bAdvancedDisplay;                                  // 0x30(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDisplayInOverviewStack;                           // 0x31(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4F2[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        InlineParameterSortPriority;                       // 0x34(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOverrideColor;                                    // 0x38(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4F4[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          InlineParameterColorOverride;                      // 0x3C(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4F5[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FNiagaraEnumParameterMetaData> InlineParameterEnumOverrides;                      // 0x50(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bEnableBoolOverride;                               // 0x60(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4F6[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FNiagaraBoolParameterMetaData         InlineParameterBoolOverride;                       // 0x68(0x28)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        EditorSortPriority;                                // 0x90(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInlineEditConditionToggle;                        // 0x94(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4F7[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FNiagaraInputConditionMetadata        EditCondition;                                     // 0x98(0x18)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraInputConditionMetadata        VisibleCondition;                                  // 0xB0(0x18)(Edit, NativeAccessSpecifierPublic)
	TMap<class FName, class FString>             PropertyMetaData;                                  // 0xC8(0x50)(Edit, NativeAccessSpecifierPublic)
	class FName                                  ParentAttribute;                                   // 0x118(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FName>                          AlternateAliases;                                  // 0x120(0x10)(Edit, ZeroConstructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FGuid                                 VariableGuid;                                      // 0x130(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bIsStaticSwitch;                                   // 0x140(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_4F8[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        StaticSwitchDefaultValue;                          // 0x144(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x50 (0xD8 - 0x88)
// ScriptStruct Niagara.NiagaraUserRedirectionParameterStore
struct FNiagaraUserRedirectionParameterStore : public FNiagaraParameterStore
{
public:
	TMap<struct FNiagaraVariable, struct FNiagaraVariable> UserParameterRedirects;                            // 0x88(0x50)(NativeAccessSpecifierPrivate)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Niagara.NiagaraVariant
struct FNiagaraVariant
{
public:
	class UObject*                               Object;                                            // 0x0(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UNiagaraDataInterface*                 DataInterface;                                     // 0x8(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<uint8>                                Bytes;                                             // 0x10(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	enum class ENiagaraVariantMode               CurrentMode;                                       // 0x20(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_4F9[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x30 - 0x28)
// ScriptStruct Niagara.NiagaraWorldManagerTickFunction
struct FNiagaraWorldManagerTickFunction : public FTickFunction
{
public:
	uint8                                        Pad_4FA[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
