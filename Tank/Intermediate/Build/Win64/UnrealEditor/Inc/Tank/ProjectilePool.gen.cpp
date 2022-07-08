// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tank/ProjectilePool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProjectilePool() {}
// Cross Module References
	TANK_API UClass* Z_Construct_UClass_AProjectilePool_NoRegister();
	TANK_API UClass* Z_Construct_UClass_AProjectilePool();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Tank();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	TANK_API UClass* Z_Construct_UClass_AProjectile_NoRegister();
// End Cross Module References
	void AProjectilePool::StaticRegisterNativesAProjectilePool()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AProjectilePool);
	UClass* Z_Construct_UClass_AProjectilePool_NoRegister()
	{
		return AProjectilePool::StaticClass();
	}
	struct Z_Construct_UClass_AProjectilePool_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PoolCapacity_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PoolCapacity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ProjectileClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AProjectilePool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Tank,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectilePool_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ProjectilePool.h" },
		{ "ModuleRelativePath", "ProjectilePool.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectilePool_Statics::NewProp_PoolCapacity_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "ProjectilePool.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AProjectilePool_Statics::NewProp_PoolCapacity = { "PoolCapacity", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProjectilePool, PoolCapacity), METADATA_PARAMS(Z_Construct_UClass_AProjectilePool_Statics::NewProp_PoolCapacity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProjectilePool_Statics::NewProp_PoolCapacity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectilePool_Statics::NewProp_ProjectileClass_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "ProjectilePool.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AProjectilePool_Statics::NewProp_ProjectileClass = { "ProjectileClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProjectilePool, ProjectileClass), Z_Construct_UClass_AProjectile_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AProjectilePool_Statics::NewProp_ProjectileClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AProjectilePool_Statics::NewProp_ProjectileClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AProjectilePool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectilePool_Statics::NewProp_PoolCapacity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectilePool_Statics::NewProp_ProjectileClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AProjectilePool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProjectilePool>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AProjectilePool_Statics::ClassParams = {
		&AProjectilePool::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AProjectilePool_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AProjectilePool_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AProjectilePool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AProjectilePool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AProjectilePool()
	{
		if (!Z_Registration_Info_UClass_AProjectilePool.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AProjectilePool.OuterSingleton, Z_Construct_UClass_AProjectilePool_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AProjectilePool.OuterSingleton;
	}
	template<> TANK_API UClass* StaticClass<AProjectilePool>()
	{
		return AProjectilePool::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProjectilePool);
	struct Z_CompiledInDeferFile_FID_Tank_Source_Tank_ProjectilePool_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Tank_Source_Tank_ProjectilePool_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AProjectilePool, AProjectilePool::StaticClass, TEXT("AProjectilePool"), &Z_Registration_Info_UClass_AProjectilePool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AProjectilePool), 283780788U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Tank_Source_Tank_ProjectilePool_h_2549964197(TEXT("/Script/Tank"),
		Z_CompiledInDeferFile_FID_Tank_Source_Tank_ProjectilePool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Tank_Source_Tank_ProjectilePool_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
