// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "LocalGovActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLocalGovActor() {}
// Cross Module References
	FINALHUDTEST_API UClass* Z_Construct_UClass_ALocalGovActor_NoRegister();
	FINALHUDTEST_API UClass* Z_Construct_UClass_ALocalGovActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_FinalHUDTest();
// End Cross Module References
	void ALocalGovActor::StaticRegisterNativesALocalGovActor()
	{
	}
	UClass* Z_Construct_UClass_ALocalGovActor_NoRegister()
	{
		return ALocalGovActor::StaticClass();
	}
	UClass* Z_Construct_UClass_ALocalGovActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AActor,
				(UObject* (*)())Z_Construct_UPackage__Script_FinalHUDTest,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "LocalGovActor.h" },
				{ "ModuleRelativePath", "LocalGovActor.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ALocalGovActor>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ALocalGovActor::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
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
	IMPLEMENT_CLASS(ALocalGovActor, 14427542);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALocalGovActor(Z_Construct_UClass_ALocalGovActor, &ALocalGovActor::StaticClass, TEXT("/Script/FinalHUDTest"), TEXT("ALocalGovActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALocalGovActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
