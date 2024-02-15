// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BearsGame/BearsGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBearsGameModeBase() {}
// Cross Module References
	BEARSGAME_API UClass* Z_Construct_UClass_ABearsGameModeBase();
	BEARSGAME_API UClass* Z_Construct_UClass_ABearsGameModeBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_BearsGame();
// End Cross Module References
	void ABearsGameModeBase::StaticRegisterNativesABearsGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABearsGameModeBase);
	UClass* Z_Construct_UClass_ABearsGameModeBase_NoRegister()
	{
		return ABearsGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ABearsGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABearsGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_BearsGame,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABearsGameModeBase_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABearsGameModeBase_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "BearsGameModeBase.h" },
		{ "ModuleRelativePath", "BearsGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABearsGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABearsGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABearsGameModeBase_Statics::ClassParams = {
		&ABearsGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABearsGameModeBase_Statics::Class_MetaDataParams), Z_Construct_UClass_ABearsGameModeBase_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ABearsGameModeBase()
	{
		if (!Z_Registration_Info_UClass_ABearsGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABearsGameModeBase.OuterSingleton, Z_Construct_UClass_ABearsGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABearsGameModeBase.OuterSingleton;
	}
	template<> BEARSGAME_API UClass* StaticClass<ABearsGameModeBase>()
	{
		return ABearsGameModeBase::StaticClass();
	}
	ABearsGameModeBase::ABearsGameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABearsGameModeBase);
	ABearsGameModeBase::~ABearsGameModeBase() {}
	struct Z_CompiledInDeferFile_FID_BearsGame_Source_BearsGame_BearsGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BearsGame_Source_BearsGame_BearsGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABearsGameModeBase, ABearsGameModeBase::StaticClass, TEXT("ABearsGameModeBase"), &Z_Registration_Info_UClass_ABearsGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABearsGameModeBase), 3163773367U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BearsGame_Source_BearsGame_BearsGameModeBase_h_3615281090(TEXT("/Script/BearsGame"),
		Z_CompiledInDeferFile_FID_BearsGame_Source_BearsGame_BearsGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BearsGame_Source_BearsGame_BearsGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
