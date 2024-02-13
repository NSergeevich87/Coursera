// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyMovelt/RedBallActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRedBallActor() {}
// Cross Module References
	MYMOVELT_API UClass* Z_Construct_UClass_ABallActor();
	MYMOVELT_API UClass* Z_Construct_UClass_ARedBallActor();
	MYMOVELT_API UClass* Z_Construct_UClass_ARedBallActor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MyMovelt();
// End Cross Module References
	void ARedBallActor::StaticRegisterNativesARedBallActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARedBallActor);
	UClass* Z_Construct_UClass_ARedBallActor_NoRegister()
	{
		return ARedBallActor::StaticClass();
	}
	struct Z_Construct_UClass_ARedBallActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARedBallActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABallActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MyMovelt,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARedBallActor_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARedBallActor_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "RedBallActor.h" },
		{ "ModuleRelativePath", "RedBallActor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARedBallActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARedBallActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ARedBallActor_Statics::ClassParams = {
		&ARedBallActor::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARedBallActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ARedBallActor_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ARedBallActor()
	{
		if (!Z_Registration_Info_UClass_ARedBallActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARedBallActor.OuterSingleton, Z_Construct_UClass_ARedBallActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ARedBallActor.OuterSingleton;
	}
	template<> MYMOVELT_API UClass* StaticClass<ARedBallActor>()
	{
		return ARedBallActor::StaticClass();
	}
	ARedBallActor::ARedBallActor() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARedBallActor);
	ARedBallActor::~ARedBallActor() {}
	struct Z_CompiledInDeferFile_FID_MyMovelt_Source_MyMovelt_RedBallActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyMovelt_Source_MyMovelt_RedBallActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ARedBallActor, ARedBallActor::StaticClass, TEXT("ARedBallActor"), &Z_Registration_Info_UClass_ARedBallActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARedBallActor), 634142881U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyMovelt_Source_MyMovelt_RedBallActor_h_884617038(TEXT("/Script/MyMovelt"),
		Z_CompiledInDeferFile_FID_MyMovelt_Source_MyMovelt_RedBallActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyMovelt_Source_MyMovelt_RedBallActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
