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
	FINALHUDTEST_API UFunction* Z_Construct_UFunction_AHeadsUpDisplay_SetTaskActivity();
// End Cross Module References
	void AHeadsUpDisplay::StaticRegisterNativesAHeadsUpDisplay()
	{
		UClass* Class = AHeadsUpDisplay::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCurrentCashVal", (Native)&AHeadsUpDisplay::execGetCurrentCashVal },
			{ "GetCurrentMaterialVal", (Native)&AHeadsUpDisplay::execGetCurrentMaterialVal },
			{ "GetCurrentPowerVal", (Native)&AHeadsUpDisplay::execGetCurrentPowerVal },
			{ "GetCurrentWorkforceVal", (Native)&AHeadsUpDisplay::execGetCurrentWorkforceVal },
			{ "SetTaskActivity", (Native)&AHeadsUpDisplay::execSetTaskActivity },
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
				{ &Z_Construct_UFunction_AHeadsUpDisplay_SetTaskActivity, "SetTaskActivity" }, // 4134828790
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Navigation" },
				{ "IncludePath", "HeadsUpDisplay.h" },
				{ "ModuleRelativePath", "HeadsUpDisplay.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentMaterialVal_MetaData[] = {
				{ "Category", "CurrentMoney" },
				{ "ModuleRelativePath", "HeadsUpDisplay.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentMaterialVal = { UE4CodeGen_Private::EPropertyClass::Float, "CurrentMaterialVal", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000001, 1, nullptr, STRUCT_OFFSET(AHeadsUpDisplay, CurrentMaterialVal), METADATA_PARAMS(NewProp_CurrentMaterialVal_MetaData, ARRAY_COUNT(NewProp_CurrentMaterialVal_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentPowerVal_MetaData[] = {
				{ "Category", "CurrentPower" },
				{ "ModuleRelativePath", "HeadsUpDisplay.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentPowerVal = { UE4CodeGen_Private::EPropertyClass::Float, "CurrentPowerVal", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000001, 1, nullptr, STRUCT_OFFSET(AHeadsUpDisplay, CurrentPowerVal), METADATA_PARAMS(NewProp_CurrentPowerVal_MetaData, ARRAY_COUNT(NewProp_CurrentPowerVal_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentWorkforceVal_MetaData[] = {
				{ "Category", "CurrentPeople" },
				{ "ModuleRelativePath", "HeadsUpDisplay.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentWorkforceVal = { UE4CodeGen_Private::EPropertyClass::Float, "CurrentWorkforceVal", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000001, 1, nullptr, STRUCT_OFFSET(AHeadsUpDisplay, CurrentWorkforceVal), METADATA_PARAMS(NewProp_CurrentWorkforceVal_MetaData, ARRAY_COUNT(NewProp_CurrentWorkforceVal_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentCashVal_MetaData[] = {
				{ "Category", "CurrentCash" },
				{ "ModuleRelativePath", "HeadsUpDisplay.h" },
			};
#endif
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentCashVal = { UE4CodeGen_Private::EPropertyClass::Float, "CurrentCashVal", RF_Public|RF_Transient|RF_MarkAsNative, 0x0040000000000001, 1, nullptr, STRUCT_OFFSET(AHeadsUpDisplay, CurrentCashVal), METADATA_PARAMS(NewProp_CurrentCashVal_MetaData, ARRAY_COUNT(NewProp_CurrentCashVal_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
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
	IMPLEMENT_CLASS(AHeadsUpDisplay, 3541816916);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHeadsUpDisplay(Z_Construct_UClass_AHeadsUpDisplay, &AHeadsUpDisplay::StaticClass, TEXT("/Script/FinalHUDTest"), TEXT("AHeadsUpDisplay"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHeadsUpDisplay);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
