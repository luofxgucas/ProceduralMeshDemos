// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/ProceduralMeshesPrivatePCH.h"
#include "Public/SierpinskiTetrahedron.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSierpinskiTetrahedron() {}
// Cross Module References
	PROCEDURALMESHES_API UEnum* Z_Construct_UEnum_ProceduralMeshes_ETetrahedronSide();
	UPackage* Z_Construct_UPackage__Script_ProceduralMeshes();
	PROCEDURALMESHES_API UScriptStruct* Z_Construct_UScriptStruct_FTetrahedronStructure();
	PROCEDURALMESHES_API UClass* Z_Construct_UClass_ASierpinskiTetrahedron_NoRegister();
	PROCEDURALMESHES_API UClass* Z_Construct_UClass_ASierpinskiTetrahedron();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	RUNTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_URuntimeMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
// End Cross Module References
	static UEnum* ETetrahedronSide_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ProceduralMeshes_ETetrahedronSide, Z_Construct_UPackage__Script_ProceduralMeshes(), TEXT("ETetrahedronSide"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETetrahedronSide(ETetrahedronSide_StaticEnum, TEXT("/Script/ProceduralMeshes"), TEXT("ETetrahedronSide"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ProceduralMeshes_ETetrahedronSide_CRC() { return 2927364285U; }
	UEnum* Z_Construct_UEnum_ProceduralMeshes_ETetrahedronSide()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ProceduralMeshes();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETetrahedronSide"), 0, Get_Z_Construct_UEnum_ProceduralMeshes_ETetrahedronSide_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETetrahedronSide::Front", (int64)ETetrahedronSide::Front },
				{ "ETetrahedronSide::Left", (int64)ETetrahedronSide::Left },
				{ "ETetrahedronSide::Right", (int64)ETetrahedronSide::Right },
				{ "ETetrahedronSide::Bottom", (int64)ETetrahedronSide::Bottom },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/SierpinskiTetrahedron.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ProceduralMeshes,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ETetrahedronSide",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"ETetrahedronSide",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FTetrahedronStructure::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PROCEDURALMESHES_API uint32 Get_Z_Construct_UScriptStruct_FTetrahedronStructure_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTetrahedronStructure, Z_Construct_UPackage__Script_ProceduralMeshes(), TEXT("TetrahedronStructure"), sizeof(FTetrahedronStructure), Get_Z_Construct_UScriptStruct_FTetrahedronStructure_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTetrahedronStructure(FTetrahedronStructure::StaticStruct, TEXT("/Script/ProceduralMeshes"), TEXT("TetrahedronStructure"), false, nullptr, nullptr);
static struct FScriptStruct_ProceduralMeshes_StaticRegisterNativesFTetrahedronStructure
{
	FScriptStruct_ProceduralMeshes_StaticRegisterNativesFTetrahedronStructure()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TetrahedronStructure")),new UScriptStruct::TCppStructOps<FTetrahedronStructure>);
	}
} ScriptStruct_ProceduralMeshes_StaticRegisterNativesFTetrahedronStructure;
	UScriptStruct* Z_Construct_UScriptStruct_FTetrahedronStructure()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTetrahedronStructure_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_ProceduralMeshes();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TetrahedronStructure"), sizeof(FTetrahedronStructure), Get_Z_Construct_UScriptStruct_FTetrahedronStructure_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/SierpinskiTetrahedron.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTetrahedronStructure>(); };
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_ProceduralMeshes,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"TetrahedronStructure",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FTetrahedronStructure),
				alignof(FTetrahedronStructure),
				nullptr, 0,
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTetrahedronStructure_CRC() { return 3159262321U; }
	void ASierpinskiTetrahedron::StaticRegisterNativesASierpinskiTetrahedron()
	{
	}
	UClass* Z_Construct_UClass_ASierpinskiTetrahedron_NoRegister()
	{
		return ASierpinskiTetrahedron::StaticClass();
	}
	UClass* Z_Construct_UClass_ASierpinskiTetrahedron()
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
				{ "IncludePath", "SierpinskiTetrahedron.h" },
				{ "ModuleRelativePath", "Public/SierpinskiTetrahedron.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[] = {
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/SierpinskiTetrahedron.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshComponent = { UE4CodeGen_Private::EPropertyClass::Object, "MeshComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x0020080000080008, 1, nullptr, STRUCT_OFFSET(ASierpinskiTetrahedron, MeshComponent), Z_Construct_UClass_URuntimeMeshComponent_NoRegister, METADATA_PARAMS(NewProp_MeshComponent_MetaData, ARRAY_COUNT(NewProp_MeshComponent_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RootNode_MetaData[] = {
				{ "Category", "Default" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Public/SierpinskiTetrahedron.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RootNode = { UE4CodeGen_Private::EPropertyClass::Object, "RootNode", RF_Public|RF_Transient|RF_MarkAsNative, 0x00200800000a001d, 1, nullptr, STRUCT_OFFSET(ASierpinskiTetrahedron, RootNode), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(NewProp_RootNode_MetaData, ARRAY_COUNT(NewProp_RootNode_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[] = {
				{ "Category", "Procedural Parameters" },
				{ "ModuleRelativePath", "Public/SierpinskiTetrahedron.h" },
				{ "ToolTip", "4^5 = 1024 tetrahedrons" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Material = { UE4CodeGen_Private::EPropertyClass::Object, "Material", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ASierpinskiTetrahedron, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(NewProp_Material_MetaData, ARRAY_COUNT(NewProp_Material_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Iterations_MetaData[] = {
				{ "Category", "Procedural Parameters" },
				{ "ModuleRelativePath", "Public/SierpinskiTetrahedron.h" },
			};
#endif
			static const UE4CodeGen_Private::FIntPropertyParams NewProp_Iterations = { UE4CodeGen_Private::EPropertyClass::Int, "Iterations", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ASierpinskiTetrahedron, Iterations), METADATA_PARAMS(NewProp_Iterations_MetaData, ARRAY_COUNT(NewProp_Iterations_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[] = {
				{ "Category", "Procedural Parameters" },
				{ "ModuleRelativePath", "Public/SierpinskiTetrahedron.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Size = { UE4CodeGen_Private::EPropertyClass::Float, "Size", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ASierpinskiTetrahedron, Size), METADATA_PARAMS(NewProp_Size_MetaData, ARRAY_COUNT(NewProp_Size_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MeshComponent,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RootNode,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Material,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Iterations,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Size,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ASierpinskiTetrahedron>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ASierpinskiTetrahedron::StaticClass,
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
	IMPLEMENT_CLASS(ASierpinskiTetrahedron, 3244197676);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASierpinskiTetrahedron(Z_Construct_UClass_ASierpinskiTetrahedron, &ASierpinskiTetrahedron::StaticClass, TEXT("/Script/ProceduralMeshes"), TEXT("ASierpinskiTetrahedron"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASierpinskiTetrahedron);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
