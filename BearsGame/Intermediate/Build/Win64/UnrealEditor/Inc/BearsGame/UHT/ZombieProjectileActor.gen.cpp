// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BearsGame/ZombieProjectileActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeZombieProjectileActor() {}
// Cross Module References
	BEARSGAME_API UClass* Z_Construct_UClass_AProjectileActor();
	BEARSGAME_API UClass* Z_Construct_UClass_AZombieProjectileActor();
	BEARSGAME_API UClass* Z_Construct_UClass_AZombieProjectileActor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_BearsGame();
// End Cross Module References
	void AZombieProjectileActor::StaticRegisterNativesAZombieProjectileActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AZombieProjectileActor);
	UClass* Z_Construct_UClass_AZombieProjectileActor_NoRegister()
	{
		return AZombieProjectileActor::StaticClass();
	}
	struct Z_Construct_UClass_AZombieProjectileActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AZombieProjectileActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AProjectileActor,
		(UObject* (*)())Z_Construct_UPackage__Script_BearsGame,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AZombieProjectileActor_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombieProjectileActor_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "ZombieProjectileActor.h" },
		{ "ModuleRelativePath", "ZombieProjectileActor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AZombieProjectileActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AZombieProjectileActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AZombieProjectileActor_Statics::ClassParams = {
		&AZombieProjectileActor::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AZombieProjectileActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AZombieProjectileActor_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AZombieProjectileActor()
	{
		if (!Z_Registration_Info_UClass_AZombieProjectileActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AZombieProjectileActor.OuterSingleton, Z_Construct_UClass_AZombieProjectileActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AZombieProjectileActor.OuterSingleton;
	}
	template<> BEARSGAME_API UClass* StaticClass<AZombieProjectileActor>()
	{
		return AZombieProjectileActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AZombieProjectileActor);
	AZombieProjectileActor::~AZombieProjectileActor() {}
	struct Z_CompiledInDeferFile_FID_BearsGame_Source_BearsGame_ZombieProjectileActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BearsGame_Source_BearsGame_ZombieProjectileActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AZombieProjectileActor, AZombieProjectileActor::StaticClass, TEXT("AZombieProjectileActor"), &Z_Registration_Info_UClass_AZombieProjectileActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AZombieProjectileActor), 4201458755U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BearsGame_Source_BearsGame_ZombieProjectileActor_h_67648816(TEXT("/Script/BearsGame"),
		Z_CompiledInDeferFile_FID_BearsGame_Source_BearsGame_ZombieProjectileActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BearsGame_Source_BearsGame_ZombieProjectileActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
