// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectFish/EventManagerActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEventManagerActor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	PROJECTFISH_API UClass* Z_Construct_UClass_AEventManagerActor();
	PROJECTFISH_API UClass* Z_Construct_UClass_AEventManagerActor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ProjectFish();
// End Cross Module References
	void AEventManagerActor::StaticRegisterNativesAEventManagerActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEventManagerActor);
	UClass* Z_Construct_UClass_AEventManagerActor_NoRegister()
	{
		return AEventManagerActor::StaticClass();
	}
	struct Z_Construct_UClass_AEventManagerActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEventManagerActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectFish,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEventManagerActor_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEventManagerActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EventManagerActor.h" },
		{ "ModuleRelativePath", "EventManagerActor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEventManagerActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEventManagerActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AEventManagerActor_Statics::ClassParams = {
		&AEventManagerActor::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEventManagerActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AEventManagerActor_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AEventManagerActor()
	{
		if (!Z_Registration_Info_UClass_AEventManagerActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEventManagerActor.OuterSingleton, Z_Construct_UClass_AEventManagerActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AEventManagerActor.OuterSingleton;
	}
	template<> PROJECTFISH_API UClass* StaticClass<AEventManagerActor>()
	{
		return AEventManagerActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEventManagerActor);
	AEventManagerActor::~AEventManagerActor() {}
	struct Z_CompiledInDeferFile_FID_ProjectFish_Source_ProjectFish_EventManagerActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectFish_Source_ProjectFish_EventManagerActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AEventManagerActor, AEventManagerActor::StaticClass, TEXT("AEventManagerActor"), &Z_Registration_Info_UClass_AEventManagerActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEventManagerActor), 3219977000U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectFish_Source_ProjectFish_EventManagerActor_h_3889110340(TEXT("/Script/ProjectFish"),
		Z_CompiledInDeferFile_FID_ProjectFish_Source_ProjectFish_EventManagerActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectFish_Source_ProjectFish_EventManagerActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
