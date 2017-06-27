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
#ifdef FPS_UE4_FPS_UE4Character_generated_h
#error "FPS_UE4Character.generated.h already included, missing '#pragma once' in FPS_UE4Character.h"
#endif
#define FPS_UE4_FPS_UE4Character_generated_h

#define FPS_UE4_Source_FPS_UE4_FPS_UE4Character_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnPlayerBeginOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnPlayerBeginOverlap(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define FPS_UE4_Source_FPS_UE4_FPS_UE4Character_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnPlayerBeginOverlap) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnPlayerBeginOverlap(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define FPS_UE4_Source_FPS_UE4_FPS_UE4Character_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFPS_UE4Character(); \
	friend FPS_UE4_API class UClass* Z_Construct_UClass_AFPS_UE4Character(); \
public: \
	DECLARE_CLASS(AFPS_UE4Character, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/FPS_UE4"), NO_API) \
	DECLARE_SERIALIZER(AFPS_UE4Character) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define FPS_UE4_Source_FPS_UE4_FPS_UE4Character_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAFPS_UE4Character(); \
	friend FPS_UE4_API class UClass* Z_Construct_UClass_AFPS_UE4Character(); \
public: \
	DECLARE_CLASS(AFPS_UE4Character, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/FPS_UE4"), NO_API) \
	DECLARE_SERIALIZER(AFPS_UE4Character) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define FPS_UE4_Source_FPS_UE4_FPS_UE4Character_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFPS_UE4Character(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFPS_UE4Character) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPS_UE4Character); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPS_UE4Character); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPS_UE4Character(AFPS_UE4Character&&); \
	NO_API AFPS_UE4Character(const AFPS_UE4Character&); \
public:


#define FPS_UE4_Source_FPS_UE4_FPS_UE4Character_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPS_UE4Character(AFPS_UE4Character&&); \
	NO_API AFPS_UE4Character(const AFPS_UE4Character&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPS_UE4Character); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPS_UE4Character); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFPS_UE4Character)


#define FPS_UE4_Source_FPS_UE4_FPS_UE4Character_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(AFPS_UE4Character, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FP_Gun() { return STRUCT_OFFSET(AFPS_UE4Character, FP_Gun); } \
	FORCEINLINE static uint32 __PPO__FP_MuzzleLocation() { return STRUCT_OFFSET(AFPS_UE4Character, FP_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__VR_Gun() { return STRUCT_OFFSET(AFPS_UE4Character, VR_Gun); } \
	FORCEINLINE static uint32 __PPO__VR_MuzzleLocation() { return STRUCT_OFFSET(AFPS_UE4Character, VR_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(AFPS_UE4Character, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__R_MotionController() { return STRUCT_OFFSET(AFPS_UE4Character, R_MotionController); } \
	FORCEINLINE static uint32 __PPO__L_MotionController() { return STRUCT_OFFSET(AFPS_UE4Character, L_MotionController); } \
	FORCEINLINE static uint32 __PPO__m_trigger1() { return STRUCT_OFFSET(AFPS_UE4Character, m_trigger1); }


#define FPS_UE4_Source_FPS_UE4_FPS_UE4Character_h_11_PROLOG
#define FPS_UE4_Source_FPS_UE4_FPS_UE4Character_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPS_UE4_Source_FPS_UE4_FPS_UE4Character_h_14_PRIVATE_PROPERTY_OFFSET \
	FPS_UE4_Source_FPS_UE4_FPS_UE4Character_h_14_RPC_WRAPPERS \
	FPS_UE4_Source_FPS_UE4_FPS_UE4Character_h_14_INCLASS \
	FPS_UE4_Source_FPS_UE4_FPS_UE4Character_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FPS_UE4_Source_FPS_UE4_FPS_UE4Character_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPS_UE4_Source_FPS_UE4_FPS_UE4Character_h_14_PRIVATE_PROPERTY_OFFSET \
	FPS_UE4_Source_FPS_UE4_FPS_UE4Character_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FPS_UE4_Source_FPS_UE4_FPS_UE4Character_h_14_INCLASS_NO_PURE_DECLS \
	FPS_UE4_Source_FPS_UE4_FPS_UE4Character_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FPS_UE4_Source_FPS_UE4_FPS_UE4Character_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
