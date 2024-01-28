// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TedController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TEDPICKUP_TedController_generated_h
#error "TedController.generated.h already included, missing '#pragma once' in TedController.h"
#endif
#define TEDPICKUP_TedController_generated_h

#define FID_TedPickup_Source_TedPickup_TedController_h_16_SPARSE_DATA
#define FID_TedPickup_Source_TedPickup_TedController_h_16_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_TedPickup_Source_TedPickup_TedController_h_16_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_TedPickup_Source_TedPickup_TedController_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_TedPickup_Source_TedPickup_TedController_h_16_ACCESSORS
#define FID_TedPickup_Source_TedPickup_TedController_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATedController(); \
	friend struct Z_Construct_UClass_ATedController_Statics; \
public: \
	DECLARE_CLASS(ATedController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TedPickup"), NO_API) \
	DECLARE_SERIALIZER(ATedController)


#define FID_TedPickup_Source_TedPickup_TedController_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATedController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATedController(ATedController&&); \
	NO_API ATedController(const ATedController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATedController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATedController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATedController) \
	NO_API virtual ~ATedController();


#define FID_TedPickup_Source_TedPickup_TedController_h_13_PROLOG
#define FID_TedPickup_Source_TedPickup_TedController_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TedPickup_Source_TedPickup_TedController_h_16_SPARSE_DATA \
	FID_TedPickup_Source_TedPickup_TedController_h_16_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_TedPickup_Source_TedPickup_TedController_h_16_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_TedPickup_Source_TedPickup_TedController_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_TedPickup_Source_TedPickup_TedController_h_16_ACCESSORS \
	FID_TedPickup_Source_TedPickup_TedController_h_16_INCLASS_NO_PURE_DECLS \
	FID_TedPickup_Source_TedPickup_TedController_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TEDPICKUP_API UClass* StaticClass<class ATedController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TedPickup_Source_TedPickup_TedController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
