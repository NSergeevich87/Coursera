// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TedPickup/TedGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTedGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	TEDPICKUP_API UClass* Z_Construct_UClass_ATedGameMode();
	TEDPICKUP_API UClass* Z_Construct_UClass_ATedGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TedPickup();
// End Cross Module References
	void ATedGameMode::StaticRegisterNativesATedGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATedGameMode);
	UClass* Z_Construct_UClass_ATedGameMode_NoRegister()
	{
		return ATedGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ATedGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATedGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TedPickup,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATedGameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATedGameMode_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "TedGameMode.h" },
		{ "ModuleRelativePath", "TedGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATedGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATedGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATedGameMode_Statics::ClassParams = {
		&ATedGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATedGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ATedGameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ATedGameMode()
	{
		if (!Z_Registration_Info_UClass_ATedGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATedGameMode.OuterSingleton, Z_Construct_UClass_ATedGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATedGameMode.OuterSingleton;
	}
	template<> TEDPICKUP_API UClass* StaticClass<ATedGameMode>()
	{
		return ATedGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATedGameMode);
	ATedGameMode::~ATedGameMode() {}
	struct Z_CompiledInDeferFile_FID_TedPickup_Source_TedPickup_TedGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TedPickup_Source_TedPickup_TedGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATedGameMode, ATedGameMode::StaticClass, TEXT("ATedGameMode"), &Z_Registration_Info_UClass_ATedGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATedGameMode), 2243134035U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TedPickup_Source_TedPickup_TedGameMode_h_2234456335(TEXT("/Script/TedPickup"),
		Z_CompiledInDeferFile_FID_TedPickup_Source_TedPickup_TedGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TedPickup_Source_TedPickup_TedGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
