// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/RuntimeMeshLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRuntimeMeshLibrary() {}
// Cross Module References
	RUNTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_URuntimeMeshLibrary_NoRegister();
	RUNTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_URuntimeMeshLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_RuntimeMeshComponent();
	RUNTIMEMESHCOMPONENT_API UFunction* Z_Construct_UFunction_URuntimeMeshLibrary_CalculateTangentsForMesh();
	RUNTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshTangent();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	RUNTIMEMESHCOMPONENT_API UFunction* Z_Construct_UFunction_URuntimeMeshLibrary_CalculateTangentsForMeshPacked();
	RUNTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshBlueprintVertexSimple();
	RUNTIMEMESHCOMPONENT_API UFunction* Z_Construct_UFunction_URuntimeMeshLibrary_CopyCollisionFromStaticMesh();
	RUNTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_URuntimeMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	RUNTIMEMESHCOMPONENT_API UFunction* Z_Construct_UFunction_URuntimeMeshLibrary_CopyStaticMeshToRuntimeMesh();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	RUNTIMEMESHCOMPONENT_API UFunction* Z_Construct_UFunction_URuntimeMeshLibrary_CopyStaticMeshToRuntimeMeshComponent();
	RUNTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_URuntimeMeshComponent_NoRegister();
	RUNTIMEMESHCOMPONENT_API UFunction* Z_Construct_UFunction_URuntimeMeshLibrary_GenerateTessellationIndexBuffer();
	RUNTIMEMESHCOMPONENT_API UFunction* Z_Construct_UFunction_URuntimeMeshLibrary_GenerateTessellationIndexBufferPacked();
	RUNTIMEMESHCOMPONENT_API UFunction* Z_Construct_UFunction_URuntimeMeshLibrary_GetStaticMeshSection();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	RUNTIMEMESHCOMPONENT_API UFunction* Z_Construct_UFunction_URuntimeMeshLibrary_GetStaticMeshSectionPacked();
// End Cross Module References
	void URuntimeMeshLibrary::StaticRegisterNativesURuntimeMeshLibrary()
	{
		UClass* Class = URuntimeMeshLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CalculateTangentsForMesh", &URuntimeMeshLibrary::execCalculateTangentsForMesh },
			{ "CalculateTangentsForMeshPacked", &URuntimeMeshLibrary::execCalculateTangentsForMeshPacked },
			{ "CopyCollisionFromStaticMesh", &URuntimeMeshLibrary::execCopyCollisionFromStaticMesh },
			{ "CopyStaticMeshToRuntimeMesh", &URuntimeMeshLibrary::execCopyStaticMeshToRuntimeMesh },
			{ "CopyStaticMeshToRuntimeMeshComponent", &URuntimeMeshLibrary::execCopyStaticMeshToRuntimeMeshComponent },
			{ "GenerateTessellationIndexBuffer", &URuntimeMeshLibrary::execGenerateTessellationIndexBuffer },
			{ "GenerateTessellationIndexBufferPacked", &URuntimeMeshLibrary::execGenerateTessellationIndexBufferPacked },
			{ "GetStaticMeshSection", &URuntimeMeshLibrary::execGetStaticMeshSection },
			{ "GetStaticMeshSectionPacked", &URuntimeMeshLibrary::execGetStaticMeshSectionPacked },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_URuntimeMeshLibrary_CalculateTangentsForMesh()
	{
		struct RuntimeMeshLibrary_eventCalculateTangentsForMesh_Parms
		{
			TArray<FVector> Vertices;
			TArray<int32> Triangles;
			TArray<FVector> Normals;
			TArray<FVector2D> UVs;
			TArray<FRuntimeMeshTangent> Tangents;
			bool bCreateSmoothNormals;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bCreateSmoothNormals_SetBit = [](void* Obj){ ((RuntimeMeshLibrary_eventCalculateTangentsForMesh_Parms*)Obj)->bCreateSmoothNormals = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCreateSmoothNormals = { UE4CodeGen_Private::EPropertyClass::Bool, "bCreateSmoothNormals", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(RuntimeMeshLibrary_eventCalculateTangentsForMesh_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bCreateSmoothNormals_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Tangents = { UE4CodeGen_Private::EPropertyClass::Array, "Tangents", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(RuntimeMeshLibrary_eventCalculateTangentsForMesh_Parms, Tangents), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Tangents_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Tangents", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FRuntimeMeshTangent, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UVs_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UVs = { UE4CodeGen_Private::EPropertyClass::Array, "UVs", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(RuntimeMeshLibrary_eventCalculateTangentsForMesh_Parms, UVs), METADATA_PARAMS(NewProp_UVs_MetaData, ARRAY_COUNT(NewProp_UVs_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_UVs_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "UVs", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Normals = { UE4CodeGen_Private::EPropertyClass::Array, "Normals", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(RuntimeMeshLibrary_eventCalculateTangentsForMesh_Parms, Normals), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Normals_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Normals", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Triangles_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Triangles = { UE4CodeGen_Private::EPropertyClass::Array, "Triangles", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(RuntimeMeshLibrary_eventCalculateTangentsForMesh_Parms, Triangles), METADATA_PARAMS(NewProp_Triangles_MetaData, ARRAY_COUNT(NewProp_Triangles_MetaData)) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Triangles_Inner = { UE4CodeGen_Private::EPropertyClass::Int, "Triangles", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Vertices_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Vertices = { UE4CodeGen_Private::EPropertyClass::Array, "Vertices", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(RuntimeMeshLibrary_eventCalculateTangentsForMesh_Parms, Vertices), METADATA_PARAMS(NewProp_Vertices_MetaData, ARRAY_COUNT(NewProp_Vertices_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Vertices_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Vertices", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bCreateSmoothNormals,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Tangents,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Tangents_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UVs,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UVs_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Normals,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Normals_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Triangles,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Triangles_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Vertices,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Vertices_Inner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "AutoCreateRefTerm", "UVs" },
				{ "Category", "Components|RuntimeMesh" },
				{ "CPP_Default_bCreateSmoothNormals", "true" },
				{ "ModuleRelativePath", "Public/RuntimeMeshLibrary.h" },
				{ "ToolTip", "Automatically generate normals and tangent vectors for a mesh\nUVs are required for correct tangent generation." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshLibrary, "CalculateTangentsForMesh", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(RuntimeMeshLibrary_eventCalculateTangentsForMesh_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_URuntimeMeshLibrary_CalculateTangentsForMeshPacked()
	{
		struct RuntimeMeshLibrary_eventCalculateTangentsForMeshPacked_Parms
		{
			TArray<FRuntimeMeshBlueprintVertexSimple> Vertices;
			TArray<int32> Triangles;
			bool bCreateSmoothNormals;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bCreateSmoothNormals_SetBit = [](void* Obj){ ((RuntimeMeshLibrary_eventCalculateTangentsForMeshPacked_Parms*)Obj)->bCreateSmoothNormals = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCreateSmoothNormals = { UE4CodeGen_Private::EPropertyClass::Bool, "bCreateSmoothNormals", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(RuntimeMeshLibrary_eventCalculateTangentsForMeshPacked_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bCreateSmoothNormals_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Triangles_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Triangles = { UE4CodeGen_Private::EPropertyClass::Array, "Triangles", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(RuntimeMeshLibrary_eventCalculateTangentsForMeshPacked_Parms, Triangles), METADATA_PARAMS(NewProp_Triangles_MetaData, ARRAY_COUNT(NewProp_Triangles_MetaData)) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Triangles_Inner = { UE4CodeGen_Private::EPropertyClass::Int, "Triangles", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Vertices = { UE4CodeGen_Private::EPropertyClass::Array, "Vertices", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(RuntimeMeshLibrary_eventCalculateTangentsForMeshPacked_Parms, Vertices), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Vertices_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Vertices", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FRuntimeMeshBlueprintVertexSimple, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bCreateSmoothNormals,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Triangles,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Triangles_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Vertices,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Vertices_Inner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|RuntimeMesh" },
				{ "CPP_Default_bCreateSmoothNormals", "true" },
				{ "ModuleRelativePath", "Public/RuntimeMeshLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshLibrary, "CalculateTangentsForMeshPacked", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(RuntimeMeshLibrary_eventCalculateTangentsForMeshPacked_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_URuntimeMeshLibrary_CopyCollisionFromStaticMesh()
	{
		struct RuntimeMeshLibrary_eventCopyCollisionFromStaticMesh_Parms
		{
			UStaticMesh* StaticMesh;
			URuntimeMesh* RuntimeMesh;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RuntimeMesh = { UE4CodeGen_Private::EPropertyClass::Object, "RuntimeMesh", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(RuntimeMeshLibrary_eventCopyCollisionFromStaticMesh_Parms, RuntimeMesh), Z_Construct_UClass_URuntimeMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StaticMesh = { UE4CodeGen_Private::EPropertyClass::Object, "StaticMesh", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(RuntimeMeshLibrary_eventCopyCollisionFromStaticMesh_Parms, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RuntimeMesh,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StaticMesh,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|RuntimeMesh" },
				{ "ModuleRelativePath", "Public/RuntimeMeshLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshLibrary, "CopyCollisionFromStaticMesh", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(RuntimeMeshLibrary_eventCopyCollisionFromStaticMesh_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_URuntimeMeshLibrary_CopyStaticMeshToRuntimeMesh()
	{
		struct RuntimeMeshLibrary_eventCopyStaticMeshToRuntimeMesh_Parms
		{
			UStaticMeshComponent* StaticMeshComponent;
			int32 LODIndex;
			URuntimeMesh* RuntimeMesh;
			bool bCreateCollision;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bCreateCollision_SetBit = [](void* Obj){ ((RuntimeMeshLibrary_eventCopyStaticMeshToRuntimeMesh_Parms*)Obj)->bCreateCollision = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCreateCollision = { UE4CodeGen_Private::EPropertyClass::Bool, "bCreateCollision", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(RuntimeMeshLibrary_eventCopyStaticMeshToRuntimeMesh_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bCreateCollision_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RuntimeMesh = { UE4CodeGen_Private::EPropertyClass::Object, "RuntimeMesh", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(RuntimeMeshLibrary_eventCopyStaticMeshToRuntimeMesh_Parms, RuntimeMesh), Z_Construct_UClass_URuntimeMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_LODIndex = { UE4CodeGen_Private::EPropertyClass::Int, "LODIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(RuntimeMeshLibrary_eventCopyStaticMeshToRuntimeMesh_Parms, LODIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMeshComponent_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StaticMeshComponent = { UE4CodeGen_Private::EPropertyClass::Object, "StaticMeshComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(RuntimeMeshLibrary_eventCopyStaticMeshToRuntimeMesh_Parms, StaticMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(NewProp_StaticMeshComponent_MetaData, ARRAY_COUNT(NewProp_StaticMeshComponent_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bCreateCollision,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RuntimeMesh,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LODIndex,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StaticMeshComponent,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|RuntimeMesh" },
				{ "ModuleRelativePath", "Public/RuntimeMeshLibrary.h" },
				{ "ToolTip", "Copy sections from a static mesh to a runtime mesh" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshLibrary, "CopyStaticMeshToRuntimeMesh", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(RuntimeMeshLibrary_eventCopyStaticMeshToRuntimeMesh_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_URuntimeMeshLibrary_CopyStaticMeshToRuntimeMeshComponent()
	{
		struct RuntimeMeshLibrary_eventCopyStaticMeshToRuntimeMeshComponent_Parms
		{
			UStaticMeshComponent* StaticMeshComponent;
			int32 LODIndex;
			URuntimeMeshComponent* RuntimeMeshComponent;
			bool bCreateCollision;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_bCreateCollision_SetBit = [](void* Obj){ ((RuntimeMeshLibrary_eventCopyStaticMeshToRuntimeMeshComponent_Parms*)Obj)->bCreateCollision = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCreateCollision = { UE4CodeGen_Private::EPropertyClass::Bool, "bCreateCollision", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(RuntimeMeshLibrary_eventCopyStaticMeshToRuntimeMeshComponent_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bCreateCollision_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RuntimeMeshComponent_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RuntimeMeshComponent = { UE4CodeGen_Private::EPropertyClass::Object, "RuntimeMeshComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(RuntimeMeshLibrary_eventCopyStaticMeshToRuntimeMeshComponent_Parms, RuntimeMeshComponent), Z_Construct_UClass_URuntimeMeshComponent_NoRegister, METADATA_PARAMS(NewProp_RuntimeMeshComponent_MetaData, ARRAY_COUNT(NewProp_RuntimeMeshComponent_MetaData)) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_LODIndex = { UE4CodeGen_Private::EPropertyClass::Int, "LODIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(RuntimeMeshLibrary_eventCopyStaticMeshToRuntimeMeshComponent_Parms, LODIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMeshComponent_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StaticMeshComponent = { UE4CodeGen_Private::EPropertyClass::Object, "StaticMeshComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(RuntimeMeshLibrary_eventCopyStaticMeshToRuntimeMeshComponent_Parms, StaticMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(NewProp_StaticMeshComponent_MetaData, ARRAY_COUNT(NewProp_StaticMeshComponent_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bCreateCollision,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RuntimeMeshComponent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LODIndex,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_StaticMeshComponent,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|RuntimeMesh" },
				{ "ModuleRelativePath", "Public/RuntimeMeshLibrary.h" },
				{ "ToolTip", "Copy sections from a static mesh to a runtime mesh" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshLibrary, "CopyStaticMeshToRuntimeMeshComponent", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(RuntimeMeshLibrary_eventCopyStaticMeshToRuntimeMeshComponent_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_URuntimeMeshLibrary_GenerateTessellationIndexBuffer()
	{
		struct RuntimeMeshLibrary_eventGenerateTessellationIndexBuffer_Parms
		{
			TArray<FVector> Vertices;
			TArray<int32> Triangles;
			TArray<FVector> Normals;
			TArray<FVector2D> UVs;
			TArray<FRuntimeMeshTangent> Tangents;
			TArray<int32> ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Array, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(RuntimeMeshLibrary_eventGenerateTessellationIndexBuffer_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue_Inner = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Tangents = { UE4CodeGen_Private::EPropertyClass::Array, "Tangents", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(RuntimeMeshLibrary_eventGenerateTessellationIndexBuffer_Parms, Tangents), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Tangents_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Tangents", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FRuntimeMeshTangent, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UVs_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UVs = { UE4CodeGen_Private::EPropertyClass::Array, "UVs", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(RuntimeMeshLibrary_eventGenerateTessellationIndexBuffer_Parms, UVs), METADATA_PARAMS(NewProp_UVs_MetaData, ARRAY_COUNT(NewProp_UVs_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_UVs_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "UVs", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Normals = { UE4CodeGen_Private::EPropertyClass::Array, "Normals", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(RuntimeMeshLibrary_eventGenerateTessellationIndexBuffer_Parms, Normals), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Normals_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Normals", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Triangles_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Triangles = { UE4CodeGen_Private::EPropertyClass::Array, "Triangles", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(RuntimeMeshLibrary_eventGenerateTessellationIndexBuffer_Parms, Triangles), METADATA_PARAMS(NewProp_Triangles_MetaData, ARRAY_COUNT(NewProp_Triangles_MetaData)) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Triangles_Inner = { UE4CodeGen_Private::EPropertyClass::Int, "Triangles", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Vertices_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Vertices = { UE4CodeGen_Private::EPropertyClass::Array, "Vertices", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(RuntimeMeshLibrary_eventGenerateTessellationIndexBuffer_Parms, Vertices), METADATA_PARAMS(NewProp_Vertices_MetaData, ARRAY_COUNT(NewProp_Vertices_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Vertices_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Vertices", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Tangents,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Tangents_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UVs,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UVs_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Normals,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Normals_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Triangles,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Triangles_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Vertices,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Vertices_Inner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "AutoCreateRefTerm", "UVs" },
				{ "Category", "Components|RuntimeMesh" },
				{ "ModuleRelativePath", "Public/RuntimeMeshLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshLibrary, "GenerateTessellationIndexBuffer", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(RuntimeMeshLibrary_eventGenerateTessellationIndexBuffer_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_URuntimeMeshLibrary_GenerateTessellationIndexBufferPacked()
	{
		struct RuntimeMeshLibrary_eventGenerateTessellationIndexBufferPacked_Parms
		{
			TArray<FRuntimeMeshBlueprintVertexSimple> Vertices;
			TArray<int32> Triangles;
			TArray<int32> ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Array, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(RuntimeMeshLibrary_eventGenerateTessellationIndexBufferPacked_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue_Inner = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Triangles_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Triangles = { UE4CodeGen_Private::EPropertyClass::Array, "Triangles", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(RuntimeMeshLibrary_eventGenerateTessellationIndexBufferPacked_Parms, Triangles), METADATA_PARAMS(NewProp_Triangles_MetaData, ARRAY_COUNT(NewProp_Triangles_MetaData)) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Triangles_Inner = { UE4CodeGen_Private::EPropertyClass::Int, "Triangles", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Vertices_MetaData[] = {
				{ "NativeConst", "" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Vertices = { UE4CodeGen_Private::EPropertyClass::Array, "Vertices", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000008000182, 1, nullptr, STRUCT_OFFSET(RuntimeMeshLibrary_eventGenerateTessellationIndexBufferPacked_Parms, Vertices), METADATA_PARAMS(NewProp_Vertices_MetaData, ARRAY_COUNT(NewProp_Vertices_MetaData)) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Vertices_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Vertices", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FRuntimeMeshBlueprintVertexSimple, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Triangles,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Triangles_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Vertices,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Vertices_Inner,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|RuntimeMesh" },
				{ "ModuleRelativePath", "Public/RuntimeMeshLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshLibrary, "GenerateTessellationIndexBufferPacked", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(RuntimeMeshLibrary_eventGenerateTessellationIndexBufferPacked_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_URuntimeMeshLibrary_GetStaticMeshSection()
	{
		struct RuntimeMeshLibrary_eventGetStaticMeshSection_Parms
		{
			UStaticMesh* InMesh;
			int32 LODIndex;
			int32 SectionIndex;
			TArray<FVector> Vertices;
			TArray<int32> Triangles;
			TArray<FVector> Normals;
			TArray<FVector2D> UVs;
			TArray<FColor> Colors;
			TArray<FRuntimeMeshTangent> Tangents;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Tangents = { UE4CodeGen_Private::EPropertyClass::Array, "Tangents", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(RuntimeMeshLibrary_eventGetStaticMeshSection_Parms, Tangents), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Tangents_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Tangents", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FRuntimeMeshTangent, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Colors = { UE4CodeGen_Private::EPropertyClass::Array, "Colors", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(RuntimeMeshLibrary_eventGetStaticMeshSection_Parms, Colors), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Colors_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Colors", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UVs = { UE4CodeGen_Private::EPropertyClass::Array, "UVs", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(RuntimeMeshLibrary_eventGetStaticMeshSection_Parms, UVs), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_UVs_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "UVs", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Normals = { UE4CodeGen_Private::EPropertyClass::Array, "Normals", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(RuntimeMeshLibrary_eventGetStaticMeshSection_Parms, Normals), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Normals_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Normals", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Triangles = { UE4CodeGen_Private::EPropertyClass::Array, "Triangles", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(RuntimeMeshLibrary_eventGetStaticMeshSection_Parms, Triangles), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Triangles_Inner = { UE4CodeGen_Private::EPropertyClass::Int, "Triangles", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Vertices = { UE4CodeGen_Private::EPropertyClass::Array, "Vertices", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(RuntimeMeshLibrary_eventGetStaticMeshSection_Parms, Vertices), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Vertices_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Vertices", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_SectionIndex = { UE4CodeGen_Private::EPropertyClass::Int, "SectionIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(RuntimeMeshLibrary_eventGetStaticMeshSection_Parms, SectionIndex), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_LODIndex = { UE4CodeGen_Private::EPropertyClass::Int, "LODIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(RuntimeMeshLibrary_eventGetStaticMeshSection_Parms, LODIndex), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InMesh = { UE4CodeGen_Private::EPropertyClass::Object, "InMesh", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(RuntimeMeshLibrary_eventGetStaticMeshSection_Parms, InMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Tangents,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Tangents_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Colors,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Colors_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UVs,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UVs_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Normals,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Normals_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Triangles,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Triangles_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Vertices,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Vertices_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SectionIndex,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LODIndex,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InMesh,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "AutoCreateRefTerm", "UVs" },
				{ "Category", "Components|RuntimeMesh" },
				{ "ModuleRelativePath", "Public/RuntimeMeshLibrary.h" },
				{ "ToolTip", "Grab geometry data from a StaticMesh asset." },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshLibrary, "GetStaticMeshSection", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(RuntimeMeshLibrary_eventGetStaticMeshSection_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_URuntimeMeshLibrary_GetStaticMeshSectionPacked()
	{
		struct RuntimeMeshLibrary_eventGetStaticMeshSectionPacked_Parms
		{
			UStaticMesh* InMesh;
			int32 LODIndex;
			int32 SectionIndex;
			TArray<FRuntimeMeshBlueprintVertexSimple> Vertices;
			TArray<int32> Triangles;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Triangles = { UE4CodeGen_Private::EPropertyClass::Array, "Triangles", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(RuntimeMeshLibrary_eventGetStaticMeshSectionPacked_Parms, Triangles), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Triangles_Inner = { UE4CodeGen_Private::EPropertyClass::Int, "Triangles", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Vertices = { UE4CodeGen_Private::EPropertyClass::Array, "Vertices", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000180, 1, nullptr, STRUCT_OFFSET(RuntimeMeshLibrary_eventGetStaticMeshSectionPacked_Parms, Vertices), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Vertices_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "Vertices", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FRuntimeMeshBlueprintVertexSimple, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_SectionIndex = { UE4CodeGen_Private::EPropertyClass::Int, "SectionIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(RuntimeMeshLibrary_eventGetStaticMeshSectionPacked_Parms, SectionIndex), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_LODIndex = { UE4CodeGen_Private::EPropertyClass::Int, "LODIndex", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(RuntimeMeshLibrary_eventGetStaticMeshSectionPacked_Parms, LODIndex), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InMesh = { UE4CodeGen_Private::EPropertyClass::Object, "InMesh", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(RuntimeMeshLibrary_eventGetStaticMeshSectionPacked_Parms, InMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Triangles,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Triangles_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Vertices,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Vertices_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_SectionIndex,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LODIndex,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InMesh,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|RuntimeMesh" },
				{ "ModuleRelativePath", "Public/RuntimeMeshLibrary.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshLibrary, "GetStaticMeshSectionPacked", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04422401, sizeof(RuntimeMeshLibrary_eventGetStaticMeshSectionPacked_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_URuntimeMeshLibrary_NoRegister()
	{
		return URuntimeMeshLibrary::StaticClass();
	}
	UClass* Z_Construct_UClass_URuntimeMeshLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
				(UObject* (*)())Z_Construct_UPackage__Script_RuntimeMeshComponent,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_URuntimeMeshLibrary_CalculateTangentsForMesh, "CalculateTangentsForMesh" }, // 2836135061
				{ &Z_Construct_UFunction_URuntimeMeshLibrary_CalculateTangentsForMeshPacked, "CalculateTangentsForMeshPacked" }, // 1791061422
				{ &Z_Construct_UFunction_URuntimeMeshLibrary_CopyCollisionFromStaticMesh, "CopyCollisionFromStaticMesh" }, // 3662092280
				{ &Z_Construct_UFunction_URuntimeMeshLibrary_CopyStaticMeshToRuntimeMesh, "CopyStaticMeshToRuntimeMesh" }, // 3573099501
				{ &Z_Construct_UFunction_URuntimeMeshLibrary_CopyStaticMeshToRuntimeMeshComponent, "CopyStaticMeshToRuntimeMeshComponent" }, // 3030658604
				{ &Z_Construct_UFunction_URuntimeMeshLibrary_GenerateTessellationIndexBuffer, "GenerateTessellationIndexBuffer" }, // 122916316
				{ &Z_Construct_UFunction_URuntimeMeshLibrary_GenerateTessellationIndexBufferPacked, "GenerateTessellationIndexBufferPacked" }, // 3098273228
				{ &Z_Construct_UFunction_URuntimeMeshLibrary_GetStaticMeshSection, "GetStaticMeshSection" }, // 22386636
				{ &Z_Construct_UFunction_URuntimeMeshLibrary_GetStaticMeshSectionPacked, "GetStaticMeshSectionPacked" }, // 2888863039
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "RuntimeMeshLibrary.h" },
				{ "ModuleRelativePath", "Public/RuntimeMeshLibrary.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<URuntimeMeshLibrary>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&URuntimeMeshLibrary::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URuntimeMeshLibrary, 590866360);
	static FCompiledInDefer Z_CompiledInDefer_UClass_URuntimeMeshLibrary(Z_Construct_UClass_URuntimeMeshLibrary, &URuntimeMeshLibrary::StaticClass, TEXT("/Script/RuntimeMeshComponent"), TEXT("URuntimeMeshLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URuntimeMeshLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
