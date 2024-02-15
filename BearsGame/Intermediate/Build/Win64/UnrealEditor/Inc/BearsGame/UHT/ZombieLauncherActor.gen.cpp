// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BearsGame/ZombieLauncherActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeZombieLauncherActor() {}
// Cross Module References
	BEARSGAME_API UClass* Z_Construct_UClass_ALauncherActor();
	BEARSGAME_API UClass* Z_Construct_UClass_AZombieLauncherActor();
	BEARSGAME_API UClass* Z_Construct_UClass_AZombieLauncherActor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_BearsGame();
// End Cross Module References
	void AZombieLauncherActor::StaticRegisterNativesAZombieLauncherActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AZombieLauncherActor);
	UClass* Z_Construct_UClass_AZombieLauncherActor_NoRegister()
	{
		return AZombieLauncherActor::StaticClass();
	}
	struct Z_Construct_UClass_AZombieLauncherActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AZombieLauncherActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ALauncherActor,
		(UObject* (*)())Z_Construct_UPackage__Script_BearsGame,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AZombieLauncherActor_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombieLauncherActor_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "ZombieLauncherActor.h" },
		{ "ModuleRelativePath", "ZombieLauncherActor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AZombieLauncherActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AZombieLauncherActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AZombieLauncherActor_Statics::ClassParams = {
		&AZombieLauncherActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AZombieLauncherActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AZombieLauncherActor_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AZombieLauncherActor()
	{
		if (!Z_Registration_Info_UClass_AZombieLauncherActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AZombieLauncherActor.OuterSingleton, Z_Construct_UClass_AZombieLauncherActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AZombieLauncherActor.OuterSingleton;
	}
	template<> BEARSGAME_API UClass* StaticClass<AZombieLauncherActor>()
	{
		return AZombieLauncherActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AZombieLauncherActor);
	AZombieLauncherActor::~AZombieLauncherActor() {}
	struct Z_CompiledInDeferFile_FID_BearsGame_Source_BearsGame_ZombieLauncherActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BearsGame_Source_BearsGame_ZombieLauncherActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AZombieLauncherActor, AZombieLauncherActor::StaticClass, TEXT("AZombieLauncherActor"), &Z_Registration_Info_UClass_AZombieLauncherActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AZombieLauncherActor), 380388171U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BearsGame_Source_BearsGame_ZombieLauncherActor_h_2426488278(TEXT("/Script/BearsGame"),
		Z_CompiledInDeferFile_FID_BearsGame_Source_BearsGame_ZombieLauncherActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BearsGame_Source_BearsGame_ZombieLauncherActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
