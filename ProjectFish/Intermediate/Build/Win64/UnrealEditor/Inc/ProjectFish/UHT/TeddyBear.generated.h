// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TeddyBear.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef PROJECTFISH_TeddyBear_generated_h
#error "TeddyBear.generated.h already included, missing '#pragma once' in TeddyBear.h"
#endif
#define PROJECTFISH_TeddyBear_generated_h

#define FID_ProjectFish_Source_ProjectFish_TeddyBear_h_14_SPARSE_DATA
#define FID_ProjectFish_Source_ProjectFish_TeddyBear_h_14_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_ProjectFish_Source_ProjectFish_TeddyBear_h_14_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_ProjectFish_Source_ProjectFish_TeddyBear_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define FID_ProjectFish_Source_ProjectFish_TeddyBear_h_14_ACCESSORS
#define FID_ProjectFish_Source_ProjectFish_TeddyBear_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATeddyBear(); \
	friend struct Z_Construct_UClass_ATeddyBear_Statics; \
public: \
	DECLARE_CLASS(ATeddyBear, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectFish"), NO_API) \
	DECLARE_SERIALIZER(ATeddyBear)


#define FID_ProjectFish_Source_ProjectFish_TeddyBear_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATeddyBear(ATeddyBear&&); \
	NO_API ATeddyBear(const ATeddyBear&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATeddyBear); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATeddyBear); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATeddyBear) \
	NO_API virtual ~ATeddyBear();


#define FID_ProjectFish_Source_ProjectFish_TeddyBear_h_11_PROLOG
#define FID_ProjectFish_Source_ProjectFish_TeddyBear_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ProjectFish_Source_ProjectFish_TeddyBear_h_14_SPARSE_DATA \
	FID_ProjectFish_Source_ProjectFish_TeddyBear_h_14_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_ProjectFish_Source_ProjectFish_TeddyBear_h_14_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_ProjectFish_Source_ProjectFish_TeddyBear_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ProjectFish_Source_ProjectFish_TeddyBear_h_14_ACCESSORS \
	FID_ProjectFish_Source_ProjectFish_TeddyBear_h_14_INCLASS_NO_PURE_DECLS \
	FID_ProjectFish_Source_ProjectFish_TeddyBear_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTFISH_API UClass* StaticClass<class ATeddyBear>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ProjectFish_Source_ProjectFish_TeddyBear_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
