// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tank/GameStructs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameStructs() {}
// Cross Module References
	TANK_API UClass* Z_Construct_UClass_UGameStructs_NoRegister();
	TANK_API UClass* Z_Construct_UClass_UGameStructs();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Tank();
// End Cross Module References
	void UGameStructs::StaticRegisterNativesUGameStructs()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameStructs);
	UClass* Z_Construct_UClass_UGameStructs_NoRegister()
	{
		return UGameStructs::StaticClass();
	}
	struct Z_Construct_UClass_UGameStructs_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameStructs_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Tank,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameStructs_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "GameStructs.h" },
		{ "ModuleRelativePath", "GameStructs.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameStructs_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameStructs>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameStructs_Statics::ClassParams = {
		&UGameStructs::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGameStructs_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameStructs_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameStructs()
	{
		if (!Z_Registration_Info_UClass_UGameStructs.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameStructs.OuterSingleton, Z_Construct_UClass_UGameStructs_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGameStructs.OuterSingleton;
	}
	template<> TANK_API UClass* StaticClass<UGameStructs>()
	{
		return UGameStructs::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameStructs);
	struct Z_CompiledInDeferFile_FID_Tank_Source_Tank_GameStructs_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Tank_Source_Tank_GameStructs_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGameStructs, UGameStructs::StaticClass, TEXT("UGameStructs"), &Z_Registration_Info_UClass_UGameStructs, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameStructs), 3853758432U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Tank_Source_Tank_GameStructs_h_2190608310(TEXT("/Script/Tank"),
		Z_CompiledInDeferFile_FID_Tank_Source_Tank_GameStructs_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Tank_Source_Tank_GameStructs_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
