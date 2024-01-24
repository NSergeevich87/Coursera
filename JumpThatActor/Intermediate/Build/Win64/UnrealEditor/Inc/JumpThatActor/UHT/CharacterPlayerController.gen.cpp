// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "JumpThatActor/CharacterPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterPlayerController() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	JUMPTHATACTOR_API UClass* Z_Construct_UClass_ACharacterPlayerController();
	JUMPTHATACTOR_API UClass* Z_Construct_UClass_ACharacterPlayerController_NoRegister();
	JUMPTHATACTOR_API UClass* Z_Construct_UClass_ATeddyBear_NoRegister();
	UPackage* Z_Construct_UPackage__Script_JumpThatActor();
// End Cross Module References
	void ACharacterPlayerController::StaticRegisterNativesACharacterPlayerController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACharacterPlayerController);
	UClass* Z_Construct_UClass_ACharacterPlayerController_NoRegister()
	{
		return ACharacterPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_ACharacterPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TeddyBear_Yellow_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_TeddyBear_Yellow;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TeddyBear_Purple_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_TeddyBear_Purple;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TeddyBear_Green_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_TeddyBear_Green;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACharacterPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_JumpThatActor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterPlayerController_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterPlayerController_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "CharacterPlayerController.h" },
		{ "ModuleRelativePath", "CharacterPlayerController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterPlayerController_Statics::NewProp_TeddyBear_Yellow_MetaData[] = {
		{ "Category", "TeddyBearBlueprints" },
		{ "MetaClass", "TeddyBear" },
		{ "ModuleRelativePath", "CharacterPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACharacterPlayerController_Statics::NewProp_TeddyBear_Yellow = { "TeddyBear_Yellow", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACharacterPlayerController, TeddyBear_Yellow), Z_Construct_UClass_UClass, Z_Construct_UClass_ATeddyBear_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterPlayerController_Statics::NewProp_TeddyBear_Yellow_MetaData), Z_Construct_UClass_ACharacterPlayerController_Statics::NewProp_TeddyBear_Yellow_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterPlayerController_Statics::NewProp_TeddyBear_Purple_MetaData[] = {
		{ "Category", "TeddyBearBlueprints" },
		{ "MetaClass", "TeddyBear" },
		{ "ModuleRelativePath", "CharacterPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACharacterPlayerController_Statics::NewProp_TeddyBear_Purple = { "TeddyBear_Purple", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACharacterPlayerController, TeddyBear_Purple), Z_Construct_UClass_UClass, Z_Construct_UClass_ATeddyBear_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterPlayerController_Statics::NewProp_TeddyBear_Purple_MetaData), Z_Construct_UClass_ACharacterPlayerController_Statics::NewProp_TeddyBear_Purple_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACharacterPlayerController_Statics::NewProp_TeddyBear_Green_MetaData[] = {
		{ "Category", "TeddyBearBlueprints" },
		{ "MetaClass", "TeddyBear" },
		{ "ModuleRelativePath", "CharacterPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACharacterPlayerController_Statics::NewProp_TeddyBear_Green = { "TeddyBear_Green", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACharacterPlayerController, TeddyBear_Green), Z_Construct_UClass_UClass, Z_Construct_UClass_ATeddyBear_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterPlayerController_Statics::NewProp_TeddyBear_Green_MetaData), Z_Construct_UClass_ACharacterPlayerController_Statics::NewProp_TeddyBear_Green_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACharacterPlayerController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterPlayerController_Statics::NewProp_TeddyBear_Yellow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterPlayerController_Statics::NewProp_TeddyBear_Purple,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterPlayerController_Statics::NewProp_TeddyBear_Green,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACharacterPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACharacterPlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACharacterPlayerController_Statics::ClassParams = {
		&ACharacterPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACharacterPlayerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterPlayerController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_ACharacterPlayerController_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterPlayerController_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ACharacterPlayerController()
	{
		if (!Z_Registration_Info_UClass_ACharacterPlayerController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACharacterPlayerController.OuterSingleton, Z_Construct_UClass_ACharacterPlayerController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACharacterPlayerController.OuterSingleton;
	}
	template<> JUMPTHATACTOR_API UClass* StaticClass<ACharacterPlayerController>()
	{
		return ACharacterPlayerController::StaticClass();
	}
	ACharacterPlayerController::ACharacterPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACharacterPlayerController);
	ACharacterPlayerController::~ACharacterPlayerController() {}
	struct Z_CompiledInDeferFile_FID_JumpThatActor_Source_JumpThatActor_CharacterPlayerController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_JumpThatActor_Source_JumpThatActor_CharacterPlayerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACharacterPlayerController, ACharacterPlayerController::StaticClass, TEXT("ACharacterPlayerController"), &Z_Registration_Info_UClass_ACharacterPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACharacterPlayerController), 3932613804U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_JumpThatActor_Source_JumpThatActor_CharacterPlayerController_h_916740846(TEXT("/Script/JumpThatActor"),
		Z_CompiledInDeferFile_FID_JumpThatActor_Source_JumpThatActor_CharacterPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_JumpThatActor_Source_JumpThatActor_CharacterPlayerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
