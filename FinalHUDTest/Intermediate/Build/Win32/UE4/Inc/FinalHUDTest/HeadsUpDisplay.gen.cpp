// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "HeadsUpDisplay.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHeadsUpDisplay() {}
// Cross Module References
	FINALHUDTEST_API UClass* Z_Construct_UClass_AHeadsUpDisplay_NoRegister();
	FINALHUDTEST_API UClass* Z_Construct_UClass_AHeadsUpDisplay();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_FinalHUDTest();
	FINALHUDTEST_API UFunction* Z_Construct_UFunction_AHeadsUpDisplay_GetCurrentCashVal();
	FINALHUDTEST_API UFunction* Z_Construct_UFunction_AHeadsUpDisplay_GetCurrentMaterialVal();
	FINALHUDTEST_API UFunction* Z_Construct_UFunction_AHeadsUpDisplay_GetCurrentPowerVal();
	FINALHUDTEST_API UFunction* Z_Construct_UFunction_AHeadsUpDisplay_GetCurrentWorkforceVal();
	FINALHUDTEST_API UFunction* Z_Construct_UFunction_AHeadsUpDisplay_GetEconomyVal();
	FINALHUDTEST_API UFunction* Z_Construct_UFunction_AHeadsUpDisplay_GetHealthSafetyVal();
	FINALHUDTEST_API UFunction* Z_Construct_UFunction_AHeadsUpDisplay_GetMoraleVal();
	FINALHUDTEST_API UFunction* Z_Construct_UFunction_AHeadsUpDisplay_GetPopulationVal();
	FINALHUDTEST_API UFunction* Z_Construct_UFunction_AHeadsUpDisplay_GetProjectedCashVal();
	FINALHUDTEST_API UFunction* Z_Construct_UFunction_AHeadsUpDisplay_GetProjectedMaterialVal();
	FINALHUDTEST_API UFunction* Z_Construct_UFunction_AHeadsUpDisplay_GetProjectedPowerVal();
	FINALHUDTEST_API UFunction* Z_Construct_UFunction_AHeadsUpDisplay_GetProjectedWorkforceVal();
	FINALHUDTEST_API UFunction* Z_Construct_UFunction_AHeadsUpDisplay_GetRoadsVal();
	FINALHUDTEST_API UFunction* Z_Construct_UFunction_AHeadsUpDisplay_GetTaskIDStatus();
	FINALHUDTEST_API UFunction* Z_Construct_UFunction_AHeadsUpDisplay_SetTaskActivity();
	FINALHUDTEST_API UFunction* Z_Construct_UFunction_AHeadsUpDisplay_UpdateCurrentVals();
	FINALHUDTEST_API UClass* Z_Construct_UClass_ALocalGovActor_NoRegister();
	FINALHUDTEST_API UFunction* Z_Construct_UFunction_AHeadsUpDisplay_UpdateProjectedValues();
// End Cross Module References
	void AHeadsUpDisplay::StaticRegisterNativesAHeadsUpDisplay()
	{
		UClass* Class = AHeadsUpDisplay::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCurrentCashVal", (Native)&AHeadsUpDisplay::execGetCurrentCashVal },
			{ "GetCurrentMaterialVal", (Native)&AHeadsUpDisplay::execGetCurrentMaterialVal },
			{ "GetCurrentPowerVal", (Native)&AHeadsUpDisplay::execGetCurrentPowerVal },
			{ "GetCurrentWorkforceVal", (Native)&AHeadsUpDisplay::execGetCurrentWorkforceVal },
			{ "GetEconomyVal", (Native)&AHeadsUpDisplay::execGetEconomyVal },
			{ "GetHealthSafetyVal", (Native)&AHeadsUpDisplay::execGetHealthSafetyVal },
			{ "GetMoraleVal", (Native)&AHeadsUpDisplay::execGetMoraleVal },
			{ "GetPopulationVal", (Native)&AHeadsUpDisplay::execGetPopulationVal },
			{ "GetProjectedCashVal", (Native)&AHeadsUpDisplay::execGetProjectedCashVal },
			{ "GetProjectedMaterialVal", (Native)&AHeadsUpDisplay::execGetProjectedMaterialVal },
			{ "GetProjectedPowerVal", (Native)&AHeadsUpDisplay::execGetProjectedPowerVal },
			{ "GetProjectedWorkforceVal", (Native)&AHeadsUpDisplay::execGetProjectedWorkforceVal },
			{ "GetRoadsVal", (Native)&AHeadsUpDisplay::execGetRoadsVal },
			{ "GetTaskIDStatus", (Native)&AHeadsUpDisplay::execGetTaskIDStatus },
			{ "SetTaskActivity", (Native)&AHeadsUpDisplay::execSetTaskActivity },
			{ "UpdateCurrentVals", (Native)&AHeadsUpDisplay::execUpdateCurrentVals },
			{ "UpdateProjectedValues", (Native)&AHeadsUpDisplay::execUpdateProjectedValues },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_AHeadsUpDisplay_GetCurrentCashVal()
	{
		struct HeadsUpDisplay_eventGetCurrentCashVal_Parms
		{
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(HeadsUpDisplay_eventGetCurrentCashVal_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Game State Access" },
				{ "ModuleRelativePath", "HeadsUpDisplay.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AHeadsUpDisplay, "GetCurrentCashVal", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(HeadsUpDisplay_eventGetCurrentCashVal_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AHeadsUpDisplay_GetCurrentMaterialVal()
	{
		struct HeadsUpDisplay_eventGetCurrentMaterialVal_Parms
		{
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(HeadsUpDisplay_eventGetCurrentMaterialVal_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Game State Access" },
				{ "ModuleRelativePath", "HeadsUpDisplay.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AHeadsUpDisplay, "GetCurrentMaterialVal", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(HeadsUpDisplay_eventGetCurrentMaterialVal_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AHeadsUpDisplay_GetCurrentPowerVal()
	{
		struct HeadsUpDisplay_eventGetCurrentPowerVal_Parms
		{
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(HeadsUpDisplay_eventGetCurrentPowerVal_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Game State Access" },
				{ "ModuleRelativePath", "HeadsUpDisplay.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AHeadsUpDisplay, "GetCurrentPowerVal", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(HeadsUpDisplay_eventGetCurrentPowerVal_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AHeadsUpDisplay_GetCurrentWorkforceVal()
	{
		struct HeadsUpDisplay_eventGetCurrentWorkforceVal_Parms
		{
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(HeadsUpDisplay_eventGetCurrentWorkforceVal_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Game State Access" },
				{ "ModuleRelativePath", "HeadsUpDisplay.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AHeadsUpDisplay, "GetCurrentWorkforceVal", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(HeadsUpDisplay_eventGetCurrentWorkforceVal_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AHeadsUpDisplay_GetEconomyVal()
	{
		struct HeadsUpDisplay_eventGetEconomyVal_Parms
		{
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(HeadsUpDisplay_eventGetEconomyVal_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Game State Access" },
				{ "ModuleRelativePath", "HeadsUpDisplay.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AHeadsUpDisplay, "GetEconomyVal", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(HeadsUpDisplay_eventGetEconomyVal_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AHeadsUpDisplay_GetHealthSafetyVal()
	{
		struct HeadsUpDisplay_eventGetHealthSafetyVal_Parms
		{
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(HeadsUpDisplay_eventGetHealthSafetyVal_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Game State Access" },
				{ "ModuleRelativePath", "HeadsUpDisplay.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AHeadsUpDisplay, "GetHealthSafetyVal", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(HeadsUpDisplay_eventGetHealthSafetyVal_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AHeadsUpDisplay_GetMoraleVal()
	{
		struct HeadsUpDisplay_eventGetMoraleVal_Parms
		{
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(HeadsUpDisplay_eventGetMoraleVal_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Game State Access" },
				{ "ModuleRelativePath", "HeadsUpDisplay.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AHeadsUpDisplay, "GetMoraleVal", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(HeadsUpDisplay_eventGetMoraleVal_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AHeadsUpDisplay_GetPopulationVal()
	{
		struct HeadsUpDisplay_eventGetPopulationVal_Parms
		{
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(HeadsUpDisplay_eventGetPopulationVal_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Game State Access" },
				{ "ModuleRelativePath", "HeadsUpDisplay.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AHeadsUpDisplay, "GetPopulationVal", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(HeadsUpDisplay_eventGetPopulationVal_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AHeadsUpDisplay_GetProjectedCashVal()
	{
		struct HeadsUpDisplay_eventGetProjectedCashVal_Parms
		{
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(HeadsUpDisplay_eventGetProjectedCashVal_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Game State Access" },
				{ "ModuleRelativePath", "HeadsUpDisplay.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AHeadsUpDisplay, "GetProjectedCashVal", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(HeadsUpDisplay_eventGetProjectedCashVal_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AHeadsUpDisplay_GetProjectedMaterialVal()
	{
		struct HeadsUpDisplay_eventGetProjectedMaterialVal_Parms
		{
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(HeadsUpDisplay_eventGetProjectedMaterialVal_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Game State Access" },
				{ "ModuleRelativePath", "HeadsUpDisplay.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AHeadsUpDisplay, "GetProjectedMaterialVal", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(HeadsUpDisplay_eventGetProjectedMaterialVal_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AHeadsUpDisplay_GetProjectedPowerVal()
	{
		struct HeadsUpDisplay_eventGetProjectedPowerVal_Parms
		{
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(HeadsUpDisplay_eventGetProjectedPowerVal_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Game State Access" },
				{ "ModuleRelativePath", "HeadsUpDisplay.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AHeadsUpDisplay, "GetProjectedPowerVal", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(HeadsUpDisplay_eventGetProjectedPowerVal_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AHeadsUpDisplay_GetProjectedWorkforceVal()
	{
		struct HeadsUpDisplay_eventGetProjectedWorkforceVal_Parms
		{
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(HeadsUpDisplay_eventGetProjectedWorkforceVal_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Game State Access" },
				{ "ModuleRelativePath", "HeadsUpDisplay.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AHeadsUpDisplay, "GetProjectedWorkforceVal", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(HeadsUpDisplay_eventGetProjectedWorkforceVal_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AHeadsUpDisplay_GetRoadsVal()
	{
		struct HeadsUpDisplay_eventGetRoadsVal_Parms
		{
			float ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, STRUCT_OFFSET(HeadsUpDisplay_eventGetRoadsVal_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Game State Access" },
				{ "ModuleRelativePath", "HeadsUpDisplay.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AHeadsUpDisplay, "GetRoadsVal", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(HeadsUpDisplay_eventGetRoadsVal_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AHeadsUpDisplay_GetTaskIDStatus()
	{
		struct HeadsUpDisplay_eventGetTaskIDStatus_Parms
		{
			int32 taskID;
			bool ReturnValue;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_ReturnValue_SetBit = [](void* Obj){ ((HeadsUpDisplay_eventGetTaskIDStatus_Parms*)Obj)->ReturnValue = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(HeadsUpDisplay_eventGetTaskIDStatus_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_ReturnValue_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_taskID = { UE4CodeGen_Private::EPropertyClass::Int, "taskID", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HeadsUpDisplay_eventGetTaskIDStatus_Parms, taskID), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ReturnValue,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_taskID,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Game State Access" },
				{ "ModuleRelativePath", "HeadsUpDisplay.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AHeadsUpDisplay, "GetTaskIDStatus", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14020401, sizeof(HeadsUpDisplay_eventGetTaskIDStatus_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AHeadsUpDisplay_SetTaskActivity()
	{
		struct HeadsUpDisplay_eventSetTaskActivity_Parms
		{
			int32 activityID;
			bool enable;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			auto NewProp_enable_SetBit = [](void* Obj){ ((HeadsUpDisplay_eventSetTaskActivity_Parms*)Obj)->enable = 1; };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_enable = { UE4CodeGen_Private::EPropertyClass::Bool, "enable", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(HeadsUpDisplay_eventSetTaskActivity_Parms), &UE4CodeGen_Private::TBoolSetBitWrapper<decltype(NewProp_enable_SetBit)>::SetBit, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_activityID = { UE4CodeGen_Private::EPropertyClass::Int, "activityID", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HeadsUpDisplay_eventSetTaskActivity_Parms, activityID), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_enable,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_activityID,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Game State Access" },
				{ "ModuleRelativePath", "HeadsUpDisplay.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AHeadsUpDisplay, "SetTaskActivity", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(HeadsUpDisplay_eventSetTaskActivity_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AHeadsUpDisplay_UpdateCurrentVals()
	{
		struct HeadsUpDisplay_eventUpdateCurrentVals_Parms
		{
			ALocalGovActor* localGovActions;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_localGovActions = { UE4CodeGen_Private::EPropertyClass::Object, "localGovActions", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(HeadsUpDisplay_eventUpdateCurrentVals_Parms, localGovActions), Z_Construct_UClass_ALocalGovActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_localGovActions,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Game State Access" },
				{ "ModuleRelativePath", "HeadsUpDisplay.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AHeadsUpDisplay, "UpdateCurrentVals", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(HeadsUpDisplay_eventUpdateCurrentVals_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AHeadsUpDisplay_UpdateProjectedValues()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "Category", "Game State Access" },
				{ "ModuleRelativePath", "HeadsUpDisplay.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AHeadsUpDisplay, "UpdateProjectedValues", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AHeadsUpDisplay_NoRegister()
	{
		return AHeadsUpDisplay::StaticClass();
	}
	UClass* Z_Construct_UClass_AHeadsUpDisplay()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_APawn,
				(UObject* (*)())Z_Construct_UPackage__Script_FinalHUDTest,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_AHeadsUpDisplay_GetCurrentCashVal, "GetCurrentCashVal" }, // 3597042369
				{ &Z_Construct_UFunction_AHeadsUpDisplay_GetCurrentMaterialVal, "GetCurrentMaterialVal" }, // 3949681773
				{ &Z_Construct_UFunction_AHeadsUpDisplay_GetCurrentPowerVal, "GetCurrentPowerVal" }, // 1021705637
				{ &Z_Construct_UFunction_AHeadsUpDisplay_GetCurrentWorkforceVal, "GetCurrentWorkforceVal" }, // 2504279909
				{ &Z_Construct_UFunction_AHeadsUpDisplay_GetEconomyVal, "GetEconomyVal" }, // 569727298
				{ &Z_Construct_UFunction_AHeadsUpDisplay_GetHealthSafetyVal, "GetHealthSafetyVal" }, // 4056195450
				{ &Z_Construct_UFunction_AHeadsUpDisplay_GetMoraleVal, "GetMoraleVal" }, // 2522576249
				{ &Z_Construct_UFunction_AHeadsUpDisplay_GetPopulationVal, "GetPopulationVal" }, // 1681457619
				{ &Z_Construct_UFunction_AHeadsUpDisplay_GetProjectedCashVal, "GetProjectedCashVal" }, // 2199091869
				{ &Z_Construct_UFunction_AHeadsUpDisplay_GetProjectedMaterialVal, "GetProjectedMaterialVal" }, // 1239620510
				{ &Z_Construct_UFunction_AHeadsUpDisplay_GetProjectedPowerVal, "GetProjectedPowerVal" }, // 3405179112
				{ &Z_Construct_UFunction_AHeadsUpDisplay_GetProjectedWorkforceVal, "GetProjectedWorkforceVal" }, // 4257607903
				{ &Z_Construct_UFunction_AHeadsUpDisplay_GetRoadsVal, "GetRoadsVal" }, // 694943574
				{ &Z_Construct_UFunction_AHeadsUpDisplay_GetTaskIDStatus, "GetTaskIDStatus" }, // 1086480555
				{ &Z_Construct_UFunction_AHeadsUpDisplay_SetTaskActivity, "SetTaskActivity" }, // 4134828790
				{ &Z_Construct_UFunction_AHeadsUpDisplay_UpdateCurrentVals, "UpdateCurrentVals" }, // 3627489439
				{ &Z_Construct_UFunction_AHeadsUpDisplay_UpdateProjectedValues, "UpdateProjectedValues" }, // 1907302415
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Navigation" },
				{ "IncludePath", "HeadsUpDisplay.h" },
				{ "ModuleRelativePath", "HeadsUpDisplay.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InfCheck_MetaData[] = {
				{ "Category", "CheckInf" },
				{ "ModuleRelativePath", "HeadsUpDisplay.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InfCheck = { UE4CodeGen_Private::EPropertyClass::Array, "InfCheck", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AHeadsUpDisplay, InfCheck), METADATA_PARAMS(NewProp_InfCheck_MetaData, ARRAY_COUNT(NewProp_InfCheck_MetaData)) };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InfCheck_Inner = { UE4CodeGen_Private::EPropertyClass::Bool, "InfCheck", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnvCheck_MetaData[] = {
				{ "Category", "CheckEnv" },
				{ "ModuleRelativePath", "HeadsUpDisplay.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EnvCheck = { UE4CodeGen_Private::EPropertyClass::Array, "EnvCheck", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AHeadsUpDisplay, EnvCheck), METADATA_PARAMS(NewProp_EnvCheck_MetaData, ARRAY_COUNT(NewProp_EnvCheck_MetaData)) };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_EnvCheck_Inner = { UE4CodeGen_Private::EPropertyClass::Bool, "EnvCheck", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FWCheck_MetaData[] = {
				{ "Category", "CheckFW" },
				{ "ModuleRelativePath", "HeadsUpDisplay.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FWCheck = { UE4CodeGen_Private::EPropertyClass::Array, "FWCheck", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AHeadsUpDisplay, FWCheck), METADATA_PARAMS(NewProp_FWCheck_MetaData, ARRAY_COUNT(NewProp_FWCheck_MetaData)) };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_FWCheck_Inner = { UE4CodeGen_Private::EPropertyClass::Bool, "FWCheck", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnergyCheck_MetaData[] = {
				{ "Category", "CheckEnergy" },
				{ "ModuleRelativePath", "HeadsUpDisplay.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EnergyCheck = { UE4CodeGen_Private::EPropertyClass::Array, "EnergyCheck", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AHeadsUpDisplay, EnergyCheck), METADATA_PARAMS(NewProp_EnergyCheck_MetaData, ARRAY_COUNT(NewProp_EnergyCheck_MetaData)) };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_EnergyCheck_Inner = { UE4CodeGen_Private::EPropertyClass::Bool, "EnergyCheck", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PeopleCheck_MetaData[] = {
				{ "Category", "CheckPeople" },
				{ "ModuleRelativePath", "HeadsUpDisplay.h" },
			};
#endif
			static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PeopleCheck = { UE4CodeGen_Private::EPropertyClass::Array, "PeopleCheck", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AHeadsUpDisplay, PeopleCheck), METADATA_PARAMS(NewProp_PeopleCheck_MetaData, ARRAY_COUNT(NewProp_PeopleCheck_MetaData)) };
			static const UE4CodeGen_Private::FBoolPropertyParams NewProp_PeopleCheck_Inner = { UE4CodeGen_Private::EPropertyClass::Bool, "PeopleCheck", RF_Public|RF_Transient|RF_MarkAsNative, 0x0000000000000000, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentHealthSafetyVal_MetaData[] = {
				{ "Category", "TagVal" },
				{ "ModuleRelativePath", "HeadsUpDisplay.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentHealthSafetyVal = { UE4CodeGen_Private::EPropertyClass::Float, "CurrentHealthSafetyVal", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AHeadsUpDisplay, CurrentHealthSafetyVal), METADATA_PARAMS(NewProp_CurrentHealthSafetyVal_MetaData, ARRAY_COUNT(NewProp_CurrentHealthSafetyVal_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentEconomyVal_MetaData[] = {
				{ "Category", "TagVal" },
				{ "ModuleRelativePath", "HeadsUpDisplay.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentEconomyVal = { UE4CodeGen_Private::EPropertyClass::Float, "CurrentEconomyVal", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AHeadsUpDisplay, CurrentEconomyVal), METADATA_PARAMS(NewProp_CurrentEconomyVal_MetaData, ARRAY_COUNT(NewProp_CurrentEconomyVal_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentPopulationVal_MetaData[] = {
				{ "Category", "TagVal" },
				{ "ModuleRelativePath", "HeadsUpDisplay.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentPopulationVal = { UE4CodeGen_Private::EPropertyClass::Float, "CurrentPopulationVal", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AHeadsUpDisplay, CurrentPopulationVal), METADATA_PARAMS(NewProp_CurrentPopulationVal_MetaData, ARRAY_COUNT(NewProp_CurrentPopulationVal_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentRoadVal_MetaData[] = {
				{ "Category", "TagVal" },
				{ "ModuleRelativePath", "HeadsUpDisplay.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentRoadVal = { UE4CodeGen_Private::EPropertyClass::Float, "CurrentRoadVal", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AHeadsUpDisplay, CurrentRoadVal), METADATA_PARAMS(NewProp_CurrentRoadVal_MetaData, ARRAY_COUNT(NewProp_CurrentRoadVal_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentMoraleVal_MetaData[] = {
				{ "Category", "TagVal" },
				{ "ModuleRelativePath", "HeadsUpDisplay.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentMoraleVal = { UE4CodeGen_Private::EPropertyClass::Float, "CurrentMoraleVal", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AHeadsUpDisplay, CurrentMoraleVal), METADATA_PARAMS(NewProp_CurrentMoraleVal_MetaData, ARRAY_COUNT(NewProp_CurrentMoraleVal_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjHealthSafetyVal_MetaData[] = {
				{ "Category", "TagVal" },
				{ "ModuleRelativePath", "HeadsUpDisplay.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ProjHealthSafetyVal = { UE4CodeGen_Private::EPropertyClass::Float, "ProjHealthSafetyVal", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AHeadsUpDisplay, ProjHealthSafetyVal), METADATA_PARAMS(NewProp_ProjHealthSafetyVal_MetaData, ARRAY_COUNT(NewProp_ProjHealthSafetyVal_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjEconomyVal_MetaData[] = {
				{ "Category", "TagVal" },
				{ "ModuleRelativePath", "HeadsUpDisplay.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ProjEconomyVal = { UE4CodeGen_Private::EPropertyClass::Float, "ProjEconomyVal", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AHeadsUpDisplay, ProjEconomyVal), METADATA_PARAMS(NewProp_ProjEconomyVal_MetaData, ARRAY_COUNT(NewProp_ProjEconomyVal_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjPopulationVal_MetaData[] = {
				{ "Category", "TagVal" },
				{ "ModuleRelativePath", "HeadsUpDisplay.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ProjPopulationVal = { UE4CodeGen_Private::EPropertyClass::Float, "ProjPopulationVal", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AHeadsUpDisplay, ProjPopulationVal), METADATA_PARAMS(NewProp_ProjPopulationVal_MetaData, ARRAY_COUNT(NewProp_ProjPopulationVal_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjRoadVal_MetaData[] = {
				{ "Category", "TagVal" },
				{ "ModuleRelativePath", "HeadsUpDisplay.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ProjRoadVal = { UE4CodeGen_Private::EPropertyClass::Float, "ProjRoadVal", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AHeadsUpDisplay, ProjRoadVal), METADATA_PARAMS(NewProp_ProjRoadVal_MetaData, ARRAY_COUNT(NewProp_ProjRoadVal_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjMoraleVal_MetaData[] = {
				{ "Category", "TagVal" },
				{ "ModuleRelativePath", "HeadsUpDisplay.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ProjMoraleVal = { UE4CodeGen_Private::EPropertyClass::Float, "ProjMoraleVal", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AHeadsUpDisplay, ProjMoraleVal), METADATA_PARAMS(NewProp_ProjMoraleVal_MetaData, ARRAY_COUNT(NewProp_ProjMoraleVal_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialGainPenalty_MetaData[] = {
				{ "Category", "CurrentMoney" },
				{ "ModuleRelativePath", "HeadsUpDisplay.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaterialGainPenalty = { UE4CodeGen_Private::EPropertyClass::Float, "MaterialGainPenalty", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AHeadsUpDisplay, MaterialGainPenalty), METADATA_PARAMS(NewProp_MaterialGainPenalty_MetaData, ARRAY_COUNT(NewProp_MaterialGainPenalty_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PowerGainPenalty_MetaData[] = {
				{ "Category", "CurrentPower" },
				{ "ModuleRelativePath", "HeadsUpDisplay.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PowerGainPenalty = { UE4CodeGen_Private::EPropertyClass::Float, "PowerGainPenalty", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AHeadsUpDisplay, PowerGainPenalty), METADATA_PARAMS(NewProp_PowerGainPenalty_MetaData, ARRAY_COUNT(NewProp_PowerGainPenalty_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorkforceGainPenalty_MetaData[] = {
				{ "Category", "CurrentPeople" },
				{ "ModuleRelativePath", "HeadsUpDisplay.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WorkforceGainPenalty = { UE4CodeGen_Private::EPropertyClass::Float, "WorkforceGainPenalty", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AHeadsUpDisplay, WorkforceGainPenalty), METADATA_PARAMS(NewProp_WorkforceGainPenalty_MetaData, ARRAY_COUNT(NewProp_WorkforceGainPenalty_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CashGainPenalty_MetaData[] = {
				{ "Category", "CurrentCash" },
				{ "ModuleRelativePath", "HeadsUpDisplay.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CashGainPenalty = { UE4CodeGen_Private::EPropertyClass::Float, "CashGainPenalty", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AHeadsUpDisplay, CashGainPenalty), METADATA_PARAMS(NewProp_CashGainPenalty_MetaData, ARRAY_COUNT(NewProp_CashGainPenalty_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialEffectivenessPenalty_MetaData[] = {
				{ "Category", "CurrentMoney" },
				{ "ModuleRelativePath", "HeadsUpDisplay.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaterialEffectivenessPenalty = { UE4CodeGen_Private::EPropertyClass::Float, "MaterialEffectivenessPenalty", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AHeadsUpDisplay, MaterialEffectivenessPenalty), METADATA_PARAMS(NewProp_MaterialEffectivenessPenalty_MetaData, ARRAY_COUNT(NewProp_MaterialEffectivenessPenalty_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PowerEffectivenessPenalty_MetaData[] = {
				{ "Category", "CurrentPower" },
				{ "ModuleRelativePath", "HeadsUpDisplay.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PowerEffectivenessPenalty = { UE4CodeGen_Private::EPropertyClass::Float, "PowerEffectivenessPenalty", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AHeadsUpDisplay, PowerEffectivenessPenalty), METADATA_PARAMS(NewProp_PowerEffectivenessPenalty_MetaData, ARRAY_COUNT(NewProp_PowerEffectivenessPenalty_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorkforceEffectivenessPenalty_MetaData[] = {
				{ "Category", "CurrentPeople" },
				{ "ModuleRelativePath", "HeadsUpDisplay.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WorkforceEffectivenessPenalty = { UE4CodeGen_Private::EPropertyClass::Float, "WorkforceEffectivenessPenalty", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AHeadsUpDisplay, WorkforceEffectivenessPenalty), METADATA_PARAMS(NewProp_WorkforceEffectivenessPenalty_MetaData, ARRAY_COUNT(NewProp_WorkforceEffectivenessPenalty_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CashEffectivenessPenalty_MetaData[] = {
				{ "Category", "CurrentCash" },
				{ "ModuleRelativePath", "HeadsUpDisplay.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CashEffectivenessPenalty = { UE4CodeGen_Private::EPropertyClass::Float, "CashEffectivenessPenalty", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AHeadsUpDisplay, CashEffectivenessPenalty), METADATA_PARAMS(NewProp_CashEffectivenessPenalty_MetaData, ARRAY_COUNT(NewProp_CashEffectivenessPenalty_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjMaterialVal_MetaData[] = {
				{ "Category", "CurrentMoney" },
				{ "ModuleRelativePath", "HeadsUpDisplay.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ProjMaterialVal = { UE4CodeGen_Private::EPropertyClass::Float, "ProjMaterialVal", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AHeadsUpDisplay, ProjMaterialVal), METADATA_PARAMS(NewProp_ProjMaterialVal_MetaData, ARRAY_COUNT(NewProp_ProjMaterialVal_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjPowerVal_MetaData[] = {
				{ "Category", "CurrentPower" },
				{ "ModuleRelativePath", "HeadsUpDisplay.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ProjPowerVal = { UE4CodeGen_Private::EPropertyClass::Float, "ProjPowerVal", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AHeadsUpDisplay, ProjPowerVal), METADATA_PARAMS(NewProp_ProjPowerVal_MetaData, ARRAY_COUNT(NewProp_ProjPowerVal_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjWorkforceVal_MetaData[] = {
				{ "Category", "CurrentPeople" },
				{ "ModuleRelativePath", "HeadsUpDisplay.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ProjWorkforceVal = { UE4CodeGen_Private::EPropertyClass::Float, "ProjWorkforceVal", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AHeadsUpDisplay, ProjWorkforceVal), METADATA_PARAMS(NewProp_ProjWorkforceVal_MetaData, ARRAY_COUNT(NewProp_ProjWorkforceVal_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjCashVal_MetaData[] = {
				{ "Category", "CurrentCash" },
				{ "ModuleRelativePath", "HeadsUpDisplay.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ProjCashVal = { UE4CodeGen_Private::EPropertyClass::Float, "ProjCashVal", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AHeadsUpDisplay, ProjCashVal), METADATA_PARAMS(NewProp_ProjCashVal_MetaData, ARRAY_COUNT(NewProp_ProjCashVal_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentMaterialVal_MetaData[] = {
				{ "Category", "CurrentMoney" },
				{ "ModuleRelativePath", "HeadsUpDisplay.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentMaterialVal = { UE4CodeGen_Private::EPropertyClass::Float, "CurrentMaterialVal", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AHeadsUpDisplay, CurrentMaterialVal), METADATA_PARAMS(NewProp_CurrentMaterialVal_MetaData, ARRAY_COUNT(NewProp_CurrentMaterialVal_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentPowerVal_MetaData[] = {
				{ "Category", "CurrentPower" },
				{ "ModuleRelativePath", "HeadsUpDisplay.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentPowerVal = { UE4CodeGen_Private::EPropertyClass::Float, "CurrentPowerVal", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AHeadsUpDisplay, CurrentPowerVal), METADATA_PARAMS(NewProp_CurrentPowerVal_MetaData, ARRAY_COUNT(NewProp_CurrentPowerVal_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentWorkforceVal_MetaData[] = {
				{ "Category", "CurrentPeople" },
				{ "ModuleRelativePath", "HeadsUpDisplay.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentWorkforceVal = { UE4CodeGen_Private::EPropertyClass::Float, "CurrentWorkforceVal", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AHeadsUpDisplay, CurrentWorkforceVal), METADATA_PARAMS(NewProp_CurrentWorkforceVal_MetaData, ARRAY_COUNT(NewProp_CurrentWorkforceVal_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentCashVal_MetaData[] = {
				{ "Category", "CurrentCash" },
				{ "ModuleRelativePath", "HeadsUpDisplay.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentCashVal = { UE4CodeGen_Private::EPropertyClass::Float, "CurrentCashVal", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AHeadsUpDisplay, CurrentCashVal), METADATA_PARAMS(NewProp_CurrentCashVal_MetaData, ARRAY_COUNT(NewProp_CurrentCashVal_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InfCheck,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_InfCheck_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EnvCheck,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EnvCheck_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FWCheck,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_FWCheck_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EnergyCheck,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_EnergyCheck_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PeopleCheck,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PeopleCheck_Inner,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CurrentHealthSafetyVal,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CurrentEconomyVal,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CurrentPopulationVal,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CurrentRoadVal,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CurrentMoraleVal,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ProjHealthSafetyVal,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ProjEconomyVal,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ProjPopulationVal,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ProjRoadVal,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ProjMoraleVal,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaterialGainPenalty,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PowerGainPenalty,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WorkforceGainPenalty,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CashGainPenalty,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_MaterialEffectivenessPenalty,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PowerEffectivenessPenalty,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_WorkforceEffectivenessPenalty,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CashEffectivenessPenalty,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ProjMaterialVal,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ProjPowerVal,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ProjWorkforceVal,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_ProjCashVal,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CurrentMaterialVal,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CurrentPowerVal,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CurrentWorkforceVal,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CurrentCashVal,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AHeadsUpDisplay>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AHeadsUpDisplay::StaticClass,
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
	IMPLEMENT_CLASS(AHeadsUpDisplay, 3664033366);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHeadsUpDisplay(Z_Construct_UClass_AHeadsUpDisplay, &AHeadsUpDisplay::StaticClass, TEXT("/Script/FinalHUDTest"), TEXT("AHeadsUpDisplay"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHeadsUpDisplay);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
