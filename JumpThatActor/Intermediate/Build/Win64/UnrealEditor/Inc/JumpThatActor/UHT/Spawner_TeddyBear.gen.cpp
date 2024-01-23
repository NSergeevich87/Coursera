// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "JumpThatActor/Spawner_TeddyBear.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpawner_TeddyBear() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	JUMPTHATACTOR_API UClass* Z_Construct_UClass_ASpawner_TeddyBear();
	JUMPTHATACTOR_API UClass* Z_Construct_UClass_ASpawner_TeddyBear_NoRegister();
	JUMPTHATACTOR_API UClass* Z_Construct_UClass_ATeddyBear_NoRegister();
	UPackage* Z_Construct_UPackage__Script_JumpThatActor();
// End Cross Module References
	DEFINE_FUNCTION(ASpawner_TeddyBear::execStartSpawn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartSpawn();
		P_NATIVE_END;
	}
	void ASpawner_TeddyBear::StaticRegisterNativesASpawner_TeddyBear()
	{
		UClass* Class = ASpawner_TeddyBear::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "StartSpawn", &ASpawner_TeddyBear::execStartSpawn },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASpawner_TeddyBear_StartSpawn_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpawner_TeddyBear_StartSpawn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Spawner_TeddyBear.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpawner_TeddyBear_StartSpawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpawner_TeddyBear, nullptr, "StartSpawn", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASpawner_TeddyBear_StartSpawn_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASpawner_TeddyBear_StartSpawn_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_ASpawner_TeddyBear_StartSpawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASpawner_TeddyBear_StartSpawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASpawner_TeddyBear);
	UClass* Z_Construct_UClass_ASpawner_TeddyBear_NoRegister()
	{
		return ASpawner_TeddyBear::StaticClass();
	}
	struct Z_Construct_UClass_ASpawner_TeddyBear_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Yellow_TB_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_Yellow_TB;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Purple_TB_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_Purple_TB;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Green_TB_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_Green_TB;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASpawner_TeddyBear_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_JumpThatActor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASpawner_TeddyBear_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ASpawner_TeddyBear_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASpawner_TeddyBear_StartSpawn, "StartSpawn" }, // 1895361699
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASpawner_TeddyBear_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawner_TeddyBear_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n*/" },
#endif
		{ "IncludePath", "Spawner_TeddyBear.h" },
		{ "ModuleRelativePath", "Spawner_TeddyBear.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawner_TeddyBear_Statics::NewProp_Yellow_TB_MetaData[] = {
		{ "Category", "TeddyBearBlueprints" },
		{ "MetaClass", "TeddyBear" },
		{ "ModuleRelativePath", "Spawner_TeddyBear.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASpawner_TeddyBear_Statics::NewProp_Yellow_TB = { "Yellow_TB", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpawner_TeddyBear, Yellow_TB), Z_Construct_UClass_UClass, Z_Construct_UClass_ATeddyBear_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASpawner_TeddyBear_Statics::NewProp_Yellow_TB_MetaData), Z_Construct_UClass_ASpawner_TeddyBear_Statics::NewProp_Yellow_TB_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawner_TeddyBear_Statics::NewProp_Purple_TB_MetaData[] = {
		{ "Category", "TeddyBearBlueprints" },
		{ "MetaClass", "TeddyBear" },
		{ "ModuleRelativePath", "Spawner_TeddyBear.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASpawner_TeddyBear_Statics::NewProp_Purple_TB = { "Purple_TB", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpawner_TeddyBear, Purple_TB), Z_Construct_UClass_UClass, Z_Construct_UClass_ATeddyBear_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASpawner_TeddyBear_Statics::NewProp_Purple_TB_MetaData), Z_Construct_UClass_ASpawner_TeddyBear_Statics::NewProp_Purple_TB_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawner_TeddyBear_Statics::NewProp_Green_TB_MetaData[] = {
		{ "Category", "TeddyBearBlueprints" },
		{ "MetaClass", "TeddyBear" },
		{ "ModuleRelativePath", "Spawner_TeddyBear.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASpawner_TeddyBear_Statics::NewProp_Green_TB = { "Green_TB", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASpawner_TeddyBear, Green_TB), Z_Construct_UClass_UClass, Z_Construct_UClass_ATeddyBear_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASpawner_TeddyBear_Statics::NewProp_Green_TB_MetaData), Z_Construct_UClass_ASpawner_TeddyBear_Statics::NewProp_Green_TB_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASpawner_TeddyBear_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawner_TeddyBear_Statics::NewProp_Yellow_TB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawner_TeddyBear_Statics::NewProp_Purple_TB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawner_TeddyBear_Statics::NewProp_Green_TB,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASpawner_TeddyBear_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpawner_TeddyBear>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASpawner_TeddyBear_Statics::ClassParams = {
		&ASpawner_TeddyBear::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASpawner_TeddyBear_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASpawner_TeddyBear_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASpawner_TeddyBear_Statics::Class_MetaDataParams), Z_Construct_UClass_ASpawner_TeddyBear_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASpawner_TeddyBear_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ASpawner_TeddyBear()
	{
		if (!Z_Registration_Info_UClass_ASpawner_TeddyBear.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASpawner_TeddyBear.OuterSingleton, Z_Construct_UClass_ASpawner_TeddyBear_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASpawner_TeddyBear.OuterSingleton;
	}
	template<> JUMPTHATACTOR_API UClass* StaticClass<ASpawner_TeddyBear>()
	{
		return ASpawner_TeddyBear::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASpawner_TeddyBear);
	ASpawner_TeddyBear::~ASpawner_TeddyBear() {}
	struct Z_CompiledInDeferFile_FID_JumpThatActor_Source_JumpThatActor_Spawner_TeddyBear_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_JumpThatActor_Source_JumpThatActor_Spawner_TeddyBear_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASpawner_TeddyBear, ASpawner_TeddyBear::StaticClass, TEXT("ASpawner_TeddyBear"), &Z_Registration_Info_UClass_ASpawner_TeddyBear, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASpawner_TeddyBear), 3859816734U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_JumpThatActor_Source_JumpThatActor_Spawner_TeddyBear_h_169458110(TEXT("/Script/JumpThatActor"),
		Z_CompiledInDeferFile_FID_JumpThatActor_Source_JumpThatActor_Spawner_TeddyBear_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_JumpThatActor_Source_JumpThatActor_Spawner_TeddyBear_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
