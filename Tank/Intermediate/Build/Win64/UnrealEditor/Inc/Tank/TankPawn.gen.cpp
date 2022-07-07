// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tank/TankPawn.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTankPawn() {}
// Cross Module References
	TANK_API UClass* Z_Construct_UClass_ATankPawn_NoRegister();
	TANK_API UClass* Z_Construct_UClass_ATankPawn();
	TANK_API UClass* Z_Construct_UClass_AMachinePawn();
	UPackage* Z_Construct_UPackage__Script_Tank();
	TANK_API UScriptStruct* Z_Construct_UScriptStruct_FDamageData();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	TANK_API UClass* Z_Construct_UClass_UHealthComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	TANK_API UClass* Z_Construct_UClass_ACannon_NoRegister();
	TANK_API UClass* Z_Construct_UClass_ATankController_NoRegister();
	TANK_API UClass* Z_Construct_UClass_UDamageTaker_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ATankPawn::execDamageTaked)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DamageValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DamageTaked(Z_Param_DamageValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATankPawn::execTakeDamage)
	{
		P_GET_STRUCT(FDamageData,Z_Param_DamageData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TakeDamage(Z_Param_DamageData);
		P_NATIVE_END;
	}
	void ATankPawn::StaticRegisterNativesATankPawn()
	{
		UClass* Class = ATankPawn::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DamageTaked", &ATankPawn::execDamageTaked },
			{ "TakeDamage", &ATankPawn::execTakeDamage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATankPawn_DamageTaked_Statics
	{
		struct TankPawn_eventDamageTaked_Parms
		{
			float DamageValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATankPawn_DamageTaked_Statics::NewProp_DamageValue = { "DamageValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TankPawn_eventDamageTaked_Parms, DamageValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATankPawn_DamageTaked_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATankPawn_DamageTaked_Statics::NewProp_DamageValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATankPawn_DamageTaked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TankPawn.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATankPawn_DamageTaked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATankPawn, nullptr, "DamageTaked", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATankPawn_DamageTaked_Statics::TankPawn_eventDamageTaked_Parms), Z_Construct_UFunction_ATankPawn_DamageTaked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATankPawn_DamageTaked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATankPawn_DamageTaked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATankPawn_DamageTaked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATankPawn_DamageTaked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATankPawn_DamageTaked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATankPawn_TakeDamage_Statics
	{
		struct TankPawn_eventTakeDamage_Parms
		{
			FDamageData DamageData;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_DamageData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATankPawn_TakeDamage_Statics::NewProp_DamageData = { "DamageData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TankPawn_eventTakeDamage_Parms, DamageData), Z_Construct_UScriptStruct_FDamageData, METADATA_PARAMS(nullptr, 0) }; // 1518367983
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATankPawn_TakeDamage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATankPawn_TakeDamage_Statics::NewProp_DamageData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATankPawn_TakeDamage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TankPawn.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATankPawn_TakeDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATankPawn, nullptr, "TakeDamage", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATankPawn_TakeDamage_Statics::TankPawn_eventTakeDamage_Parms), Z_Construct_UFunction_ATankPawn_TakeDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATankPawn_TakeDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATankPawn_TakeDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATankPawn_TakeDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATankPawn_TakeDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATankPawn_TakeDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATankPawn);
	UClass* Z_Construct_UClass_ATankPawn_NoRegister()
	{
		return ATankPawn::StaticClass();
	}
	struct Z_Construct_UClass_ATankPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BodyMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BodyMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TurretMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TurretMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpringArm_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArm;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Camera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HealthComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HealthComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitCollider_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HitCollider;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CannonClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_CannonClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SecondaryCannonClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_SecondaryCannonClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MoveSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InterpolationKey_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InterpolationKey;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotateInterpolationKey_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RotateInterpolationKey;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TankController_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TankController;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATankPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AMachinePawn,
		(UObject* (*)())Z_Construct_UPackage__Script_Tank,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATankPawn_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATankPawn_DamageTaked, "DamageTaked" }, // 1058899869
		{ &Z_Construct_UFunction_ATankPawn_TakeDamage, "TakeDamage" }, // 4170355422
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATankPawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "TankPawn.h" },
		{ "ModuleRelativePath", "TankPawn.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATankPawn_Statics::NewProp_BodyMesh_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TankPawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATankPawn_Statics::NewProp_BodyMesh = { "BodyMesh", nullptr, (EPropertyFlags)0x00200800000b000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATankPawn, BodyMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATankPawn_Statics::NewProp_BodyMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATankPawn_Statics::NewProp_BodyMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATankPawn_Statics::NewProp_TurretMesh_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TankPawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATankPawn_Statics::NewProp_TurretMesh = { "TurretMesh", nullptr, (EPropertyFlags)0x00200800000b000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATankPawn, TurretMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATankPawn_Statics::NewProp_TurretMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATankPawn_Statics::NewProp_TurretMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATankPawn_Statics::NewProp_SpringArm_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TankPawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATankPawn_Statics::NewProp_SpringArm = { "SpringArm", nullptr, (EPropertyFlags)0x00200800000b000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATankPawn, SpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATankPawn_Statics::NewProp_SpringArm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATankPawn_Statics::NewProp_SpringArm_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATankPawn_Statics::NewProp_Camera_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TankPawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATankPawn_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x00200800000b000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATankPawn, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATankPawn_Statics::NewProp_Camera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATankPawn_Statics::NewProp_Camera_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATankPawn_Statics::NewProp_HealthComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TankPawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATankPawn_Statics::NewProp_HealthComponent = { "HealthComponent", nullptr, (EPropertyFlags)0x00200800000b000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATankPawn, HealthComponent), Z_Construct_UClass_UHealthComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATankPawn_Statics::NewProp_HealthComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATankPawn_Statics::NewProp_HealthComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATankPawn_Statics::NewProp_HitCollider_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TankPawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATankPawn_Statics::NewProp_HitCollider = { "HitCollider", nullptr, (EPropertyFlags)0x00200800000b000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATankPawn, HitCollider), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATankPawn_Statics::NewProp_HitCollider_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATankPawn_Statics::NewProp_HitCollider_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATankPawn_Statics::NewProp_CannonClass_MetaData[] = {
		{ "Category", "Turret | Component" },
		{ "ModuleRelativePath", "TankPawn.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATankPawn_Statics::NewProp_CannonClass = { "CannonClass", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATankPawn, CannonClass), Z_Construct_UClass_ACannon_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ATankPawn_Statics::NewProp_CannonClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATankPawn_Statics::NewProp_CannonClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATankPawn_Statics::NewProp_SecondaryCannonClass_MetaData[] = {
		{ "Category", "Turret | Component" },
		{ "ModuleRelativePath", "TankPawn.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATankPawn_Statics::NewProp_SecondaryCannonClass = { "SecondaryCannonClass", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATankPawn, SecondaryCannonClass), Z_Construct_UClass_ACannon_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ATankPawn_Statics::NewProp_SecondaryCannonClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATankPawn_Statics::NewProp_SecondaryCannonClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATankPawn_Statics::NewProp_MoveSpeed_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "TankPawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATankPawn_Statics::NewProp_MoveSpeed = { "MoveSpeed", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATankPawn, MoveSpeed), METADATA_PARAMS(Z_Construct_UClass_ATankPawn_Statics::NewProp_MoveSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATankPawn_Statics::NewProp_MoveSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATankPawn_Statics::NewProp_RotationSpeed_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "TankPawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATankPawn_Statics::NewProp_RotationSpeed = { "RotationSpeed", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATankPawn, RotationSpeed), METADATA_PARAMS(Z_Construct_UClass_ATankPawn_Statics::NewProp_RotationSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATankPawn_Statics::NewProp_RotationSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATankPawn_Statics::NewProp_InterpolationKey_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "TankPawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATankPawn_Statics::NewProp_InterpolationKey = { "InterpolationKey", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATankPawn, InterpolationKey), METADATA_PARAMS(Z_Construct_UClass_ATankPawn_Statics::NewProp_InterpolationKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATankPawn_Statics::NewProp_InterpolationKey_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATankPawn_Statics::NewProp_RotateInterpolationKey_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "TankPawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATankPawn_Statics::NewProp_RotateInterpolationKey = { "RotateInterpolationKey", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATankPawn, RotateInterpolationKey), METADATA_PARAMS(Z_Construct_UClass_ATankPawn_Statics::NewProp_RotateInterpolationKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATankPawn_Statics::NewProp_RotateInterpolationKey_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATankPawn_Statics::NewProp_TankController_MetaData[] = {
		{ "ModuleRelativePath", "TankPawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATankPawn_Statics::NewProp_TankController = { "TankController", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATankPawn, TankController), Z_Construct_UClass_ATankController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATankPawn_Statics::NewProp_TankController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATankPawn_Statics::NewProp_TankController_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATankPawn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATankPawn_Statics::NewProp_BodyMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATankPawn_Statics::NewProp_TurretMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATankPawn_Statics::NewProp_SpringArm,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATankPawn_Statics::NewProp_Camera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATankPawn_Statics::NewProp_HealthComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATankPawn_Statics::NewProp_HitCollider,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATankPawn_Statics::NewProp_CannonClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATankPawn_Statics::NewProp_SecondaryCannonClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATankPawn_Statics::NewProp_MoveSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATankPawn_Statics::NewProp_RotationSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATankPawn_Statics::NewProp_InterpolationKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATankPawn_Statics::NewProp_RotateInterpolationKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATankPawn_Statics::NewProp_TankController,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ATankPawn_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UDamageTaker_NoRegister, (int32)VTABLE_OFFSET(ATankPawn, IDamageTaker), false },  // 4191389099
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATankPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATankPawn>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATankPawn_Statics::ClassParams = {
		&ATankPawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATankPawn_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATankPawn_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATankPawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATankPawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATankPawn()
	{
		if (!Z_Registration_Info_UClass_ATankPawn.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATankPawn.OuterSingleton, Z_Construct_UClass_ATankPawn_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATankPawn.OuterSingleton;
	}
	template<> TANK_API UClass* StaticClass<ATankPawn>()
	{
		return ATankPawn::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATankPawn);
	struct Z_CompiledInDeferFile_FID_Tank_Source_Tank_TankPawn_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Tank_Source_Tank_TankPawn_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATankPawn, ATankPawn::StaticClass, TEXT("ATankPawn"), &Z_Registration_Info_UClass_ATankPawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATankPawn), 1428049035U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Tank_Source_Tank_TankPawn_h_1623062792(TEXT("/Script/Tank"),
		Z_CompiledInDeferFile_FID_Tank_Source_Tank_TankPawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Tank_Source_Tank_TankPawn_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
