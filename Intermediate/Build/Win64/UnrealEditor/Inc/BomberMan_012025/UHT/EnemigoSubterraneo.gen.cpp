// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_012025/EnemigoSubterraneo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemigoSubterraneo() {}

// Begin Cross Module References
BOMBERMAN_012025_API UClass* Z_Construct_UClass_AEnemigo();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_AEnemigoSubterraneo();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_AEnemigoSubterraneo_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_BomberMan_012025();
// End Cross Module References

// Begin Class AEnemigoSubterraneo
void AEnemigoSubterraneo::StaticRegisterNativesAEnemigoSubterraneo()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEnemigoSubterraneo);
UClass* Z_Construct_UClass_AEnemigoSubterraneo_NoRegister()
{
	return AEnemigoSubterraneo::StaticClass();
}
struct Z_Construct_UClass_AEnemigoSubterraneo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "EnemigoSubterraneo.h" },
		{ "ModuleRelativePath", "EnemigoSubterraneo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MallaSubterranea_MetaData[] = {
		{ "Category", "Componentes" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "EnemigoSubterraneo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DireccionActual_MetaData[] = {
		{ "Category", "Movimiento Subterr\xef\xbf\xbdneo" },
		{ "ModuleRelativePath", "EnemigoSubterraneo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TiempoEntreEmergencias_MetaData[] = {
		{ "Category", "Emergencia" },
		{ "ModuleRelativePath", "EnemigoSubterraneo.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MallaSubterranea;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DireccionActual;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TiempoEntreEmergencias;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemigoSubterraneo>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemigoSubterraneo_Statics::NewProp_MallaSubterranea = { "MallaSubterranea", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemigoSubterraneo, MallaSubterranea), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MallaSubterranea_MetaData), NewProp_MallaSubterranea_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AEnemigoSubterraneo_Statics::NewProp_DireccionActual = { "DireccionActual", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemigoSubterraneo, DireccionActual), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DireccionActual_MetaData), NewProp_DireccionActual_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEnemigoSubterraneo_Statics::NewProp_TiempoEntreEmergencias = { "TiempoEntreEmergencias", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemigoSubterraneo, TiempoEntreEmergencias), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TiempoEntreEmergencias_MetaData), NewProp_TiempoEntreEmergencias_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemigoSubterraneo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemigoSubterraneo_Statics::NewProp_MallaSubterranea,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemigoSubterraneo_Statics::NewProp_DireccionActual,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemigoSubterraneo_Statics::NewProp_TiempoEntreEmergencias,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigoSubterraneo_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AEnemigoSubterraneo_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AEnemigo,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_012025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigoSubterraneo_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemigoSubterraneo_Statics::ClassParams = {
	&AEnemigoSubterraneo::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AEnemigoSubterraneo_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigoSubterraneo_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigoSubterraneo_Statics::Class_MetaDataParams), Z_Construct_UClass_AEnemigoSubterraneo_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AEnemigoSubterraneo()
{
	if (!Z_Registration_Info_UClass_AEnemigoSubterraneo.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemigoSubterraneo.OuterSingleton, Z_Construct_UClass_AEnemigoSubterraneo_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AEnemigoSubterraneo.OuterSingleton;
}
template<> BOMBERMAN_012025_API UClass* StaticClass<AEnemigoSubterraneo>()
{
	return AEnemigoSubterraneo::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemigoSubterraneo);
AEnemigoSubterraneo::~AEnemigoSubterraneo() {}
// End Class AEnemigoSubterraneo

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_EnemigoSubterraneo_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AEnemigoSubterraneo, AEnemigoSubterraneo::StaticClass, TEXT("AEnemigoSubterraneo"), &Z_Registration_Info_UClass_AEnemigoSubterraneo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemigoSubterraneo), 2888543345U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_EnemigoSubterraneo_h_2633952956(TEXT("/Script/BomberMan_012025"),
	Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_EnemigoSubterraneo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_EnemigoSubterraneo_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
