// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "JumpThatActor/Jumper.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJumper() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	JUMPTHATACTOR_API UClass* Z_Construct_UClass_AJumper();
	JUMPTHATACTOR_API UClass* Z_Construct_UClass_AJumper_NoRegister();
	UPackage* Z_Construct_UPackage__Script_JumpThatActor();
// End Cross Module References
	DEFINE_FUNCTION(AJumper::execJump)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Jump();
		P_NATIVE_END;
	}
	void AJumper::StaticRegisterNativesAJumper()
	{
		UClass* Class = AJumper::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Jump", &AJumper::execJump },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AJumper_Jump_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AJumper_Jump_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Jumps the Actor\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Jumper.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Jumps the Actor" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AJumper_Jump_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AJumper, nullptr, "Jump", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AJumper_Jump_Statics::Function_MetaDataParams), Z_Construct_UFunction_AJumper_Jump_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AJumper_Jump()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AJumper_Jump_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AJumper);
	UClass* Z_Construct_UClass_AJumper_NoRegister()
	{
		return AJumper::StaticClass();
	}
	struct Z_Construct_UClass_AJumper_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AJumper_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_JumpThatActor,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AJumper_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AJumper_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AJumper_Jump, "Jump" }, // 3371847251
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AJumper_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AJumper_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n*/" },
#endif
		{ "IncludePath", "Jumper.h" },
		{ "ModuleRelativePath", "Jumper.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AJumper_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AJumper>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AJumper_Statics::ClassParams = {
		&AJumper::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AJumper_Statics::Class_MetaDataParams), Z_Construct_UClass_AJumper_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AJumper()
	{
		if (!Z_Registration_Info_UClass_AJumper.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AJumper.OuterSingleton, Z_Construct_UClass_AJumper_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AJumper.OuterSingleton;
	}
	template<> JUMPTHATACTOR_API UClass* StaticClass<AJumper>()
	{
		return AJumper::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AJumper);
	AJumper::~AJumper() {}
	struct Z_CompiledInDeferFile_FID_JumpThatActor_Source_JumpThatActor_Jumper_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_JumpThatActor_Source_JumpThatActor_Jumper_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AJumper, AJumper::StaticClass, TEXT("AJumper"), &Z_Registration_Info_UClass_AJumper, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AJumper), 2175975749U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_JumpThatActor_Source_JumpThatActor_Jumper_h_1164828153(TEXT("/Script/JumpThatActor"),
		Z_CompiledInDeferFile_FID_JumpThatActor_Source_JumpThatActor_Jumper_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_JumpThatActor_Source_JumpThatActor_Jumper_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
