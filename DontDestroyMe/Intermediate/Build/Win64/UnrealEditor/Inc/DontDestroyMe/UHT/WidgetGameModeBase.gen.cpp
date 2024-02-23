// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DontDestroyMe/WidgetGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWidgetGameModeBase() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	DONTDESTROYME_API UClass* Z_Construct_UClass_AWidgetGameModeBase();
	DONTDESTROYME_API UClass* Z_Construct_UClass_AWidgetGameModeBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DontDestroyMe();
// End Cross Module References
	void AWidgetGameModeBase::StaticRegisterNativesAWidgetGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWidgetGameModeBase);
	UClass* Z_Construct_UClass_AWidgetGameModeBase_NoRegister()
	{
		return AWidgetGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AWidgetGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ButtonWidget_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ButtonWidget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWidgetGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DontDestroyMe,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWidgetGameModeBase_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWidgetGameModeBase_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "WidgetGameModeBase.h" },
		{ "ModuleRelativePath", "WidgetGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWidgetGameModeBase_Statics::NewProp_ButtonWidget_MetaData[] = {
		{ "Category", "UI buttons" },
		{ "ModuleRelativePath", "WidgetGameModeBase.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AWidgetGameModeBase_Statics::NewProp_ButtonWidget = { "ButtonWidget", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWidgetGameModeBase, ButtonWidget), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWidgetGameModeBase_Statics::NewProp_ButtonWidget_MetaData), Z_Construct_UClass_AWidgetGameModeBase_Statics::NewProp_ButtonWidget_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWidgetGameModeBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWidgetGameModeBase_Statics::NewProp_ButtonWidget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWidgetGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWidgetGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AWidgetGameModeBase_Statics::ClassParams = {
		&AWidgetGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AWidgetGameModeBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AWidgetGameModeBase_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWidgetGameModeBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AWidgetGameModeBase_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWidgetGameModeBase_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AWidgetGameModeBase()
	{
		if (!Z_Registration_Info_UClass_AWidgetGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWidgetGameModeBase.OuterSingleton, Z_Construct_UClass_AWidgetGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AWidgetGameModeBase.OuterSingleton;
	}
	template<> DONTDESTROYME_API UClass* StaticClass<AWidgetGameModeBase>()
	{
		return AWidgetGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWidgetGameModeBase);
	AWidgetGameModeBase::~AWidgetGameModeBase() {}
	struct Z_CompiledInDeferFile_FID_DontDestroyMe_Source_DontDestroyMe_WidgetGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DontDestroyMe_Source_DontDestroyMe_WidgetGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AWidgetGameModeBase, AWidgetGameModeBase::StaticClass, TEXT("AWidgetGameModeBase"), &Z_Registration_Info_UClass_AWidgetGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWidgetGameModeBase), 3053563050U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DontDestroyMe_Source_DontDestroyMe_WidgetGameModeBase_h_3145503520(TEXT("/Script/DontDestroyMe"),
		Z_CompiledInDeferFile_FID_DontDestroyMe_Source_DontDestroyMe_WidgetGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DontDestroyMe_Source_DontDestroyMe_WidgetGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
