// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModelVillage/S_TileType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeS_TileType() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	MODELVILLAGE_API UClass* Z_Construct_UClass_AAPT_PlaceableTile_NoRegister();
	MODELVILLAGE_API UScriptStruct* Z_Construct_UScriptStruct_FS_TileType();
	UPackage* Z_Construct_UPackage__Script_ModelVillage();
// End Cross Module References

static_assert(std::is_polymorphic<FS_TileType>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FS_TileType cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_S_TileType;
class UScriptStruct* FS_TileType::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_S_TileType.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_S_TileType.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FS_TileType, (UObject*)Z_Construct_UPackage__Script_ModelVillage(), TEXT("S_TileType"));
	}
	return Z_Registration_Info_UScriptStruct_S_TileType.OuterSingleton;
}
template<> MODELVILLAGE_API UScriptStruct* StaticStruct<FS_TileType>()
{
	return FS_TileType::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FS_TileType_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PreviewMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TileType_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_TileType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_TileType_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "ModuleRelativePath", "S_TileType.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FS_TileType_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FS_TileType>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_TileType_Statics::NewProp_PreviewMesh_MetaData[] = {
		{ "Category", "S_TileType" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// PreviewMesh. \n" },
#endif
		{ "ModuleRelativePath", "S_TileType.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "PreviewMesh." },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FS_TileType_Statics::NewProp_PreviewMesh = { "PreviewMesh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FS_TileType, PreviewMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS_TileType_Statics::NewProp_PreviewMesh_MetaData), Z_Construct_UScriptStruct_FS_TileType_Statics::NewProp_PreviewMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS_TileType_Statics::NewProp_TileType_MetaData[] = {
		{ "Category", "S_TileType" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// APT_PlaceableTile. \n" },
#endif
		{ "ModuleRelativePath", "S_TileType.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "APT_PlaceableTile." },
#endif
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FS_TileType_Statics::NewProp_TileType = { "TileType", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FS_TileType, TileType), Z_Construct_UClass_UClass, Z_Construct_UClass_AAPT_PlaceableTile_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS_TileType_Statics::NewProp_TileType_MetaData), Z_Construct_UScriptStruct_FS_TileType_Statics::NewProp_TileType_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FS_TileType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_TileType_Statics::NewProp_PreviewMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS_TileType_Statics::NewProp_TileType,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FS_TileType_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ModelVillage,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"S_TileType",
		Z_Construct_UScriptStruct_FS_TileType_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS_TileType_Statics::PropPointers),
		sizeof(FS_TileType),
		alignof(FS_TileType),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS_TileType_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FS_TileType_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS_TileType_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FS_TileType()
	{
		if (!Z_Registration_Info_UScriptStruct_S_TileType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_S_TileType.InnerSingleton, Z_Construct_UScriptStruct_FS_TileType_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_S_TileType.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Users_Chiu_Cho_Hin_Documents_Unreal_Projects_ModelVillage_Source_ModelVillage_S_TileType_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Chiu_Cho_Hin_Documents_Unreal_Projects_ModelVillage_Source_ModelVillage_S_TileType_h_Statics::ScriptStructInfo[] = {
		{ FS_TileType::StaticStruct, Z_Construct_UScriptStruct_FS_TileType_Statics::NewStructOps, TEXT("S_TileType"), &Z_Registration_Info_UScriptStruct_S_TileType, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FS_TileType), 1966117697U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Chiu_Cho_Hin_Documents_Unreal_Projects_ModelVillage_Source_ModelVillage_S_TileType_h_2022975553(TEXT("/Script/ModelVillage"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_Chiu_Cho_Hin_Documents_Unreal_Projects_ModelVillage_Source_ModelVillage_S_TileType_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Chiu_Cho_Hin_Documents_Unreal_Projects_ModelVillage_Source_ModelVillage_S_TileType_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
