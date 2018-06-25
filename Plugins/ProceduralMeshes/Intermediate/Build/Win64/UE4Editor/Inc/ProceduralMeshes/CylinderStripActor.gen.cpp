// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/ProceduralMeshesPrivatePCH.h"
#include "Public/CylinderStripActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCylinderStripActor() {}
// Cross Module References
	PROCEDURALMESHES_API UClass* Z_Construct_UClass_ACylinderStripActor_NoRegister();
	PROCEDURALMESHES_API UClass* Z_Construct_UClass_ACylinderStripActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ProceduralMeshes();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	RUNTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_URuntimeMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
// End Cross Module References
	void ACylinderStripActor::StaticRegisterNativesACylinderStripActor()
	{
	}
	UClass* Z_Construct_UClass_ACylinderStripActor_NoRegister()
	{
		return ACylinderStripActor::StaticClass();
	}
	UClass* Z_Construct_UClass_ACylinderStripActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_ProceduralMeshes,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "CylinderStripActor.h" },
				{ "ModuleRelativePath", "Public/CylinderStripActor.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedCrossSectionPoints_MetaData[] = {
				{ "ModuleRelativePath", "Public/CylinderStripActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CachedCrossSectionPoints = { UE4CodeGen_Private::EPropertyClass::Array, "CachedCrossSectionPoints", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000002000, 1, nullptr, STRUCT_OFFSET(ACylinderStripActor, CachedCrossSectionPoints), METADATA_PARAMS(NewProp_CachedCrossSectionPoints_MetaData, ARRAY_COUNT(NewProp_CachedCrossSectionPoints_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_CachedCrossSectionPoints_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "CachedCrossSectionPoints", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/CylinderStripActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshComponent = { UE4CodeGen_Private::EPropertyClass::Object, "MeshComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000080008, 1, nullptr, STRUCT_OFFSET(ACylinderStripActor, MeshComponent), Z_Construct_UClass_URuntimeMeshComponent_NoRegister, METADATA_PARAMS(NewProp_MeshComponent_MetaData, ARRAY_COUNT(NewProp_MeshComponent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RootNode_MetaData[] = {
				{ "Category", "Default" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/CylinderStripActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RootNode = { UE4CodeGen_Private::EPropertyClass::Object, "RootNode", RF_Public|RF_Transient|RF_MarkAsNative, 0x00200800000a001d, 1, nullptr, STRUCT_OFFSET(ACylinderStripActor, RootNode), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(NewProp_RootNode_MetaData, ARRAY_COUNT(NewProp_RootNode_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[] = {
				{ "Category", "Procedural Parameters" },
				{ "ModuleRelativePath", "Public/CylinderStripActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Material = { UE4CodeGen_Private::EPropertyClass::Object, "Material", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ACylinderStripActor, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(NewProp_Material_MetaData, ARRAY_COUNT(NewProp_Material_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSmoothNormals_MetaData[] = {
				{ "Category", "Procedural Parameters" },
				{ "ModuleRelativePath", "Public/CylinderStripActor.h" },
			};
#endif
			auto NewProp_bSmoothNormals_SetBit = [](void* Obj){ ((ACylinderStripActor*)Obj)->bSmoothNormals = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSmoothNormals = { UE4CodeGen_Private::EPropertyClass::Bool, "bSmoothNormals", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ACylinderStripActor), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bSmoothNormals_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bSmoothNormals_MetaData, ARRAY_COUNT(NewProp_bSmoothNormals_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RadialSegmentCount_MetaData[] = {
				{ "Category", "Procedural Parameters" },
				{ "ModuleRelativePath", "Public/CylinderStripActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_RadialSegmentCount = { UE4CodeGen_Private::EPropertyClass::Int, "RadialSegmentCount", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ACylinderStripActor, RadialSegmentCount), METADATA_PARAMS(NewProp_RadialSegmentCount_MetaData, ARRAY_COUNT(NewProp_RadialSegmentCount_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[] = {
				{ "Category", "Procedural Parameters" },
				{ "ModuleRelativePath", "Public/CylinderStripActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius = { UE4CodeGen_Private::EPropertyClass::Float, "Radius", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ACylinderStripActor, Radius), METADATA_PARAMS(NewProp_Radius_MetaData, ARRAY_COUNT(NewProp_Radius_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LinePoints_MetaData[] = {
				{ "Category", "Procedural Parameters" },
				{ "ModuleRelativePath", "Public/CylinderStripActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LinePoints = { UE4CodeGen_Private::EPropertyClass::Array, "LinePoints", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ACylinderStripActor, LinePoints), METADATA_PARAMS(NewProp_LinePoints_MetaData, ARRAY_COUNT(NewProp_LinePoints_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_LinePoints_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "LinePoints", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CachedCrossSectionPoints,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CachedCrossSectionPoints_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MeshComponent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RootNode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Material,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bSmoothNormals,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RadialSegmentCount,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Radius,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LinePoints,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LinePoints_Inner,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ACylinderStripActor>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ACylinderStripActor::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACylinderStripActor, 1041346508);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACylinderStripActor(Z_Construct_UClass_ACylinderStripActor, &ACylinderStripActor::StaticClass, TEXT("/Script/ProceduralMeshes"), TEXT("ACylinderStripActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACylinderStripActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
