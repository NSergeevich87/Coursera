// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheRunaway/CasadorPawn.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCasadorPawn() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	THERUNAWAY_API UClass* Z_Construct_UClass_ACasadorPawn();
	THERUNAWAY_API UClass* Z_Construct_UClass_ACasadorPawn_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TheRunaway();
// End Cross Module References
	void ACasadorPawn::StaticRegisterNativesACasadorPawn()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACasadorPawn);
	UClass* Z_Construct_UClass_ACasadorPawn_NoRegister()
	{
		return ACasadorPawn::StaticClass();
	}
	struct Z_Construct_UClass_ACasadorPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Damage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACasadorPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_TheRunaway,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACasadorPawn_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACasadorPawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "CasadorPawn.h" },
		{ "ModuleRelativePath", "CasadorPawn.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACasadorPawn_Statics::NewProp_Damage_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "CasadorPawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACasadorPawn_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACasadorPawn, Damage), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACasadorPawn_Statics::NewProp_Damage_MetaData), Z_Construct_UClass_ACasadorPawn_Statics::NewProp_Damage_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACasadorPawn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACasadorPawn_Statics::NewProp_Damage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACasadorPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACasadorPawn>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACasadorPawn_Statics::ClassParams = {
		&ACasadorPawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACasadorPawn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACasadorPawn_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACasadorPawn_Statics::Class_MetaDataParams), Z_Construct_UClass_ACasadorPawn_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACasadorPawn_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ACasadorPawn()
	{
		if (!Z_Registration_Info_UClass_ACasadorPawn.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACasadorPawn.OuterSingleton, Z_Construct_UClass_ACasadorPawn_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACasadorPawn.OuterSingleton;
	}
	template<> THERUNAWAY_API UClass* StaticClass<ACasadorPawn>()
	{
		return ACasadorPawn::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACasadorPawn);
	ACasadorPawn::~ACasadorPawn() {}
	struct Z_CompiledInDeferFile_FID_TheRunaway_Source_TheRunaway_CasadorPawn_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TheRunaway_Source_TheRunaway_CasadorPawn_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACasadorPawn, ACasadorPawn::StaticClass, TEXT("ACasadorPawn"), &Z_Registration_Info_UClass_ACasadorPawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACasadorPawn), 2853809581U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TheRunaway_Source_TheRunaway_CasadorPawn_h_3985244419(TEXT("/Script/TheRunaway"),
		Z_CompiledInDeferFile_FID_TheRunaway_Source_TheRunaway_CasadorPawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TheRunaway_Source_TheRunaway_CasadorPawn_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
