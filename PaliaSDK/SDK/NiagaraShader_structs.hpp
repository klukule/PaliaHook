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

enum class ENiagaraMipMapGenerationType : uint8
{
	ENiagaraMipMapGenerationType__Unfiltered = 0,
	ENiagaraMipMapGenerationType__Linear = 1,
	ENiagaraMipMapGenerationType__Blur1 = 2,
	ENiagaraMipMapGenerationType__Blur2 = 3,
	ENiagaraMipMapGenerationType__Blur3 = 4,
	ENiagaraMipMapGenerationType__Blur4 = 5,
	ENiagaraMipMapGenerationType__ENiagaraMipMapGenerationType_MAX = 6,
};

enum class ENiagaraGpuDispatchType : uint8
{
	ENiagaraGpuDispatchType__OneD  = 0,
	ENiagaraGpuDispatchType__TwoD  = 1,
	ENiagaraGpuDispatchType__ThreeD = 2,
	ENiagaraGpuDispatchType__Custom = 3,
	ENiagaraGpuDispatchType__ENiagaraGpuDispatchType_MAX = 4,
};

enum class ENiagaraSimStageExecuteBehavior : uint8
{
	ENiagaraSimStageExecuteBehavior__Always = 0,
	ENiagaraSimStageExecuteBehavior__OnSimulationReset = 1,
	ENiagaraSimStageExecuteBehavior__NotOnSimulationReset = 2,
	ENiagaraSimStageExecuteBehavior__ENiagaraSimStageExecuteBehavior_MAX = 3,
};

enum class EFNiagaraCompileEventSeverity : uint8
{
	FNiagaraCompileEventSeverity__Log = 0,
	FNiagaraCompileEventSeverity__Display = 1,
	FNiagaraCompileEventSeverity__Warning = 2,
	FNiagaraCompileEventSeverity__Error = 3,
	FNiagaraCompileEventSeverity__FNiagaraCompileEventSeverity_MAX = 4,
};

enum class EFNiagaraCompileEventSource : uint8
{
	FNiagaraCompileEventSource__Unset = 0,
	FNiagaraCompileEventSource__ScriptDependency = 1,
	FNiagaraCompileEventSource__FNiagaraCompileEventSource_MAX = 2,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x90 (0x90 - 0x0)
// ScriptStruct NiagaraShader.SimulationStageMetaData
struct FSimulationStageMetaData
{
public:
	class FName                                  SimulationStageName;                               // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  EnabledBinding;                                    // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ElementCountXBinding;                              // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ElementCountYBinding;                              // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ElementCountZBinding;                              // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  IterationSource;                                   // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENiagaraSimStageExecuteBehavior   ExecuteBehavior;                                   // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E[0x3];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        bWritesParticles : 1;                              // Mask: 0x1, PropSize: 0x10x34(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bPartialParticleUpdate : 1;                        // Mask: 0x2, PropSize: 0x10x34(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bParticleIterationStateEnabled : 1;                // Mask: 0x4, PropSize: 0x10x34(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverrideElementCount : 1;                         // Mask: 0x8, PropSize: 0x10x34(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_3 : 4;                                      // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_41[0x3];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  ParticleIterationStateBinding;                     // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_43[0x4];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FIntPoint                             ParticleIterationStateRange;                       // 0x44(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_45[0x4];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          OutputDestinations;                                // 0x50(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FName>                          InputDataInterfaces;                               // 0x60(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        NumIterations;                                     // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  NumIterationsBinding;                              // 0x74(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENiagaraGpuDispatchType           GpuDispatchType;                                   // 0x7C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_48[0x3];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FIntVector                            GpuDispatchNumThreads;                             // 0x80(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_49[0x4];                                       // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct NiagaraShader.NiagaraDataInterfaceGeneratedFunction
struct FNiagaraDataInterfaceGeneratedFunction
{
public:
	uint8                                        Pad_4B[0x28];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// ScriptStruct NiagaraShader.NiagaraDataInterfaceGPUParamInfo
struct FNiagaraDataInterfaceGPUParamInfo
{
public:
	class FString                                DataInterfaceHLSLSymbol;                           // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                DIClassName;                                       // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       ShaderParametersOffset;                            // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_56[0x4];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FNiagaraDataInterfaceGeneratedFunction> GeneratedFunctions;                                // 0x28(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct NiagaraShader.NiagaraShaderScriptExternalConstant
struct FNiagaraShaderScriptExternalConstant
{
public:
	class FName                                  Type;                                              // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Name;                                              // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct NiagaraShader.NiagaraShaderScriptParametersMetadata
struct FNiagaraShaderScriptParametersMetadata
{
public:
	TArray<struct FNiagaraDataInterfaceGPUParamInfo> DataInterfaceParamInfo;                            // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FString>                        LooseMetadataNames;                                // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bExternalConstantsInterpolated;                    // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5A[0x7];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FNiagaraShaderScriptExternalConstant> ExternalConstants;                                 // 0x28(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_5B[0x20];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x68 (0x68 - 0x0)
// ScriptStruct NiagaraShader.NiagaraCompileEvent
struct FNiagaraCompileEvent
{
public:
	enum class EFNiagaraCompileEventSeverity     Severity;                                          // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5D[0x7];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Message;                                           // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ShortDescription;                                  // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDismissable;                                      // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_60[0x3];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGuid                                 NodeGuid;                                          // 0x2C(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 PinGuid;                                           // 0x3C(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_62[0x4];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FGuid>                         StackGuids;                                        // 0x50(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	enum class EFNiagaraCompileEventSource       Source;                                            // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_64[0x7];                                       // Fixing Size Of Struct [ Dumper-7 ]
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
