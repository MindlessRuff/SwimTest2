// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FMODStudioNiagara/Public/FMODNiagaraEventPlayer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFMODNiagaraEventPlayer() {}

// Begin Cross Module References
FMODSTUDIO_API UClass* Z_Construct_UClass_UFMODEvent_NoRegister();
FMODSTUDIONIAGARA_API UClass* Z_Construct_UClass_UFMODNiagaraEventPlayer();
FMODSTUDIONIAGARA_API UClass* Z_Construct_UClass_UFMODNiagaraEventPlayer_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterface();
UPackage* Z_Construct_UPackage__Script_FMODStudioNiagara();
// End Cross Module References

// Begin Class UFMODNiagaraEventPlayer
void UFMODNiagaraEventPlayer::StaticRegisterNativesUFMODNiagaraEventPlayer()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFMODNiagaraEventPlayer);
UClass* Z_Construct_UClass_UFMODNiagaraEventPlayer_NoRegister()
{
	return UFMODNiagaraEventPlayer::StaticClass();
}
struct Z_Construct_UClass_UFMODNiagaraEventPlayer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "Audio" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** This Data Interface can be used to play one-shot audio effects driven by particle data. */" },
#endif
		{ "DisplayName", "FMOD Event Player" },
		{ "IncludePath", "FMODNiagaraEventPlayer.h" },
		{ "ModuleRelativePath", "Public/FMODNiagaraEventPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This Data Interface can be used to play one-shot audio effects driven by particle data." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventToPlay_MetaData[] = {
		{ "Category", "Audio" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Reference to the audio asset to play */" },
#endif
		{ "ModuleRelativePath", "Public/FMODNiagaraEventPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Reference to the audio asset to play" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParameterNames_MetaData[] = {
		{ "Category", "Parameters" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** A set of parameter names that can be referenced via index when setting sound cue parameters on persistent audio */" },
#endif
		{ "ModuleRelativePath", "Public/FMODNiagaraEventPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A set of parameter names that can be referenced via index when setting sound cue parameters on persistent audio" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLimitPlaysPerTick_MetaData[] = {
		{ "Category", "Audio" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/FMODNiagaraEventPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxPlaysPerTick_MetaData[] = {
		{ "Category", "Audio" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** This sets the max number of sounds played each tick.\n     *  If more particles try to play a sound in a given tick, then it will play sounds until the limit is reached and discard the rest.\n     *  The particles to discard when over the limit are *not* chosen in a deterministic way. */" },
#endif
		{ "EditCondition", "bLimitPlaysPerTick" },
		{ "ModuleRelativePath", "Public/FMODNiagaraEventPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This sets the max number of sounds played each tick.\nIf more particles try to play a sound in a given tick, then it will play sounds until the limit is reached and discard the rest.\nThe particles to discard when over the limit are *not* chosen in a deterministic way." },
#endif
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bStopWhenComponentIsDestroyed_MetaData[] = {
		{ "Category", "Audio" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If false then it the audio component keeps playing after the niagara component was destroyed. Looping sounds are always stopped when the component is destroyed. */" },
#endif
		{ "ModuleRelativePath", "Public/FMODNiagaraEventPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If false then it the audio component keeps playing after the niagara component was destroyed. Looping sounds are always stopped when the component is destroyed." },
#endif
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOnlyActiveDuringGameplay_MetaData[] = {
		{ "Category", "Audio" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If true then this data interface only processes sounds during active gameplay. This is useful when you are working in the preview window and the sounds annoy you.\n     *  Currently the FMOD Niagara integration will not play in Editor.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/FMODNiagaraEventPlayer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true then this data interface only processes sounds during active gameplay. This is useful when you are working in the preview window and the sounds annoy you.\nCurrently the FMOD Niagara integration will not play in Editor." },
#endif
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EventToPlay;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ParameterNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ParameterNames;
	static void NewProp_bLimitPlaysPerTick_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLimitPlaysPerTick;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxPlaysPerTick;
	static void NewProp_bStopWhenComponentIsDestroyed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStopWhenComponentIsDestroyed;
#if WITH_EDITORONLY_DATA
	static void NewProp_bOnlyActiveDuringGameplay_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOnlyActiveDuringGameplay;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFMODNiagaraEventPlayer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFMODNiagaraEventPlayer_Statics::NewProp_EventToPlay = { "EventToPlay", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFMODNiagaraEventPlayer, EventToPlay), Z_Construct_UClass_UFMODEvent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventToPlay_MetaData), NewProp_EventToPlay_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UFMODNiagaraEventPlayer_Statics::NewProp_ParameterNames_Inner = { "ParameterNames", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFMODNiagaraEventPlayer_Statics::NewProp_ParameterNames = { "ParameterNames", nullptr, (EPropertyFlags)0x0010000002020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFMODNiagaraEventPlayer, ParameterNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParameterNames_MetaData), NewProp_ParameterNames_MetaData) };
void Z_Construct_UClass_UFMODNiagaraEventPlayer_Statics::NewProp_bLimitPlaysPerTick_SetBit(void* Obj)
{
	((UFMODNiagaraEventPlayer*)Obj)->bLimitPlaysPerTick = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFMODNiagaraEventPlayer_Statics::NewProp_bLimitPlaysPerTick = { "bLimitPlaysPerTick", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UFMODNiagaraEventPlayer), &Z_Construct_UClass_UFMODNiagaraEventPlayer_Statics::NewProp_bLimitPlaysPerTick_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLimitPlaysPerTick_MetaData), NewProp_bLimitPlaysPerTick_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFMODNiagaraEventPlayer_Statics::NewProp_MaxPlaysPerTick = { "MaxPlaysPerTick", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFMODNiagaraEventPlayer, MaxPlaysPerTick), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxPlaysPerTick_MetaData), NewProp_MaxPlaysPerTick_MetaData) };
void Z_Construct_UClass_UFMODNiagaraEventPlayer_Statics::NewProp_bStopWhenComponentIsDestroyed_SetBit(void* Obj)
{
	((UFMODNiagaraEventPlayer*)Obj)->bStopWhenComponentIsDestroyed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFMODNiagaraEventPlayer_Statics::NewProp_bStopWhenComponentIsDestroyed = { "bStopWhenComponentIsDestroyed", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UFMODNiagaraEventPlayer), &Z_Construct_UClass_UFMODNiagaraEventPlayer_Statics::NewProp_bStopWhenComponentIsDestroyed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bStopWhenComponentIsDestroyed_MetaData), NewProp_bStopWhenComponentIsDestroyed_MetaData) };
#if WITH_EDITORONLY_DATA
void Z_Construct_UClass_UFMODNiagaraEventPlayer_Statics::NewProp_bOnlyActiveDuringGameplay_SetBit(void* Obj)
{
	((UFMODNiagaraEventPlayer*)Obj)->bOnlyActiveDuringGameplay = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFMODNiagaraEventPlayer_Statics::NewProp_bOnlyActiveDuringGameplay = { "bOnlyActiveDuringGameplay", nullptr, (EPropertyFlags)0x0010040800020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UFMODNiagaraEventPlayer), &Z_Construct_UClass_UFMODNiagaraEventPlayer_Statics::NewProp_bOnlyActiveDuringGameplay_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOnlyActiveDuringGameplay_MetaData), NewProp_bOnlyActiveDuringGameplay_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFMODNiagaraEventPlayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFMODNiagaraEventPlayer_Statics::NewProp_EventToPlay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFMODNiagaraEventPlayer_Statics::NewProp_ParameterNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFMODNiagaraEventPlayer_Statics::NewProp_ParameterNames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFMODNiagaraEventPlayer_Statics::NewProp_bLimitPlaysPerTick,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFMODNiagaraEventPlayer_Statics::NewProp_MaxPlaysPerTick,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFMODNiagaraEventPlayer_Statics::NewProp_bStopWhenComponentIsDestroyed,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFMODNiagaraEventPlayer_Statics::NewProp_bOnlyActiveDuringGameplay,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFMODNiagaraEventPlayer_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UFMODNiagaraEventPlayer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNiagaraDataInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_FMODStudioNiagara,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFMODNiagaraEventPlayer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFMODNiagaraEventPlayer_Statics::ClassParams = {
	&UFMODNiagaraEventPlayer::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UFMODNiagaraEventPlayer_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UFMODNiagaraEventPlayer_Statics::PropPointers),
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFMODNiagaraEventPlayer_Statics::Class_MetaDataParams), Z_Construct_UClass_UFMODNiagaraEventPlayer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFMODNiagaraEventPlayer()
{
	if (!Z_Registration_Info_UClass_UFMODNiagaraEventPlayer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFMODNiagaraEventPlayer.OuterSingleton, Z_Construct_UClass_UFMODNiagaraEventPlayer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFMODNiagaraEventPlayer.OuterSingleton;
}
template<> FMODSTUDIONIAGARA_API UClass* StaticClass<UFMODNiagaraEventPlayer>()
{
	return UFMODNiagaraEventPlayer::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFMODNiagaraEventPlayer);
UFMODNiagaraEventPlayer::~UFMODNiagaraEventPlayer() {}
// End Class UFMODNiagaraEventPlayer

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealProjects_DepthsOfChiminea_SwimTest2_Plugins_fmodstudio20306ue5_5win64_FMODStudioNiagara_Source_FMODStudioNiagara_Public_FMODNiagaraEventPlayer_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFMODNiagaraEventPlayer, UFMODNiagaraEventPlayer::StaticClass, TEXT("UFMODNiagaraEventPlayer"), &Z_Registration_Info_UClass_UFMODNiagaraEventPlayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFMODNiagaraEventPlayer), 451882843U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProjects_DepthsOfChiminea_SwimTest2_Plugins_fmodstudio20306ue5_5win64_FMODStudioNiagara_Source_FMODStudioNiagara_Public_FMODNiagaraEventPlayer_h_744625948(TEXT("/Script/FMODStudioNiagara"),
	Z_CompiledInDeferFile_FID_UnrealProjects_DepthsOfChiminea_SwimTest2_Plugins_fmodstudio20306ue5_5win64_FMODStudioNiagara_Source_FMODStudioNiagara_Public_FMODNiagaraEventPlayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProjects_DepthsOfChiminea_SwimTest2_Plugins_fmodstudio20306ue5_5win64_FMODStudioNiagara_Source_FMODStudioNiagara_Public_FMODNiagaraEventPlayer_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
