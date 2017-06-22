// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef FPS_UE4_FPS_UE4Projectile_generated_h
#error "FPS_UE4Projectile.generated.h already included, missing '#pragma once' in FPS_UE4Projectile.h"
#endif
#define FPS_UE4_FPS_UE4Projectile_generated_h

#define FPS_UE4_Source_FPS_UE4_FPS_UE4Projectile_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_otherActorIndex); \
		P_GET_UBOOL(Z_Param_bSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_otherActorIndex,Z_Param_bSweep,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define FPS_UE4_Source_FPS_UE4_FPS_UE4Projectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_otherActorIndex); \
		P_GET_UBOOL(Z_Param_bSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_otherActorIndex,Z_Param_bSweep,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define FPS_UE4_Source_FPS_UE4_FPS_UE4Projectile_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFPS_UE4Projectile(); \
	friend FPS_UE4_API class UClass* Z_Construct_UClass_AFPS_UE4Projectile(); \
public: \
	DECLARE_CLASS(AFPS_UE4Projectile, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/FPS_UE4"), NO_API) \
	DECLARE_SERIALIZER(AFPS_UE4Projectile) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FPS_UE4_Source_FPS_UE4_FPS_UE4Projectile_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAFPS_UE4Projectile(); \
	friend FPS_UE4_API class UClass* Z_Construct_UClass_AFPS_UE4Projectile(); \
public: \
	DECLARE_CLASS(AFPS_UE4Projectile, AActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/FPS_UE4"), NO_API) \
	DECLARE_SERIALIZER(AFPS_UE4Projectile) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC}; \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FPS_UE4_Source_FPS_UE4_FPS_UE4Projectile_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFPS_UE4Projectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFPS_UE4Projectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPS_UE4Projectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPS_UE4Projectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPS_UE4Projectile(AFPS_UE4Projectile&&); \
	NO_API AFPS_UE4Projectile(const AFPS_UE4Projectile&); \
public:


#define FPS_UE4_Source_FPS_UE4_FPS_UE4Projectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPS_UE4Projectile(AFPS_UE4Projectile&&); \
	NO_API AFPS_UE4Projectile(const AFPS_UE4Projectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPS_UE4Projectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPS_UE4Projectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFPS_UE4Projectile)


#define FPS_UE4_Source_FPS_UE4_FPS_UE4Projectile_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(AFPS_UE4Projectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__m_mesh() { return STRUCT_OFFSET(AFPS_UE4Projectile, m_mesh); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AFPS_UE4Projectile, ProjectileMovement); } \
	FORCEINLINE static uint32 __PPO__m_explosionParticle() { return STRUCT_OFFSET(AFPS_UE4Projectile, m_explosionParticle); }


#define FPS_UE4_Source_FPS_UE4_FPS_UE4Projectile_h_9_PROLOG
#define FPS_UE4_Source_FPS_UE4_FPS_UE4Projectile_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPS_UE4_Source_FPS_UE4_FPS_UE4Projectile_h_12_PRIVATE_PROPERTY_OFFSET \
	FPS_UE4_Source_FPS_UE4_FPS_UE4Projectile_h_12_RPC_WRAPPERS \
	FPS_UE4_Source_FPS_UE4_FPS_UE4Projectile_h_12_INCLASS \
	FPS_UE4_Source_FPS_UE4_FPS_UE4Projectile_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FPS_UE4_Source_FPS_UE4_FPS_UE4Projectile_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPS_UE4_Source_FPS_UE4_FPS_UE4Projectile_h_12_PRIVATE_PROPERTY_OFFSET \
	FPS_UE4_Source_FPS_UE4_FPS_UE4Projectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FPS_UE4_Source_FPS_UE4_FPS_UE4Projectile_h_12_INCLASS_NO_PURE_DECLS \
	FPS_UE4_Source_FPS_UE4_FPS_UE4Projectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FPS_UE4_Source_FPS_UE4_FPS_UE4Projectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
