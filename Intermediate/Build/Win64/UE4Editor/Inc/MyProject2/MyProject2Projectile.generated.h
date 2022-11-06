// Copyright Epic Games, Inc. All Rights Reserved.
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
#ifdef MYPROJECT2_MyProject2Projectile_generated_h
#error "MyProject2Projectile.generated.h already included, missing '#pragma once' in MyProject2Projectile.h"
#endif
#define MYPROJECT2_MyProject2Projectile_generated_h

#define MyProject2_Source_MyProject2_MyProject2Projectile_h_15_SPARSE_DATA
#define MyProject2_Source_MyProject2_MyProject2Projectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define MyProject2_Source_MyProject2_MyProject2Projectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define MyProject2_Source_MyProject2_MyProject2Projectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyProject2Projectile(); \
	friend struct Z_Construct_UClass_AMyProject2Projectile_Statics; \
public: \
	DECLARE_CLASS(AMyProject2Projectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject2"), NO_API) \
	DECLARE_SERIALIZER(AMyProject2Projectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define MyProject2_Source_MyProject2_MyProject2Projectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAMyProject2Projectile(); \
	friend struct Z_Construct_UClass_AMyProject2Projectile_Statics; \
public: \
	DECLARE_CLASS(AMyProject2Projectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject2"), NO_API) \
	DECLARE_SERIALIZER(AMyProject2Projectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define MyProject2_Source_MyProject2_MyProject2Projectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyProject2Projectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyProject2Projectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyProject2Projectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyProject2Projectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyProject2Projectile(AMyProject2Projectile&&); \
	NO_API AMyProject2Projectile(const AMyProject2Projectile&); \
public:


#define MyProject2_Source_MyProject2_MyProject2Projectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyProject2Projectile(AMyProject2Projectile&&); \
	NO_API AMyProject2Projectile(const AMyProject2Projectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyProject2Projectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyProject2Projectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyProject2Projectile)


#define MyProject2_Source_MyProject2_MyProject2Projectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(AMyProject2Projectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AMyProject2Projectile, ProjectileMovement); }


#define MyProject2_Source_MyProject2_MyProject2Projectile_h_12_PROLOG
#define MyProject2_Source_MyProject2_MyProject2Projectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject2_Source_MyProject2_MyProject2Projectile_h_15_PRIVATE_PROPERTY_OFFSET \
	MyProject2_Source_MyProject2_MyProject2Projectile_h_15_SPARSE_DATA \
	MyProject2_Source_MyProject2_MyProject2Projectile_h_15_RPC_WRAPPERS \
	MyProject2_Source_MyProject2_MyProject2Projectile_h_15_INCLASS \
	MyProject2_Source_MyProject2_MyProject2Projectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject2_Source_MyProject2_MyProject2Projectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject2_Source_MyProject2_MyProject2Projectile_h_15_PRIVATE_PROPERTY_OFFSET \
	MyProject2_Source_MyProject2_MyProject2Projectile_h_15_SPARSE_DATA \
	MyProject2_Source_MyProject2_MyProject2Projectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject2_Source_MyProject2_MyProject2Projectile_h_15_INCLASS_NO_PURE_DECLS \
	MyProject2_Source_MyProject2_MyProject2Projectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPROJECT2_API UClass* StaticClass<class AMyProject2Projectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject2_Source_MyProject2_MyProject2Projectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
