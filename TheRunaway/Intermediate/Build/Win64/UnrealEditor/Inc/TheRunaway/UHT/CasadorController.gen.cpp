// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheRunaway/CasadorController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCasadorController() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	THERUNAWAY_API UClass* Z_Construct_UClass_ACasadorController();
	THERUNAWAY_API UClass* Z_Construct_UClass_ACasadorController_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TheRunaway();
// End Cross Module References
	void ACasadorController::StaticRegisterNativesACasadorController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACasadorController);
	UClass* Z_Construct_UClass_ACasadorController_NoRegister()
	{
		return ACasadorController::StaticClass();
	}
	struct Z_Construct_UClass_ACasadorController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACasadorController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_TheRunaway,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACasadorController_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACasadorController_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "CasadorController.h" },
		{ "ModuleRelativePath", "CasadorController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACasadorController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACasadorController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACasadorController_Statics::ClassParams = {
		&ACasadorController::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACasadorController_Statics::Class_MetaDataParams), Z_Construct_UClass_ACasadorController_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ACasadorController()
	{
		if (!Z_Registration_Info_UClass_ACasadorController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACasadorController.OuterSingleton, Z_Construct_UClass_ACasadorController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACasadorController.OuterSingleton;
	}
	template<> THERUNAWAY_API UClass* StaticClass<ACasadorController>()
	{
		return ACasadorController::StaticClass();
	}
	ACasadorController::ACasadorController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACasadorController);
	ACasadorController::~ACasadorController() {}
	struct Z_CompiledInDeferFile_FID_TheRunaway_Source_TheRunaway_CasadorController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TheRunaway_Source_TheRunaway_CasadorController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACasadorController, ACasadorController::StaticClass, TEXT("ACasadorController"), &Z_Registration_Info_UClass_ACasadorController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACasadorController), 394023310U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TheRunaway_Source_TheRunaway_CasadorController_h_2584948985(TEXT("/Script/TheRunaway"),
		Z_CompiledInDeferFile_FID_TheRunaway_Source_TheRunaway_CasadorController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TheRunaway_Source_TheRunaway_CasadorController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS