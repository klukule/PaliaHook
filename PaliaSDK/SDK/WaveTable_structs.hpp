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

enum class EWaveTableResolution : uint8
{
	EWaveTableResolution__None     = 0,
	EWaveTableResolution__Res_8    = 3,
	EWaveTableResolution__Res_16   = 4,
	EWaveTableResolution__Res_32   = 5,
	EWaveTableResolution__Res_64   = 6,
	EWaveTableResolution__Res_128  = 7,
	EWaveTableResolution__Res_256  = 8,
	EWaveTableResolution__Res_512  = 9,
	EWaveTableResolution__Res_1024 = 10,
	EWaveTableResolution__Res_2048 = 11,
	EWaveTableResolution__Res_4096 = 12,
	EWaveTableResolution__Res_Max  = 12,
	EWaveTableResolution__Maximum  = 13,
	EWaveTableResolution__EWaveTableResolution_MAX = 14,
};

enum class EWaveTableCurve : uint8
{
	EWaveTableCurve__Linear        = 0,
	EWaveTableCurve__Linear_Inv    = 1,
	EWaveTableCurve__Exp           = 2,
	EWaveTableCurve__Exp_Inverse   = 3,
	EWaveTableCurve__Log           = 4,
	EWaveTableCurve__Sin           = 5,
	EWaveTableCurve__Sin_Full      = 6,
	EWaveTableCurve__SCurve        = 7,
	EWaveTableCurve__Shared        = 8,
	EWaveTableCurve__Custom        = 9,
	EWaveTableCurve__File          = 10,
	EWaveTableCurve__Count         = 11,
	EWaveTableCurve__EWaveTableCurve_MAX = 12,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0xA0 (0xA0 - 0x0)
// ScriptStruct WaveTable.WaveTableTransform
struct FWaveTableTransform
{
public:
	enum class EWaveTableCurve                   Curve;                                             // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_689[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Scalar;                                            // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRichCurve                            CurveCustom;                                       // 0x8(0x80)(NativeAccessSpecifierPublic)
	class UCurveFloat*                           CurveShared;                                       // 0x88(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<float>                                WaveTable;                                         // 0x90(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0xA0 (0xA0 - 0x0)
// ScriptStruct WaveTable.WaveTableBankEntry
struct FWaveTableBankEntry
{
public:
	struct FWaveTableTransform                   Transform;                                         // 0x0(0xA0)(Edit, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct WaveTable.WaveTableSettings
struct FWaveTableSettings
{
public:
	struct FFilePath                             FilePath;                                          // 0x0(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ChannelIndex;                                      // 0x10(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Phase;                                             // 0x14(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Top;                                               // 0x18(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Tail;                                              // 0x1C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FadeIn;                                            // 0x20(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FadeOut;                                           // 0x24(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bNormalize;                                        // 0x28(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRemoveOffset;                                     // 0x29(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_695[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                SourcePCMData;                                     // 0x30(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
