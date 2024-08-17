// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModelVillage/APTG_PlaceableTileGrid.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAPTG_PlaceableTileGrid() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	MODELVILLAGE_API UClass* Z_Construct_UClass_AAPT_PlaceableTile_NoRegister();
	MODELVILLAGE_API UClass* Z_Construct_UClass_AAPTG_PlaceableTileGrid();
	MODELVILLAGE_API UClass* Z_Construct_UClass_AAPTG_PlaceableTileGrid_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ModelVillage();
// End Cross Module References
	void AAPTG_PlaceableTileGrid::StaticRegisterNativesAAPTG_PlaceableTileGrid()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAPTG_PlaceableTileGrid);
	UClass* Z_Construct_UClass_AAPTG_PlaceableTileGrid_NoRegister()
	{
		return AAPTG_PlaceableTileGrid::StaticClass();
	}
	struct Z_Construct_UClass_AAPTG_PlaceableTileGrid_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitIsland_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_InitIsland;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TableSurface_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TableSurface;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_TileSpacing_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_m_TileSpacing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_TileX_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_m_TileX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_TileY_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_m_TileY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_TileScale_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_m_TileScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_TileZOffset_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_m_TileZOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_isInit_MetaData[];
#endif
		static void NewProp_isInit_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_isInit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAPTG_PlaceableTileGrid_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ModelVillage,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAPTG_PlaceableTileGrid_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAPTG_PlaceableTileGrid_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "APTG_PlaceableTileGrid.h" },
		{ "ModuleRelativePath", "APTG_PlaceableTileGrid.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAPTG_PlaceableTileGrid_Statics::NewProp_InitIsland_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Tiles" },
		{ "ModuleRelativePath", "APTG_PlaceableTileGrid.h" },
		{ "OnlyPlaceable", "" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AAPTG_PlaceableTileGrid_Statics::NewProp_InitIsland = { "InitIsland", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAPTG_PlaceableTileGrid, InitIsland), Z_Construct_UClass_UClass, Z_Construct_UClass_AAPT_PlaceableTile_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAPTG_PlaceableTileGrid_Statics::NewProp_InitIsland_MetaData), Z_Construct_UClass_AAPTG_PlaceableTileGrid_Statics::NewProp_InitIsland_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAPTG_PlaceableTileGrid_Statics::NewProp_TableSurface_MetaData[] = {
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "APTG_PlaceableTileGrid.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAPTG_PlaceableTileGrid_Statics::NewProp_TableSurface = { "TableSurface", nullptr, (EPropertyFlags)0x00200800000b0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAPTG_PlaceableTileGrid, TableSurface), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAPTG_PlaceableTileGrid_Statics::NewProp_TableSurface_MetaData), Z_Construct_UClass_AAPTG_PlaceableTileGrid_Statics::NewProp_TableSurface_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAPTG_PlaceableTileGrid_Statics::NewProp_m_TileSpacing_MetaData[] = {
		{ "Category", "TileSetting" },
		{ "ModuleRelativePath", "APTG_PlaceableTileGrid.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AAPTG_PlaceableTileGrid_Statics::NewProp_m_TileSpacing = { "m_TileSpacing", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAPTG_PlaceableTileGrid, m_TileSpacing), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAPTG_PlaceableTileGrid_Statics::NewProp_m_TileSpacing_MetaData), Z_Construct_UClass_AAPTG_PlaceableTileGrid_Statics::NewProp_m_TileSpacing_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAPTG_PlaceableTileGrid_Statics::NewProp_m_TileX_MetaData[] = {
		{ "Category", "TileSetting" },
		{ "ModuleRelativePath", "APTG_PlaceableTileGrid.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AAPTG_PlaceableTileGrid_Statics::NewProp_m_TileX = { "m_TileX", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAPTG_PlaceableTileGrid, m_TileX), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAPTG_PlaceableTileGrid_Statics::NewProp_m_TileX_MetaData), Z_Construct_UClass_AAPTG_PlaceableTileGrid_Statics::NewProp_m_TileX_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAPTG_PlaceableTileGrid_Statics::NewProp_m_TileY_MetaData[] = {
		{ "Category", "TileSetting" },
		{ "ModuleRelativePath", "APTG_PlaceableTileGrid.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AAPTG_PlaceableTileGrid_Statics::NewProp_m_TileY = { "m_TileY", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAPTG_PlaceableTileGrid, m_TileY), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAPTG_PlaceableTileGrid_Statics::NewProp_m_TileY_MetaData), Z_Construct_UClass_AAPTG_PlaceableTileGrid_Statics::NewProp_m_TileY_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAPTG_PlaceableTileGrid_Statics::NewProp_m_TileScale_MetaData[] = {
		{ "Category", "TileSetting" },
		{ "ModuleRelativePath", "APTG_PlaceableTileGrid.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AAPTG_PlaceableTileGrid_Statics::NewProp_m_TileScale = { "m_TileScale", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAPTG_PlaceableTileGrid, m_TileScale), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAPTG_PlaceableTileGrid_Statics::NewProp_m_TileScale_MetaData), Z_Construct_UClass_AAPTG_PlaceableTileGrid_Statics::NewProp_m_TileScale_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAPTG_PlaceableTileGrid_Statics::NewProp_m_TileZOffset_MetaData[] = {
		{ "Category", "TileSetting" },
		{ "ModuleRelativePath", "APTG_PlaceableTileGrid.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AAPTG_PlaceableTileGrid_Statics::NewProp_m_TileZOffset = { "m_TileZOffset", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAPTG_PlaceableTileGrid, m_TileZOffset), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAPTG_PlaceableTileGrid_Statics::NewProp_m_TileZOffset_MetaData), Z_Construct_UClass_AAPTG_PlaceableTileGrid_Statics::NewProp_m_TileZOffset_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAPTG_PlaceableTileGrid_Statics::NewProp_isInit_MetaData[] = {
		{ "Category", "TileSetting" },
		{ "ModuleRelativePath", "APTG_PlaceableTileGrid.h" },
	};
#endif
	void Z_Construct_UClass_AAPTG_PlaceableTileGrid_Statics::NewProp_isInit_SetBit(void* Obj)
	{
		((AAPTG_PlaceableTileGrid*)Obj)->isInit = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAPTG_PlaceableTileGrid_Statics::NewProp_isInit = { "isInit", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AAPTG_PlaceableTileGrid), &Z_Construct_UClass_AAPTG_PlaceableTileGrid_Statics::NewProp_isInit_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAPTG_PlaceableTileGrid_Statics::NewProp_isInit_MetaData), Z_Construct_UClass_AAPTG_PlaceableTileGrid_Statics::NewProp_isInit_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAPTG_PlaceableTileGrid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAPTG_PlaceableTileGrid_Statics::NewProp_InitIsland,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAPTG_PlaceableTileGrid_Statics::NewProp_TableSurface,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAPTG_PlaceableTileGrid_Statics::NewProp_m_TileSpacing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAPTG_PlaceableTileGrid_Statics::NewProp_m_TileX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAPTG_PlaceableTileGrid_Statics::NewProp_m_TileY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAPTG_PlaceableTileGrid_Statics::NewProp_m_TileScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAPTG_PlaceableTileGrid_Statics::NewProp_m_TileZOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAPTG_PlaceableTileGrid_Statics::NewProp_isInit,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAPTG_PlaceableTileGrid_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAPTG_PlaceableTileGrid>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAPTG_PlaceableTileGrid_Statics::ClassParams = {
		&AAPTG_PlaceableTileGrid::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AAPTG_PlaceableTileGrid_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AAPTG_PlaceableTileGrid_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAPTG_PlaceableTileGrid_Statics::Class_MetaDataParams), Z_Construct_UClass_AAPTG_PlaceableTileGrid_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAPTG_PlaceableTileGrid_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AAPTG_PlaceableTileGrid()
	{
		if (!Z_Registration_Info_UClass_AAPTG_PlaceableTileGrid.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAPTG_PlaceableTileGrid.OuterSingleton, Z_Construct_UClass_AAPTG_PlaceableTileGrid_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AAPTG_PlaceableTileGrid.OuterSingleton;
	}
	template<> MODELVILLAGE_API UClass* StaticClass<AAPTG_PlaceableTileGrid>()
	{
		return AAPTG_PlaceableTileGrid::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAPTG_PlaceableTileGrid);
	AAPTG_PlaceableTileGrid::~AAPTG_PlaceableTileGrid() {}
	struct Z_CompiledInDeferFile_FID_Users_Chiu_Cho_Hin_Documents_Unreal_Projects_ModelVillage_Source_ModelVillage_APTG_PlaceableTileGrid_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Chiu_Cho_Hin_Documents_Unreal_Projects_ModelVillage_Source_ModelVillage_APTG_PlaceableTileGrid_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AAPTG_PlaceableTileGrid, AAPTG_PlaceableTileGrid::StaticClass, TEXT("AAPTG_PlaceableTileGrid"), &Z_Registration_Info_UClass_AAPTG_PlaceableTileGrid, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAPTG_PlaceableTileGrid), 3990722677U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Chiu_Cho_Hin_Documents_Unreal_Projects_ModelVillage_Source_ModelVillage_APTG_PlaceableTileGrid_h_865672466(TEXT("/Script/ModelVillage"),
		Z_CompiledInDeferFile_FID_Users_Chiu_Cho_Hin_Documents_Unreal_Projects_ModelVillage_Source_ModelVillage_APTG_PlaceableTileGrid_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Chiu_Cho_Hin_Documents_Unreal_Projects_ModelVillage_Source_ModelVillage_APTG_PlaceableTileGrid_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
