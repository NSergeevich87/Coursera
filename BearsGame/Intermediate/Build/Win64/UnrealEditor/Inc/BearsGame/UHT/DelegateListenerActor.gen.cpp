// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BearsGame/DelegateListenerActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDelegateListenerActor() {}
// Cross Module References
	BEARSGAME_API UClass* Z_Construct_UClass_ADelegateListenerActor();
	BEARSGAME_API UClass* Z_Construct_UClass_ADelegateListenerActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EEndPlayReason();
	UPackage* Z_Construct_UPackage__Script_BearsGame();
// End Cross Module References
	DEFINE_FUNCTION(ADelegateListenerActor::execEndPlay)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_EndPlayReason);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EndPlay(EEndPlayReason::Type(Z_Param_EndPlayReason));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADelegateListenerActor::execReceiveMessage)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Message);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReceiveMessage(Z_Param_Message);
		P_NATIVE_END;
	}
	void ADelegateListenerActor::StaticRegisterNativesADelegateListenerActor()
	{
		UClass* Class = ADelegateListenerActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EndPlay", &ADelegateListenerActor::execEndPlay },
			{ "ReceiveMessage", &ADelegateListenerActor::execReceiveMessage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ADelegateListenerActor_EndPlay_Statics
	{
		struct DelegateListenerActor_eventEndPlay_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADelegateListenerActor_EndPlay_Statics::NewProp_EndPlayReason_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ADelegateListenerActor_EndPlay_Statics::NewProp_EndPlayReason = { "EndPlayReason", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DelegateListenerActor_eventEndPlay_Parms, EndPlayReason), Z_Construct_UEnum_Engine_EEndPlayReason, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADelegateListenerActor_EndPlay_Statics::NewProp_EndPlayReason_MetaData), Z_Construct_UFunction_ADelegateListenerActor_EndPlay_Statics::NewProp_EndPlayReason_MetaData) }; // 930452524
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADelegateListenerActor_EndPlay_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADelegateListenerActor_EndPlay_Statics::NewProp_EndPlayReason,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADelegateListenerActor_EndPlay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "DelegateListenerActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADelegateListenerActor_EndPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADelegateListenerActor, nullptr, "EndPlay", nullptr, nullptr, Z_Construct_UFunction_ADelegateListenerActor_EndPlay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADelegateListenerActor_EndPlay_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADelegateListenerActor_EndPlay_Statics::DelegateListenerActor_eventEndPlay_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADelegateListenerActor_EndPlay_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADelegateListenerActor_EndPlay_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADelegateListenerActor_EndPlay_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ADelegateListenerActor_EndPlay_Statics::DelegateListenerActor_eventEndPlay_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ADelegateListenerActor_EndPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADelegateListenerActor_EndPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADelegateListenerActor_ReceiveMessage_Statics
	{
		struct DelegateListenerActor_eventReceiveMessage_Parms
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
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ADelegateListenerActor_ReceiveMessage_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DelegateListenerActor_eventReceiveMessage_Parms, Message), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADelegateListenerActor_ReceiveMessage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADelegateListenerActor_ReceiveMessage_Statics::NewProp_Message,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADelegateListenerActor_ReceiveMessage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "DelegateListenerActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADelegateListenerActor_ReceiveMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADelegateListenerActor, nullptr, "ReceiveMessage", nullptr, nullptr, Z_Construct_UFunction_ADelegateListenerActor_ReceiveMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADelegateListenerActor_ReceiveMessage_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADelegateListenerActor_ReceiveMessage_Statics::DelegateListenerActor_eventReceiveMessage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADelegateListenerActor_ReceiveMessage_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADelegateListenerActor_ReceiveMessage_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADelegateListenerActor_ReceiveMessage_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ADelegateListenerActor_ReceiveMessage_Statics::DelegateListenerActor_eventReceiveMessage_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ADelegateListenerActor_ReceiveMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADelegateListenerActor_ReceiveMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADelegateListenerActor);
	UClass* Z_Construct_UClass_ADelegateListenerActor_NoRegister()
	{
		return ADelegateListenerActor::StaticClass();
	}
	struct Z_Construct_UClass_ADelegateListenerActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADelegateListenerActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_BearsGame,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADelegateListenerActor_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ADelegateListenerActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ADelegateListenerActor_EndPlay, "EndPlay" }, // 1034773865
		{ &Z_Construct_UFunction_ADelegateListenerActor_ReceiveMessage, "ReceiveMessage" }, // 1127359073
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADelegateListenerActor_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADelegateListenerActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DelegateListenerActor.h" },
		{ "ModuleRelativePath", "DelegateListenerActor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADelegateListenerActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADelegateListenerActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ADelegateListenerActor_Statics::ClassParams = {
		&ADelegateListenerActor::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADelegateListenerActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ADelegateListenerActor_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ADelegateListenerActor()
	{
		if (!Z_Registration_Info_UClass_ADelegateListenerActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADelegateListenerActor.OuterSingleton, Z_Construct_UClass_ADelegateListenerActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ADelegateListenerActor.OuterSingleton;
	}
	template<> BEARSGAME_API UClass* StaticClass<ADelegateListenerActor>()
	{
		return ADelegateListenerActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADelegateListenerActor);
	ADelegateListenerActor::~ADelegateListenerActor() {}
	struct Z_CompiledInDeferFile_FID_BearsGame_Source_BearsGame_DelegateListenerActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BearsGame_Source_BearsGame_DelegateListenerActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ADelegateListenerActor, ADelegateListenerActor::StaticClass, TEXT("ADelegateListenerActor"), &Z_Registration_Info_UClass_ADelegateListenerActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADelegateListenerActor), 937011553U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BearsGame_Source_BearsGame_DelegateListenerActor_h_1478299246(TEXT("/Script/BearsGame"),
		Z_CompiledInDeferFile_FID_BearsGame_Source_BearsGame_DelegateListenerActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BearsGame_Source_BearsGame_DelegateListenerActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
