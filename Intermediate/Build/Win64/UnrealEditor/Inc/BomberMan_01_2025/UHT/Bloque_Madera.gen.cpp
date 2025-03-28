// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_01_2025/Bloque_Madera.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloque_Madera() {}

// Begin Cross Module References
BOMBERMAN_01_2025_API UClass* Z_Construct_UClass_ABloque_Madera();
BOMBERMAN_01_2025_API UClass* Z_Construct_UClass_ABloque_Madera_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_BomberMan_01_2025();
// End Cross Module References

// Begin Class ABloque_Madera
void ABloque_Madera::StaticRegisterNativesABloque_Madera()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABloque_Madera);
UClass* Z_Construct_UClass_ABloque_Madera_NoRegister()
{
	return ABloque_Madera::StaticClass();
}
struct Z_Construct_UClass_ABloque_Madera_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Bloque_Madera.h" },
		{ "ModuleRelativePath", "Bloque_Madera.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABloque_Madera>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABloque_Madera_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_01_2025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABloque_Madera_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABloque_Madera_Statics::ClassParams = {
	&ABloque_Madera::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABloque_Madera_Statics::Class_MetaDataParams), Z_Construct_UClass_ABloque_Madera_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABloque_Madera()
{
	if (!Z_Registration_Info_UClass_ABloque_Madera.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABloque_Madera.OuterSingleton, Z_Construct_UClass_ABloque_Madera_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABloque_Madera.OuterSingleton;
}
template<> BOMBERMAN_01_2025_API UClass* StaticClass<ABloque_Madera>()
{
	return ABloque_Madera::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABloque_Madera);
ABloque_Madera::~ABloque_Madera() {}
// End Class ABloque_Madera

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_X13_Documents_Unreal_Projects_BomberMan_01_2025_Source_BomberMan_01_2025_Bloque_Madera_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABloque_Madera, ABloque_Madera::StaticClass, TEXT("ABloque_Madera"), &Z_Registration_Info_UClass_ABloque_Madera, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABloque_Madera), 1449148673U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_X13_Documents_Unreal_Projects_BomberMan_01_2025_Source_BomberMan_01_2025_Bloque_Madera_h_2244109510(TEXT("/Script/BomberMan_01_2025"),
	Z_CompiledInDeferFile_FID_Users_X13_Documents_Unreal_Projects_BomberMan_01_2025_Source_BomberMan_01_2025_Bloque_Madera_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_X13_Documents_Unreal_Projects_BomberMan_01_2025_Source_BomberMan_01_2025_Bloque_Madera_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
