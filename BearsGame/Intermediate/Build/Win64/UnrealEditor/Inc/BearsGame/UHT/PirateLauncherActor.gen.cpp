// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BearsGame/PirateLauncherActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePirateLauncherActor() {}
// Cross Module References
	BEARSGAME_API UClass* Z_Construct_UClass_ALauncherActor();
	BEARSGAME_API UClass* Z_Construct_UClass_APirateLauncherActor();
	BEARSGAME_API UClass* Z_Construct_UClass_APirateLauncherActor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_BearsGame();
// End Cross Module References
	void APirateLauncherActor::StaticRegisterNativesAPirateLauncherActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APirateLauncherActor);
	UClass* Z_Construct_UClass_APirateLauncherActor_NoRegister()
	{
		return APirateLauncherActor::StaticClass();
	}
	struct Z_Construct_UClass_APirateLauncherActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APirateLauncherActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ALauncherActor,
		(UObject* (*)())Z_Construct_UPackage__Script_BearsGame,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APirateLauncherActor_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APirateLauncherActor_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "PirateLauncherActor.h" },
		{ "ModuleRelativePath", "PirateLauncherActor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APirateLauncherActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APirateLauncherActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APirateLauncherActor_Statics::ClassParams = {
		&APirateLauncherActor::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APirateLauncherActor_Statics::Class_MetaDataParams), Z_Construct_UClass_APirateLauncherActor_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_APirateLauncherActor()
	{
		if (!Z_Registration_Info_UClass_APirateLauncherActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APirateLauncherActor.OuterSingleton, Z_Construct_UClass_APirateLauncherActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APirateLauncherActor.OuterSingleton;
	}
	template<> BEARSGAME_API UClass* StaticClass<APirateLauncherActor>()
	{
		return APirateLauncherActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APirateLauncherActor);
	APirateLauncherActor::~APirateLauncherActor() {}
	struct Z_CompiledInDeferFile_FID_BearsGame_Source_BearsGame_PirateLauncherActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BearsGame_Source_BearsGame_PirateLauncherActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APirateLauncherActor, APirateLauncherActor::StaticClass, TEXT("APirateLauncherActor"), &Z_Registration_Info_UClass_APirateLauncherActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APirateLauncherActor), 3568826772U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BearsGame_Source_BearsGame_PirateLauncherActor_h_1918813035(TEXT("/Script/BearsGame"),
		Z_CompiledInDeferFile_FID_BearsGame_Source_BearsGame_PirateLauncherActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BearsGame_Source_BearsGame_PirateLauncherActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS