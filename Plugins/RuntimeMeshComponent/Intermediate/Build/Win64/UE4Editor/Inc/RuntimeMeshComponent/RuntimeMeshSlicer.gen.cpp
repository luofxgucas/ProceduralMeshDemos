// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/RuntimeMeshSlicer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRuntimeMeshSlicer() {}
// Cross Module References
	RUNTIMEMESHCOMPONENT_API UEnum* Z_Construct_UEnum_RuntimeMeshComponent_ERuntimeMeshSlicerCapOption();
	UPackage* Z_Construct_UPackage__Script_RuntimeMeshComponent();
	RUNTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_URuntimeMeshSlicer_NoRegister();
	RUNTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_URuntimeMeshSlicer();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	RUNTIMEMESHCOMPONENT_API UFunction* Z_Construct_UFunction_URuntimeMeshSlicer_SliceRuntimeMesh();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	RUNTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_URuntimeMesh_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	RUNTIMEMESHCOMPONENT_API UFunction* Z_Construct_UFunction_URuntimeMeshSlicer_SliceRuntimeMeshComponent();
	RUNTIMEMESHCOMPONENT_API UClass* Z_Construct_UClass_URuntimeMeshComponent_NoRegister();
// End Cross Module References
	static UEnum* ERuntimeMeshSlicerCapOption_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_RuntimeMeshComponent_ERuntimeMeshSlicerCapOption, Z_Construct_UPackage__Script_RuntimeMeshComponent(), TEXT("ERuntimeMeshSlicerCapOption"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ERuntimeMeshSlicerCapOption(ERuntimeMeshSlicerCapOption_StaticEnum, TEXT("/Script/RuntimeMeshComponent"), TEXT("ERuntimeMeshSlicerCapOption"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_RuntimeMeshComponent_ERuntimeMeshSlicerCapOption_CRC() { return 2927503909U; }
	UEnum* Z_Construct_UEnum_RuntimeMeshComponent_ERuntimeMeshSlicerCapOption()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_RuntimeMeshComponent();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ERuntimeMeshSlicerCapOption"), 0, Get_Z_Construct_UEnum_RuntimeMeshComponent_ERuntimeMeshSlicerCapOption_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ERuntimeMeshSlicerCapOption::NoCap", (int64)ERuntimeMeshSlicerCapOption::NoCap },
				{ "ERuntimeMeshSlicerCapOption::CreateNewSectionForCap", (int64)ERuntimeMeshSlicerCapOption::CreateNewSectionForCap },
				{ "ERuntimeMeshSlicerCapOption::UseLastSectionForCap", (int64)ERuntimeMeshSlicerCapOption::UseLastSectionForCap },
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "CreateNewSectionForCap.ToolTip", "Add a new section to ProceduralMesh for cap" },
				{ "ModuleRelativePath", "Public/RuntimeMeshSlicer.h" },
				{ "NoCap.ToolTip", "Do not create cap geometry" },
				{ "ToolTip", "Options for creating cap geometry when slicing" },
				{ "UseLastSectionForCap.ToolTip", "Add cap geometry to existing last section" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_RuntimeMeshComponent,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ERuntimeMeshSlicerCapOption",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"ERuntimeMeshSlicerCapOption",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void URuntimeMeshSlicer::StaticRegisterNativesURuntimeMeshSlicer()
	{
		UClass* Class = URuntimeMeshSlicer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SliceRuntimeMesh", &URuntimeMeshSlicer::execSliceRuntimeMesh },
			{ "SliceRuntimeMeshComponent", &URuntimeMeshSlicer::execSliceRuntimeMeshComponent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_URuntimeMeshSlicer_SliceRuntimeMesh()
	{
		struct RuntimeMeshSlicer_eventSliceRuntimeMesh_Parms
		{
			URuntimeMesh* InRuntimeMesh;
			FVector PlanePosition;
			FVector PlaneNormal;
			URuntimeMesh* OutOtherHalf;
			ERuntimeMeshSlicerCapOption CapOption;
			UMaterialInterface* CapMaterial;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CapMaterial = { UE4CodeGen_Private::EPropertyClass::Object, "CapMaterial", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(RuntimeMeshSlicer_eventSliceRuntimeMesh_Parms, CapMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CapOption = { UE4CodeGen_Private::EPropertyClass::Enum, "CapOption", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(RuntimeMeshSlicer_eventSliceRuntimeMesh_Parms, CapOption), Z_Construct_UEnum_RuntimeMeshComponent_ERuntimeMeshSlicerCapOption, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_CapOption_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutOtherHalf = { UE4CodeGen_Private::EPropertyClass::Object, "OutOtherHalf", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(RuntimeMeshSlicer_eventSliceRuntimeMesh_Parms, OutOtherHalf), Z_Construct_UClass_URuntimeMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlaneNormal = { UE4CodeGen_Private::EPropertyClass::Struct, "PlaneNormal", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(RuntimeMeshSlicer_eventSliceRuntimeMesh_Parms, PlaneNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlanePosition = { UE4CodeGen_Private::EPropertyClass::Struct, "PlanePosition", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(RuntimeMeshSlicer_eventSliceRuntimeMesh_Parms, PlanePosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InRuntimeMesh = { UE4CodeGen_Private::EPropertyClass::Object, "InRuntimeMesh", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(RuntimeMeshSlicer_eventSliceRuntimeMesh_Parms, InRuntimeMesh), Z_Construct_UClass_URuntimeMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CapMaterial,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CapOption,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CapOption_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OutOtherHalf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PlaneNormal,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PlanePosition,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InRuntimeMesh,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|RuntimeMesh" },
				{ "ModuleRelativePath", "Public/RuntimeMeshSlicer.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshSlicer, "SliceRuntimeMesh", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04822401, sizeof(RuntimeMeshSlicer_eventSliceRuntimeMesh_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_URuntimeMeshSlicer_SliceRuntimeMeshComponent()
	{
		struct RuntimeMeshSlicer_eventSliceRuntimeMeshComponent_Parms
		{
			URuntimeMeshComponent* InRuntimeMesh;
			FVector PlanePosition;
			FVector PlaneNormal;
			bool bCreateOtherHalf;
			URuntimeMeshComponent* OutOtherHalf;
			ERuntimeMeshSlicerCapOption CapOption;
			UMaterialInterface* CapMaterial;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CapMaterial = { UE4CodeGen_Private::EPropertyClass::Object, "CapMaterial", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(RuntimeMeshSlicer_eventSliceRuntimeMeshComponent_Parms, CapMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CapOption = { UE4CodeGen_Private::EPropertyClass::Enum, "CapOption", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(RuntimeMeshSlicer_eventSliceRuntimeMeshComponent_Parms, CapOption), Z_Construct_UEnum_RuntimeMeshComponent_ERuntimeMeshSlicerCapOption, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FBytePropertyParams NewProp_CapOption_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutOtherHalf_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutOtherHalf = { UE4CodeGen_Private::EPropertyClass::Object, "OutOtherHalf", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080180, 1, nullptr, STRUCT_OFFSET(RuntimeMeshSlicer_eventSliceRuntimeMeshComponent_Parms, OutOtherHalf), Z_Construct_UClass_URuntimeMeshComponent_NoRegister, METADATA_PARAMS(NewProp_OutOtherHalf_MetaData, ARRAY_COUNT(NewProp_OutOtherHalf_MetaData)) };
			auto NewProp_bCreateOtherHalf_SetBit = [](void* Obj){ ((RuntimeMeshSlicer_eventSliceRuntimeMeshComponent_Parms*)Obj)->bCreateOtherHalf = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCreateOtherHalf = { UE4CodeGen_Private::EPropertyClass::Bool, "bCreateOtherHalf", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(RuntimeMeshSlicer_eventSliceRuntimeMeshComponent_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_bCreateOtherHalf_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlaneNormal = { UE4CodeGen_Private::EPropertyClass::Struct, "PlaneNormal", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(RuntimeMeshSlicer_eventSliceRuntimeMeshComponent_Parms, PlaneNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlanePosition = { UE4CodeGen_Private::EPropertyClass::Struct, "PlanePosition", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(RuntimeMeshSlicer_eventSliceRuntimeMeshComponent_Parms, PlanePosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InRuntimeMesh_MetaData[] = {
				{ "EditInline", "true" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InRuntimeMesh = { UE4CodeGen_Private::EPropertyClass::Object, "InRuntimeMesh", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000080080, 1, nullptr, STRUCT_OFFSET(RuntimeMeshSlicer_eventSliceRuntimeMeshComponent_Parms, InRuntimeMesh), Z_Construct_UClass_URuntimeMeshComponent_NoRegister, METADATA_PARAMS(NewProp_InRuntimeMesh_MetaData, ARRAY_COUNT(NewProp_InRuntimeMesh_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CapMaterial,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CapOption,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CapOption_Underlying,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_OutOtherHalf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_bCreateOtherHalf,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PlaneNormal,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PlanePosition,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InRuntimeMesh,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Components|RuntimeMesh" },
				{ "ModuleRelativePath", "Public/RuntimeMeshSlicer.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_URuntimeMeshSlicer, "SliceRuntimeMeshComponent", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C22401, sizeof(RuntimeMeshSlicer_eventSliceRuntimeMeshComponent_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_URuntimeMeshSlicer_NoRegister()
	{
		return URuntimeMeshSlicer::StaticClass();
	}
	UClass* Z_Construct_UClass_URuntimeMeshSlicer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
				(UObject* (*)())Z_Construct_UPackage__Script_RuntimeMeshComponent,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_URuntimeMeshSlicer_SliceRuntimeMesh, "SliceRuntimeMesh" }, // 2844605885
				{ &Z_Construct_UFunction_URuntimeMeshSlicer_SliceRuntimeMeshComponent, "SliceRuntimeMeshComponent" }, // 2967326395
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "RuntimeMeshSlicer.h" },
				{ "ModuleRelativePath", "Public/RuntimeMeshSlicer.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<URuntimeMeshSlicer>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&URuntimeMeshSlicer::StaticClass,
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
	IMPLEMENT_CLASS(URuntimeMeshSlicer, 1971628032);
	static FCompiledInDefer Z_CompiledInDefer_UClass_URuntimeMeshSlicer(Z_Construct_UClass_URuntimeMeshSlicer, &URuntimeMeshSlicer::StaticClass, TEXT("/Script/RuntimeMeshComponent"), TEXT("URuntimeMeshSlicer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URuntimeMeshSlicer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
