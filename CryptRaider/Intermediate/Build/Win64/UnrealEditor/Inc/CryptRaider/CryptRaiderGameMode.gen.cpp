// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CryptRaider/CryptRaiderGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCryptRaiderGameMode() {}
// Cross Module References
	CRYPTRAIDER_API UClass* Z_Construct_UClass_ACryptRaiderGameMode_NoRegister();
	CRYPTRAIDER_API UClass* Z_Construct_UClass_ACryptRaiderGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_CryptRaider();
// End Cross Module References
	void ACryptRaiderGameMode::StaticRegisterNativesACryptRaiderGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACryptRaiderGameMode);
	UClass* Z_Construct_UClass_ACryptRaiderGameMode_NoRegister()
	{
		return ACryptRaiderGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ACryptRaiderGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACryptRaiderGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CryptRaider,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACryptRaiderGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "CryptRaiderGameMode.h" },
		{ "ModuleRelativePath", "CryptRaiderGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACryptRaiderGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACryptRaiderGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACryptRaiderGameMode_Statics::ClassParams = {
		&ACryptRaiderGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ACryptRaiderGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACryptRaiderGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACryptRaiderGameMode()
	{
		if (!Z_Registration_Info_UClass_ACryptRaiderGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACryptRaiderGameMode.OuterSingleton, Z_Construct_UClass_ACryptRaiderGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACryptRaiderGameMode.OuterSingleton;
	}
	template<> CRYPTRAIDER_API UClass* StaticClass<ACryptRaiderGameMode>()
	{
		return ACryptRaiderGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACryptRaiderGameMode);
	struct Z_CompiledInDeferFile_FID_CryptRaider_Source_CryptRaider_CryptRaiderGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CryptRaider_Source_CryptRaider_CryptRaiderGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACryptRaiderGameMode, ACryptRaiderGameMode::StaticClass, TEXT("ACryptRaiderGameMode"), &Z_Registration_Info_UClass_ACryptRaiderGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACryptRaiderGameMode), 4152671538U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CryptRaider_Source_CryptRaider_CryptRaiderGameMode_h_3822035126(TEXT("/Script/CryptRaider"),
		Z_CompiledInDeferFile_FID_CryptRaider_Source_CryptRaider_CryptRaiderGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CryptRaider_Source_CryptRaider_CryptRaiderGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
