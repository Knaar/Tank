// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef TANK_BulletsBox_generated_h
#error "BulletsBox.generated.h already included, missing '#pragma once' in BulletsBox.h"
#endif
#define TANK_BulletsBox_generated_h

#define FID_Tank_Source_Tank_BulletsBox_h_12_SPARSE_DATA
#define FID_Tank_Source_Tank_BulletsBox_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnMeshOverlapBegin);


#define FID_Tank_Source_Tank_BulletsBox_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnMeshOverlapBegin);


#define FID_Tank_Source_Tank_BulletsBox_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABulletsBox(); \
	friend struct Z_Construct_UClass_ABulletsBox_Statics; \
public: \
	DECLARE_CLASS(ABulletsBox, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Tank"), NO_API) \
	DECLARE_SERIALIZER(ABulletsBox)


#define FID_Tank_Source_Tank_BulletsBox_h_12_INCLASS \
private: \
	static void StaticRegisterNativesABulletsBox(); \
	friend struct Z_Construct_UClass_ABulletsBox_Statics; \
public: \
	DECLARE_CLASS(ABulletsBox, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Tank"), NO_API) \
	DECLARE_SERIALIZER(ABulletsBox)


#define FID_Tank_Source_Tank_BulletsBox_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABulletsBox(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABulletsBox) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABulletsBox); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABulletsBox); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABulletsBox(ABulletsBox&&); \
	NO_API ABulletsBox(const ABulletsBox&); \
public:


#define FID_Tank_Source_Tank_BulletsBox_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABulletsBox(ABulletsBox&&); \
	NO_API ABulletsBox(const ABulletsBox&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABulletsBox); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABulletsBox); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABulletsBox)


#define FID_Tank_Source_Tank_BulletsBox_h_9_PROLOG
#define FID_Tank_Source_Tank_BulletsBox_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Tank_Source_Tank_BulletsBox_h_12_SPARSE_DATA \
	FID_Tank_Source_Tank_BulletsBox_h_12_RPC_WRAPPERS \
	FID_Tank_Source_Tank_BulletsBox_h_12_INCLASS \
	FID_Tank_Source_Tank_BulletsBox_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Tank_Source_Tank_BulletsBox_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Tank_Source_Tank_BulletsBox_h_12_SPARSE_DATA \
	FID_Tank_Source_Tank_BulletsBox_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Tank_Source_Tank_BulletsBox_h_12_INCLASS_NO_PURE_DECLS \
	FID_Tank_Source_Tank_BulletsBox_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TANK_API UClass* StaticClass<class ABulletsBox>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Tank_Source_Tank_BulletsBox_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
