// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "JumpThatActor/DestructorGM.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDestructorGM() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	JUMPTHATACTOR_API UClass* Z_Construct_UClass_ADestructorGM();
	JUMPTHATACTOR_API UClass* Z_Construct_UClass_ADestructorGM_NoRegister();
	UPackage* Z_Construct_UPackage__Script_JumpThatActor();
// End Cross Module References
	void ADestructorGM::StaticRegisterNativesADestructorGM()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADestructorGM);
	UClass* Z_Construct_UClass_ADestructorGM_NoRegister()
	{
		return ADestructorGM::StaticClass();
	}
	struct Z_Construct_UClass_ADestructorGM_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADestructorGM_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_JumpThatActor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADestructorGM_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADestructorGM_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n*/" },
#endif
		{ "IncludePath", "DestructorGM.h" },
		{ "ModuleRelativePath", "DestructorGM.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADestructorGM_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADestructorGM>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ADestructorGM_Statics::ClassParams = {
		&ADestructorGM::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADestructorGM_Statics::Class_MetaDataParams), Z_Construct_UClass_ADestructorGM_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ADestructorGM()
	{
		if (!Z_Registration_Info_UClass_ADestructorGM.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADestructorGM.OuterSingleton, Z_Construct_UClass_ADestructorGM_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ADestructorGM.OuterSingleton;
	}
	template<> JUMPTHATACTOR_API UClass* StaticClass<ADestructorGM>()
	{
		return ADestructorGM::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADestructorGM);
	ADestructorGM::~ADestructorGM() {}
	struct Z_CompiledInDeferFile_FID_JumpThatActor_Source_JumpThatActor_DestructorGM_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_JumpThatActor_Source_JumpThatActor_DestructorGM_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ADestructorGM, ADestructorGM::StaticClass, TEXT("ADestructorGM"), &Z_Registration_Info_UClass_ADestructorGM, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADestructorGM), 2219869287U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_JumpThatActor_Source_JumpThatActor_DestructorGM_h_2033455247(TEXT("/Script/JumpThatActor"),
		Z_CompiledInDeferFile_FID_JumpThatActor_Source_JumpThatActor_DestructorGM_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_JumpThatActor_Source_JumpThatActor_DestructorGM_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
