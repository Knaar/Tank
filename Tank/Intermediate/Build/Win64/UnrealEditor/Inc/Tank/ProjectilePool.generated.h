// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TANK_ProjectilePool_generated_h
#error "ProjectilePool.generated.h already included, missing '#pragma once' in ProjectilePool.h"
#endif
#define TANK_ProjectilePool_generated_h

#define FID_Tank_Source_Tank_ProjectilePool_h_13_SPARSE_DATA
#define FID_Tank_Source_Tank_ProjectilePool_h_13_RPC_WRAPPERS
#define FID_Tank_Source_Tank_ProjectilePool_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Tank_Source_Tank_ProjectilePool_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAProjectilePool(); \
	friend struct Z_Construct_UClass_AProjectilePool_Statics; \
public: \
	DECLARE_CLASS(AProjectilePool, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Tank"), NO_API) \
	DECLARE_SERIALIZER(AProjectilePool)


#define FID_Tank_Source_Tank_ProjectilePool_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAProjectilePool(); \
	friend struct Z_Construct_UClass_AProjectilePool_Statics; \
public: \
	DECLARE_CLASS(AProjectilePool, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Tank"), NO_API) \
	DECLARE_SERIALIZER(AProjectilePool)


#define FID_Tank_Source_Tank_ProjectilePool_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AProjectilePool(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AProjectilePool) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectilePool); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectilePool); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProjectilePool(AProjectilePool&&); \
	NO_API AProjectilePool(const AProjectilePool&); \
public:


#define FID_Tank_Source_Tank_ProjectilePool_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProjectilePool(AProjectilePool&&); \
	NO_API AProjectilePool(const AProjectilePool&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectilePool); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectilePool); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AProjectilePool)


#define FID_Tank_Source_Tank_ProjectilePool_h_10_PROLOG
#define FID_Tank_Source_Tank_ProjectilePool_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Tank_Source_Tank_ProjectilePool_h_13_SPARSE_DATA \
	FID_Tank_Source_Tank_ProjectilePool_h_13_RPC_WRAPPERS \
	FID_Tank_Source_Tank_ProjectilePool_h_13_INCLASS \
	FID_Tank_Source_Tank_ProjectilePool_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Tank_Source_Tank_ProjectilePool_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Tank_Source_Tank_ProjectilePool_h_13_SPARSE_DATA \
	FID_Tank_Source_Tank_ProjectilePool_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Tank_Source_Tank_ProjectilePool_h_13_INCLASS_NO_PURE_DECLS \
	FID_Tank_Source_Tank_ProjectilePool_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TANK_API UClass* StaticClass<class AProjectilePool>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Tank_Source_Tank_ProjectilePool_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
