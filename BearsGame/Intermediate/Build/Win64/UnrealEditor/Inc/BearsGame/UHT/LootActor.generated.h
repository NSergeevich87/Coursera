// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "LootActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef BEARSGAME_LootActor_generated_h
#error "LootActor.generated.h already included, missing '#pragma once' in LootActor.h"
#endif
#define BEARSGAME_LootActor_generated_h

#define FID_BearsGame_Source_BearsGame_LootActor_h_15_SPARSE_DATA
#define FID_BearsGame_Source_BearsGame_LootActor_h_15_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_BearsGame_Source_BearsGame_LootActor_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_BearsGame_Source_BearsGame_LootActor_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execEndPlay); \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define FID_BearsGame_Source_BearsGame_LootActor_h_15_ACCESSORS
#define FID_BearsGame_Source_BearsGame_LootActor_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALootActor(); \
	friend struct Z_Construct_UClass_ALootActor_Statics; \
public: \
	DECLARE_CLASS(ALootActor, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/BearsGame"), NO_API) \
	DECLARE_SERIALIZER(ALootActor) \
	virtual UObject* _getUObject() const override { return const_cast<ALootActor*>(this); }


#define FID_BearsGame_Source_BearsGame_LootActor_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALootActor(ALootActor&&); \
	NO_API ALootActor(const ALootActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALootActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALootActor); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(ALootActor) \
	NO_API virtual ~ALootActor();


#define FID_BearsGame_Source_BearsGame_LootActor_h_12_PROLOG
#define FID_BearsGame_Source_BearsGame_LootActor_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_BearsGame_Source_BearsGame_LootActor_h_15_SPARSE_DATA \
	FID_BearsGame_Source_BearsGame_LootActor_h_15_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_BearsGame_Source_BearsGame_LootActor_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_BearsGame_Source_BearsGame_LootActor_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_BearsGame_Source_BearsGame_LootActor_h_15_ACCESSORS \
	FID_BearsGame_Source_BearsGame_LootActor_h_15_INCLASS_NO_PURE_DECLS \
	FID_BearsGame_Source_BearsGame_LootActor_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BEARSGAME_API UClass* StaticClass<class ALootActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_BearsGame_Source_BearsGame_LootActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
