// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TeddyBearActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef BEARSGAME_TeddyBearActor_generated_h
#error "TeddyBearActor.generated.h already included, missing '#pragma once' in TeddyBearActor.h"
#endif
#define BEARSGAME_TeddyBearActor_generated_h

#define FID_BearsGame_Source_BearsGame_TeddyBearActor_h_12_SPARSE_DATA
#define FID_BearsGame_Source_BearsGame_TeddyBearActor_h_12_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_BearsGame_Source_BearsGame_TeddyBearActor_h_12_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_BearsGame_Source_BearsGame_TeddyBearActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define FID_BearsGame_Source_BearsGame_TeddyBearActor_h_12_ACCESSORS
#define FID_BearsGame_Source_BearsGame_TeddyBearActor_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATeddyBearActor(); \
	friend struct Z_Construct_UClass_ATeddyBearActor_Statics; \
public: \
	DECLARE_CLASS(ATeddyBearActor, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/BearsGame"), NO_API) \
	DECLARE_SERIALIZER(ATeddyBearActor)


#define FID_BearsGame_Source_BearsGame_TeddyBearActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATeddyBearActor(ATeddyBearActor&&); \
	NO_API ATeddyBearActor(const ATeddyBearActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATeddyBearActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATeddyBearActor); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(ATeddyBearActor) \
	NO_API virtual ~ATeddyBearActor();


#define FID_BearsGame_Source_BearsGame_TeddyBearActor_h_9_PROLOG
#define FID_BearsGame_Source_BearsGame_TeddyBearActor_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_BearsGame_Source_BearsGame_TeddyBearActor_h_12_SPARSE_DATA \
	FID_BearsGame_Source_BearsGame_TeddyBearActor_h_12_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_BearsGame_Source_BearsGame_TeddyBearActor_h_12_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_BearsGame_Source_BearsGame_TeddyBearActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_BearsGame_Source_BearsGame_TeddyBearActor_h_12_ACCESSORS \
	FID_BearsGame_Source_BearsGame_TeddyBearActor_h_12_INCLASS_NO_PURE_DECLS \
	FID_BearsGame_Source_BearsGame_TeddyBearActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BEARSGAME_API UClass* StaticClass<class ATeddyBearActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_BearsGame_Source_BearsGame_TeddyBearActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
