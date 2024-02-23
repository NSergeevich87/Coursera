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
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PauseMenuWidgetClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_PauseMenuWidgetClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
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
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABearsGamePlayerController_Statics::NewProp_PauseMenuWidgetClass_MetaData[] = {
		{ "Category", "Widgets" },
		{ "ModuleRelativePath", "BearsGamePlayerController.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABearsGamePlayerController_Statics::NewProp_PauseMenuWidgetClass = { "PauseMenuWidgetClass", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABearsGamePlayerController, PauseMenuWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABearsGamePlayerController_Statics::NewProp_PauseMenuWidgetClass_MetaData), Z_Construct_UClass_ABearsGamePlayerController_Statics::NewProp_PauseMenuWidgetClass_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABearsGamePlayerController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABearsGamePlayerController_Statics::NewProp_PauseMenuWidgetClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABearsGamePlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABearsGamePlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABearsGamePlayerController_Statics::ClassParams = {
		&ABearsGamePlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABearsGamePlayerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABearsGamePlayerController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABearsGamePlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_ABearsGamePlayerController_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABearsGamePlayerController_Statics::PropPointers) < 2048);
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
		{ Z_Construct_UClass_ABearsGamePlayerController, ABearsGamePlayerController::StaticClass, TEXT("ABearsGamePlayerController"), &Z_Registration_Info_UClass_ABearsGamePlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABearsGamePlayerController), 2790485564U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BearsGame_Source_BearsGame_BearsGamePlayerController_h_1370799457(TEXT("/Script/BearsGame"),
		Z_CompiledInDeferFile_FID_BearsGame_Source_BearsGame_BearsGamePlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BearsGame_Source_BearsGame_BearsGamePlayerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
