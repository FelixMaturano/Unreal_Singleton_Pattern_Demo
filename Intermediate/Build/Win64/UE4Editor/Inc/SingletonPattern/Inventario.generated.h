// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SINGLETONPATTERN_Inventario_generated_h
#error "Inventario.generated.h already included, missing '#pragma once' in Inventario.h"
#endif
#define SINGLETONPATTERN_Inventario_generated_h

#define SingletonPattern_Source_SingletonPattern_Inventario_h_12_SPARSE_DATA
#define SingletonPattern_Source_SingletonPattern_Inventario_h_12_RPC_WRAPPERS
#define SingletonPattern_Source_SingletonPattern_Inventario_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define SingletonPattern_Source_SingletonPattern_Inventario_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAInventario(); \
	friend struct Z_Construct_UClass_AInventario_Statics; \
public: \
	DECLARE_CLASS(AInventario, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SingletonPattern"), NO_API) \
	DECLARE_SERIALIZER(AInventario)


#define SingletonPattern_Source_SingletonPattern_Inventario_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAInventario(); \
	friend struct Z_Construct_UClass_AInventario_Statics; \
public: \
	DECLARE_CLASS(AInventario, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SingletonPattern"), NO_API) \
	DECLARE_SERIALIZER(AInventario)


#define SingletonPattern_Source_SingletonPattern_Inventario_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AInventario(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AInventario) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInventario); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInventario); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AInventario(AInventario&&); \
	NO_API AInventario(const AInventario&); \
public:


#define SingletonPattern_Source_SingletonPattern_Inventario_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AInventario(AInventario&&); \
	NO_API AInventario(const AInventario&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInventario); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInventario); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AInventario)


#define SingletonPattern_Source_SingletonPattern_Inventario_h_12_PRIVATE_PROPERTY_OFFSET
#define SingletonPattern_Source_SingletonPattern_Inventario_h_9_PROLOG
#define SingletonPattern_Source_SingletonPattern_Inventario_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SingletonPattern_Source_SingletonPattern_Inventario_h_12_PRIVATE_PROPERTY_OFFSET \
	SingletonPattern_Source_SingletonPattern_Inventario_h_12_SPARSE_DATA \
	SingletonPattern_Source_SingletonPattern_Inventario_h_12_RPC_WRAPPERS \
	SingletonPattern_Source_SingletonPattern_Inventario_h_12_INCLASS \
	SingletonPattern_Source_SingletonPattern_Inventario_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define SingletonPattern_Source_SingletonPattern_Inventario_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	SingletonPattern_Source_SingletonPattern_Inventario_h_12_PRIVATE_PROPERTY_OFFSET \
	SingletonPattern_Source_SingletonPattern_Inventario_h_12_SPARSE_DATA \
	SingletonPattern_Source_SingletonPattern_Inventario_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	SingletonPattern_Source_SingletonPattern_Inventario_h_12_INCLASS_NO_PURE_DECLS \
	SingletonPattern_Source_SingletonPattern_Inventario_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SINGLETONPATTERN_API UClass* StaticClass<class AInventario>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID SingletonPattern_Source_SingletonPattern_Inventario_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
