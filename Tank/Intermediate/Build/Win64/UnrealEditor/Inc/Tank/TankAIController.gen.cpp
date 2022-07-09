// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tank/TankAIController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTankAIController() {}
// Cross Module References
	TANK_API UClass* Z_Construct_UClass_ATankAIController_NoRegister();
	TANK_API UClass* Z_Construct_UClass_ATankAIController();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	UPackage* Z_Construct_UPackage__Script_Tank();
	TANK_API UClass* Z_Construct_UClass_ATankPawn_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void ATankAIController::StaticRegisterNativesATankAIController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATankAIController);
	UClass* Z_Construct_UClass_ATankAIController_NoRegister()
	{
		return ATankAIController::StaticClass();
	}
	struct Z_Construct_UClass_ATankAIController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TankPawn_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TankPawn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerPawn_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerPawn;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PatrollingPath_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PatrollingPath_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PatrollingPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementAccurency_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MovementAccurency;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetingRange_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetingRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetingSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetingSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Accurency_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Accurency;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATankAIController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_Tank,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATankAIController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "TankAIController.h" },
		{ "ModuleRelativePath", "TankAIController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATankAIController_Statics::NewProp_TankPawn_MetaData[] = {
		{ "ModuleRelativePath", "TankAIController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATankAIController_Statics::NewProp_TankPawn = { "TankPawn", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATankAIController, TankPawn), Z_Construct_UClass_ATankPawn_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATankAIController_Statics::NewProp_TankPawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATankAIController_Statics::NewProp_TankPawn_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATankAIController_Statics::NewProp_PlayerPawn_MetaData[] = {
		{ "ModuleRelativePath", "TankAIController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATankAIController_Statics::NewProp_PlayerPawn = { "PlayerPawn", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATankAIController, PlayerPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATankAIController_Statics::NewProp_PlayerPawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATankAIController_Statics::NewProp_PlayerPawn_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATankAIController_Statics::NewProp_PatrollingPath_Inner = { "PatrollingPath", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATankAIController_Statics::NewProp_PatrollingPath_MetaData[] = {
		{ "Category", "AI | Movement" },
		{ "ModuleRelativePath", "TankAIController.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATankAIController_Statics::NewProp_PatrollingPath = { "PatrollingPath", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATankAIController, PatrollingPath), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ATankAIController_Statics::NewProp_PatrollingPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATankAIController_Statics::NewProp_PatrollingPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATankAIController_Statics::NewProp_MovementAccurency_MetaData[] = {
		{ "Category", "AI | Movement" },
		{ "ModuleRelativePath", "TankAIController.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATankAIController_Statics::NewProp_MovementAccurency = { "MovementAccurency", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATankAIController, MovementAccurency), METADATA_PARAMS(Z_Construct_UClass_ATankAIController_Statics::NewProp_MovementAccurency_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATankAIController_Statics::NewProp_MovementAccurency_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATankAIController_Statics::NewProp_TargetingRange_MetaData[] = {
		{ "Category", "AI | Targeting" },
		{ "ModuleRelativePath", "TankAIController.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATankAIController_Statics::NewProp_TargetingRange = { "TargetingRange", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATankAIController, TargetingRange), METADATA_PARAMS(Z_Construct_UClass_ATankAIController_Statics::NewProp_TargetingRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATankAIController_Statics::NewProp_TargetingRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATankAIController_Statics::NewProp_TargetingSpeed_MetaData[] = {
		{ "Category", "AI | Targeting" },
		{ "ModuleRelativePath", "TankAIController.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATankAIController_Statics::NewProp_TargetingSpeed = { "TargetingSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATankAIController, TargetingSpeed), METADATA_PARAMS(Z_Construct_UClass_ATankAIController_Statics::NewProp_TargetingSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATankAIController_Statics::NewProp_TargetingSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATankAIController_Statics::NewProp_Accurency_MetaData[] = {
		{ "Category", "AI | Targeting" },
		{ "ModuleRelativePath", "TankAIController.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATankAIController_Statics::NewProp_Accurency = { "Accurency", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATankAIController, Accurency), METADATA_PARAMS(Z_Construct_UClass_ATankAIController_Statics::NewProp_Accurency_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATankAIController_Statics::NewProp_Accurency_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATankAIController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATankAIController_Statics::NewProp_TankPawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATankAIController_Statics::NewProp_PlayerPawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATankAIController_Statics::NewProp_PatrollingPath_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATankAIController_Statics::NewProp_PatrollingPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATankAIController_Statics::NewProp_MovementAccurency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATankAIController_Statics::NewProp_TargetingRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATankAIController_Statics::NewProp_TargetingSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATankAIController_Statics::NewProp_Accurency,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATankAIController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATankAIController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATankAIController_Statics::ClassParams = {
		&ATankAIController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ATankAIController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ATankAIController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATankAIController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATankAIController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATankAIController()
	{
		if (!Z_Registration_Info_UClass_ATankAIController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATankAIController.OuterSingleton, Z_Construct_UClass_ATankAIController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATankAIController.OuterSingleton;
	}
	template<> TANK_API UClass* StaticClass<ATankAIController>()
	{
		return ATankAIController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATankAIController);
	struct Z_CompiledInDeferFile_FID_Tank_Source_Tank_TankAIController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Tank_Source_Tank_TankAIController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATankAIController, ATankAIController::StaticClass, TEXT("ATankAIController"), &Z_Registration_Info_UClass_ATankAIController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATankAIController), 836792011U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Tank_Source_Tank_TankAIController_h_2853770521(TEXT("/Script/Tank"),
		Z_CompiledInDeferFile_FID_Tank_Source_Tank_TankAIController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Tank_Source_Tank_TankAIController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
