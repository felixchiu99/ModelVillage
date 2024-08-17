// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModelVillage_init() {}
	MODELVILLAGE_API UFunction* Z_Construct_UDelegateFunction_ModelVillage_OnPickUp__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_ModelVillage;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_ModelVillage()
	{
		if (!Z_Registration_Info_UPackage__Script_ModelVillage.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_ModelVillage_OnPickUp__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/ModelVillage",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x5634111F,
				0xDAEC60C0,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_ModelVillage.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_ModelVillage.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_ModelVillage(Z_Construct_UPackage__Script_ModelVillage, TEXT("/Script/ModelVillage"), Z_Registration_Info_UPackage__Script_ModelVillage, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x5634111F, 0xDAEC60C0));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
