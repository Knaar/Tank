// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTank_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Tank;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Tank()
	{
		if (!Z_Registration_Info_UPackage__Script_Tank.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Tank",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x20C10DB1,
				0x66301AEA,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Tank.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Tank.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Tank(Z_Construct_UPackage__Script_Tank, TEXT("/Script/Tank"), Z_Registration_Info_UPackage__Script_Tank, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x20C10DB1, 0x66301AEA));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
