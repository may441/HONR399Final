// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ALocalGovActor;
#ifdef FINALHUDTEST_HeadsUpDisplay_generated_h
#error "HeadsUpDisplay.generated.h already included, missing '#pragma once' in HeadsUpDisplay.h"
#endif
#define FINALHUDTEST_HeadsUpDisplay_generated_h

#define FinalHUDTest_Source_FinalHUDTest_HeadsUpDisplay_h_113_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUpdateProjectedValues) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->UpdateProjectedValues(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateCurrentVals) \
	{ \
		P_GET_OBJECT(ALocalGovActor,Z_Param_localGovActions); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->UpdateCurrentVals(Z_Param_localGovActions); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTaskIDStatus) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_taskID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->GetTaskIDStatus(Z_Param_taskID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTaskActivity) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_activityID); \
		P_GET_UBOOL(Z_Param_enable); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetTaskActivity(Z_Param_activityID,Z_Param_enable); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHealthSafetyVal) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetHealthSafetyVal(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPopulationVal) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetPopulationVal(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRoadsVal) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetRoadsVal(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetEconomyVal) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetEconomyVal(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMoraleVal) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetMoraleVal(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetProjectedMaterialVal) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetProjectedMaterialVal(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetProjectedWorkforceVal) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetProjectedWorkforceVal(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetProjectedPowerVal) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetProjectedPowerVal(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetProjectedCashVal) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetProjectedCashVal(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentMaterialVal) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetCurrentMaterialVal(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentWorkforceVal) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetCurrentWorkforceVal(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentPowerVal) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetCurrentPowerVal(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentCashVal) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetCurrentCashVal(); \
		P_NATIVE_END; \
	}


#define FinalHUDTest_Source_FinalHUDTest_HeadsUpDisplay_h_113_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUpdateProjectedValues) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->UpdateProjectedValues(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateCurrentVals) \
	{ \
		P_GET_OBJECT(ALocalGovActor,Z_Param_localGovActions); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->UpdateCurrentVals(Z_Param_localGovActions); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTaskIDStatus) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_taskID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->GetTaskIDStatus(Z_Param_taskID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTaskActivity) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_activityID); \
		P_GET_UBOOL(Z_Param_enable); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetTaskActivity(Z_Param_activityID,Z_Param_enable); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHealthSafetyVal) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetHealthSafetyVal(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPopulationVal) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetPopulationVal(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRoadsVal) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetRoadsVal(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetEconomyVal) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetEconomyVal(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMoraleVal) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetMoraleVal(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetProjectedMaterialVal) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetProjectedMaterialVal(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetProjectedWorkforceVal) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetProjectedWorkforceVal(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetProjectedPowerVal) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetProjectedPowerVal(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetProjectedCashVal) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetProjectedCashVal(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentMaterialVal) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetCurrentMaterialVal(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentWorkforceVal) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetCurrentWorkforceVal(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentPowerVal) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetCurrentPowerVal(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentCashVal) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetCurrentCashVal(); \
		P_NATIVE_END; \
	}


#define FinalHUDTest_Source_FinalHUDTest_HeadsUpDisplay_h_113_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHeadsUpDisplay(); \
	friend FINALHUDTEST_API class UClass* Z_Construct_UClass_AHeadsUpDisplay(); \
public: \
	DECLARE_CLASS(AHeadsUpDisplay, APawn, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/FinalHUDTest"), NO_API) \
	DECLARE_SERIALIZER(AHeadsUpDisplay) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define FinalHUDTest_Source_FinalHUDTest_HeadsUpDisplay_h_113_INCLASS \
private: \
	static void StaticRegisterNativesAHeadsUpDisplay(); \
	friend FINALHUDTEST_API class UClass* Z_Construct_UClass_AHeadsUpDisplay(); \
public: \
	DECLARE_CLASS(AHeadsUpDisplay, APawn, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/FinalHUDTest"), NO_API) \
	DECLARE_SERIALIZER(AHeadsUpDisplay) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define FinalHUDTest_Source_FinalHUDTest_HeadsUpDisplay_h_113_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AHeadsUpDisplay(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHeadsUpDisplay) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHeadsUpDisplay); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHeadsUpDisplay); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHeadsUpDisplay(AHeadsUpDisplay&&); \
	NO_API AHeadsUpDisplay(const AHeadsUpDisplay&); \
public:


#define FinalHUDTest_Source_FinalHUDTest_HeadsUpDisplay_h_113_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHeadsUpDisplay(AHeadsUpDisplay&&); \
	NO_API AHeadsUpDisplay(const AHeadsUpDisplay&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHeadsUpDisplay); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHeadsUpDisplay); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AHeadsUpDisplay)


#define FinalHUDTest_Source_FinalHUDTest_HeadsUpDisplay_h_113_PRIVATE_PROPERTY_OFFSET
#define FinalHUDTest_Source_FinalHUDTest_HeadsUpDisplay_h_110_PROLOG
#define FinalHUDTest_Source_FinalHUDTest_HeadsUpDisplay_h_113_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FinalHUDTest_Source_FinalHUDTest_HeadsUpDisplay_h_113_PRIVATE_PROPERTY_OFFSET \
	FinalHUDTest_Source_FinalHUDTest_HeadsUpDisplay_h_113_RPC_WRAPPERS \
	FinalHUDTest_Source_FinalHUDTest_HeadsUpDisplay_h_113_INCLASS \
	FinalHUDTest_Source_FinalHUDTest_HeadsUpDisplay_h_113_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FinalHUDTest_Source_FinalHUDTest_HeadsUpDisplay_h_113_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FinalHUDTest_Source_FinalHUDTest_HeadsUpDisplay_h_113_PRIVATE_PROPERTY_OFFSET \
	FinalHUDTest_Source_FinalHUDTest_HeadsUpDisplay_h_113_RPC_WRAPPERS_NO_PURE_DECLS \
	FinalHUDTest_Source_FinalHUDTest_HeadsUpDisplay_h_113_INCLASS_NO_PURE_DECLS \
	FinalHUDTest_Source_FinalHUDTest_HeadsUpDisplay_h_113_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FinalHUDTest_Source_FinalHUDTest_HeadsUpDisplay_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
