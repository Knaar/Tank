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
	TANK_API UScriptStruct* Z_Construct_UScriptStruct_FDamageData();
	TANK_API UClass* Z_Construct_UClass_ACannon_NoRegister();
	TANK_API UClass* Z_Construct_UClass_UHealthComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
	TANK_API UClass* Z_Construct_UClass_UDamageTaker_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AMachinePawn::execDie)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Die();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMachinePawn::execDamageTaked)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DamageValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DamageTaked(Z_Param_DamageValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AMachinePawn::execTakeDamage)
	{
		P_GET_STRUCT(FDamageData,Z_Param_DamageData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TakeDamage(Z_Param_DamageData);
		P_NATIVE_END;
	}
	void AMachinePawn::StaticRegisterNativesAMachinePawn()
	{
		UClass* Class = AMachinePawn::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DamageTaked", &AMachinePawn::execDamageTaked },
			{ "Die", &AMachinePawn::execDie },
			{ "TakeDamage", &AMachinePawn::execTakeDamage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMachinePawn_DamageTaked_Statics
	{
		struct MachinePawn_eventDamageTaked_Parms
		{
			float DamageValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMachinePawn_DamageTaked_Statics::NewProp_DamageValue = { "DamageValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MachinePawn_eventDamageTaked_Parms, DamageValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMachinePawn_DamageTaked_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMachinePawn_DamageTaked_Statics::NewProp_DamageValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMachinePawn_DamageTaked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MachinePawn.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMachinePawn_DamageTaked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMachinePawn, nullptr, "DamageTaked", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMachinePawn_DamageTaked_Statics::MachinePawn_eventDamageTaked_Parms), Z_Construct_UFunction_AMachinePawn_DamageTaked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMachinePawn_DamageTaked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMachinePawn_DamageTaked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMachinePawn_DamageTaked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMachinePawn_DamageTaked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMachinePawn_DamageTaked_Statics::FuncParams);
		}
		return ReturnFunction;
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
	struct Z_Construct_UFunction_AMachinePawn_TakeDamage_Statics
	{
		struct MachinePawn_eventTakeDamage_Parms
		{
			FDamageData DamageData;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_DamageData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMachinePawn_TakeDamage_Statics::NewProp_DamageData = { "DamageData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MachinePawn_eventTakeDamage_Parms, DamageData), Z_Construct_UScriptStruct_FDamageData, METADATA_PARAMS(nullptr, 0) }; // 1518367983
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMachinePawn_TakeDamage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMachinePawn_TakeDamage_Statics::NewProp_DamageData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMachinePawn_TakeDamage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MachinePawn.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMachinePawn_TakeDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMachinePawn, nullptr, "TakeDamage", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMachinePawn_TakeDamage_Statics::MachinePawn_eventTakeDamage_Parms), Z_Construct_UFunction_AMachinePawn_TakeDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMachinePawn_TakeDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMachinePawn_TakeDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMachinePawn_TakeDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMachinePawn_TakeDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMachinePawn_TakeDamage_Statics::FuncParams);
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Cannon_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Cannon;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HealthComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HealthComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AudioEffect_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AudioEffect;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AudioEffectDamaged_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AudioEffectDamaged;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMachinePawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_Tank,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMachinePawn_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMachinePawn_DamageTaked, "DamageTaked" }, // 230588454
		{ &Z_Construct_UFunction_AMachinePawn_Die, "Die" }, // 3829653987
		{ &Z_Construct_UFunction_AMachinePawn_TakeDamage, "TakeDamage" }, // 303983270
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMachinePawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MachinePawn.h" },
		{ "ModuleRelativePath", "MachinePawn.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMachinePawn_Statics::NewProp_Cannon_MetaData[] = {
		{ "ModuleRelativePath", "MachinePawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMachinePawn_Statics::NewProp_Cannon = { "Cannon", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMachinePawn, Cannon), Z_Construct_UClass_ACannon_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMachinePawn_Statics::NewProp_Cannon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMachinePawn_Statics::NewProp_Cannon_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMachinePawn_Statics::NewProp_HealthComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MachinePawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMachinePawn_Statics::NewProp_HealthComponent = { "HealthComponent", nullptr, (EPropertyFlags)0x00200800000b000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMachinePawn, HealthComponent), Z_Construct_UClass_UHealthComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMachinePawn_Statics::NewProp_HealthComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMachinePawn_Statics::NewProp_HealthComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMachinePawn_Statics::NewProp_AudioEffect_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MachinePawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMachinePawn_Statics::NewProp_AudioEffect = { "AudioEffect", nullptr, (EPropertyFlags)0x00200800000b000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMachinePawn, AudioEffect), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMachinePawn_Statics::NewProp_AudioEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMachinePawn_Statics::NewProp_AudioEffect_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMachinePawn_Statics::NewProp_AudioEffectDamaged_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MachinePawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMachinePawn_Statics::NewProp_AudioEffectDamaged = { "AudioEffectDamaged", nullptr, (EPropertyFlags)0x00200800000b000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMachinePawn, AudioEffectDamaged), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMachinePawn_Statics::NewProp_AudioEffectDamaged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMachinePawn_Statics::NewProp_AudioEffectDamaged_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMachinePawn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMachinePawn_Statics::NewProp_Cannon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMachinePawn_Statics::NewProp_HealthComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMachinePawn_Statics::NewProp_AudioEffect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMachinePawn_Statics::NewProp_AudioEffectDamaged,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AMachinePawn_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UDamageTaker_NoRegister, (int32)VTABLE_OFFSET(AMachinePawn, IDamageTaker), false },  // 4191389099
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMachinePawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMachinePawn>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMachinePawn_Statics::ClassParams = {
		&AMachinePawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMachinePawn_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMachinePawn_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
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
		{ Z_Construct_UClass_AMachinePawn, AMachinePawn::StaticClass, TEXT("AMachinePawn"), &Z_Registration_Info_UClass_AMachinePawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMachinePawn), 657869276U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Tank_Source_Tank_MachinePawn_h_2441928252(TEXT("/Script/Tank"),
		Z_CompiledInDeferFile_FID_Tank_Source_Tank_MachinePawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Tank_Source_Tank_MachinePawn_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
