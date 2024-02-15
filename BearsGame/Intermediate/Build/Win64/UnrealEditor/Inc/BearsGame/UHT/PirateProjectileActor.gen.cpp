// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BearsGame/PirateProjectileActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePirateProjectileActor() {}
// Cross Module References
	BEARSGAME_API UClass* Z_Construct_UClass_APirateProjectileActor();
	BEARSGAME_API UClass* Z_Construct_UClass_APirateProjectileActor_NoRegister();
	BEARSGAME_API UClass* Z_Construct_UClass_AProjectileActor();
	UPackage* Z_Construct_UPackage__Script_BearsGame();
// End Cross Module References
	void APirateProjectileActor::StaticRegisterNativesAPirateProjectileActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APirateProjectileActor);
	UClass* Z_Construct_UClass_APirateProjectileActor_NoRegister()
	{
		return APirateProjectileActor::StaticClass();
	}
	struct Z_Construct_UClass_APirateProjectileActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APirateProjectileActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AProjectileActor,
		(UObject* (*)())Z_Construct_UPackage__Script_BearsGame,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APirateProjectileActor_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APirateProjectileActor_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "PirateProjectileActor.h" },
		{ "ModuleRelativePath", "PirateProjectileActor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APirateProjectileActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APirateProjectileActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APirateProjectileActor_Statics::ClassParams = {
		&APirateProjectileActor::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APirateProjectileActor_Statics::Class_MetaDataParams), Z_Construct_UClass_APirateProjectileActor_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_APirateProjectileActor()
	{
		if (!Z_Registration_Info_UClass_APirateProjectileActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APirateProjectileActor.OuterSingleton, Z_Construct_UClass_APirateProjectileActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APirateProjectileActor.OuterSingleton;
	}
	template<> BEARSGAME_API UClass* StaticClass<APirateProjectileActor>()
	{
		return APirateProjectileActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APirateProjectileActor);
	APirateProjectileActor::~APirateProjectileActor() {}
	struct Z_CompiledInDeferFile_FID_BearsGame_Source_BearsGame_PirateProjectileActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BearsGame_Source_BearsGame_PirateProjectileActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APirateProjectileActor, APirateProjectileActor::StaticClass, TEXT("APirateProjectileActor"), &Z_Registration_Info_UClass_APirateProjectileActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APirateProjectileActor), 3745285475U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BearsGame_Source_BearsGame_PirateProjectileActor_h_1209993598(TEXT("/Script/BearsGame"),
		Z_CompiledInDeferFile_FID_BearsGame_Source_BearsGame_PirateProjectileActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BearsGame_Source_BearsGame_PirateProjectileActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
