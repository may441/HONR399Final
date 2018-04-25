// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "FinalHUDTestGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFinalHUDTestGameModeBase() {}
// Cross Module References
	FINALHUDTEST_API UClass* Z_Construct_UClass_AFinalHUDTestGameModeBase_NoRegister();
	FINALHUDTEST_API UClass* Z_Construct_UClass_AFinalHUDTestGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_FinalHUDTest();
// End Cross Module References
	void AFinalHUDTestGameModeBase::StaticRegisterNativesAFinalHUDTestGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AFinalHUDTestGameModeBase_NoRegister()
	{
		return AFinalHUDTestGameModeBase::StaticClass();
	}
	UClass* Z_Construct_UClass_AFinalHUDTestGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AGameModeBase,
				(UObject* (*)())Z_Construct_UPackage__Script_FinalHUDTest,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "FinalHUDTestGameModeBase.h" },
				{ "ModuleRelativePath", "FinalHUDTestGameModeBase.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AFinalHUDTestGameModeBase>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AFinalHUDTestGameModeBase::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900288u,
				nullptr, 0,
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFinalHUDTestGameModeBase, 1684320534);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFinalHUDTestGameModeBase(Z_Construct_UClass_AFinalHUDTestGameModeBase, &AFinalHUDTestGameModeBase::StaticClass, TEXT("/Script/FinalHUDTest"), TEXT("AFinalHUDTestGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFinalHUDTestGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
