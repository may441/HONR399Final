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
	FINALHUDTEST_API UClass* Z_Construct_UClass_AHeadsUpDisplay_NoRegister();
	FINALHUDTEST_API UFunction* Z_Construct_UFunction_ALocalGovActor_localGovSendTagUpdate();
	FINALHUDTEST_API UFunction* Z_Construct_UFunction_ALocalGovActor_printCurrentActions();
	FINALHUDTEST_API UFunction* Z_Construct_UFunction_ALocalGovActor_updateLocalGovPriorities();
// End Cross Module References
	void ALocalGovActor::StaticRegisterNativesALocalGovActor()
	{
		UClass* Class = ALocalGovActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "localGovSendBlockingInfo", (Native)&ALocalGovActor::execlocalGovSendBlockingInfo },
			{ "localGovSendTagUpdate", (Native)&ALocalGovActor::execlocalGovSendTagUpdate },
			{ "printCurrentActions", (Native)&ALocalGovActor::execprintCurrentActions },
			{ "updateLocalGovPriorities", (Native)&ALocalGovActor::execupdateLocalGovPriorities },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_ALocalGovActor_localGovSendBlockingInfo()
	{
		struct LocalGovActor_eventlocalGovSendBlockingInfo_Parms
		{
			AHeadsUpDisplay* PlayerController;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerController = { UE4CodeGen_Private::EPropertyClass::Object, "PlayerController", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(LocalGovActor_eventlocalGovSendBlockingInfo_Parms, PlayerController), Z_Construct_UClass_AHeadsUpDisplay_NoRegister, METADATA_PARAMS(nullptr, 0) };
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
			AHeadsUpDisplay* PlayerController;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerController = { UE4CodeGen_Private::EPropertyClass::Object, "PlayerController", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(LocalGovActor_eventlocalGovSendTagUpdate_Parms, PlayerController), Z_Construct_UClass_AHeadsUpDisplay_NoRegister, METADATA_PARAMS(nullptr, 0) };
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
	UFunction* Z_Construct_UFunction_ALocalGovActor_printCurrentActions()
	{
		struct LocalGovActor_eventprintCurrentActions_Parms
		{
			AHeadsUpDisplay* PlayerController;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerController = { UE4CodeGen_Private::EPropertyClass::Object, "PlayerController", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(LocalGovActor_eventprintCurrentActions_Parms, PlayerController), Z_Construct_UClass_AHeadsUpDisplay_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PlayerController,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Local Government Actions" },
				{ "ModuleRelativePath", "LocalGovActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_ALocalGovActor, "printCurrentActions", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(LocalGovActor_eventprintCurrentActions_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_ALocalGovActor_updateLocalGovPriorities()
	{
		struct LocalGovActor_eventupdateLocalGovPriorities_Parms
		{
			AHeadsUpDisplay* PlayerController;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerController = { UE4CodeGen_Private::EPropertyClass::Object, "PlayerController", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(LocalGovActor_eventupdateLocalGovPriorities_Parms, PlayerController), Z_Construct_UClass_AHeadsUpDisplay_NoRegister, METADATA_PARAMS(nullptr, 0) };
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
				{ &Z_Construct_UFunction_ALocalGovActor_localGovSendBlockingInfo, "localGovSendBlockingInfo" }, // 3060830071
				{ &Z_Construct_UFunction_ALocalGovActor_localGovSendTagUpdate, "localGovSendTagUpdate" }, // 2841089403
				{ &Z_Construct_UFunction_ALocalGovActor_printCurrentActions, "printCurrentActions" }, // 2102131444
				{ &Z_Construct_UFunction_ALocalGovActor_updateLocalGovPriorities, "updateLocalGovPriorities" }, // 2260524907
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "LocalGovActor.h" },
				{ "ModuleRelativePath", "LocalGovActor.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_aidRequested_MetaData[] = {
				{ "Category", "TownDebug" },
				{ "ModuleRelativePath", "LocalGovActor.h" },
			};
#endif
			auto NewProp_aidRequested_SetBit = [](void* Obj){ ((ALocalGovActor*)Obj)->aidRequested = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_aidRequested = { UE4CodeGen_Private::EPropertyClass::Bool, "aidRequested", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ALocalGovActor), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_aidRequested_SetBit)>::SetBit, METADATA_PARAMS(NewProp_aidRequested_MetaData, ARRAY_COUNT(NewProp_aidRequested_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_roadContractorsHired_MetaData[] = {
				{ "Category", "TownDebug" },
				{ "ModuleRelativePath", "LocalGovActor.h" },
			};
#endif
			auto NewProp_roadContractorsHired_SetBit = [](void* Obj){ ((ALocalGovActor*)Obj)->roadContractorsHired = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_roadContractorsHired = { UE4CodeGen_Private::EPropertyClass::Bool, "roadContractorsHired", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ALocalGovActor), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_roadContractorsHired_SetBit)>::SetBit, METADATA_PARAMS(NewProp_roadContractorsHired_MetaData, ARRAY_COUNT(NewProp_roadContractorsHired_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_parksFixed_MetaData[] = {
				{ "Category", "TownDebug" },
				{ "ModuleRelativePath", "LocalGovActor.h" },
			};
#endif
			auto NewProp_parksFixed_SetBit = [](void* Obj){ ((ALocalGovActor*)Obj)->parksFixed = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_parksFixed = { UE4CodeGen_Private::EPropertyClass::Bool, "parksFixed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ALocalGovActor), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_parksFixed_SetBit)>::SetBit, METADATA_PARAMS(NewProp_parksFixed_MetaData, ARRAY_COUNT(NewProp_parksFixed_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_farmlandFinished_MetaData[] = {
				{ "Category", "TownDebug" },
				{ "ModuleRelativePath", "LocalGovActor.h" },
			};
#endif
			auto NewProp_farmlandFinished_SetBit = [](void* Obj){ ((ALocalGovActor*)Obj)->farmlandFinished = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_farmlandFinished = { UE4CodeGen_Private::EPropertyClass::Bool, "farmlandFinished", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ALocalGovActor), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_farmlandFinished_SetBit)>::SetBit, METADATA_PARAMS(NewProp_farmlandFinished_MetaData, ARRAY_COUNT(NewProp_farmlandFinished_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_enviroReady_MetaData[] = {
				{ "Category", "TownDebug" },
				{ "ModuleRelativePath", "LocalGovActor.h" },
			};
#endif
			auto NewProp_enviroReady_SetBit = [](void* Obj){ ((ALocalGovActor*)Obj)->enviroReady = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_enviroReady = { UE4CodeGen_Private::EPropertyClass::Bool, "enviroReady", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ALocalGovActor), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_enviroReady_SetBit)>::SetBit, METADATA_PARAMS(NewProp_enviroReady_MetaData, ARRAY_COUNT(NewProp_enviroReady_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_plantFixed_MetaData[] = {
				{ "Category", "TownDebug" },
				{ "ModuleRelativePath", "LocalGovActor.h" },
			};
#endif
			auto NewProp_plantFixed_SetBit = [](void* Obj){ ((ALocalGovActor*)Obj)->plantFixed = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_plantFixed = { UE4CodeGen_Private::EPropertyClass::Bool, "plantFixed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ALocalGovActor), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_plantFixed_SetBit)>::SetBit, METADATA_PARAMS(NewProp_plantFixed_MetaData, ARRAY_COUNT(NewProp_plantFixed_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ngosCoordinated_MetaData[] = {
				{ "Category", "TownDebug" },
				{ "ModuleRelativePath", "LocalGovActor.h" },
			};
#endif
			auto NewProp_ngosCoordinated_SetBit = [](void* Obj){ ((ALocalGovActor*)Obj)->ngosCoordinated = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ngosCoordinated = { UE4CodeGen_Private::EPropertyClass::Bool, "ngosCoordinated", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ALocalGovActor), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ngosCoordinated_SetBit)>::SetBit, METADATA_PARAMS(NewProp_ngosCoordinated_MetaData, ARRAY_COUNT(NewProp_ngosCoordinated_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_contractorsHired_MetaData[] = {
				{ "Category", "TownDebug" },
				{ "ModuleRelativePath", "LocalGovActor.h" },
			};
#endif
			auto NewProp_contractorsHired_SetBit = [](void* Obj){ ((ALocalGovActor*)Obj)->contractorsHired = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_contractorsHired = { UE4CodeGen_Private::EPropertyClass::Bool, "contractorsHired", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ALocalGovActor), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_contractorsHired_SetBit)>::SetBit, METADATA_PARAMS(NewProp_contractorsHired_MetaData, ARRAY_COUNT(NewProp_contractorsHired_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_stateAssistanceRequested_MetaData[] = {
				{ "Category", "TownDebug" },
				{ "ModuleRelativePath", "LocalGovActor.h" },
			};
#endif
			auto NewProp_stateAssistanceRequested_SetBit = [](void* Obj){ ((ALocalGovActor*)Obj)->stateAssistanceRequested = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_stateAssistanceRequested = { UE4CodeGen_Private::EPropertyClass::Bool, "stateAssistanceRequested", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ALocalGovActor), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_stateAssistanceRequested_SetBit)>::SetBit, METADATA_PARAMS(NewProp_stateAssistanceRequested_MetaData, ARRAY_COUNT(NewProp_stateAssistanceRequested_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_generatorsSetUp_MetaData[] = {
				{ "Category", "TownDebug" },
				{ "ModuleRelativePath", "LocalGovActor.h" },
			};
#endif
			auto NewProp_generatorsSetUp_SetBit = [](void* Obj){ ((ALocalGovActor*)Obj)->generatorsSetUp = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_generatorsSetUp = { UE4CodeGen_Private::EPropertyClass::Bool, "generatorsSetUp", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ALocalGovActor), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_generatorsSetUp_SetBit)>::SetBit, METADATA_PARAMS(NewProp_generatorsSetUp_MetaData, ARRAY_COUNT(NewProp_generatorsSetUp_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_hospitalRepaired_MetaData[] = {
				{ "Category", "TownDebug" },
				{ "ModuleRelativePath", "LocalGovActor.h" },
			};
#endif
			auto NewProp_hospitalRepaired_SetBit = [](void* Obj){ ((ALocalGovActor*)Obj)->hospitalRepaired = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_hospitalRepaired = { UE4CodeGen_Private::EPropertyClass::Bool, "hospitalRepaired", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ALocalGovActor), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_hospitalRepaired_SetBit)>::SetBit, METADATA_PARAMS(NewProp_hospitalRepaired_MetaData, ARRAY_COUNT(NewProp_hospitalRepaired_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ersMobilized_MetaData[] = {
				{ "Category", "TownDebug" },
				{ "ModuleRelativePath", "LocalGovActor.h" },
			};
#endif
			auto NewProp_ersMobilized_SetBit = [](void* Obj){ ((ALocalGovActor*)Obj)->ersMobilized = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ersMobilized = { UE4CodeGen_Private::EPropertyClass::Bool, "ersMobilized", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ALocalGovActor), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ersMobilized_SetBit)>::SetBit, METADATA_PARAMS(NewProp_ersMobilized_MetaData, ARRAY_COUNT(NewProp_ersMobilized_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_soeDeclared_MetaData[] = {
				{ "Category", "TownDebug" },
				{ "ModuleRelativePath", "LocalGovActor.h" },
			};
#endif
			auto NewProp_soeDeclared_SetBit = [](void* Obj){ ((ALocalGovActor*)Obj)->soeDeclared = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_soeDeclared = { UE4CodeGen_Private::EPropertyClass::Bool, "soeDeclared", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ALocalGovActor), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_soeDeclared_SetBit)>::SetBit, METADATA_PARAMS(NewProp_soeDeclared_MetaData, ARRAY_COUNT(NewProp_soeDeclared_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_disasterAssessed_MetaData[] = {
				{ "Category", "TownDebug" },
				{ "ModuleRelativePath", "LocalGovActor.h" },
			};
#endif
			auto NewProp_disasterAssessed_SetBit = [](void* Obj){ ((ALocalGovActor*)Obj)->disasterAssessed = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_disasterAssessed = { UE4CodeGen_Private::EPropertyClass::Bool, "disasterAssessed", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ALocalGovActor), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_disasterAssessed_SetBit)>::SetBit, METADATA_PARAMS(NewProp_disasterAssessed_MetaData, ARRAY_COUNT(NewProp_disasterAssessed_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_infrastructureTurnsRemaining_MetaData[] = {
				{ "Category", "TownDebug" },
				{ "ModuleRelativePath", "LocalGovActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_infrastructureTurnsRemaining = { UE4CodeGen_Private::EPropertyClass::Int, "infrastructureTurnsRemaining", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(ALocalGovActor, infrastructureTurnsRemaining), METADATA_PARAMS(NewProp_infrastructureTurnsRemaining_MetaData, ARRAY_COUNT(NewProp_infrastructureTurnsRemaining_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_environmentTurnsRemaining_MetaData[] = {
				{ "Category", "TownDebug" },
				{ "ModuleRelativePath", "LocalGovActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_environmentTurnsRemaining = { UE4CodeGen_Private::EPropertyClass::Int, "environmentTurnsRemaining", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(ALocalGovActor, environmentTurnsRemaining), METADATA_PARAMS(NewProp_environmentTurnsRemaining_MetaData, ARRAY_COUNT(NewProp_environmentTurnsRemaining_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_foodWaterTurnsRemaining_MetaData[] = {
				{ "Category", "TownDebug" },
				{ "ModuleRelativePath", "LocalGovActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_foodWaterTurnsRemaining = { UE4CodeGen_Private::EPropertyClass::Int, "foodWaterTurnsRemaining", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(ALocalGovActor, foodWaterTurnsRemaining), METADATA_PARAMS(NewProp_foodWaterTurnsRemaining_MetaData, ARRAY_COUNT(NewProp_foodWaterTurnsRemaining_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_energyTurnsRemaining_MetaData[] = {
				{ "Category", "TownDebug" },
				{ "ModuleRelativePath", "LocalGovActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_energyTurnsRemaining = { UE4CodeGen_Private::EPropertyClass::Int, "energyTurnsRemaining", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(ALocalGovActor, energyTurnsRemaining), METADATA_PARAMS(NewProp_energyTurnsRemaining_MetaData, ARRAY_COUNT(NewProp_energyTurnsRemaining_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_peopleTurnsRemaining_MetaData[] = {
				{ "Category", "TownDebug" },
				{ "ModuleRelativePath", "LocalGovActor.h" },
			};
#endif
			static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_peopleTurnsRemaining = { UE4CodeGen_Private::EPropertyClass::Int, "peopleTurnsRemaining", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(ALocalGovActor, peopleTurnsRemaining), METADATA_PARAMS(NewProp_peopleTurnsRemaining_MetaData, ARRAY_COUNT(NewProp_peopleTurnsRemaining_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_aidRequested,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_roadContractorsHired,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_parksFixed,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_farmlandFinished,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_enviroReady,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_plantFixed,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ngosCoordinated,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_contractorsHired,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_stateAssistanceRequested,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_generatorsSetUp,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_hospitalRepaired,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ersMobilized,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_soeDeclared,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_disasterAssessed,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_infrastructureTurnsRemaining,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_environmentTurnsRemaining,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_foodWaterTurnsRemaining,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_energyTurnsRemaining,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_peopleTurnsRemaining,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ALocalGovActor>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ALocalGovActor::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALocalGovActor, 2536177824);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALocalGovActor(Z_Construct_UClass_ALocalGovActor, &ALocalGovActor::StaticClass, TEXT("/Script/FinalHUDTest"), TEXT("ALocalGovActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALocalGovActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
