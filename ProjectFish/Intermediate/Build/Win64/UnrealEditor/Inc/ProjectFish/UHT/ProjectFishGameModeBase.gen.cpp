// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectFish/ProjectFishGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProjectFishGameModeBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	PROJECTFISH_API UClass* Z_Construct_UClass_AProjectFishGameModeBase();
	PROJECTFISH_API UClass* Z_Construct_UClass_AProjectFishGameModeBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ProjectFish();
// End Cross Module References
	void AProjectFishGameModeBase::StaticRegisterNativesAProjectFishGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AProjectFishGameModeBase);
	UClass* Z_Construct_UClass_AProjectFishGameModeBase_NoRegister()
	{
		return AProjectFishGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AProjectFishGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AProjectFishGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectFish,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectFishGameModeBase_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectFishGameModeBase_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ProjectFishGameModeBase.h" },
		{ "ModuleRelativePath", "ProjectFishGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AProjectFishGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProjectFishGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AProjectFishGameModeBase_Statics::ClassParams = {
		&AProjectFishGameModeBase::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProjectFishGameModeBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AProjectFishGameModeBase_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AProjectFishGameModeBase()
	{
		if (!Z_Registration_Info_UClass_AProjectFishGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AProjectFishGameModeBase.OuterSingleton, Z_Construct_UClass_AProjectFishGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AProjectFishGameModeBase.OuterSingleton;
	}
	template<> PROJECTFISH_API UClass* StaticClass<AProjectFishGameModeBase>()
	{
		return AProjectFishGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProjectFishGameModeBase);
	AProjectFishGameModeBase::~AProjectFishGameModeBase() {}
	struct Z_CompiledInDeferFile_FID_ProjectFish_Source_ProjectFish_ProjectFishGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectFish_Source_ProjectFish_ProjectFishGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AProjectFishGameModeBase, AProjectFishGameModeBase::StaticClass, TEXT("AProjectFishGameModeBase"), &Z_Registration_Info_UClass_AProjectFishGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AProjectFishGameModeBase), 336966617U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectFish_Source_ProjectFish_ProjectFishGameModeBase_h_3010966405(TEXT("/Script/ProjectFish"),
		Z_CompiledInDeferFile_FID_ProjectFish_Source_ProjectFish_ProjectFishGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectFish_Source_ProjectFish_ProjectFishGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
