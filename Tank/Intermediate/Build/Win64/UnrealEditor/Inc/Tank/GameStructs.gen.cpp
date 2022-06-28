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
	TANK_API UEnum* Z_Construct_UEnum_Tank_ECannonType();
	UPackage* Z_Construct_UPackage__Script_Tank();
	TANK_API UClass* Z_Construct_UClass_UGameStructs_NoRegister();
	TANK_API UClass* Z_Construct_UClass_UGameStructs();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECannonType;
	static UEnum* ECannonType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECannonType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECannonType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Tank_ECannonType, Z_Construct_UPackage__Script_Tank(), TEXT("ECannonType"));
		}
		return Z_Registration_Info_UEnum_ECannonType.OuterSingleton;
	}
	template<> TANK_API UEnum* StaticEnum<ECannonType>()
	{
		return ECannonType_StaticEnum();
	}
	struct Z_Construct_UEnum_Tank_ECannonType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Tank_ECannonType_Statics::Enumerators[] = {
		{ "ECannonType::FireProjectile", (int64)ECannonType::FireProjectile },
		{ "ECannonType::FireTrace", (int64)ECannonType::FireTrace },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Tank_ECannonType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "FireProjectile.DisplayName", "Use Projectile" },
		{ "FireProjectile.Name", "ECannonType::FireProjectile" },
		{ "FireTrace.DisplayName", "Use Trace" },
		{ "FireTrace.Name", "ECannonType::FireTrace" },
		{ "ModuleRelativePath", "GameStructs.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Tank_ECannonType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Tank,
		nullptr,
		"ECannonType",
		"ECannonType",
		Z_Construct_UEnum_Tank_ECannonType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Tank_ECannonType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Tank_ECannonType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Tank_ECannonType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Tank_ECannonType()
	{
		if (!Z_Registration_Info_UEnum_ECannonType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECannonType.InnerSingleton, Z_Construct_UEnum_Tank_ECannonType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECannonType.InnerSingleton;
	}
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
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Tank_Source_Tank_GameStructs_h_Statics::EnumInfo[] = {
		{ ECannonType_StaticEnum, TEXT("ECannonType"), &Z_Registration_Info_UEnum_ECannonType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 361191707U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Tank_Source_Tank_GameStructs_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGameStructs, UGameStructs::StaticClass, TEXT("UGameStructs"), &Z_Registration_Info_UClass_UGameStructs, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameStructs), 1206878482U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Tank_Source_Tank_GameStructs_h_3037012268(TEXT("/Script/Tank"),
		Z_CompiledInDeferFile_FID_Tank_Source_Tank_GameStructs_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Tank_Source_Tank_GameStructs_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Tank_Source_Tank_GameStructs_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Tank_Source_Tank_GameStructs_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
