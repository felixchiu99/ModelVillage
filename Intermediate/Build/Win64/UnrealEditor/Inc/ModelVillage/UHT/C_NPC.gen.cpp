// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModelVillage/C_NPC.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeC_NPC() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	MODELVILLAGE_API UClass* Z_Construct_UClass_AC_NPC();
	MODELVILLAGE_API UClass* Z_Construct_UClass_AC_NPC_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ModelVillage();
// End Cross Module References
	void AC_NPC::StaticRegisterNativesAC_NPC()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AC_NPC);
	UClass* Z_Construct_UClass_AC_NPC_NoRegister()
	{
		return AC_NPC::StaticClass();
	}
	struct Z_Construct_UClass_AC_NPC_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AC_NPC_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_ModelVillage,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AC_NPC_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC_NPC_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "C_NPC.h" },
		{ "ModuleRelativePath", "C_NPC.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AC_NPC_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AC_NPC>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AC_NPC_Statics::ClassParams = {
		&AC_NPC::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AC_NPC_Statics::Class_MetaDataParams), Z_Construct_UClass_AC_NPC_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AC_NPC()
	{
		if (!Z_Registration_Info_UClass_AC_NPC.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AC_NPC.OuterSingleton, Z_Construct_UClass_AC_NPC_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AC_NPC.OuterSingleton;
	}
	template<> MODELVILLAGE_API UClass* StaticClass<AC_NPC>()
	{
		return AC_NPC::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AC_NPC);
	AC_NPC::~AC_NPC() {}
	struct Z_CompiledInDeferFile_FID_Users_Chiu_Cho_Hin_Documents_Unreal_Projects_ModelVillage_Source_ModelVillage_C_NPC_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Chiu_Cho_Hin_Documents_Unreal_Projects_ModelVillage_Source_ModelVillage_C_NPC_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AC_NPC, AC_NPC::StaticClass, TEXT("AC_NPC"), &Z_Registration_Info_UClass_AC_NPC, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AC_NPC), 1988569599U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Chiu_Cho_Hin_Documents_Unreal_Projects_ModelVillage_Source_ModelVillage_C_NPC_h_2307198856(TEXT("/Script/ModelVillage"),
		Z_CompiledInDeferFile_FID_Users_Chiu_Cho_Hin_Documents_Unreal_Projects_ModelVillage_Source_ModelVillage_C_NPC_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Chiu_Cho_Hin_Documents_Unreal_Projects_ModelVillage_Source_ModelVillage_C_NPC_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
