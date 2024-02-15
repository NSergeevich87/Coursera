// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LauncherActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BEARSGAME_LauncherActor_generated_h
#error "LauncherActor.generated.h already included, missing '#pragma once' in LauncherActor.h"
#endif
#define BEARSGAME_LauncherActor_generated_h

#define FID_BearsGame_Source_BearsGame_LauncherActor_h_14_SPARSE_DATA
#define FID_BearsGame_Source_BearsGame_LauncherActor_h_14_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_BearsGame_Source_BearsGame_LauncherActor_h_14_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_BearsGame_Source_BearsGame_LauncherActor_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSpawnProjectile);


#define FID_BearsGame_Source_BearsGame_LauncherActor_h_14_ACCESSORS
#define FID_BearsGame_Source_BearsGame_LauncherActor_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALauncherActor(); \
	friend struct Z_Construct_UClass_ALauncherActor_Statics; \
public: \
	DECLARE_CLASS(ALauncherActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BearsGame"), NO_API) \
	DECLARE_SERIALIZER(ALauncherActor)


#define FID_BearsGame_Source_BearsGame_LauncherActor_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALauncherActor(ALauncherActor&&); \
	NO_API ALauncherActor(const ALauncherActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALauncherActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALauncherActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ALauncherActor) \
	NO_API virtual ~ALauncherActor();


#define FID_BearsGame_Source_BearsGame_LauncherActor_h_11_PROLOG
#define FID_BearsGame_Source_BearsGame_LauncherActor_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_BearsGame_Source_BearsGame_LauncherActor_h_14_SPARSE_DATA \
	FID_BearsGame_Source_BearsGame_LauncherActor_h_14_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_BearsGame_Source_BearsGame_LauncherActor_h_14_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_BearsGame_Source_BearsGame_LauncherActor_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_BearsGame_Source_BearsGame_LauncherActor_h_14_ACCESSORS \
	FID_BearsGame_Source_BearsGame_LauncherActor_h_14_INCLASS_NO_PURE_DECLS \
	FID_BearsGame_Source_BearsGame_LauncherActor_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BEARSGAME_API UClass* StaticClass<class ALauncherActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_BearsGame_Source_BearsGame_LauncherActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
