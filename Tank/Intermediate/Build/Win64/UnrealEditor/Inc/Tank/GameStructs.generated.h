// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TANK_GameStructs_generated_h
#error "GameStructs.generated.h already included, missing '#pragma once' in GameStructs.h"
#endif
#define TANK_GameStructs_generated_h

#define FID_Tank_Source_Tank_GameStructs_h_15_SPARSE_DATA
#define FID_Tank_Source_Tank_GameStructs_h_15_RPC_WRAPPERS
#define FID_Tank_Source_Tank_GameStructs_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Tank_Source_Tank_GameStructs_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameStructs(); \
	friend struct Z_Construct_UClass_UGameStructs_Statics; \
public: \
	DECLARE_CLASS(UGameStructs, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Tank"), NO_API) \
	DECLARE_SERIALIZER(UGameStructs)


#define FID_Tank_Source_Tank_GameStructs_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUGameStructs(); \
	friend struct Z_Construct_UClass_UGameStructs_Statics; \
public: \
	DECLARE_CLASS(UGameStructs, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Tank"), NO_API) \
	DECLARE_SERIALIZER(UGameStructs)


#define FID_Tank_Source_Tank_GameStructs_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameStructs(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameStructs) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameStructs); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameStructs); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameStructs(UGameStructs&&); \
	NO_API UGameStructs(const UGameStructs&); \
public:


#define FID_Tank_Source_Tank_GameStructs_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameStructs(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameStructs(UGameStructs&&); \
	NO_API UGameStructs(const UGameStructs&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameStructs); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameStructs); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameStructs)


#define FID_Tank_Source_Tank_GameStructs_h_12_PROLOG
#define FID_Tank_Source_Tank_GameStructs_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Tank_Source_Tank_GameStructs_h_15_SPARSE_DATA \
	FID_Tank_Source_Tank_GameStructs_h_15_RPC_WRAPPERS \
	FID_Tank_Source_Tank_GameStructs_h_15_INCLASS \
	FID_Tank_Source_Tank_GameStructs_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Tank_Source_Tank_GameStructs_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Tank_Source_Tank_GameStructs_h_15_SPARSE_DATA \
	FID_Tank_Source_Tank_GameStructs_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Tank_Source_Tank_GameStructs_h_15_INCLASS_NO_PURE_DECLS \
	FID_Tank_Source_Tank_GameStructs_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TANK_API UClass* StaticClass<class UGameStructs>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Tank_Source_Tank_GameStructs_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
