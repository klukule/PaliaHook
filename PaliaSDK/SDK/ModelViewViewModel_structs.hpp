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

enum class EMVVMBindingMode : uint8
{
	EMVVMBindingMode__OneTimeToDestination = 0,
	EMVVMBindingMode__OneWayToDestination = 1,
	EMVVMBindingMode__TwoWay       = 2,
	EMVVMBindingMode__OneTimeToSource = 3,
	EMVVMBindingMode__OneWayToSource = 4,
	EMVVMBindingMode__EMVVMBindingMode_MAX = 5,
};

enum class EMVVMViewBindingUpdateMode : uint8
{
	EMVVMViewBindingUpdateMode__Immediate = 0,
	EMVVMViewBindingUpdateMode__EMVVMViewBindingUpdateMode_MAX = 1,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x8 - 0x0)
// ScriptStruct ModelViewViewModel.MVVMBindingName
struct FMVVMBindingName
{
public:
	class FName                                  BindingName;                                       // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0xC (0xC - 0x0)
// ScriptStruct ModelViewViewModel.MVVMAvailableBinding
struct FMVVMAvailableBinding
{
public:
	struct FMVVMBindingName                      BindingName;                                       // 0x0(0x8)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bIsReadable;                                       // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bIsWritable;                                       // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bHasNotify;                                        // 0xA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_69[0x1];                                       // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ModelViewViewModel.MVVMViewModelContext
struct FMVVMViewModelContext
{
public:
	TSubclassOf<class UMVVMViewModelBase>        ContextClass;                                      // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ContextName;                                       // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct ModelViewViewModel.MVVMViewModelContextInstance
struct FMVVMViewModelContextInstance
{
public:
	struct FMVVMViewModelContext                 Context;                                           // 0x0(0x10)(NoDestructor, NativeAccessSpecifierPrivate)
	class UMVVMViewModelBase*                    Instance;                                          // 0x10(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct ModelViewViewModel.MVVMVCompiledFields
struct FMVVMVCompiledFields
{
public:
	class UStruct*                               ClassOrScriptStruct;                               // 0x0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int16                                        LibraryStartIndex;                                 // 0x8(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int16                                        NumberOfProperties;                                // 0xA(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int16                                        NumberOfFunctions;                                 // 0xC(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int16                                        NumberOfFieldIds;                                  // 0xE(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct ModelViewViewModel.MVVMVCompiledFieldPath
struct FMVVMVCompiledFieldPath
{
public:
	int16                                        StartIndex;                                        // 0x0(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int16                                        Num;                                               // 0x2(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x2 (0x2 - 0x0)
// ScriptStruct ModelViewViewModel.MVVMVCompiledFieldId
struct FMVVMVCompiledFieldId
{
public:
	int16                                        FieldIdIndex;                                      // 0x0(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct ModelViewViewModel.MVVMCompiledLoadedPropertyOrFunctionIndex
struct FMVVMCompiledLoadedPropertyOrFunctionIndex
{
public:
	int16                                        Index;                                             // 0x0(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bIsObjectProperty : 1;                             // Mask: 0x1, PropSize: 0x10x2(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bIsScriptStructProperty : 1;                       // Mask: 0x2, PropSize: 0x10x2(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bIsProperty : 1;                                   // Mask: 0x4, PropSize: 0x10x2(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_6E[0x1];                                       // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// ScriptStruct ModelViewViewModel.MVVMVCompiledBinding
struct FMVVMVCompiledBinding
{
public:
	struct FMVVMVCompiledFieldPath               SourceFieldPath;                                   // 0x0(0x4)(NoDestructor, NativeAccessSpecifierPrivate)
	struct FMVVMVCompiledFieldPath               DestinationFieldPath;                              // 0x4(0x4)(NoDestructor, NativeAccessSpecifierPrivate)
	struct FMVVMVCompiledFieldPath               ConversionFunctionFieldPath;                       // 0x8(0x4)(NoDestructor, NativeAccessSpecifierPrivate)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct ModelViewViewModel.MVVMCompiledBindingLibrary
struct FMVVMCompiledBindingLibrary
{
public:
	uint8                                        Pad_70[0x10];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UFunction*>                     LoadedFunctions;                                   // 0x10(0x10)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                        Pad_71[0x10];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FMVVMCompiledLoadedPropertyOrFunctionIndex> FieldPaths;                                        // 0x30(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FMVVMVCompiledFields>          CompiledFields;                                    // 0x40(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<class FName>                          CompiledFieldNames;                                // 0x50(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct ModelViewViewModel.MVVMViewModelCollection
struct FMVVMViewModelCollection
{
public:
	TArray<struct FMVVMViewModelContextInstance> ViewModelInstances;                                // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_75[0x18];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct ModelViewViewModel.MVVMViewClass_SourceCreator
struct FMVVMViewClass_SourceCreator
{
public:
	TSubclassOf<class UObject>                   ExpectedSourceType;                                // 0x0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FMVVMViewModelContext                 GlobalViewModelInstance;                           // 0x8(0x10)(NoDestructor, NativeAccessSpecifierPrivate)
	struct FMVVMVCompiledFieldPath               FieldPath;                                         // 0x18(0x4)(NoDestructor, NativeAccessSpecifierPrivate)
	class FName                                  PropertyName;                                      // 0x1C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bCreateInstance;                                   // 0x24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bOptional;                                         // 0x25(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_7A[0x2];                                       // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1C (0x1C - 0x0)
// ScriptStruct ModelViewViewModel.MVVMViewClass_CompiledBinding
struct FMVVMViewClass_CompiledBinding
{
public:
	struct FMVVMVCompiledFieldId                 FieldId;                                           // 0x0(0x2)(NoDestructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_7D[0x2];                                       // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  SourcePropertyName;                                // 0x4(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FMVVMVCompiledBinding                 Binding;                                           // 0xC(0xC)(NoDestructor, NativeAccessSpecifierPrivate)
	enum class EMVVMViewBindingUpdateMode        UpdateMode;                                        // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Flags;                                             // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_80[0x2];                                       // Fixing Size Of Struct [ Dumper-7 ]
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
