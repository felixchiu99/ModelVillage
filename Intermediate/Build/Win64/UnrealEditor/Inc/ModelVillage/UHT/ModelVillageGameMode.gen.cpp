// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModelVillage/ModelVillageGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModelVillageGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	MODELVILLAGE_API UClass* Z_Construct_UClass_AModelVillageGameMode();
	MODELVILLAGE_API UClass* Z_Construct_UClass_AModelVillageGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ModelVillage();
// End Cross Module References
	void AModelVillageGameMode::StaticRegisterNativesAModelVillageGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AModelVillageGameMode);
	UClass* Z_Construct_UClass_AModelVillageGameMode_NoRegister()
	{
		return AModelVillageGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AModelVillageGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AModelVillageGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ModelVillage,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AModelVillageGameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AModelVillageGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ModelVillageGameMode.h" },
		{ "ModuleRelativePath", "ModelVillageGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AModelVillageGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AModelVillageGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AModelVillageGameMode_Statics::ClassParams = {
		&AModelVillageGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AModelVillageGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AModelVillageGameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AModelVillageGameMode()
	{
		if (!Z_Registration_Info_UClass_AModelVillageGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AModelVillageGameMode.OuterSingleton, Z_Construct_UClass_AModelVillageGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AModelVillageGameMode.OuterSingleton;
	}
	template<> MODELVILLAGE_API UClass* StaticClass<AModelVillageGameMode>()
	{
		return AModelVillageGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AModelVillageGameMode);
	AModelVillageGameMode::~AModelVillageGameMode() {}
	struct Z_CompiledInDeferFile_FID_Users_Chiu_Cho_Hin_Documents_Unreal_Projects_ModelVillage_Source_ModelVillage_ModelVillageGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Chiu_Cho_Hin_Documents_Unreal_Projects_ModelVillage_Source_ModelVillage_ModelVillageGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AModelVillageGameMode, AModelVillageGameMode::StaticClass, TEXT("AModelVillageGameMode"), &Z_Registration_Info_UClass_AModelVillageGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AModelVillageGameMode), 139732220U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Chiu_Cho_Hin_Documents_Unreal_Projects_ModelVillage_Source_ModelVillage_ModelVillageGameMode_h_3874300367(TEXT("/Script/ModelVillage"),
		Z_CompiledInDeferFile_FID_Users_Chiu_Cho_Hin_Documents_Unreal_Projects_ModelVillage_Source_ModelVillage_ModelVillageGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Chiu_Cho_Hin_Documents_Unreal_Projects_ModelVillage_Source_ModelVillage_ModelVillageGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
