// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BearsGame/LootTeddyBearActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLootTeddyBearActor() {}
// Cross Module References
	BEARSGAME_API UClass* Z_Construct_UClass_ALootActor_NoRegister();
	BEARSGAME_API UClass* Z_Construct_UClass_ALootTeddyBearActor();
	BEARSGAME_API UClass* Z_Construct_UClass_ALootTeddyBearActor_NoRegister();
	BEARSGAME_API UClass* Z_Construct_UClass_ATeddyBearActor();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UPackage* Z_Construct_UPackage__Script_BearsGame();
// End Cross Module References
	void ALootTeddyBearActor::StaticRegisterNativesALootTeddyBearActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALootTeddyBearActor);
	UClass* Z_Construct_UClass_ALootTeddyBearActor_NoRegister()
	{
		return ALootTeddyBearActor::StaticClass();
	}
	struct Z_Construct_UClass_ALootTeddyBearActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UBadLoot_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_UBadLoot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UGoodLoot_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_UGoodLoot;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALootTeddyBearActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ATeddyBearActor,
		(UObject* (*)())Z_Construct_UPackage__Script_BearsGame,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALootTeddyBearActor_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALootTeddyBearActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LootTeddyBearActor.h" },
		{ "ModuleRelativePath", "LootTeddyBearActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALootTeddyBearActor_Statics::NewProp_UBadLoot_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Loot" },
		{ "ModuleRelativePath", "LootTeddyBearActor.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ALootTeddyBearActor_Statics::NewProp_UBadLoot = { "UBadLoot", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALootTeddyBearActor, UBadLoot), Z_Construct_UClass_UClass, Z_Construct_UClass_ALootActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALootTeddyBearActor_Statics::NewProp_UBadLoot_MetaData), Z_Construct_UClass_ALootTeddyBearActor_Statics::NewProp_UBadLoot_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALootTeddyBearActor_Statics::NewProp_UGoodLoot_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Loot" },
		{ "ModuleRelativePath", "LootTeddyBearActor.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ALootTeddyBearActor_Statics::NewProp_UGoodLoot = { "UGoodLoot", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALootTeddyBearActor, UGoodLoot), Z_Construct_UClass_UClass, Z_Construct_UClass_ALootActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALootTeddyBearActor_Statics::NewProp_UGoodLoot_MetaData), Z_Construct_UClass_ALootTeddyBearActor_Statics::NewProp_UGoodLoot_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALootTeddyBearActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALootTeddyBearActor_Statics::NewProp_UBadLoot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALootTeddyBearActor_Statics::NewProp_UGoodLoot,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALootTeddyBearActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALootTeddyBearActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ALootTeddyBearActor_Statics::ClassParams = {
		&ALootTeddyBearActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ALootTeddyBearActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ALootTeddyBearActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALootTeddyBearActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ALootTeddyBearActor_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALootTeddyBearActor_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ALootTeddyBearActor()
	{
		if (!Z_Registration_Info_UClass_ALootTeddyBearActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALootTeddyBearActor.OuterSingleton, Z_Construct_UClass_ALootTeddyBearActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ALootTeddyBearActor.OuterSingleton;
	}
	template<> BEARSGAME_API UClass* StaticClass<ALootTeddyBearActor>()
	{
		return ALootTeddyBearActor::StaticClass();
	}
	ALootTeddyBearActor::ALootTeddyBearActor() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALootTeddyBearActor);
	ALootTeddyBearActor::~ALootTeddyBearActor() {}
	struct Z_CompiledInDeferFile_FID_BearsGame_Source_BearsGame_LootTeddyBearActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BearsGame_Source_BearsGame_LootTeddyBearActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ALootTeddyBearActor, ALootTeddyBearActor::StaticClass, TEXT("ALootTeddyBearActor"), &Z_Registration_Info_UClass_ALootTeddyBearActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALootTeddyBearActor), 231212686U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BearsGame_Source_BearsGame_LootTeddyBearActor_h_2716389522(TEXT("/Script/BearsGame"),
		Z_CompiledInDeferFile_FID_BearsGame_Source_BearsGame_LootTeddyBearActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BearsGame_Source_BearsGame_LootTeddyBearActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
