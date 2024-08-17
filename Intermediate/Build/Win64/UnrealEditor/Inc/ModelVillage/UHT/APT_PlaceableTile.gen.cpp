// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModelVillage/APT_PlaceableTile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAPT_PlaceableTile() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	MODELVILLAGE_API UClass* Z_Construct_UClass_AAPT_PlaceableTile();
	MODELVILLAGE_API UClass* Z_Construct_UClass_AAPT_PlaceableTile_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ModelVillage();
// End Cross Module References
	void AAPT_PlaceableTile::StaticRegisterNativesAAPT_PlaceableTile()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAPT_PlaceableTile);
	UClass* Z_Construct_UClass_AAPT_PlaceableTile_NoRegister()
	{
		return AAPT_PlaceableTile::StaticClass();
	}
	struct Z_Construct_UClass_AAPT_PlaceableTile_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAPT_PlaceableTile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ModelVillage,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAPT_PlaceableTile_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAPT_PlaceableTile_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "APT_PlaceableTile.h" },
		{ "ModuleRelativePath", "APT_PlaceableTile.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAPT_PlaceableTile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAPT_PlaceableTile>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAPT_PlaceableTile_Statics::ClassParams = {
		&AAPT_PlaceableTile::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAPT_PlaceableTile_Statics::Class_MetaDataParams), Z_Construct_UClass_AAPT_PlaceableTile_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AAPT_PlaceableTile()
	{
		if (!Z_Registration_Info_UClass_AAPT_PlaceableTile.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAPT_PlaceableTile.OuterSingleton, Z_Construct_UClass_AAPT_PlaceableTile_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AAPT_PlaceableTile.OuterSingleton;
	}
	template<> MODELVILLAGE_API UClass* StaticClass<AAPT_PlaceableTile>()
	{
		return AAPT_PlaceableTile::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAPT_PlaceableTile);
	AAPT_PlaceableTile::~AAPT_PlaceableTile() {}
	struct Z_CompiledInDeferFile_FID_Users_Chiu_Cho_Hin_Documents_Unreal_Projects_ModelVillage_Source_ModelVillage_APT_PlaceableTile_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Chiu_Cho_Hin_Documents_Unreal_Projects_ModelVillage_Source_ModelVillage_APT_PlaceableTile_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AAPT_PlaceableTile, AAPT_PlaceableTile::StaticClass, TEXT("AAPT_PlaceableTile"), &Z_Registration_Info_UClass_AAPT_PlaceableTile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAPT_PlaceableTile), 1110489021U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Chiu_Cho_Hin_Documents_Unreal_Projects_ModelVillage_Source_ModelVillage_APT_PlaceableTile_h_3180403291(TEXT("/Script/ModelVillage"),
		Z_CompiledInDeferFile_FID_Users_Chiu_Cho_Hin_Documents_Unreal_Projects_ModelVillage_Source_ModelVillage_APT_PlaceableTile_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Chiu_Cho_Hin_Documents_Unreal_Projects_ModelVillage_Source_ModelVillage_APT_PlaceableTile_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
