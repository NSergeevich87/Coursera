// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyMovelt/BallActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBallActor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	MYMOVELT_API UClass* Z_Construct_UClass_ABallActor();
	MYMOVELT_API UClass* Z_Construct_UClass_ABallActor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MyMovelt();
// End Cross Module References
	void ABallActor::StaticRegisterNativesABallActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABallActor);
	UClass* Z_Construct_UClass_ABallActor_NoRegister()
	{
		return ABallActor::StaticClass();
	}
	struct Z_Construct_UClass_ABallActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABallActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MyMovelt,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABallActor_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABallActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BallActor.h" },
		{ "ModuleRelativePath", "BallActor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABallActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABallActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABallActor_Statics::ClassParams = {
		&ABallActor::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABallActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ABallActor_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ABallActor()
	{
		if (!Z_Registration_Info_UClass_ABallActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABallActor.OuterSingleton, Z_Construct_UClass_ABallActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABallActor.OuterSingleton;
	}
	template<> MYMOVELT_API UClass* StaticClass<ABallActor>()
	{
		return ABallActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABallActor);
	ABallActor::~ABallActor() {}
	struct Z_CompiledInDeferFile_FID_MyMovelt_Source_MyMovelt_BallActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyMovelt_Source_MyMovelt_BallActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABallActor, ABallActor::StaticClass, TEXT("ABallActor"), &Z_Registration_Info_UClass_ABallActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABallActor), 648463662U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyMovelt_Source_MyMovelt_BallActor_h_2648512272(TEXT("/Script/MyMovelt"),
		Z_CompiledInDeferFile_FID_MyMovelt_Source_MyMovelt_BallActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyMovelt_Source_MyMovelt_BallActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
