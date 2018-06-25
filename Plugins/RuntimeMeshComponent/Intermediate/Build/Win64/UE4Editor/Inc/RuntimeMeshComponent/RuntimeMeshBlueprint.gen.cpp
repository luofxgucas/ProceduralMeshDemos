// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/RuntimeMeshBlueprint.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRuntimeMeshBlueprint() {}
// Cross Module References
	RUNTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshBlueprintVertexSimple();
	UPackage* Z_Construct_UPackage__Script_RuntimeMeshComponent();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	RUNTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshTangent();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
class UScriptStruct* FRuntimeMeshBlueprintVertexSimple::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern RUNTIMEMESHCOMPONENT_API uint32 Get_Z_Construct_UScriptStruct_FRuntimeMeshBlueprintVertexSimple_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRuntimeMeshBlueprintVertexSimple, Z_Construct_UPackage__Script_RuntimeMeshComponent(), TEXT("RuntimeMeshBlueprintVertexSimple"), sizeof(FRuntimeMeshBlueprintVertexSimple), Get_Z_Construct_UScriptStruct_FRuntimeMeshBlueprintVertexSimple_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRuntimeMeshBlueprintVertexSimple(FRuntimeMeshBlueprintVertexSimple::StaticStruct, TEXT("/Script/RuntimeMeshComponent"), TEXT("RuntimeMeshBlueprintVertexSimple"), false, nullptr, nullptr);
static struct FScriptStruct_RuntimeMeshComponent_StaticRegisterNativesFRuntimeMeshBlueprintVertexSimple
{
	FScriptStruct_RuntimeMeshComponent_StaticRegisterNativesFRuntimeMeshBlueprintVertexSimple()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RuntimeMeshBlueprintVertexSimple")),new UScriptStruct::TCppStructOps<FRuntimeMeshBlueprintVertexSimple>);
	}
} ScriptStruct_RuntimeMeshComponent_StaticRegisterNativesFRuntimeMeshBlueprintVertexSimple;
	UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshBlueprintVertexSimple()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRuntimeMeshBlueprintVertexSimple_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_RuntimeMeshComponent();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RuntimeMeshBlueprintVertexSimple"), sizeof(FRuntimeMeshBlueprintVertexSimple), Get_Z_Construct_UScriptStruct_FRuntimeMeshBlueprintVertexSimple_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/RuntimeMeshBlueprint.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRuntimeMeshBlueprintVertexSimple>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UV0_MetaData[] = {
				{ "Category", "Vertex" },
				{ "ModuleRelativePath", "Public/RuntimeMeshBlueprint.h" },
				{ "ToolTip", "Vertex texture co-ordinate" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_UV0 = { UE4CodeGen_Private::EPropertyClass::Struct, "UV0", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FRuntimeMeshBlueprintVertexSimple, UV0), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(NewProp_UV0_MetaData, ARRAY_COUNT(NewProp_UV0_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[] = {
				{ "Category", "Vertex" },
				{ "ModuleRelativePath", "Public/RuntimeMeshBlueprint.h" },
				{ "ToolTip", "Vertex color" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Color = { UE4CodeGen_Private::EPropertyClass::Struct, "Color", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FRuntimeMeshBlueprintVertexSimple, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(NewProp_Color_MetaData, ARRAY_COUNT(NewProp_Color_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tangent_MetaData[] = {
				{ "Category", "Vertex" },
				{ "ModuleRelativePath", "Public/RuntimeMeshBlueprint.h" },
				{ "ToolTip", "Vertex tangent" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Tangent = { UE4CodeGen_Private::EPropertyClass::Struct, "Tangent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FRuntimeMeshBlueprintVertexSimple, Tangent), Z_Construct_UScriptStruct_FRuntimeMeshTangent, METADATA_PARAMS(NewProp_Tangent_MetaData, ARRAY_COUNT(NewProp_Tangent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Normal_MetaData[] = {
				{ "Category", "Vertex" },
				{ "ModuleRelativePath", "Public/RuntimeMeshBlueprint.h" },
				{ "ToolTip", "Vertex normal" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Normal = { UE4CodeGen_Private::EPropertyClass::Struct, "Normal", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FRuntimeMeshBlueprintVertexSimple, Normal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_Normal_MetaData, ARRAY_COUNT(NewProp_Normal_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[] = {
				{ "Category", "Vertex" },
				{ "ModuleRelativePath", "Public/RuntimeMeshBlueprint.h" },
				{ "ToolTip", "Vertex position" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position = { UE4CodeGen_Private::EPropertyClass::Struct, "Position", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FRuntimeMeshBlueprintVertexSimple, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_Position_MetaData, ARRAY_COUNT(NewProp_Position_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_UV0,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Color,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Tangent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Normal,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Position,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_RuntimeMeshComponent,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"RuntimeMeshBlueprintVertexSimple",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FRuntimeMeshBlueprintVertexSimple),
				alignof(FRuntimeMeshBlueprintVertexSimple),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRuntimeMeshBlueprintVertexSimple_CRC() { return 1408506681U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
