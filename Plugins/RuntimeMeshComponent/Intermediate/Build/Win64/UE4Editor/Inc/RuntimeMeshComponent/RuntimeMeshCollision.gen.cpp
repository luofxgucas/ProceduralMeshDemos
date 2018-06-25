// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/RuntimeMeshCollision.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRuntimeMeshCollision() {}
// Cross Module References
	RUNTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshCollisionCapsule();
	UPackage* Z_Construct_UPackage__Script_RuntimeMeshComponent();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	RUNTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshCollisionBox();
	RUNTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshCollisionSphere();
// End Cross Module References
class UScriptStruct* FRuntimeMeshCollisionCapsule::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern RUNTIMEMESHCOMPONENT_API uint32 Get_Z_Construct_UScriptStruct_FRuntimeMeshCollisionCapsule_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRuntimeMeshCollisionCapsule, Z_Construct_UPackage__Script_RuntimeMeshComponent(), TEXT("RuntimeMeshCollisionCapsule"), sizeof(FRuntimeMeshCollisionCapsule), Get_Z_Construct_UScriptStruct_FRuntimeMeshCollisionCapsule_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRuntimeMeshCollisionCapsule(FRuntimeMeshCollisionCapsule::StaticStruct, TEXT("/Script/RuntimeMeshComponent"), TEXT("RuntimeMeshCollisionCapsule"), false, nullptr, nullptr);
static struct FScriptStruct_RuntimeMeshComponent_StaticRegisterNativesFRuntimeMeshCollisionCapsule
{
	FScriptStruct_RuntimeMeshComponent_StaticRegisterNativesFRuntimeMeshCollisionCapsule()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RuntimeMeshCollisionCapsule")),new UScriptStruct::TCppStructOps<FRuntimeMeshCollisionCapsule>);
	}
} ScriptStruct_RuntimeMeshComponent_StaticRegisterNativesFRuntimeMeshCollisionCapsule;
	UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshCollisionCapsule()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRuntimeMeshCollisionCapsule_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_RuntimeMeshComponent();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RuntimeMeshCollisionCapsule"), sizeof(FRuntimeMeshCollisionCapsule), Get_Z_Construct_UScriptStruct_FRuntimeMeshCollisionCapsule_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/RuntimeMeshCollision.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRuntimeMeshCollisionCapsule>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Length_MetaData[] = {
				{ "Category", "RuntimeMeshCollisionCapsule" },
				{ "ModuleRelativePath", "Public/RuntimeMeshCollision.h" },
				{ "ToolTip", "This is of line-segment ie. add Radius to both ends to find total length." },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Length = { UE4CodeGen_Private::EPropertyClass::Float, "Length", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FRuntimeMeshCollisionCapsule, Length), METADATA_PARAMS(NewProp_Length_MetaData, ARRAY_COUNT(NewProp_Length_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[] = {
				{ "Category", "RuntimeMeshCollisionCapsule" },
				{ "ModuleRelativePath", "Public/RuntimeMeshCollision.h" },
				{ "ToolTip", "Radius of the capsule" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius = { UE4CodeGen_Private::EPropertyClass::Float, "Radius", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FRuntimeMeshCollisionCapsule, Radius), METADATA_PARAMS(NewProp_Radius_MetaData, ARRAY_COUNT(NewProp_Radius_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[] = {
				{ "Category", "RuntimeMeshCollisionCapsule" },
				{ "ModuleRelativePath", "Public/RuntimeMeshCollision.h" },
				{ "ToolTip", "Rotation of the capsule" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation = { UE4CodeGen_Private::EPropertyClass::Struct, "Rotation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FRuntimeMeshCollisionCapsule, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(NewProp_Rotation_MetaData, ARRAY_COUNT(NewProp_Rotation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Center_MetaData[] = {
				{ "Category", "RuntimeMeshCollisionCapsule" },
				{ "ModuleRelativePath", "Public/RuntimeMeshCollision.h" },
				{ "ToolTip", "Position of the capsule's origin" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Center = { UE4CodeGen_Private::EPropertyClass::Struct, "Center", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FRuntimeMeshCollisionCapsule, Center), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_Center_MetaData, ARRAY_COUNT(NewProp_Center_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Length,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Radius,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Rotation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Center,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_RuntimeMeshComponent,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"RuntimeMeshCollisionCapsule",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FRuntimeMeshCollisionCapsule),
				alignof(FRuntimeMeshCollisionCapsule),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRuntimeMeshCollisionCapsule_CRC() { return 486885814U; }
class UScriptStruct* FRuntimeMeshCollisionBox::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern RUNTIMEMESHCOMPONENT_API uint32 Get_Z_Construct_UScriptStruct_FRuntimeMeshCollisionBox_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRuntimeMeshCollisionBox, Z_Construct_UPackage__Script_RuntimeMeshComponent(), TEXT("RuntimeMeshCollisionBox"), sizeof(FRuntimeMeshCollisionBox), Get_Z_Construct_UScriptStruct_FRuntimeMeshCollisionBox_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRuntimeMeshCollisionBox(FRuntimeMeshCollisionBox::StaticStruct, TEXT("/Script/RuntimeMeshComponent"), TEXT("RuntimeMeshCollisionBox"), false, nullptr, nullptr);
static struct FScriptStruct_RuntimeMeshComponent_StaticRegisterNativesFRuntimeMeshCollisionBox
{
	FScriptStruct_RuntimeMeshComponent_StaticRegisterNativesFRuntimeMeshCollisionBox()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RuntimeMeshCollisionBox")),new UScriptStruct::TCppStructOps<FRuntimeMeshCollisionBox>);
	}
} ScriptStruct_RuntimeMeshComponent_StaticRegisterNativesFRuntimeMeshCollisionBox;
	UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshCollisionBox()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRuntimeMeshCollisionBox_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_RuntimeMeshComponent();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RuntimeMeshCollisionBox"), sizeof(FRuntimeMeshCollisionBox), Get_Z_Construct_UScriptStruct_FRuntimeMeshCollisionBox_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/RuntimeMeshCollision.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRuntimeMeshCollisionBox>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Extents_MetaData[] = {
				{ "Category", "RuntimeMeshCollisionBox" },
				{ "ModuleRelativePath", "Public/RuntimeMeshCollision.h" },
				{ "ToolTip", "Extents of the box" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Extents = { UE4CodeGen_Private::EPropertyClass::Struct, "Extents", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FRuntimeMeshCollisionBox, Extents), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_Extents_MetaData, ARRAY_COUNT(NewProp_Extents_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[] = {
				{ "Category", "RuntimeMeshCollisionBox" },
				{ "ModuleRelativePath", "Public/RuntimeMeshCollision.h" },
				{ "ToolTip", "Rotation of the box" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation = { UE4CodeGen_Private::EPropertyClass::Struct, "Rotation", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FRuntimeMeshCollisionBox, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(NewProp_Rotation_MetaData, ARRAY_COUNT(NewProp_Rotation_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Center_MetaData[] = {
				{ "Category", "RuntimeMeshCollisionBox" },
				{ "ModuleRelativePath", "Public/RuntimeMeshCollision.h" },
				{ "ToolTip", "Position of the box's origin" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Center = { UE4CodeGen_Private::EPropertyClass::Struct, "Center", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FRuntimeMeshCollisionBox, Center), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_Center_MetaData, ARRAY_COUNT(NewProp_Center_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Extents,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Rotation,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Center,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_RuntimeMeshComponent,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"RuntimeMeshCollisionBox",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FRuntimeMeshCollisionBox),
				alignof(FRuntimeMeshCollisionBox),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRuntimeMeshCollisionBox_CRC() { return 3606972018U; }
class UScriptStruct* FRuntimeMeshCollisionSphere::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern RUNTIMEMESHCOMPONENT_API uint32 Get_Z_Construct_UScriptStruct_FRuntimeMeshCollisionSphere_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRuntimeMeshCollisionSphere, Z_Construct_UPackage__Script_RuntimeMeshComponent(), TEXT("RuntimeMeshCollisionSphere"), sizeof(FRuntimeMeshCollisionSphere), Get_Z_Construct_UScriptStruct_FRuntimeMeshCollisionSphere_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRuntimeMeshCollisionSphere(FRuntimeMeshCollisionSphere::StaticStruct, TEXT("/Script/RuntimeMeshComponent"), TEXT("RuntimeMeshCollisionSphere"), false, nullptr, nullptr);
static struct FScriptStruct_RuntimeMeshComponent_StaticRegisterNativesFRuntimeMeshCollisionSphere
{
	FScriptStruct_RuntimeMeshComponent_StaticRegisterNativesFRuntimeMeshCollisionSphere()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RuntimeMeshCollisionSphere")),new UScriptStruct::TCppStructOps<FRuntimeMeshCollisionSphere>);
	}
} ScriptStruct_RuntimeMeshComponent_StaticRegisterNativesFRuntimeMeshCollisionSphere;
	UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshCollisionSphere()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRuntimeMeshCollisionSphere_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_RuntimeMeshComponent();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RuntimeMeshCollisionSphere"), sizeof(FRuntimeMeshCollisionSphere), Get_Z_Construct_UScriptStruct_FRuntimeMeshCollisionSphere_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/RuntimeMeshCollision.h" },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRuntimeMeshCollisionSphere>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[] = {
				{ "Category", "RuntimeMeshCollisionSphere" },
				{ "ModuleRelativePath", "Public/RuntimeMeshCollision.h" },
				{ "ToolTip", "Radius of the sphere" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius = { UE4CodeGen_Private::EPropertyClass::Float, "Radius", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FRuntimeMeshCollisionSphere, Radius), METADATA_PARAMS(NewProp_Radius_MetaData, ARRAY_COUNT(NewProp_Radius_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Center_MetaData[] = {
				{ "Category", "RuntimeMeshCollisionSphere" },
				{ "ModuleRelativePath", "Public/RuntimeMeshCollision.h" },
				{ "ToolTip", "Position of the sphere's origin" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_Center = { UE4CodeGen_Private::EPropertyClass::Struct, "Center", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FRuntimeMeshCollisionSphere, Center), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_Center_MetaData, ARRAY_COUNT(NewProp_Center_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Radius,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_Center,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_RuntimeMeshComponent,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"RuntimeMeshCollisionSphere",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000201),
				sizeof(FRuntimeMeshCollisionSphere),
				alignof(FRuntimeMeshCollisionSphere),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRuntimeMeshCollisionSphere_CRC() { return 2494923724U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
