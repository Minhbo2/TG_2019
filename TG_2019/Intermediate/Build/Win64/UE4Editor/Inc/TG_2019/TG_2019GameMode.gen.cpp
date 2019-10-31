// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TG_2019/TG_2019GameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTG_2019GameMode() {}
// Cross Module References
	TG_2019_API UClass* Z_Construct_UClass_ATG_2019GameMode_NoRegister();
	TG_2019_API UClass* Z_Construct_UClass_ATG_2019GameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_TG_2019();
// End Cross Module References
	void ATG_2019GameMode::StaticRegisterNativesATG_2019GameMode()
	{
	}
	UClass* Z_Construct_UClass_ATG_2019GameMode_NoRegister()
	{
		return ATG_2019GameMode::StaticClass();
	}
	struct Z_Construct_UClass_ATG_2019GameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATG_2019GameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TG_2019,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATG_2019GameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "TG_2019GameMode.h" },
		{ "ModuleRelativePath", "TG_2019GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATG_2019GameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATG_2019GameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATG_2019GameMode_Statics::ClassParams = {
		&ATG_2019GameMode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802A8u,
		METADATA_PARAMS(Z_Construct_UClass_ATG_2019GameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ATG_2019GameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATG_2019GameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATG_2019GameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATG_2019GameMode, 3237072629);
	template<> TG_2019_API UClass* StaticClass<ATG_2019GameMode>()
	{
		return ATG_2019GameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATG_2019GameMode(Z_Construct_UClass_ATG_2019GameMode, &ATG_2019GameMode::StaticClass, TEXT("/Script/TG_2019"), TEXT("ATG_2019GameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATG_2019GameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
