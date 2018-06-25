// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/ProceduralMeshesPrivatePCH.h"
#include "Public/BranchingLinesActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBranchingLinesActor() {}
// Cross Module References
	PROCEDURALMESHES_API UScriptStruct* Z_Construct_UScriptStruct_FBranchSegment();
	UPackage* Z_Construct_UPackage__Script_ProceduralMeshes();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	PROCEDURALMESHES_API UClass* Z_Construct_UClass_ABranchingLinesActor_NoRegister();
	PROCEDURALMESHES_API UClass* Z_Construct_UClass_ABranchingLinesActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRandomStream();
	RUNTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_URuntimeMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
// End Cross Module References
class UScriptStruct* FBranchSegment::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PROCEDURALMESHES_API uint32 Get_Z_Construct_UScriptStruct_FBranchSegment_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBranchSegment, Z_Construct_UPackage__Script_ProceduralMeshes(), TEXT("BranchSegment"), sizeof(FBranchSegment), Get_Z_Construct_UScriptStruct_FBranchSegment_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBranchSegment(FBranchSegment::StaticStruct, TEXT("/Script/ProceduralMeshes"), TEXT("BranchSegment"), false, nullptr, nullptr);
static struct FScriptStruct_ProceduralMeshes_StaticRegisterNativesFBranchSegment
{
	FScriptStruct_ProceduralMeshes_StaticRegisterNativesFBranchSegment()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BranchSegment")),new UScriptStruct::TCppStructOps<FBranchSegment>);
	}
} ScriptStruct_ProceduralMeshes_StaticRegisterNativesFBranchSegment;
	UScriptStruct* Z_Construct_UScriptStruct_FBranchSegment()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBranchSegment_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_ProceduralMeshes();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BranchSegment"), sizeof(FBranchSegment), Get_Z_Construct_UScriptStruct_FBranchSegment_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/BranchingLinesActor.h" },
				{ "ToolTip", "A simple struct to keep some data together" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBranchSegment>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForkGeneration_MetaData[] = {
				{ "ModuleRelativePath", "Public/BranchingLinesActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FInt8PropertyParams NewProp_ForkGeneration = { UE4CodeGen_Private::EPropertyClass::Int8, "ForkGeneration", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FBranchSegment, ForkGeneration), METADATA_PARAMS(NewProp_ForkGeneration_MetaData, ARRAY_COUNT(NewProp_ForkGeneration_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Width_MetaData[] = {
				{ "ModuleRelativePath", "Public/BranchingLinesActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Width = { UE4CodeGen_Private::EPropertyClass::Float, "Width", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FBranchSegment, Width), METADATA_PARAMS(NewProp_Width_MetaData, ARRAY_COUNT(NewProp_Width_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_End_MetaData[] = {
				{ "ModuleRelativePath", "Public/BranchingLinesActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_End = { UE4CodeGen_Private::EPropertyClass::Struct, "End", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FBranchSegment, End), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_End_MetaData, ARRAY_COUNT(NewProp_End_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Start_MetaData[] = {
				{ "ModuleRelativePath", "Public/BranchingLinesActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Start = { UE4CodeGen_Private::EPropertyClass::Struct, "Start", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FBranchSegment, Start), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_Start_MetaData, ARRAY_COUNT(NewProp_Start_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ForkGeneration,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Width,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_End,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Start,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_ProceduralMeshes,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"BranchSegment",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FBranchSegment),
				alignof(FBranchSegment),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBranchSegment_CRC() { return 1583721162U; }
	void ABranchingLinesActor::StaticRegisterNativesABranchingLinesActor()
	{
	}
	UClass* Z_Construct_UClass_ABranchingLinesActor_NoRegister()
	{
		return ABranchingLinesActor::StaticClass();
	}
	UClass* Z_Construct_UClass_ABranchingLinesActor()
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
				{ "IncludePath", "BranchingLinesActor.h" },
				{ "ModuleRelativePath", "Public/BranchingLinesActor.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RngStream_MetaData[] = {
				{ "ModuleRelativePath", "Public/BranchingLinesActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_RngStream = { UE4CodeGen_Private::EPropertyClass::Struct, "RngStream", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000002000, 1, nullptr, STRUCT_OFFSET(ABranchingLinesActor, RngStream), Z_Construct_UScriptStruct_FRandomStream, METADATA_PARAMS(NewProp_RngStream_MetaData, ARRAY_COUNT(NewProp_RngStream_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OffsetDirections_MetaData[] = {
				{ "ModuleRelativePath", "Public/BranchingLinesActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OffsetDirections = { UE4CodeGen_Private::EPropertyClass::Array, "OffsetDirections", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000002000, 1, nullptr, STRUCT_OFFSET(ABranchingLinesActor, OffsetDirections), METADATA_PARAMS(NewProp_OffsetDirections_MetaData, ARRAY_COUNT(NewProp_OffsetDirections_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_OffsetDirections_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "OffsetDirections", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedCrossSectionPoints_MetaData[] = {
				{ "ModuleRelativePath", "Public/BranchingLinesActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CachedCrossSectionPoints = { UE4CodeGen_Private::EPropertyClass::Array, "CachedCrossSectionPoints", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000002000, 1, nullptr, STRUCT_OFFSET(ABranchingLinesActor, CachedCrossSectionPoints), METADATA_PARAMS(NewProp_CachedCrossSectionPoints_MetaData, ARRAY_COUNT(NewProp_CachedCrossSectionPoints_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_CachedCrossSectionPoints_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "CachedCrossSectionPoints", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Segments_MetaData[] = {
				{ "ModuleRelativePath", "Public/BranchingLinesActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Segments = { UE4CodeGen_Private::EPropertyClass::Array, "Segments", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000002000, 1, nullptr, STRUCT_OFFSET(ABranchingLinesActor, Segments), METADATA_PARAMS(NewProp_Segments_MetaData, ARRAY_COUNT(NewProp_Segments_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Segments_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Segments", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FBranchSegment, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/BranchingLinesActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshComponent = { UE4CodeGen_Private::EPropertyClass::Object, "MeshComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000080008, 1, nullptr, STRUCT_OFFSET(ABranchingLinesActor, MeshComponent), Z_Construct_UClass_URuntimeMeshComponent_NoRegister, METADATA_PARAMS(NewProp_MeshComponent_MetaData, ARRAY_COUNT(NewProp_MeshComponent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RootNode_MetaData[] = {
				{ "Category", "Default" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/BranchingLinesActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RootNode = { UE4CodeGen_Private::EPropertyClass::Object, "RootNode", RF_Public|RF_Transient|RF_MarkAsNative, 0x00200800000a001d, 1, nullptr, STRUCT_OFFSET(ABranchingLinesActor, RootNode), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(NewProp_RootNode_MetaData, ARRAY_COUNT(NewProp_RootNode_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[] = {
				{ "Category", "Procedural Parameters" },
				{ "ModuleRelativePath", "Public/BranchingLinesActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Material = { UE4CodeGen_Private::EPropertyClass::Object, "Material", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ABranchingLinesActor, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(NewProp_Material_MetaData, ARRAY_COUNT(NewProp_Material_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForkRotationMax_MetaData[] = {
				{ "Category", "Procedural Parameters" },
				{ "ModuleRelativePath", "Public/BranchingLinesActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ForkRotationMax = { UE4CodeGen_Private::EPropertyClass::Float, "ForkRotationMax", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ABranchingLinesActor, ForkRotationMax), METADATA_PARAMS(NewProp_ForkRotationMax_MetaData, ARRAY_COUNT(NewProp_ForkRotationMax_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForkRotationMin_MetaData[] = {
				{ "Category", "Procedural Parameters" },
				{ "ModuleRelativePath", "Public/BranchingLinesActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ForkRotationMin = { UE4CodeGen_Private::EPropertyClass::Float, "ForkRotationMin", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ABranchingLinesActor, ForkRotationMin), METADATA_PARAMS(NewProp_ForkRotationMin_MetaData, ARRAY_COUNT(NewProp_ForkRotationMin_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForkLengthMax_MetaData[] = {
				{ "Category", "Procedural Parameters" },
				{ "ModuleRelativePath", "Public/BranchingLinesActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ForkLengthMax = { UE4CodeGen_Private::EPropertyClass::Float, "ForkLengthMax", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ABranchingLinesActor, ForkLengthMax), METADATA_PARAMS(NewProp_ForkLengthMax_MetaData, ARRAY_COUNT(NewProp_ForkLengthMax_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForkLengthMin_MetaData[] = {
				{ "Category", "Procedural Parameters" },
				{ "ModuleRelativePath", "Public/BranchingLinesActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ForkLengthMin = { UE4CodeGen_Private::EPropertyClass::Float, "ForkLengthMin", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ABranchingLinesActor, ForkLengthMin), METADATA_PARAMS(NewProp_ForkLengthMin_MetaData, ARRAY_COUNT(NewProp_ForkLengthMin_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WidthReductionOnFork_MetaData[] = {
				{ "Category", "Procedural Parameters" },
				{ "ModuleRelativePath", "Public/BranchingLinesActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WidthReductionOnFork = { UE4CodeGen_Private::EPropertyClass::Float, "WidthReductionOnFork", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ABranchingLinesActor, WidthReductionOnFork), METADATA_PARAMS(NewProp_WidthReductionOnFork_MetaData, ARRAY_COUNT(NewProp_WidthReductionOnFork_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChanceOfForkPercentage_MetaData[] = {
				{ "Category", "Procedural Parameters" },
				{ "ClampMax", "100" },
				{ "ClampMin", "0" },
				{ "ModuleRelativePath", "Public/BranchingLinesActor.h" },
				{ "UIMax", "100" },
				{ "UIMin", "0" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ChanceOfForkPercentage = { UE4CodeGen_Private::EPropertyClass::Float, "ChanceOfForkPercentage", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ABranchingLinesActor, ChanceOfForkPercentage), METADATA_PARAMS(NewProp_ChanceOfForkPercentage_MetaData, ARRAY_COUNT(NewProp_ChanceOfForkPercentage_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrunkWidth_MetaData[] = {
				{ "Category", "Procedural Parameters" },
				{ "ModuleRelativePath", "Public/BranchingLinesActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TrunkWidth = { UE4CodeGen_Private::EPropertyClass::Float, "TrunkWidth", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ABranchingLinesActor, TrunkWidth), METADATA_PARAMS(NewProp_TrunkWidth_MetaData, ARRAY_COUNT(NewProp_TrunkWidth_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BranchOffsetReductionEachGenerationPercentage_MetaData[] = {
				{ "Category", "Procedural Parameters" },
				{ "ModuleRelativePath", "Public/BranchingLinesActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BranchOffsetReductionEachGenerationPercentage = { UE4CodeGen_Private::EPropertyClass::Float, "BranchOffsetReductionEachGenerationPercentage", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ABranchingLinesActor, BranchOffsetReductionEachGenerationPercentage), METADATA_PARAMS(NewProp_BranchOffsetReductionEachGenerationPercentage_MetaData, ARRAY_COUNT(NewProp_BranchOffsetReductionEachGenerationPercentage_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMaxBranchOffsetAsPercentageOfLength_MetaData[] = {
				{ "Category", "Procedural Parameters" },
				{ "ModuleRelativePath", "Public/BranchingLinesActor.h" },
			};
#endif
			auto NewProp_bMaxBranchOffsetAsPercentageOfLength_SetBit = [](void* Obj){ ((ABranchingLinesActor*)Obj)->bMaxBranchOffsetAsPercentageOfLength = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMaxBranchOffsetAsPercentageOfLength = { UE4CodeGen_Private::EPropertyClass::Bool, "bMaxBranchOffsetAsPercentageOfLength", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ABranchingLinesActor), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bMaxBranchOffsetAsPercentageOfLength_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bMaxBranchOffsetAsPercentageOfLength_MetaData, ARRAY_COUNT(NewProp_bMaxBranchOffsetAsPercentageOfLength_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxBranchOffset_MetaData[] = {
				{ "Category", "Procedural Parameters" },
				{ "ClampMin", "0.1" },
				{ "ModuleRelativePath", "Public/BranchingLinesActor.h" },
				{ "UIMin", "0.1" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxBranchOffset = { UE4CodeGen_Private::EPropertyClass::Float, "MaxBranchOffset", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ABranchingLinesActor, MaxBranchOffset), METADATA_PARAMS(NewProp_MaxBranchOffset_MetaData, ARRAY_COUNT(NewProp_MaxBranchOffset_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RandomSeed_MetaData[] = {
				{ "Category", "Procedural Parameters" },
				{ "ModuleRelativePath", "Public/BranchingLinesActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_RandomSeed = { UE4CodeGen_Private::EPropertyClass::Int, "RandomSeed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ABranchingLinesActor, RandomSeed), METADATA_PARAMS(NewProp_RandomSeed_MetaData, ARRAY_COUNT(NewProp_RandomSeed_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSmoothNormals_MetaData[] = {
				{ "Category", "Procedural Parameters" },
				{ "ModuleRelativePath", "Public/BranchingLinesActor.h" },
			};
#endif
			auto NewProp_bSmoothNormals_SetBit = [](void* Obj){ ((ABranchingLinesActor*)Obj)->bSmoothNormals = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSmoothNormals = { UE4CodeGen_Private::EPropertyClass::Bool, "bSmoothNormals", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ABranchingLinesActor), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bSmoothNormals_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bSmoothNormals_MetaData, ARRAY_COUNT(NewProp_bSmoothNormals_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RadialSegmentCount_MetaData[] = {
				{ "Category", "Procedural Parameters" },
				{ "ModuleRelativePath", "Public/BranchingLinesActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_RadialSegmentCount = { UE4CodeGen_Private::EPropertyClass::Int, "RadialSegmentCount", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ABranchingLinesActor, RadialSegmentCount), METADATA_PARAMS(NewProp_RadialSegmentCount_MetaData, ARRAY_COUNT(NewProp_RadialSegmentCount_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Iterations_MetaData[] = {
				{ "Category", "Procedural Parameters" },
				{ "ModuleRelativePath", "Public/BranchingLinesActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_Iterations = { UE4CodeGen_Private::EPropertyClass::Byte, "Iterations", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ABranchingLinesActor, Iterations), nullptr, METADATA_PARAMS(NewProp_Iterations_MetaData, ARRAY_COUNT(NewProp_Iterations_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_End_MetaData[] = {
				{ "Category", "Procedural Parameters" },
				{ "MakeEditWidget", "" },
				{ "ModuleRelativePath", "Public/BranchingLinesActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_End = { UE4CodeGen_Private::EPropertyClass::Struct, "End", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ABranchingLinesActor, End), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_End_MetaData, ARRAY_COUNT(NewProp_End_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Start_MetaData[] = {
				{ "Category", "Procedural Parameters" },
				{ "MakeEditWidget", "" },
				{ "ModuleRelativePath", "Public/BranchingLinesActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Start = { UE4CodeGen_Private::EPropertyClass::Struct, "Start", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ABranchingLinesActor, Start), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_Start_MetaData, ARRAY_COUNT(NewProp_Start_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RngStream,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OffsetDirections,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OffsetDirections_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CachedCrossSectionPoints,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CachedCrossSectionPoints_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Segments,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Segments_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MeshComponent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RootNode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Material,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ForkRotationMax,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ForkRotationMin,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ForkLengthMax,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ForkLengthMin,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WidthReductionOnFork,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ChanceOfForkPercentage,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TrunkWidth,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_BranchOffsetReductionEachGenerationPercentage,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bMaxBranchOffsetAsPercentageOfLength,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaxBranchOffset,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RandomSeed,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bSmoothNormals,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RadialSegmentCount,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Iterations,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_End,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Start,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ABranchingLinesActor>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ABranchingLinesActor::StaticClass,
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
	IMPLEMENT_CLASS(ABranchingLinesActor, 730685752);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABranchingLinesActor(Z_Construct_UClass_ABranchingLinesActor, &ABranchingLinesActor::StaticClass, TEXT("/Script/ProceduralMeshes"), TEXT("ABranchingLinesActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABranchingLinesActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
