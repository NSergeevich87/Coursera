// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Jumper.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef JUMPTHATACTOR_Jumper_generated_h
#error "Jumper.generated.h already included, missing '#pragma once' in Jumper.h"
#endif
#define JUMPTHATACTOR_Jumper_generated_h

#define FID_JumpThatActor_Source_JumpThatActor_Jumper_h_15_SPARSE_DATA
#define FID_JumpThatActor_Source_JumpThatActor_Jumper_h_15_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_JumpThatActor_Source_JumpThatActor_Jumper_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_JumpThatActor_Source_JumpThatActor_Jumper_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execJump);


#define FID_JumpThatActor_Source_JumpThatActor_Jumper_h_15_ACCESSORS
#define FID_JumpThatActor_Source_JumpThatActor_Jumper_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAJumper(); \
	friend struct Z_Construct_UClass_AJumper_Statics; \
public: \
	DECLARE_CLASS(AJumper, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/JumpThatActor"), NO_API) \
	DECLARE_SERIALIZER(AJumper)


#define FID_JumpThatActor_Source_JumpThatActor_Jumper_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AJumper(AJumper&&); \
	NO_API AJumper(const AJumper&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AJumper); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AJumper); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AJumper) \
	NO_API virtual ~AJumper();


#define FID_JumpThatActor_Source_JumpThatActor_Jumper_h_12_PROLOG
#define FID_JumpThatActor_Source_JumpThatActor_Jumper_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_JumpThatActor_Source_JumpThatActor_Jumper_h_15_SPARSE_DATA \
	FID_JumpThatActor_Source_JumpThatActor_Jumper_h_15_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_JumpThatActor_Source_JumpThatActor_Jumper_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_JumpThatActor_Source_JumpThatActor_Jumper_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_JumpThatActor_Source_JumpThatActor_Jumper_h_15_ACCESSORS \
	FID_JumpThatActor_Source_JumpThatActor_Jumper_h_15_INCLASS_NO_PURE_DECLS \
	FID_JumpThatActor_Source_JumpThatActor_Jumper_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> JUMPTHATACTOR_API UClass* StaticClass<class AJumper>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_JumpThatActor_Source_JumpThatActor_Jumper_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
