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

enum class ETemplateSectionPropertyScaleType : int32
{
	ETemplateSectionPropertyScaleType__FloatProperty = 0,
	ETemplateSectionPropertyScaleType__TransformPropertyLocationOnly = 1,
	ETemplateSectionPropertyScaleType__TransformPropertyRotationOnly = 2,
	ETemplateSectionPropertyScaleType__ETemplateSectionPropertyScaleType_MAX = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x138 (0x138 - 0x0)
// ScriptStruct TemplateSequence.TemplateSectionPropertyScale
struct FTemplateSectionPropertyScale
{
public:
	struct FGuid                                 ObjectBinding;                                     // 0x0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMovieScenePropertyBinding            PropertyBinding;                                   // 0x10(0x14)(NoDestructor, NativeAccessSpecifierPublic)
	enum class ETemplateSectionPropertyScaleType PropertyScaleType;                                 // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMovieSceneFloatChannel               FloatChannel;                                      // 0x28(0x110)(NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct TemplateSequence.TemplateSequenceBindingOverrideData
struct FTemplateSequenceBindingOverrideData
{
public:
	TWeakObjectPtr<class UObject>                Object;                                            // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOverridesDefault;                                 // 0x8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_179F[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
