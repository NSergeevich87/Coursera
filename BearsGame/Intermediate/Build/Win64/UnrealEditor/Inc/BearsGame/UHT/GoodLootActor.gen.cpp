// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BearsGame/GoodLootActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGoodLootActor() {}
// Cross Module References
	BEARSGAME_API UClass* Z_Construct_UClass_AGoodLootActor();
	BEARSGAME_API UClass* Z_Construct_UClass_AGoodLootActor_NoRegister();
	BEARSGAME_API UClass* Z_Construct_UClass_ALootActor();
	UPackage* Z_Construct_UPackage__Script_BearsGame();
// End Cross Module References
	void AGoodLootActor::StaticRegisterNativesAGoodLootActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGoodLootActor);
	UClass* Z_Construct_UClass_AGoodLootActor_NoRegister()
	{
		return AGoodLootActor::StaticClass();
	}
	struct Z_Construct_UClass_AGoodLootActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGoodLootActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ALootActor,
		(UObject* (*)())Z_Construct_UPackage__Script_BearsGame,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGoodLootActor_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGoodLootActor_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "GoodLootActor.h" },
		{ "ModuleRelativePath", "GoodLootActor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGoodLootActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGoodLootActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGoodLootActor_Statics::ClassParams = {
		&AGoodLootActor::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGoodLootActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AGoodLootActor_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AGoodLootActor()
	{
		if (!Z_Registration_Info_UClass_AGoodLootActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGoodLootActor.OuterSingleton, Z_Construct_UClass_AGoodLootActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGoodLootActor.OuterSingleton;
	}
	template<> BEARSGAME_API UClass* StaticClass<AGoodLootActor>()
	{
		return AGoodLootActor::StaticClass();
	}
	AGoodLootActor::AGoodLootActor() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGoodLootActor);
	AGoodLootActor::~AGoodLootActor() {}
	struct Z_CompiledInDeferFile_FID_BearsGame_Source_BearsGame_GoodLootActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BearsGame_Source_BearsGame_GoodLootActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGoodLootActor, AGoodLootActor::StaticClass, TEXT("AGoodLootActor"), &Z_Registration_Info_UClass_AGoodLootActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGoodLootActor), 1251785900U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BearsGame_Source_BearsGame_GoodLootActor_h_2354521447(TEXT("/Script/BearsGame"),
		Z_CompiledInDeferFile_FID_BearsGame_Source_BearsGame_GoodLootActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BearsGame_Source_BearsGame_GoodLootActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
