// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameHUD.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECTFISH_GameHUD_generated_h
#error "GameHUD.generated.h already included, missing '#pragma once' in GameHUD.h"
#endif
#define PROJECTFISH_GameHUD_generated_h

#define FID_ProjectFish_Source_ProjectFish_GameHUD_h_18_SPARSE_DATA
#define FID_ProjectFish_Source_ProjectFish_GameHUD_h_18_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_ProjectFish_Source_ProjectFish_GameHUD_h_18_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_ProjectFish_Source_ProjectFish_GameHUD_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execEndPlay);


#define FID_ProjectFish_Source_ProjectFish_GameHUD_h_18_ACCESSORS
#define FID_ProjectFish_Source_ProjectFish_GameHUD_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGameHUD(); \
	friend struct Z_Construct_UClass_AGameHUD_Statics; \
public: \
	DECLARE_CLASS(AGameHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectFish"), NO_API) \
	DECLARE_SERIALIZER(AGameHUD)


#define FID_ProjectFish_Source_ProjectFish_GameHUD_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGameHUD(AGameHUD&&); \
	NO_API AGameHUD(const AGameHUD&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGameHUD); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameHUD); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGameHUD) \
	NO_API virtual ~AGameHUD();


#define FID_ProjectFish_Source_ProjectFish_GameHUD_h_15_PROLOG
#define FID_ProjectFish_Source_ProjectFish_GameHUD_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectFish_Source_ProjectFish_GameHUD_h_18_SPARSE_DATA \
	FID_ProjectFish_Source_ProjectFish_GameHUD_h_18_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_ProjectFish_Source_ProjectFish_GameHUD_h_18_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_ProjectFish_Source_ProjectFish_GameHUD_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProjectFish_Source_ProjectFish_GameHUD_h_18_ACCESSORS \
	FID_ProjectFish_Source_ProjectFish_GameHUD_h_18_INCLASS_NO_PURE_DECLS \
	FID_ProjectFish_Source_ProjectFish_GameHUD_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTFISH_API UClass* StaticClass<class AGameHUD>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectFish_Source_ProjectFish_GameHUD_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
