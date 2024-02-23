// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DontDestroyMe/WidgetPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWidgetPlayerController() {}
// Cross Module References
	DONTDESTROYME_API UClass* Z_Construct_UClass_AWidgetPlayerController();
	DONTDESTROYME_API UClass* Z_Construct_UClass_AWidgetPlayerController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_DontDestroyMe();
// End Cross Module References
	DEFINE_FUNCTION(AWidgetPlayerController::execDestroyPawn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DestroyPawn();
		P_NATIVE_END;
	}
	void AWidgetPlayerController::StaticRegisterNativesAWidgetPlayerController()
	{
		UClass* Class = AWidgetPlayerController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DestroyPawn", &AWidgetPlayerController::execDestroyPawn },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AWidgetPlayerController_DestroyPawn_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWidgetPlayerController_DestroyPawn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "WidgetPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWidgetPlayerController_DestroyPawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWidgetPlayerController, nullptr, "DestroyPawn", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWidgetPlayerController_DestroyPawn_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWidgetPlayerController_DestroyPawn_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AWidgetPlayerController_DestroyPawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWidgetPlayerController_DestroyPawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWidgetPlayerController);
	UClass* Z_Construct_UClass_AWidgetPlayerController_NoRegister()
	{
		return AWidgetPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AWidgetPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWidgetPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_DontDestroyMe,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWidgetPlayerController_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AWidgetPlayerController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AWidgetPlayerController_DestroyPawn, "DestroyPawn" }, // 2304946912
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWidgetPlayerController_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWidgetPlayerController_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "WidgetPlayerController.h" },
		{ "ModuleRelativePath", "WidgetPlayerController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWidgetPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWidgetPlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AWidgetPlayerController_Statics::ClassParams = {
		&AWidgetPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWidgetPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_AWidgetPlayerController_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AWidgetPlayerController()
	{
		if (!Z_Registration_Info_UClass_AWidgetPlayerController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWidgetPlayerController.OuterSingleton, Z_Construct_UClass_AWidgetPlayerController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AWidgetPlayerController.OuterSingleton;
	}
	template<> DONTDESTROYME_API UClass* StaticClass<AWidgetPlayerController>()
	{
		return AWidgetPlayerController::StaticClass();
	}
	AWidgetPlayerController::AWidgetPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWidgetPlayerController);
	AWidgetPlayerController::~AWidgetPlayerController() {}
	struct Z_CompiledInDeferFile_FID_DontDestroyMe_Source_DontDestroyMe_WidgetPlayerController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DontDestroyMe_Source_DontDestroyMe_WidgetPlayerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AWidgetPlayerController, AWidgetPlayerController::StaticClass, TEXT("AWidgetPlayerController"), &Z_Registration_Info_UClass_AWidgetPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWidgetPlayerController), 3943949859U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DontDestroyMe_Source_DontDestroyMe_WidgetPlayerController_h_388749895(TEXT("/Script/DontDestroyMe"),
		Z_CompiledInDeferFile_FID_DontDestroyMe_Source_DontDestroyMe_WidgetPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DontDestroyMe_Source_DontDestroyMe_WidgetPlayerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
