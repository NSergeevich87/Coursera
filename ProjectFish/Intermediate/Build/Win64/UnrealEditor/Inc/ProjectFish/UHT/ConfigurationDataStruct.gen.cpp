// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectFish/ConfigurationDataStruct.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConfigurationDataStruct() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	PROJECTFISH_API UScriptStruct* Z_Construct_UScriptStruct_FConfigurationDataStruct();
	UPackage* Z_Construct_UPackage__Script_ProjectFish();
// End Cross Module References

static_assert(std::is_polymorphic<FConfigurationDataStruct>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FConfigurationDataStruct cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConfigurationDataStruct;
class UScriptStruct* FConfigurationDataStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConfigurationDataStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConfigurationDataStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConfigurationDataStruct, (UObject*)Z_Construct_UPackage__Script_ProjectFish(), TEXT("ConfigurationDataStruct"));
	}
	return Z_Registration_Info_UScriptStruct_ConfigurationDataStruct.OuterSingleton;
}
template<> PROJECTFISH_API UScriptStruct* StaticStruct<FConfigurationDataStruct>()
{
	return FConfigurationDataStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FishMoveAmountPerSecond_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FishMoveAmountPerSecond;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FishForceMagnitude_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FishForceMagnitude;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TeddyMoveAmountPerSecond_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TeddyMoveAmountPerSecond;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinSpawnDelaySeconds_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinSpawnDelaySeconds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxSpawnDelaySeconds_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxSpawnDelaySeconds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "ConfigurationDataStruct.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConfigurationDataStruct>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_FishMoveAmountPerSecond_MetaData[] = {
		{ "Category", "Configuration Data Struct" },
		{ "ModuleRelativePath", "ConfigurationDataStruct.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_FishMoveAmountPerSecond = { "FishMoveAmountPerSecond", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConfigurationDataStruct, FishMoveAmountPerSecond), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_FishMoveAmountPerSecond_MetaData), Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_FishMoveAmountPerSecond_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_FishForceMagnitude_MetaData[] = {
		{ "Category", "Configuration Data Struct" },
		{ "ModuleRelativePath", "ConfigurationDataStruct.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_FishForceMagnitude = { "FishForceMagnitude", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConfigurationDataStruct, FishForceMagnitude), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_FishForceMagnitude_MetaData), Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_FishForceMagnitude_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_TeddyMoveAmountPerSecond_MetaData[] = {
		{ "Category", "Configuration Data Struct" },
		{ "ModuleRelativePath", "ConfigurationDataStruct.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_TeddyMoveAmountPerSecond = { "TeddyMoveAmountPerSecond", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConfigurationDataStruct, TeddyMoveAmountPerSecond), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_TeddyMoveAmountPerSecond_MetaData), Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_TeddyMoveAmountPerSecond_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_MinSpawnDelaySeconds_MetaData[] = {
		{ "Category", "Configuration Data Struct" },
		{ "ModuleRelativePath", "ConfigurationDataStruct.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_MinSpawnDelaySeconds = { "MinSpawnDelaySeconds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConfigurationDataStruct, MinSpawnDelaySeconds), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_MinSpawnDelaySeconds_MetaData), Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_MinSpawnDelaySeconds_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_MaxSpawnDelaySeconds_MetaData[] = {
		{ "Category", "Configuration Data Struct" },
		{ "ModuleRelativePath", "ConfigurationDataStruct.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_MaxSpawnDelaySeconds = { "MaxSpawnDelaySeconds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FConfigurationDataStruct, MaxSpawnDelaySeconds), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_MaxSpawnDelaySeconds_MetaData), Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_MaxSpawnDelaySeconds_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_FishMoveAmountPerSecond,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_FishForceMagnitude,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_TeddyMoveAmountPerSecond,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_MinSpawnDelaySeconds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewProp_MaxSpawnDelaySeconds,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectFish,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"ConfigurationDataStruct",
		Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::PropPointers),
		sizeof(FConfigurationDataStruct),
		alignof(FConfigurationDataStruct),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FConfigurationDataStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_ConfigurationDataStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConfigurationDataStruct.InnerSingleton, Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConfigurationDataStruct.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_ProjectFish_Source_ProjectFish_ConfigurationDataStruct_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectFish_Source_ProjectFish_ConfigurationDataStruct_h_Statics::ScriptStructInfo[] = {
		{ FConfigurationDataStruct::StaticStruct, Z_Construct_UScriptStruct_FConfigurationDataStruct_Statics::NewStructOps, TEXT("ConfigurationDataStruct"), &Z_Registration_Info_UScriptStruct_ConfigurationDataStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConfigurationDataStruct), 3085908647U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectFish_Source_ProjectFish_ConfigurationDataStruct_h_2330053647(TEXT("/Script/ProjectFish"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_ProjectFish_Source_ProjectFish_ConfigurationDataStruct_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectFish_Source_ProjectFish_ConfigurationDataStruct_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
