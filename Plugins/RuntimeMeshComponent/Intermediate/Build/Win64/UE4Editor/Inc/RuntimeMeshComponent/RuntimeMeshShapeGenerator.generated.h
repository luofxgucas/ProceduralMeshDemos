// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FRuntimeMeshBlueprintVertexSimple;
struct FVector;
struct FVector2D;
struct FRuntimeMeshTangent;
#ifdef RUNTIMEMESHCOMPONENT_RuntimeMeshShapeGenerator_generated_h
#error "RuntimeMeshShapeGenerator.generated.h already included, missing '#pragma once' in RuntimeMeshShapeGenerator.h"
#endif
#define RUNTIMEMESHCOMPONENT_RuntimeMeshShapeGenerator_generated_h

#define ProceduralMeshDemos_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshShapeGenerator_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCreateGridMeshPacked) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Width); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Height); \
		P_GET_PROPERTY(UIntProperty,Z_Param_NumSubdivisionsX); \
		P_GET_PROPERTY(UIntProperty,Z_Param_NumSubdivisionsY); \
		P_GET_TARRAY_REF(FRuntimeMeshBlueprintVertexSimple,Z_Param_Out_Vertices); \
		P_GET_TARRAY_REF(int32,Z_Param_Out_Triangles); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		URuntimeMeshShapeGenerator::CreateGridMeshPacked(Z_Param_Width,Z_Param_Height,Z_Param_NumSubdivisionsX,Z_Param_NumSubdivisionsY,Z_Param_Out_Vertices,Z_Param_Out_Triangles); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateGridMesh) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Width); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Height); \
		P_GET_PROPERTY(UIntProperty,Z_Param_NumSubdivisionsX); \
		P_GET_PROPERTY(UIntProperty,Z_Param_NumSubdivisionsY); \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Vertices); \
		P_GET_TARRAY_REF(int32,Z_Param_Out_Triangles); \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Normals); \
		P_GET_TARRAY_REF(FVector2D,Z_Param_Out_UVs); \
		P_GET_TARRAY_REF(FRuntimeMeshTangent,Z_Param_Out_Tangents); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		URuntimeMeshShapeGenerator::CreateGridMesh(Z_Param_Width,Z_Param_Height,Z_Param_NumSubdivisionsX,Z_Param_NumSubdivisionsY,Z_Param_Out_Vertices,Z_Param_Out_Triangles,Z_Param_Out_Normals,Z_Param_Out_UVs,Z_Param_Out_Tangents); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateGridMeshTriangles) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NumX); \
		P_GET_PROPERTY(UIntProperty,Z_Param_NumY); \
		P_GET_UBOOL(Z_Param_bWinding); \
		P_GET_TARRAY_REF(int32,Z_Param_Out_Triangles); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		URuntimeMeshShapeGenerator::CreateGridMeshTriangles(Z_Param_NumX,Z_Param_NumY,Z_Param_bWinding,Z_Param_Out_Triangles); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateBoxMeshPacked) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_BoxRadius); \
		P_GET_TARRAY_REF(FRuntimeMeshBlueprintVertexSimple,Z_Param_Out_Vertices); \
		P_GET_TARRAY_REF(int32,Z_Param_Out_Triangles); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		URuntimeMeshShapeGenerator::CreateBoxMeshPacked(Z_Param_BoxRadius,Z_Param_Out_Vertices,Z_Param_Out_Triangles); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateBoxMesh) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_BoxRadius); \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Vertices); \
		P_GET_TARRAY_REF(int32,Z_Param_Out_Triangles); \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Normals); \
		P_GET_TARRAY_REF(FVector2D,Z_Param_Out_UVs); \
		P_GET_TARRAY_REF(FRuntimeMeshTangent,Z_Param_Out_Tangents); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		URuntimeMeshShapeGenerator::CreateBoxMesh(Z_Param_BoxRadius,Z_Param_Out_Vertices,Z_Param_Out_Triangles,Z_Param_Out_Normals,Z_Param_Out_UVs,Z_Param_Out_Tangents); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConvertQuadToTriangles) \
	{ \
		P_GET_TARRAY_REF(int32,Z_Param_Out_Triangles); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Vert0); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Vert1); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Vert2); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Vert3); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		URuntimeMeshShapeGenerator::ConvertQuadToTriangles(Z_Param_Out_Triangles,Z_Param_Vert0,Z_Param_Vert1,Z_Param_Vert2,Z_Param_Vert3); \
		P_NATIVE_END; \
	}


#define ProceduralMeshDemos_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshShapeGenerator_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCreateGridMeshPacked) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Width); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Height); \
		P_GET_PROPERTY(UIntProperty,Z_Param_NumSubdivisionsX); \
		P_GET_PROPERTY(UIntProperty,Z_Param_NumSubdivisionsY); \
		P_GET_TARRAY_REF(FRuntimeMeshBlueprintVertexSimple,Z_Param_Out_Vertices); \
		P_GET_TARRAY_REF(int32,Z_Param_Out_Triangles); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		URuntimeMeshShapeGenerator::CreateGridMeshPacked(Z_Param_Width,Z_Param_Height,Z_Param_NumSubdivisionsX,Z_Param_NumSubdivisionsY,Z_Param_Out_Vertices,Z_Param_Out_Triangles); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateGridMesh) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Width); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Height); \
		P_GET_PROPERTY(UIntProperty,Z_Param_NumSubdivisionsX); \
		P_GET_PROPERTY(UIntProperty,Z_Param_NumSubdivisionsY); \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Vertices); \
		P_GET_TARRAY_REF(int32,Z_Param_Out_Triangles); \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Normals); \
		P_GET_TARRAY_REF(FVector2D,Z_Param_Out_UVs); \
		P_GET_TARRAY_REF(FRuntimeMeshTangent,Z_Param_Out_Tangents); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		URuntimeMeshShapeGenerator::CreateGridMesh(Z_Param_Width,Z_Param_Height,Z_Param_NumSubdivisionsX,Z_Param_NumSubdivisionsY,Z_Param_Out_Vertices,Z_Param_Out_Triangles,Z_Param_Out_Normals,Z_Param_Out_UVs,Z_Param_Out_Tangents); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateGridMeshTriangles) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NumX); \
		P_GET_PROPERTY(UIntProperty,Z_Param_NumY); \
		P_GET_UBOOL(Z_Param_bWinding); \
		P_GET_TARRAY_REF(int32,Z_Param_Out_Triangles); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		URuntimeMeshShapeGenerator::CreateGridMeshTriangles(Z_Param_NumX,Z_Param_NumY,Z_Param_bWinding,Z_Param_Out_Triangles); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateBoxMeshPacked) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_BoxRadius); \
		P_GET_TARRAY_REF(FRuntimeMeshBlueprintVertexSimple,Z_Param_Out_Vertices); \
		P_GET_TARRAY_REF(int32,Z_Param_Out_Triangles); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		URuntimeMeshShapeGenerator::CreateBoxMeshPacked(Z_Param_BoxRadius,Z_Param_Out_Vertices,Z_Param_Out_Triangles); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateBoxMesh) \
	{ \
		P_GET_STRUCT(FVector,Z_Param_BoxRadius); \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Vertices); \
		P_GET_TARRAY_REF(int32,Z_Param_Out_Triangles); \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Normals); \
		P_GET_TARRAY_REF(FVector2D,Z_Param_Out_UVs); \
		P_GET_TARRAY_REF(FRuntimeMeshTangent,Z_Param_Out_Tangents); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		URuntimeMeshShapeGenerator::CreateBoxMesh(Z_Param_BoxRadius,Z_Param_Out_Vertices,Z_Param_Out_Triangles,Z_Param_Out_Normals,Z_Param_Out_UVs,Z_Param_Out_Tangents); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConvertQuadToTriangles) \
	{ \
		P_GET_TARRAY_REF(int32,Z_Param_Out_Triangles); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Vert0); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Vert1); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Vert2); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Vert3); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		URuntimeMeshShapeGenerator::ConvertQuadToTriangles(Z_Param_Out_Triangles,Z_Param_Vert0,Z_Param_Vert1,Z_Param_Vert2,Z_Param_Vert3); \
		P_NATIVE_END; \
	}


#define ProceduralMeshDemos_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshShapeGenerator_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURuntimeMeshShapeGenerator(); \
	friend RUNTIMEMESHCOMPONENT_API class UClass* Z_Construct_UClass_URuntimeMeshShapeGenerator(); \
public: \
	DECLARE_CLASS(URuntimeMeshShapeGenerator, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/RuntimeMeshComponent"), NO_API) \
	DECLARE_SERIALIZER(URuntimeMeshShapeGenerator) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define ProceduralMeshDemos_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshShapeGenerator_h_21_INCLASS \
private: \
	static void StaticRegisterNativesURuntimeMeshShapeGenerator(); \
	friend RUNTIMEMESHCOMPONENT_API class UClass* Z_Construct_UClass_URuntimeMeshShapeGenerator(); \
public: \
	DECLARE_CLASS(URuntimeMeshShapeGenerator, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/RuntimeMeshComponent"), NO_API) \
	DECLARE_SERIALIZER(URuntimeMeshShapeGenerator) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define ProceduralMeshDemos_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshShapeGenerator_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URuntimeMeshShapeGenerator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URuntimeMeshShapeGenerator) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URuntimeMeshShapeGenerator); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URuntimeMeshShapeGenerator); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URuntimeMeshShapeGenerator(URuntimeMeshShapeGenerator&&); \
	NO_API URuntimeMeshShapeGenerator(const URuntimeMeshShapeGenerator&); \
public:


#define ProceduralMeshDemos_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshShapeGenerator_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URuntimeMeshShapeGenerator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URuntimeMeshShapeGenerator(URuntimeMeshShapeGenerator&&); \
	NO_API URuntimeMeshShapeGenerator(const URuntimeMeshShapeGenerator&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URuntimeMeshShapeGenerator); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URuntimeMeshShapeGenerator); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URuntimeMeshShapeGenerator)


#define ProceduralMeshDemos_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshShapeGenerator_h_21_PRIVATE_PROPERTY_OFFSET
#define ProceduralMeshDemos_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshShapeGenerator_h_18_PROLOG
#define ProceduralMeshDemos_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshShapeGenerator_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProceduralMeshDemos_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshShapeGenerator_h_21_PRIVATE_PROPERTY_OFFSET \
	ProceduralMeshDemos_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshShapeGenerator_h_21_RPC_WRAPPERS \
	ProceduralMeshDemos_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshShapeGenerator_h_21_INCLASS \
	ProceduralMeshDemos_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshShapeGenerator_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ProceduralMeshDemos_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshShapeGenerator_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProceduralMeshDemos_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshShapeGenerator_h_21_PRIVATE_PROPERTY_OFFSET \
	ProceduralMeshDemos_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshShapeGenerator_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	ProceduralMeshDemos_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshShapeGenerator_h_21_INCLASS_NO_PURE_DECLS \
	ProceduralMeshDemos_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshShapeGenerator_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ProceduralMeshDemos_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshShapeGenerator_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
