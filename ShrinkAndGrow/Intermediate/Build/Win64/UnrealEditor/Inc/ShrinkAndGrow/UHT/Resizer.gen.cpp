// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShrinkAndGrow/Resizer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeResizer() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	SHRINKANDGROW_API UClass* Z_Construct_UClass_AResizer();
	SHRINKANDGROW_API UClass* Z_Construct_UClass_AResizer_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ShrinkAndGrow();
// End Cross Module References
	void AResizer::StaticRegisterNativesAResizer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AResizer);
	UClass* Z_Construct_UClass_AResizer_NoRegister()
	{
		return AResizer::StaticClass();
	}
	struct Z_Construct_UClass_AResizer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AResizer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ShrinkAndGrow,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AResizer_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AResizer_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * An actor that shrinks and grows\n*/" },
#endif
		{ "IncludePath", "Resizer.h" },
		{ "ModuleRelativePath", "Resizer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "An actor that shrinks and grows" },
#endif
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AResizer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AResizer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AResizer_Statics::ClassParams = {
		&AResizer::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AResizer_Statics::Class_MetaDataParams), Z_Construct_UClass_AResizer_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AResizer()
	{
		if (!Z_Registration_Info_UClass_AResizer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AResizer.OuterSingleton, Z_Construct_UClass_AResizer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AResizer.OuterSingleton;
	}
	template<> SHRINKANDGROW_API UClass* StaticClass<AResizer>()
	{
		return AResizer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AResizer);
	AResizer::~AResizer() {}
	struct Z_CompiledInDeferFile_FID_ShrinkAndGrow_Source_ShrinkAndGrow_Resizer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ShrinkAndGrow_Source_ShrinkAndGrow_Resizer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AResizer, AResizer::StaticClass, TEXT("AResizer"), &Z_Registration_Info_UClass_AResizer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AResizer), 148955592U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ShrinkAndGrow_Source_ShrinkAndGrow_Resizer_h_2099475214(TEXT("/Script/ShrinkAndGrow"),
		Z_CompiledInDeferFile_FID_ShrinkAndGrow_Source_ShrinkAndGrow_Resizer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ShrinkAndGrow_Source_ShrinkAndGrow_Resizer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
