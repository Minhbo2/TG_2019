// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef TG_2019_TG_2019Projectile_generated_h
#error "TG_2019Projectile.generated.h already included, missing '#pragma once' in TG_2019Projectile.h"
#endif
#define TG_2019_TG_2019Projectile_generated_h

#define TG_2019_Source_TG_2019_TG_2019Projectile_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define TG_2019_Source_TG_2019_TG_2019Projectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define TG_2019_Source_TG_2019_TG_2019Projectile_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATG_2019Projectile(); \
	friend struct Z_Construct_UClass_ATG_2019Projectile_Statics; \
public: \
	DECLARE_CLASS(ATG_2019Projectile, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TG_2019"), NO_API) \
	DECLARE_SERIALIZER(ATG_2019Projectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define TG_2019_Source_TG_2019_TG_2019Projectile_h_12_INCLASS \
private: \
	static void StaticRegisterNativesATG_2019Projectile(); \
	friend struct Z_Construct_UClass_ATG_2019Projectile_Statics; \
public: \
	DECLARE_CLASS(ATG_2019Projectile, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TG_2019"), NO_API) \
	DECLARE_SERIALIZER(ATG_2019Projectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define TG_2019_Source_TG_2019_TG_2019Projectile_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATG_2019Projectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATG_2019Projectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATG_2019Projectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATG_2019Projectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATG_2019Projectile(ATG_2019Projectile&&); \
	NO_API ATG_2019Projectile(const ATG_2019Projectile&); \
public:


#define TG_2019_Source_TG_2019_TG_2019Projectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATG_2019Projectile(ATG_2019Projectile&&); \
	NO_API ATG_2019Projectile(const ATG_2019Projectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATG_2019Projectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATG_2019Projectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATG_2019Projectile)


#define TG_2019_Source_TG_2019_TG_2019Projectile_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(ATG_2019Projectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(ATG_2019Projectile, ProjectileMovement); }


#define TG_2019_Source_TG_2019_TG_2019Projectile_h_9_PROLOG
#define TG_2019_Source_TG_2019_TG_2019Projectile_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TG_2019_Source_TG_2019_TG_2019Projectile_h_12_PRIVATE_PROPERTY_OFFSET \
	TG_2019_Source_TG_2019_TG_2019Projectile_h_12_RPC_WRAPPERS \
	TG_2019_Source_TG_2019_TG_2019Projectile_h_12_INCLASS \
	TG_2019_Source_TG_2019_TG_2019Projectile_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TG_2019_Source_TG_2019_TG_2019Projectile_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TG_2019_Source_TG_2019_TG_2019Projectile_h_12_PRIVATE_PROPERTY_OFFSET \
	TG_2019_Source_TG_2019_TG_2019Projectile_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	TG_2019_Source_TG_2019_TG_2019Projectile_h_12_INCLASS_NO_PURE_DECLS \
	TG_2019_Source_TG_2019_TG_2019Projectile_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TG_2019_API UClass* StaticClass<class ATG_2019Projectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TG_2019_Source_TG_2019_TG_2019Projectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
