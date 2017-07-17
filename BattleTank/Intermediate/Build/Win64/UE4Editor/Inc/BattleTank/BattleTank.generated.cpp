// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "BattleTank.generated.dep.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCode1BattleTank() {}
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	ENGINE_API class UClass* Z_Construct_UClass_AGameModeBase();
	ENGINE_API class UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	COREUOBJECT_API class UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API class UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_AActor();
	ENGINE_API class UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_APawn();
	AIMODULE_API class UClass* Z_Construct_UClass_AAIController();
	ENGINE_API class UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API class UClass* Z_Construct_UClass_UStaticMeshComponent();
	ENGINE_API class UClass* Z_Construct_UClass_UNavMovementComponent();
	ENGINE_API class UClass* Z_Construct_UClass_APlayerController();

	BATTLETANK_API class UClass* Z_Construct_UClass_ABattleTankGameModeBase_NoRegister();
	BATTLETANK_API class UClass* Z_Construct_UClass_ABattleTankGameModeBase();
	BATTLETANK_API class UFunction* Z_Construct_UFunction_AProjectile_OnHit();
	BATTLETANK_API class UClass* Z_Construct_UClass_AProjectile_NoRegister();
	BATTLETANK_API class UClass* Z_Construct_UClass_AProjectile();
	BATTLETANK_API class UClass* Z_Construct_UClass_ATank_NoRegister();
	BATTLETANK_API class UClass* Z_Construct_UClass_ATank();
	BATTLETANK_API class UClass* Z_Construct_UClass_ATankAIController1_NoRegister();
	BATTLETANK_API class UClass* Z_Construct_UClass_ATankAIController1();
	BATTLETANK_API class UEnum* Z_Construct_UEnum_BattleTank_EFiringStatus();
	BATTLETANK_API class UFunction* Z_Construct_UFunction_UTankAimingComponent_Fire();
	BATTLETANK_API class UFunction* Z_Construct_UFunction_UTankAimingComponent_GetRoundsLeft();
	BATTLETANK_API class UFunction* Z_Construct_UFunction_UTankAimingComponent_Initialise();
	BATTLETANK_API class UClass* Z_Construct_UClass_UTankAimingComponent_NoRegister();
	BATTLETANK_API class UClass* Z_Construct_UClass_UTankAimingComponent();
	BATTLETANK_API class UClass* Z_Construct_UClass_UTankBarrel_NoRegister();
	BATTLETANK_API class UClass* Z_Construct_UClass_UTankBarrel();
	BATTLETANK_API class UFunction* Z_Construct_UFunction_UTankTrack_OnHit();
	BATTLETANK_API class UFunction* Z_Construct_UFunction_UTankTrack_SetThrottle();
	BATTLETANK_API class UClass* Z_Construct_UClass_UTankTrack_NoRegister();
	BATTLETANK_API class UClass* Z_Construct_UClass_UTankTrack();
	BATTLETANK_API class UFunction* Z_Construct_UFunction_UTankMovementComponent_Initialise();
	BATTLETANK_API class UFunction* Z_Construct_UFunction_UTankMovementComponent_IntendMoveForward();
	BATTLETANK_API class UFunction* Z_Construct_UFunction_UTankMovementComponent_IntendTurnRight();
	BATTLETANK_API class UClass* Z_Construct_UClass_UTankMovementComponent_NoRegister();
	BATTLETANK_API class UClass* Z_Construct_UClass_UTankMovementComponent();
	BATTLETANK_API class UClass* Z_Construct_UClass_ATankPawn_NoRegister();
	BATTLETANK_API class UClass* Z_Construct_UClass_ATankPawn();
	BATTLETANK_API class UFunction* Z_Construct_UFunction_ATankPlayerController_FoundAimingComponent();
	BATTLETANK_API class UClass* Z_Construct_UClass_ATankPlayerController_NoRegister();
	BATTLETANK_API class UClass* Z_Construct_UClass_ATankPlayerController();
	BATTLETANK_API class UClass* Z_Construct_UClass_UTankTurret_NoRegister();
	BATTLETANK_API class UClass* Z_Construct_UClass_UTankTurret();
	BATTLETANK_API class UPackage* Z_Construct_UPackage__Script_BattleTank();
	void ABattleTankGameModeBase::StaticRegisterNativesABattleTankGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ABattleTankGameModeBase_NoRegister()
	{
		return ABattleTankGameModeBase::StaticClass();
	}
	UClass* Z_Construct_UClass_ABattleTankGameModeBase()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AGameModeBase();
			Z_Construct_UPackage__Script_BattleTank();
			OuterClass = ABattleTankGameModeBase::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900288;


				static TCppClassTypeInfo<TCppClassTypeTraits<ABattleTankGameModeBase> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("BattleTankGameModeBase.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("BattleTankGameModeBase.h"));
				MetaData->SetValue(OuterClass, TEXT("ShowCategories"), TEXT("Input|MouseInput Input|TouchInput"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABattleTankGameModeBase, 2579875846);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABattleTankGameModeBase(Z_Construct_UClass_ABattleTankGameModeBase, &ABattleTankGameModeBase::StaticClass, TEXT("/Script/BattleTank"), TEXT("ABattleTankGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABattleTankGameModeBase);
	void AProjectile::StaticRegisterNativesAProjectile()
	{
		UClass* Class = AProjectile::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "OnHit", (Native)&AProjectile::execOnHit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, 1);
	}
	UFunction* Z_Construct_UFunction_AProjectile_OnHit()
	{
		struct Projectile_eventOnHit_Parms
		{
			UPrimitiveComponent* HitComponent;
			AActor* OtherActor;
			UPrimitiveComponent* otherComponent;
			FVector NormalImpulse;
			FHitResult Hit;
		};
		UObject* Outer=Z_Construct_UClass_AProjectile();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnHit"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x00C40401, 65535, sizeof(Projectile_eventOnHit_Parms));
			UProperty* NewProp_Hit = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Hit"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Hit, Projectile_eventOnHit_Parms), 0x0010008008000182, Z_Construct_UScriptStruct_FHitResult());
			UProperty* NewProp_NormalImpulse = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("NormalImpulse"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(NormalImpulse, Projectile_eventOnHit_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_otherComponent = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("otherComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(otherComponent, Projectile_eventOnHit_Parms), 0x0010000000080080, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
			UProperty* NewProp_OtherActor = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OtherActor"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OtherActor, Projectile_eventOnHit_Parms), 0x0010000000000080, Z_Construct_UClass_AActor_NoRegister());
			UProperty* NewProp_HitComponent = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("HitComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(HitComponent, Projectile_eventOnHit_Parms), 0x0010000000080080, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/Projectile.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Sets default values for this actor's properties"));
			MetaData->SetValue(NewProp_Hit, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_otherComponent, TEXT("EditInline"), TEXT("true"));
			MetaData->SetValue(NewProp_HitComponent, TEXT("EditInline"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AProjectile_NoRegister()
	{
		return AProjectile::StaticClass();
	}
	UClass* Z_Construct_UClass_AProjectile()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_BattleTank();
			OuterClass = AProjectile::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;

				OuterClass->LinkChild(Z_Construct_UFunction_AProjectile_OnHit());

PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_ImpactBlast = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ImpactBlast"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(ImpactBlast, AProjectile), 0x00200800000a0009, Z_Construct_UClass_UParticleSystemComponent_NoRegister());
				UProperty* NewProp_PS = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("PS"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(PS, AProjectile), 0x00200800000a0009, Z_Construct_UClass_UParticleSystemComponent_NoRegister());
				UProperty* NewProp_CollisionMesh = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CollisionMesh"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(CollisionMesh, AProjectile), 0x00200800000a0009, Z_Construct_UClass_UStaticMeshComponent_NoRegister());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_AProjectile_OnHit(), "OnHit"); // 1875060759
				static TCppClassTypeInfo<TCppClassTypeTraits<AProjectile> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Projectile.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/Projectile.h"));
				MetaData->SetValue(NewProp_ImpactBlast, TEXT("Category"), TEXT("Components"));
				MetaData->SetValue(NewProp_ImpactBlast, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_ImpactBlast, TEXT("ModuleRelativePath"), TEXT("Public/Projectile.h"));
				MetaData->SetValue(NewProp_PS, TEXT("Category"), TEXT("Components"));
				MetaData->SetValue(NewProp_PS, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_PS, TEXT("ModuleRelativePath"), TEXT("Public/Projectile.h"));
				MetaData->SetValue(NewProp_CollisionMesh, TEXT("Category"), TEXT("Components"));
				MetaData->SetValue(NewProp_CollisionMesh, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_CollisionMesh, TEXT("ModuleRelativePath"), TEXT("Public/Projectile.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AProjectile, 4036599264);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AProjectile(Z_Construct_UClass_AProjectile, &AProjectile::StaticClass, TEXT("/Script/BattleTank"), TEXT("AProjectile"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProjectile);
	void ATank::StaticRegisterNativesATank()
	{
	}
	UClass* Z_Construct_UClass_ATank_NoRegister()
	{
		return ATank::StaticClass();
	}
	UClass* Z_Construct_UClass_ATank()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_APawn();
			Z_Construct_UPackage__Script_BattleTank();
			OuterClass = ATank::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;


				static TCppClassTypeInfo<TCppClassTypeTraits<ATank> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Navigation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Tank.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Tank.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATank, 1164007339);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATank(Z_Construct_UClass_ATank, &ATank::StaticClass, TEXT("/Script/BattleTank"), TEXT("ATank"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATank);
	void ATankAIController1::StaticRegisterNativesATankAIController1()
	{
	}
	UClass* Z_Construct_UClass_ATankAIController1_NoRegister()
	{
		return ATankAIController1::StaticClass();
	}
	UClass* Z_Construct_UClass_ATankAIController1()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AAIController();
			Z_Construct_UPackage__Script_BattleTank();
			OuterClass = ATankAIController1::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900280;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_AcceptanceRadius = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("AcceptanceRadius"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(AcceptanceRadius, ATankAIController1), 0x0020080000000001);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				static TCppClassTypeInfo<TCppClassTypeTraits<ATankAIController1> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Collision Rendering Utilities|Transformation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("TankAIController1.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/TankAIController1.h"));
				MetaData->SetValue(NewProp_AcceptanceRadius, TEXT("Category"), TEXT("Setup"));
				MetaData->SetValue(NewProp_AcceptanceRadius, TEXT("ModuleRelativePath"), TEXT("Public/TankAIController1.h"));
				MetaData->SetValue(NewProp_AcceptanceRadius, TEXT("ToolTip"), TEXT("consider EditDefaultsOnly"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATankAIController1, 4067625870);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATankAIController1(Z_Construct_UClass_ATankAIController1, &ATankAIController1::StaticClass, TEXT("/Script/BattleTank"), TEXT("ATankAIController1"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATankAIController1);
static UEnum* EFiringStatus_StaticEnum()
{
	extern BATTLETANK_API class UPackage* Z_Construct_UPackage__Script_BattleTank();
	static UEnum* Singleton = nullptr;
	if (!Singleton)
	{
		extern BATTLETANK_API class UEnum* Z_Construct_UEnum_BattleTank_EFiringStatus();
		Singleton = GetStaticEnum(Z_Construct_UEnum_BattleTank_EFiringStatus, Z_Construct_UPackage__Script_BattleTank(), TEXT("EFiringStatus"));
	}
	return Singleton;
}
static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EFiringStatus(EFiringStatus_StaticEnum, TEXT("/Script/BattleTank"), TEXT("EFiringStatus"), false, nullptr, nullptr);
	UEnum* Z_Construct_UEnum_BattleTank_EFiringStatus()
	{
		UPackage* Outer=Z_Construct_UPackage__Script_BattleTank();
		extern uint32 Get_Z_Construct_UEnum_BattleTank_EFiringStatus_CRC();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EFiringStatus"), 0, Get_Z_Construct_UEnum_BattleTank_EFiringStatus_CRC(), false);
		if (!ReturnEnum)
		{
			ReturnEnum = new(EC_InternalUseOnlyConstructor, Outer, TEXT("EFiringStatus"), RF_Public|RF_Transient|RF_MarkAsNative) UEnum(FObjectInitializer());
			TArray<TPair<FName, int64>> EnumNames;
			EnumNames.Emplace(TEXT("EFiringStatus::Locked"), 0);
			EnumNames.Emplace(TEXT("EFiringStatus::Reloading"), 1);
			EnumNames.Emplace(TEXT("EFiringStatus::Aiming"), 2);
			EnumNames.Emplace(TEXT("EFiringStatus::OutOfAmmo"), 3);
			EnumNames.Emplace(TEXT("EFiringStatus::EFiringStatus_MAX"), 4);
			ReturnEnum->SetEnums(EnumNames, UEnum::ECppForm::EnumClass);
			ReturnEnum->CppType = TEXT("EFiringStatus");
#if WITH_METADATA
			UMetaData* MetaData = ReturnEnum->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnEnum, TEXT("ModuleRelativePath"), TEXT("Public/TankAimingComponent.h"));
#endif
		}
		return ReturnEnum;
	}
	uint32 Get_Z_Construct_UEnum_BattleTank_EFiringStatus_CRC() { return 3992222416U; }
	void UTankAimingComponent::StaticRegisterNativesUTankAimingComponent()
	{
		UClass* Class = UTankAimingComponent::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "Fire", (Native)&UTankAimingComponent::execFire },
			{ "GetRoundsLeft", (Native)&UTankAimingComponent::execGetRoundsLeft },
			{ "Initialise", (Native)&UTankAimingComponent::execInitialise },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, 3);
	}
	UFunction* Z_Construct_UFunction_UTankAimingComponent_Fire()
	{
		UObject* Outer=Z_Construct_UClass_UTankAimingComponent();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("Fire"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Firing"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/TankAimingComponent.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UTankAimingComponent_GetRoundsLeft()
	{
		struct TankAimingComponent_eventGetRoundsLeft_Parms
		{
			int32 ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_UTankAimingComponent();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetRoundsLeft"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x54080401, 65535, sizeof(TankAimingComponent_eventGetRoundsLeft_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(ReturnValue, TankAimingComponent_eventGetRoundsLeft_Parms), 0x0010000000000580);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Firing"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/TankAimingComponent.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UTankAimingComponent_Initialise()
	{
		struct TankAimingComponent_eventInitialise_Parms
		{
			UTankBarrel* BarrelToSet;
			UTankTurret* TurretToSet;
		};
		UObject* Outer=Z_Construct_UClass_UTankAimingComponent();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("Initialise"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535, sizeof(TankAimingComponent_eventInitialise_Parms));
			UProperty* NewProp_TurretToSet = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("TurretToSet"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(TurretToSet, TankAimingComponent_eventInitialise_Parms), 0x0010000000080080, Z_Construct_UClass_UTankTurret_NoRegister());
			UProperty* NewProp_BarrelToSet = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("BarrelToSet"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(BarrelToSet, TankAimingComponent_eventInitialise_Parms), 0x0010000000080080, Z_Construct_UClass_UTankBarrel_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Input"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/TankAimingComponent.h"));
			MetaData->SetValue(NewProp_TurretToSet, TEXT("EditInline"), TEXT("true"));
			MetaData->SetValue(NewProp_BarrelToSet, TEXT("EditInline"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTankAimingComponent_NoRegister()
	{
		return UTankAimingComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UTankAimingComponent()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UActorComponent();
			Z_Construct_UPackage__Script_BattleTank();
			OuterClass = UTankAimingComponent::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20B00080;

				OuterClass->LinkChild(Z_Construct_UFunction_UTankAimingComponent_Fire());
				OuterClass->LinkChild(Z_Construct_UFunction_UTankAimingComponent_GetRoundsLeft());
				OuterClass->LinkChild(Z_Construct_UFunction_UTankAimingComponent_Initialise());

PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_RoundsLeft = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("RoundsLeft"), RF_Public|RF_Transient|RF_MarkAsNative) UIntProperty(CPP_PROPERTY_BASE(RoundsLeft, UTankAimingComponent), 0x0040000000010001);
				UProperty* NewProp_LaunchSpeed = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("LaunchSpeed"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(LaunchSpeed, UTankAimingComponent), 0x0040000000000001);
				UProperty* NewProp_FiringState = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("FiringState"), RF_Public|RF_Transient|RF_MarkAsNative) UEnumProperty(CPP_PROPERTY_BASE(FiringState, UTankAimingComponent), 0x0020080000000014, Z_Construct_UEnum_BattleTank_EFiringStatus());
				UProperty* NewProp_FiringState_Underlying = new(EC_InternalUseOnlyConstructor, NewProp_FiringState, TEXT("UnderlyingType"), RF_Public|RF_Transient|RF_MarkAsNative) UByteProperty(FObjectInitializer(), EC_CppProperty, 0, 0x0000000000000000);
				UProperty* NewProp_ReloadTimeInSeconds = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("ReloadTimeInSeconds"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(ReloadTimeInSeconds, UTankAimingComponent), 0x0010000000000001);
				UProperty* NewProp_PorjectileBP = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("PorjectileBP"), RF_Public|RF_Transient|RF_MarkAsNative) UClassProperty(CPP_PROPERTY_BASE(PorjectileBP, UTankAimingComponent), 0x0014000000000001, Z_Construct_UClass_AProjectile_NoRegister(), UClass::StaticClass());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UTankAimingComponent_Fire(), "Fire"); // 3453538568
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UTankAimingComponent_GetRoundsLeft(), "GetRoundsLeft"); // 540332672
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UTankAimingComponent_Initialise(), "Initialise"); // 1148981797
				static TCppClassTypeInfo<TCppClassTypeTraits<UTankAimingComponent> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintSpawnableComponent"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("ClassGroupNames"), TEXT("Custom"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("TankAimingComponent.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/TankAimingComponent.h"));
				MetaData->SetValue(OuterClass, TEXT("ToolTip"), TEXT("Holds barrel's properties and Elevate method"));
				MetaData->SetValue(NewProp_RoundsLeft, TEXT("Category"), TEXT("Firing"));
				MetaData->SetValue(NewProp_RoundsLeft, TEXT("ModuleRelativePath"), TEXT("Public/TankAimingComponent.h"));
				MetaData->SetValue(NewProp_LaunchSpeed, TEXT("Category"), TEXT("Firing"));
				MetaData->SetValue(NewProp_LaunchSpeed, TEXT("ModuleRelativePath"), TEXT("Public/TankAimingComponent.h"));
				MetaData->SetValue(NewProp_FiringState, TEXT("Category"), TEXT("State"));
				MetaData->SetValue(NewProp_FiringState, TEXT("ModuleRelativePath"), TEXT("Public/TankAimingComponent.h"));
				MetaData->SetValue(NewProp_ReloadTimeInSeconds, TEXT("Category"), TEXT("Firing"));
				MetaData->SetValue(NewProp_ReloadTimeInSeconds, TEXT("ModuleRelativePath"), TEXT("Public/TankAimingComponent.h"));
				MetaData->SetValue(NewProp_PorjectileBP, TEXT("Category"), TEXT("Setup"));
				MetaData->SetValue(NewProp_PorjectileBP, TEXT("ModuleRelativePath"), TEXT("Public/TankAimingComponent.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTankAimingComponent, 2271236762);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTankAimingComponent(Z_Construct_UClass_UTankAimingComponent, &UTankAimingComponent::StaticClass, TEXT("/Script/BattleTank"), TEXT("UTankAimingComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTankAimingComponent);
	void UTankBarrel::StaticRegisterNativesUTankBarrel()
	{
	}
	UClass* Z_Construct_UClass_UTankBarrel_NoRegister()
	{
		return UTankBarrel::StaticClass();
	}
	UClass* Z_Construct_UClass_UTankBarrel()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UStaticMeshComponent();
			Z_Construct_UPackage__Script_BattleTank();
			OuterClass = UTankBarrel::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20B01080;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_MinElevationDegrees = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("MinElevationDegrees"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(MinElevationDegrees, UTankBarrel), 0x0040000000000001);
				UProperty* NewProp_MaxElevationDegrees = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("MaxElevationDegrees"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(MaxElevationDegrees, UTankBarrel), 0x0040000000000001);
				UProperty* NewProp_MaxDegreesPerSecond = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("MaxDegreesPerSecond"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(MaxDegreesPerSecond, UTankBarrel), 0x0040000000000001);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				static TCppClassTypeInfo<TCppClassTypeTraits<UTankBarrel> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintSpawnableComponent"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Object Activation Components|Activation Trigger"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("TankBarrel.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/TankBarrel.h"));
				MetaData->SetValue(NewProp_MinElevationDegrees, TEXT("Category"), TEXT("TankBarrel"));
				MetaData->SetValue(NewProp_MinElevationDegrees, TEXT("ModuleRelativePath"), TEXT("Public/TankBarrel.h"));
				MetaData->SetValue(NewProp_MaxElevationDegrees, TEXT("Category"), TEXT("TankBarrel"));
				MetaData->SetValue(NewProp_MaxElevationDegrees, TEXT("ModuleRelativePath"), TEXT("Public/TankBarrel.h"));
				MetaData->SetValue(NewProp_MaxDegreesPerSecond, TEXT("Category"), TEXT("TankBarrel"));
				MetaData->SetValue(NewProp_MaxDegreesPerSecond, TEXT("ModuleRelativePath"), TEXT("Public/TankBarrel.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTankBarrel, 2003484902);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTankBarrel(Z_Construct_UClass_UTankBarrel, &UTankBarrel::StaticClass, TEXT("/Script/BattleTank"), TEXT("UTankBarrel"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTankBarrel);
	void UTankTrack::StaticRegisterNativesUTankTrack()
	{
		UClass* Class = UTankTrack::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "OnHit", (Native)&UTankTrack::execOnHit },
			{ "SetThrottle", (Native)&UTankTrack::execSetThrottle },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, 2);
	}
	UFunction* Z_Construct_UFunction_UTankTrack_OnHit()
	{
		struct TankTrack_eventOnHit_Parms
		{
			UPrimitiveComponent* HitComponent;
			AActor* OtherActor;
			UPrimitiveComponent* otherComponent;
			FVector NormalImpulse;
			FHitResult Hit;
		};
		UObject* Outer=Z_Construct_UClass_UTankTrack();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnHit"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x00C40401, 65535, sizeof(TankTrack_eventOnHit_Parms));
			UProperty* NewProp_Hit = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Hit"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(Hit, TankTrack_eventOnHit_Parms), 0x0010008008000182, Z_Construct_UScriptStruct_FHitResult());
			UProperty* NewProp_NormalImpulse = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("NormalImpulse"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(NormalImpulse, TankTrack_eventOnHit_Parms), 0x0010000000000080, Z_Construct_UScriptStruct_FVector());
			UProperty* NewProp_otherComponent = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("otherComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(otherComponent, TankTrack_eventOnHit_Parms), 0x0010000000080080, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
			UProperty* NewProp_OtherActor = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("OtherActor"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(OtherActor, TankTrack_eventOnHit_Parms), 0x0010000000000080, Z_Construct_UClass_AActor_NoRegister());
			UProperty* NewProp_HitComponent = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("HitComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(HitComponent, TankTrack_eventOnHit_Parms), 0x0010000000080080, Z_Construct_UClass_UPrimitiveComponent_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/TankTrack.h"));
			MetaData->SetValue(NewProp_Hit, TEXT("NativeConst"), TEXT(""));
			MetaData->SetValue(NewProp_otherComponent, TEXT("EditInline"), TEXT("true"));
			MetaData->SetValue(NewProp_HitComponent, TEXT("EditInline"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UTankTrack_SetThrottle()
	{
		struct TankTrack_eventSetThrottle_Parms
		{
			float Throttle;
		};
		UObject* Outer=Z_Construct_UClass_UTankTrack();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetThrottle"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535, sizeof(TankTrack_eventSetThrottle_Parms));
			UProperty* NewProp_Throttle = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Throttle"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(Throttle, TankTrack_eventSetThrottle_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Input"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/TankTrack.h"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTankTrack_NoRegister()
	{
		return UTankTrack::StaticClass();
	}
	UClass* Z_Construct_UClass_UTankTrack()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UStaticMeshComponent();
			Z_Construct_UPackage__Script_BattleTank();
			OuterClass = UTankTrack::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20B01080;

				OuterClass->LinkChild(Z_Construct_UFunction_UTankTrack_OnHit());
				OuterClass->LinkChild(Z_Construct_UFunction_UTankTrack_SetThrottle());

PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_TrackMaxDrivingForce = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("TrackMaxDrivingForce"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(TrackMaxDrivingForce, UTankTrack), 0x0010000000010001);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UTankTrack_OnHit(), "OnHit"); // 2652270880
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UTankTrack_SetThrottle(), "SetThrottle"); // 2719795409
				static TCppClassTypeInfo<TCppClassTypeTraits<UTankTrack> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintSpawnableComponent"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Object Activation Components|Activation Trigger"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("TankTrack.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/TankTrack.h"));
				MetaData->SetValue(OuterClass, TEXT("ToolTip"), TEXT("Tank Track is used to set maximun driving fore, and to apply forces to the tank."));
				MetaData->SetValue(NewProp_TrackMaxDrivingForce, TEXT("Category"), TEXT("TankTrack"));
				MetaData->SetValue(NewProp_TrackMaxDrivingForce, TEXT("ModuleRelativePath"), TEXT("Public/TankTrack.h"));
				MetaData->SetValue(NewProp_TrackMaxDrivingForce, TEXT("ToolTip"), TEXT("Max force per track, in Newtons"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTankTrack, 2353935947);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTankTrack(Z_Construct_UClass_UTankTrack, &UTankTrack::StaticClass, TEXT("/Script/BattleTank"), TEXT("UTankTrack"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTankTrack);
	void UTankMovementComponent::StaticRegisterNativesUTankMovementComponent()
	{
		UClass* Class = UTankMovementComponent::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "Initialise", (Native)&UTankMovementComponent::execInitialise },
			{ "IntendMoveForward", (Native)&UTankMovementComponent::execIntendMoveForward },
			{ "IntendTurnRight", (Native)&UTankMovementComponent::execIntendTurnRight },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, 3);
	}
	UFunction* Z_Construct_UFunction_UTankMovementComponent_Initialise()
	{
		struct TankMovementComponent_eventInitialise_Parms
		{
			UTankTrack* LeftTrackToSet;
			UTankTrack* RightTrackToSet;
		};
		UObject* Outer=Z_Construct_UClass_UTankMovementComponent();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("Initialise"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535, sizeof(TankMovementComponent_eventInitialise_Parms));
			UProperty* NewProp_RightTrackToSet = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("RightTrackToSet"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(RightTrackToSet, TankMovementComponent_eventInitialise_Parms), 0x0010000000080080, Z_Construct_UClass_UTankTrack_NoRegister());
			UProperty* NewProp_LeftTrackToSet = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("LeftTrackToSet"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(LeftTrackToSet, TankMovementComponent_eventInitialise_Parms), 0x0010000000080080, Z_Construct_UClass_UTankTrack_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Input"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/TankMovementComponent.h"));
			MetaData->SetValue(NewProp_RightTrackToSet, TEXT("EditInline"), TEXT("true"));
			MetaData->SetValue(NewProp_LeftTrackToSet, TEXT("EditInline"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UTankMovementComponent_IntendMoveForward()
	{
		struct TankMovementComponent_eventIntendMoveForward_Parms
		{
			float Throw;
		};
		UObject* Outer=Z_Construct_UClass_UTankMovementComponent();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("IntendMoveForward"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535, sizeof(TankMovementComponent_eventIntendMoveForward_Parms));
			UProperty* NewProp_Throw = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Throw"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(Throw, TankMovementComponent_eventIntendMoveForward_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Input"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/TankMovementComponent.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UTankMovementComponent_IntendTurnRight()
	{
		struct TankMovementComponent_eventIntendTurnRight_Parms
		{
			float Throw;
		};
		UObject* Outer=Z_Construct_UClass_UTankMovementComponent();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("IntendTurnRight"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535, sizeof(TankMovementComponent_eventIntendTurnRight_Parms));
			UProperty* NewProp_Throw = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("Throw"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(Throw, TankMovementComponent_eventIntendTurnRight_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Input"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/TankMovementComponent.h"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTankMovementComponent_NoRegister()
	{
		return UTankMovementComponent::StaticClass();
	}
	UClass* Z_Construct_UClass_UTankMovementComponent()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UNavMovementComponent();
			Z_Construct_UPackage__Script_BattleTank();
			OuterClass = UTankMovementComponent::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20B00084;

				OuterClass->LinkChild(Z_Construct_UFunction_UTankMovementComponent_Initialise());
				OuterClass->LinkChild(Z_Construct_UFunction_UTankMovementComponent_IntendMoveForward());
				OuterClass->LinkChild(Z_Construct_UFunction_UTankMovementComponent_IntendTurnRight());

				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UTankMovementComponent_Initialise(), "Initialise"); // 2028044563
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UTankMovementComponent_IntendMoveForward(), "IntendMoveForward"); // 604718907
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UTankMovementComponent_IntendTurnRight(), "IntendTurnRight"); // 82368049
				OuterClass->ClassConfigName = FName(TEXT("Engine"));
				static TCppClassTypeInfo<TCppClassTypeTraits<UTankMovementComponent> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintSpawnableComponent"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("TankMovementComponent.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/TankMovementComponent.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTankMovementComponent, 4094942853);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTankMovementComponent(Z_Construct_UClass_UTankMovementComponent, &UTankMovementComponent::StaticClass, TEXT("/Script/BattleTank"), TEXT("UTankMovementComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTankMovementComponent);
	void ATankPawn::StaticRegisterNativesATankPawn()
	{
	}
	UClass* Z_Construct_UClass_ATankPawn_NoRegister()
	{
		return ATankPawn::StaticClass();
	}
	UClass* Z_Construct_UClass_ATankPawn()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_APawn();
			Z_Construct_UPackage__Script_BattleTank();
			OuterClass = ATankPawn::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;


				static TCppClassTypeInfo<TCppClassTypeTraits<ATankPawn> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Navigation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("TankPawn.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/TankPawn.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATankPawn, 3722237633);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATankPawn(Z_Construct_UClass_ATankPawn, &ATankPawn::StaticClass, TEXT("/Script/BattleTank"), TEXT("ATankPawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATankPawn);
	static FName NAME_ATankPlayerController_FoundAimingComponent = FName(TEXT("FoundAimingComponent"));
	void ATankPlayerController::FoundAimingComponent(UTankAimingComponent* AimRef)
	{
		TankPlayerController_eventFoundAimingComponent_Parms Parms;
		Parms.AimRef=AimRef;
		ProcessEvent(FindFunctionChecked(NAME_ATankPlayerController_FoundAimingComponent),&Parms);
	}
	void ATankPlayerController::StaticRegisterNativesATankPlayerController()
	{
	}
	UFunction* Z_Construct_UFunction_ATankPlayerController_FoundAimingComponent()
	{
		UObject* Outer=Z_Construct_UClass_ATankPlayerController();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("FoundAimingComponent"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x08080800, 65535, sizeof(TankPlayerController_eventFoundAimingComponent_Parms));
			UProperty* NewProp_AimRef = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("AimRef"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(AimRef, TankPlayerController_eventFoundAimingComponent_Parms), 0x0010000000080080, Z_Construct_UClass_UTankAimingComponent_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Setup"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("TankPlayerController.h"));
			MetaData->SetValue(NewProp_AimRef, TEXT("EditInline"), TEXT("true"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATankPlayerController_NoRegister()
	{
		return ATankPlayerController::StaticClass();
	}
	UClass* Z_Construct_UClass_ATankPlayerController()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_APlayerController();
			Z_Construct_UPackage__Script_BattleTank();
			OuterClass = ATankPlayerController::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900284;

				OuterClass->LinkChild(Z_Construct_UFunction_ATankPlayerController_FoundAimingComponent());

PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_LineTraceRange = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("LineTraceRange"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(LineTraceRange, ATankPlayerController), 0x0040000000000001);
				UProperty* NewProp_CrosshairYLocation = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CrosshairYLocation"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(CrosshairYLocation, ATankPlayerController), 0x0040000000000001);
				UProperty* NewProp_CrosshairXLocation = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CrosshairXLocation"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(CrosshairXLocation, ATankPlayerController), 0x0040000000000001);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ATankPlayerController_FoundAimingComponent(), "FoundAimingComponent"); // 1668283234
				OuterClass->ClassConfigName = FName(TEXT("Game"));
				static TCppClassTypeInfo<TCppClassTypeTraits<ATankPlayerController> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Collision Rendering Utilities|Transformation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("TankPlayerController.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("TankPlayerController.h"));
				MetaData->SetValue(NewProp_LineTraceRange, TEXT("Category"), TEXT("TankPlayerController"));
				MetaData->SetValue(NewProp_LineTraceRange, TEXT("ModuleRelativePath"), TEXT("TankPlayerController.h"));
				MetaData->SetValue(NewProp_CrosshairYLocation, TEXT("Category"), TEXT("TankPlayerController"));
				MetaData->SetValue(NewProp_CrosshairYLocation, TEXT("ModuleRelativePath"), TEXT("TankPlayerController.h"));
				MetaData->SetValue(NewProp_CrosshairXLocation, TEXT("Category"), TEXT("TankPlayerController"));
				MetaData->SetValue(NewProp_CrosshairXLocation, TEXT("ModuleRelativePath"), TEXT("TankPlayerController.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATankPlayerController, 273003295);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATankPlayerController(Z_Construct_UClass_ATankPlayerController, &ATankPlayerController::StaticClass, TEXT("/Script/BattleTank"), TEXT("ATankPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATankPlayerController);
	void UTankTurret::StaticRegisterNativesUTankTurret()
	{
	}
	UClass* Z_Construct_UClass_UTankTurret_NoRegister()
	{
		return UTankTurret::StaticClass();
	}
	UClass* Z_Construct_UClass_UTankTurret()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UStaticMeshComponent();
			Z_Construct_UPackage__Script_BattleTank();
			OuterClass = UTankTurret::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20B01080;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_MaxDegreesPerSecond = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("MaxDegreesPerSecond"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(MaxDegreesPerSecond, UTankTurret), 0x0040000000000001);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				static TCppClassTypeInfo<TCppClassTypeTraits<UTankTurret> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("BlueprintSpawnableComponent"), TEXT(""));
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Object Activation Components|Activation Trigger"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("TankTurret.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/TankTurret.h"));
				MetaData->SetValue(NewProp_MaxDegreesPerSecond, TEXT("Category"), TEXT("TankTurret"));
				MetaData->SetValue(NewProp_MaxDegreesPerSecond, TEXT("ModuleRelativePath"), TEXT("Public/TankTurret.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTankTurret, 2695479004);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTankTurret(Z_Construct_UClass_UTankTurret, &UTankTurret::StaticClass, TEXT("/Script/BattleTank"), TEXT("UTankTurret"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTankTurret);
	UPackage* Z_Construct_UPackage__Script_BattleTank()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), nullptr, FName(TEXT("/Script/BattleTank")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000000);
			FGuid Guid;
			Guid.A = 0x57F113A7;
			Guid.B = 0xCC0B998C;
			Guid.C = 0x00000000;
			Guid.D = 0x00000000;
			ReturnPackage->SetGuid(Guid);

		}
		return ReturnPackage;
	}
#endif
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
