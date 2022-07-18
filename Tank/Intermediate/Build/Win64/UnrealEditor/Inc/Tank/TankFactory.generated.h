// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FDamageData;
#ifdef TANK_TankFactory_generated_h
#error "TankFactory.generated.h already included, missing '#pragma once' in TankFactory.h"
#endif
#define TANK_TankFactory_generated_h

#define FID_Tank_Source_Tank_TankFactory_h_16_SPARSE_DATA
#define FID_Tank_Source_Tank_TankFactory_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDamageTaked); \
	DECLARE_FUNCTION(execDie); \
	DECLARE_FUNCTION(execTakeDamage);


#define FID_Tank_Source_Tank_TankFactory_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDamageTaked); \
	DECLARE_FUNCTION(execDie); \
	DECLARE_FUNCTION(execTakeDamage);


#define FID_Tank_Source_Tank_TankFactory_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATankFactory(); \
	friend struct Z_Construct_UClass_ATankFactory_Statics; \
public: \
	DECLARE_CLASS(ATankFactory, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Tank"), NO_API) \
	DECLARE_SERIALIZER(ATankFactory) \
	virtual UObject* _getUObject() const override { return const_cast<ATankFactory*>(this); }


#define FID_Tank_Source_Tank_TankFactory_h_16_INCLASS \
private: \
	static void StaticRegisterNativesATankFactory(); \
	friend struct Z_Construct_UClass_ATankFactory_Statics; \
public: \
	DECLARE_CLASS(ATankFactory, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Tank"), NO_API) \
	DECLARE_SERIALIZER(ATankFactory) \
	virtual UObject* _getUObject() const override { return const_cast<ATankFactory*>(this); }


#define FID_Tank_Source_Tank_TankFactory_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATankFactory(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATankFactory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATankFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATankFactory); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATankFactory(ATankFactory&&); \
	NO_API ATankFactory(const ATankFactory&); \
public:


#define FID_Tank_Source_Tank_TankFactory_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATankFactory(ATankFactory&&); \
	NO_API ATankFactory(const ATankFactory&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATankFactory); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATankFactory); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATankFactory)


#define FID_Tank_Source_Tank_TankFactory_h_13_PROLOG
#define FID_Tank_Source_Tank_TankFactory_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Tank_Source_Tank_TankFactory_h_16_SPARSE_DATA \
	FID_Tank_Source_Tank_TankFactory_h_16_RPC_WRAPPERS \
	FID_Tank_Source_Tank_TankFactory_h_16_INCLASS \
	FID_Tank_Source_Tank_TankFactory_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Tank_Source_Tank_TankFactory_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Tank_Source_Tank_TankFactory_h_16_SPARSE_DATA \
	FID_Tank_Source_Tank_TankFactory_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Tank_Source_Tank_TankFactory_h_16_INCLASS_NO_PURE_DECLS \
	FID_Tank_Source_Tank_TankFactory_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TANK_API UClass* StaticClass<class ATankFactory>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Tank_Source_Tank_TankFactory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
