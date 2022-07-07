// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tank/MachinePawn.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMachinePawn() {}
// Cross Module References
	TANK_API UClass* Z_Construct_UClass_AMachinePawn_NoRegister();
	TANK_API UClass* Z_Construct_UClass_AMachinePawn();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_Tank();
// End Cross Module References
	DEFINE_FUNCTION(AMachinePawn::execDie)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Die();
		P_NATIVE_END;
	}
	void AMachinePawn::StaticRegisterNativesAMachinePawn()
	{
		UClass* Class = AMachinePawn::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Die", &AMachinePawn::execDie },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMachinePawn_Die_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMachinePawn_Die_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MachinePawn.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMachinePawn_Die_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMachinePawn, nullptr, "Die", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMachinePawn_Die_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMachinePawn_Die_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMachinePawn_Die()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMachinePawn_Die_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMachinePawn);
	UClass* Z_Construct_UClass_AMachinePawn_NoRegister()
	{
		return AMachinePawn::StaticClass();
	}
	struct Z_Construct_UClass_AMachinePawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMachinePawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_Tank,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMachinePawn_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMachinePawn_Die, "Die" }, // 3829653987
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMachinePawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MachinePawn.h" },
		{ "ModuleRelativePath", "MachinePawn.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMachinePawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMachinePawn>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMachinePawn_Statics::ClassParams = {
		&AMachinePawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMachinePawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMachinePawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMachinePawn()
	{
		if (!Z_Registration_Info_UClass_AMachinePawn.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMachinePawn.OuterSingleton, Z_Construct_UClass_AMachinePawn_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMachinePawn.OuterSingleton;
	}
	template<> TANK_API UClass* StaticClass<AMachinePawn>()
	{
		return AMachinePawn::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMachinePawn);
	struct Z_CompiledInDeferFile_FID_Tank_Source_Tank_MachinePawn_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Tank_Source_Tank_MachinePawn_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMachinePawn, AMachinePawn::StaticClass, TEXT("AMachinePawn"), &Z_Registration_Info_UClass_AMachinePawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMachinePawn), 3791102241U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Tank_Source_Tank_MachinePawn_h_2405999039(TEXT("/Script/Tank"),
		Z_CompiledInDeferFile_FID_Tank_Source_Tank_MachinePawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Tank_Source_Tank_MachinePawn_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
