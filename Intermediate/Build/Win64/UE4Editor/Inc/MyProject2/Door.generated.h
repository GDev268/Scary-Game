// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
#ifdef MYPROJECT2_Door_generated_h
#error "Door.generated.h already included, missing '#pragma once' in Door.h"
#endif
#define MYPROJECT2_Door_generated_h

#define MyProject2_Source_MyProject2_Door_h_12_SPARSE_DATA
#define MyProject2_Source_MyProject2_Door_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execToggleDoor); \
	DECLARE_FUNCTION(execCloseDoor); \
	DECLARE_FUNCTION(execOpenDoor);


#define MyProject2_Source_MyProject2_Door_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execToggleDoor); \
	DECLARE_FUNCTION(execCloseDoor); \
	DECLARE_FUNCTION(execOpenDoor);


#define MyProject2_Source_MyProject2_Door_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADoor(); \
	friend struct Z_Construct_UClass_ADoor_Statics; \
public: \
	DECLARE_CLASS(ADoor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject2"), NO_API) \
	DECLARE_SERIALIZER(ADoor)


#define MyProject2_Source_MyProject2_Door_h_12_INCLASS \
private: \
	static void StaticRegisterNativesADoor(); \
	friend struct Z_Construct_UClass_ADoor_Statics; \
public: \
	DECLARE_CLASS(ADoor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MyProject2"), NO_API) \
	DECLARE_SERIALIZER(ADoor)


#define MyProject2_Source_MyProject2_Door_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADoor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADoor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADoor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADoor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADoor(ADoor&&); \
	NO_API ADoor(const ADoor&); \
public:


#define MyProject2_Source_MyProject2_Door_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADoor(ADoor&&); \
	NO_API ADoor(const ADoor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADoor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADoor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADoor)


#define MyProject2_Source_MyProject2_Door_h_12_PRIVATE_PROPERTY_OFFSET
#define MyProject2_Source_MyProject2_Door_h_9_PROLOG
#define MyProject2_Source_MyProject2_Door_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject2_Source_MyProject2_Door_h_12_PRIVATE_PROPERTY_OFFSET \
	MyProject2_Source_MyProject2_Door_h_12_SPARSE_DATA \
	MyProject2_Source_MyProject2_Door_h_12_RPC_WRAPPERS \
	MyProject2_Source_MyProject2_Door_h_12_INCLASS \
	MyProject2_Source_MyProject2_Door_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject2_Source_MyProject2_Door_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject2_Source_MyProject2_Door_h_12_PRIVATE_PROPERTY_OFFSET \
	MyProject2_Source_MyProject2_Door_h_12_SPARSE_DATA \
	MyProject2_Source_MyProject2_Door_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject2_Source_MyProject2_Door_h_12_INCLASS_NO_PURE_DECLS \
	MyProject2_Source_MyProject2_Door_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MYPROJECT2_API UClass* StaticClass<class ADoor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject2_Source_MyProject2_Door_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
