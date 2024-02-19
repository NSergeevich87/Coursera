// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BearsGame/RandomBadLootTeddyBearActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRandomBadLootTeddyBearActor() {}
// Cross Module References
	BEARSGAME_API UClass* Z_Construct_UClass_ALootTeddyBearActor();
	BEARSGAME_API UClass* Z_Construct_UClass_ARandomBadLootTeddyBearActor();
	BEARSGAME_API UClass* Z_Construct_UClass_ARandomBadLootTeddyBearActor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_BearsGame();
// End Cross Module References
	void ARandomBadLootTeddyBearActor::StaticRegisterNativesARandomBadLootTeddyBearActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARandomBadLootTeddyBearActor);
	UClass* Z_Construct_UClass_ARandomBadLootTeddyBearActor_NoRegister()
	{
		return ARandomBadLootTeddyBearActor::StaticClass();
	}
	struct Z_Construct_UClass_ARandomBadLootTeddyBearActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARandomBadLootTeddyBearActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ALootTeddyBearActor,
		(UObject* (*)())Z_Construct_UPackage__Script_BearsGame,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARandomBadLootTeddyBearActor_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARandomBadLootTeddyBearActor_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "RandomBadLootTeddyBearActor.h" },
		{ "ModuleRelativePath", "RandomBadLootTeddyBearActor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARandomBadLootTeddyBearActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARandomBadLootTeddyBearActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ARandomBadLootTeddyBearActor_Statics::ClassParams = {
		&ARandomBadLootTeddyBearActor::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARandomBadLootTeddyBearActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ARandomBadLootTeddyBearActor_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ARandomBadLootTeddyBearActor()
	{
		if (!Z_Registration_Info_UClass_ARandomBadLootTeddyBearActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARandomBadLootTeddyBearActor.OuterSingleton, Z_Construct_UClass_ARandomBadLootTeddyBearActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ARandomBadLootTeddyBearActor.OuterSingleton;
	}
	template<> BEARSGAME_API UClass* StaticClass<ARandomBadLootTeddyBearActor>()
	{
		return ARandomBadLootTeddyBearActor::StaticClass();
	}
	ARandomBadLootTeddyBearActor::ARandomBadLootTeddyBearActor() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARandomBadLootTeddyBearActor);
	ARandomBadLootTeddyBearActor::~ARandomBadLootTeddyBearActor() {}
	struct Z_CompiledInDeferFile_FID_BearsGame_Source_BearsGame_RandomBadLootTeddyBearActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BearsGame_Source_BearsGame_RandomBadLootTeddyBearActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ARandomBadLootTeddyBearActor, ARandomBadLootTeddyBearActor::StaticClass, TEXT("ARandomBadLootTeddyBearActor"), &Z_Registration_Info_UClass_ARandomBadLootTeddyBearActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARandomBadLootTeddyBearActor), 484755914U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BearsGame_Source_BearsGame_RandomBadLootTeddyBearActor_h_2898125465(TEXT("/Script/BearsGame"),
		Z_CompiledInDeferFile_FID_BearsGame_Source_BearsGame_RandomBadLootTeddyBearActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BearsGame_Source_BearsGame_RandomBadLootTeddyBearActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
