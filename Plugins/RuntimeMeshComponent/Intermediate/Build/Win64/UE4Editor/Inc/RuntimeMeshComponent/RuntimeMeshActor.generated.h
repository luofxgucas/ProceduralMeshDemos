// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ERuntimeMeshMobility : uint8;
#ifdef RUNTIMEMESHCOMPONENT_RuntimeMeshActor_generated_h
#error "RuntimeMeshActor.generated.h already included, missing '#pragma once' in RuntimeMeshActor.h"
#endif
#define RUNTIMEMESHCOMPONENT_RuntimeMeshActor_generated_h

#define ProceduralMeshDemos_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshActor_h_12_RPC_WRAPPERS \
	virtual void GenerateMeshes_Implementation(); \
 \
	DECLARE_FUNCTION(execGenerateMeshes) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GenerateMeshes_Implementation(); \
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
	}


#define ProceduralMeshDemos_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void GenerateMeshes_Implementation(); \
 \
	DECLARE_FUNCTION(execGenerateMeshes) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GenerateMeshes_Implementation(); \
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
	}


#define ProceduralMeshDemos_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshActor_h_12_EVENT_PARMS
#define ProceduralMeshDemos_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshActor_h_12_CALLBACK_WRAPPERS
#define ProceduralMeshDemos_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshActor_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARuntimeMeshActor(); \
	friend RUNTIMEMESHCOMPONENT_API class UClass* Z_Construct_UClass_ARuntimeMeshActor(); \
public: \
	DECLARE_CLASS(ARuntimeMeshActor, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/RuntimeMeshComponent"), NO_API) \
	DECLARE_SERIALIZER(ARuntimeMeshActor) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define ProceduralMeshDemos_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshActor_h_12_INCLASS \
private: \
	static void StaticRegisterNativesARuntimeMeshActor(); \
	friend RUNTIMEMESHCOMPONENT_API class UClass* Z_Construct_UClass_ARuntimeMeshActor(); \
public: \
	DECLARE_CLASS(ARuntimeMeshActor, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/RuntimeMeshComponent"), NO_API) \
	DECLARE_SERIALIZER(ARuntimeMeshActor) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define ProceduralMeshDemos_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshActor_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARuntimeMeshActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARuntimeMeshActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARuntimeMeshActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARuntimeMeshActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARuntimeMeshActor(ARuntimeMeshActor&&); \
	NO_API ARuntimeMeshActor(const ARuntimeMeshActor&); \
public:


#define ProceduralMeshDemos_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshActor_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARuntimeMeshActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARuntimeMeshActor(ARuntimeMeshActor&&); \
	NO_API ARuntimeMeshActor(const ARuntimeMeshActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARuntimeMeshActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARuntimeMeshActor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARuntimeMeshActor)


#define ProceduralMeshDemos_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshActor_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__RuntimeMeshComponent() { return STRUCT_OFFSET(ARuntimeMeshActor, RuntimeMeshComponent); } \
	FORCEINLINE static uint32 __PPO__bRunGenerateMeshesOnConstruction() { return STRUCT_OFFSET(ARuntimeMeshActor, bRunGenerateMeshesOnConstruction); } \
	FORCEINLINE static uint32 __PPO__bRunGenerateMeshesOnBeginPlay() { return STRUCT_OFFSET(ARuntimeMeshActor, bRunGenerateMeshesOnBeginPlay); }


#define ProceduralMeshDemos_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshActor_h_9_PROLOG \
	ProceduralMeshDemos_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshActor_h_12_EVENT_PARMS


#define ProceduralMeshDemos_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshActor_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProceduralMeshDemos_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshActor_h_12_PRIVATE_PROPERTY_OFFSET \
	ProceduralMeshDemos_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshActor_h_12_RPC_WRAPPERS \
	ProceduralMeshDemos_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshActor_h_12_CALLBACK_WRAPPERS \
	ProceduralMeshDemos_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshActor_h_12_INCLASS \
	ProceduralMeshDemos_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshActor_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ProceduralMeshDemos_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshActor_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProceduralMeshDemos_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshActor_h_12_PRIVATE_PROPERTY_OFFSET \
	ProceduralMeshDemos_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	ProceduralMeshDemos_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshActor_h_12_CALLBACK_WRAPPERS \
	ProceduralMeshDemos_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshActor_h_12_INCLASS_NO_PURE_DECLS \
	ProceduralMeshDemos_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshActor_h_12_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class RuntimeMeshActor."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ProceduralMeshDemos_Plugins_RuntimeMeshComponent_Source_RuntimeMeshComponent_Public_RuntimeMeshActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
