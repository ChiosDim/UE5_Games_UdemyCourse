// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CRYPTRAIDER_CryptRaiderCharacter_generated_h
#error "CryptRaiderCharacter.generated.h already included, missing '#pragma once' in CryptRaiderCharacter.h"
#endif
#define CRYPTRAIDER_CryptRaiderCharacter_generated_h

#define FID_CryptRaider_Source_CryptRaider_CryptRaiderCharacter_h_18_DELEGATE \
static inline void FOnUseItem_DelegateWrapper(const FMulticastScriptDelegate& OnUseItem) \
{ \
	OnUseItem.ProcessMulticastDelegate<UObject>(NULL); \
}


#define FID_CryptRaider_Source_CryptRaider_CryptRaiderCharacter_h_23_SPARSE_DATA
#define FID_CryptRaider_Source_CryptRaider_CryptRaiderCharacter_h_23_RPC_WRAPPERS
#define FID_CryptRaider_Source_CryptRaider_CryptRaiderCharacter_h_23_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_CryptRaider_Source_CryptRaider_CryptRaiderCharacter_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACryptRaiderCharacter(); \
	friend struct Z_Construct_UClass_ACryptRaiderCharacter_Statics; \
public: \
	DECLARE_CLASS(ACryptRaiderCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CryptRaider"), NO_API) \
	DECLARE_SERIALIZER(ACryptRaiderCharacter)


#define FID_CryptRaider_Source_CryptRaider_CryptRaiderCharacter_h_23_INCLASS \
private: \
	static void StaticRegisterNativesACryptRaiderCharacter(); \
	friend struct Z_Construct_UClass_ACryptRaiderCharacter_Statics; \
public: \
	DECLARE_CLASS(ACryptRaiderCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CryptRaider"), NO_API) \
	DECLARE_SERIALIZER(ACryptRaiderCharacter)


#define FID_CryptRaider_Source_CryptRaider_CryptRaiderCharacter_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACryptRaiderCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACryptRaiderCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACryptRaiderCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACryptRaiderCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACryptRaiderCharacter(ACryptRaiderCharacter&&); \
	NO_API ACryptRaiderCharacter(const ACryptRaiderCharacter&); \
public:


#define FID_CryptRaider_Source_CryptRaider_CryptRaiderCharacter_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACryptRaiderCharacter(ACryptRaiderCharacter&&); \
	NO_API ACryptRaiderCharacter(const ACryptRaiderCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACryptRaiderCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACryptRaiderCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACryptRaiderCharacter)


#define FID_CryptRaider_Source_CryptRaider_CryptRaiderCharacter_h_20_PROLOG
#define FID_CryptRaider_Source_CryptRaider_CryptRaiderCharacter_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CryptRaider_Source_CryptRaider_CryptRaiderCharacter_h_23_SPARSE_DATA \
	FID_CryptRaider_Source_CryptRaider_CryptRaiderCharacter_h_23_RPC_WRAPPERS \
	FID_CryptRaider_Source_CryptRaider_CryptRaiderCharacter_h_23_INCLASS \
	FID_CryptRaider_Source_CryptRaider_CryptRaiderCharacter_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_CryptRaider_Source_CryptRaider_CryptRaiderCharacter_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_CryptRaider_Source_CryptRaider_CryptRaiderCharacter_h_23_SPARSE_DATA \
	FID_CryptRaider_Source_CryptRaider_CryptRaiderCharacter_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_CryptRaider_Source_CryptRaider_CryptRaiderCharacter_h_23_INCLASS_NO_PURE_DECLS \
	FID_CryptRaider_Source_CryptRaider_CryptRaiderCharacter_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CRYPTRAIDER_API UClass* StaticClass<class ACryptRaiderCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_CryptRaider_Source_CryptRaider_CryptRaiderCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
