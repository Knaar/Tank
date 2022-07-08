// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tank/Cannon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCannon() {}
// Cross Module References
	TANK_API UClass* Z_Construct_UClass_ACannon_NoRegister();
	TANK_API UClass* Z_Construct_UClass_ACannon();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Tank();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
	TANK_API UEnum* Z_Construct_UEnum_Tank_ECannonType();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	TANK_API UClass* Z_Construct_UClass_AProjectile_NoRegister();
	TANK_API UClass* Z_Construct_UClass_AProjectilePool_NoRegister();
	TANK_API UClass* Z_Construct_UClass_ATankPawn_NoRegister();
// End Cross Module References
	void ACannon::StaticRegisterNativesACannon()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACannon);
	UClass* Z_Construct_UClass_ACannon_NoRegister()
	{
		return ACannon::StaticClass();
	}
	struct Z_Construct_UClass_ACannon_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CannonMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CannonMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileSpawnPoint_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ProjectileSpawnPoint;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CannonType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CannonType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CannonType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReloadTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReloadTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FireRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FireRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumOfAutoShoots_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_NumOfAutoShoots;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FireRange_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FireRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Damage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ProjectileClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectilePoolClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ProjectilePoolClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectilePool_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ProjectilePool;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TankPawn_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TankPawn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACannon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Tank,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACannon_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Cannon.h" },
		{ "ModuleRelativePath", "Cannon.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACannon_Statics::NewProp_CannonMesh_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Cannon.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACannon_Statics::NewProp_CannonMesh = { "CannonMesh", nullptr, (EPropertyFlags)0x00200800000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACannon, CannonMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACannon_Statics::NewProp_CannonMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACannon_Statics::NewProp_CannonMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACannon_Statics::NewProp_ProjectileSpawnPoint_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Cannon.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACannon_Statics::NewProp_ProjectileSpawnPoint = { "ProjectileSpawnPoint", nullptr, (EPropertyFlags)0x00200800000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACannon, ProjectileSpawnPoint), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACannon_Statics::NewProp_ProjectileSpawnPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACannon_Statics::NewProp_ProjectileSpawnPoint_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ACannon_Statics::NewProp_CannonType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACannon_Statics::NewProp_CannonType_MetaData[] = {
		{ "Category", "Components" },
		{ "ModuleRelativePath", "Cannon.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ACannon_Statics::NewProp_CannonType = { "CannonType", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACannon, CannonType), Z_Construct_UEnum_Tank_ECannonType, METADATA_PARAMS(Z_Construct_UClass_ACannon_Statics::NewProp_CannonType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACannon_Statics::NewProp_CannonType_MetaData)) }; // 361191707
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACannon_Statics::NewProp_ReloadTime_MetaData[] = {
		{ "Category", "Ammo" },
		{ "ModuleRelativePath", "Cannon.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACannon_Statics::NewProp_ReloadTime = { "ReloadTime", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACannon, ReloadTime), METADATA_PARAMS(Z_Construct_UClass_ACannon_Statics::NewProp_ReloadTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACannon_Statics::NewProp_ReloadTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACannon_Statics::NewProp_FireRate_MetaData[] = {
		{ "Category", "Ammo" },
		{ "ModuleRelativePath", "Cannon.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACannon_Statics::NewProp_FireRate = { "FireRate", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACannon, FireRate), METADATA_PARAMS(Z_Construct_UClass_ACannon_Statics::NewProp_FireRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACannon_Statics::NewProp_FireRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACannon_Statics::NewProp_NumOfAutoShoots_MetaData[] = {
		{ "Category", "Ammo" },
		{ "ModuleRelativePath", "Cannon.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ACannon_Statics::NewProp_NumOfAutoShoots = { "NumOfAutoShoots", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACannon, NumOfAutoShoots), METADATA_PARAMS(Z_Construct_UClass_ACannon_Statics::NewProp_NumOfAutoShoots_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACannon_Statics::NewProp_NumOfAutoShoots_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACannon_Statics::NewProp_FireRange_MetaData[] = {
		{ "Category", "Ammo" },
		{ "ModuleRelativePath", "Cannon.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACannon_Statics::NewProp_FireRange = { "FireRange", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACannon, FireRange), METADATA_PARAMS(Z_Construct_UClass_ACannon_Statics::NewProp_FireRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACannon_Statics::NewProp_FireRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACannon_Statics::NewProp_Damage_MetaData[] = {
		{ "Category", "Components" },
		{ "ModuleRelativePath", "Cannon.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACannon_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACannon, Damage), METADATA_PARAMS(Z_Construct_UClass_ACannon_Statics::NewProp_Damage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACannon_Statics::NewProp_Damage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACannon_Statics::NewProp_ProjectileClass_MetaData[] = {
		{ "Category", "Components" },
		{ "ModuleRelativePath", "Cannon.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACannon_Statics::NewProp_ProjectileClass = { "ProjectileClass", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACannon, ProjectileClass), Z_Construct_UClass_AProjectile_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ACannon_Statics::NewProp_ProjectileClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACannon_Statics::NewProp_ProjectileClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACannon_Statics::NewProp_ProjectilePoolClass_MetaData[] = {
		{ "Category", "Components" },
		{ "ModuleRelativePath", "Cannon.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACannon_Statics::NewProp_ProjectilePoolClass = { "ProjectilePoolClass", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACannon, ProjectilePoolClass), Z_Construct_UClass_AProjectilePool_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ACannon_Statics::NewProp_ProjectilePoolClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACannon_Statics::NewProp_ProjectilePoolClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACannon_Statics::NewProp_ProjectilePool_MetaData[] = {
		{ "ModuleRelativePath", "Cannon.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACannon_Statics::NewProp_ProjectilePool = { "ProjectilePool", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACannon, ProjectilePool), Z_Construct_UClass_AProjectilePool_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACannon_Statics::NewProp_ProjectilePool_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACannon_Statics::NewProp_ProjectilePool_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACannon_Statics::NewProp_TankPawn_MetaData[] = {
		{ "ModuleRelativePath", "Cannon.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACannon_Statics::NewProp_TankPawn = { "TankPawn", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACannon, TankPawn), Z_Construct_UClass_ATankPawn_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACannon_Statics::NewProp_TankPawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACannon_Statics::NewProp_TankPawn_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACannon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACannon_Statics::NewProp_CannonMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACannon_Statics::NewProp_ProjectileSpawnPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACannon_Statics::NewProp_CannonType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACannon_Statics::NewProp_CannonType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACannon_Statics::NewProp_ReloadTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACannon_Statics::NewProp_FireRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACannon_Statics::NewProp_NumOfAutoShoots,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACannon_Statics::NewProp_FireRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACannon_Statics::NewProp_Damage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACannon_Statics::NewProp_ProjectileClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACannon_Statics::NewProp_ProjectilePoolClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACannon_Statics::NewProp_ProjectilePool,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACannon_Statics::NewProp_TankPawn,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACannon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACannon>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACannon_Statics::ClassParams = {
		&ACannon::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACannon_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACannon_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACannon_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACannon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACannon()
	{
		if (!Z_Registration_Info_UClass_ACannon.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACannon.OuterSingleton, Z_Construct_UClass_ACannon_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACannon.OuterSingleton;
	}
	template<> TANK_API UClass* StaticClass<ACannon>()
	{
		return ACannon::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACannon);
	struct Z_CompiledInDeferFile_FID_Tank_Source_Tank_Cannon_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Tank_Source_Tank_Cannon_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACannon, ACannon::StaticClass, TEXT("ACannon"), &Z_Registration_Info_UClass_ACannon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACannon), 1344580318U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Tank_Source_Tank_Cannon_h_2694254357(TEXT("/Script/Tank"),
		Z_CompiledInDeferFile_FID_Tank_Source_Tank_Cannon_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Tank_Source_Tank_Cannon_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
