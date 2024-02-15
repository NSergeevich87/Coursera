// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BearsGame/GameHUD.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameHUD() {}
// Cross Module References
	BEARSGAME_API UClass* Z_Construct_UClass_AGameHUD();
	BEARSGAME_API UClass* Z_Construct_UClass_AGameHUD_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	ENGINE_API UClass* Z_Construct_UClass_UFont_NoRegister();
	UPackage* Z_Construct_UPackage__Script_BearsGame();
// End Cross Module References
	void AGameHUD::StaticRegisterNativesAGameHUD()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGameHUD);
	UClass* Z_Construct_UClass_AGameHUD_NoRegister()
	{
		return AGameHUD::StaticClass();
	}
	struct Z_Construct_UClass_AGameHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HudFont_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HudFont;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGameHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_BearsGame,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGameHUD_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameHUD_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "GameHUD.h" },
		{ "ModuleRelativePath", "GameHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameHUD_Statics::NewProp_HudFont_MetaData[] = {
		{ "Category", "HUDFont" },
		{ "ModuleRelativePath", "GameHUD.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGameHUD_Statics::NewProp_HudFont = { "HudFont", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameHUD, HudFont), Z_Construct_UClass_UFont_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGameHUD_Statics::NewProp_HudFont_MetaData), Z_Construct_UClass_AGameHUD_Statics::NewProp_HudFont_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGameHUD_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameHUD_Statics::NewProp_HudFont,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGameHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGameHUD>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGameHUD_Statics::ClassParams = {
		&AGameHUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AGameHUD_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AGameHUD_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGameHUD_Statics::Class_MetaDataParams), Z_Construct_UClass_AGameHUD_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGameHUD_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AGameHUD()
	{
		if (!Z_Registration_Info_UClass_AGameHUD.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGameHUD.OuterSingleton, Z_Construct_UClass_AGameHUD_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGameHUD.OuterSingleton;
	}
	template<> BEARSGAME_API UClass* StaticClass<AGameHUD>()
	{
		return AGameHUD::StaticClass();
	}
	AGameHUD::AGameHUD(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGameHUD);
	AGameHUD::~AGameHUD() {}
	struct Z_CompiledInDeferFile_FID_BearsGame_Source_BearsGame_GameHUD_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BearsGame_Source_BearsGame_GameHUD_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGameHUD, AGameHUD::StaticClass, TEXT("AGameHUD"), &Z_Registration_Info_UClass_AGameHUD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGameHUD), 3397493894U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BearsGame_Source_BearsGame_GameHUD_h_1161929324(TEXT("/Script/BearsGame"),
		Z_CompiledInDeferFile_FID_BearsGame_Source_BearsGame_GameHUD_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BearsGame_Source_BearsGame_GameHUD_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS