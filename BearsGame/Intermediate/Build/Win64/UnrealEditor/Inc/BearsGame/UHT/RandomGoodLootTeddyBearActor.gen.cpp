// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BearsGame/RandomGoodLootTeddyBearActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRandomGoodLootTeddyBearActor() {}
// Cross Module References
	BEARSGAME_API UClass* Z_Construct_UClass_ALootTeddyBearActor();
	BEARSGAME_API UClass* Z_Construct_UClass_ARandomGoodLootTeddyBearActor();
	BEARSGAME_API UClass* Z_Construct_UClass_ARandomGoodLootTeddyBearActor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_BearsGame();
// End Cross Module References
	void ARandomGoodLootTeddyBearActor::StaticRegisterNativesARandomGoodLootTeddyBearActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARandomGoodLootTeddyBearActor);
	UClass* Z_Construct_UClass_ARandomGoodLootTeddyBearActor_NoRegister()
	{
		return ARandomGoodLootTeddyBearActor::StaticClass();
	}
	struct Z_Construct_UClass_ARandomGoodLootTeddyBearActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARandomGoodLootTeddyBearActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ALootTeddyBearActor,
		(UObject* (*)())Z_Construct_UPackage__Script_BearsGame,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARandomGoodLootTeddyBearActor_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARandomGoodLootTeddyBearActor_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "RandomGoodLootTeddyBearActor.h" },
		{ "ModuleRelativePath", "RandomGoodLootTeddyBearActor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARandomGoodLootTeddyBearActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARandomGoodLootTeddyBearActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ARandomGoodLootTeddyBearActor_Statics::ClassParams = {
		&ARandomGoodLootTeddyBearActor::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARandomGoodLootTeddyBearActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ARandomGoodLootTeddyBearActor_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ARandomGoodLootTeddyBearActor()
	{
		if (!Z_Registration_Info_UClass_ARandomGoodLootTeddyBearActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARandomGoodLootTeddyBearActor.OuterSingleton, Z_Construct_UClass_ARandomGoodLootTeddyBearActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ARandomGoodLootTeddyBearActor.OuterSingleton;
	}
	template<> BEARSGAME_API UClass* StaticClass<ARandomGoodLootTeddyBearActor>()
	{
		return ARandomGoodLootTeddyBearActor::StaticClass();
	}
	ARandomGoodLootTeddyBearActor::ARandomGoodLootTeddyBearActor() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARandomGoodLootTeddyBearActor);
	ARandomGoodLootTeddyBearActor::~ARandomGoodLootTeddyBearActor() {}
	struct Z_CompiledInDeferFile_FID_BearsGame_Source_BearsGame_RandomGoodLootTeddyBearActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BearsGame_Source_BearsGame_RandomGoodLootTeddyBearActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ARandomGoodLootTeddyBearActor, ARandomGoodLootTeddyBearActor::StaticClass, TEXT("ARandomGoodLootTeddyBearActor"), &Z_Registration_Info_UClass_ARandomGoodLootTeddyBearActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARandomGoodLootTeddyBearActor), 2138910489U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BearsGame_Source_BearsGame_RandomGoodLootTeddyBearActor_h_2217321959(TEXT("/Script/BearsGame"),
		Z_CompiledInDeferFile_FID_BearsGame_Source_BearsGame_RandomGoodLootTeddyBearActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BearsGame_Source_BearsGame_RandomGoodLootTeddyBearActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
