// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/ProceduralMeshesPrivatePCH.h"
#include "Public/SimpleCylinderActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimpleCylinderActor() {}
// Cross Module References
	PROCEDURALMESHES_API UClass* Z_Construct_UClass_ASimpleCylinderActor_NoRegister();
	PROCEDURALMESHES_API UClass* Z_Construct_UClass_ASimpleCylinderActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ProceduralMeshes();
	RUNTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_URuntimeMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
// End Cross Module References
	void ASimpleCylinderActor::StaticRegisterNativesASimpleCylinderActor()
	{
	}
	UClass* Z_Construct_UClass_ASimpleCylinderActor_NoRegister()
	{
		return ASimpleCylinderActor::StaticClass();
	}
	UClass* Z_Construct_UClass_ASimpleCylinderActor()
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
				{ "IncludePath", "SimpleCylinderActor.h" },
				{ "ModuleRelativePath", "Public/SimpleCylinderActor.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/SimpleCylinderActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshComponent = { UE4CodeGen_Private::EPropertyClass::Object, "MeshComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000080008, 1, nullptr, STRUCT_OFFSET(ASimpleCylinderActor, MeshComponent), Z_Construct_UClass_URuntimeMeshComponent_NoRegister, METADATA_PARAMS(NewProp_MeshComponent_MetaData, ARRAY_COUNT(NewProp_MeshComponent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RootNode_MetaData[] = {
				{ "Category", "Default" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/SimpleCylinderActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RootNode = { UE4CodeGen_Private::EPropertyClass::Object, "RootNode", RF_Public|RF_Transient|RF_MarkAsNative, 0x00200800000a001d, 1, nullptr, STRUCT_OFFSET(ASimpleCylinderActor, RootNode), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(NewProp_RootNode_MetaData, ARRAY_COUNT(NewProp_RootNode_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[] = {
				{ "Category", "Procedural Parameters" },
				{ "ModuleRelativePath", "Public/SimpleCylinderActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Material = { UE4CodeGen_Private::EPropertyClass::Object, "Material", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ASimpleCylinderActor, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(NewProp_Material_MetaData, ARRAY_COUNT(NewProp_Material_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSmoothNormals_MetaData[] = {
				{ "Category", "Procedural Parameters" },
				{ "ModuleRelativePath", "Public/SimpleCylinderActor.h" },
			};
#endif
			auto NewProp_bSmoothNormals_SetBit = [](void* Obj){ ((ASimpleCylinderActor*)Obj)->bSmoothNormals = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSmoothNormals = { UE4CodeGen_Private::EPropertyClass::Bool, "bSmoothNormals", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ASimpleCylinderActor), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bSmoothNormals_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bSmoothNormals_MetaData, ARRAY_COUNT(NewProp_bSmoothNormals_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDoubleSided_MetaData[] = {
				{ "Category", "Procedural Parameters" },
				{ "ModuleRelativePath", "Public/SimpleCylinderActor.h" },
			};
#endif
			auto NewProp_bDoubleSided_SetBit = [](void* Obj){ ((ASimpleCylinderActor*)Obj)->bDoubleSided = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDoubleSided = { UE4CodeGen_Private::EPropertyClass::Bool, "bDoubleSided", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ASimpleCylinderActor), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bDoubleSided_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bDoubleSided_MetaData, ARRAY_COUNT(NewProp_bDoubleSided_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCapEnds_MetaData[] = {
				{ "Category", "Procedural Parameters" },
				{ "ModuleRelativePath", "Public/SimpleCylinderActor.h" },
			};
#endif
			auto NewProp_bCapEnds_SetBit = [](void* Obj){ ((ASimpleCylinderActor*)Obj)->bCapEnds = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCapEnds = { UE4CodeGen_Private::EPropertyClass::Bool, "bCapEnds", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ASimpleCylinderActor), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bCapEnds_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bCapEnds_MetaData, ARRAY_COUNT(NewProp_bCapEnds_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RadialSegmentCount_MetaData[] = {
				{ "Category", "Procedural Parameters" },
				{ "ModuleRelativePath", "Public/SimpleCylinderActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_RadialSegmentCount = { UE4CodeGen_Private::EPropertyClass::Int, "RadialSegmentCount", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ASimpleCylinderActor, RadialSegmentCount), METADATA_PARAMS(NewProp_RadialSegmentCount_MetaData, ARRAY_COUNT(NewProp_RadialSegmentCount_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[] = {
				{ "Category", "Procedural Parameters" },
				{ "ModuleRelativePath", "Public/SimpleCylinderActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Height = { UE4CodeGen_Private::EPropertyClass::Float, "Height", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ASimpleCylinderActor, Height), METADATA_PARAMS(NewProp_Height_MetaData, ARRAY_COUNT(NewProp_Height_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[] = {
				{ "Category", "Procedural Parameters" },
				{ "ModuleRelativePath", "Public/SimpleCylinderActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius = { UE4CodeGen_Private::EPropertyClass::Float, "Radius", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ASimpleCylinderActor, Radius), METADATA_PARAMS(NewProp_Radius_MetaData, ARRAY_COUNT(NewProp_Radius_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MeshComponent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RootNode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Material,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bSmoothNormals,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bDoubleSided,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bCapEnds,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RadialSegmentCount,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Height,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Radius,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ASimpleCylinderActor>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ASimpleCylinderActor::StaticClass,
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
	IMPLEMENT_CLASS(ASimpleCylinderActor, 3995260454);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASimpleCylinderActor(Z_Construct_UClass_ASimpleCylinderActor, &ASimpleCylinderActor::StaticClass, TEXT("/Script/ProceduralMeshes"), TEXT("ASimpleCylinderActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASimpleCylinderActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
