// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "JumpThatActor/MinerPawn.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMinerPawn() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	JUMPTHATACTOR_API UClass* Z_Construct_UClass_AMinerPawn();
	JUMPTHATACTOR_API UClass* Z_Construct_UClass_AMinerPawn_NoRegister();
	UPackage* Z_Construct_UPackage__Script_JumpThatActor();
// End Cross Module References
	void AMinerPawn::StaticRegisterNativesAMinerPawn()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMinerPawn);
	UClass* Z_Construct_UClass_AMinerPawn_NoRegister()
	{
		return AMinerPawn::StaticClass();
	}
	struct Z_Construct_UClass_AMinerPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMinerPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_JumpThatActor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMinerPawn_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMinerPawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MinerPawn.h" },
		{ "ModuleRelativePath", "MinerPawn.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMinerPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMinerPawn>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMinerPawn_Statics::ClassParams = {
		&AMinerPawn::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMinerPawn_Statics::Class_MetaDataParams), Z_Construct_UClass_AMinerPawn_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AMinerPawn()
	{
		if (!Z_Registration_Info_UClass_AMinerPawn.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMinerPawn.OuterSingleton, Z_Construct_UClass_AMinerPawn_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMinerPawn.OuterSingleton;
	}
	template<> JUMPTHATACTOR_API UClass* StaticClass<AMinerPawn>()
	{
		return AMinerPawn::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMinerPawn);
	AMinerPawn::~AMinerPawn() {}
	struct Z_CompiledInDeferFile_FID_JumpThatActor_Source_JumpThatActor_MinerPawn_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_JumpThatActor_Source_JumpThatActor_MinerPawn_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMinerPawn, AMinerPawn::StaticClass, TEXT("AMinerPawn"), &Z_Registration_Info_UClass_AMinerPawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMinerPawn), 3633143993U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_JumpThatActor_Source_JumpThatActor_MinerPawn_h_2489889216(TEXT("/Script/JumpThatActor"),
		Z_CompiledInDeferFile_FID_JumpThatActor_Source_JumpThatActor_MinerPawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_JumpThatActor_Source_JumpThatActor_MinerPawn_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
