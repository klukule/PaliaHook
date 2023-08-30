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

enum class ERigVMPinDirection : uint8
{
	ERigVMPinDirection__Input      = 0,
	ERigVMPinDirection__Output     = 1,
	ERigVMPinDirection__IO         = 2,
	ERigVMPinDirection__Visible    = 3,
	ERigVMPinDirection__Hidden     = 4,
	ERigVMPinDirection__Invalid    = 5,
	ERigVMPinDirection__ERigVMPinDirection_MAX = 6,
};

enum class ERigVMBreakpointAction : uint8
{
	ERigVMBreakpointAction__None   = 0,
	ERigVMBreakpointAction__Resume = 1,
	ERigVMBreakpointAction__StepOver = 2,
	ERigVMBreakpointAction__StepInto = 3,
	ERigVMBreakpointAction__StepOut = 4,
	ERigVMBreakpointAction__Max    = 5,
};

enum class ERigVMParameterType : uint8
{
	ERigVMParameterType__Input     = 0,
	ERigVMParameterType__Output    = 1,
	ERigVMParameterType__Invalid   = 2,
	ERigVMParameterType__ERigVMParameterType_MAX = 3,
};

enum class ERigVMOpCode : uint8
{
	ERigVMOpCode__Execute_0_Operands = 0,
	ERigVMOpCode__Execute_1_Operands = 1,
	ERigVMOpCode__Execute_2_Operands = 2,
	ERigVMOpCode__Execute_3_Operands = 3,
	ERigVMOpCode__Execute_4_Operands = 4,
	ERigVMOpCode__Execute_5_Operands = 5,
	ERigVMOpCode__Execute_6_Operands = 6,
	ERigVMOpCode__Execute_7_Operands = 7,
	ERigVMOpCode__Execute_8_Operands = 8,
	ERigVMOpCode__Execute_9_Operands = 9,
	ERigVMOpCode__Execute_10_Operands = 10,
	ERigVMOpCode__Execute_11_Operands = 11,
	ERigVMOpCode__Execute_12_Operands = 12,
	ERigVMOpCode__Execute_13_Operands = 13,
	ERigVMOpCode__Execute_14_Operands = 14,
	ERigVMOpCode__Execute_15_Operands = 15,
	ERigVMOpCode__Execute_16_Operands = 16,
	ERigVMOpCode__Execute_17_Operands = 17,
	ERigVMOpCode__Execute_18_Operands = 18,
	ERigVMOpCode__Execute_19_Operands = 19,
	ERigVMOpCode__Execute_20_Operands = 20,
	ERigVMOpCode__Execute_21_Operands = 21,
	ERigVMOpCode__Execute_22_Operands = 22,
	ERigVMOpCode__Execute_23_Operands = 23,
	ERigVMOpCode__Execute_24_Operands = 24,
	ERigVMOpCode__Execute_25_Operands = 25,
	ERigVMOpCode__Execute_26_Operands = 26,
	ERigVMOpCode__Execute_27_Operands = 27,
	ERigVMOpCode__Execute_28_Operands = 28,
	ERigVMOpCode__Execute_29_Operands = 29,
	ERigVMOpCode__Execute_30_Operands = 30,
	ERigVMOpCode__Execute_31_Operands = 31,
	ERigVMOpCode__Execute_32_Operands = 32,
	ERigVMOpCode__Execute_33_Operands = 33,
	ERigVMOpCode__Execute_34_Operands = 34,
	ERigVMOpCode__Execute_35_Operands = 35,
	ERigVMOpCode__Execute_36_Operands = 36,
	ERigVMOpCode__Execute_37_Operands = 37,
	ERigVMOpCode__Execute_38_Operands = 38,
	ERigVMOpCode__Execute_39_Operands = 39,
	ERigVMOpCode__Execute_40_Operands = 40,
	ERigVMOpCode__Execute_41_Operands = 41,
	ERigVMOpCode__Execute_42_Operands = 42,
	ERigVMOpCode__Execute_43_Operands = 43,
	ERigVMOpCode__Execute_44_Operands = 44,
	ERigVMOpCode__Execute_45_Operands = 45,
	ERigVMOpCode__Execute_46_Operands = 46,
	ERigVMOpCode__Execute_47_Operands = 47,
	ERigVMOpCode__Execute_48_Operands = 48,
	ERigVMOpCode__Execute_49_Operands = 49,
	ERigVMOpCode__Execute_50_Operands = 50,
	ERigVMOpCode__Execute_51_Operands = 51,
	ERigVMOpCode__Execute_52_Operands = 52,
	ERigVMOpCode__Execute_53_Operands = 53,
	ERigVMOpCode__Execute_54_Operands = 54,
	ERigVMOpCode__Execute_55_Operands = 55,
	ERigVMOpCode__Execute_56_Operands = 56,
	ERigVMOpCode__Execute_57_Operands = 57,
	ERigVMOpCode__Execute_58_Operands = 58,
	ERigVMOpCode__Execute_59_Operands = 59,
	ERigVMOpCode__Execute_60_Operands = 60,
	ERigVMOpCode__Execute_61_Operands = 61,
	ERigVMOpCode__Execute_62_Operands = 62,
	ERigVMOpCode__Execute_63_Operands = 63,
	ERigVMOpCode__Execute_64_Operands = 64,
	ERigVMOpCode__Zero             = 65,
	ERigVMOpCode__BoolFalse        = 66,
	ERigVMOpCode__BoolTrue         = 67,
	ERigVMOpCode__Copy             = 68,
	ERigVMOpCode__Increment        = 69,
	ERigVMOpCode__Decrement        = 70,
	ERigVMOpCode__Equals           = 71,
	ERigVMOpCode__NotEquals        = 72,
	ERigVMOpCode__JumpAbsolute     = 73,
	ERigVMOpCode__JumpForward      = 74,
	ERigVMOpCode__JumpBackward     = 75,
	ERigVMOpCode__JumpAbsoluteIf   = 76,
	ERigVMOpCode__JumpForwardIf    = 77,
	ERigVMOpCode__JumpBackwardIf   = 78,
	ERigVMOpCode__ChangeType       = 79,
	ERigVMOpCode__Exit             = 80,
	ERigVMOpCode__BeginBlock       = 81,
	ERigVMOpCode__EndBlock         = 82,
	ERigVMOpCode__ArrayReset       = 83,
	ERigVMOpCode__ArrayGetNum      = 84,
	ERigVMOpCode__ArraySetNum      = 85,
	ERigVMOpCode__ArrayGetAtIndex  = 86,
	ERigVMOpCode__ArraySetAtIndex  = 87,
	ERigVMOpCode__ArrayAdd         = 88,
	ERigVMOpCode__ArrayInsert      = 89,
	ERigVMOpCode__ArrayRemove      = 90,
	ERigVMOpCode__ArrayFind        = 91,
	ERigVMOpCode__ArrayAppend      = 92,
	ERigVMOpCode__ArrayClone       = 93,
	ERigVMOpCode__ArrayIterator    = 94,
	ERigVMOpCode__ArrayUnion       = 95,
	ERigVMOpCode__ArrayDifference  = 96,
	ERigVMOpCode__ArrayIntersection = 97,
	ERigVMOpCode__ArrayReverse     = 98,
	ERigVMOpCode__InvokeEntry      = 99,
	ERigVMOpCode__Invalid          = 100,
	ERigVMOpCode__FirstArrayOpCode = 83,
	ERigVMOpCode__LastArrayOpCode  = 98,
	ERigVMOpCode__ERigVMOpCode_MAX = 101,
};

enum class ERigVMCopyType : uint8
{
	ERigVMCopyType__Default        = 0,
	ERigVMCopyType__FloatToDouble  = 1,
	ERigVMCopyType__DoubleToFloat  = 2,
	ERigVMCopyType__ERigVMCopyType_MAX = 3,
};

enum class ERigVMMemoryType : uint8
{
	ERigVMMemoryType__Work         = 0,
	ERigVMMemoryType__Literal      = 1,
	ERigVMMemoryType__External     = 2,
	ERigVMMemoryType__Debug        = 3,
	ERigVMMemoryType__Invalid      = 4,
	ERigVMMemoryType__ERigVMMemoryType_MAX = 5,
};

enum class ERigVMRegisterType : uint8
{
	ERigVMRegisterType__Plain      = 0,
	ERigVMRegisterType__String     = 1,
	ERigVMRegisterType__Name       = 2,
	ERigVMRegisterType__Struct     = 3,
	ERigVMRegisterType__Invalid    = 4,
	ERigVMRegisterType__ERigVMRegisterType_MAX = 5,
};

enum class ERigVMUserWorkflowType : uint8
{
	ERigVMUserWorkflowType__Invalid = 0,
	ERigVMUserWorkflowType__NodeContext = 1,
	ERigVMUserWorkflowType__PinContext = 2,
	ERigVMUserWorkflowType__OnPinDefaultChanged = 4,
	ERigVMUserWorkflowType__All    = 7,
	ERigVMUserWorkflowType__ERigVMUserWorkflowType_MAX = 8,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x18 - 0x0)
// ScriptStruct RigVM.RigVMRuntimeSettings
struct FRigVMRuntimeSettings
{
public:
	int32                                        MaximumArraySize;                                  // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_151E[0x14];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct RigVM.RigVMStruct
struct FRigVMStruct
{
public:
	uint8                                        Pad_1539[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct RigVM.RigVMExecuteContext
struct FRigVMExecuteContext
{
public:
	uint8                                        Pad_153B[0x30];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct RigVM.RigVMDispatchFactory
struct FRigVMDispatchFactory
{
public:
	uint8                                        Pad_153C[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// ScriptStruct RigVM.RigVMUnknownType
struct FRigVMUnknownType
{
public:
	uint32                                       Hash;                                              // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0xC (0xC - 0x0)
// ScriptStruct RigVM.RigVMMemoryStatistics
struct FRigVMMemoryStatistics
{
public:
	int32                                        RegisterCount;                                     // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DataBytes;                                         // 0x4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TotalBytes;                                        // 0x8(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct RigVM.RigVMByteCodeStatistics
struct FRigVMByteCodeStatistics
{
public:
	int32                                        InstructionCount;                                  // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DataBytes;                                         // 0x4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct RigVM.RigVMStatistics
struct FRigVMStatistics
{
public:
	int32                                        BytesForCDO;                                       // 0x0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        BytesPerInstance;                                  // 0x4(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigVMMemoryStatistics                LiteralMemory;                                     // 0x8(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	struct FRigVMMemoryStatistics                WorkMemory;                                        // 0x14(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	struct FRigVMMemoryStatistics                DebugMemory;                                       // 0x20(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        BytesForCaching;                                   // 0x2C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRigVMByteCodeStatistics              ByteCode;                                          // 0x30(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, EditConst, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct RigVM.RigVMParameter
struct FRigVMParameter
{
public:
	enum class ERigVMParameterType               Type;                                              // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1553[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  Name;                                              // 0x4(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        RegisterIndex;                                     // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                CPPType;                                           // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UScriptStruct*                         ScriptStruct;                                      // 0x20(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  ScriptStructPath;                                  // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct RigVM.RigVMBaseOp
struct FRigVMBaseOp
{
public:
	uint8                                        Pad_1559[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x3 (0x4 - 0x1)
// ScriptStruct RigVM.RigVMExecuteOp
struct FRigVMExecuteOp : public FRigVMBaseOp
{
public:
	uint8                                        Pad_155B[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x7 (0x8 - 0x1)
// ScriptStruct RigVM.RigVMUnaryOp
struct FRigVMUnaryOp : public FRigVMBaseOp
{
public:
	uint8                                        Pad_155D[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xD (0xE - 0x1)
// ScriptStruct RigVM.RigVMBinaryOp
struct FRigVMBinaryOp : public FRigVMBaseOp
{
public:
	uint8                                        Pad_155E[0xD];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x13 (0x14 - 0x1)
// ScriptStruct RigVM.RigVMTernaryOp
struct FRigVMTernaryOp : public FRigVMBaseOp
{
public:
	uint8                                        Pad_155F[0x13];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x19 (0x1A - 0x1)
// ScriptStruct RigVM.RigVMQuaternaryOp
struct FRigVMQuaternaryOp : public FRigVMBaseOp
{
public:
	uint8                                        Pad_1560[0x19];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1F (0x20 - 0x1)
// ScriptStruct RigVM.RigVMQuinaryOp
struct FRigVMQuinaryOp : public FRigVMBaseOp
{
public:
	uint8                                        Pad_156B[0x1F];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x25 (0x26 - 0x1)
// ScriptStruct RigVM.RigVMSenaryOp
struct FRigVMSenaryOp : public FRigVMBaseOp
{
public:
	uint8                                        Pad_156C[0x25];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x11 (0x12 - 0x1)
// ScriptStruct RigVM.RigVMCopyOp
struct FRigVMCopyOp : public FRigVMBaseOp
{
public:
	uint8                                        Pad_156D[0x11];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x13 (0x14 - 0x1)
// ScriptStruct RigVM.RigVMComparisonOp
struct FRigVMComparisonOp : public FRigVMBaseOp
{
public:
	uint8                                        Pad_156F[0x13];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x7 (0x8 - 0x1)
// ScriptStruct RigVM.RigVMJumpOp
struct FRigVMJumpOp : public FRigVMBaseOp
{
public:
	uint8                                        Pad_1570[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x10 - 0x8)
// ScriptStruct RigVM.RigVMJumpIfOp
struct FRigVMJumpIfOp : public FRigVMUnaryOp
{
public:
	uint8                                        Pad_1573[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x8 - 0x8)
// ScriptStruct RigVM.RigVMChangeTypeOp
struct FRigVMChangeTypeOp : public FRigVMUnaryOp
{
public:
};

// 0xB (0xC - 0x1)
// ScriptStruct RigVM.RigVMInvokeEntryOp
struct FRigVMInvokeEntryOp : public FRigVMBaseOp
{
public:
	uint8                                        Pad_1574[0xB];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct RigVM.RigVMInstruction
struct FRigVMInstruction
{
public:
	uint64                                       ByteCodeIndex;                                     // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigVMOpCode                      OpCode;                                            // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        OperandAlignment;                                  // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1577[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct RigVM.RigVMInstructionArray
struct FRigVMInstructionArray
{
public:
	TArray<struct FRigVMInstruction>             Instructions;                                      // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
};

// 0xC (0xC - 0x0)
// ScriptStruct RigVM.RigVMByteCodeEntry
struct FRigVMByteCodeEntry
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InstructionIndex;                                  // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct RigVM.RigVMByteCode
struct FRigVMByteCode
{
public:
	TArray<uint8>                                ByteCode;                                          // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	int32                                        NumInstructions;                                   // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_157F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FRigVMByteCodeEntry>           Entries;                                           // 0x18(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1580[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct RigVM.RigVMBreakpoint
struct FRigVMBreakpoint
{
public:
	uint8                                        Pad_1581[0x28];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xF8 (0xF8 - 0x0)
// ScriptStruct RigVM.RigVMDebugInfo
struct FRigVMDebugInfo
{
public:
	uint8                                        Pad_1582[0xF8];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// ScriptStruct RigVM.RigVMSlice
struct FRigVMSlice
{
public:
	uint8                                        Pad_1584[0xC];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x78 (0x78 - 0x0)
// ScriptStruct RigVM.RigVMExtendedExecuteContext
struct FRigVMExtendedExecuteContext
{
public:
	uint8                                        Pad_1585[0x78];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x6 (0x6 - 0x0)
// ScriptStruct RigVM.RigVMOperand
struct FRigVMOperand
{
public:
	enum class ERigVMMemoryType                  MemoryType;                                        // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1586[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint16                                       RegisterIndex;                                     // 0x2(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint16                                       RegisterOffset;                                    // 0x4(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x24 (0x24 - 0x0)
// ScriptStruct RigVM.RigVMRegister
struct FRigVMRegister
{
public:
	enum class ERigVMRegisterType                Type;                                              // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1587[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint32                                       ByteIndex;                                         // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       ElementSize;                                       // 0x8(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       ElementCount;                                      // 0xA(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       SliceCount;                                        // 0xC(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        AlignmentBytes;                                    // 0xE(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_158E[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint16                                       TrailingBytes;                                     // 0x10(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_158F[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  Name;                                              // 0x14(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ScriptStructIndex;                                 // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsArray;                                          // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsDynamic;                                        // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1593[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// ScriptStruct RigVM.RigVMRegisterOffset
struct FRigVMRegisterOffset
{
public:
	TArray<int32>                                Segments;                                          // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	enum class ERigVMRegisterType                Type;                                              // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1594[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CPPType;                                           // 0x14(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1596[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UScriptStruct*                         ScriptStruct;                                      // 0x20(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UScriptStruct*                         ParentScriptStruct;                                // 0x28(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        ArrayIndex;                                        // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint16                                       ElementSize;                                       // 0x34(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_159A[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CachedSegmentPath;                                 // 0x38(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0xA0 (0xA0 - 0x0)
// ScriptStruct RigVM.RigVMMemoryContainer
struct FRigVMMemoryContainer
{
public:
	bool                                         bUseNameMap;                                       // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERigVMMemoryType                  MemoryType;                                        // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_159E[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FRigVMRegister>                Registers;                                         // 0x8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FRigVMRegisterOffset>          RegisterOffsets;                                   // 0x18(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<uint8>                                Data;                                              // 0x28(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	TArray<class UScriptStruct*>                 ScriptStructs;                                     // 0x38(0x10)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPublic)
	TMap<class FName, int32>                     NameMap;                                           // 0x48(0x50)(Transient, NativeAccessSpecifierPublic)
	bool                                         bEncounteredErrorDuringLoad;                       // 0x98(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15A2[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct RigVM.RigVMTemplateArgumentType
struct FRigVMTemplateArgumentType
{
public:
	class FName                                  CPPType;                                           // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               CPPTypeObject;                                     // 0x8(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct RigVM.RigVMUserWorkflow
struct FRigVMUserWorkflow
{
public:
	uint8                                        Pad_15A7[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Title;                                             // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FString                                Tooltip;                                           // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ERigVMUserWorkflowType            Type;                                              // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_15AC[0x17];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           PerformDynamicDelegate;                            // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UObject>                   OptionsClass;                                      // 0x50(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
