// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Exercise_12/Purple_TB.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePurple_TB() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	EXERCISE_12_API UClass* Z_Construct_UClass_APurple_TB();
	EXERCISE_12_API UClass* Z_Construct_UClass_APurple_TB_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Exercise_12();
// End Cross Module References
	void APurple_TB::StaticRegisterNativesAPurple_TB()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APurple_TB);
	UClass* Z_Construct_UClass_APurple_TB_NoRegister()
	{
		return APurple_TB::StaticClass();
	}
	struct Z_Construct_UClass_APurple_TB_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APurple_TB_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Exercise_12,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APurple_TB_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APurple_TB_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n*/" },
#endif
		{ "IncludePath", "Purple_TB.h" },
		{ "ModuleRelativePath", "Purple_TB.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APurple_TB_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APurple_TB>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APurple_TB_Statics::ClassParams = {
		&APurple_TB::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APurple_TB_Statics::Class_MetaDataParams), Z_Construct_UClass_APurple_TB_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_APurple_TB()
	{
		if (!Z_Registration_Info_UClass_APurple_TB.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APurple_TB.OuterSingleton, Z_Construct_UClass_APurple_TB_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APurple_TB.OuterSingleton;
	}
	template<> EXERCISE_12_API UClass* StaticClass<APurple_TB>()
	{
		return APurple_TB::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APurple_TB);
	APurple_TB::~APurple_TB() {}
	struct Z_CompiledInDeferFile_FID_Exercise_12_Source_Exercise_12_Purple_TB_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Exercise_12_Source_Exercise_12_Purple_TB_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APurple_TB, APurple_TB::StaticClass, TEXT("APurple_TB"), &Z_Registration_Info_UClass_APurple_TB, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APurple_TB), 1872983625U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Exercise_12_Source_Exercise_12_Purple_TB_h_624233289(TEXT("/Script/Exercise_12"),
		Z_CompiledInDeferFile_FID_Exercise_12_Source_Exercise_12_Purple_TB_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Exercise_12_Source_Exercise_12_Purple_TB_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
