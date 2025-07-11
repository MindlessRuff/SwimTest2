// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FMODStudio/Classes/FMODAnimNotifyPlay.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFMODAnimNotifyPlay() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODAnimNotifyPlay();
FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODAnimNotifyPlay_NoRegister();
FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODEvent_NoRegister();
UPackage* Z_Construct_UPackage__Script_FMODStudio();
// End Cross Module References

// Begin Class UFMODAnimNotifyPlay
void UFMODAnimNotifyPlay::StaticRegisterNativesUFMODAnimNotifyPlay()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFMODAnimNotifyPlay);
UClass* Z_Construct_UClass_UFMODAnimNotifyPlay_NoRegister()
{
	return UFMODAnimNotifyPlay::StaticClass();
}
struct Z_Construct_UClass_UFMODAnimNotifyPlay_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Play FMOD Event" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "FMODAnimNotifyPlay.h" },
		{ "ModuleRelativePath", "Classes/FMODAnimNotifyPlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFollow_MetaData[] = {
		{ "Category", "FMOD Anim Notify" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// If this sound should follow its owner\n" },
#endif
		{ "ModuleRelativePath", "Classes/FMODAnimNotifyPlay.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If this sound should follow its owner" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttachName_MetaData[] = {
		{ "Category", "FMOD Anim Notify" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Socket or bone name to attach sound to\n" },
#endif
		{ "EditCondition", "bFollow" },
		{ "ModuleRelativePath", "Classes/FMODAnimNotifyPlay.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Socket or bone name to attach sound to" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Event_MetaData[] = {
		{ "Category", "FMOD Anim Notify" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Sound to Play\n" },
#endif
		{ "ModuleRelativePath", "Classes/FMODAnimNotifyPlay.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sound to Play" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bFollow_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFollow;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AttachName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Event;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFMODAnimNotifyPlay>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UFMODAnimNotifyPlay_Statics::NewProp_bFollow_SetBit(void* Obj)
{
	((UFMODAnimNotifyPlay*)Obj)->bFollow = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFMODAnimNotifyPlay_Statics::NewProp_bFollow = { "bFollow", nullptr, (EPropertyFlags)0x0010000000000011, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UFMODAnimNotifyPlay), &Z_Construct_UClass_UFMODAnimNotifyPlay_Statics::NewProp_bFollow_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFollow_MetaData), NewProp_bFollow_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFMODAnimNotifyPlay_Statics::NewProp_AttachName = { "AttachName", nullptr, (EPropertyFlags)0x0010000000000011, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFMODAnimNotifyPlay, AttachName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttachName_MetaData), NewProp_AttachName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFMODAnimNotifyPlay_Statics::NewProp_Event = { "Event", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFMODAnimNotifyPlay, Event), Z_Construct_UClass_UFMODEvent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Event_MetaData), NewProp_Event_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFMODAnimNotifyPlay_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFMODAnimNotifyPlay_Statics::NewProp_bFollow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFMODAnimNotifyPlay_Statics::NewProp_AttachName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFMODAnimNotifyPlay_Statics::NewProp_Event,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFMODAnimNotifyPlay_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UFMODAnimNotifyPlay_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimNotify,
	(UObject* (*)())Z_Construct_UPackage__Script_FMODStudio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFMODAnimNotifyPlay_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFMODAnimNotifyPlay_Statics::ClassParams = {
	&UFMODAnimNotifyPlay::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UFMODAnimNotifyPlay_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UFMODAnimNotifyPlay_Statics::PropPointers),
	0,
	0x001120A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFMODAnimNotifyPlay_Statics::Class_MetaDataParams), Z_Construct_UClass_UFMODAnimNotifyPlay_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFMODAnimNotifyPlay()
{
	if (!Z_Registration_Info_UClass_UFMODAnimNotifyPlay.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFMODAnimNotifyPlay.OuterSingleton, Z_Construct_UClass_UFMODAnimNotifyPlay_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFMODAnimNotifyPlay.OuterSingleton;
}
template<> FMODSTUDIO_API UClass* StaticClass<UFMODAnimNotifyPlay>()
{
	return UFMODAnimNotifyPlay::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFMODAnimNotifyPlay);
UFMODAnimNotifyPlay::~UFMODAnimNotifyPlay() {}
// End Class UFMODAnimNotifyPlay

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealProjects_DepthsOfChiminea_SwimTest2_Plugins_fmodstudio20306ue5_5win64_FMODStudio_Source_FMODStudio_Classes_FMODAnimNotifyPlay_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFMODAnimNotifyPlay, UFMODAnimNotifyPlay::StaticClass, TEXT("UFMODAnimNotifyPlay"), &Z_Registration_Info_UClass_UFMODAnimNotifyPlay, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFMODAnimNotifyPlay), 183020088U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_DepthsOfChiminea_SwimTest2_Plugins_fmodstudio20306ue5_5win64_FMODStudio_Source_FMODStudio_Classes_FMODAnimNotifyPlay_h_51652956(TEXT("/Script/FMODStudio"),
	Z_CompiledInDeferFile_FID_UnrealProjects_DepthsOfChiminea_SwimTest2_Plugins_fmodstudio20306ue5_5win64_FMODStudio_Source_FMODStudio_Classes_FMODAnimNotifyPlay_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_DepthsOfChiminea_SwimTest2_Plugins_fmodstudio20306ue5_5win64_FMODStudio_Source_FMODStudio_Classes_FMODAnimNotifyPlay_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
