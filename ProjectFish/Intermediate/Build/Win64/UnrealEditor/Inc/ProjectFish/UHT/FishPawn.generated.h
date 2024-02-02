// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FishPawn.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef PROJECTFISH_FishPawn_generated_h
#error "FishPawn.generated.h already included, missing '#pragma once' in FishPawn.h"
#endif
#define PROJECTFISH_FishPawn_generated_h

#define FID_ProjectFish_Source_ProjectFish_FishPawn_h_12_SPARSE_DATA
#define FID_ProjectFish_Source_ProjectFish_FishPawn_h_12_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_ProjectFish_Source_ProjectFish_FishPawn_h_12_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_ProjectFish_Source_ProjectFish_FishPawn_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define FID_ProjectFish_Source_ProjectFish_FishPawn_h_12_ACCESSORS
#define FID_ProjectFish_Source_ProjectFish_FishPawn_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFishPawn(); \
	friend struct Z_Construct_UClass_AFishPawn_Statics; \
public: \
	DECLARE_CLASS(AFishPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectFish"), NO_API) \
	DECLARE_SERIALIZER(AFishPawn)


#define FID_ProjectFish_Source_ProjectFish_FishPawn_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFishPawn(AFishPawn&&); \
	NO_API AFishPawn(const AFishPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFishPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFishPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFishPawn) \
	NO_API virtual ~AFishPawn();


#define FID_ProjectFish_Source_ProjectFish_FishPawn_h_9_PROLOG
#define FID_ProjectFish_Source_ProjectFish_FishPawn_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectFish_Source_ProjectFish_FishPawn_h_12_SPARSE_DATA \
	FID_ProjectFish_Source_ProjectFish_FishPawn_h_12_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_ProjectFish_Source_ProjectFish_FishPawn_h_12_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_ProjectFish_Source_ProjectFish_FishPawn_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProjectFish_Source_ProjectFish_FishPawn_h_12_ACCESSORS \
	FID_ProjectFish_Source_ProjectFish_FishPawn_h_12_INCLASS_NO_PURE_DECLS \
	FID_ProjectFish_Source_ProjectFish_FishPawn_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTFISH_API UClass* StaticClass<class AFishPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectFish_Source_ProjectFish_FishPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
