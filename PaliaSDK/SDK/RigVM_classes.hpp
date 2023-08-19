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

// 0x70 (0x98 - 0x28)
// Class RigVM.RigVMUserWorkflowOptions
class URigVMUserWorkflowOptions : public UObject
{
public:
	class UObject*                               Subject;                                           // 0x28(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FRigVMUserWorkflow                    Workflow;                                          // 0x30(0x58)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_9DA[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("RigVMUserWorkflowOptions");
		return Clss;
	}

	bool RequiresDialog();
	void ReportWarning(const class FString& InInMessage);
	void ReportInfo(const class FString& InInMessage);
	void ReportError(const class FString& InInMessage);
	bool IsValid();
};

// 0x280 (0x2A8 - 0x28)
// Class RigVM.RigVM
class URigVM : public UObject
{
public:
	class URigVMMemoryStorage*                   WorkMemoryStorageObject;                           // 0x28(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class URigVMMemoryStorage*                   LiteralMemoryStorageObject;                        // 0x30(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class URigVMMemoryStorage*                   DebugMemoryStorageObject;                          // 0x38(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A7C[0x20];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigVMByteCode                        ByteCodeStorage;                                   // 0x60(0x30)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A7F[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigVMInstructionArray                Instructions;                                      // 0x98(0x10)(Transient, NativeAccessSpecifierPrivate)
	struct FRigVMExtendedExecuteContext          Context;                                           // 0xA8(0x78)(Transient, Protected, NativeAccessSpecifierProtected)
	uint32                                       NumExecutions;                                     // 0x120(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_A84[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FName>                          FunctionNamesStorage;                              // 0x128(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_A85[0x38];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FRigVMParameter>               Parameters;                                        // 0x170(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TMap<class FName, int32>                     ParametersNameMap;                                 // 0x180(0x50)(NativeAccessSpecifierPrivate)
	uint8                                        Pad_A87[0xB8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class URigVM*                                DeferredVMToCopy;                                  // 0x288(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_A88[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("RigVM");
		return Clss;
	}

	void SetParameterValueVector2D(class FName& InInParameterName, struct FVector2D& InInValue, int32 InInArrayIndex);
	void SetParameterValueVector(class FName& InInParameterName, struct FVector& InInValue, int32 InInArrayIndex);
	void SetParameterValueTransform(class FName& InInParameterName, struct FTransform& InInValue, int32 InInArrayIndex);
	void SetParameterValueString(class FName& InInParameterName, const class FString& InInValue, int32 InInArrayIndex);
	void SetParameterValueQuat(class FName& InInParameterName, struct FQuat& InInValue, int32 InInArrayIndex);
	void SetParameterValueName(class FName& InInParameterName, class FName& InInValue, int32 InInArrayIndex);
	void SetParameterValueInt(class FName& InInParameterName, int32 InInValue, int32 InInArrayIndex);
	void SetParameterValueFloat(class FName& InInParameterName, float InInValue, int32 InInArrayIndex);
	void SetParameterValueDouble(class FName& InInParameterName, double InInValue, int32 InInArrayIndex);
	void SetParameterValueBool(class FName& InInParameterName, bool InInValue, int32 InInArrayIndex);
	struct FRigVMStatistics GetStatistics();
	class FString GetRigVMFunctionName(int32 InInFunctionIndex);
	struct FVector2D GetParameterValueVector2D(class FName& InInParameterName, int32 InInArrayIndex);
	struct FVector GetParameterValueVector(class FName& InInParameterName, int32 InInArrayIndex);
	struct FTransform GetParameterValueTransform(class FName& InInParameterName, int32 InInArrayIndex);
	class FString GetParameterValueString(class FName& InInParameterName, int32 InInArrayIndex);
	struct FQuat GetParameterValueQuat(class FName& InInParameterName, int32 InInArrayIndex);
	class FName GetParameterValueName(class FName& InInParameterName, int32 InInArrayIndex);
	int32 GetParameterValueInt(class FName& InInParameterName, int32 InInArrayIndex);
	float GetParameterValueFloat(class FName& InInParameterName, int32 InInArrayIndex);
	double GetParameterValueDouble(class FName& InInParameterName, int32 InInArrayIndex);
	bool GetParameterValueBool(class FName& InInParameterName, int32 InInArrayIndex);
	bool Execute(class FName& InInEntryName);
	int32 AddRigVMFunction(class UScriptStruct* InInRigVMStruct, class FName& InInMethodName);
};

// 0x40 (0x270 - 0x230)
// Class RigVM.RigVMMemoryStorageGeneratorClass
class URigVMMemoryStorageGeneratorClass : public UClass
{
public:
	uint8                                        Pad_AA1[0x40];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("RigVMMemoryStorageGeneratorClass");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class RigVM.RigVMMemoryStorage
class URigVMMemoryStorage : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("RigVMMemoryStorage");
		return Clss;
	}

};

// 0x8 (0x2B0 - 0x2A8)
// Class RigVM.RigVMNativized
class URigVMNativized : public URigVM
{
public:
	uint8                                        Pad_AA2[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("RigVMNativized");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
