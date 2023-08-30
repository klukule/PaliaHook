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

// 0x2F8 (0x320 - 0x28)
// Class ControlRig.RigHierarchy
class URigHierarchy : public UObject
{
public:
	uint8                                        Pad_E1F[0x60];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint16                                       TopologyVersion;                                   // 0x88(0x2)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint16                                       MetadataVersion;                                   // 0x8A(0x2)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint16                                       MetadataTagVersion;                                // 0x8C(0x2)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bEnableDirtyPropagation;                           // 0x8E(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_E20[0x71];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        TransformStackIndex;                               // 0x100(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_E21[0x74];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class URigHierarchyController*               HierarchyController;                               // 0x178(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_E22[0x58];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<struct FRigElementKey, struct FRigElementKey> PreviousNameMap;                                   // 0x1D8(0x50)(NativeAccessSpecifierPrivate)
	uint8                                        Pad_E23[0x80];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class URigHierarchy*                         HierarchyForCacheValidation;                       // 0x2A8(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_E24[0x70];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("RigHierarchy");
		return Clss;
	}

	void UnsetCurveValueByIndex(int32 InInElementIndex, bool InbSetupUndo);
	void UnsetCurveValue(const struct FRigElementKey& InInKey, bool InbSetupUndo);
	bool SwitchToWorldSpace(const struct FRigElementKey& InInChild, bool InbInitial, bool InbAffectChildren);
	bool SwitchToParent(const struct FRigElementKey& InInChild, const struct FRigElementKey& InInParent, bool InbInitial, bool InbAffectChildren);
	bool SwitchToDefaultParent(const struct FRigElementKey& InInChild, bool InbInitial, bool InbAffectChildren);
	TArray<struct FRigElementKey> SortKeys(TArray<struct FRigElementKey>& InInKeys);
	bool SetVectorMetadata(const struct FRigElementKey& InInItem, class FName InInMetadataName, const struct FVector& InInValue);
	bool SetVectorArrayMetadata(const struct FRigElementKey& InInItem, class FName InInMetadataName, const TArray<struct FVector>& InInValue);
	bool SetTransformMetadata(const struct FRigElementKey& InInItem, class FName InInMetadataName, const struct FTransform& InInValue);
	bool SetTransformArrayMetadata(const struct FRigElementKey& InInItem, class FName InInMetadataName, const TArray<struct FTransform>& InInValue);
	bool SetTag(const struct FRigElementKey& InInItem, class FName InInTag);
	bool SetRotatorMetadata(const struct FRigElementKey& InInItem, class FName InInMetadataName, const struct FRotator& InInValue);
	bool SetRotatorArrayMetadata(const struct FRigElementKey& InInItem, class FName InInMetadataName, const TArray<struct FRotator>& InInValue);
	bool SetRigElementKeyMetadata(const struct FRigElementKey& InInItem, class FName InInMetadataName, const struct FRigElementKey& InInValue);
	bool SetRigElementKeyArrayMetadata(const struct FRigElementKey& InInItem, class FName InInMetadataName, const TArray<struct FRigElementKey>& InInValue);
	bool SetQuatMetadata(const struct FRigElementKey& InInItem, class FName InInMetadataName, const struct FQuat& InInValue);
	bool SetQuatArrayMetadata(const struct FRigElementKey& InInItem, class FName InInMetadataName, const TArray<struct FQuat>& InInValue);
	void SetPose_ForBlueprint(const struct FRigPose& InInPose);
	bool SetParentWeightArray(const struct FRigElementKey& InInChild, const TArray<struct FRigElementWeight>& InInWeights, bool InbInitial, bool InbAffectChildren);
	bool SetParentWeight(const struct FRigElementKey& InInChild, const struct FRigElementKey& InInParent, const struct FRigElementWeight& InInWeight, bool InbInitial, bool InbAffectChildren);
	bool SetNameMetadata(const struct FRigElementKey& InInItem, class FName InInMetadataName, class FName InInValue);
	bool SetNameArrayMetadata(const struct FRigElementKey& InInItem, class FName InInMetadataName, const TArray<class FName>& InInValue);
	void SetLocalTransformByIndex(int32 InInElementIndex, const struct FTransform& InInTransform, bool InbInitial, bool InbAffectChildren, bool InbSetupUndo, bool InbPrintPythonCommands);
	void SetLocalTransform(const struct FRigElementKey& InInKey, const struct FTransform& InInTransform, bool InbInitial, bool InbAffectChildren, bool InbSetupUndo, bool InbPrintPythonCommands);
	bool SetLinearColorMetadata(const struct FRigElementKey& InInItem, class FName InInMetadataName, const struct FLinearColor& InInValue);
	bool SetLinearColorArrayMetadata(const struct FRigElementKey& InInItem, class FName InInMetadataName, const TArray<struct FLinearColor>& InInValue);
	bool SetInt32Metadata(const struct FRigElementKey& InInItem, class FName InInMetadataName, int32 InInValue);
	bool SetInt32ArrayMetadata(const struct FRigElementKey& InInItem, class FName InInMetadataName, const TArray<int32>& InInValue);
	void SetGlobalTransformByIndex(int32 InInElementIndex, const struct FTransform& InInTransform, bool InbInitial, bool InbAffectChildren, bool InbSetupUndo, bool InbPrintPythonCommand);
	void SetGlobalTransform(const struct FRigElementKey& InInKey, const struct FTransform& InInTransform, bool InbInitial, bool InbAffectChildren, bool InbSetupUndo, bool InbPrintPythonCommand);
	bool SetFloatMetadata(const struct FRigElementKey& InInItem, class FName InInMetadataName, float InInValue);
	bool SetFloatArrayMetadata(const struct FRigElementKey& InInItem, class FName InInMetadataName, const TArray<float>& InInValue);
	void SetCurveValueByIndex(int32 InInElementIndex, float InInValue, bool InbSetupUndo);
	void SetCurveValue(const struct FRigElementKey& InInKey, float InInValue, bool InbSetupUndo);
	void SetControlVisibilityByIndex(int32 InInElementIndex, bool InbVisibility);
	void SetControlVisibility(const struct FRigElementKey& InInKey, bool InbVisibility);
	void SetControlValueByIndex(int32 InInElementIndex, const struct FRigControlValue& InInValue, enum class ERigControlValueType InInValueType, bool InbSetupUndo, bool InbPrintPythonCommands);
	void SetControlValue(const struct FRigElementKey& InInKey, const struct FRigControlValue& InInValue, enum class ERigControlValueType InInValueType, bool InbSetupUndo, bool InbPrintPythonCommands);
	void SetControlShapeTransformByIndex(int32 InInElementIndex, const struct FTransform& InInTransform, bool InbInitial, bool InbSetupUndo);
	void SetControlShapeTransform(const struct FRigElementKey& InInKey, const struct FTransform& InInTransform, bool InbInitial, bool InbSetupUndo);
	void SetControlSettingsByIndex(int32 InInElementIndex, const struct FRigControlSettings& InInSettings, bool InbSetupUndo, bool InbForce, bool InbPrintPythonCommands);
	void SetControlSettings(const struct FRigElementKey& InInKey, const struct FRigControlSettings& InInSettings, bool InbSetupUndo, bool InbForce, bool InbPrintPythonCommands);
	void SetControlPreferredRotatorByIndex(int32 InInElementIndex, struct FRotator& InInValue, bool InbInitial, bool InbFixEulerFlips);
	void SetControlPreferredRotator(const struct FRigElementKey& InInKey, struct FRotator& InInValue, bool InbInitial, bool InbFixEulerFlips);
	void SetControlOffsetTransformByIndex(int32 InInElementIndex, const struct FTransform& InInTransform, bool InbInitial, bool InbAffectChildren, bool InbSetupUndo, bool InbPrintPythonCommands);
	void SetControlOffsetTransform(const struct FRigElementKey& InInKey, const struct FTransform& InInTransform, bool InbInitial, bool InbAffectChildren, bool InbSetupUndo, bool InbPrintPythonCommands);
	bool SetBoolMetadata(const struct FRigElementKey& InInItem, class FName InInMetadataName, bool InInValue);
	bool SetBoolArrayMetadata(const struct FRigElementKey& InInItem, class FName InInMetadataName, const TArray<bool>& InInValue);
	void SendAutoKeyEvent(const struct FRigElementKey& InInElement, float InInOffsetInSeconds, bool InbAsynchronous);
	void ResetToDefault();
	void ResetPoseToInitial(enum class ERigElementType InInTypeFilter);
	void ResetCurveValues();
	void Reset();
	bool RemoveMetadata(const struct FRigElementKey& InInItem, class FName InInMetadataName);
	bool RemoveAllMetadata(const struct FRigElementKey& InInItem);
	int32 Num();
	struct FRigControlValue MakeControlValueFromVector2D(const struct FVector2D& InInValue);
	struct FRigControlValue MakeControlValueFromVector(const struct FVector& InInValue);
	struct FRigControlValue MakeControlValueFromTransformNoScale(const struct FTransformNoScale& InInValue);
	struct FRigControlValue MakeControlValueFromTransform(const struct FTransform& InInValue);
	struct FRigControlValue MakeControlValueFromRotator(const struct FRotator& InInValue);
	struct FRigControlValue MakeControlValueFromInt(int32 InInValue);
	struct FRigControlValue MakeControlValueFromFloat(float InInValue);
	struct FRigControlValue MakeControlValueFromEulerTransform(const struct FEulerTransform& InInValue);
	struct FRigControlValue MakeControlValueFromBool(bool InInValue);
	bool IsValidIndex(int32 InInElementIndex);
	bool IsSelectedByIndex(int32 InInIndex);
	bool IsSelected(const struct FRigElementKey& InInKey);
	bool IsProcedural(struct FRigElementKey& InInKey);
	bool IsParentedTo(const struct FRigElementKey& InInChild, const struct FRigElementKey& InInParent);
	bool IsCurveValueSetByIndex(int32 InInElementIndex);
	bool IsCurveValueSet(const struct FRigElementKey& InInKey);
	bool IsControllerAvailable();
	bool HasTag(const struct FRigElementKey& InInItem, class FName InInTag);
	struct FVector GetVectorMetadata(const struct FRigElementKey& InInItem, class FName InInMetadataName, const struct FVector& InDefaultValue);
	struct FVector GetVectorFromControlValue(const struct FRigControlValue& InInValue);
	TArray<struct FVector> GetVectorArrayMetadata(const struct FRigElementKey& InInItem, class FName InInMetadataName);
	struct FVector2D GetVector2DFromControlValue(const struct FRigControlValue& InInValue);
	struct FTransformNoScale GetTransformNoScaleFromControlValue(const struct FRigControlValue& InInValue);
	struct FTransform GetTransformMetadata(const struct FRigElementKey& InInItem, class FName InInMetadataName, const struct FTransform& InDefaultValue);
	struct FTransform GetTransformFromControlValue(const struct FRigControlValue& InInValue);
	TArray<struct FTransform> GetTransformArrayMetadata(const struct FRigElementKey& InInItem, class FName InInMetadataName);
	TArray<class FName> GetTags(const struct FRigElementKey& InInItem);
	TArray<struct FRigElementKey> GetSelectedKeys(enum class ERigElementType InInTypeFilter);
	struct FRotator GetRotatorMetadata(const struct FRigElementKey& InInItem, class FName InInMetadataName, const struct FRotator& InDefaultValue);
	struct FRotator GetRotatorFromControlValue(const struct FRigControlValue& InInValue);
	TArray<struct FRotator> GetRotatorArrayMetadata(const struct FRigElementKey& InInItem, class FName InInMetadataName);
	TArray<struct FRigElementKey> GetRigidBodyKeys(bool InbTraverse);
	struct FRigElementKey GetRigElementKeyMetadata(const struct FRigElementKey& InInItem, class FName InInMetadataName, const struct FRigElementKey& InDefaultValue);
	TArray<struct FRigElementKey> GetRigElementKeyArrayMetadata(const struct FRigElementKey& InInItem, class FName InInMetadataName);
	TArray<struct FRigElementKey> GetReferenceKeys(bool InbTraverse);
	struct FQuat GetQuatMetadata(const struct FRigElementKey& InInItem, class FName InInMetadataName, const struct FQuat& InDefaultValue);
	TArray<struct FQuat> GetQuatArrayMetadata(const struct FRigElementKey& InInItem, class FName InInMetadataName);
	struct FRigElementKey GetPreviousParent(struct FRigElementKey& InInKey);
	class FName GetPreviousName(struct FRigElementKey& InInKey);
	struct FRigPose GetPose(bool InbInitial);
	TArray<struct FRigElementWeight> GetParentWeightArray(const struct FRigElementKey& InInChild, bool InbInitial);
	struct FRigElementWeight GetParentWeight(const struct FRigElementKey& InInChild, const struct FRigElementKey& InInParent, bool InbInitial);
	struct FTransform GetParentTransformByIndex(int32 InInElementIndex, bool InbInitial);
	struct FTransform GetParentTransform(const struct FRigElementKey& InInKey, bool InbInitial);
	TArray<struct FRigElementKey> GetParents(const struct FRigElementKey& InInKey, bool InbRecursive);
	int32 GetNumberOfParents(const struct FRigElementKey& InInKey);
	TArray<struct FRigElementKey> GetNullKeys(bool InbTraverse);
	class FName GetNameMetadata(const struct FRigElementKey& InInItem, class FName InInMetadataName, class FName InDefaultValue);
	TArray<class FName> GetNameArrayMetadata(const struct FRigElementKey& InInItem, class FName InInMetadataName);
	enum class ERigMetadataType GetMetadataType(const struct FRigElementKey& InInItem, class FName InInMetadataName);
	TArray<class FName> GetMetadataNames(const struct FRigElementKey& InInItem);
	struct FTransform GetLocalTransformByIndex(int32 InInElementIndex, bool InbInitial);
	struct FTransform GetLocalTransform(const struct FRigElementKey& InInKey, bool InbInitial);
	struct FTransform GetLocalControlShapeTransformByIndex(int32 InInElementIndex, bool InbInitial);
	struct FTransform GetLocalControlShapeTransform(const struct FRigElementKey& InInKey, bool InbInitial);
	struct FLinearColor GetLinearColorMetadata(const struct FRigElementKey& InInItem, class FName InInMetadataName, const struct FLinearColor& InDefaultValue);
	TArray<struct FLinearColor> GetLinearColorArrayMetadata(const struct FRigElementKey& InInItem, class FName InInMetadataName);
	TArray<struct FRigElementKey> GetKeys(const TArray<int32>& InInElementIndices);
	struct FRigElementKey GetKey(int32 InInElementIndex);
	int32 GetIntFromControlValue(const struct FRigControlValue& InInValue);
	int32 GetInt32Metadata(const struct FRigElementKey& InInItem, class FName InInMetadataName, int32 InDefaultValue);
	TArray<int32> GetInt32ArrayMetadata(const struct FRigElementKey& InInItem, class FName InInMetadataName);
	int32 GetIndex_ForBlueprint(const struct FRigElementKey& InInKey);
	struct FTransform GetGlobalTransformByIndex(int32 InInElementIndex, bool InbInitial);
	struct FTransform GetGlobalTransform(const struct FRigElementKey& InInKey, bool InbInitial);
	struct FTransform GetGlobalControlShapeTransformByIndex(int32 InInElementIndex, bool InbInitial);
	struct FTransform GetGlobalControlShapeTransform(const struct FRigElementKey& InInKey, bool InbInitial);
	struct FTransform GetGlobalControlOffsetTransformByIndex(int32 InInElementIndex, bool InbInitial);
	struct FTransform GetGlobalControlOffsetTransform(const struct FRigElementKey& InInKey, bool InbInitial);
	float GetFloatMetadata(const struct FRigElementKey& InInItem, class FName InInMetadataName, float InDefaultValue);
	float GetFloatFromControlValue(const struct FRigControlValue& InInValue);
	TArray<float> GetFloatArrayMetadata(const struct FRigElementKey& InInItem, class FName InInMetadataName);
	struct FRigElementKey GetFirstParent(const struct FRigElementKey& InInKey);
	struct FEulerTransform GetEulerTransformFromControlValue(const struct FRigControlValue& InInValue);
	struct FRigElementKey GetDefaultParent(const struct FRigElementKey& InInKey);
	float GetCurveValueByIndex(int32 InInElementIndex);
	float GetCurveValue(const struct FRigElementKey& InInKey);
	TArray<struct FRigElementKey> GetCurveKeys();
	struct FRigControlValue GetControlValueByIndex(int32 InInElementIndex, enum class ERigControlValueType InInValueType);
	struct FRigControlValue GetControlValue(const struct FRigElementKey& InInKey, enum class ERigControlValueType InInValueType);
	struct FRotator GetControlPreferredRotatorByIndex(int32 InInElementIndex, bool InbInitial);
	struct FRotator GetControlPreferredRotator(const struct FRigElementKey& InInKey, bool InbInitial);
	class URigHierarchyController* GetController(bool InbCreateIfNeeded);
	TArray<struct FRigElementKey> GetControlKeys(bool InbTraverse);
	TArray<struct FRigElementKey> GetChildren(const struct FRigElementKey& InInKey, bool InbRecursive);
	bool GetBoolMetadata(const struct FRigElementKey& InInItem, class FName InInMetadataName, bool InDefaultValue);
	TArray<bool> GetBoolArrayMetadata(const struct FRigElementKey& InInItem, class FName InInMetadataName);
	TArray<struct FRigElementKey> GetBoneKeys(bool InbTraverse);
	TArray<struct FRigElementKey> GetAllKeys_ForBlueprint(bool InbTraverse);
	struct FRigNullElement FindNull_ForBlueprintOnly(struct FRigElementKey& InInKey);
	struct FRigControlElement FindControl_ForBlueprintOnly(struct FRigElementKey& InInKey);
	struct FRigBoneElement FindBone_ForBlueprintOnly(struct FRigElementKey& InInKey);
	void CopyPose(class URigHierarchy* InInHierarchy, bool InbCurrent, bool InbInitial, bool InbWeights, bool InbMatchPoseInGlobalIfNeeded);
	void CopyHierarchy(class URigHierarchy* InInHierarchy);
	bool Contains_ForBlueprint(const struct FRigElementKey& InInKey);
};

// 0x38 (0x90 - 0x58)
// Class ControlRig.TransformableControlHandle
class UTransformableControlHandle : public UTransformableHandle
{
public:
	TSoftObjectPtr<class UControlRig>            ControlRig;                                        // 0x58(0x30)(BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ControlName;                                       // 0x88(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TransformableControlHandle");
		return Clss;
	}

};

// 0x538 (0x560 - 0x28)
// Class ControlRig.ControlRig
class UControlRig : public UObject
{
public:
	uint8                                        Pad_E87[0x1E];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class ERigExecutionType                 ExecutionType;                                     // 0x46(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E88[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigHierarchySettings                 HierarchySettings;                                 // 0x48(0x4)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_E8A[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigVMRuntimeSettings                 VMRuntimeSettings;                                 // 0x50(0x18)(NativeAccessSpecifierPublic)
	TMap<struct FRigElementKey, struct FRigControlElementCustomization> ControlCustomizations;                             // 0x68(0x50)(Protected, NativeAccessSpecifierProtected)
	class URigVM*                                VM;                                                // 0xB8(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TMap<uint32, class URigVM*>                  InitializedVMSnapshots;                            // 0xC0(0x50)(Transient, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	uint8                                        Pad_E8D[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class URigHierarchy*                         DynamicHierarchy;                                  // 0x118(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSoftObjectPtr<class UControlRigShapeLibrary> GizmoLibrary;                                      // 0x120(0x30)(Deprecated, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<TSoftObjectPtr<class UControlRigShapeLibrary>> ShapeLibraries;                                    // 0x150(0x10)(ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	uint8                                        Pad_E90[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<class FName, struct FCachedPropertyPath> InputProperties;                                   // 0x170(0x50)(Deprecated, Protected, NativeAccessSpecifierProtected)
	TMap<class FName, struct FCachedPropertyPath> OutputProperties;                                  // 0x1C0(0x50)(Deprecated, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_E91[0xA8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FControlRigDrawContainer              DrawContainer;                                     // 0x2B8(0x18)(NativeAccessSpecifierPrivate)
	uint8                                        Pad_E93[0x18];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimationDataSourceRegistry*          DataSourceRegistry;                                // 0x2E8(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class FName>                          EventQueue;                                        // 0x2F0(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_E94[0xD0];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigInfluenceMapPerEvent              Influences;                                        // 0x3D0(0x60)(NativeAccessSpecifierPrivate)
	class UControlRig*                           InteractionRig;                                    // 0x430(0x8)(BlueprintVisible, ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UControlRig>               InteractionRigClass;                               // 0x438(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UAssetUserData*>                AssetUserData;                                     // 0x440(0x10)(Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, AdvancedDisplay, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	uint8                                        Pad_E96[0xC8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastSparseDelegateProperty_            OnControlSelected_BP;                              // 0x518(0x1)(InstancedReference, BlueprintAssignable, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_E97[0x47];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ControlRig");
		return Clss;
	}

	bool SupportsEvent(class FName& InInEventName);
	bool SetVariableFromString(class FName& InInVariableName, const class FString& InInValue);
	void SetInteractionRigClass(TSubclassOf<class UControlRig> InInInteractionRigClass);
	void SetInteractionRig(class UControlRig* InInInteractionRig);
	void SetFramesPerSecond(float InInFramesPerSecond);
	void SetDeltaTime(float InInDeltaTime);
	void SetAbsoluteTime(float InInAbsoluteTime, bool InInSetDeltaTimeZero);
	void SetAbsoluteAndDeltaTime(float InInAbsoluteTime, float InInDeltaTime);
	void SelectControl(class FName& InInControlName, bool InbSelect);
	void RequestInit();
	void RequestConstruction();
	void OnControlSelectedBP__DelegateSignature(class UControlRig* InRig, struct FRigControlElement& InControl, bool InbSelected);
	bool IsControlSelected(class FName& InInControlName);
	class URigVM* GetVM();
	class FName GetVariableType(class FName& InInVariableName);
	class FString GetVariableAsString(class FName& InInVariableName);
	TArray<class FName> GetSupportedEvents();
	TArray<class FName> GetScriptAccessibleVariables();
	TSubclassOf<class UControlRig> GetInteractionRigClass();
	class UControlRig* GetInteractionRig();
	class AActor* GetHostingActor();
	class URigHierarchy* GetHierarchy();
	TArray<class FName> GetEvents();
	float GetCurrentFramesPerSecond();
	float GetAbsoluteTime();
	TArray<class UControlRig*> FindControlRigs(class UObject* InOuter, TSubclassOf<class UControlRig> InOptionalClass);
	bool ExecuteEvent(class FName& InInEventName);
	bool Execute(enum class EControlRigState InState, class FName& InInEventName);
	TArray<class FName> CurrentControlSelection();
	class UTransformableControlHandle* CreateTransformableControlHandle(class UObject* InOuter, class FName& InControlName);
	bool ContainsEvent(class FName& InInEventName);
	bool ClearControlSelection();
	bool CanExecute();
};

// 0x0 (0x350 - 0x350)
// Class ControlRig.ControlRigAnimInstance
class UControlRigAnimInstance : public UAnimInstance
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ControlRigAnimInstance");
		return Clss;
	}

};

// 0x0 (0x380 - 0x380)
// Class ControlRig.ControlRigBlueprintGeneratedClass
class UControlRigBlueprintGeneratedClass : public UBlueprintGeneratedClass
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ControlRigBlueprintGeneratedClass");
		return Clss;
	}

};

// 0x158 (0x690 - 0x538)
// Class ControlRig.ControlRigComponent
class UControlRigComponent : public UPrimitiveComponent
{
public:
	TSubclassOf<class UControlRig>               ControlRigClass;                                   // 0x538(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnPreInitializeDelegate;                           // 0x540(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnPostInitializeDelegate;                          // 0x550(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnPreConstructionDelegate;                         // 0x560(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnPostConstructionDelegate;                        // 0x570(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnPreForwardsSolveDelegate;                        // 0x580(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnPostForwardsSolveDelegate;                       // 0x590(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TArray<struct FControlRigComponentMappedElement> UserDefinedElements;                               // 0x5A0(0x10)(Edit, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<struct FControlRigComponentMappedElement> MappedElements;                                    // 0x5B0(0x10)(Edit, ZeroConstructor, EditConst, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         bEnableLazyEvaluation;                             // 0x5C0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F81[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        LazyEvaluationPositionThreshold;                   // 0x5C4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LazyEvaluationRotationThreshold;                   // 0x5C8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LazyEvaluationScaleThreshold;                      // 0x5CC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bResetTransformBeforeTick;                         // 0x5D0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bResetInitialsBeforeConstruction;                  // 0x5D1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUpdateRigOnTick;                                  // 0x5D2(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUpdateInEditor;                                   // 0x5D3(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDrawBones;                                        // 0x5D4(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowDebugDrawing;                                 // 0x5D5(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F85[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UControlRig*                           ControlRig;                                        // 0x5D8(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_F86[0xB0];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ControlRigComponent");
		return Clss;
	}

	void Update(float InDeltaTime);
	void SetObjectBinding(class UObject* InInObjectToBind);
	void SetMappedElements(const TArray<struct FControlRigComponentMappedElement>& InNewMappedElements);
	void SetInitialSpaceTransform(class FName InSpaceName, const struct FTransform& InInitialTransform, enum class EControlRigComponentSpace InSpace);
	void SetInitialBoneTransform(class FName InBoneName, const struct FTransform& InInitialTransform, enum class EControlRigComponentSpace InSpace, bool InbPropagateToChildren);
	void SetControlVector2D(class FName InControlName, const struct FVector2D& InValue);
	void SetControlTransform(class FName InControlName, const struct FTransform& InValue, enum class EControlRigComponentSpace InSpace);
	void SetControlScale(class FName InControlName, const struct FVector& InValue, enum class EControlRigComponentSpace InSpace);
	void SetControlRotator(class FName InControlName, const struct FRotator& InValue, enum class EControlRigComponentSpace InSpace);
	void SetControlRigClass(TSubclassOf<class UControlRig> InInControlRigClass);
	void SetControlPosition(class FName InControlName, const struct FVector& InValue, enum class EControlRigComponentSpace InSpace);
	void SetControlOffset(class FName InControlName, const struct FTransform& InOffsetTransform, enum class EControlRigComponentSpace InSpace);
	void SetControlInt(class FName InControlName, int32 InValue);
	void SetControlFloat(class FName InControlName, float InValue);
	void SetControlBool(class FName InControlName, bool InValue);
	void SetBoneTransform(class FName InBoneName, const struct FTransform& InTransform, enum class EControlRigComponentSpace InSpace, float InWeight, bool InbPropagateToChildren);
	void SetBoneInitialTransformsFromSkeletalMesh(class USkeletalMesh* InInSkeletalMesh);
	void OnPreInitialize(class UControlRigComponent* InComponent);
	void OnPreForwardsSolve(class UControlRigComponent* InComponent);
	void OnPreConstruction(class UControlRigComponent* InComponent);
	void OnPostInitialize(class UControlRigComponent* InComponent);
	void OnPostForwardsSolve(class UControlRigComponent* InComponent);
	void OnPostConstruction(class UControlRigComponent* InComponent);
	void Initialize();
	struct FTransform GetSpaceTransform(class FName InSpaceName, enum class EControlRigComponentSpace InSpace);
	struct FTransform GetInitialSpaceTransform(class FName InSpaceName, enum class EControlRigComponentSpace InSpace);
	struct FTransform GetInitialBoneTransform(class FName InBoneName, enum class EControlRigComponentSpace InSpace);
	TArray<class FName> GetElementNames(enum class ERigElementType InElementType);
	struct FVector2D GetControlVector2D(class FName InControlName);
	struct FTransform GetControlTransform(class FName InControlName, enum class EControlRigComponentSpace InSpace);
	struct FVector GetControlScale(class FName InControlName, enum class EControlRigComponentSpace InSpace);
	struct FRotator GetControlRotator(class FName InControlName, enum class EControlRigComponentSpace InSpace);
	class UControlRig* GetControlRig();
	struct FVector GetControlPosition(class FName InControlName, enum class EControlRigComponentSpace InSpace);
	struct FTransform GetControlOffset(class FName InControlName, enum class EControlRigComponentSpace InSpace);
	int32 GetControlInt(class FName InControlName);
	float GetControlFloat(class FName InControlName);
	bool GetControlBool(class FName InControlName);
	struct FTransform GetBoneTransform(class FName InBoneName, enum class EControlRigComponentSpace InSpace);
	float GetAbsoluteTime();
	bool DoesElementExist(class FName InName, enum class ERigElementType InElementType);
	void ClearMappedElements();
	bool CanExecute();
	void AddMappedSkeletalMesh(class USkeletalMeshComponent* InSkeletalMeshComponent, const TArray<struct FControlRigComponentMappedBone>& InBones, const TArray<struct FControlRigComponentMappedCurve>& InCurves);
	void AddMappedElements(const TArray<struct FControlRigComponentMappedElement>& InNewMappedElements);
	void AddMappedComponents(const TArray<struct FControlRigComponentMappedComponent>& InComponents);
	void AddMappedCompleteSkeletalMesh(class USkeletalMeshComponent* InSkeletalMeshComponent);
};

// 0xB8 (0x348 - 0x290)
// Class ControlRig.ControlRigControlActor
class AControlRigControlActor : public AActor
{
public:
	class AActor*                                ActorToTrack;                                      // 0x290(0x8)(Edit, BlueprintVisible, ZeroConstructor, Interp, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UControlRig>               ControlRigClass;                                   // 0x298(0x8)(Edit, BlueprintVisible, ZeroConstructor, Interp, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRefreshOnTick;                                    // 0x2A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsSelectable;                                     // 0x2A1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F8C[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInterface*                    MaterialOverride;                                  // 0x2A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, Interp, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ColorParameter;                                    // 0x2B0(0x10)(Edit, BlueprintVisible, ZeroConstructor, Interp, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCastShadows;                                      // 0x2C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F8E[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class USceneComponent*                       ActorRootComponent;                                // 0x2C8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSoftObjectPtr<class UControlRig>            ControlRig;                                        // 0x2D0(0x30)(Transient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class FName>                          ControlNames;                                      // 0x300(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	TArray<struct FTransform>                    ShapeTransforms;                                   // 0x310(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	TArray<class UStaticMeshComponent*>          Components;                                        // 0x320(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate)
	TArray<class UMaterialInstanceDynamic*>      Materials;                                         // 0x330(0x10)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPrivate)
	class FName                                  ColorParameterName;                                // 0x340(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ControlRigControlActor");
		return Clss;
	}

	void ResetControlActor();
	void Refresh();
	void Clear();
};

// 0x48 (0x2D8 - 0x290)
// Class ControlRig.ControlRigShapeActor
class AControlRigShapeActor : public AActor
{
public:
	class USceneComponent*                       ActorRootComponent;                                // 0x290(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStaticMeshComponent*                  StaticMeshComponent;                               // 0x298(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       ControlRigIndex;                                   // 0x2A0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UControlRig>            ControlRig;                                        // 0x2A4(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ControlName;                                       // 0x2AC(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ShapeName;                                         // 0x2B4(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ColorParameterName;                                // 0x2BC(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_FA2[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        bSelected : 1;                                     // Mask: 0x1, PropSize: 0x10x2D4(0x1)(BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bHovered : 1;                                      // Mask: 0x2, PropSize: 0x10x2D4(0x1)(BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_FA3[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ControlRigShapeActor");
		return Clss;
	}

	void SetSelected(bool InbInSelected);
	void SetSelectable(bool InbInSelectable);
	void SetHovered(bool InbInHovered);
	void SetGlobalTransform(struct FTransform& InInTransform);
	void SetEnabled(bool InbInEnabled);
	void OnTransformChanged(struct FTransform& InNewTransform);
	void OnSelectionChanged(bool InbIsSelected);
	void OnManipulatingChanged(bool InbIsManipulating);
	void OnHoveredChanged(bool InbIsSelected);
	void OnEnabledChanged(bool InbIsEnabled);
	bool IsSelectedInEditor();
	bool IsHovered();
	bool IsEnabled();
	struct FTransform GetGlobalTransform();
};

// 0x148 (0x170 - 0x28)
// Class ControlRig.ControlRigShapeLibrary
class UControlRigShapeLibrary : public UObject
{
public:
	uint8                                        Pad_FA8[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FControlRigShapeDefinition            DefaultShape;                                      // 0x30(0xB0)(Edit, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UMaterial>              DefaultMaterial;                                   // 0xE0(0x30)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UMaterial>              XRayMaterial;                                      // 0x110(0x30)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  MaterialColorParameter;                            // 0x140(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FControlRigShapeDefinition>    Shapes;                                            // 0x148(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_FA9[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ControlRigShapeLibrary");
		return Clss;
	}

};

// 0x40 (0x68 - 0x28)
// Class ControlRig.ControlRigValidator
class UControlRigValidator : public UObject
{
public:
	TArray<class UControlRigValidationPass*>     Passes;                                            // 0x28(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                        Pad_FAD[0x30];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ControlRigValidator");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class ControlRig.ControlRigValidationPass
class UControlRigValidationPass : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ControlRigValidationPass");
		return Clss;
	}

};

// 0x10 (0x570 - 0x560)
// Class ControlRig.AdditiveControlRig
class UAdditiveControlRig : public UControlRig
{
public:
	uint8                                        Pad_FAE[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AdditiveControlRig");
		return Clss;
	}

};

// 0x40 (0x5A0 - 0x560)
// Class ControlRig.FKControlRig
class UFKControlRig : public UControlRig
{
public:
	TArray<bool>                                 IsControlActive;                                   // 0x560(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	enum class EControlRigFKRigExecuteMode       ApplyMode;                                         // 0x570(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_FB0[0x2F];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FKControlRig");
		return Clss;
	}

};

// 0x78 (0xA0 - 0x28)
// Class ControlRig.RigHierarchyController
class URigHierarchyController : public UObject
{
public:
	bool                                         bReportWarningsAndErrors;                          // 0x28(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_103B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TWeakObjectPtr<class URigHierarchy>          Hierarchy;                                         // 0x2C(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_103C[0x6C];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("RigHierarchyController");
		return Clss;
	}

	bool SetSelection(TArray<struct FRigElementKey>& InInKeys, bool InbPrintPythonCommand);
	bool SetParent(const struct FRigElementKey& InInChild, const struct FRigElementKey& InInParent, bool InbMaintainGlobalTransform, bool InbSetupUndo, bool InbPrintPythonCommand);
	void SetHierarchy(class URigHierarchy* InInHierarchy);
	class FName SetDisplayName(const struct FRigElementKey& InInControl, class FName InInDisplayName, bool InbRenameElement, bool InbSetupUndo, bool InbPrintPythonCommand);
	bool SetControlSettings(const struct FRigElementKey& InInKey, const struct FRigControlSettings& InInSettings, bool InbSetupUndo);
	bool SelectElement(const struct FRigElementKey& InInKey, bool InbSelect, bool InbClearSelection);
	struct FRigElementKey RenameElement(const struct FRigElementKey& InInElement, class FName InInName, bool InbSetupUndo, bool InbPrintPythonCommand, bool InbClearSelection);
	bool RemoveParent(const struct FRigElementKey& InInChild, const struct FRigElementKey& InInParent, bool InbMaintainGlobalTransform, bool InbSetupUndo, bool InbPrintPythonCommand);
	bool RemoveElement(const struct FRigElementKey& InInElement, bool InbSetupUndo, bool InbPrintPythonCommand);
	bool RemoveAllParents(const struct FRigElementKey& InInChild, bool InbMaintainGlobalTransform, bool InbSetupUndo, bool InbPrintPythonCommand);
	TArray<struct FRigElementKey> MirrorElements(const TArray<struct FRigElementKey>& InInKeys, const struct FRigMirrorSettings& InInSettings, bool InbSelectNewElements, bool InbSetupUndo, bool InbPrintPythonCommands);
	TArray<struct FRigElementKey> ImportFromText(const class FString& InInContent, bool InbReplaceExistingElements, bool InbSelectNewElements, bool InbSetupUndo, bool InbPrintPythonCommands);
	TArray<struct FRigElementKey> ImportCurves(class USkeleton* InInSkeleton, class FName InInNameSpace, bool InbSelectCurves, bool InbSetupUndo, bool InbPrintPythonCommand);
	TArray<struct FRigElementKey> ImportBones(class USkeleton* InInSkeleton, class FName InInNameSpace, bool InbReplaceExistingBones, bool InbRemoveObsoleteBones, bool InbSelectBones, bool InbSetupUndo, bool InbPrintPythonCommand);
	class URigHierarchy* GetHierarchy();
	struct FRigControlSettings GetControlSettings(const struct FRigElementKey& InInKey);
	class FString ExportToText(const TArray<struct FRigElementKey>& InInKeys);
	class FString ExportSelectionToText();
	TArray<struct FRigElementKey> DuplicateElements(const TArray<struct FRigElementKey>& InInKeys, bool InbSelectNewElements, bool InbSetupUndo, bool InbPrintPythonCommands);
	bool DeselectElement(const struct FRigElementKey& InInKey);
	bool ClearSelection();
	struct FRigElementKey AddRigidBody(class FName InInName, const struct FRigElementKey& InInParent, const struct FRigRigidBodySettings& InInSettings, const struct FTransform& InInLocalTransform, bool InbSetupUndo, bool InbPrintPythonCommand);
	bool AddParent(const struct FRigElementKey& InInChild, const struct FRigElementKey& InInParent, float InInWeight, bool InbMaintainGlobalTransform, bool InbSetupUndo);
	struct FRigElementKey AddNull(class FName InInName, const struct FRigElementKey& InInParent, const struct FTransform& InInTransform, bool InbTransformInGlobal, bool InbSetupUndo, bool InbPrintPythonCommand);
	struct FRigElementKey AddCurve(class FName InInName, float InInValue, bool InbSetupUndo, bool InbPrintPythonCommand);
	struct FRigElementKey AddControl_ForBlueprint(class FName InInName, const struct FRigElementKey& InInParent, const struct FRigControlSettings& InInSettings, const struct FRigControlValue& InInValue, bool InbSetupUndo, bool InbPrintPythonCommand);
	struct FRigElementKey AddBone(class FName InInName, const struct FRigElementKey& InInParent, const struct FTransform& InInTransform, bool InbTransformInGlobal, enum class ERigBoneType InInBoneType, bool InbSetupUndo, bool InbPrintPythonCommand);
	struct FRigElementKey AddAnimationChannel_ForBlueprint(class FName InInName, const struct FRigElementKey& InInParentControl, const struct FRigControlSettings& InInSettings, bool InbSetupUndo, bool InbPrintPythonCommand);
};

// 0x0 (0x350 - 0x350)
// Class ControlRig.ControlRigLayerInstance
class UControlRigLayerInstance : public UAnimInstance
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ControlRigLayerInstance");
		return Clss;
	}

};

// 0x10 (0x38 - 0x28)
// Class ControlRig.ControlRigObjectHolder
class UControlRigObjectHolder : public UObject
{
public:
	TArray<class UObject*>                       Objects;                                           // 0x28(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ControlRigObjectHolder");
		return Clss;
	}

};

// 0x68 (0x288 - 0x220)
// Class ControlRig.ControlRigSequence
class UControlRigSequence : public ULevelSequence
{
public:
	TSoftObjectPtr<class UAnimSequence>          LastExportedToAnimationSequence;                   // 0x220(0x30)(AssetRegistrySearchable, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class USkeletalMesh>          LastExportedUsingSkeletalMesh;                     // 0x250(0x30)(AssetRegistrySearchable, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LastExportedFrameRate;                             // 0x280(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1044[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ControlRigSequence");
		return Clss;
	}

};

// 0x270 (0x3C8 - 0x158)
// Class ControlRig.MovieSceneControlRigParameterSection
class UMovieSceneControlRigParameterSection : public UMovieSceneParameterSection
{
public:
	uint8                                        Pad_1045[0x40];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UControlRig*                           ControlRig;                                        // 0x198(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSubclassOf<class UControlRig>               ControlRigClass;                                   // 0x1A0(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<bool>                                 ControlsMask;                                      // 0x1A8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct FMovieSceneTransformMask              TransformMask;                                     // 0x1B8(0x4)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1046[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMovieSceneFloatChannel               Weight;                                            // 0x1C0(0x110)(NativeAccessSpecifierPublic)
	TMap<class FName, struct FChannelMapInfo>    ControlChannelMap;                                 // 0x2D0(0x50)(NativeAccessSpecifierPublic)
	TArray<struct FEnumParameterNameAndCurve>    EnumParameterNamesAndCurves;                       // 0x320(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<struct FIntegerParameterNameAndCurve> IntegerParameterNamesAndCurves;                    // 0x330(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<struct FSpaceControlNameAndChannel>   SpaceChannels;                                     // 0x340(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<struct FConstraintAndActiveChannel>   ConstraintsChannels;                               // 0x350(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_1048[0x68];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneControlRigParameterSection");
		return Clss;
	}

};

// 0x68 (0x100 - 0x98)
// Class ControlRig.MovieSceneControlRigParameterTrack
class UMovieSceneControlRigParameterTrack : public UMovieSceneNameableTrack
{
public:
	uint8                                        Pad_1049[0x40];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UControlRig*                           ControlRig;                                        // 0xD8(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMovieSceneSection*                    SectionToKey;                                      // 0xE0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UMovieSceneSection*>            Sections;                                          // 0xE8(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate)
	class FName                                  TrackName;                                         // 0xF8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneControlRigParameterTrack");
		return Clss;
	}

};

// 0x0 (0x38 - 0x38)
// Class ControlRig.ControlRigSettings
class UControlRigSettings : public UDeveloperSettings
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ControlRigSettings");
		return Clss;
	}

};

// 0x0 (0x38 - 0x38)
// Class ControlRig.ControlRigEditorSettings
class UControlRigEditorSettings : public UDeveloperSettings
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ControlRigEditorSettings");
		return Clss;
	}

};

// 0x60 (0x88 - 0x28)
// Class ControlRig.ControlRigPoseAsset
class UControlRigPoseAsset : public UObject
{
public:
	struct FControlRigControlPose                Pose;                                              // 0x28(0x60)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ControlRigPoseAsset");
		return Clss;
	}

	void SelectControls(class UControlRig* InInControlRig, bool InbDoMirror);
	void SavePose(class UControlRig* InInControlRig, bool InbUseAll);
	void ReplaceControlName(class FName& InCurrentName, class FName& InNewName);
	void PastePose(class UControlRig* InInControlRig, bool InbDoKey, bool InbDoMirror);
	void GetCurrentPose(class UControlRig* InInControlRig, struct FControlRigControlPose* InOutPose);
	TArray<class FName> GetControlNames();
	bool DoesMirrorMatch(class UControlRig* InControlRig, class FName& InControlName);
};

// 0x28 (0x50 - 0x28)
// Class ControlRig.ControlRigPoseMirrorSettings
class UControlRigPoseMirrorSettings : public UObject
{
public:
	class FString                                RightSide;                                         // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                LeftSide;                                          // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAxis                             MirrorAxis;                                        // 0x48(0x1)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAxis                             AxisToFlip;                                        // 0x49(0x1)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_106B[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ControlRigPoseMirrorSettings");
		return Clss;
	}

};

// 0x10 (0x38 - 0x28)
// Class ControlRig.ControlRigPoseProjectSettings
class UControlRigPoseProjectSettings : public UObject
{
public:
	TArray<struct FDirectoryPath>                RootSaveDirs;                                      // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, Config, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ControlRigPoseProjectSettings");
		return Clss;
	}

};

// 0x8 (0x30 - 0x28)
// Class ControlRig.ControlRigSnapSettings
class UControlRigSnapSettings : public UObject
{
public:
	bool                                         bKeepOffset;                                       // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSnapPosition;                                     // 0x29(0x1)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSnapRotation;                                     // 0x2A(0x1)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSnapScale;                                        // 0x2B(0x1)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_106D[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ControlRigSnapSettings");
		return Clss;
	}

};

// 0x18 (0xB0 - 0x98)
// Class ControlRig.ControlRigWorkflowOptions
class UControlRigWorkflowOptions : public URigVMUserWorkflowOptions
{
public:
	class URigHierarchy*                         Hierarchy;                                         // 0x98(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FRigElementKey>                Selection;                                         // 0xA0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ControlRigWorkflowOptions");
		return Clss;
	}

	bool EnsureAtLeastOneRigElementSelected();
};

// 0x8 (0xB8 - 0xB0)
// Class ControlRig.ControlRigTransformWorkflowOptions
class UControlRigTransformWorkflowOptions : public UControlRigWorkflowOptions
{
public:
	enum class ERigTransformType                 TransformType;                                     // 0xB0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1072[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ControlRigTransformWorkflowOptions");
		return Clss;
	}

	TArray<struct FRigVMUserWorkflow> ProvideWorkflows(class UObject* InInSubject);
};

// 0x98 (0xC0 - 0x28)
// Class ControlRig.ControlRigNumericalValidationPass
class UControlRigNumericalValidationPass : public UControlRigValidationPass
{
public:
	bool                                         bCheckControls;                                    // 0x28(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCheckBones;                                       // 0x29(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCheckCurves;                                      // 0x2A(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1074[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TranslationPrecision;                              // 0x2C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RotationPrecision;                                 // 0x30(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ScalePrecision;                                    // 0x34(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CurvePrecision;                                    // 0x38(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  EventNameA;                                        // 0x3C(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  EventNameB;                                        // 0x44(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1076[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRigPose                              Pose;                                              // 0x50(0x70)(Transient, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ControlRigNumericalValidationPass");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
