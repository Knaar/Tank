// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TANK_TankController_generated_h
#error "TankController.generated.h already included, missing '#pragma once' in TankController.h"
#endif
#define TANK_TankController_generated_h

#define FID_Tank_Source_Tank_TankController_h_15_SPARSE_DATA
#define FID_Tank_Source_Tank_TankController_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFire); \
	DECLARE_FUNCTION(execRotateRight); \
	DECLARE_FUNCTION(execMoveRight); \
	DECLARE_FUNCTION(execMoveForward);


#define FID_Tank_Source_Tank_TankController_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFire); \
	DECLARE_FUNCTION(execRotateRight); \
	DECLARE_FUNCTION(execMoveRight); \
	DECLARE_FUNCTION(execMoveForward);


#define FID_Tank_Source_Tank_TankController_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATankController(); \
	friend struct Z_Construct_UClass_ATankController_Statics; \
public: \
	DECLARE_CLASS(ATankController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Tank"), NO_API) \
	DECLARE_SERIALIZER(ATankController)


#define FID_Tank_Source_Tank_TankController_h_15_INCLASS \
private: \
	static void StaticRegisterNativesATankController(); \
	friend struct Z_Construct_UClass_ATankController_Statics; \
public: \
	DECLARE_CLASS(ATankController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Tank"), NO_API) \
	DECLARE_SERIALIZER(ATankController)


#define FID_Tank_Source_Tank_TankController_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATankController(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATankController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATankController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATankController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATankController(ATankController&&); \
	NO_API ATankController(const ATankController&); \
public:


#define FID_Tank_Source_Tank_TankController_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATankController(ATankController&&); \
	NO_API ATankController(const ATankController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATankController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATankController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATankController)


#define FID_Tank_Source_Tank_TankController_h_12_PROLOG
#define FID_Tank_Source_Tank_TankController_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Tank_Source_Tank_TankController_h_15_SPARSE_DATA \
	FID_Tank_Source_Tank_TankController_h_15_RPC_WRAPPERS \
	FID_Tank_Source_Tank_TankController_h_15_INCLASS \
	FID_Tank_Source_Tank_TankController_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Tank_Source_Tank_TankController_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Tank_Source_Tank_TankController_h_15_SPARSE_DATA \
	FID_Tank_Source_Tank_TankController_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Tank_Source_Tank_TankController_h_15_INCLASS_NO_PURE_DECLS \
	FID_Tank_Source_Tank_TankController_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TANK_API UClass* StaticClass<class ATankController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Tank_Source_Tank_TankController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
