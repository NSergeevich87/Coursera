// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheRunaway/CasadorSaveGame.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCasadorSaveGame() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USaveGame();
	THERUNAWAY_API UClass* Z_Construct_UClass_UCasadorSaveGame();
	THERUNAWAY_API UClass* Z_Construct_UClass_UCasadorSaveGame_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TheRunaway();
// End Cross Module References
	void UCasadorSaveGame::StaticRegisterNativesUCasadorSaveGame()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCasadorSaveGame);
	UClass* Z_Construct_UClass_UCasadorSaveGame_NoRegister()
	{
		return UCasadorSaveGame::StaticClass();
	}
	struct Z_Construct_UClass_UCasadorSaveGame_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CasadorHealth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CasadorHealth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CasadorEscaped_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CasadorEscaped;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCasadorSaveGame_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USaveGame,
		(UObject* (*)())Z_Construct_UPackage__Script_TheRunaway,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCasadorSaveGame_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCasadorSaveGame_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "CasadorSaveGame.h" },
		{ "ModuleRelativePath", "CasadorSaveGame.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCasadorSaveGame_Statics::NewProp_CasadorHealth_MetaData[] = {
		{ "Category", "Saved Game Data" },
		{ "ModuleRelativePath", "CasadorSaveGame.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCasadorSaveGame_Statics::NewProp_CasadorHealth = { "CasadorHealth", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCasadorSaveGame, CasadorHealth), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCasadorSaveGame_Statics::NewProp_CasadorHealth_MetaData), Z_Construct_UClass_UCasadorSaveGame_Statics::NewProp_CasadorHealth_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCasadorSaveGame_Statics::NewProp_CasadorEscaped_MetaData[] = {
		{ "Category", "Saved Game Data" },
		{ "ModuleRelativePath", "CasadorSaveGame.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCasadorSaveGame_Statics::NewProp_CasadorEscaped = { "CasadorEscaped", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCasadorSaveGame, CasadorEscaped), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCasadorSaveGame_Statics::NewProp_CasadorEscaped_MetaData), Z_Construct_UClass_UCasadorSaveGame_Statics::NewProp_CasadorEscaped_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCasadorSaveGame_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCasadorSaveGame_Statics::NewProp_CasadorHealth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCasadorSaveGame_Statics::NewProp_CasadorEscaped,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCasadorSaveGame_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCasadorSaveGame>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCasadorSaveGame_Statics::ClassParams = {
		&UCasadorSaveGame::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCasadorSaveGame_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCasadorSaveGame_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCasadorSaveGame_Statics::Class_MetaDataParams), Z_Construct_UClass_UCasadorSaveGame_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCasadorSaveGame_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UCasadorSaveGame()
	{
		if (!Z_Registration_Info_UClass_UCasadorSaveGame.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCasadorSaveGame.OuterSingleton, Z_Construct_UClass_UCasadorSaveGame_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCasadorSaveGame.OuterSingleton;
	}
	template<> THERUNAWAY_API UClass* StaticClass<UCasadorSaveGame>()
	{
		return UCasadorSaveGame::StaticClass();
	}
	UCasadorSaveGame::UCasadorSaveGame(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCasadorSaveGame);
	UCasadorSaveGame::~UCasadorSaveGame() {}
	struct Z_CompiledInDeferFile_FID_TheRunaway_Source_TheRunaway_CasadorSaveGame_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TheRunaway_Source_TheRunaway_CasadorSaveGame_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCasadorSaveGame, UCasadorSaveGame::StaticClass, TEXT("UCasadorSaveGame"), &Z_Registration_Info_UClass_UCasadorSaveGame, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCasadorSaveGame), 941866008U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TheRunaway_Source_TheRunaway_CasadorSaveGame_h_1568036939(TEXT("/Script/TheRunaway"),
		Z_CompiledInDeferFile_FID_TheRunaway_Source_TheRunaway_CasadorSaveGame_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TheRunaway_Source_TheRunaway_CasadorSaveGame_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
