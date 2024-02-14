// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BearsGame/BadLootActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBadLootActor() {}
// Cross Module References
	BEARSGAME_API UClass* Z_Construct_UClass_ABadLootActor();
	BEARSGAME_API UClass* Z_Construct_UClass_ABadLootActor_NoRegister();
	BEARSGAME_API UClass* Z_Construct_UClass_ALootActor();
	UPackage* Z_Construct_UPackage__Script_BearsGame();
// End Cross Module References
	void ABadLootActor::StaticRegisterNativesABadLootActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABadLootActor);
	UClass* Z_Construct_UClass_ABadLootActor_NoRegister()
	{
		return ABadLootActor::StaticClass();
	}
	struct Z_Construct_UClass_ABadLootActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABadLootActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ALootActor,
		(UObject* (*)())Z_Construct_UPackage__Script_BearsGame,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABadLootActor_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABadLootActor_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "BadLootActor.h" },
		{ "ModuleRelativePath", "BadLootActor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABadLootActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABadLootActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABadLootActor_Statics::ClassParams = {
		&ABadLootActor::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABadLootActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ABadLootActor_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ABadLootActor()
	{
		if (!Z_Registration_Info_UClass_ABadLootActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABadLootActor.OuterSingleton, Z_Construct_UClass_ABadLootActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABadLootActor.OuterSingleton;
	}
	template<> BEARSGAME_API UClass* StaticClass<ABadLootActor>()
	{
		return ABadLootActor::StaticClass();
	}
	ABadLootActor::ABadLootActor() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABadLootActor);
	ABadLootActor::~ABadLootActor() {}
	struct Z_CompiledInDeferFile_FID_BearsGame_Source_BearsGame_BadLootActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BearsGame_Source_BearsGame_BadLootActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABadLootActor, ABadLootActor::StaticClass, TEXT("ABadLootActor"), &Z_Registration_Info_UClass_ABadLootActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABadLootActor), 3653913443U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BearsGame_Source_BearsGame_BadLootActor_h_2036431745(TEXT("/Script/BearsGame"),
		Z_CompiledInDeferFile_FID_BearsGame_Source_BearsGame_BadLootActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BearsGame_Source_BearsGame_BadLootActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
