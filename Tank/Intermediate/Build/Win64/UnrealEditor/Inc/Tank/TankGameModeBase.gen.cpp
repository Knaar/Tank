// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tank/TankGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTankGameModeBase() {}
// Cross Module References
	TANK_API UClass* Z_Construct_UClass_ATankGameModeBase_NoRegister();
	TANK_API UClass* Z_Construct_UClass_ATankGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Tank();
// End Cross Module References
	void ATankGameModeBase::StaticRegisterNativesATankGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATankGameModeBase);
	UClass* Z_Construct_UClass_ATankGameModeBase_NoRegister()
	{
		return ATankGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ATankGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATankGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Tank,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATankGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "TankGameModeBase.h" },
		{ "ModuleRelativePath", "TankGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATankGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATankGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATankGameModeBase_Statics::ClassParams = {
		&ATankGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ATankGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATankGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATankGameModeBase()
	{
		if (!Z_Registration_Info_UClass_ATankGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATankGameModeBase.OuterSingleton, Z_Construct_UClass_ATankGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATankGameModeBase.OuterSingleton;
	}
	template<> TANK_API UClass* StaticClass<ATankGameModeBase>()
	{
		return ATankGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATankGameModeBase);
	struct Z_CompiledInDeferFile_FID_Tank_Source_Tank_TankGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Tank_Source_Tank_TankGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATankGameModeBase, ATankGameModeBase::StaticClass, TEXT("ATankGameModeBase"), &Z_Registration_Info_UClass_ATankGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATankGameModeBase), 1911981120U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Tank_Source_Tank_TankGameModeBase_h_2356599050(TEXT("/Script/Tank"),
		Z_CompiledInDeferFile_FID_Tank_Source_Tank_TankGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Tank_Source_Tank_TankGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
