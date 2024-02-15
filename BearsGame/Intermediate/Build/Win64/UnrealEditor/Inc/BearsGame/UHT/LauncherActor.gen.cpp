// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BearsGame/LauncherActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLauncherActor() {}
// Cross Module References
	BEARSGAME_API UClass* Z_Construct_UClass_ALauncherActor();
	BEARSGAME_API UClass* Z_Construct_UClass_ALauncherActor_NoRegister();
	BEARSGAME_API UClass* Z_Construct_UClass_AProjectileActor_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_BearsGame();
// End Cross Module References
	DEFINE_FUNCTION(ALauncherActor::execSpawnProjectile)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpawnProjectile();
		P_NATIVE_END;
	}
	void ALauncherActor::StaticRegisterNativesALauncherActor()
	{
		UClass* Class = ALauncherActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SpawnProjectile", &ALauncherActor::execSpawnProjectile },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ALauncherActor_SpawnProjectile_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALauncherActor_SpawnProjectile_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "LauncherActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALauncherActor_SpawnProjectile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALauncherActor, nullptr, "SpawnProjectile", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALauncherActor_SpawnProjectile_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALauncherActor_SpawnProjectile_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ALauncherActor_SpawnProjectile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALauncherActor_SpawnProjectile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALauncherActor);
	UClass* Z_Construct_UClass_ALauncherActor_NoRegister()
	{
		return ALauncherActor::StaticClass();
	}
	struct Z_Construct_UClass_ALauncherActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Projectile_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_Projectile;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALauncherActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_BearsGame,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALauncherActor_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ALauncherActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ALauncherActor_SpawnProjectile, "SpawnProjectile" }, // 1269389782
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALauncherActor_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALauncherActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LauncherActor.h" },
		{ "ModuleRelativePath", "LauncherActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALauncherActor_Statics::NewProp_Projectile_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Projectiles" },
		{ "ModuleRelativePath", "LauncherActor.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ALauncherActor_Statics::NewProp_Projectile = { "Projectile", nullptr, (EPropertyFlags)0x0044000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALauncherActor, Projectile), Z_Construct_UClass_UClass, Z_Construct_UClass_AProjectileActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALauncherActor_Statics::NewProp_Projectile_MetaData), Z_Construct_UClass_ALauncherActor_Statics::NewProp_Projectile_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALauncherActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALauncherActor_Statics::NewProp_Projectile,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALauncherActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALauncherActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ALauncherActor_Statics::ClassParams = {
		&ALauncherActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ALauncherActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ALauncherActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALauncherActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ALauncherActor_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALauncherActor_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ALauncherActor()
	{
		if (!Z_Registration_Info_UClass_ALauncherActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALauncherActor.OuterSingleton, Z_Construct_UClass_ALauncherActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ALauncherActor.OuterSingleton;
	}
	template<> BEARSGAME_API UClass* StaticClass<ALauncherActor>()
	{
		return ALauncherActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALauncherActor);
	ALauncherActor::~ALauncherActor() {}
	struct Z_CompiledInDeferFile_FID_BearsGame_Source_BearsGame_LauncherActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BearsGame_Source_BearsGame_LauncherActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ALauncherActor, ALauncherActor::StaticClass, TEXT("ALauncherActor"), &Z_Registration_Info_UClass_ALauncherActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALauncherActor), 3139820992U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BearsGame_Source_BearsGame_LauncherActor_h_4216047457(TEXT("/Script/BearsGame"),
		Z_CompiledInDeferFile_FID_BearsGame_Source_BearsGame_LauncherActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BearsGame_Source_BearsGame_LauncherActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
