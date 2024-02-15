// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BearsGame/SpawnLounchers.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpawnLounchers() {}
// Cross Module References
	BEARSGAME_API UClass* Z_Construct_UClass_ALauncherActor_NoRegister();
	BEARSGAME_API UClass* Z_Construct_UClass_ASpawnLounchers();
	BEARSGAME_API UClass* Z_Construct_UClass_ASpawnLounchers_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_BearsGame();
// End Cross Module References
	DEFINE_FUNCTION(ASpawnLounchers::execStartSpawn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartSpawn();
		P_NATIVE_END;
	}
	void ASpawnLounchers::StaticRegisterNativesASpawnLounchers()
	{
		UClass* Class = ASpawnLounchers::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "StartSpawn", &ASpawnLounchers::execStartSpawn },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASpawnLounchers_StartSpawn_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpawnLounchers_StartSpawn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "SpawnLounchers.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpawnLounchers_StartSpawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpawnLounchers, nullptr, "StartSpawn", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpawnLounchers_StartSpawn_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASpawnLounchers_StartSpawn_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ASpawnLounchers_StartSpawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASpawnLounchers_StartSpawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASpawnLounchers);
	UClass* Z_Construct_UClass_ASpawnLounchers_NoRegister()
	{
		return ASpawnLounchers::StaticClass();
	}
	struct Z_Construct_UClass_ASpawnLounchers_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChainsawLauncher_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ChainsawLauncher;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PirateLauncher_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_PirateLauncher;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ZombieLauncher_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ZombieLauncher;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASpawnLounchers_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_BearsGame,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnLounchers_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ASpawnLounchers_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASpawnLounchers_StartSpawn, "StartSpawn" }, // 4061913048
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnLounchers_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawnLounchers_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SpawnLounchers.h" },
		{ "ModuleRelativePath", "SpawnLounchers.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawnLounchers_Statics::NewProp_ChainsawLauncher_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Spawn Lounchers" },
		{ "ModuleRelativePath", "SpawnLounchers.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASpawnLounchers_Statics::NewProp_ChainsawLauncher = { "ChainsawLauncher", nullptr, (EPropertyFlags)0x0044000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpawnLounchers, ChainsawLauncher), Z_Construct_UClass_UClass, Z_Construct_UClass_ALauncherActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnLounchers_Statics::NewProp_ChainsawLauncher_MetaData), Z_Construct_UClass_ASpawnLounchers_Statics::NewProp_ChainsawLauncher_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawnLounchers_Statics::NewProp_PirateLauncher_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Spawn Lounchers" },
		{ "ModuleRelativePath", "SpawnLounchers.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASpawnLounchers_Statics::NewProp_PirateLauncher = { "PirateLauncher", nullptr, (EPropertyFlags)0x0044000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpawnLounchers, PirateLauncher), Z_Construct_UClass_UClass, Z_Construct_UClass_ALauncherActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnLounchers_Statics::NewProp_PirateLauncher_MetaData), Z_Construct_UClass_ASpawnLounchers_Statics::NewProp_PirateLauncher_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawnLounchers_Statics::NewProp_ZombieLauncher_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Spawn Lounchers" },
		{ "ModuleRelativePath", "SpawnLounchers.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASpawnLounchers_Statics::NewProp_ZombieLauncher = { "ZombieLauncher", nullptr, (EPropertyFlags)0x0044000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpawnLounchers, ZombieLauncher), Z_Construct_UClass_UClass, Z_Construct_UClass_ALauncherActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnLounchers_Statics::NewProp_ZombieLauncher_MetaData), Z_Construct_UClass_ASpawnLounchers_Statics::NewProp_ZombieLauncher_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASpawnLounchers_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawnLounchers_Statics::NewProp_ChainsawLauncher,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawnLounchers_Statics::NewProp_PirateLauncher,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawnLounchers_Statics::NewProp_ZombieLauncher,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASpawnLounchers_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpawnLounchers>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASpawnLounchers_Statics::ClassParams = {
		&ASpawnLounchers::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASpawnLounchers_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnLounchers_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnLounchers_Statics::Class_MetaDataParams), Z_Construct_UClass_ASpawnLounchers_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnLounchers_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ASpawnLounchers()
	{
		if (!Z_Registration_Info_UClass_ASpawnLounchers.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASpawnLounchers.OuterSingleton, Z_Construct_UClass_ASpawnLounchers_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASpawnLounchers.OuterSingleton;
	}
	template<> BEARSGAME_API UClass* StaticClass<ASpawnLounchers>()
	{
		return ASpawnLounchers::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASpawnLounchers);
	ASpawnLounchers::~ASpawnLounchers() {}
	struct Z_CompiledInDeferFile_FID_BearsGame_Source_BearsGame_SpawnLounchers_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BearsGame_Source_BearsGame_SpawnLounchers_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASpawnLounchers, ASpawnLounchers::StaticClass, TEXT("ASpawnLounchers"), &Z_Registration_Info_UClass_ASpawnLounchers, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASpawnLounchers), 2382128917U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BearsGame_Source_BearsGame_SpawnLounchers_h_3520865258(TEXT("/Script/BearsGame"),
		Z_CompiledInDeferFile_FID_BearsGame_Source_BearsGame_SpawnLounchers_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BearsGame_Source_BearsGame_SpawnLounchers_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
