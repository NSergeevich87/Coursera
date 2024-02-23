// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectFish/FishPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFishPlayerController() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	PROJECTFISH_API UClass* Z_Construct_UClass_AFishPlayerController();
	PROJECTFISH_API UClass* Z_Construct_UClass_AFishPlayerController_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ProjectFish();
// End Cross Module References
	void AFishPlayerController::StaticRegisterNativesAFishPlayerController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFishPlayerController);
	UClass* Z_Construct_UClass_AFishPlayerController_NoRegister()
	{
		return AFishPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AFishPlayerController_Statics
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
	UObject* (*const Z_Construct_UClass_AFishPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectFish,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFishPlayerController_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFishPlayerController_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "FishPlayerController.h" },
		{ "ModuleRelativePath", "FishPlayerController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFishPlayerController_Statics::NewProp_PauseMenuWidgetClass_MetaData[] = {
		{ "Category", "Widgets" },
		{ "ModuleRelativePath", "FishPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFishPlayerController_Statics::NewProp_PauseMenuWidgetClass = { "PauseMenuWidgetClass", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFishPlayerController, PauseMenuWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFishPlayerController_Statics::NewProp_PauseMenuWidgetClass_MetaData), Z_Construct_UClass_AFishPlayerController_Statics::NewProp_PauseMenuWidgetClass_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFishPlayerController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFishPlayerController_Statics::NewProp_PauseMenuWidgetClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFishPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFishPlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AFishPlayerController_Statics::ClassParams = {
		&AFishPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AFishPlayerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AFishPlayerController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFishPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_AFishPlayerController_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFishPlayerController_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AFishPlayerController()
	{
		if (!Z_Registration_Info_UClass_AFishPlayerController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFishPlayerController.OuterSingleton, Z_Construct_UClass_AFishPlayerController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AFishPlayerController.OuterSingleton;
	}
	template<> PROJECTFISH_API UClass* StaticClass<AFishPlayerController>()
	{
		return AFishPlayerController::StaticClass();
	}
	AFishPlayerController::AFishPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFishPlayerController);
	AFishPlayerController::~AFishPlayerController() {}
	struct Z_CompiledInDeferFile_FID_ProjectFish_Source_ProjectFish_FishPlayerController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectFish_Source_ProjectFish_FishPlayerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AFishPlayerController, AFishPlayerController::StaticClass, TEXT("AFishPlayerController"), &Z_Registration_Info_UClass_AFishPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFishPlayerController), 231217802U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectFish_Source_ProjectFish_FishPlayerController_h_1642119769(TEXT("/Script/ProjectFish"),
		Z_CompiledInDeferFile_FID_ProjectFish_Source_ProjectFish_FishPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectFish_Source_ProjectFish_FishPlayerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
