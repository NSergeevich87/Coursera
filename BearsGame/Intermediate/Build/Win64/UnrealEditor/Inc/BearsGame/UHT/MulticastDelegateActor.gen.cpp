// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BearsGame/MulticastDelegateActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMulticastDelegateActor() {}
// Cross Module References
	BEARSGAME_API UClass* Z_Construct_UClass_AMulticastDelegateActor();
	BEARSGAME_API UClass* Z_Construct_UClass_AMulticastDelegateActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_BearsGame();
// End Cross Module References
	void AMulticastDelegateActor::StaticRegisterNativesAMulticastDelegateActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMulticastDelegateActor);
	UClass* Z_Construct_UClass_AMulticastDelegateActor_NoRegister()
	{
		return AMulticastDelegateActor::StaticClass();
	}
	struct Z_Construct_UClass_AMulticastDelegateActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMulticastDelegateActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_BearsGame,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMulticastDelegateActor_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMulticastDelegateActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MulticastDelegateActor.h" },
		{ "ModuleRelativePath", "MulticastDelegateActor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMulticastDelegateActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMulticastDelegateActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMulticastDelegateActor_Statics::ClassParams = {
		&AMulticastDelegateActor::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMulticastDelegateActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AMulticastDelegateActor_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AMulticastDelegateActor()
	{
		if (!Z_Registration_Info_UClass_AMulticastDelegateActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMulticastDelegateActor.OuterSingleton, Z_Construct_UClass_AMulticastDelegateActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMulticastDelegateActor.OuterSingleton;
	}
	template<> BEARSGAME_API UClass* StaticClass<AMulticastDelegateActor>()
	{
		return AMulticastDelegateActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMulticastDelegateActor);
	AMulticastDelegateActor::~AMulticastDelegateActor() {}
	struct Z_CompiledInDeferFile_FID_BearsGame_Source_BearsGame_MulticastDelegateActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BearsGame_Source_BearsGame_MulticastDelegateActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMulticastDelegateActor, AMulticastDelegateActor::StaticClass, TEXT("AMulticastDelegateActor"), &Z_Registration_Info_UClass_AMulticastDelegateActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMulticastDelegateActor), 829409583U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BearsGame_Source_BearsGame_MulticastDelegateActor_h_2398166833(TEXT("/Script/BearsGame"),
		Z_CompiledInDeferFile_FID_BearsGame_Source_BearsGame_MulticastDelegateActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BearsGame_Source_BearsGame_MulticastDelegateActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
