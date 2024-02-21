// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DontDestroyMe/WidgetPawn.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWidgetPawn() {}
// Cross Module References
	DONTDESTROYME_API UClass* Z_Construct_UClass_AWidgetPawn();
	DONTDESTROYME_API UClass* Z_Construct_UClass_AWidgetPawn_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_DontDestroyMe();
// End Cross Module References
	void AWidgetPawn::StaticRegisterNativesAWidgetPawn()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWidgetPawn);
	UClass* Z_Construct_UClass_AWidgetPawn_NoRegister()
	{
		return AWidgetPawn::StaticClass();
	}
	struct Z_Construct_UClass_AWidgetPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWidgetPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_DontDestroyMe,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWidgetPawn_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWidgetPawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "WidgetPawn.h" },
		{ "ModuleRelativePath", "WidgetPawn.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWidgetPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWidgetPawn>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AWidgetPawn_Statics::ClassParams = {
		&AWidgetPawn::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWidgetPawn_Statics::Class_MetaDataParams), Z_Construct_UClass_AWidgetPawn_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AWidgetPawn()
	{
		if (!Z_Registration_Info_UClass_AWidgetPawn.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWidgetPawn.OuterSingleton, Z_Construct_UClass_AWidgetPawn_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AWidgetPawn.OuterSingleton;
	}
	template<> DONTDESTROYME_API UClass* StaticClass<AWidgetPawn>()
	{
		return AWidgetPawn::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWidgetPawn);
	AWidgetPawn::~AWidgetPawn() {}
	struct Z_CompiledInDeferFile_FID_DontDestroyMe_Source_DontDestroyMe_WidgetPawn_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DontDestroyMe_Source_DontDestroyMe_WidgetPawn_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AWidgetPawn, AWidgetPawn::StaticClass, TEXT("AWidgetPawn"), &Z_Registration_Info_UClass_AWidgetPawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWidgetPawn), 2142419079U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DontDestroyMe_Source_DontDestroyMe_WidgetPawn_h_4065862156(TEXT("/Script/DontDestroyMe"),
		Z_CompiledInDeferFile_FID_DontDestroyMe_Source_DontDestroyMe_WidgetPawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DontDestroyMe_Source_DontDestroyMe_WidgetPawn_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
