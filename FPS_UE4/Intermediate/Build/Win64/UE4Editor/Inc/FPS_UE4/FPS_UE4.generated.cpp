// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "FPS_UE4.h"
#include "FPS_UE4.generated.dep.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCode1FPS_UE4() {}
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	ENGINE_API class UClass* Z_Construct_UClass_AGameModeBase();

	FPS_UE4_API class UClass* Z_Construct_UClass_AFPS_UE4GameModeBase_NoRegister();
	FPS_UE4_API class UClass* Z_Construct_UClass_AFPS_UE4GameModeBase();
	FPS_UE4_API class UPackage* Z_Construct_UPackage__Script_FPS_UE4();
	void AFPS_UE4GameModeBase::StaticRegisterNativesAFPS_UE4GameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AFPS_UE4GameModeBase_NoRegister()
	{
		return AFPS_UE4GameModeBase::StaticClass();
	}
	UClass* Z_Construct_UClass_AFPS_UE4GameModeBase()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AGameModeBase();
			Z_Construct_UPackage__Script_FPS_UE4();
			OuterClass = AFPS_UE4GameModeBase::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900288;


				static TCppClassTypeInfo<TCppClassTypeTraits<AFPS_UE4GameModeBase> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("FPS_UE4GameModeBase.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("FPS_UE4GameModeBase.h"));
				MetaData->SetValue(OuterClass, TEXT("ShowCategories"), TEXT("Input|MouseInput Input|TouchInput"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFPS_UE4GameModeBase, 2972441441);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFPS_UE4GameModeBase(Z_Construct_UClass_AFPS_UE4GameModeBase, &AFPS_UE4GameModeBase::StaticClass, TEXT("/Script/FPS_UE4"), TEXT("AFPS_UE4GameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFPS_UE4GameModeBase);
	UPackage* Z_Construct_UPackage__Script_FPS_UE4()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), nullptr, FName(TEXT("/Script/FPS_UE4")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000000);
			FGuid Guid;
			Guid.A = 0xFF325F56;
			Guid.B = 0x21DFC4BE;
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
