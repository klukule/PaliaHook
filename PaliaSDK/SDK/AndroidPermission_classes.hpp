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

// 0x28 (0x50 - 0x28)
// Class AndroidPermission.AndroidPermissionCallbackProxy
class UAndroidPermissionCallbackProxy : public UObject
{
public:
	FMulticastInlineDelegateProperty_            OnPermissionsGrantedDynamicDelegate;               // 0x28(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_4AC[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("AndroidPermissionCallbackProxy");

		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class AndroidPermission.AndroidPermissionFunctionLibrary
class UAndroidPermissionFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("AndroidPermissionFunctionLibrary");

		return Clss;
	}

	bool CheckPermission(const class FString& Permission);
	class UAndroidPermissionCallbackProxy* AcquirePermissions(TArray<class FString>& Permissions);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
