// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CasadorPawn.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef PROJECTFISH_CasadorPawn_generated_h
#error "CasadorPawn.generated.h already included, missing '#pragma once' in CasadorPawn.h"
#endif
#define PROJECTFISH_CasadorPawn_generated_h

#define FID_ProjectFish_Source_ProjectFish_CasadorPawn_h_12_SPARSE_DATA
#define FID_ProjectFish_Source_ProjectFish_CasadorPawn_h_12_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_ProjectFish_Source_ProjectFish_CasadorPawn_h_12_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_ProjectFish_Source_ProjectFish_CasadorPawn_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnBeginOverlap);


#define FID_ProjectFish_Source_ProjectFish_CasadorPawn_h_12_ACCESSORS
#define FID_ProjectFish_Source_ProjectFish_CasadorPawn_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACasadorPawn(); \
	friend struct Z_Construct_UClass_ACasadorPawn_Statics; \
public: \
	DECLARE_CLASS(ACasadorPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectFish"), NO_API) \
	DECLARE_SERIALIZER(ACasadorPawn)


#define FID_ProjectFish_Source_ProjectFish_CasadorPawn_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACasadorPawn(ACasadorPawn&&); \
	NO_API ACasadorPawn(const ACasadorPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACasadorPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACasadorPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACasadorPawn) \
	NO_API virtual ~ACasadorPawn();


#define FID_ProjectFish_Source_ProjectFish_CasadorPawn_h_9_PROLOG
#define FID_ProjectFish_Source_ProjectFish_CasadorPawn_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectFish_Source_ProjectFish_CasadorPawn_h_12_SPARSE_DATA \
	FID_ProjectFish_Source_ProjectFish_CasadorPawn_h_12_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_ProjectFish_Source_ProjectFish_CasadorPawn_h_12_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_ProjectFish_Source_ProjectFish_CasadorPawn_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProjectFish_Source_ProjectFish_CasadorPawn_h_12_ACCESSORS \
	FID_ProjectFish_Source_ProjectFish_CasadorPawn_h_12_INCLASS_NO_PURE_DECLS \
	FID_ProjectFish_Source_ProjectFish_CasadorPawn_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTFISH_API UClass* StaticClass<class ACasadorPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectFish_Source_ProjectFish_CasadorPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
