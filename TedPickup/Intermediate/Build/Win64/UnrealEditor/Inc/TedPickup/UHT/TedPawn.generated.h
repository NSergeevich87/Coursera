// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TedPawn.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef TEDPICKUP_TedPawn_generated_h
#error "TedPawn.generated.h already included, missing '#pragma once' in TedPawn.h"
#endif
#define TEDPICKUP_TedPawn_generated_h

#define FID_TedPickup_Source_TedPickup_TedPawn_h_13_SPARSE_DATA
#define FID_TedPickup_Source_TedPickup_TedPawn_h_13_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_TedPickup_Source_TedPickup_TedPawn_h_13_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_TedPickup_Source_TedPickup_TedPawn_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define FID_TedPickup_Source_TedPickup_TedPawn_h_13_ACCESSORS
#define FID_TedPickup_Source_TedPickup_TedPawn_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATedPawn(); \
	friend struct Z_Construct_UClass_ATedPawn_Statics; \
public: \
	DECLARE_CLASS(ATedPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TedPickup"), NO_API) \
	DECLARE_SERIALIZER(ATedPawn)


#define FID_TedPickup_Source_TedPickup_TedPawn_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATedPawn(ATedPawn&&); \
	NO_API ATedPawn(const ATedPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATedPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATedPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATedPawn) \
	NO_API virtual ~ATedPawn();


#define FID_TedPickup_Source_TedPickup_TedPawn_h_10_PROLOG
#define FID_TedPickup_Source_TedPickup_TedPawn_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TedPickup_Source_TedPickup_TedPawn_h_13_SPARSE_DATA \
	FID_TedPickup_Source_TedPickup_TedPawn_h_13_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_TedPickup_Source_TedPickup_TedPawn_h_13_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_TedPickup_Source_TedPickup_TedPawn_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_TedPickup_Source_TedPickup_TedPawn_h_13_ACCESSORS \
	FID_TedPickup_Source_TedPickup_TedPawn_h_13_INCLASS_NO_PURE_DECLS \
	FID_TedPickup_Source_TedPickup_TedPawn_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TEDPICKUP_API UClass* StaticClass<class ATedPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TedPickup_Source_TedPickup_TedPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
