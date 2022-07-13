// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tank/Scorable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeScorable() {}
// Cross Module References
	TANK_API UClass* Z_Construct_UClass_UScorable_NoRegister();
	TANK_API UClass* Z_Construct_UClass_UScorable();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Tank();
// End Cross Module References
	void UScorable::StaticRegisterNativesUScorable()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UScorable);
	UClass* Z_Construct_UClass_UScorable_NoRegister()
	{
		return UScorable::StaticClass();
	}
	struct Z_Construct_UClass_UScorable_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UScorable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Tank,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScorable_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Scorable.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UScorable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IScorable>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UScorable_Statics::ClassParams = {
		&UScorable::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UScorable_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UScorable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UScorable()
	{
		if (!Z_Registration_Info_UClass_UScorable.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UScorable.OuterSingleton, Z_Construct_UClass_UScorable_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UScorable.OuterSingleton;
	}
	template<> TANK_API UClass* StaticClass<UScorable>()
	{
		return UScorable::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UScorable);
	struct Z_CompiledInDeferFile_FID_Tank_Source_Tank_Scorable_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Tank_Source_Tank_Scorable_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UScorable, UScorable::StaticClass, TEXT("UScorable"), &Z_Registration_Info_UClass_UScorable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UScorable), 1521670676U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Tank_Source_Tank_Scorable_h_1559781831(TEXT("/Script/Tank"),
		Z_CompiledInDeferFile_FID_Tank_Source_Tank_Scorable_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Tank_Source_Tank_Scorable_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
