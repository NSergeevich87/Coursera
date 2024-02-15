// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BearsGame/ChainsawProjectileActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChainsawProjectileActor() {}
// Cross Module References
	BEARSGAME_API UClass* Z_Construct_UClass_AChainsawProjectileActor();
	BEARSGAME_API UClass* Z_Construct_UClass_AChainsawProjectileActor_NoRegister();
	BEARSGAME_API UClass* Z_Construct_UClass_AProjectileActor();
	UPackage* Z_Construct_UPackage__Script_BearsGame();
// End Cross Module References
	void AChainsawProjectileActor::StaticRegisterNativesAChainsawProjectileActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AChainsawProjectileActor);
	UClass* Z_Construct_UClass_AChainsawProjectileActor_NoRegister()
	{
		return AChainsawProjectileActor::StaticClass();
	}
	struct Z_Construct_UClass_AChainsawProjectileActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AChainsawProjectileActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AProjectileActor,
		(UObject* (*)())Z_Construct_UPackage__Script_BearsGame,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AChainsawProjectileActor_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChainsawProjectileActor_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "ChainsawProjectileActor.h" },
		{ "ModuleRelativePath", "ChainsawProjectileActor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AChainsawProjectileActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AChainsawProjectileActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AChainsawProjectileActor_Statics::ClassParams = {
		&AChainsawProjectileActor::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AChainsawProjectileActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AChainsawProjectileActor_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AChainsawProjectileActor()
	{
		if (!Z_Registration_Info_UClass_AChainsawProjectileActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AChainsawProjectileActor.OuterSingleton, Z_Construct_UClass_AChainsawProjectileActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AChainsawProjectileActor.OuterSingleton;
	}
	template<> BEARSGAME_API UClass* StaticClass<AChainsawProjectileActor>()
	{
		return AChainsawProjectileActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AChainsawProjectileActor);
	AChainsawProjectileActor::~AChainsawProjectileActor() {}
	struct Z_CompiledInDeferFile_FID_BearsGame_Source_BearsGame_ChainsawProjectileActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BearsGame_Source_BearsGame_ChainsawProjectileActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AChainsawProjectileActor, AChainsawProjectileActor::StaticClass, TEXT("AChainsawProjectileActor"), &Z_Registration_Info_UClass_AChainsawProjectileActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AChainsawProjectileActor), 1842574675U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BearsGame_Source_BearsGame_ChainsawProjectileActor_h_3634053989(TEXT("/Script/BearsGame"),
		Z_CompiledInDeferFile_FID_BearsGame_Source_BearsGame_ChainsawProjectileActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BearsGame_Source_BearsGame_ChainsawProjectileActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
