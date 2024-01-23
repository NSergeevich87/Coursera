// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "JumpThatActor/TeddyBear.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTeddyBear() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	JUMPTHATACTOR_API UClass* Z_Construct_UClass_ATeddyBear();
	JUMPTHATACTOR_API UClass* Z_Construct_UClass_ATeddyBear_NoRegister();
	UPackage* Z_Construct_UPackage__Script_JumpThatActor();
// End Cross Module References
	void ATeddyBear::StaticRegisterNativesATeddyBear()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATeddyBear);
	UClass* Z_Construct_UClass_ATeddyBear_NoRegister()
	{
		return ATeddyBear::StaticClass();
	}
	struct Z_Construct_UClass_ATeddyBear_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATeddyBear_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_JumpThatActor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATeddyBear_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATeddyBear_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n*/" },
#endif
		{ "IncludePath", "TeddyBear.h" },
		{ "ModuleRelativePath", "TeddyBear.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATeddyBear_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATeddyBear>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATeddyBear_Statics::ClassParams = {
		&ATeddyBear::StaticClass,
		"Engine",
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATeddyBear_Statics::Class_MetaDataParams), Z_Construct_UClass_ATeddyBear_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ATeddyBear()
	{
		if (!Z_Registration_Info_UClass_ATeddyBear.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATeddyBear.OuterSingleton, Z_Construct_UClass_ATeddyBear_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATeddyBear.OuterSingleton;
	}
	template<> JUMPTHATACTOR_API UClass* StaticClass<ATeddyBear>()
	{
		return ATeddyBear::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATeddyBear);
	ATeddyBear::~ATeddyBear() {}
	struct Z_CompiledInDeferFile_FID_JumpThatActor_Source_JumpThatActor_TeddyBear_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_JumpThatActor_Source_JumpThatActor_TeddyBear_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATeddyBear, ATeddyBear::StaticClass, TEXT("ATeddyBear"), &Z_Registration_Info_UClass_ATeddyBear, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATeddyBear), 1222449285U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_JumpThatActor_Source_JumpThatActor_TeddyBear_h_2895585476(TEXT("/Script/JumpThatActor"),
		Z_CompiledInDeferFile_FID_JumpThatActor_Source_JumpThatActor_TeddyBear_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_JumpThatActor_Source_JumpThatActor_TeddyBear_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
