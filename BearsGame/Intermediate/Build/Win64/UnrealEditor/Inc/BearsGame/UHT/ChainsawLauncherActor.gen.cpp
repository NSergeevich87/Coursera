// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BearsGame/ChainsawLauncherActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChainsawLauncherActor() {}
// Cross Module References
	BEARSGAME_API UClass* Z_Construct_UClass_AChainsawLauncherActor();
	BEARSGAME_API UClass* Z_Construct_UClass_AChainsawLauncherActor_NoRegister();
	BEARSGAME_API UClass* Z_Construct_UClass_ALauncherActor();
	UPackage* Z_Construct_UPackage__Script_BearsGame();
// End Cross Module References
	void AChainsawLauncherActor::StaticRegisterNativesAChainsawLauncherActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AChainsawLauncherActor);
	UClass* Z_Construct_UClass_AChainsawLauncherActor_NoRegister()
	{
		return AChainsawLauncherActor::StaticClass();
	}
	struct Z_Construct_UClass_AChainsawLauncherActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AChainsawLauncherActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ALauncherActor,
		(UObject* (*)())Z_Construct_UPackage__Script_BearsGame,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AChainsawLauncherActor_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AChainsawLauncherActor_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "ChainsawLauncherActor.h" },
		{ "ModuleRelativePath", "ChainsawLauncherActor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AChainsawLauncherActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AChainsawLauncherActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AChainsawLauncherActor_Statics::ClassParams = {
		&AChainsawLauncherActor::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AChainsawLauncherActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AChainsawLauncherActor_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AChainsawLauncherActor()
	{
		if (!Z_Registration_Info_UClass_AChainsawLauncherActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AChainsawLauncherActor.OuterSingleton, Z_Construct_UClass_AChainsawLauncherActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AChainsawLauncherActor.OuterSingleton;
	}
	template<> BEARSGAME_API UClass* StaticClass<AChainsawLauncherActor>()
	{
		return AChainsawLauncherActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AChainsawLauncherActor);
	AChainsawLauncherActor::~AChainsawLauncherActor() {}
	struct Z_CompiledInDeferFile_FID_BearsGame_Source_BearsGame_ChainsawLauncherActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BearsGame_Source_BearsGame_ChainsawLauncherActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AChainsawLauncherActor, AChainsawLauncherActor::StaticClass, TEXT("AChainsawLauncherActor"), &Z_Registration_Info_UClass_AChainsawLauncherActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AChainsawLauncherActor), 1496805041U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BearsGame_Source_BearsGame_ChainsawLauncherActor_h_748198210(TEXT("/Script/BearsGame"),
		Z_CompiledInDeferFile_FID_BearsGame_Source_BearsGame_ChainsawLauncherActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BearsGame_Source_BearsGame_ChainsawLauncherActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
