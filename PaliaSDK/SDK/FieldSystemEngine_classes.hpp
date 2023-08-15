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

// 0x8 (0x298 - 0x290)
// Class FieldSystemEngine.FieldSystemActor
class AFieldSystemActor : public AActor
{
public:
	class UFieldSystemComponent*                 FieldSystemComponent;                              // 0x290(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("FieldSystemActor");

		return Clss;
	}

};

// 0x10 (0x38 - 0x28)
// Class FieldSystemEngine.FieldSystem
class UFieldSystem : public UObject
{
public:
	uint8                                        Pad_1CDF[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("FieldSystem");

		return Clss;
	}

};

// 0xD8 (0x610 - 0x538)
// Class FieldSystemEngine.FieldSystemComponent
class UFieldSystemComponent : public UPrimitiveComponent
{
public:
	class UFieldSystem*                          FieldSystem;                                       // 0x538(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, AdvancedDisplay, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsWorldField;                                     // 0x540(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsChaosField;                                     // 0x541(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D10[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<TSoftObjectPtr<class AChaosSolverActor>> SupportedSolvers;                                  // 0x548(0x10)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	struct FFieldObjectCommands                  ConstructionCommands;                              // 0x558(0x30)(ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FFieldObjectCommands                  BufferCommands;                                    // 0x588(0x30)(ContainsInstancedReference, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D12[0x58];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("FieldSystemComponent");

		return Clss;
	}

	void ResetFieldSystem();
	void RemovePersistentFields();
	void ApplyUniformVectorFalloffForce(bool Enabled, const struct FVector& Position, const struct FVector& Direction, float Radius, float Magnitude);
	void ApplyStrainField(bool Enabled, const struct FVector& Position, float Radius, float Magnitude, int32 Iterations);
	void ApplyStayDynamicField(bool Enabled, const struct FVector& Position, float Radius);
	void ApplyRadialVectorFalloffForce(bool Enabled, const struct FVector& Position, float Radius, float Magnitude);
	void ApplyRadialForce(bool Enabled, const struct FVector& Position, float Magnitude);
	void ApplyPhysicsField(bool Enabled, enum class EFieldPhysicsType Target, class UFieldSystemMetaData* MetaData, class UFieldNodeBase* Field);
	void ApplyLinearForce(bool Enabled, const struct FVector& Direction, float Magnitude);
	void AddPersistentField(bool Enabled, enum class EFieldPhysicsType Target, class UFieldSystemMetaData* MetaData, class UFieldNodeBase* Field);
	void AddFieldCommand(bool Enabled, enum class EFieldPhysicsType Target, class UFieldSystemMetaData* MetaData, class UFieldNodeBase* Field);
};

// 0x0 (0xA0 - 0xA0)
// Class FieldSystemEngine.FieldSystemMetaData
class UFieldSystemMetaData : public UActorComponent
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("FieldSystemMetaData");

		return Clss;
	}

};

// 0x8 (0xA8 - 0xA0)
// Class FieldSystemEngine.FieldSystemMetaDataIteration
class UFieldSystemMetaDataIteration : public UFieldSystemMetaData
{
public:
	int32                                        Iterations;                                        // 0xA0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D1A[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("FieldSystemMetaDataIteration");

		return Clss;
	}

	class UFieldSystemMetaDataIteration* SetMetaDataIteration(int32 Iterations);
};

// 0x8 (0xA8 - 0xA0)
// Class FieldSystemEngine.FieldSystemMetaDataProcessingResolution
class UFieldSystemMetaDataProcessingResolution : public UFieldSystemMetaData
{
public:
	enum class EFieldResolutionType              ResolutionType;                                    // 0xA0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D1C[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("FieldSystemMetaDataProcessingResolution");

		return Clss;
	}

	class UFieldSystemMetaDataProcessingResolution* SetMetaDataaProcessingResolutionType(enum class EFieldResolutionType ResolutionType);
};

// 0x8 (0xA8 - 0xA0)
// Class FieldSystemEngine.FieldSystemMetaDataFilter
class UFieldSystemMetaDataFilter : public UFieldSystemMetaData
{
public:
	enum class EFieldFilterType                  FilterType;                                        // 0xA0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFieldObjectType                  ObjectType;                                        // 0xA1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFieldPositionType                PositionType;                                      // 0xA2(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D1E[0x5];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("FieldSystemMetaDataFilter");

		return Clss;
	}

	class UFieldSystemMetaDataFilter* SetMetaDataFilterType(enum class EFieldFilterType FilterType, enum class EFieldObjectType ObjectType, enum class EFieldPositionType PositionType);
};

// 0x0 (0xA0 - 0xA0)
// Class FieldSystemEngine.FieldNodeBase
class UFieldNodeBase : public UActorComponent
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("FieldNodeBase");

		return Clss;
	}

};

// 0x0 (0xA0 - 0xA0)
// Class FieldSystemEngine.FieldNodeInt
class UFieldNodeInt : public UFieldNodeBase
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("FieldNodeInt");

		return Clss;
	}

};

// 0x0 (0xA0 - 0xA0)
// Class FieldSystemEngine.FieldNodeFloat
class UFieldNodeFloat : public UFieldNodeBase
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("FieldNodeFloat");

		return Clss;
	}

};

// 0x0 (0xA0 - 0xA0)
// Class FieldSystemEngine.FieldNodeVector
class UFieldNodeVector : public UFieldNodeBase
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("FieldNodeVector");

		return Clss;
	}

};

// 0x8 (0xA8 - 0xA0)
// Class FieldSystemEngine.UniformInteger
class UUniformInteger : public UFieldNodeInt
{
public:
	int32                                        Magnitude;                                         // 0xA0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D20[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("UniformInteger");

		return Clss;
	}

	class UUniformInteger* SetUniformInteger(int32 Magnitude);
};

// 0x30 (0xD0 - 0xA0)
// Class FieldSystemEngine.RadialIntMask
class URadialIntMask : public UFieldNodeInt
{
public:
	float                                        Radius;                                            // 0xA0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D28[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Position;                                          // 0xA8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InteriorValue;                                     // 0xC0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ExteriorValue;                                     // 0xC4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESetMaskConditionType             SetMaskCondition;                                  // 0xC8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D29[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("RadialIntMask");

		return Clss;
	}

	class URadialIntMask* SetRadialIntMask(float Radius, const struct FVector& Position, int32 InteriorValue, int32 ExteriorValue, enum class ESetMaskConditionType SetMaskConditionIn);
};

// 0x8 (0xA8 - 0xA0)
// Class FieldSystemEngine.UniformScalar
class UUniformScalar : public UFieldNodeFloat
{
public:
	float                                        Magnitude;                                         // 0xA0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D2E[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("UniformScalar");

		return Clss;
	}

	class UUniformScalar* SetUniformScalar(float Magnitude);
};

// 0x30 (0xD0 - 0xA0)
// Class FieldSystemEngine.WaveScalar
class UWaveScalar : public UFieldNodeFloat
{
public:
	float                                        Magnitude;                                         // 0xA0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D3B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Position;                                          // 0xA8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WaveLength;                                        // 0xC0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Period;                                            // 0xC4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EWaveFunctionType                 Function;                                          // 0xC8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFieldFalloffType                 Falloff;                                           // 0xC9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D3C[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("WaveScalar");

		return Clss;
	}

	class UWaveScalar* SetWaveScalar(float Magnitude, const struct FVector& Position, float WaveLength, float Period, float Time, enum class EWaveFunctionType Function, enum class EFieldFalloffType Falloff);
};

// 0x38 (0xD8 - 0xA0)
// Class FieldSystemEngine.RadialFalloff
class URadialFalloff : public UFieldNodeFloat
{
public:
	float                                        Magnitude;                                         // 0xA0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinRange;                                          // 0xA4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxRange;                                          // 0xA8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Default;                                           // 0xAC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Radius;                                            // 0xB0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D49[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Position;                                          // 0xB8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFieldFalloffType                 Falloff;                                           // 0xD0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D4A[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("RadialFalloff");

		return Clss;
	}

	class URadialFalloff* SetRadialFalloff(float Magnitude, float MinRange, float MaxRange, float Default, float Radius, const struct FVector& Position, enum class EFieldFalloffType Falloff);
};

// 0x50 (0xF0 - 0xA0)
// Class FieldSystemEngine.PlaneFalloff
class UPlaneFalloff : public UFieldNodeFloat
{
public:
	float                                        Magnitude;                                         // 0xA0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinRange;                                          // 0xA4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxRange;                                          // 0xA8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Default;                                           // 0xAC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Distance;                                          // 0xB0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D54[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Position;                                          // 0xB8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Normal;                                            // 0xD0(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFieldFalloffType                 Falloff;                                           // 0xE8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D55[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("PlaneFalloff");

		return Clss;
	}

	class UPlaneFalloff* SetPlaneFalloff(float Magnitude, float MinRange, float MaxRange, float Default, float Distance, const struct FVector& Position, const struct FVector& Normal, enum class EFieldFalloffType Falloff);
};

// 0x80 (0x120 - 0xA0)
// Class FieldSystemEngine.BoxFalloff
class UBoxFalloff : public UFieldNodeFloat
{
public:
	float                                        Magnitude;                                         // 0xA0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinRange;                                          // 0xA4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxRange;                                          // 0xA8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Default;                                           // 0xAC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            Transform;                                         // 0xB0(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFieldFalloffType                 Falloff;                                           // 0x110(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D70[0xF];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("BoxFalloff");

		return Clss;
	}

	class UBoxFalloff* SetBoxFalloff(float Magnitude, float MinRange, float MaxRange, float Default, const struct FTransform& Transform, enum class EFieldFalloffType Falloff);
};

// 0x70 (0x110 - 0xA0)
// Class FieldSystemEngine.NoiseField
class UNoiseField : public UFieldNodeFloat
{
public:
	float                                        MinRange;                                          // 0xA0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxRange;                                          // 0xA4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D79[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform;                                         // 0xB0(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("NoiseField");

		return Clss;
	}

	class UNoiseField* SetNoiseField(float MinRange, float MaxRange, const struct FTransform& Transform);
};

// 0x20 (0xC0 - 0xA0)
// Class FieldSystemEngine.UniformVector
class UUniformVector : public UFieldNodeVector
{
public:
	float                                        Magnitude;                                         // 0xA0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D81[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Direction;                                         // 0xA8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("UniformVector");

		return Clss;
	}

	class UUniformVector* SetUniformVector(float Magnitude, const struct FVector& Direction);
};

// 0x20 (0xC0 - 0xA0)
// Class FieldSystemEngine.RadialVector
class URadialVector : public UFieldNodeVector
{
public:
	float                                        Magnitude;                                         // 0xA0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D86[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Position;                                          // 0xA8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("RadialVector");

		return Clss;
	}

	class URadialVector* SetRadialVector(float Magnitude, const struct FVector& Position);
};

// 0x8 (0xA8 - 0xA0)
// Class FieldSystemEngine.RandomVector
class URandomVector : public UFieldNodeVector
{
public:
	float                                        Magnitude;                                         // 0xA0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D8A[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("RandomVector");

		return Clss;
	}

	class URandomVector* SetRandomVector(float Magnitude);
};

// 0x20 (0xC0 - 0xA0)
// Class FieldSystemEngine.OperatorField
class UOperatorField : public UFieldNodeBase
{
public:
	float                                        Magnitude;                                         // 0xA0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D90[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFieldNodeBase*                        RightField;                                        // 0xA8(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFieldNodeBase*                        LeftField;                                         // 0xB0(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFieldOperationType               Operation;                                         // 0xB8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D91[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("OperatorField");

		return Clss;
	}

	class UOperatorField* SetOperatorField(float Magnitude, class UFieldNodeBase* LeftField, class UFieldNodeBase* RightField, enum class EFieldOperationType Operation);
};

// 0x8 (0xA8 - 0xA0)
// Class FieldSystemEngine.ToIntegerField
class UToIntegerField : public UFieldNodeInt
{
public:
	class UFieldNodeFloat*                       FloatField;                                        // 0xA0(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("ToIntegerField");

		return Clss;
	}

	class UToIntegerField* SetToIntegerField(class UFieldNodeFloat* FloatField);
};

// 0x8 (0xA8 - 0xA0)
// Class FieldSystemEngine.ToFloatField
class UToFloatField : public UFieldNodeFloat
{
public:
	class UFieldNodeInt*                         IntField;                                          // 0xA0(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("ToFloatField");

		return Clss;
	}

	class UToFloatField* SetToFloatField(class UFieldNodeInt* IntegerField);
};

// 0x18 (0xB8 - 0xA0)
// Class FieldSystemEngine.CullingField
class UCullingField : public UFieldNodeBase
{
public:
	class UFieldNodeBase*                        Culling;                                           // 0xA0(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFieldNodeBase*                        Field;                                             // 0xA8(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFieldCullingOperationType        Operation;                                         // 0xB0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D9A[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("CullingField");

		return Clss;
	}

	class UCullingField* SetCullingField(class UFieldNodeBase* Culling, class UFieldNodeBase* Field, enum class EFieldCullingOperationType Operation);
};

// 0x0 (0xA0 - 0xA0)
// Class FieldSystemEngine.ReturnResultsTerminal
class UReturnResultsTerminal : public UFieldNodeBase
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("ReturnResultsTerminal");

		return Clss;
	}

	class UReturnResultsTerminal* SetReturnResultsTerminal();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
