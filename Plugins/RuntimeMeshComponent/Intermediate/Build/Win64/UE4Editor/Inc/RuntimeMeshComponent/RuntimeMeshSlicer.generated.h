// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class URuntimeMeshComponent;
struct FVector;
enum class ERuntimeMeshSlicerCapOption : uint8;
class UMaterialInterface;
class URuntimeMesh;
#ifdef RUNTIMEMESHCOMPONENT_RuntimeMeshSlicer_generated_h
#error "RuntimeMeshSlicer.generated.h already included, missing '#pragma once' in RuntimeMeshSlicer.h"
#endif
#define RUNTIMEMESHCOMPONENT_RuntimeMeshSlicer_generated_h

#define ProceduralMeshDemos_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshSlicer_h_33_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSliceRuntimeMeshComponent) \
	{ \
		P_GET_OBJECT(URuntimeMeshComponent,Z_Param_InRuntimeMesh); \
		P_GET_STRUCT(FVector,Z_Param_PlanePosition); \
		P_GET_STRUCT(FVector,Z_Param_PlaneNormal); \
		P_GET_UBOOL(Z_Param_bCreateOtherHalf); \
		P_GET_OBJECT_REF(URuntimeMeshComponent,Z_Param_Out_OutOtherHalf); \
		P_GET_ENUM(ERuntimeMeshSlicerCapOption,Z_Param_CapOption); \
		P_GET_OBJECT(UMaterialInterface,Z_Param_CapMaterial); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		URuntimeMeshSlicer::SliceRuntimeMeshComponent(Z_Param_InRuntimeMesh,Z_Param_PlanePosition,Z_Param_PlaneNormal,Z_Param_bCreateOtherHalf,Z_Param_Out_OutOtherHalf,ERuntimeMeshSlicerCapOption(Z_Param_CapOption),Z_Param_CapMaterial); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSliceRuntimeMesh) \
	{ \
		P_GET_OBJECT(URuntimeMesh,Z_Param_InRuntimeMesh); \
		P_GET_STRUCT(FVector,Z_Param_PlanePosition); \
		P_GET_STRUCT(FVector,Z_Param_PlaneNormal); \
		P_GET_OBJECT(URuntimeMesh,Z_Param_OutOtherHalf); \
		P_GET_ENUM(ERuntimeMeshSlicerCapOption,Z_Param_CapOption); \
		P_GET_OBJECT(UMaterialInterface,Z_Param_CapMaterial); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		URuntimeMeshSlicer::SliceRuntimeMesh(Z_Param_InRuntimeMesh,Z_Param_PlanePosition,Z_Param_PlaneNormal,Z_Param_OutOtherHalf,ERuntimeMeshSlicerCapOption(Z_Param_CapOption),Z_Param_CapMaterial); \
		P_NATIVE_END; \
	}


#define ProceduralMeshDemos_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshSlicer_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSliceRuntimeMeshComponent) \
	{ \
		P_GET_OBJECT(URuntimeMeshComponent,Z_Param_InRuntimeMesh); \
		P_GET_STRUCT(FVector,Z_Param_PlanePosition); \
		P_GET_STRUCT(FVector,Z_Param_PlaneNormal); \
		P_GET_UBOOL(Z_Param_bCreateOtherHalf); \
		P_GET_OBJECT_REF(URuntimeMeshComponent,Z_Param_Out_OutOtherHalf); \
		P_GET_ENUM(ERuntimeMeshSlicerCapOption,Z_Param_CapOption); \
		P_GET_OBJECT(UMaterialInterface,Z_Param_CapMaterial); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		URuntimeMeshSlicer::SliceRuntimeMeshComponent(Z_Param_InRuntimeMesh,Z_Param_PlanePosition,Z_Param_PlaneNormal,Z_Param_bCreateOtherHalf,Z_Param_Out_OutOtherHalf,ERuntimeMeshSlicerCapOption(Z_Param_CapOption),Z_Param_CapMaterial); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSliceRuntimeMesh) \
	{ \
		P_GET_OBJECT(URuntimeMesh,Z_Param_InRuntimeMesh); \
		P_GET_STRUCT(FVector,Z_Param_PlanePosition); \
		P_GET_STRUCT(FVector,Z_Param_PlaneNormal); \
		P_GET_OBJECT(URuntimeMesh,Z_Param_OutOtherHalf); \
		P_GET_ENUM(ERuntimeMeshSlicerCapOption,Z_Param_CapOption); \
		P_GET_OBJECT(UMaterialInterface,Z_Param_CapMaterial); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		URuntimeMeshSlicer::SliceRuntimeMesh(Z_Param_InRuntimeMesh,Z_Param_PlanePosition,Z_Param_PlaneNormal,Z_Param_OutOtherHalf,ERuntimeMeshSlicerCapOption(Z_Param_CapOption),Z_Param_CapMaterial); \
		P_NATIVE_END; \
	}


#define ProceduralMeshDemos_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshSlicer_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURuntimeMeshSlicer(); \
	friend RUNTIMEMESHCOMPONENT_API class UClass* Z_Construct_UClass_URuntimeMeshSlicer(); \
public: \
	DECLARE_CLASS(URuntimeMeshSlicer, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/RuntimeMeshComponent"), NO_API) \
	DECLARE_SERIALIZER(URuntimeMeshSlicer) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define ProceduralMeshDemos_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshSlicer_h_33_INCLASS \
private: \
	static void StaticRegisterNativesURuntimeMeshSlicer(); \
	friend RUNTIMEMESHCOMPONENT_API class UClass* Z_Construct_UClass_URuntimeMeshSlicer(); \
public: \
	DECLARE_CLASS(URuntimeMeshSlicer, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/RuntimeMeshComponent"), NO_API) \
	DECLARE_SERIALIZER(URuntimeMeshSlicer) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define ProceduralMeshDemos_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshSlicer_h_33_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URuntimeMeshSlicer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URuntimeMeshSlicer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URuntimeMeshSlicer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URuntimeMeshSlicer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URuntimeMeshSlicer(URuntimeMeshSlicer&&); \
	NO_API URuntimeMeshSlicer(const URuntimeMeshSlicer&); \
public:


#define ProceduralMeshDemos_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshSlicer_h_33_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URuntimeMeshSlicer(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URuntimeMeshSlicer(URuntimeMeshSlicer&&); \
	NO_API URuntimeMeshSlicer(const URuntimeMeshSlicer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URuntimeMeshSlicer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URuntimeMeshSlicer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URuntimeMeshSlicer)


#define ProceduralMeshDemos_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshSlicer_h_33_PRIVATE_PROPERTY_OFFSET
#define ProceduralMeshDemos_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshSlicer_h_30_PROLOG
#define ProceduralMeshDemos_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshSlicer_h_33_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProceduralMeshDemos_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshSlicer_h_33_PRIVATE_PROPERTY_OFFSET \
	ProceduralMeshDemos_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshSlicer_h_33_RPC_WRAPPERS \
	ProceduralMeshDemos_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshSlicer_h_33_INCLASS \
	ProceduralMeshDemos_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshSlicer_h_33_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ProceduralMeshDemos_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshSlicer_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProceduralMeshDemos_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshSlicer_h_33_PRIVATE_PROPERTY_OFFSET \
	ProceduralMeshDemos_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshSlicer_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	ProceduralMeshDemos_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshSlicer_h_33_INCLASS_NO_PURE_DECLS \
	ProceduralMeshDemos_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshSlicer_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ProceduralMeshDemos_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshSlicer_h


#define FOREACH_ENUM_ERUNTIMEMESHSLICERCAPOPTION(op) \
	op(ERuntimeMeshSlicerCapOption::NoCap) \
	op(ERuntimeMeshSlicerCapOption::CreateNewSectionForCap) \
	op(ERuntimeMeshSlicerCapOption::UseLastSectionForCap) 
PRAGMA_ENABLE_DEPRECATION_WARNINGS
