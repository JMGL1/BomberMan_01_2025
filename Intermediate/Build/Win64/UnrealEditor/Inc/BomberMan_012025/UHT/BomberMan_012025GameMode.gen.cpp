// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_012025/BomberMan_012025GameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBomberMan_012025GameMode() {}

// Begin Cross Module References
BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABomberMan_012025GameMode();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABomberMan_012025GameMode_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_BomberMan_012025();
// End Cross Module References

// Begin Class ABomberMan_012025GameMode Function ActivateSpeedBoost
struct Z_Construct_UFunction_ABomberMan_012025GameMode_ActivateSpeedBoost_Statics
{
	struct BomberMan_012025GameMode_eventActivateSpeedBoost_Parms
	{
		ACharacter* PlayerCharacter;
		float SpeedBoostAmount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BomberMan_012025GameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerCharacter;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpeedBoostAmount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABomberMan_012025GameMode_ActivateSpeedBoost_Statics::NewProp_PlayerCharacter = { "PlayerCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BomberMan_012025GameMode_eventActivateSpeedBoost_Parms, PlayerCharacter), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABomberMan_012025GameMode_ActivateSpeedBoost_Statics::NewProp_SpeedBoostAmount = { "SpeedBoostAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BomberMan_012025GameMode_eventActivateSpeedBoost_Parms, SpeedBoostAmount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABomberMan_012025GameMode_ActivateSpeedBoost_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABomberMan_012025GameMode_ActivateSpeedBoost_Statics::NewProp_PlayerCharacter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABomberMan_012025GameMode_ActivateSpeedBoost_Statics::NewProp_SpeedBoostAmount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABomberMan_012025GameMode_ActivateSpeedBoost_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABomberMan_012025GameMode_ActivateSpeedBoost_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABomberMan_012025GameMode, nullptr, "ActivateSpeedBoost", nullptr, nullptr, Z_Construct_UFunction_ABomberMan_012025GameMode_ActivateSpeedBoost_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABomberMan_012025GameMode_ActivateSpeedBoost_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABomberMan_012025GameMode_ActivateSpeedBoost_Statics::BomberMan_012025GameMode_eventActivateSpeedBoost_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABomberMan_012025GameMode_ActivateSpeedBoost_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABomberMan_012025GameMode_ActivateSpeedBoost_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ABomberMan_012025GameMode_ActivateSpeedBoost_Statics::BomberMan_012025GameMode_eventActivateSpeedBoost_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABomberMan_012025GameMode_ActivateSpeedBoost()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABomberMan_012025GameMode_ActivateSpeedBoost_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABomberMan_012025GameMode::execActivateSpeedBoost)
{
	P_GET_OBJECT(ACharacter,Z_Param_PlayerCharacter);
	P_GET_PROPERTY(FFloatProperty,Z_Param_SpeedBoostAmount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ActivateSpeedBoost(Z_Param_PlayerCharacter,Z_Param_SpeedBoostAmount);
	P_NATIVE_END;
}
// End Class ABomberMan_012025GameMode Function ActivateSpeedBoost

// Begin Class ABomberMan_012025GameMode
void ABomberMan_012025GameMode::StaticRegisterNativesABomberMan_012025GameMode()
{
	UClass* Class = ABomberMan_012025GameMode::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ActivateSpeedBoost", &ABomberMan_012025GameMode::execActivateSpeedBoost },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABomberMan_012025GameMode);
UClass* Z_Construct_UClass_ABomberMan_012025GameMode_NoRegister()
{
	return ABomberMan_012025GameMode::StaticClass();
}
struct Z_Construct_UClass_ABomberMan_012025GameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "BomberMan_012025GameMode.h" },
		{ "ModuleRelativePath", "BomberMan_012025GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ABomberMan_012025GameMode_ActivateSpeedBoost, "ActivateSpeedBoost" }, // 2766772264
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABomberMan_012025GameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABomberMan_012025GameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_012025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABomberMan_012025GameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABomberMan_012025GameMode_Statics::ClassParams = {
	&ABomberMan_012025GameMode::StaticClass,
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
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABomberMan_012025GameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ABomberMan_012025GameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABomberMan_012025GameMode()
{
	if (!Z_Registration_Info_UClass_ABomberMan_012025GameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABomberMan_012025GameMode.OuterSingleton, Z_Construct_UClass_ABomberMan_012025GameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABomberMan_012025GameMode.OuterSingleton;
}
template<> BOMBERMAN_012025_API UClass* StaticClass<ABomberMan_012025GameMode>()
{
	return ABomberMan_012025GameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABomberMan_012025GameMode);
ABomberMan_012025GameMode::~ABomberMan_012025GameMode() {}
// End Class ABomberMan_012025GameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_BomberMan_012025GameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABomberMan_012025GameMode, ABomberMan_012025GameMode::StaticClass, TEXT("ABomberMan_012025GameMode"), &Z_Registration_Info_UClass_ABomberMan_012025GameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABomberMan_012025GameMode), 2087694418U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_BomberMan_012025GameMode_h_230161900(TEXT("/Script/BomberMan_012025"),
	Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_BomberMan_012025GameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_BomberMan_012025GameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
