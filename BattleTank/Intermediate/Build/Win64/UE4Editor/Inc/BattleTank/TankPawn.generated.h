// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BATTLETANK_TankPawn_generated_h
#error "TankPawn.generated.h already included, missing '#pragma once' in TankPawn.h"
#endif
#define BATTLETANK_TankPawn_generated_h

#define BattleTank_Source_BattleTank_Public_TankPawn_h_10_DELEGATE \
static inline void FTankDelegate_DelegateWrapper(const FMulticastScriptDelegate& TankDelegate) \
{ \
	TankDelegate.ProcessMulticastDelegate<UObject>(NULL); \
}


#define BattleTank_Source_BattleTank_Public_TankPawn_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetHealthPercent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetHealthPercent(); \
		P_NATIVE_END; \
	}


#define BattleTank_Source_BattleTank_Public_TankPawn_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetHealthPercent) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=this->GetHealthPercent(); \
		P_NATIVE_END; \
	}


#define BattleTank_Source_BattleTank_Public_TankPawn_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATankPawn(); \
	friend BATTLETANK_API class UClass* Z_Construct_UClass_ATankPawn(); \
public: \
	DECLARE_CLASS(ATankPawn, APawn, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/BattleTank"), NO_API) \
	DECLARE_SERIALIZER(ATankPawn) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define BattleTank_Source_BattleTank_Public_TankPawn_h_15_INCLASS \
private: \
	static void StaticRegisterNativesATankPawn(); \
	friend BATTLETANK_API class UClass* Z_Construct_UClass_ATankPawn(); \
public: \
	DECLARE_CLASS(ATankPawn, APawn, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/BattleTank"), NO_API) \
	DECLARE_SERIALIZER(ATankPawn) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define BattleTank_Source_BattleTank_Public_TankPawn_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATankPawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATankPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATankPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATankPawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATankPawn(ATankPawn&&); \
	NO_API ATankPawn(const ATankPawn&); \
public:


#define BattleTank_Source_BattleTank_Public_TankPawn_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATankPawn(ATankPawn&&); \
	NO_API ATankPawn(const ATankPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATankPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATankPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATankPawn)


#define BattleTank_Source_BattleTank_Public_TankPawn_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__StartingHealth() { return STRUCT_OFFSET(ATankPawn, StartingHealth); } \
	FORCEINLINE static uint32 __PPO__CurrentHealth() { return STRUCT_OFFSET(ATankPawn, CurrentHealth); }


#define BattleTank_Source_BattleTank_Public_TankPawn_h_12_PROLOG
#define BattleTank_Source_BattleTank_Public_TankPawn_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BattleTank_Source_BattleTank_Public_TankPawn_h_15_PRIVATE_PROPERTY_OFFSET \
	BattleTank_Source_BattleTank_Public_TankPawn_h_15_RPC_WRAPPERS \
	BattleTank_Source_BattleTank_Public_TankPawn_h_15_INCLASS \
	BattleTank_Source_BattleTank_Public_TankPawn_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BattleTank_Source_BattleTank_Public_TankPawn_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BattleTank_Source_BattleTank_Public_TankPawn_h_15_PRIVATE_PROPERTY_OFFSET \
	BattleTank_Source_BattleTank_Public_TankPawn_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	BattleTank_Source_BattleTank_Public_TankPawn_h_15_INCLASS_NO_PURE_DECLS \
	BattleTank_Source_BattleTank_Public_TankPawn_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BattleTank_Source_BattleTank_Public_TankPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
