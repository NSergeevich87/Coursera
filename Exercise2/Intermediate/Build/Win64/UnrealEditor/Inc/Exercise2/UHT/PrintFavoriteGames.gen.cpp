// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Exercise2/PrintFavoriteGames.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePrintFavoriteGames() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	EXERCISE2_API UClass* Z_Construct_UClass_APrintFavoriteGames();
	EXERCISE2_API UClass* Z_Construct_UClass_APrintFavoriteGames_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Exercise2();
// End Cross Module References
	void APrintFavoriteGames::StaticRegisterNativesAPrintFavoriteGames()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APrintFavoriteGames);
	UClass* Z_Construct_UClass_APrintFavoriteGames_NoRegister()
	{
		return APrintFavoriteGames::StaticClass();
	}
	struct Z_Construct_UClass_APrintFavoriteGames_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APrintFavoriteGames_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Exercise2,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APrintFavoriteGames_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APrintFavoriteGames_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n*/" },
#endif
		{ "IncludePath", "PrintFavoriteGames.h" },
		{ "ModuleRelativePath", "PrintFavoriteGames.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APrintFavoriteGames_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APrintFavoriteGames>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APrintFavoriteGames_Statics::ClassParams = {
		&APrintFavoriteGames::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APrintFavoriteGames_Statics::Class_MetaDataParams), Z_Construct_UClass_APrintFavoriteGames_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_APrintFavoriteGames()
	{
		if (!Z_Registration_Info_UClass_APrintFavoriteGames.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APrintFavoriteGames.OuterSingleton, Z_Construct_UClass_APrintFavoriteGames_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APrintFavoriteGames.OuterSingleton;
	}
	template<> EXERCISE2_API UClass* StaticClass<APrintFavoriteGames>()
	{
		return APrintFavoriteGames::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APrintFavoriteGames);
	APrintFavoriteGames::~APrintFavoriteGames() {}
	struct Z_CompiledInDeferFile_FID_Exercise2_Source_Exercise2_PrintFavoriteGames_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Exercise2_Source_Exercise2_PrintFavoriteGames_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APrintFavoriteGames, APrintFavoriteGames::StaticClass, TEXT("APrintFavoriteGames"), &Z_Registration_Info_UClass_APrintFavoriteGames, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APrintFavoriteGames), 940578794U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Exercise2_Source_Exercise2_PrintFavoriteGames_h_3564332109(TEXT("/Script/Exercise2"),
		Z_CompiledInDeferFile_FID_Exercise2_Source_Exercise2_PrintFavoriteGames_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Exercise2_Source_Exercise2_PrintFavoriteGames_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
