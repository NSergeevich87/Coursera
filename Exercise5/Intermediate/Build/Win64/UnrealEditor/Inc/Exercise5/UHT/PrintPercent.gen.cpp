// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Exercise5/PrintPercent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePrintPercent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	EXERCISE5_API UClass* Z_Construct_UClass_APrintPercent();
	EXERCISE5_API UClass* Z_Construct_UClass_APrintPercent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Exercise5();
// End Cross Module References
	void APrintPercent::StaticRegisterNativesAPrintPercent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APrintPercent);
	UClass* Z_Construct_UClass_APrintPercent_NoRegister()
	{
		return APrintPercent::StaticClass();
	}
	struct Z_Construct_UClass_APrintPercent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APrintPercent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Exercise5,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APrintPercent_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APrintPercent_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n*/" },
#endif
		{ "IncludePath", "PrintPercent.h" },
		{ "ModuleRelativePath", "PrintPercent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APrintPercent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APrintPercent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APrintPercent_Statics::ClassParams = {
		&APrintPercent::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APrintPercent_Statics::Class_MetaDataParams), Z_Construct_UClass_APrintPercent_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_APrintPercent()
	{
		if (!Z_Registration_Info_UClass_APrintPercent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APrintPercent.OuterSingleton, Z_Construct_UClass_APrintPercent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APrintPercent.OuterSingleton;
	}
	template<> EXERCISE5_API UClass* StaticClass<APrintPercent>()
	{
		return APrintPercent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APrintPercent);
	APrintPercent::~APrintPercent() {}
	struct Z_CompiledInDeferFile_FID_Exercise5_Source_Exercise5_PrintPercent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Exercise5_Source_Exercise5_PrintPercent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APrintPercent, APrintPercent::StaticClass, TEXT("APrintPercent"), &Z_Registration_Info_UClass_APrintPercent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APrintPercent), 253887382U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Exercise5_Source_Exercise5_PrintPercent_h_3792600972(TEXT("/Script/Exercise5"),
		Z_CompiledInDeferFile_FID_Exercise5_Source_Exercise5_PrintPercent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Exercise5_Source_Exercise5_PrintPercent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
