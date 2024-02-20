// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectFish/GameHUD.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameHUD() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	ENGINE_API UClass* Z_Construct_UClass_UFont_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EEndPlayReason();
	PROJECTFISH_API UClass* Z_Construct_UClass_AGameHUD();
	PROJECTFISH_API UClass* Z_Construct_UClass_AGameHUD_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ProjectFish();
// End Cross Module References
	DEFINE_FUNCTION(AGameHUD::execEndPlay)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_EndPlayReason);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EndPlay(EEndPlayReason::Type(Z_Param_EndPlayReason));
		P_NATIVE_END;
	}
	void AGameHUD::StaticRegisterNativesAGameHUD()
	{
		UClass* Class = AGameHUD::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EndPlay", &AGameHUD::execEndPlay },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGameHUD_EndPlay_Statics
	{
		struct GameHUD_eventEndPlay_Parms
		{
			TEnumAsByte<EEndPlayReason::Type> EndPlayReason;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndPlayReason_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_EndPlayReason;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameHUD_EndPlay_Statics::NewProp_EndPlayReason_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AGameHUD_EndPlay_Statics::NewProp_EndPlayReason = { "EndPlayReason", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameHUD_eventEndPlay_Parms, EndPlayReason), Z_Construct_UEnum_Engine_EEndPlayReason, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameHUD_EndPlay_Statics::NewProp_EndPlayReason_MetaData), Z_Construct_UFunction_AGameHUD_EndPlay_Statics::NewProp_EndPlayReason_MetaData) }; // 930452524
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameHUD_EndPlay_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameHUD_EndPlay_Statics::NewProp_EndPlayReason,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGameHUD_EndPlay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameHUD.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameHUD_EndPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameHUD, nullptr, "EndPlay", nullptr, nullptr, Z_Construct_UFunction_AGameHUD_EndPlay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameHUD_EndPlay_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGameHUD_EndPlay_Statics::GameHUD_eventEndPlay_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameHUD_EndPlay_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGameHUD_EndPlay_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameHUD_EndPlay_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AGameHUD_EndPlay_Statics::GameHUD_eventEndPlay_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AGameHUD_EndPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameHUD_EndPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGameHUD);
	UClass* Z_Construct_UClass_AGameHUD_NoRegister()
	{
		return AGameHUD::StaticClass();
	}
	struct Z_Construct_UClass_AGameHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HudFont_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HudFont;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGameHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectFish,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGameHUD_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AGameHUD_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGameHUD_EndPlay, "EndPlay" }, // 1452512916
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGameHUD_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameHUD_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "GameHUD.h" },
		{ "ModuleRelativePath", "GameHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameHUD_Statics::NewProp_HudFont_MetaData[] = {
		{ "Category", "HUDFont" },
		{ "ModuleRelativePath", "GameHUD.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGameHUD_Statics::NewProp_HudFont = { "HudFont", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameHUD, HudFont), Z_Construct_UClass_UFont_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGameHUD_Statics::NewProp_HudFont_MetaData), Z_Construct_UClass_AGameHUD_Statics::NewProp_HudFont_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGameHUD_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameHUD_Statics::NewProp_HudFont,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGameHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGameHUD>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGameHUD_Statics::ClassParams = {
		&AGameHUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AGameHUD_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AGameHUD_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGameHUD_Statics::Class_MetaDataParams), Z_Construct_UClass_AGameHUD_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGameHUD_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AGameHUD()
	{
		if (!Z_Registration_Info_UClass_AGameHUD.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGameHUD.OuterSingleton, Z_Construct_UClass_AGameHUD_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGameHUD.OuterSingleton;
	}
	template<> PROJECTFISH_API UClass* StaticClass<AGameHUD>()
	{
		return AGameHUD::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGameHUD);
	AGameHUD::~AGameHUD() {}
	struct Z_CompiledInDeferFile_FID_ProjectFish_Source_ProjectFish_GameHUD_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectFish_Source_ProjectFish_GameHUD_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGameHUD, AGameHUD::StaticClass, TEXT("AGameHUD"), &Z_Registration_Info_UClass_AGameHUD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGameHUD), 2134866523U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectFish_Source_ProjectFish_GameHUD_h_4014507630(TEXT("/Script/ProjectFish"),
		Z_CompiledInDeferFile_FID_ProjectFish_Source_ProjectFish_GameHUD_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectFish_Source_ProjectFish_GameHUD_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
