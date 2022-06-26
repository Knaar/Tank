// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tank/TankController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTankController() {}
// Cross Module References
	TANK_API UClass* Z_Construct_UClass_ATankController_NoRegister();
	TANK_API UClass* Z_Construct_UClass_ATankController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_Tank();
// End Cross Module References
	void ATankController::StaticRegisterNativesATankController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATankController);
	UClass* Z_Construct_UClass_ATankController_NoRegister()
	{
		return ATankController::StaticClass();
	}
	struct Z_Construct_UClass_ATankController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATankController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_Tank,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATankController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "TankController.h" },
		{ "ModuleRelativePath", "TankController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATankController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATankController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATankController_Statics::ClassParams = {
		&ATankController::StaticClass,
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
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATankController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATankController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATankController()
	{
		if (!Z_Registration_Info_UClass_ATankController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATankController.OuterSingleton, Z_Construct_UClass_ATankController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATankController.OuterSingleton;
	}
	template<> TANK_API UClass* StaticClass<ATankController>()
	{
		return ATankController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATankController);
	struct Z_CompiledInDeferFile_FID_Tank_Source_Tank_TankController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Tank_Source_Tank_TankController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATankController, ATankController::StaticClass, TEXT("ATankController"), &Z_Registration_Info_UClass_ATankController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATankController), 1759430598U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Tank_Source_Tank_TankController_h_2226603513(TEXT("/Script/Tank"),
		Z_CompiledInDeferFile_FID_Tank_Source_Tank_TankController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Tank_Source_Tank_TankController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
