// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BearsGame/NoLootTeddyBearActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNoLootTeddyBearActor() {}
// Cross Module References
	BEARSGAME_API UClass* Z_Construct_UClass_ANoLootTeddyBearActor();
	BEARSGAME_API UClass* Z_Construct_UClass_ANoLootTeddyBearActor_NoRegister();
	BEARSGAME_API UClass* Z_Construct_UClass_ATeddyBearActor();
	UPackage* Z_Construct_UPackage__Script_BearsGame();
// End Cross Module References
	void ANoLootTeddyBearActor::StaticRegisterNativesANoLootTeddyBearActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANoLootTeddyBearActor);
	UClass* Z_Construct_UClass_ANoLootTeddyBearActor_NoRegister()
	{
		return ANoLootTeddyBearActor::StaticClass();
	}
	struct Z_Construct_UClass_ANoLootTeddyBearActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANoLootTeddyBearActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ATeddyBearActor,
		(UObject* (*)())Z_Construct_UPackage__Script_BearsGame,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ANoLootTeddyBearActor_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANoLootTeddyBearActor_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "NoLootTeddyBearActor.h" },
		{ "ModuleRelativePath", "NoLootTeddyBearActor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANoLootTeddyBearActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANoLootTeddyBearActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ANoLootTeddyBearActor_Statics::ClassParams = {
		&ANoLootTeddyBearActor::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ANoLootTeddyBearActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ANoLootTeddyBearActor_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ANoLootTeddyBearActor()
	{
		if (!Z_Registration_Info_UClass_ANoLootTeddyBearActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANoLootTeddyBearActor.OuterSingleton, Z_Construct_UClass_ANoLootTeddyBearActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ANoLootTeddyBearActor.OuterSingleton;
	}
	template<> BEARSGAME_API UClass* StaticClass<ANoLootTeddyBearActor>()
	{
		return ANoLootTeddyBearActor::StaticClass();
	}
	ANoLootTeddyBearActor::ANoLootTeddyBearActor() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANoLootTeddyBearActor);
	ANoLootTeddyBearActor::~ANoLootTeddyBearActor() {}
	struct Z_CompiledInDeferFile_FID_BearsGame_Source_BearsGame_NoLootTeddyBearActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BearsGame_Source_BearsGame_NoLootTeddyBearActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ANoLootTeddyBearActor, ANoLootTeddyBearActor::StaticClass, TEXT("ANoLootTeddyBearActor"), &Z_Registration_Info_UClass_ANoLootTeddyBearActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANoLootTeddyBearActor), 2365292841U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BearsGame_Source_BearsGame_NoLootTeddyBearActor_h_1565425688(TEXT("/Script/BearsGame"),
		Z_CompiledInDeferFile_FID_BearsGame_Source_BearsGame_NoLootTeddyBearActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BearsGame_Source_BearsGame_NoLootTeddyBearActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
