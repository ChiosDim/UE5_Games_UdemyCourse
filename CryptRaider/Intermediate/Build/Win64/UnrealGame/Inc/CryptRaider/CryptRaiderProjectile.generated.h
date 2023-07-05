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
struct FHitResult;
#ifdef CRYPTRAIDER_CryptRaiderProjectile_generated_h
#error "CryptRaiderProjectile.generated.h already included, missing '#pragma once' in CryptRaiderProjectile.h"
#endif
#define CRYPTRAIDER_CryptRaiderProjectile_generated_h

#define FID_CryptRaider_Source_CryptRaider_CryptRaiderProjectile_h_15_SPARSE_DATA
#define FID_CryptRaider_Source_CryptRaider_CryptRaiderProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FID_CryptRaider_Source_CryptRaider_CryptRaiderProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FID_CryptRaider_Source_CryptRaider_CryptRaiderProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACryptRaiderProjectile(); \
	friend struct Z_Construct_UClass_ACryptRaiderProjectile_Statics; \
public: \
	DECLARE_CLASS(ACryptRaiderProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CryptRaider"), NO_API) \
	DECLARE_SERIALIZER(ACryptRaiderProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_CryptRaider_Source_CryptRaider_CryptRaiderProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesACryptRaiderProjectile(); \
	friend struct Z_Construct_UClass_ACryptRaiderProjectile_Statics; \
public: \
	DECLARE_CLASS(ACryptRaiderProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CryptRaider"), NO_API) \
	DECLARE_SERIALIZER(ACryptRaiderProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_CryptRaider_Source_CryptRaider_CryptRaiderProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACryptRaiderProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACryptRaiderProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACryptRaiderProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACryptRaiderProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACryptRaiderProjectile(ACryptRaiderProjectile&&); \
	NO_API ACryptRaiderProjectile(const ACryptRaiderProjectile&); \
public:


#define FID_CryptRaider_Source_CryptRaider_CryptRaiderProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACryptRaiderProjectile(ACryptRaiderProjectile&&); \
	NO_API ACryptRaiderProjectile(const ACryptRaiderProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACryptRaiderProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACryptRaiderProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACryptRaiderProjectile)


#define FID_CryptRaider_Source_CryptRaider_CryptRaiderProjectile_h_12_PROLOG
#define FID_CryptRaider_Source_CryptRaider_CryptRaiderProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CryptRaider_Source_CryptRaider_CryptRaiderProjectile_h_15_SPARSE_DATA \
	FID_CryptRaider_Source_CryptRaider_CryptRaiderProjectile_h_15_RPC_WRAPPERS \
	FID_CryptRaider_Source_CryptRaider_CryptRaiderProjectile_h_15_INCLASS \
	FID_CryptRaider_Source_CryptRaider_CryptRaiderProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_CryptRaider_Source_CryptRaider_CryptRaiderProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CryptRaider_Source_CryptRaider_CryptRaiderProjectile_h_15_SPARSE_DATA \
	FID_CryptRaider_Source_CryptRaider_CryptRaiderProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CryptRaider_Source_CryptRaider_CryptRaiderProjectile_h_15_INCLASS_NO_PURE_DECLS \
	FID_CryptRaider_Source_CryptRaider_CryptRaiderProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CRYPTRAIDER_API UClass* StaticClass<class ACryptRaiderProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CryptRaider_Source_CryptRaider_CryptRaiderProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
