// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/ProceduralMeshesPrivatePCH.h"
#include "Public/SierpinskiLineActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSierpinskiLineActor() {}
// Cross Module References
	PROCEDURALMESHES_API UScriptStruct* Z_Construct_UScriptStruct_FPyramidLine();
	UPackage* Z_Construct_UPackage__Script_ProceduralMeshes();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	PROCEDURALMESHES_API UClass* Z_Construct_UClass_ASierpinskiLineActor_NoRegister();
	PROCEDURALMESHES_API UClass* Z_Construct_UClass_ASierpinskiLineActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	RUNTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_URuntimeMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
// End Cross Module References
class UScriptStruct* FPyramidLine::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PROCEDURALMESHES_API uint32 Get_Z_Construct_UScriptStruct_FPyramidLine_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPyramidLine, Z_Construct_UPackage__Script_ProceduralMeshes(), TEXT("PyramidLine"), sizeof(FPyramidLine), Get_Z_Construct_UScriptStruct_FPyramidLine_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPyramidLine(FPyramidLine::StaticStruct, TEXT("/Script/ProceduralMeshes"), TEXT("PyramidLine"), false, nullptr, nullptr);
static struct FScriptStruct_ProceduralMeshes_StaticRegisterNativesFPyramidLine
{
	FScriptStruct_ProceduralMeshes_StaticRegisterNativesFPyramidLine()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PyramidLine")),new UScriptStruct::TCppStructOps<FPyramidLine>);
	}
} ScriptStruct_ProceduralMeshes_StaticRegisterNativesFPyramidLine;
	UScriptStruct* Z_Construct_UScriptStruct_FPyramidLine()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPyramidLine_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_ProceduralMeshes();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PyramidLine"), sizeof(FPyramidLine), Get_Z_Construct_UScriptStruct_FPyramidLine_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/SierpinskiLineActor.h" },
				{ "ToolTip", "A simple struct to keep some data together" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPyramidLine>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Width_MetaData[] = {
				{ "ModuleRelativePath", "Public/SierpinskiLineActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Width = { UE4CodeGen_Private::EPropertyClass::Float, "Width", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FPyramidLine, Width), METADATA_PARAMS(NewProp_Width_MetaData, ARRAY_COUNT(NewProp_Width_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_End_MetaData[] = {
				{ "ModuleRelativePath", "Public/SierpinskiLineActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_End = { UE4CodeGen_Private::EPropertyClass::Struct, "End", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FPyramidLine, End), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_End_MetaData, ARRAY_COUNT(NewProp_End_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Start_MetaData[] = {
				{ "ModuleRelativePath", "Public/SierpinskiLineActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Start = { UE4CodeGen_Private::EPropertyClass::Struct, "Start", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FPyramidLine, Start), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_Start_MetaData, ARRAY_COUNT(NewProp_Start_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Width,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_End,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Start,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_ProceduralMeshes,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"PyramidLine",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FPyramidLine),
				alignof(FPyramidLine),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPyramidLine_CRC() { return 3013820654U; }
	void ASierpinskiLineActor::StaticRegisterNativesASierpinskiLineActor()
	{
	}
	UClass* Z_Construct_UClass_ASierpinskiLineActor_NoRegister()
	{
		return ASierpinskiLineActor::StaticClass();
	}
	UClass* Z_Construct_UClass_ASierpinskiLineActor()
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
				{ "IncludePath", "SierpinskiLineActor.h" },
				{ "ModuleRelativePath", "Public/SierpinskiLineActor.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedCrossSectionPoints_MetaData[] = {
				{ "ModuleRelativePath", "Public/SierpinskiLineActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CachedCrossSectionPoints = { UE4CodeGen_Private::EPropertyClass::Array, "CachedCrossSectionPoints", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000002000, 1, nullptr, STRUCT_OFFSET(ASierpinskiLineActor, CachedCrossSectionPoints), METADATA_PARAMS(NewProp_CachedCrossSectionPoints_MetaData, ARRAY_COUNT(NewProp_CachedCrossSectionPoints_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_CachedCrossSectionPoints_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "CachedCrossSectionPoints", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Lines_MetaData[] = {
				{ "ModuleRelativePath", "Public/SierpinskiLineActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Lines = { UE4CodeGen_Private::EPropertyClass::Array, "Lines", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000002000, 1, nullptr, STRUCT_OFFSET(ASierpinskiLineActor, Lines), METADATA_PARAMS(NewProp_Lines_MetaData, ARRAY_COUNT(NewProp_Lines_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Lines_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Lines", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FPyramidLine, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/SierpinskiLineActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshComponent = { UE4CodeGen_Private::EPropertyClass::Object, "MeshComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000080008, 1, nullptr, STRUCT_OFFSET(ASierpinskiLineActor, MeshComponent), Z_Construct_UClass_URuntimeMeshComponent_NoRegister, METADATA_PARAMS(NewProp_MeshComponent_MetaData, ARRAY_COUNT(NewProp_MeshComponent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RootNode_MetaData[] = {
				{ "Category", "Default" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/SierpinskiLineActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RootNode = { UE4CodeGen_Private::EPropertyClass::Object, "RootNode", RF_Public|RF_Transient|RF_MarkAsNative, 0x00200800000a001d, 1, nullptr, STRUCT_OFFSET(ASierpinskiLineActor, RootNode), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(NewProp_RootNode_MetaData, ARRAY_COUNT(NewProp_RootNode_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[] = {
				{ "Category", "Procedural Parameters" },
				{ "ModuleRelativePath", "Public/SierpinskiLineActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Material = { UE4CodeGen_Private::EPropertyClass::Object, "Material", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ASierpinskiLineActor, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(NewProp_Material_MetaData, ARRAY_COUNT(NewProp_Material_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSmoothNormals_MetaData[] = {
				{ "Category", "Procedural Parameters" },
				{ "ModuleRelativePath", "Public/SierpinskiLineActor.h" },
			};
#endif
			auto NewProp_bSmoothNormals_SetBit = [](void* Obj){ ((ASierpinskiLineActor*)Obj)->bSmoothNormals = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSmoothNormals = { UE4CodeGen_Private::EPropertyClass::Bool, "bSmoothNormals", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ASierpinskiLineActor), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bSmoothNormals_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bSmoothNormals_MetaData, ARRAY_COUNT(NewProp_bSmoothNormals_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RadialSegmentCount_MetaData[] = {
				{ "Category", "Procedural Parameters" },
				{ "ModuleRelativePath", "Public/SierpinskiLineActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_RadialSegmentCount = { UE4CodeGen_Private::EPropertyClass::Int, "RadialSegmentCount", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ASierpinskiLineActor, RadialSegmentCount), METADATA_PARAMS(NewProp_RadialSegmentCount_MetaData, ARRAY_COUNT(NewProp_RadialSegmentCount_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThicknessMultiplierPerGeneration_MetaData[] = {
				{ "Category", "Procedural Parameters" },
				{ "ModuleRelativePath", "Public/SierpinskiLineActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ThicknessMultiplierPerGeneration = { UE4CodeGen_Private::EPropertyClass::Float, "ThicknessMultiplierPerGeneration", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ASierpinskiLineActor, ThicknessMultiplierPerGeneration), METADATA_PARAMS(NewProp_ThicknessMultiplierPerGeneration_MetaData, ARRAY_COUNT(NewProp_ThicknessMultiplierPerGeneration_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LineThickness_MetaData[] = {
				{ "Category", "Procedural Parameters" },
				{ "ModuleRelativePath", "Public/SierpinskiLineActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LineThickness = { UE4CodeGen_Private::EPropertyClass::Float, "LineThickness", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ASierpinskiLineActor, LineThickness), METADATA_PARAMS(NewProp_LineThickness_MetaData, ARRAY_COUNT(NewProp_LineThickness_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Iterations_MetaData[] = {
				{ "Category", "Procedural Parameters" },
				{ "ModuleRelativePath", "Public/SierpinskiLineActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Iterations = { UE4CodeGen_Private::EPropertyClass::Int, "Iterations", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ASierpinskiLineActor, Iterations), METADATA_PARAMS(NewProp_Iterations_MetaData, ARRAY_COUNT(NewProp_Iterations_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[] = {
				{ "Category", "Procedural Parameters" },
				{ "ModuleRelativePath", "Public/SierpinskiLineActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Size = { UE4CodeGen_Private::EPropertyClass::Float, "Size", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ASierpinskiLineActor, Size), METADATA_PARAMS(NewProp_Size_MetaData, ARRAY_COUNT(NewProp_Size_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CachedCrossSectionPoints,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CachedCrossSectionPoints_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Lines,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Lines_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MeshComponent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RootNode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Material,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bSmoothNormals,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RadialSegmentCount,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ThicknessMultiplierPerGeneration,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LineThickness,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Iterations,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Size,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ASierpinskiLineActor>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ASierpinskiLineActor::StaticClass,
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
	IMPLEMENT_CLASS(ASierpinskiLineActor, 604370980);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASierpinskiLineActor(Z_Construct_UClass_ASierpinskiLineActor, &ASierpinskiLineActor::StaticClass, TEXT("/Script/ProceduralMeshes"), TEXT("ASierpinskiLineActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASierpinskiLineActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
