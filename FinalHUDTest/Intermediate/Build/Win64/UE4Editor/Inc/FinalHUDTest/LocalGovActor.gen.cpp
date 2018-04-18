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
	FINALHUDTEST_API UFunction* Z_Construct_UFunction_ALocalGovActor_localGovSendBlockingInfo();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	FINALHUDTEST_API UClass* Z_Construct_UClass_AHUDController_NoRegister();
	FINALHUDTEST_API UFunction* Z_Construct_UFunction_ALocalGovActor_localGovSendTagUpdate();
	FINALHUDTEST_API UFunction* Z_Construct_UFunction_ALocalGovActor_updateLocalGovPriorities();
// End Cross Module References
	void ALocalGovActor::StaticRegisterNativesALocalGovActor()
	{
		UClass* Class = ALocalGovActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "localGovSendBlockingInfo", (Native)&ALocalGovActor::execlocalGovSendBlockingInfo },
			{ "localGovSendTagUpdate", (Native)&ALocalGovActor::execlocalGovSendTagUpdate },
			{ "updateLocalGovPriorities", (Native)&ALocalGovActor::execupdateLocalGovPriorities },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_ALocalGovActor_localGovSendBlockingInfo()
	{
		struct LocalGovActor_eventlocalGovSendBlockingInfo_Parms
		{
			TSubclassOf<AHUDController>  PlayerController;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_PlayerController = { UE4CodeGen_Private::EPropertyClass::Class, "PlayerController", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000000080, 1, nullptr, STRUCT_OFFSET(LocalGovActor_eventlocalGovSendBlockingInfo_Parms, PlayerController), Z_Construct_UClass_AHUDController_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PlayerController,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Local Government Actions" },
				{ "ModuleRelativePath", "LocalGovActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ALocalGovActor, "localGovSendBlockingInfo", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(LocalGovActor_eventlocalGovSendBlockingInfo_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ALocalGovActor_localGovSendTagUpdate()
	{
		struct LocalGovActor_eventlocalGovSendTagUpdate_Parms
		{
			TSubclassOf<AHUDController>  PlayerController;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_PlayerController = { UE4CodeGen_Private::EPropertyClass::Class, "PlayerController", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000000080, 1, nullptr, STRUCT_OFFSET(LocalGovActor_eventlocalGovSendTagUpdate_Parms, PlayerController), Z_Construct_UClass_AHUDController_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PlayerController,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Local Government Actions" },
				{ "ModuleRelativePath", "LocalGovActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ALocalGovActor, "localGovSendTagUpdate", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(LocalGovActor_eventlocalGovSendTagUpdate_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ALocalGovActor_updateLocalGovPriorities()
	{
		struct LocalGovActor_eventupdateLocalGovPriorities_Parms
		{
			TSubclassOf<AHUDController>  PlayerController;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FClassPropertyParams NewProp_PlayerController = { UE4CodeGen_Private::EPropertyClass::Class, "PlayerController", RF_Public|RF_Transient|RF_MarkAsNative, 0x0014000000000080, 1, nullptr, STRUCT_OFFSET(LocalGovActor_eventupdateLocalGovPriorities_Parms, PlayerController), Z_Construct_UClass_AHUDController_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PlayerController,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Local Government Actions" },
				{ "ModuleRelativePath", "LocalGovActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ALocalGovActor, "updateLocalGovPriorities", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(LocalGovActor_eventupdateLocalGovPriorities_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
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
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_ALocalGovActor_localGovSendBlockingInfo, "localGovSendBlockingInfo" }, // 995647628
				{ &Z_Construct_UFunction_ALocalGovActor_localGovSendTagUpdate, "localGovSendTagUpdate" }, // 2745864951
				{ &Z_Construct_UFunction_ALocalGovActor_updateLocalGovPriorities, "updateLocalGovPriorities" }, // 2640048663
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
				FuncInfo, ARRAY_COUNT(FuncInfo),
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
	IMPLEMENT_CLASS(ALocalGovActor, 4129953200);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALocalGovActor(Z_Construct_UClass_ALocalGovActor, &ALocalGovActor::StaticClass, TEXT("/Script/FinalHUDTest"), TEXT("ALocalGovActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALocalGovActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
