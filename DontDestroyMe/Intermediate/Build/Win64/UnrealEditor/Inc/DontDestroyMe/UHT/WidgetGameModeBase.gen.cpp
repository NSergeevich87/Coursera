// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DontDestroyMe/WidgetGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWidgetGameModeBase() {}
// Cross Module References
	DONTDESTROYME_API UClass* Z_Construct_UClass_AWidgetGameModeBase();
	DONTDESTROYME_API UClass* Z_Construct_UClass_AWidgetGameModeBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_DontDestroyMe();
// End Cross Module References
	void AWidgetGameModeBase::StaticRegisterNativesAWidgetGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWidgetGameModeBase);
	UClass* Z_Construct_UClass_AWidgetGameModeBase_NoRegister()
	{
		return AWidgetGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AWidgetGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWidgetGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DontDestroyMe,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWidgetGameModeBase_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWidgetGameModeBase_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "WidgetGameModeBase.h" },
		{ "ModuleRelativePath", "WidgetGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWidgetGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWidgetGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AWidgetGameModeBase_Statics::ClassParams = {
		&AWidgetGameModeBase::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWidgetGameModeBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AWidgetGameModeBase_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AWidgetGameModeBase()
	{
		if (!Z_Registration_Info_UClass_AWidgetGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWidgetGameModeBase.OuterSingleton, Z_Construct_UClass_AWidgetGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AWidgetGameModeBase.OuterSingleton;
	}
	template<> DONTDESTROYME_API UClass* StaticClass<AWidgetGameModeBase>()
	{
		return AWidgetGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWidgetGameModeBase);
	AWidgetGameModeBase::~AWidgetGameModeBase() {}
	struct Z_CompiledInDeferFile_FID_DontDestroyMe_Source_DontDestroyMe_WidgetGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DontDestroyMe_Source_DontDestroyMe_WidgetGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AWidgetGameModeBase, AWidgetGameModeBase::StaticClass, TEXT("AWidgetGameModeBase"), &Z_Registration_Info_UClass_AWidgetGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWidgetGameModeBase), 2335517078U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DontDestroyMe_Source_DontDestroyMe_WidgetGameModeBase_h_3536340594(TEXT("/Script/DontDestroyMe"),
		Z_CompiledInDeferFile_FID_DontDestroyMe_Source_DontDestroyMe_WidgetGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DontDestroyMe_Source_DontDestroyMe_WidgetGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
