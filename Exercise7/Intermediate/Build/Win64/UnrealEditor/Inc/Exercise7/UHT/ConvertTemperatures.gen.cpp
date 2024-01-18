// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Exercise7/ConvertTemperatures.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConvertTemperatures() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	EXERCISE7_API UClass* Z_Construct_UClass_AConvertTemperatures();
	EXERCISE7_API UClass* Z_Construct_UClass_AConvertTemperatures_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Exercise7();
// End Cross Module References
	void AConvertTemperatures::StaticRegisterNativesAConvertTemperatures()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AConvertTemperatures);
	UClass* Z_Construct_UClass_AConvertTemperatures_NoRegister()
	{
		return AConvertTemperatures::StaticClass();
	}
	struct Z_Construct_UClass_AConvertTemperatures_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AConvertTemperatures_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Exercise7,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AConvertTemperatures_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConvertTemperatures_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n*/" },
#endif
		{ "IncludePath", "ConvertTemperatures.h" },
		{ "ModuleRelativePath", "ConvertTemperatures.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AConvertTemperatures_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AConvertTemperatures>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AConvertTemperatures_Statics::ClassParams = {
		&AConvertTemperatures::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AConvertTemperatures_Statics::Class_MetaDataParams), Z_Construct_UClass_AConvertTemperatures_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AConvertTemperatures()
	{
		if (!Z_Registration_Info_UClass_AConvertTemperatures.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AConvertTemperatures.OuterSingleton, Z_Construct_UClass_AConvertTemperatures_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AConvertTemperatures.OuterSingleton;
	}
	template<> EXERCISE7_API UClass* StaticClass<AConvertTemperatures>()
	{
		return AConvertTemperatures::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AConvertTemperatures);
	AConvertTemperatures::~AConvertTemperatures() {}
	struct Z_CompiledInDeferFile_FID_Exercise7_Source_Exercise7_ConvertTemperatures_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Exercise7_Source_Exercise7_ConvertTemperatures_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AConvertTemperatures, AConvertTemperatures::StaticClass, TEXT("AConvertTemperatures"), &Z_Registration_Info_UClass_AConvertTemperatures, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AConvertTemperatures), 2904237186U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Exercise7_Source_Exercise7_ConvertTemperatures_h_3513702646(TEXT("/Script/Exercise7"),
		Z_CompiledInDeferFile_FID_Exercise7_Source_Exercise7_ConvertTemperatures_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Exercise7_Source_Exercise7_ConvertTemperatures_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
