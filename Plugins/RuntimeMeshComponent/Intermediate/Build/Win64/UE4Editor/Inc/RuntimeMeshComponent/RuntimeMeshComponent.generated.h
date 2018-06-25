// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ERuntimeMeshCollisionCookingMode : uint8;
struct FRuntimeMeshCollisionCapsule;
struct FRuntimeMeshCollisionSphere;
struct FRuntimeMeshCollisionBox;
struct FVector;
struct FBox;
class UMaterialInterface;
struct FRuntimeMeshBlueprintVertexSimple;
enum class EUpdateFrequency : uint8;
struct FRuntimeMeshTangent;
struct FVector2D;
struct FLinearColor;
class URuntimeMesh;
enum class ERuntimeMeshMobility : uint8;
#ifdef RUNTIMEMESHCOMPONENT_RuntimeMeshComponent_generated_h
#error "RuntimeMeshComponent.generated.h already included, missing '#pragma once' in RuntimeMeshComponent.h"
#endif
#define RUNTIMEMESHCOMPONENT_RuntimeMeshComponent_generated_h

#define ProceduralMeshDemos_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshComponent_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetCollisionMode) \
	{ \
		P_GET_ENUM(ERuntimeMeshCollisionCookingMode,Z_Param_NewMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCollisionMode(ERuntimeMeshCollisionCookingMode(Z_Param_NewMode)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCollisionUseAsyncCooking) \
	{ \
		P_GET_UBOOL(Z_Param_bNewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCollisionUseAsyncCooking(Z_Param_bNewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsCollisionUsingComplexAsSimple) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsCollisionUsingComplexAsSimple(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCollisionUseComplexAsSimple) \
	{ \
		P_GET_UBOOL(Z_Param_bNewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCollisionUseComplexAsSimple(Z_Param_bNewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCookCollisionNow) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CookCollisionNow(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCollisionCapsules) \
	{ \
		P_GET_TARRAY_REF(FRuntimeMeshCollisionCapsule,Z_Param_Out_NewCapsules); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCollisionCapsules(Z_Param_Out_NewCapsules); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearCollisionCapsules) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClearCollisionCapsules(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveCollisionCapsule) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveCollisionCapsule(Z_Param_Index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddCollisionCapsule) \
	{ \
		P_GET_STRUCT_REF(FRuntimeMeshCollisionCapsule,Z_Param_Out_NewCapsule); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->AddCollisionCapsule(Z_Param_Out_NewCapsule); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCollisionSpheres) \
	{ \
		P_GET_TARRAY_REF(FRuntimeMeshCollisionSphere,Z_Param_Out_NewSpheres); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCollisionSpheres(Z_Param_Out_NewSpheres); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearCollisionSpheres) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClearCollisionSpheres(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveCollisionSphere) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveCollisionSphere(Z_Param_Index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddCollisionSphere) \
	{ \
		P_GET_STRUCT_REF(FRuntimeMeshCollisionSphere,Z_Param_Out_NewSphere); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->AddCollisionSphere(Z_Param_Out_NewSphere); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCollisionBoxes) \
	{ \
		P_GET_TARRAY_REF(FRuntimeMeshCollisionBox,Z_Param_Out_NewBoxes); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCollisionBoxes(Z_Param_Out_NewBoxes); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearCollisionBoxes) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClearCollisionBoxes(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveCollisionBox) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveCollisionBox(Z_Param_Index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddCollisionBox) \
	{ \
		P_GET_STRUCT_REF(FRuntimeMeshCollisionBox,Z_Param_Out_NewBox); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->AddCollisionBox(Z_Param_Out_NewBox); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearAllConvexCollisionSections) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClearAllConvexCollisionSections(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearConvexCollisionSection) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_ConvexSectionIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClearConvexCollisionSection(Z_Param_ConvexSectionIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetConvexCollisionSection) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_ConvexSectionIndex); \
		P_GET_TARRAY(FVector,Z_Param_ConvexVerts); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetConvexCollisionSection(Z_Param_ConvexSectionIndex,Z_Param_ConvexVerts); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddConvexCollisionSection) \
	{ \
		P_GET_TARRAY(FVector,Z_Param_ConvexVerts); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->AddConvexCollisionSection(Z_Param_ConvexVerts); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearAllMeshCollisionSections) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClearAllMeshCollisionSections(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearMeshCollisionSection) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_CollisionSectionIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClearMeshCollisionSection(Z_Param_CollisionSectionIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMeshCollisionSection) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_CollisionSectionIndex); \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Vertices); \
		P_GET_TARRAY_REF(int32,Z_Param_Out_Triangles); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMeshCollisionSection(Z_Param_CollisionSectionIndex,Z_Param_Out_Vertices,Z_Param_Out_Triangles); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAvailableSectionIndex) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetAvailableSectionIndex(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDoesSectionExist) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_SectionIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->DoesSectionExist(Z_Param_SectionIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNumSections) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetNumSections(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsMeshSectionCollisionEnabled) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_SectionIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsMeshSectionCollisionEnabled(Z_Param_SectionIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMeshSectionCollisionEnabled) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_SectionIndex); \
		P_GET_UBOOL(Z_Param_bNewCollisionEnabled); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMeshSectionCollisionEnabled(Z_Param_SectionIndex,Z_Param_bNewCollisionEnabled); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsMeshSectionCastingShadows) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_SectionIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsMeshSectionCastingShadows(Z_Param_SectionIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMeshSectionCastsShadow) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_SectionIndex); \
		P_GET_UBOOL(Z_Param_bNewCastsShadow); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMeshSectionCastsShadow(Z_Param_SectionIndex,Z_Param_bNewCastsShadow); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsMeshSectionVisible) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_SectionIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsMeshSectionVisible(Z_Param_SectionIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMeshSectionVisible) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_SectionIndex); \
		P_GET_UBOOL(Z_Param_bNewVisibility); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMeshSectionVisible(Z_Param_SectionIndex,Z_Param_bNewVisibility); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSectionBoundingBox) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_SectionIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FBox*)Z_Param__Result=P_THIS->GetSectionBoundingBox(Z_Param_SectionIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSectionMaterial) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_SectionId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMaterialInterface**)Z_Param__Result=P_THIS->GetSectionMaterial(Z_Param_SectionId); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSectionMaterial) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_SectionId); \
		P_GET_OBJECT(UMaterialInterface,Z_Param_Material); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSectionMaterial(Z_Param_SectionId,Z_Param_Material); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearAllMeshSections) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClearAllMeshSections(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearMeshSection) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_SectionIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClearMeshSection(Z_Param_SectionIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateMeshSectionPacked_Blueprint) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_SectionIndex); \
		P_GET_TARRAY_REF(FRuntimeMeshBlueprintVertexSimple,Z_Param_Out_Vertices); \
		P_GET_TARRAY_REF(int32,Z_Param_Out_Triangles); \
		P_GET_UBOOL(Z_Param_bCalculateNormalTangent); \
		P_GET_UBOOL(Z_Param_bShouldCreateHardTangents); \
		P_GET_UBOOL(Z_Param_bGenerateTessellationTriangles); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateMeshSectionPacked_Blueprint(Z_Param_SectionIndex,Z_Param_Out_Vertices,Z_Param_Out_Triangles,Z_Param_bCalculateNormalTangent,Z_Param_bShouldCreateHardTangents,Z_Param_bGenerateTessellationTriangles); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateMeshSectionPacked_Blueprint) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_SectionIndex); \
		P_GET_TARRAY_REF(FRuntimeMeshBlueprintVertexSimple,Z_Param_Out_Vertices); \
		P_GET_TARRAY_REF(int32,Z_Param_Out_Triangles); \
		P_GET_UBOOL(Z_Param_bCreateCollision); \
		P_GET_UBOOL(Z_Param_bCalculateNormalTangent); \
		P_GET_UBOOL(Z_Param_bShouldCreateHardTangents); \
		P_GET_UBOOL(Z_Param_bGenerateTessellationTriangles); \
		P_GET_ENUM(EUpdateFrequency,Z_Param_UpdateFrequency); \
		P_GET_UBOOL(Z_Param_bUseHighPrecisionTangents); \
		P_GET_UBOOL(Z_Param_bUseHighPrecisionUVs); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CreateMeshSectionPacked_Blueprint(Z_Param_SectionIndex,Z_Param_Out_Vertices,Z_Param_Out_Triangles,Z_Param_bCreateCollision,Z_Param_bCalculateNormalTangent,Z_Param_bShouldCreateHardTangents,Z_Param_bGenerateTessellationTriangles,EUpdateFrequency(Z_Param_UpdateFrequency),Z_Param_bUseHighPrecisionTangents,Z_Param_bUseHighPrecisionUVs); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateMeshSection_Blueprint) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_SectionIndex); \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Vertices); \
		P_GET_TARRAY_REF(int32,Z_Param_Out_Triangles); \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Normals); \
		P_GET_TARRAY_REF(FRuntimeMeshTangent,Z_Param_Out_Tangents); \
		P_GET_TARRAY_REF(FVector2D,Z_Param_Out_UV0); \
		P_GET_TARRAY_REF(FVector2D,Z_Param_Out_UV1); \
		P_GET_TARRAY_REF(FLinearColor,Z_Param_Out_Colors); \
		P_GET_UBOOL(Z_Param_bCalculateNormalTangent); \
		P_GET_UBOOL(Z_Param_bShouldCreateHardTangents); \
		P_GET_UBOOL(Z_Param_bGenerateTessellationTriangles); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateMeshSection_Blueprint(Z_Param_SectionIndex,Z_Param_Out_Vertices,Z_Param_Out_Triangles,Z_Param_Out_Normals,Z_Param_Out_Tangents,Z_Param_Out_UV0,Z_Param_Out_UV1,Z_Param_Out_Colors,Z_Param_bCalculateNormalTangent,Z_Param_bShouldCreateHardTangents,Z_Param_bGenerateTessellationTriangles); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateMeshSection_Blueprint) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_SectionIndex); \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Vertices); \
		P_GET_TARRAY_REF(int32,Z_Param_Out_Triangles); \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Normals); \
		P_GET_TARRAY_REF(FRuntimeMeshTangent,Z_Param_Out_Tangents); \
		P_GET_TARRAY_REF(FVector2D,Z_Param_Out_UV0); \
		P_GET_TARRAY_REF(FVector2D,Z_Param_Out_UV1); \
		P_GET_TARRAY_REF(FLinearColor,Z_Param_Out_Colors); \
		P_GET_UBOOL(Z_Param_bCreateCollision); \
		P_GET_UBOOL(Z_Param_bCalculateNormalTangent); \
		P_GET_UBOOL(Z_Param_bShouldCreateHardTangents); \
		P_GET_UBOOL(Z_Param_bGenerateTessellationTriangles); \
		P_GET_ENUM(EUpdateFrequency,Z_Param_UpdateFrequency); \
		P_GET_UBOOL(Z_Param_bUseHighPrecisionTangents); \
		P_GET_UBOOL(Z_Param_bUseHighPrecisionUVs); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CreateMeshSection_Blueprint(Z_Param_SectionIndex,Z_Param_Out_Vertices,Z_Param_Out_Triangles,Z_Param_Out_Normals,Z_Param_Out_Tangents,Z_Param_Out_UV0,Z_Param_Out_UV1,Z_Param_Out_Colors,Z_Param_bCreateCollision,Z_Param_bCalculateNormalTangent,Z_Param_bShouldCreateHardTangents,Z_Param_bGenerateTessellationTriangles,EUpdateFrequency(Z_Param_UpdateFrequency),Z_Param_bUseHighPrecisionTangents,Z_Param_bUseHighPrecisionUVs); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetRuntimeMesh) \
	{ \
		P_GET_OBJECT(URuntimeMesh,Z_Param_NewMesh); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetRuntimeMesh(Z_Param_NewMesh); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetRuntimeMeshMobility) \
	{ \
		P_GET_ENUM(ERuntimeMeshMobility,Z_Param_NewMobility); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetRuntimeMeshMobility(ERuntimeMeshMobility(Z_Param_NewMobility)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRuntimeMeshMobility) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ERuntimeMeshMobility*)Z_Param__Result=P_THIS->GetRuntimeMeshMobility(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetOrCreateRuntimeMesh) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(URuntimeMesh**)Z_Param__Result=P_THIS->GetOrCreateRuntimeMesh(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRuntimeMesh) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(URuntimeMesh**)Z_Param__Result=P_THIS->GetRuntimeMesh(); \
		P_NATIVE_END; \
	}


#define ProceduralMeshDemos_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshComponent_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetCollisionMode) \
	{ \
		P_GET_ENUM(ERuntimeMeshCollisionCookingMode,Z_Param_NewMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCollisionMode(ERuntimeMeshCollisionCookingMode(Z_Param_NewMode)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCollisionUseAsyncCooking) \
	{ \
		P_GET_UBOOL(Z_Param_bNewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCollisionUseAsyncCooking(Z_Param_bNewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsCollisionUsingComplexAsSimple) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsCollisionUsingComplexAsSimple(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCollisionUseComplexAsSimple) \
	{ \
		P_GET_UBOOL(Z_Param_bNewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCollisionUseComplexAsSimple(Z_Param_bNewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCookCollisionNow) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CookCollisionNow(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCollisionCapsules) \
	{ \
		P_GET_TARRAY_REF(FRuntimeMeshCollisionCapsule,Z_Param_Out_NewCapsules); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCollisionCapsules(Z_Param_Out_NewCapsules); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearCollisionCapsules) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClearCollisionCapsules(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveCollisionCapsule) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveCollisionCapsule(Z_Param_Index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddCollisionCapsule) \
	{ \
		P_GET_STRUCT_REF(FRuntimeMeshCollisionCapsule,Z_Param_Out_NewCapsule); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->AddCollisionCapsule(Z_Param_Out_NewCapsule); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCollisionSpheres) \
	{ \
		P_GET_TARRAY_REF(FRuntimeMeshCollisionSphere,Z_Param_Out_NewSpheres); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCollisionSpheres(Z_Param_Out_NewSpheres); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearCollisionSpheres) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClearCollisionSpheres(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveCollisionSphere) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveCollisionSphere(Z_Param_Index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddCollisionSphere) \
	{ \
		P_GET_STRUCT_REF(FRuntimeMeshCollisionSphere,Z_Param_Out_NewSphere); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->AddCollisionSphere(Z_Param_Out_NewSphere); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCollisionBoxes) \
	{ \
		P_GET_TARRAY_REF(FRuntimeMeshCollisionBox,Z_Param_Out_NewBoxes); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCollisionBoxes(Z_Param_Out_NewBoxes); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearCollisionBoxes) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClearCollisionBoxes(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveCollisionBox) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveCollisionBox(Z_Param_Index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddCollisionBox) \
	{ \
		P_GET_STRUCT_REF(FRuntimeMeshCollisionBox,Z_Param_Out_NewBox); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->AddCollisionBox(Z_Param_Out_NewBox); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearAllConvexCollisionSections) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClearAllConvexCollisionSections(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearConvexCollisionSection) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_ConvexSectionIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClearConvexCollisionSection(Z_Param_ConvexSectionIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetConvexCollisionSection) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_ConvexSectionIndex); \
		P_GET_TARRAY(FVector,Z_Param_ConvexVerts); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetConvexCollisionSection(Z_Param_ConvexSectionIndex,Z_Param_ConvexVerts); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddConvexCollisionSection) \
	{ \
		P_GET_TARRAY(FVector,Z_Param_ConvexVerts); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->AddConvexCollisionSection(Z_Param_ConvexVerts); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearAllMeshCollisionSections) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClearAllMeshCollisionSections(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearMeshCollisionSection) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_CollisionSectionIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClearMeshCollisionSection(Z_Param_CollisionSectionIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMeshCollisionSection) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_CollisionSectionIndex); \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Vertices); \
		P_GET_TARRAY_REF(int32,Z_Param_Out_Triangles); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMeshCollisionSection(Z_Param_CollisionSectionIndex,Z_Param_Out_Vertices,Z_Param_Out_Triangles); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAvailableSectionIndex) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetAvailableSectionIndex(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDoesSectionExist) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_SectionIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->DoesSectionExist(Z_Param_SectionIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNumSections) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetNumSections(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsMeshSectionCollisionEnabled) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_SectionIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsMeshSectionCollisionEnabled(Z_Param_SectionIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMeshSectionCollisionEnabled) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_SectionIndex); \
		P_GET_UBOOL(Z_Param_bNewCollisionEnabled); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMeshSectionCollisionEnabled(Z_Param_SectionIndex,Z_Param_bNewCollisionEnabled); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsMeshSectionCastingShadows) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_SectionIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsMeshSectionCastingShadows(Z_Param_SectionIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMeshSectionCastsShadow) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_SectionIndex); \
		P_GET_UBOOL(Z_Param_bNewCastsShadow); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMeshSectionCastsShadow(Z_Param_SectionIndex,Z_Param_bNewCastsShadow); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsMeshSectionVisible) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_SectionIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsMeshSectionVisible(Z_Param_SectionIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMeshSectionVisible) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_SectionIndex); \
		P_GET_UBOOL(Z_Param_bNewVisibility); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMeshSectionVisible(Z_Param_SectionIndex,Z_Param_bNewVisibility); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSectionBoundingBox) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_SectionIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FBox*)Z_Param__Result=P_THIS->GetSectionBoundingBox(Z_Param_SectionIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSectionMaterial) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_SectionId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMaterialInterface**)Z_Param__Result=P_THIS->GetSectionMaterial(Z_Param_SectionId); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSectionMaterial) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_SectionId); \
		P_GET_OBJECT(UMaterialInterface,Z_Param_Material); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSectionMaterial(Z_Param_SectionId,Z_Param_Material); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearAllMeshSections) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClearAllMeshSections(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClearMeshSection) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_SectionIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClearMeshSection(Z_Param_SectionIndex); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateMeshSectionPacked_Blueprint) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_SectionIndex); \
		P_GET_TARRAY_REF(FRuntimeMeshBlueprintVertexSimple,Z_Param_Out_Vertices); \
		P_GET_TARRAY_REF(int32,Z_Param_Out_Triangles); \
		P_GET_UBOOL(Z_Param_bCalculateNormalTangent); \
		P_GET_UBOOL(Z_Param_bShouldCreateHardTangents); \
		P_GET_UBOOL(Z_Param_bGenerateTessellationTriangles); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateMeshSectionPacked_Blueprint(Z_Param_SectionIndex,Z_Param_Out_Vertices,Z_Param_Out_Triangles,Z_Param_bCalculateNormalTangent,Z_Param_bShouldCreateHardTangents,Z_Param_bGenerateTessellationTriangles); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateMeshSectionPacked_Blueprint) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_SectionIndex); \
		P_GET_TARRAY_REF(FRuntimeMeshBlueprintVertexSimple,Z_Param_Out_Vertices); \
		P_GET_TARRAY_REF(int32,Z_Param_Out_Triangles); \
		P_GET_UBOOL(Z_Param_bCreateCollision); \
		P_GET_UBOOL(Z_Param_bCalculateNormalTangent); \
		P_GET_UBOOL(Z_Param_bShouldCreateHardTangents); \
		P_GET_UBOOL(Z_Param_bGenerateTessellationTriangles); \
		P_GET_ENUM(EUpdateFrequency,Z_Param_UpdateFrequency); \
		P_GET_UBOOL(Z_Param_bUseHighPrecisionTangents); \
		P_GET_UBOOL(Z_Param_bUseHighPrecisionUVs); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CreateMeshSectionPacked_Blueprint(Z_Param_SectionIndex,Z_Param_Out_Vertices,Z_Param_Out_Triangles,Z_Param_bCreateCollision,Z_Param_bCalculateNormalTangent,Z_Param_bShouldCreateHardTangents,Z_Param_bGenerateTessellationTriangles,EUpdateFrequency(Z_Param_UpdateFrequency),Z_Param_bUseHighPrecisionTangents,Z_Param_bUseHighPrecisionUVs); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateMeshSection_Blueprint) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_SectionIndex); \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Vertices); \
		P_GET_TARRAY_REF(int32,Z_Param_Out_Triangles); \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Normals); \
		P_GET_TARRAY_REF(FRuntimeMeshTangent,Z_Param_Out_Tangents); \
		P_GET_TARRAY_REF(FVector2D,Z_Param_Out_UV0); \
		P_GET_TARRAY_REF(FVector2D,Z_Param_Out_UV1); \
		P_GET_TARRAY_REF(FLinearColor,Z_Param_Out_Colors); \
		P_GET_UBOOL(Z_Param_bCalculateNormalTangent); \
		P_GET_UBOOL(Z_Param_bShouldCreateHardTangents); \
		P_GET_UBOOL(Z_Param_bGenerateTessellationTriangles); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateMeshSection_Blueprint(Z_Param_SectionIndex,Z_Param_Out_Vertices,Z_Param_Out_Triangles,Z_Param_Out_Normals,Z_Param_Out_Tangents,Z_Param_Out_UV0,Z_Param_Out_UV1,Z_Param_Out_Colors,Z_Param_bCalculateNormalTangent,Z_Param_bShouldCreateHardTangents,Z_Param_bGenerateTessellationTriangles); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateMeshSection_Blueprint) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_SectionIndex); \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Vertices); \
		P_GET_TARRAY_REF(int32,Z_Param_Out_Triangles); \
		P_GET_TARRAY_REF(FVector,Z_Param_Out_Normals); \
		P_GET_TARRAY_REF(FRuntimeMeshTangent,Z_Param_Out_Tangents); \
		P_GET_TARRAY_REF(FVector2D,Z_Param_Out_UV0); \
		P_GET_TARRAY_REF(FVector2D,Z_Param_Out_UV1); \
		P_GET_TARRAY_REF(FLinearColor,Z_Param_Out_Colors); \
		P_GET_UBOOL(Z_Param_bCreateCollision); \
		P_GET_UBOOL(Z_Param_bCalculateNormalTangent); \
		P_GET_UBOOL(Z_Param_bShouldCreateHardTangents); \
		P_GET_UBOOL(Z_Param_bGenerateTessellationTriangles); \
		P_GET_ENUM(EUpdateFrequency,Z_Param_UpdateFrequency); \
		P_GET_UBOOL(Z_Param_bUseHighPrecisionTangents); \
		P_GET_UBOOL(Z_Param_bUseHighPrecisionUVs); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CreateMeshSection_Blueprint(Z_Param_SectionIndex,Z_Param_Out_Vertices,Z_Param_Out_Triangles,Z_Param_Out_Normals,Z_Param_Out_Tangents,Z_Param_Out_UV0,Z_Param_Out_UV1,Z_Param_Out_Colors,Z_Param_bCreateCollision,Z_Param_bCalculateNormalTangent,Z_Param_bShouldCreateHardTangents,Z_Param_bGenerateTessellationTriangles,EUpdateFrequency(Z_Param_UpdateFrequency),Z_Param_bUseHighPrecisionTangents,Z_Param_bUseHighPrecisionUVs); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetRuntimeMesh) \
	{ \
		P_GET_OBJECT(URuntimeMesh,Z_Param_NewMesh); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetRuntimeMesh(Z_Param_NewMesh); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetRuntimeMeshMobility) \
	{ \
		P_GET_ENUM(ERuntimeMeshMobility,Z_Param_NewMobility); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetRuntimeMeshMobility(ERuntimeMeshMobility(Z_Param_NewMobility)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRuntimeMeshMobility) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ERuntimeMeshMobility*)Z_Param__Result=P_THIS->GetRuntimeMeshMobility(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetOrCreateRuntimeMesh) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(URuntimeMesh**)Z_Param__Result=P_THIS->GetOrCreateRuntimeMesh(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRuntimeMesh) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(URuntimeMesh**)Z_Param__Result=P_THIS->GetRuntimeMesh(); \
		P_NATIVE_END; \
	}


#define ProceduralMeshDemos_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshComponent_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURuntimeMeshComponent(); \
	friend RUNTIMEMESHCOMPONENT_API class UClass* Z_Construct_UClass_URuntimeMeshComponent(); \
public: \
	DECLARE_CLASS(URuntimeMeshComponent, UMeshComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/RuntimeMeshComponent"), NO_API) \
	DECLARE_SERIALIZER(URuntimeMeshComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define ProceduralMeshDemos_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshComponent_h_19_INCLASS \
private: \
	static void StaticRegisterNativesURuntimeMeshComponent(); \
	friend RUNTIMEMESHCOMPONENT_API class UClass* Z_Construct_UClass_URuntimeMeshComponent(); \
public: \
	DECLARE_CLASS(URuntimeMeshComponent, UMeshComponent, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/RuntimeMeshComponent"), NO_API) \
	DECLARE_SERIALIZER(URuntimeMeshComponent) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define ProceduralMeshDemos_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshComponent_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URuntimeMeshComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URuntimeMeshComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URuntimeMeshComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URuntimeMeshComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URuntimeMeshComponent(URuntimeMeshComponent&&); \
	NO_API URuntimeMeshComponent(const URuntimeMeshComponent&); \
public:


#define ProceduralMeshDemos_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshComponent_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URuntimeMeshComponent(URuntimeMeshComponent&&); \
	NO_API URuntimeMeshComponent(const URuntimeMeshComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URuntimeMeshComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URuntimeMeshComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URuntimeMeshComponent)


#define ProceduralMeshDemos_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshComponent_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__RuntimeMeshReference() { return STRUCT_OFFSET(URuntimeMeshComponent, RuntimeMeshReference); }


#define ProceduralMeshDemos_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshComponent_h_16_PROLOG
#define ProceduralMeshDemos_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshComponent_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProceduralMeshDemos_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshComponent_h_19_PRIVATE_PROPERTY_OFFSET \
	ProceduralMeshDemos_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshComponent_h_19_RPC_WRAPPERS \
	ProceduralMeshDemos_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshComponent_h_19_INCLASS \
	ProceduralMeshDemos_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshComponent_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ProceduralMeshDemos_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshComponent_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProceduralMeshDemos_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshComponent_h_19_PRIVATE_PROPERTY_OFFSET \
	ProceduralMeshDemos_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshComponent_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	ProceduralMeshDemos_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshComponent_h_19_INCLASS_NO_PURE_DECLS \
	ProceduralMeshDemos_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshComponent_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ProceduralMeshDemos_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
