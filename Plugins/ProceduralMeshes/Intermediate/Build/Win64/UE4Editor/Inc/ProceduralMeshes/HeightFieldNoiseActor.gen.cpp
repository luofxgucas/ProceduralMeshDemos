// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/ProceduralMeshesPrivatePCH.h"
#include "Public/HeightFieldNoiseActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHeightFieldNoiseActor() {}
// Cross Module References
	PROCEDURALMESHES_API UClass* Z_Construct_UClass_AHeightFieldNoiseActor_NoRegister();
	PROCEDURALMESHES_API UClass* Z_Construct_UClass_AHeightFieldNoiseActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ProceduralMeshes();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRandomStream();
	RUNTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_URuntimeMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void AHeightFieldNoiseActor::StaticRegisterNativesAHeightFieldNoiseActor()
	{
	}
	UClass* Z_Construct_UClass_AHeightFieldNoiseActor_NoRegister()
	{
		return AHeightFieldNoiseActor::StaticClass();
	}
	UClass* Z_Construct_UClass_AHeightFieldNoiseActor()
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
				{ "IncludePath", "HeightFieldNoiseActor.h" },
				{ "ModuleRelativePath", "Public/HeightFieldNoiseActor.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RngStream_MetaData[] = {
				{ "ModuleRelativePath", "Public/HeightFieldNoiseActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_RngStream = { UE4CodeGen_Private::EPropertyClass::Struct, "RngStream", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000002000, 1, nullptr, STRUCT_OFFSET(AHeightFieldNoiseActor, RngStream), Z_Construct_UScriptStruct_FRandomStream, METADATA_PARAMS(NewProp_RngStream_MetaData, ARRAY_COUNT(NewProp_RngStream_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/HeightFieldNoiseActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshComponent = { UE4CodeGen_Private::EPropertyClass::Object, "MeshComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000080008, 1, nullptr, STRUCT_OFFSET(AHeightFieldNoiseActor, MeshComponent), Z_Construct_UClass_URuntimeMeshComponent_NoRegister, METADATA_PARAMS(NewProp_MeshComponent_MetaData, ARRAY_COUNT(NewProp_MeshComponent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RootNode_MetaData[] = {
				{ "Category", "Default" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/HeightFieldNoiseActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RootNode = { UE4CodeGen_Private::EPropertyClass::Object, "RootNode", RF_Public|RF_Transient|RF_MarkAsNative, 0x00200800000a001d, 1, nullptr, STRUCT_OFFSET(AHeightFieldNoiseActor, RootNode), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(NewProp_RootNode_MetaData, ARRAY_COUNT(NewProp_RootNode_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[] = {
				{ "Category", "Procedural Parameters" },
				{ "ModuleRelativePath", "Public/HeightFieldNoiseActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Material = { UE4CodeGen_Private::EPropertyClass::Object, "Material", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AHeightFieldNoiseActor, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(NewProp_Material_MetaData, ARRAY_COUNT(NewProp_Material_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RandomSeed_MetaData[] = {
				{ "Category", "Procedural Parameters" },
				{ "ModuleRelativePath", "Public/HeightFieldNoiseActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_RandomSeed = { UE4CodeGen_Private::EPropertyClass::Int, "RandomSeed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AHeightFieldNoiseActor, RandomSeed), METADATA_PARAMS(NewProp_RandomSeed_MetaData, ARRAY_COUNT(NewProp_RandomSeed_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WidthSections_MetaData[] = {
				{ "Category", "Procedural Parameters" },
				{ "ModuleRelativePath", "Public/HeightFieldNoiseActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_WidthSections = { UE4CodeGen_Private::EPropertyClass::Int, "WidthSections", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AHeightFieldNoiseActor, WidthSections), METADATA_PARAMS(NewProp_WidthSections_MetaData, ARRAY_COUNT(NewProp_WidthSections_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LengthSections_MetaData[] = {
				{ "Category", "Procedural Parameters" },
				{ "ModuleRelativePath", "Public/HeightFieldNoiseActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_LengthSections = { UE4CodeGen_Private::EPropertyClass::Int, "LengthSections", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AHeightFieldNoiseActor, LengthSections), METADATA_PARAMS(NewProp_LengthSections_MetaData, ARRAY_COUNT(NewProp_LengthSections_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[] = {
				{ "Category", "Procedural Parameters" },
				{ "ModuleRelativePath", "Public/HeightFieldNoiseActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Size = { UE4CodeGen_Private::EPropertyClass::Struct, "Size", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AHeightFieldNoiseActor, Size), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_Size_MetaData, ARRAY_COUNT(NewProp_Size_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RngStream,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MeshComponent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RootNode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Material,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RandomSeed,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WidthSections,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LengthSections,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Size,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AHeightFieldNoiseActor>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AHeightFieldNoiseActor::StaticClass,
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
	IMPLEMENT_CLASS(AHeightFieldNoiseActor, 799024138);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHeightFieldNoiseActor(Z_Construct_UClass_AHeightFieldNoiseActor, &AHeightFieldNoiseActor::StaticClass, TEXT("/Script/ProceduralMeshes"), TEXT("AHeightFieldNoiseActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHeightFieldNoiseActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
