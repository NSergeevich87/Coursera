// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyMovelt/GreenBallActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGreenBallActor() {}
// Cross Module References
	MYMOVELT_API UClass* Z_Construct_UClass_ABallActor();
	MYMOVELT_API UClass* Z_Construct_UClass_AGreenBallActor();
	MYMOVELT_API UClass* Z_Construct_UClass_AGreenBallActor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MyMovelt();
// End Cross Module References
	void AGreenBallActor::StaticRegisterNativesAGreenBallActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGreenBallActor);
	UClass* Z_Construct_UClass_AGreenBallActor_NoRegister()
	{
		return AGreenBallActor::StaticClass();
	}
	struct Z_Construct_UClass_AGreenBallActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGreenBallActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABallActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MyMovelt,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGreenBallActor_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGreenBallActor_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "GreenBallActor.h" },
		{ "ModuleRelativePath", "GreenBallActor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGreenBallActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGreenBallActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGreenBallActor_Statics::ClassParams = {
		&AGreenBallActor::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGreenBallActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AGreenBallActor_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AGreenBallActor()
	{
		if (!Z_Registration_Info_UClass_AGreenBallActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGreenBallActor.OuterSingleton, Z_Construct_UClass_AGreenBallActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGreenBallActor.OuterSingleton;
	}
	template<> MYMOVELT_API UClass* StaticClass<AGreenBallActor>()
	{
		return AGreenBallActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGreenBallActor);
	AGreenBallActor::~AGreenBallActor() {}
	struct Z_CompiledInDeferFile_FID_MyMovelt_Source_MyMovelt_GreenBallActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyMovelt_Source_MyMovelt_GreenBallActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGreenBallActor, AGreenBallActor::StaticClass, TEXT("AGreenBallActor"), &Z_Registration_Info_UClass_AGreenBallActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGreenBallActor), 392629226U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyMovelt_Source_MyMovelt_GreenBallActor_h_2377891539(TEXT("/Script/MyMovelt"),
		Z_CompiledInDeferFile_FID_MyMovelt_Source_MyMovelt_GreenBallActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyMovelt_Source_MyMovelt_GreenBallActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
