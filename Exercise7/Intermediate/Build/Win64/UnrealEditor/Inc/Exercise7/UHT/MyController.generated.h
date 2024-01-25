// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MyController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef EXERCISE7_MyController_generated_h
#error "MyController.generated.h already included, missing '#pragma once' in MyController.h"
#endif
#define EXERCISE7_MyController_generated_h

#define FID_Exercise7_Source_Exercise7_MyController_h_15_SPARSE_DATA
#define FID_Exercise7_Source_Exercise7_MyController_h_15_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Exercise7_Source_Exercise7_MyController_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Exercise7_Source_Exercise7_MyController_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Exercise7_Source_Exercise7_MyController_h_15_ACCESSORS
#define FID_Exercise7_Source_Exercise7_MyController_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyController(); \
	friend struct Z_Construct_UClass_AMyController_Statics; \
public: \
	DECLARE_CLASS(AMyController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Exercise7"), NO_API) \
	DECLARE_SERIALIZER(AMyController)


#define FID_Exercise7_Source_Exercise7_MyController_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyController(AMyController&&); \
	NO_API AMyController(const AMyController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyController) \
	NO_API virtual ~AMyController();


#define FID_Exercise7_Source_Exercise7_MyController_h_12_PROLOG
#define FID_Exercise7_Source_Exercise7_MyController_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Exercise7_Source_Exercise7_MyController_h_15_SPARSE_DATA \
	FID_Exercise7_Source_Exercise7_MyController_h_15_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Exercise7_Source_Exercise7_MyController_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Exercise7_Source_Exercise7_MyController_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Exercise7_Source_Exercise7_MyController_h_15_ACCESSORS \
	FID_Exercise7_Source_Exercise7_MyController_h_15_INCLASS_NO_PURE_DECLS \
	FID_Exercise7_Source_Exercise7_MyController_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EXERCISE7_API UClass* StaticClass<class AMyController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Exercise7_Source_Exercise7_MyController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
