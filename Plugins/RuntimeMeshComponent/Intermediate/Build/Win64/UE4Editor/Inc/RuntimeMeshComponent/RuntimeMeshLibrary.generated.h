// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UStaticMesh;
class URuntimeMesh;
class UStaticMeshComponent;
class URuntimeMeshComponent;
struct FRuntimeMeshBlueprintVertexSimple;
struct FVector;
struct FVector2D;
struct FColor;
struct FRuntimeMeshTangent;
#ifdef RUNTIMEMESHCOMPONENT_RuntimeMeshLibrary_generated_h
#error "RuntimeMeshLibrary.generated.h already included, missing '#pragma once' in RuntimeMeshLibrary.h"
#endif
#define RUNTIMEMESHCOMPONENT_RuntimeMeshLibrary_generated_h

#define ProceduralMeshDemos_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshLibrary_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCopyCollisionFromStaticMesh) \
	{ \
		P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh); \
		P_GET_OBJECT(URuntimeMesh,Z_Param_RuntimeMesh); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		URuntimeMeshLibrary::CopyCollisionFromStaticMesh(Z_Param_StaticMesh,Z_Param_RuntimeMesh); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCopyStaticMeshToRuntimeMeshComponent) \
	{ \
		P_GET_OBJECT(UStaticMeshComponent,Z_Param_StaticMeshComponent); \
		P_GET_PROPERTY(UIntProperty,Z_Param_LODIndex); \
		P_GET_OBJECT(URuntimeMeshComponent,Z_Param_RuntimeMeshComponent); \
		P_GET_UBOOL(Z_Param_bCreateCollision); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		URuntimeMeshLibrary::CopyStaticMeshToRuntimeMeshComponent(Z_Param_StaticMeshComponent,Z_Param_LODIndex,Z_Param_RuntimeMeshComponent,Z_Param_bCreateCollision); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCopyStaticMeshToRuntimeMesh) \
	{ \
		P_GET_OBJECT(UStaticMeshComponent,Z_Param_StaticMeshComponent); \
		P_GET_PROPERTY(UIntProperty,Z_Param_LODIndex); \
		P_GET_OBJECT(URuntimeMesh,Z_Param_RuntimeMesh); \
		P_GET_UBOOL(Z_Param_bCreateCollision); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		URuntimeMeshLibrary::CopyStaticMeshToRuntimeMesh(Z_Param_StaticMeshComponent,Z_Param_LODIndex,Z_Param_RuntimeMesh,Z_Param_bCreateCollision); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetStaticMeshSectionPacked) \
	{ \
		P_GET_OBJECT(UStaticMesh,Z_Param_InMesh); \
		P_GET_PROPERTY(UIntProperty,Z_Param_LODIndex); \
		P_GET_PROPERTY(UIntProperty,Z_Param_SectionIndex); \
		P_GET_TARRAY_REF(FRuntimeMeshBlueprintVertexSimple,Z_Param_Out_Vertices); \
		P_GET_TARRAY_REF(int32,Z_Param_Out_Triangles); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		URuntimeMeshLibrary::GetStaticMeshSectionPacked(Z_Param_InMesh,Z_Param_LODIndex,Z_Param_SectionIndex,Z_Param_Out_Vertices,Z_Param_Out_Triangles); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetStaticMeshSection) \
	{ \
		P_GET_OBJECT(UStaticMesh,Z_Param_InMesh); \
		P_GET_PROPERTY(UIntProperty,Z_Param_LODIndex); \
		P_GET_PROPERTY(UIntProperty,Z_Param_SectionIndex); \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Vertices); \
		P_GET_TARRAY_REF(int32,Z_Param_Out_Triangles); \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Normals); \
		P_GET_TARRAY_REF(FVector2D,Z_Param_Out_UVs); \
		P_GET_TARRAY_REF(FColor,Z_Param_Out_Colors); \
		P_GET_TARRAY_REF(FRuntimeMeshTangent,Z_Param_Out_Tangents); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		URuntimeMeshLibrary::GetStaticMeshSection(Z_Param_InMesh,Z_Param_LODIndex,Z_Param_SectionIndex,Z_Param_Out_Vertices,Z_Param_Out_Triangles,Z_Param_Out_Normals,Z_Param_Out_UVs,Z_Param_Out_Colors,Z_Param_Out_Tangents); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGenerateTessellationIndexBufferPacked) \
	{ \
		P_GET_TARRAY_REF(FRuntimeMeshBlueprintVertexSimple,Z_Param_Out_Vertices); \
		P_GET_TARRAY_REF(int32,Z_Param_Out_Triangles); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<int32>*)Z_Param__Result=URuntimeMeshLibrary::GenerateTessellationIndexBufferPacked(Z_Param_Out_Vertices,Z_Param_Out_Triangles); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGenerateTessellationIndexBuffer) \
	{ \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Vertices); \
		P_GET_TARRAY_REF(int32,Z_Param_Out_Triangles); \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Normals); \
		P_GET_TARRAY_REF(FVector2D,Z_Param_Out_UVs); \
		P_GET_TARRAY_REF(FRuntimeMeshTangent,Z_Param_Out_Tangents); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<int32>*)Z_Param__Result=URuntimeMeshLibrary::GenerateTessellationIndexBuffer(Z_Param_Out_Vertices,Z_Param_Out_Triangles,Z_Param_Out_Normals,Z_Param_Out_UVs,Z_Param_Out_Tangents); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCalculateTangentsForMeshPacked) \
	{ \
		P_GET_TARRAY_REF(FRuntimeMeshBlueprintVertexSimple,Z_Param_Out_Vertices); \
		P_GET_TARRAY_REF(int32,Z_Param_Out_Triangles); \
		P_GET_UBOOL(Z_Param_bCreateSmoothNormals); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		URuntimeMeshLibrary::CalculateTangentsForMeshPacked(Z_Param_Out_Vertices,Z_Param_Out_Triangles,Z_Param_bCreateSmoothNormals); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCalculateTangentsForMesh) \
	{ \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Vertices); \
		P_GET_TARRAY_REF(int32,Z_Param_Out_Triangles); \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Normals); \
		P_GET_TARRAY_REF(FVector2D,Z_Param_Out_UVs); \
		P_GET_TARRAY_REF(FRuntimeMeshTangent,Z_Param_Out_Tangents); \
		P_GET_UBOOL(Z_Param_bCreateSmoothNormals); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		URuntimeMeshLibrary::CalculateTangentsForMesh(Z_Param_Out_Vertices,Z_Param_Out_Triangles,Z_Param_Out_Normals,Z_Param_Out_UVs,Z_Param_Out_Tangents,Z_Param_bCreateSmoothNormals); \
		P_NATIVE_END; \
	}


#define ProceduralMeshDemos_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshLibrary_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCopyCollisionFromStaticMesh) \
	{ \
		P_GET_OBJECT(UStaticMesh,Z_Param_StaticMesh); \
		P_GET_OBJECT(URuntimeMesh,Z_Param_RuntimeMesh); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		URuntimeMeshLibrary::CopyCollisionFromStaticMesh(Z_Param_StaticMesh,Z_Param_RuntimeMesh); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCopyStaticMeshToRuntimeMeshComponent) \
	{ \
		P_GET_OBJECT(UStaticMeshComponent,Z_Param_StaticMeshComponent); \
		P_GET_PROPERTY(UIntProperty,Z_Param_LODIndex); \
		P_GET_OBJECT(URuntimeMeshComponent,Z_Param_RuntimeMeshComponent); \
		P_GET_UBOOL(Z_Param_bCreateCollision); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		URuntimeMeshLibrary::CopyStaticMeshToRuntimeMeshComponent(Z_Param_StaticMeshComponent,Z_Param_LODIndex,Z_Param_RuntimeMeshComponent,Z_Param_bCreateCollision); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCopyStaticMeshToRuntimeMesh) \
	{ \
		P_GET_OBJECT(UStaticMeshComponent,Z_Param_StaticMeshComponent); \
		P_GET_PROPERTY(UIntProperty,Z_Param_LODIndex); \
		P_GET_OBJECT(URuntimeMesh,Z_Param_RuntimeMesh); \
		P_GET_UBOOL(Z_Param_bCreateCollision); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		URuntimeMeshLibrary::CopyStaticMeshToRuntimeMesh(Z_Param_StaticMeshComponent,Z_Param_LODIndex,Z_Param_RuntimeMesh,Z_Param_bCreateCollision); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetStaticMeshSectionPacked) \
	{ \
		P_GET_OBJECT(UStaticMesh,Z_Param_InMesh); \
		P_GET_PROPERTY(UIntProperty,Z_Param_LODIndex); \
		P_GET_PROPERTY(UIntProperty,Z_Param_SectionIndex); \
		P_GET_TARRAY_REF(FRuntimeMeshBlueprintVertexSimple,Z_Param_Out_Vertices); \
		P_GET_TARRAY_REF(int32,Z_Param_Out_Triangles); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		URuntimeMeshLibrary::GetStaticMeshSectionPacked(Z_Param_InMesh,Z_Param_LODIndex,Z_Param_SectionIndex,Z_Param_Out_Vertices,Z_Param_Out_Triangles); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetStaticMeshSection) \
	{ \
		P_GET_OBJECT(UStaticMesh,Z_Param_InMesh); \
		P_GET_PROPERTY(UIntProperty,Z_Param_LODIndex); \
		P_GET_PROPERTY(UIntProperty,Z_Param_SectionIndex); \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Vertices); \
		P_GET_TARRAY_REF(int32,Z_Param_Out_Triangles); \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Normals); \
		P_GET_TARRAY_REF(FVector2D,Z_Param_Out_UVs); \
		P_GET_TARRAY_REF(FColor,Z_Param_Out_Colors); \
		P_GET_TARRAY_REF(FRuntimeMeshTangent,Z_Param_Out_Tangents); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		URuntimeMeshLibrary::GetStaticMeshSection(Z_Param_InMesh,Z_Param_LODIndex,Z_Param_SectionIndex,Z_Param_Out_Vertices,Z_Param_Out_Triangles,Z_Param_Out_Normals,Z_Param_Out_UVs,Z_Param_Out_Colors,Z_Param_Out_Tangents); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGenerateTessellationIndexBufferPacked) \
	{ \
		P_GET_TARRAY_REF(FRuntimeMeshBlueprintVertexSimple,Z_Param_Out_Vertices); \
		P_GET_TARRAY_REF(int32,Z_Param_Out_Triangles); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<int32>*)Z_Param__Result=URuntimeMeshLibrary::GenerateTessellationIndexBufferPacked(Z_Param_Out_Vertices,Z_Param_Out_Triangles); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGenerateTessellationIndexBuffer) \
	{ \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Vertices); \
		P_GET_TARRAY_REF(int32,Z_Param_Out_Triangles); \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Normals); \
		P_GET_TARRAY_REF(FVector2D,Z_Param_Out_UVs); \
		P_GET_TARRAY_REF(FRuntimeMeshTangent,Z_Param_Out_Tangents); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<int32>*)Z_Param__Result=URuntimeMeshLibrary::GenerateTessellationIndexBuffer(Z_Param_Out_Vertices,Z_Param_Out_Triangles,Z_Param_Out_Normals,Z_Param_Out_UVs,Z_Param_Out_Tangents); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCalculateTangentsForMeshPacked) \
	{ \
		P_GET_TARRAY_REF(FRuntimeMeshBlueprintVertexSimple,Z_Param_Out_Vertices); \
		P_GET_TARRAY_REF(int32,Z_Param_Out_Triangles); \
		P_GET_UBOOL(Z_Param_bCreateSmoothNormals); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		URuntimeMeshLibrary::CalculateTangentsForMeshPacked(Z_Param_Out_Vertices,Z_Param_Out_Triangles,Z_Param_bCreateSmoothNormals); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCalculateTangentsForMesh) \
	{ \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Vertices); \
		P_GET_TARRAY_REF(int32,Z_Param_Out_Triangles); \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Normals); \
		P_GET_TARRAY_REF(FVector2D,Z_Param_Out_UVs); \
		P_GET_TARRAY_REF(FRuntimeMeshTangent,Z_Param_Out_Tangents); \
		P_GET_UBOOL(Z_Param_bCreateSmoothNormals); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		URuntimeMeshLibrary::CalculateTangentsForMesh(Z_Param_Out_Vertices,Z_Param_Out_Triangles,Z_Param_Out_Normals,Z_Param_Out_UVs,Z_Param_Out_Tangents,Z_Param_bCreateSmoothNormals); \
		P_NATIVE_END; \
	}


#define ProceduralMeshDemos_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshLibrary_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURuntimeMeshLibrary(); \
	friend RUNTIMEMESHCOMPONENT_API class UClass* Z_Construct_UClass_URuntimeMeshLibrary(); \
public: \
	DECLARE_CLASS(URuntimeMeshLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/RuntimeMeshComponent"), NO_API) \
	DECLARE_SERIALIZER(URuntimeMeshLibrary) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define ProceduralMeshDemos_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshLibrary_h_18_INCLASS \
private: \
	static void StaticRegisterNativesURuntimeMeshLibrary(); \
	friend RUNTIMEMESHCOMPONENT_API class UClass* Z_Construct_UClass_URuntimeMeshLibrary(); \
public: \
	DECLARE_CLASS(URuntimeMeshLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/RuntimeMeshComponent"), NO_API) \
	DECLARE_SERIALIZER(URuntimeMeshLibrary) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define ProceduralMeshDemos_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshLibrary_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URuntimeMeshLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URuntimeMeshLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URuntimeMeshLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URuntimeMeshLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URuntimeMeshLibrary(URuntimeMeshLibrary&&); \
	NO_API URuntimeMeshLibrary(const URuntimeMeshLibrary&); \
public:


#define ProceduralMeshDemos_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshLibrary_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URuntimeMeshLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URuntimeMeshLibrary(URuntimeMeshLibrary&&); \
	NO_API URuntimeMeshLibrary(const URuntimeMeshLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URuntimeMeshLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URuntimeMeshLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URuntimeMeshLibrary)


#define ProceduralMeshDemos_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshLibrary_h_18_PRIVATE_PROPERTY_OFFSET
#define ProceduralMeshDemos_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshLibrary_h_15_PROLOG
#define ProceduralMeshDemos_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshLibrary_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProceduralMeshDemos_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshLibrary_h_18_PRIVATE_PROPERTY_OFFSET \
	ProceduralMeshDemos_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshLibrary_h_18_RPC_WRAPPERS \
	ProceduralMeshDemos_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshLibrary_h_18_INCLASS \
	ProceduralMeshDemos_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshLibrary_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ProceduralMeshDemos_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshLibrary_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProceduralMeshDemos_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshLibrary_h_18_PRIVATE_PROPERTY_OFFSET \
	ProceduralMeshDemos_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshLibrary_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	ProceduralMeshDemos_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshLibrary_h_18_INCLASS_NO_PURE_DECLS \
	ProceduralMeshDemos_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshLibrary_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ProceduralMeshDemos_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
