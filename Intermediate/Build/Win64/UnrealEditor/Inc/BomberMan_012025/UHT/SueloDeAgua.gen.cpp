// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_012025/SueloDeAgua.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSueloDeAgua() {}

// Begin Cross Module References
BOMBERMAN_012025_API UClass* Z_Construct_UClass_ASueloDeAgua();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_ASueloDeAgua_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_BomberMan_012025();
// End Cross Module References

// Begin Class ASueloDeAgua
void ASueloDeAgua::StaticRegisterNativesASueloDeAgua()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASueloDeAgua);
UClass* Z_Construct_UClass_ASueloDeAgua_NoRegister()
{
	return ASueloDeAgua::StaticClass();
}
struct Z_Construct_UClass_ASueloDeAgua_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "SueloDeAgua.h" },
		{ "ModuleRelativePath", "SueloDeAgua.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[] = {
		{ "Category", "SueloDeAgua" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SueloDeAgua.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASueloDeAgua>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASueloDeAgua_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASueloDeAgua, Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mesh_MetaData), NewProp_Mesh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASueloDeAgua_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASueloDeAgua_Statics::NewProp_Mesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASueloDeAgua_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASueloDeAgua_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_012025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASueloDeAgua_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASueloDeAgua_Statics::ClassParams = {
	&ASueloDeAgua::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ASueloDeAgua_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ASueloDeAgua_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASueloDeAgua_Statics::Class_MetaDataParams), Z_Construct_UClass_ASueloDeAgua_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASueloDeAgua()
{
	if (!Z_Registration_Info_UClass_ASueloDeAgua.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASueloDeAgua.OuterSingleton, Z_Construct_UClass_ASueloDeAgua_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASueloDeAgua.OuterSingleton;
}
template<> BOMBERMAN_012025_API UClass* StaticClass<ASueloDeAgua>()
{
	return ASueloDeAgua::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASueloDeAgua);
ASueloDeAgua::~ASueloDeAgua() {}
// End Class ASueloDeAgua

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_SueloDeAgua_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASueloDeAgua, ASueloDeAgua::StaticClass, TEXT("ASueloDeAgua"), &Z_Registration_Info_UClass_ASueloDeAgua, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASueloDeAgua), 666381483U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_SueloDeAgua_h_3484074153(TEXT("/Script/BomberMan_012025"),
	Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_SueloDeAgua_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Magne_Documents_Unreal_Projects_BomberMan_012025_Source_BomberMan_012025_SueloDeAgua_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
