// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectFish/ProjectFishSaveGame.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProjectFishSaveGame() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USaveGame();
	PROJECTFISH_API UClass* Z_Construct_UClass_UProjectFishSaveGame();
	PROJECTFISH_API UClass* Z_Construct_UClass_UProjectFishSaveGame_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ProjectFish();
// End Cross Module References
	void UProjectFishSaveGame::StaticRegisterNativesUProjectFishSaveGame()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UProjectFishSaveGame);
	UClass* Z_Construct_UClass_UProjectFishSaveGame_NoRegister()
	{
		return UProjectFishSaveGame::StaticClass();
	}
	struct Z_Construct_UClass_UProjectFishSaveGame_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumKills_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumKills;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UProjectFishSaveGame_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USaveGame,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectFish,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UProjectFishSaveGame_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectFishSaveGame_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "ProjectFishSaveGame.h" },
		{ "ModuleRelativePath", "ProjectFishSaveGame.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProjectFishSaveGame_Statics::NewProp_NumKills_MetaData[] = {
		{ "Category", "Saved Game Data" },
		{ "ModuleRelativePath", "ProjectFishSaveGame.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UProjectFishSaveGame_Statics::NewProp_NumKills = { "NumKills", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UProjectFishSaveGame, NumKills), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UProjectFishSaveGame_Statics::NewProp_NumKills_MetaData), Z_Construct_UClass_UProjectFishSaveGame_Statics::NewProp_NumKills_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UProjectFishSaveGame_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UProjectFishSaveGame_Statics::NewProp_NumKills,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UProjectFishSaveGame_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UProjectFishSaveGame>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UProjectFishSaveGame_Statics::ClassParams = {
		&UProjectFishSaveGame::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UProjectFishSaveGame_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UProjectFishSaveGame_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UProjectFishSaveGame_Statics::Class_MetaDataParams), Z_Construct_UClass_UProjectFishSaveGame_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UProjectFishSaveGame_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UProjectFishSaveGame()
	{
		if (!Z_Registration_Info_UClass_UProjectFishSaveGame.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UProjectFishSaveGame.OuterSingleton, Z_Construct_UClass_UProjectFishSaveGame_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UProjectFishSaveGame.OuterSingleton;
	}
	template<> PROJECTFISH_API UClass* StaticClass<UProjectFishSaveGame>()
	{
		return UProjectFishSaveGame::StaticClass();
	}
	UProjectFishSaveGame::UProjectFishSaveGame(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UProjectFishSaveGame);
	UProjectFishSaveGame::~UProjectFishSaveGame() {}
	struct Z_CompiledInDeferFile_FID_ProjectFish_Source_ProjectFish_ProjectFishSaveGame_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectFish_Source_ProjectFish_ProjectFishSaveGame_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UProjectFishSaveGame, UProjectFishSaveGame::StaticClass, TEXT("UProjectFishSaveGame"), &Z_Registration_Info_UClass_UProjectFishSaveGame, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UProjectFishSaveGame), 3595560042U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectFish_Source_ProjectFish_ProjectFishSaveGame_h_1418785721(TEXT("/Script/ProjectFish"),
		Z_CompiledInDeferFile_FID_ProjectFish_Source_ProjectFish_ProjectFishSaveGame_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectFish_Source_ProjectFish_ProjectFishSaveGame_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
