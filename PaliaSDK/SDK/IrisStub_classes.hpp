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

// 0x0 (0x28 - 0x28)
// Class IrisStub.DataStream
class UDataStream : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("DataStream");

		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class IrisStub.IrisObjectReferencePackageMap
class UIrisObjectReferencePackageMap : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("IrisObjectReferencePackageMap");

		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class IrisStub.NetBlobHandler
class UNetBlobHandler : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("NetBlobHandler");

		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class IrisStub.NetObjectPrioritizerConfig
class UNetObjectPrioritizerConfig : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("NetObjectPrioritizerConfig");

		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class IrisStub.NetObjectCountLimiterConfig
class UNetObjectCountLimiterConfig : public UNetObjectPrioritizerConfig
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("NetObjectCountLimiterConfig");

		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class IrisStub.NetObjectFilterConfig
class UNetObjectFilterConfig : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("NetObjectFilterConfig");

		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class IrisStub.NetObjectFilter
class UNetObjectFilter : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("NetObjectFilter");

		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class IrisStub.NetObjectPrioritizer
class UNetObjectPrioritizer : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("NetObjectPrioritizer");

		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class IrisStub.ReplicationBridge
class UReplicationBridge : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("ReplicationBridge");

		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class IrisStub.ObjectReplicationBridge
class UObjectReplicationBridge : public UReplicationBridge
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("ObjectReplicationBridge");

		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class IrisStub.SequentialPartialNetBlobHandlerConfig
class USequentialPartialNetBlobHandlerConfig : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("SequentialPartialNetBlobHandlerConfig");

		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class IrisStub.SequentialPartialNetBlobHandler
class USequentialPartialNetBlobHandler : public UNetBlobHandler
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("SequentialPartialNetBlobHandler");

		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class IrisStub.SphereWithOwnerBoostNetObjectPrioritizerConfig
class USphereWithOwnerBoostNetObjectPrioritizerConfig : public UNetObjectPrioritizerConfig
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = nullptr;

		if (!Clss)
			Clss = UObject::FindClassFast("SphereWithOwnerBoostNetObjectPrioritizerConfig");

		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
