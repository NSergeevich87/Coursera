// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FishPlayerController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECTFISH_FishPlayerController_generated_h
#error "FishPlayerController.generated.h already included, missing '#pragma once' in FishPlayerController.h"
#endif
#define PROJECTFISH_FishPlayerController_generated_h

#define FID_ProjectFish_Source_ProjectFish_FishPlayerController_h_15_SPARSE_DATA
#define FID_ProjectFish_Source_ProjectFish_FishPlayerController_h_15_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_ProjectFish_Source_ProjectFish_FishPlayerController_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_ProjectFish_Source_ProjectFish_FishPlayerController_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_ProjectFish_Source_ProjectFish_FishPlayerController_h_15_ACCESSORS
#define FID_ProjectFish_Source_ProjectFish_FishPlayerController_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFishPlayerController(); \
	friend struct Z_Construct_UClass_AFishPlayerController_Statics; \
public: \
	DECLARE_CLASS(AFishPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectFish"), NO_API) \
	DECLARE_SERIALIZER(AFishPlayerController)


#define FID_ProjectFish_Source_ProjectFish_FishPlayerController_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFishPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFishPlayerController(AFishPlayerController&&); \
	NO_API AFishPlayerController(const AFishPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFishPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFishPlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFishPlayerController) \
	NO_API virtual ~AFishPlayerController();


#define FID_ProjectFish_Source_ProjectFish_FishPlayerController_h_12_PROLOG
#define FID_ProjectFish_Source_ProjectFish_FishPlayerController_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectFish_Source_ProjectFish_FishPlayerController_h_15_SPARSE_DATA \
	FID_ProjectFish_Source_ProjectFish_FishPlayerController_h_15_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_ProjectFish_Source_ProjectFish_FishPlayerController_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_ProjectFish_Source_ProjectFish_FishPlayerController_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProjectFish_Source_ProjectFish_FishPlayerController_h_15_ACCESSORS \
	FID_ProjectFish_Source_ProjectFish_FishPlayerController_h_15_INCLASS_NO_PURE_DECLS \
	FID_ProjectFish_Source_ProjectFish_FishPlayerController_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTFISH_API UClass* StaticClass<class AFishPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectFish_Source_ProjectFish_FishPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
