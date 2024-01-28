// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TedPickup/TedController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTedController() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	TEDPICKUP_API UClass* Z_Construct_UClass_APickup_NoRegister();
	TEDPICKUP_API UClass* Z_Construct_UClass_ATedController();
	TEDPICKUP_API UClass* Z_Construct_UClass_ATedController_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TedPickup();
// End Cross Module References
	void ATedController::StaticRegisterNativesATedController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATedController);
	UClass* Z_Construct_UClass_ATedController_NoRegister()
	{
		return ATedController::StaticClass();
	}
	struct Z_Construct_UClass_ATedController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UPickup_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_UPickup;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Pickups_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Pickups_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Pickups;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATedController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_TedPickup,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATedController_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATedController_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "TedController.h" },
		{ "ModuleRelativePath", "TedController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATedController_Statics::NewProp_UPickup_MetaData[] = {
		{ "Category", "PickupBlueprints" },
		{ "MetaClass", "Pickup" },
		{ "ModuleRelativePath", "TedController.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATedController_Statics::NewProp_UPickup = { "UPickup", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATedController, UPickup), Z_Construct_UClass_UClass, Z_Construct_UClass_APickup_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATedController_Statics::NewProp_UPickup_MetaData), Z_Construct_UClass_ATedController_Statics::NewProp_UPickup_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATedController_Statics::NewProp_Pickups_Inner = { "Pickups", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_APickup_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATedController_Statics::NewProp_Pickups_MetaData[] = {
		{ "ModuleRelativePath", "TedController.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATedController_Statics::NewProp_Pickups = { "Pickups", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATedController, Pickups), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATedController_Statics::NewProp_Pickups_MetaData), Z_Construct_UClass_ATedController_Statics::NewProp_Pickups_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATedController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATedController_Statics::NewProp_UPickup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATedController_Statics::NewProp_Pickups_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATedController_Statics::NewProp_Pickups,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATedController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATedController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATedController_Statics::ClassParams = {
		&ATedController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ATedController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ATedController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATedController_Statics::Class_MetaDataParams), Z_Construct_UClass_ATedController_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATedController_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ATedController()
	{
		if (!Z_Registration_Info_UClass_ATedController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATedController.OuterSingleton, Z_Construct_UClass_ATedController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATedController.OuterSingleton;
	}
	template<> TEDPICKUP_API UClass* StaticClass<ATedController>()
	{
		return ATedController::StaticClass();
	}
	ATedController::ATedController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATedController);
	ATedController::~ATedController() {}
	struct Z_CompiledInDeferFile_FID_TedPickup_Source_TedPickup_TedController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TedPickup_Source_TedPickup_TedController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATedController, ATedController::StaticClass, TEXT("ATedController"), &Z_Registration_Info_UClass_ATedController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATedController), 1819247503U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TedPickup_Source_TedPickup_TedController_h_1938101422(TEXT("/Script/TedPickup"),
		Z_CompiledInDeferFile_FID_TedPickup_Source_TedPickup_TedController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TedPickup_Source_TedPickup_TedController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
