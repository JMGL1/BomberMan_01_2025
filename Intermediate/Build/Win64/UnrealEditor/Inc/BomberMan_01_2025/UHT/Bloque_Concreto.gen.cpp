// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_01_2025/Bloque_Concreto.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloque_Concreto() {}

// Begin Cross Module References
BOMBERMAN_01_2025_API UClass* Z_Construct_UClass_ABloque_Concreto();
BOMBERMAN_01_2025_API UClass* Z_Construct_UClass_ABloque_Concreto_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_BomberMan_01_2025();
// End Cross Module References

// Begin Class ABloque_Concreto
void ABloque_Concreto::StaticRegisterNativesABloque_Concreto()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABloque_Concreto);
UClass* Z_Construct_UClass_ABloque_Concreto_NoRegister()
{
	return ABloque_Concreto::StaticClass();
}
struct Z_Construct_UClass_ABloque_Concreto_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Bloque_Concreto.h" },
		{ "ModuleRelativePath", "Bloque_Concreto.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABloque_Concreto>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ABloque_Concreto_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_01_2025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABloque_Concreto_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABloque_Concreto_Statics::ClassParams = {
	&ABloque_Concreto::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABloque_Concreto_Statics::Class_MetaDataParams), Z_Construct_UClass_ABloque_Concreto_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABloque_Concreto()
{
	if (!Z_Registration_Info_UClass_ABloque_Concreto.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABloque_Concreto.OuterSingleton, Z_Construct_UClass_ABloque_Concreto_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABloque_Concreto.OuterSingleton;
}
template<> BOMBERMAN_01_2025_API UClass* StaticClass<ABloque_Concreto>()
{
	return ABloque_Concreto::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABloque_Concreto);
ABloque_Concreto::~ABloque_Concreto() {}
// End Class ABloque_Concreto

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_X13_Documents_Unreal_Projects_BomberMan_01_2025_Source_BomberMan_01_2025_Bloque_Concreto_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABloque_Concreto, ABloque_Concreto::StaticClass, TEXT("ABloque_Concreto"), &Z_Registration_Info_UClass_ABloque_Concreto, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABloque_Concreto), 1204212112U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_X13_Documents_Unreal_Projects_BomberMan_01_2025_Source_BomberMan_01_2025_Bloque_Concreto_h_85906017(TEXT("/Script/BomberMan_01_2025"),
	Z_CompiledInDeferFile_FID_Users_X13_Documents_Unreal_Projects_BomberMan_01_2025_Source_BomberMan_01_2025_Bloque_Concreto_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_X13_Documents_Unreal_Projects_BomberMan_01_2025_Source_BomberMan_01_2025_Bloque_Concreto_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
