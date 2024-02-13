// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyMovelt/BallsSpawner.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBallsSpawner() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	MYMOVELT_API UClass* Z_Construct_UClass_ABallActor_NoRegister();
	MYMOVELT_API UClass* Z_Construct_UClass_ABallsSpawner();
	MYMOVELT_API UClass* Z_Construct_UClass_ABallsSpawner_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MyMovelt();
// End Cross Module References
	DEFINE_FUNCTION(ABallsSpawner::execStartSpawn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartSpawn();
		P_NATIVE_END;
	}
	void ABallsSpawner::StaticRegisterNativesABallsSpawner()
	{
		UClass* Class = ABallsSpawner::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "StartSpawn", &ABallsSpawner::execStartSpawn },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABallsSpawner_StartSpawn_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABallsSpawner_StartSpawn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BallsSpawner.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABallsSpawner_StartSpawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABallsSpawner, nullptr, "StartSpawn", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABallsSpawner_StartSpawn_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABallsSpawner_StartSpawn_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ABallsSpawner_StartSpawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABallsSpawner_StartSpawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABallsSpawner);
	UClass* Z_Construct_UClass_ABallsSpawner_NoRegister()
	{
		return ABallsSpawner::StaticClass();
	}
	struct Z_Construct_UClass_ABallsSpawner_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WhiteBall_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_WhiteBall;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GreenBall_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_GreenBall;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RedBall_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_RedBall;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABallsSpawner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MyMovelt,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABallsSpawner_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ABallsSpawner_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABallsSpawner_StartSpawn, "StartSpawn" }, // 1947481508
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABallsSpawner_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABallsSpawner_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BallsSpawner.h" },
		{ "ModuleRelativePath", "BallsSpawner.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABallsSpawner_Statics::NewProp_WhiteBall_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Balls" },
		{ "ModuleRelativePath", "BallsSpawner.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABallsSpawner_Statics::NewProp_WhiteBall = { "WhiteBall", nullptr, (EPropertyFlags)0x0044000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABallsSpawner, WhiteBall), Z_Construct_UClass_UClass, Z_Construct_UClass_ABallActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABallsSpawner_Statics::NewProp_WhiteBall_MetaData), Z_Construct_UClass_ABallsSpawner_Statics::NewProp_WhiteBall_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABallsSpawner_Statics::NewProp_GreenBall_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Balls" },
		{ "ModuleRelativePath", "BallsSpawner.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABallsSpawner_Statics::NewProp_GreenBall = { "GreenBall", nullptr, (EPropertyFlags)0x0044000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABallsSpawner, GreenBall), Z_Construct_UClass_UClass, Z_Construct_UClass_ABallActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABallsSpawner_Statics::NewProp_GreenBall_MetaData), Z_Construct_UClass_ABallsSpawner_Statics::NewProp_GreenBall_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABallsSpawner_Statics::NewProp_RedBall_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Balls" },
		{ "ModuleRelativePath", "BallsSpawner.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABallsSpawner_Statics::NewProp_RedBall = { "RedBall", nullptr, (EPropertyFlags)0x0044000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABallsSpawner, RedBall), Z_Construct_UClass_UClass, Z_Construct_UClass_ABallActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABallsSpawner_Statics::NewProp_RedBall_MetaData), Z_Construct_UClass_ABallsSpawner_Statics::NewProp_RedBall_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABallsSpawner_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABallsSpawner_Statics::NewProp_WhiteBall,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABallsSpawner_Statics::NewProp_GreenBall,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABallsSpawner_Statics::NewProp_RedBall,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABallsSpawner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABallsSpawner>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABallsSpawner_Statics::ClassParams = {
		&ABallsSpawner::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABallsSpawner_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABallsSpawner_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABallsSpawner_Statics::Class_MetaDataParams), Z_Construct_UClass_ABallsSpawner_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABallsSpawner_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ABallsSpawner()
	{
		if (!Z_Registration_Info_UClass_ABallsSpawner.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABallsSpawner.OuterSingleton, Z_Construct_UClass_ABallsSpawner_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABallsSpawner.OuterSingleton;
	}
	template<> MYMOVELT_API UClass* StaticClass<ABallsSpawner>()
	{
		return ABallsSpawner::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABallsSpawner);
	ABallsSpawner::~ABallsSpawner() {}
	struct Z_CompiledInDeferFile_FID_MyMovelt_Source_MyMovelt_BallsSpawner_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyMovelt_Source_MyMovelt_BallsSpawner_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABallsSpawner, ABallsSpawner::StaticClass, TEXT("ABallsSpawner"), &Z_Registration_Info_UClass_ABallsSpawner, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABallsSpawner), 1450555176U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyMovelt_Source_MyMovelt_BallsSpawner_h_3873323541(TEXT("/Script/MyMovelt"),
		Z_CompiledInDeferFile_FID_MyMovelt_Source_MyMovelt_BallsSpawner_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyMovelt_Source_MyMovelt_BallsSpawner_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
