// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BearsGame/MulticastDelegateListenerActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMulticastDelegateListenerActor() {}
// Cross Module References
	BEARSGAME_API UClass* Z_Construct_UClass_AMulticastDelegateListenerActor();
	BEARSGAME_API UClass* Z_Construct_UClass_AMulticastDelegateListenerActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EEndPlayReason();
	UPackage* Z_Construct_UPackage__Script_BearsGame();
// End Cross Module References
	DEFINE_FUNCTION(AMulticastDelegateListenerActor::execEndPlay)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_EndPlayReason);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EndPlay(EEndPlayReason::Type(Z_Param_EndPlayReason));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMulticastDelegateListenerActor::execReseiveMessage)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Message);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReseiveMessage(Z_Param_Message);
		P_NATIVE_END;
	}
	void AMulticastDelegateListenerActor::StaticRegisterNativesAMulticastDelegateListenerActor()
	{
		UClass* Class = AMulticastDelegateListenerActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EndPlay", &AMulticastDelegateListenerActor::execEndPlay },
			{ "ReseiveMessage", &AMulticastDelegateListenerActor::execReseiveMessage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMulticastDelegateListenerActor_EndPlay_Statics
	{
		struct MulticastDelegateListenerActor_eventEndPlay_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMulticastDelegateListenerActor_EndPlay_Statics::NewProp_EndPlayReason_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AMulticastDelegateListenerActor_EndPlay_Statics::NewProp_EndPlayReason = { "EndPlayReason", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MulticastDelegateListenerActor_eventEndPlay_Parms, EndPlayReason), Z_Construct_UEnum_Engine_EEndPlayReason, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMulticastDelegateListenerActor_EndPlay_Statics::NewProp_EndPlayReason_MetaData), Z_Construct_UFunction_AMulticastDelegateListenerActor_EndPlay_Statics::NewProp_EndPlayReason_MetaData) }; // 930452524
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMulticastDelegateListenerActor_EndPlay_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMulticastDelegateListenerActor_EndPlay_Statics::NewProp_EndPlayReason,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMulticastDelegateListenerActor_EndPlay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MulticastDelegateListenerActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMulticastDelegateListenerActor_EndPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMulticastDelegateListenerActor, nullptr, "EndPlay", nullptr, nullptr, Z_Construct_UFunction_AMulticastDelegateListenerActor_EndPlay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMulticastDelegateListenerActor_EndPlay_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMulticastDelegateListenerActor_EndPlay_Statics::MulticastDelegateListenerActor_eventEndPlay_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMulticastDelegateListenerActor_EndPlay_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMulticastDelegateListenerActor_EndPlay_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMulticastDelegateListenerActor_EndPlay_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMulticastDelegateListenerActor_EndPlay_Statics::MulticastDelegateListenerActor_eventEndPlay_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMulticastDelegateListenerActor_EndPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMulticastDelegateListenerActor_EndPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMulticastDelegateListenerActor_ReseiveMessage_Statics
	{
		struct MulticastDelegateListenerActor_eventReseiveMessage_Parms
		{
			FString Message;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMulticastDelegateListenerActor_ReseiveMessage_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MulticastDelegateListenerActor_eventReseiveMessage_Parms, Message), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMulticastDelegateListenerActor_ReseiveMessage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMulticastDelegateListenerActor_ReseiveMessage_Statics::NewProp_Message,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMulticastDelegateListenerActor_ReseiveMessage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MulticastDelegateListenerActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMulticastDelegateListenerActor_ReseiveMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMulticastDelegateListenerActor, nullptr, "ReseiveMessage", nullptr, nullptr, Z_Construct_UFunction_AMulticastDelegateListenerActor_ReseiveMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMulticastDelegateListenerActor_ReseiveMessage_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMulticastDelegateListenerActor_ReseiveMessage_Statics::MulticastDelegateListenerActor_eventReseiveMessage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMulticastDelegateListenerActor_ReseiveMessage_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMulticastDelegateListenerActor_ReseiveMessage_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMulticastDelegateListenerActor_ReseiveMessage_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AMulticastDelegateListenerActor_ReseiveMessage_Statics::MulticastDelegateListenerActor_eventReseiveMessage_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AMulticastDelegateListenerActor_ReseiveMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMulticastDelegateListenerActor_ReseiveMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMulticastDelegateListenerActor);
	UClass* Z_Construct_UClass_AMulticastDelegateListenerActor_NoRegister()
	{
		return AMulticastDelegateListenerActor::StaticClass();
	}
	struct Z_Construct_UClass_AMulticastDelegateListenerActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMulticastDelegateListenerActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_BearsGame,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMulticastDelegateListenerActor_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AMulticastDelegateListenerActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMulticastDelegateListenerActor_EndPlay, "EndPlay" }, // 2496450903
		{ &Z_Construct_UFunction_AMulticastDelegateListenerActor_ReseiveMessage, "ReseiveMessage" }, // 771632286
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMulticastDelegateListenerActor_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMulticastDelegateListenerActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MulticastDelegateListenerActor.h" },
		{ "ModuleRelativePath", "MulticastDelegateListenerActor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMulticastDelegateListenerActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMulticastDelegateListenerActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMulticastDelegateListenerActor_Statics::ClassParams = {
		&AMulticastDelegateListenerActor::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMulticastDelegateListenerActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AMulticastDelegateListenerActor_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AMulticastDelegateListenerActor()
	{
		if (!Z_Registration_Info_UClass_AMulticastDelegateListenerActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMulticastDelegateListenerActor.OuterSingleton, Z_Construct_UClass_AMulticastDelegateListenerActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMulticastDelegateListenerActor.OuterSingleton;
	}
	template<> BEARSGAME_API UClass* StaticClass<AMulticastDelegateListenerActor>()
	{
		return AMulticastDelegateListenerActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMulticastDelegateListenerActor);
	AMulticastDelegateListenerActor::~AMulticastDelegateListenerActor() {}
	struct Z_CompiledInDeferFile_FID_BearsGame_Source_BearsGame_MulticastDelegateListenerActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BearsGame_Source_BearsGame_MulticastDelegateListenerActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMulticastDelegateListenerActor, AMulticastDelegateListenerActor::StaticClass, TEXT("AMulticastDelegateListenerActor"), &Z_Registration_Info_UClass_AMulticastDelegateListenerActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMulticastDelegateListenerActor), 849967644U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BearsGame_Source_BearsGame_MulticastDelegateListenerActor_h_2691488741(TEXT("/Script/BearsGame"),
		Z_CompiledInDeferFile_FID_BearsGame_Source_BearsGame_MulticastDelegateListenerActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BearsGame_Source_BearsGame_MulticastDelegateListenerActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
