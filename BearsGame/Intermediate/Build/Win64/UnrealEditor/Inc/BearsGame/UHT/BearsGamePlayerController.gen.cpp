// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BearsGame/BearsGamePlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBearsGamePlayerController() {}
// Cross Module References
	BEARSGAME_API UClass* Z_Construct_UClass_ABearsGamePlayerController();
	BEARSGAME_API UClass* Z_Construct_UClass_ABearsGamePlayerController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_BearsGame();
// End Cross Module References
	void ABearsGamePlayerController::StaticRegisterNativesABearsGamePlayerController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABearsGamePlayerController);
	UClass* Z_Construct_UClass_ABearsGamePlayerController_NoRegister()
	{
		return ABearsGamePlayerController::StaticClass();
	}
	struct Z_Construct_UClass_ABearsGamePlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABearsGamePlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_BearsGame,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABearsGamePlayerController_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABearsGamePlayerController_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "BearsGamePlayerController.h" },
		{ "ModuleRelativePath", "BearsGamePlayerController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABearsGamePlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABearsGamePlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABearsGamePlayerController_Statics::ClassParams = {
		&ABearsGamePlayerController::StaticClass,
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
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABearsGamePlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_ABearsGamePlayerController_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ABearsGamePlayerController()
	{
		if (!Z_Registration_Info_UClass_ABearsGamePlayerController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABearsGamePlayerController.OuterSingleton, Z_Construct_UClass_ABearsGamePlayerController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABearsGamePlayerController.OuterSingleton;
	}
	template<> BEARSGAME_API UClass* StaticClass<ABearsGamePlayerController>()
	{
		return ABearsGamePlayerController::StaticClass();
	}
	ABearsGamePlayerController::ABearsGamePlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABearsGamePlayerController);
	ABearsGamePlayerController::~ABearsGamePlayerController() {}
	struct Z_CompiledInDeferFile_FID_BearsGame_Source_BearsGame_BearsGamePlayerController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BearsGame_Source_BearsGame_BearsGamePlayerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABearsGamePlayerController, ABearsGamePlayerController::StaticClass, TEXT("ABearsGamePlayerController"), &Z_Registration_Info_UClass_ABearsGamePlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABearsGamePlayerController), 3745270515U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BearsGame_Source_BearsGame_BearsGamePlayerController_h_1754898459(TEXT("/Script/BearsGame"),
		Z_CompiledInDeferFile_FID_BearsGame_Source_BearsGame_BearsGamePlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BearsGame_Source_BearsGame_BearsGamePlayerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
