// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BearsGame/DelegateTalkerActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDelegateTalkerActor() {}
// Cross Module References
	BEARSGAME_API UClass* Z_Construct_UClass_ADelegateTalkerActor();
	BEARSGAME_API UClass* Z_Construct_UClass_ADelegateTalkerActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_BearsGame();
// End Cross Module References
	void ADelegateTalkerActor::StaticRegisterNativesADelegateTalkerActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADelegateTalkerActor);
	UClass* Z_Construct_UClass_ADelegateTalkerActor_NoRegister()
	{
		return ADelegateTalkerActor::StaticClass();
	}
	struct Z_Construct_UClass_ADelegateTalkerActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADelegateTalkerActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_BearsGame,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADelegateTalkerActor_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADelegateTalkerActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DelegateTalkerActor.h" },
		{ "ModuleRelativePath", "DelegateTalkerActor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADelegateTalkerActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADelegateTalkerActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ADelegateTalkerActor_Statics::ClassParams = {
		&ADelegateTalkerActor::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADelegateTalkerActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ADelegateTalkerActor_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ADelegateTalkerActor()
	{
		if (!Z_Registration_Info_UClass_ADelegateTalkerActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADelegateTalkerActor.OuterSingleton, Z_Construct_UClass_ADelegateTalkerActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ADelegateTalkerActor.OuterSingleton;
	}
	template<> BEARSGAME_API UClass* StaticClass<ADelegateTalkerActor>()
	{
		return ADelegateTalkerActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADelegateTalkerActor);
	ADelegateTalkerActor::~ADelegateTalkerActor() {}
	struct Z_CompiledInDeferFile_FID_BearsGame_Source_BearsGame_DelegateTalkerActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BearsGame_Source_BearsGame_DelegateTalkerActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ADelegateTalkerActor, ADelegateTalkerActor::StaticClass, TEXT("ADelegateTalkerActor"), &Z_Registration_Info_UClass_ADelegateTalkerActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADelegateTalkerActor), 470307886U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BearsGame_Source_BearsGame_DelegateTalkerActor_h_3768772156(TEXT("/Script/BearsGame"),
		Z_CompiledInDeferFile_FID_BearsGame_Source_BearsGame_DelegateTalkerActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BearsGame_Source_BearsGame_DelegateTalkerActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
