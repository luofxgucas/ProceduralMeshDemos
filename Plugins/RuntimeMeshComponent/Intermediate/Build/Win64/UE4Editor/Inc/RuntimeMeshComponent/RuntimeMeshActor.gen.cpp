// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/RuntimeMeshActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRuntimeMeshActor() {}
// Cross Module References
	RUNTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_ARuntimeMeshActor_NoRegister();
	RUNTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_ARuntimeMeshActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_RuntimeMeshComponent();
	RUNTIMEMESHCOMPONENT_API UFunction* Z_Construct_UFunction_ARuntimeMeshActor_GenerateMeshes();
	RUNTIMEMESHCOMPONENT_API UFunction* Z_Construct_UFunction_ARuntimeMeshActor_GetRuntimeMeshMobility();
	RUNTIMEMESHCOMPONENT_API UEnum* Z_Construct_UEnum_RuntimeMeshComponent_ERuntimeMeshMobility();
	RUNTIMEMESHCOMPONENT_API UFunction* Z_Construct_UFunction_ARuntimeMeshActor_SetRuntimeMeshMobility();
	RUNTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_URuntimeMeshComponent_NoRegister();
// End Cross Module References
	static FName NAME_ARuntimeMeshActor_GenerateMeshes = FName(TEXT("GenerateMeshes"));
	void ARuntimeMeshActor::GenerateMeshes()
	{
		ProcessEvent(FindFunctionChecked(NAME_ARuntimeMeshActor_GenerateMeshes),NULL);
	}
	void ARuntimeMeshActor::StaticRegisterNativesARuntimeMeshActor()
	{
		UClass* Class = ARuntimeMeshActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GenerateMeshes", &ARuntimeMeshActor::execGenerateMeshes },
			{ "GetRuntimeMeshMobility", &ARuntimeMeshActor::execGetRuntimeMeshMobility },
			{ "SetRuntimeMeshMobility", &ARuntimeMeshActor::execSetRuntimeMeshMobility },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_ARuntimeMeshActor_GenerateMeshes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "RuntimeMeshActor" },
				{ "ModuleRelativePath", "Public/RuntimeMeshActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ARuntimeMeshActor, "GenerateMeshes", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020C00, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ARuntimeMeshActor_GetRuntimeMeshMobility()
	{
		struct RuntimeMeshActor_eventGetRuntimeMeshMobility_Parms
		{
			ERuntimeMeshMobility ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Enum, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(RuntimeMeshActor_eventGetRuntimeMeshMobility_Parms, ReturnValue), Z_Construct_UEnum_RuntimeMeshComponent_ERuntimeMeshMobility, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue_Underlying,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "AllowPrivateAccess", "true" },
				{ "Category", "RuntimeMeshActor" },
				{ "DisplayName", "Get Mobility" },
				{ "ModuleRelativePath", "Public/RuntimeMeshActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ARuntimeMeshActor, "GetRuntimeMeshMobility", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04040401, sizeof(RuntimeMeshActor_eventGetRuntimeMeshMobility_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ARuntimeMeshActor_SetRuntimeMeshMobility()
	{
		struct RuntimeMeshActor_eventSetRuntimeMeshMobility_Parms
		{
			ERuntimeMeshMobility NewMobility;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_NewMobility = { UE4CodeGen_Private::EPropertyClass::Enum, "NewMobility", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(RuntimeMeshActor_eventSetRuntimeMeshMobility_Parms, NewMobility), Z_Construct_UEnum_RuntimeMeshComponent_ERuntimeMeshMobility, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewMobility_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewMobility,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_NewMobility_Underlying,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "AllowPrivateAccess", "true" },
				{ "Category", "RuntimeMeshActor" },
				{ "DisplayName", "Set Mobility" },
				{ "ModuleRelativePath", "Public/RuntimeMeshActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ARuntimeMeshActor, "SetRuntimeMeshMobility", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04040401, sizeof(RuntimeMeshActor_eventSetRuntimeMeshMobility_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ARuntimeMeshActor_NoRegister()
	{
		return ARuntimeMeshActor::StaticClass();
	}
	UClass* Z_Construct_UClass_ARuntimeMeshActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_RuntimeMeshComponent,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_ARuntimeMeshActor_GenerateMeshes, "GenerateMeshes" }, // 2943772333
				{ &Z_Construct_UFunction_ARuntimeMeshActor_GetRuntimeMeshMobility, "GetRuntimeMeshMobility" }, // 2273421654
				{ &Z_Construct_UFunction_ARuntimeMeshActor_SetRuntimeMeshMobility, "SetRuntimeMeshMobility" }, // 400447210
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "ChildCanTick", "" },
				{ "HideCategories", "Input" },
				{ "IgnoreCategoryKeywordsInSubclasses", "true" },
				{ "IncludePath", "RuntimeMeshActor.h" },
				{ "ModuleRelativePath", "Public/RuntimeMeshActor.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRunGenerateMeshesOnBeginPlay_MetaData[] = {
				{ "AllowPrivateAccess", "true" },
				{ "Category", "RuntimeMeshActor" },
				{ "ModuleRelativePath", "Public/RuntimeMeshActor.h" },
			};
#endif
			auto NewProp_bRunGenerateMeshesOnBeginPlay_SetBit = [](void* Obj){ ((ARuntimeMeshActor*)Obj)->bRunGenerateMeshesOnBeginPlay = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRunGenerateMeshesOnBeginPlay = { UE4CodeGen_Private::EPropertyClass::Bool, "bRunGenerateMeshesOnBeginPlay", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ARuntimeMeshActor), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bRunGenerateMeshesOnBeginPlay_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bRunGenerateMeshesOnBeginPlay_MetaData, ARRAY_COUNT(NewProp_bRunGenerateMeshesOnBeginPlay_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRunGenerateMeshesOnConstruction_MetaData[] = {
				{ "AllowPrivateAccess", "true" },
				{ "Category", "RuntimeMeshActor" },
				{ "ModuleRelativePath", "Public/RuntimeMeshActor.h" },
			};
#endif
			auto NewProp_bRunGenerateMeshesOnConstruction_SetBit = [](void* Obj){ ((ARuntimeMeshActor*)Obj)->bRunGenerateMeshesOnConstruction = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRunGenerateMeshesOnConstruction = { UE4CodeGen_Private::EPropertyClass::Bool, "bRunGenerateMeshesOnConstruction", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ARuntimeMeshActor), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bRunGenerateMeshesOnConstruction_SetBit)>::SetBit, METADATA_PARAMS(NewProp_bRunGenerateMeshesOnConstruction_MetaData, ARRAY_COUNT(NewProp_bRunGenerateMeshesOnConstruction_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RuntimeMeshComponent_MetaData[] = {
				{ "AllowPrivateAccess", "true" },
				{ "Category", "RuntimeMeshActor" },
				{ "EditInline", "true" },
				{ "ExposeFunctionCategories", "Mesh,Rendering,Physics,Components|RuntimeMesh" },
				{ "ModuleRelativePath", "Public/RuntimeMeshActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RuntimeMeshComponent = { UE4CodeGen_Private::EPropertyClass::Object, "RuntimeMeshComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(ARuntimeMeshActor, RuntimeMeshComponent), Z_Construct_UClass_URuntimeMeshComponent_NoRegister, METADATA_PARAMS(NewProp_RuntimeMeshComponent_MetaData, ARRAY_COUNT(NewProp_RuntimeMeshComponent_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bRunGenerateMeshesOnBeginPlay,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bRunGenerateMeshesOnConstruction,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_RuntimeMeshComponent,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ARuntimeMeshActor>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ARuntimeMeshActor::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
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
	IMPLEMENT_CLASS(ARuntimeMeshActor, 2546774283);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARuntimeMeshActor(Z_Construct_UClass_ARuntimeMeshActor, &ARuntimeMeshActor::StaticClass, TEXT("/Script/RuntimeMeshComponent"), TEXT("ARuntimeMeshActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARuntimeMeshActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
