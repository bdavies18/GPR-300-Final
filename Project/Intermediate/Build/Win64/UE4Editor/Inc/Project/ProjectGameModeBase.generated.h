// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECT_ProjectGameModeBase_generated_h
#error "ProjectGameModeBase.generated.h already included, missing '#pragma once' in ProjectGameModeBase.h"
#endif
#define PROJECT_ProjectGameModeBase_generated_h

#define Project_Source_Project_ProjectGameModeBase_h_15_SPARSE_DATA
#define Project_Source_Project_ProjectGameModeBase_h_15_RPC_WRAPPERS
#define Project_Source_Project_ProjectGameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Project_Source_Project_ProjectGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAProjectGameModeBase(); \
	friend struct Z_Construct_UClass_AProjectGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AProjectGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Project"), NO_API) \
	DECLARE_SERIALIZER(AProjectGameModeBase)


#define Project_Source_Project_ProjectGameModeBase_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAProjectGameModeBase(); \
	friend struct Z_Construct_UClass_AProjectGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AProjectGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Project"), NO_API) \
	DECLARE_SERIALIZER(AProjectGameModeBase)


#define Project_Source_Project_ProjectGameModeBase_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AProjectGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AProjectGameModeBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectGameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectGameModeBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProjectGameModeBase(AProjectGameModeBase&&); \
	NO_API AProjectGameModeBase(const AProjectGameModeBase&); \
public:


#define Project_Source_Project_ProjectGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AProjectGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProjectGameModeBase(AProjectGameModeBase&&); \
	NO_API AProjectGameModeBase(const AProjectGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectGameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectGameModeBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AProjectGameModeBase)


#define Project_Source_Project_ProjectGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET
#define Project_Source_Project_ProjectGameModeBase_h_12_PROLOG
#define Project_Source_Project_ProjectGameModeBase_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Project_Source_Project_ProjectGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET \
	Project_Source_Project_ProjectGameModeBase_h_15_SPARSE_DATA \
	Project_Source_Project_ProjectGameModeBase_h_15_RPC_WRAPPERS \
	Project_Source_Project_ProjectGameModeBase_h_15_INCLASS \
	Project_Source_Project_ProjectGameModeBase_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Project_Source_Project_ProjectGameModeBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Project_Source_Project_ProjectGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET \
	Project_Source_Project_ProjectGameModeBase_h_15_SPARSE_DATA \
	Project_Source_Project_ProjectGameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Project_Source_Project_ProjectGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
	Project_Source_Project_ProjectGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECT_API UClass* StaticClass<class AProjectGameModeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Project_Source_Project_ProjectGameModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
