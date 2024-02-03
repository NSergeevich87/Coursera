// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectFish/TeddyBearsSpawner.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTeddyBearsSpawner() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	PROJECTFISH_API UClass* Z_Construct_UClass_ATeddyBear_NoRegister();
	PROJECTFISH_API UClass* Z_Construct_UClass_ATeddyBearsSpawner();
	PROJECTFISH_API UClass* Z_Construct_UClass_ATeddyBearsSpawner_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ProjectFish();
// End Cross Module References
	DEFINE_FUNCTION(ATeddyBearsSpawner::execStartSpawn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartSpawn();
		P_NATIVE_END;
	}
	void ATeddyBearsSpawner::StaticRegisterNativesATeddyBearsSpawner()
	{
		UClass* Class = ATeddyBearsSpawner::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "StartSpawn", &ATeddyBearsSpawner::execStartSpawn },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATeddyBearsSpawner_StartSpawn_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATeddyBearsSpawner_StartSpawn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TeddyBearsSpawner.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATeddyBearsSpawner_StartSpawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATeddyBearsSpawner, nullptr, "StartSpawn", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATeddyBearsSpawner_StartSpawn_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATeddyBearsSpawner_StartSpawn_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ATeddyBearsSpawner_StartSpawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATeddyBearsSpawner_StartSpawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATeddyBearsSpawner);
	UClass* Z_Construct_UClass_ATeddyBearsSpawner_NoRegister()
	{
		return ATeddyBearsSpawner::StaticClass();
	}
	struct Z_Construct_UClass_ATeddyBearsSpawner_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TeddyBear_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_TeddyBear;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATeddyBearsSpawner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectFish,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATeddyBearsSpawner_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ATeddyBearsSpawner_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATeddyBearsSpawner_StartSpawn, "StartSpawn" }, // 2076082023
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATeddyBearsSpawner_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATeddyBearsSpawner_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TeddyBearsSpawner.h" },
		{ "ModuleRelativePath", "TeddyBearsSpawner.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATeddyBearsSpawner_Statics::NewProp_TeddyBear_MetaData[] = {
		{ "Category", "SpawnObject" },
		{ "ModuleRelativePath", "TeddyBearsSpawner.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATeddyBearsSpawner_Statics::NewProp_TeddyBear = { "TeddyBear", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATeddyBearsSpawner, TeddyBear), Z_Construct_UClass_UClass, Z_Construct_UClass_ATeddyBear_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATeddyBearsSpawner_Statics::NewProp_TeddyBear_MetaData), Z_Construct_UClass_ATeddyBearsSpawner_Statics::NewProp_TeddyBear_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATeddyBearsSpawner_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATeddyBearsSpawner_Statics::NewProp_TeddyBear,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATeddyBearsSpawner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATeddyBearsSpawner>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATeddyBearsSpawner_Statics::ClassParams = {
		&ATeddyBearsSpawner::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATeddyBearsSpawner_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATeddyBearsSpawner_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATeddyBearsSpawner_Statics::Class_MetaDataParams), Z_Construct_UClass_ATeddyBearsSpawner_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATeddyBearsSpawner_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ATeddyBearsSpawner()
	{
		if (!Z_Registration_Info_UClass_ATeddyBearsSpawner.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATeddyBearsSpawner.OuterSingleton, Z_Construct_UClass_ATeddyBearsSpawner_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATeddyBearsSpawner.OuterSingleton;
	}
	template<> PROJECTFISH_API UClass* StaticClass<ATeddyBearsSpawner>()
	{
		return ATeddyBearsSpawner::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATeddyBearsSpawner);
	ATeddyBearsSpawner::~ATeddyBearsSpawner() {}
	struct Z_CompiledInDeferFile_FID_ProjectFish_Source_ProjectFish_TeddyBearsSpawner_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectFish_Source_ProjectFish_TeddyBearsSpawner_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATeddyBearsSpawner, ATeddyBearsSpawner::StaticClass, TEXT("ATeddyBearsSpawner"), &Z_Registration_Info_UClass_ATeddyBearsSpawner, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATeddyBearsSpawner), 2472981353U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectFish_Source_ProjectFish_TeddyBearsSpawner_h_3833351892(TEXT("/Script/ProjectFish"),
		Z_CompiledInDeferFile_FID_ProjectFish_Source_ProjectFish_TeddyBearsSpawner_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectFish_Source_ProjectFish_TeddyBearsSpawner_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
