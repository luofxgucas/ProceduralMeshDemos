// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/RuntimeMeshCore.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRuntimeMeshCore() {}
// Cross Module References
	RUNTIMEMESHCOMPONENT_API UEnum* Z_Construct_UEnum_RuntimeMeshComponent_ERuntimeMeshCollisionCookingMode();
	UPackage* Z_Construct_UPackage__Script_RuntimeMeshComponent();
	RUNTIMEMESHCOMPONENT_API UEnum* Z_Construct_UEnum_RuntimeMeshComponent_EUpdateFrequency();
	RUNTIMEMESHCOMPONENT_API UEnum* Z_Construct_UEnum_RuntimeMeshComponent_ERuntimeMeshMobility();
	RUNTIMEMESHCOMPONENT_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshTangent();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	static UEnum* ERuntimeMeshCollisionCookingMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_RuntimeMeshComponent_ERuntimeMeshCollisionCookingMode, Z_Construct_UPackage__Script_RuntimeMeshComponent(), TEXT("ERuntimeMeshCollisionCookingMode"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ERuntimeMeshCollisionCookingMode(ERuntimeMeshCollisionCookingMode_StaticEnum, TEXT("/Script/RuntimeMeshComponent"), TEXT("ERuntimeMeshCollisionCookingMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_RuntimeMeshComponent_ERuntimeMeshCollisionCookingMode_CRC() { return 2268172205U; }
	UEnum* Z_Construct_UEnum_RuntimeMeshComponent_ERuntimeMeshCollisionCookingMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_RuntimeMeshComponent();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ERuntimeMeshCollisionCookingMode"), 0, Get_Z_Construct_UEnum_RuntimeMeshComponent_ERuntimeMeshCollisionCookingMode_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ERuntimeMeshCollisionCookingMode::CollisionPerformance", (int64)ERuntimeMeshCollisionCookingMode::CollisionPerformance },
				{ "ERuntimeMeshCollisionCookingMode::CookingPerformance", (int64)ERuntimeMeshCollisionCookingMode::CookingPerformance },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "CollisionPerformance.DisplayName", "Collision Performance" },
				{ "CollisionPerformance.ToolTip", "*       Favors runtime collision performance of cooking speed.\n*       This means that cooking a new mesh will be slower, but collision will be faster." },
				{ "CookingPerformance.DisplayName", "Cooking Performance" },
				{ "CookingPerformance.ToolTip", "*       Favors cooking speed over collision performance.\n*       This means that cooking a new mesh will be faster, but collision will be slower." },
				{ "ModuleRelativePath", "Public/RuntimeMeshCore.h" },
				{ "ToolTip", "*      Configuration flag for the collision cooking to prioritize cooking speed or collision performance." },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_RuntimeMeshComponent,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ERuntimeMeshCollisionCookingMode",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"ERuntimeMeshCollisionCookingMode",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EUpdateFrequency_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_RuntimeMeshComponent_EUpdateFrequency, Z_Construct_UPackage__Script_RuntimeMeshComponent(), TEXT("EUpdateFrequency"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EUpdateFrequency(EUpdateFrequency_StaticEnum, TEXT("/Script/RuntimeMeshComponent"), TEXT("EUpdateFrequency"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_RuntimeMeshComponent_EUpdateFrequency_CRC() { return 4046351824U; }
	UEnum* Z_Construct_UEnum_RuntimeMeshComponent_EUpdateFrequency()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_RuntimeMeshComponent();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EUpdateFrequency"), 0, Get_Z_Construct_UEnum_RuntimeMeshComponent_EUpdateFrequency_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EUpdateFrequency::Average", (int64)EUpdateFrequency::Average },
				{ "EUpdateFrequency::Frequent", (int64)EUpdateFrequency::Frequent },
				{ "EUpdateFrequency::Infrequent", (int64)EUpdateFrequency::Infrequent },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Average.DisplayName", "Average" },
				{ "Average.ToolTip", "Tries to skip recreating the scene proxy if possible." },
				{ "BlueprintType", "true" },
				{ "Frequent.DisplayName", "Frequent" },
				{ "Frequent.ToolTip", "Tries to skip recreating the scene proxy if possible and optimizes the buffers for frequent updates." },
				{ "Infrequent.DisplayName", "Infrequent" },
				{ "Infrequent.ToolTip", "If the component is static it will try to use the static rendering path (this will force a recreate of the scene proxy)" },
				{ "ModuleRelativePath", "Public/RuntimeMeshCore.h" },
				{ "ToolTip", "Update frequency for a section. Used to optimize for update or render speed" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_RuntimeMeshComponent,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"EUpdateFrequency",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"EUpdateFrequency",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ERuntimeMeshMobility_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_RuntimeMeshComponent_ERuntimeMeshMobility, Z_Construct_UPackage__Script_RuntimeMeshComponent(), TEXT("ERuntimeMeshMobility"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ERuntimeMeshMobility(ERuntimeMeshMobility_StaticEnum, TEXT("/Script/RuntimeMeshComponent"), TEXT("ERuntimeMeshMobility"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_RuntimeMeshComponent_ERuntimeMeshMobility_CRC() { return 2242265851U; }
	UEnum* Z_Construct_UEnum_RuntimeMeshComponent_ERuntimeMeshMobility()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_RuntimeMeshComponent();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ERuntimeMeshMobility"), 0, Get_Z_Construct_UEnum_RuntimeMeshComponent_ERuntimeMeshMobility_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ERuntimeMeshMobility::Movable", (int64)ERuntimeMeshMobility::Movable },
				{ "ERuntimeMeshMobility::Stationary", (int64)ERuntimeMeshMobility::Stationary },
				{ "ERuntimeMeshMobility::Static", (int64)ERuntimeMeshMobility::Static },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/RuntimeMeshCore.h" },
				{ "ToolTip", "Mobility status for a RuntimeMeshComponent" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_RuntimeMeshComponent,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ERuntimeMeshMobility",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"ERuntimeMeshMobility",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FRuntimeMeshTangent::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern RUNTIMEMESHCOMPONENT_API uint32 Get_Z_Construct_UScriptStruct_FRuntimeMeshTangent_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRuntimeMeshTangent, Z_Construct_UPackage__Script_RuntimeMeshComponent(), TEXT("RuntimeMeshTangent"), sizeof(FRuntimeMeshTangent), Get_Z_Construct_UScriptStruct_FRuntimeMeshTangent_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRuntimeMeshTangent(FRuntimeMeshTangent::StaticStruct, TEXT("/Script/RuntimeMeshComponent"), TEXT("RuntimeMeshTangent"), false, nullptr, nullptr);
static struct FScriptStruct_RuntimeMeshComponent_StaticRegisterNativesFRuntimeMeshTangent
{
	FScriptStruct_RuntimeMeshComponent_StaticRegisterNativesFRuntimeMeshTangent()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RuntimeMeshTangent")),new UScriptStruct::TCppStructOps<FRuntimeMeshTangent>);
	}
} ScriptStruct_RuntimeMeshComponent_StaticRegisterNativesFRuntimeMeshTangent;
	UScriptStruct* Z_Construct_UScriptStruct_FRuntimeMeshTangent()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRuntimeMeshTangent_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_RuntimeMeshComponent();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RuntimeMeshTangent"), sizeof(FRuntimeMeshTangent), Get_Z_Construct_UScriptStruct_FRuntimeMeshTangent_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/RuntimeMeshCore.h" },
				{ "ToolTip", "Struct used to specify a tangent vector for a vertex\nThe Y tangent is computed from the cross product of the vertex normal (Tangent Z) and the TangentX member." },
			};
#endif
			auto NewStructOpsLambda = []() -> void* { return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRuntimeMeshTangent>(); };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFlipTangentY_MetaData[] = {
				{ "Category", "Tangent" },
				{ "ModuleRelativePath", "Public/RuntimeMeshCore.h" },
				{ "ToolTip", "Bool that indicates whether we should flip the Y tangent when we compute it using cross product" },
			};
#endif
			auto NewProp_bFlipTangentY_SetBit = [](void* Obj){ ((FRuntimeMeshTangent*)Obj)->bFlipTangentY = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFlipTangentY = { UE4CodeGen_Private::EPropertyClass::Bool, "bFlipTangentY", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FRuntimeMeshTangent), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bFlipTangentY_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bFlipTangentY_MetaData, ARRAY_COUNT(NewProp_bFlipTangentY_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TangentX_MetaData[] = {
				{ "Category", "Tangent" },
				{ "ModuleRelativePath", "Public/RuntimeMeshCore.h" },
				{ "ToolTip", "Direction of X tangent for this vertex" },
			};
#endif
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_TangentX = { UE4CodeGen_Private::EPropertyClass::Struct, "TangentX", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FRuntimeMeshTangent, TangentX), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(NewProp_TangentX_MetaData, ARRAY_COUNT(NewProp_TangentX_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bFlipTangentY,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TangentX,
			};
			static const UE4CodeGen_Private::FStructParams ReturnStructParams = {
				(UObject* (*)())Z_Construct_UPackage__Script_RuntimeMeshComponent,
				nullptr,
				&UE4CodeGen_Private::TNewCppStructOpsWrapper<decltype(NewStructOpsLambda)>::NewCppStructOps,
				"RuntimeMeshTangent",
				RF_Public|RF_Transient|RF_MarkAsNative,
				EStructFlags(0x00000001),
				sizeof(FRuntimeMeshTangent),
				alignof(FRuntimeMeshTangent),
				PropPointers, ARRAY_COUNT(PropPointers),
				METADATA_PARAMS(Struct_MetaDataParams, ARRAY_COUNT(Struct_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRuntimeMeshTangent_CRC() { return 2726364623U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
